// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

extern const VlWide<32>/*1023:0*/ Vsim__ConstPool__CONST_hd6b7ba52_0;
extern const VlWide<32>/*1023:0*/ Vsim__ConstPool__CONST_h4ae1d737_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vsim__ConstPool__TABLE_hcba7f094_0;
extern const VlUnpacked<CData/*4:0*/, 128> Vsim__ConstPool__TABLE_hadeabecd_0;
extern const VlUnpacked<CData/*0:0*/, 1024> Vsim__ConstPool__TABLE_h600b7dc4_0;
extern const VlUnpacked<CData/*7:0*/, 1024> Vsim__ConstPool__TABLE_hf7e6f533_0;

void Vsim___024root___nba_sequent__TOP__296(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__296\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*6:0*/ __Vtableidx51;
    __Vtableidx51 = 0;
    SData/*9:0*/ __Vtableidx52;
    __Vtableidx52 = 0;
    VlWide<4>/*127:0*/ __Vtemp_1;
    VlWide<32>/*1023:0*/ __Vtemp_7;
    VlWide<3>/*95:0*/ __Vtemp_12;
    VlWide<4>/*127:0*/ __Vtemp_13;
    VlWide<3>/*95:0*/ __Vtemp_14;
    VlWide<4>/*127:0*/ __Vtemp_15;
    CData/*31:0*/ __Vdeeptemp_h73d84302__0;
    CData/*31:0*/ __Vdeeptemp_hca9d9079__0;
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__is_sg_running_d1 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__sc_state)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wl_in_pvld_d1 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__wt_pop_ready_d1));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__valid_d3 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__valid_d2));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2cdma_wt_updt 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rls));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__valid_d2 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__valid_d1));
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_last_reg_en) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_rsp_bit_remain_last 
                = (0x000003ffU & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4065));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_last[0U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[0U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_last[1U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[1U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_last[2U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[2U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_last[3U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[3U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_last[4U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[4U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_last[5U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[5U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_last[6U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[6U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_last[7U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[7U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_last[8U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[8U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_last[9U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[9U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_last[0x0000000aU] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[0x0000000aU];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_last[0x0000000bU] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[0x0000000bU];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_last[0x0000000cU] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[0x0000000cU];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_last[0x0000000dU] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[0x0000000dU];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_last[0x0000000eU] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[0x0000000eU];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_last[0x0000000fU] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[0x0000000fU];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_last[0x00000010U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[0x00000010U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_last[0x00000011U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[0x00000011U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_last[0x00000012U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[0x00000012U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_last[0x00000013U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[0x00000013U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_last[0x00000014U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[0x00000014U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_last[0x00000015U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[0x00000015U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_last[0x00000016U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[0x00000016U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_last[0x00000017U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[0x00000017U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_last[0x00000018U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[0x00000018U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_last[0x00000019U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[0x00000019U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_last[0x0000001aU] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[0x0000001aU];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_last[0x0000001bU] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[0x0000001bU];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_last[0x0000001cU] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[0x0000001cU];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_last[0x0000001dU] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[0x0000001dU];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_last[0x0000001eU] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[0x0000001eU];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_last[0x0000001fU] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[0x0000001fU];
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__addr_init) 
             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4422))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_addr_last 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_addr_w;
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__layer_st) 
             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4078))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_byte_remain_last 
                = (0x0000007fU & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4077));
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__layer_st) 
             | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4062) 
                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4064)))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_element_avl_last 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_element_avl_w;
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__layer_st) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sub_h_total 
                = (7U & (((IData)(9U) << (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__reg2dp_y_extension)) 
                         >> 3U));
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__layer_st) 
             | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4062))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_element_avl 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_element_avl_w;
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__layer_st) 
             | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_pipe_valid))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__stripe_cnt 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__stripe_cnt_w;
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__layer_st) 
             | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_pipe_valid))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_byte_avl 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_byte_avl_w;
        } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__layer_st) 
                    | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_pipe_valid))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_byte_avl = 0U;
        }
        if (((3U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__sc_state)) 
             & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_skip_weight_rls))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__last_weight_entries 
                = (0x00000fffU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__dp2reg_consumer)
                                   ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d1_weight_bytes
                                   : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d0_weight_bytes));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__last_wmb_entries 
                = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__is_compressed_d1)
                    ? (0x000001ffU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__dp2reg_consumer)
                                       ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d1_wmb_bytes
                                       : vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d0_wmb_bytes))
                    : 0U);
        } else if (((3U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__sc_state)) 
                    & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_skip_weight_rls))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__last_weight_entries = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__last_wmb_entries = 0U;
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__is_compressed_d1) 
             & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__addr_init) 
                | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4063) 
                   & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wl_in_pd_d1 
                      >> 0x00000010U))))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_req_addr_last 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_req_addr_w;
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_req_valid) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2buf_wmb_rd_addr 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_req_addr;
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__layer_st) 
             | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__is_compressed_d1) 
                & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_rsp_pipe_pvld_d6)))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain[0U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[0U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain[1U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[1U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain[2U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[2U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain[3U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[3U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain[4U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[4U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain[5U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[5U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain[6U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[6U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain[7U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[7U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain[8U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[8U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain[9U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[9U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain[0x0000000aU] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[0x0000000aU];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain[0x0000000bU] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[0x0000000bU];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain[0x0000000cU] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[0x0000000cU];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain[0x0000000dU] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[0x0000000dU];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain[0x0000000eU] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[0x0000000eU];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain[0x0000000fU] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[0x0000000fU];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain[0x00000010U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[0x00000010U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain[0x00000011U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[0x00000011U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain[0x00000012U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[0x00000012U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain[0x00000013U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[0x00000013U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain[0x00000014U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[0x00000014U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain[0x00000015U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[0x00000015U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain[0x00000016U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[0x00000016U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain[0x00000017U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[0x00000017U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain[0x00000018U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[0x00000018U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain[0x00000019U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[0x00000019U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain[0x0000001aU] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[0x0000001aU];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain[0x0000001bU] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[0x0000001bU];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain[0x0000001cU] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[0x0000001cU];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain[0x0000001dU] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[0x0000001dU];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain[0x0000001eU] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[0x0000001eU];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain[0x0000001fU] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_w[0x0000001fU];
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__layer_st) 
             | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_rsp_pipe_pvld_d6) 
                & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__is_compressed_d1)))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_rsp_bit_remain 
                = (0x000003ffU & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4065));
        } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__layer_st) 
                    | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_rsp_pipe_pvld_d6) 
                       & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__is_compressed_d1)))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_rsp_bit_remain = 0U;
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_rsp_pipe_pvld_d6) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_ori_sft_3 
                = (0x0000007fU & ((0x0000003eU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_rsp_pipe_pd_d6 
                                                  << 1U)) 
                                  + (0x0000001fU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_rsp_pipe_pd_d6)));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_dual 
                = (1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_rsp_pipe_pd_d6 
                         >> 0x0000001cU));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_cur_sub_h 
                = (3U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_rsp_pipe_pd_d6 
                         >> 0x0000001dU));
            VL_SHIFTR_WWI(128,128,7, __Vtemp_1, vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_rsp_emask_in, 
                          (0x0000007fU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_rsp_pipe_pd_d6 
                                          >> 8U)));
            if ((0x10000000U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_rsp_pipe_pd_d6)) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_emask[0U] 
                    = ((IData)((((QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_rsp_emask_in[1U])) 
                                 << 0x00000020U) | (QData)((IData)(
                                                                   vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_rsp_emask_in[0U])))) 
                       & (IData)((~ VL_SHIFTL_QQI(64,64,7, 0xffffffffffffffffULL, 
                                                  (0x0000007fU 
                                                   & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_rsp_pipe_pd_d6 
                                                      >> 8U))))));
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_emask[1U] 
                    = ((IData)(((((QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_rsp_emask_in[1U])) 
                                  << 0x00000020U) | (QData)((IData)(
                                                                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_rsp_emask_in[0U]))) 
                                >> 0x00000020U)) & (IData)(
                                                           ((~ 
                                                             VL_SHIFTL_QQI(64,64,7, 0xffffffffffffffffULL, 
                                                                           (0x0000007fU 
                                                                            & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_rsp_pipe_pd_d6 
                                                                               >> 8U)))) 
                                                            >> 0x00000020U)));
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_emask[2U] 
                    = ((IData)((((QData)((IData)(__Vtemp_1[1U])) 
                                 << 0x00000020U) | (QData)((IData)(
                                                                   __Vtemp_1[0U])))) 
                       & (IData)((~ VL_SHIFTL_QQI(64,64,7, 0xffffffffffffffffULL, 
                                                  (0x0000007fU 
                                                   & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_rsp_pipe_pd_d6 
                                                      >> 8U))))));
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_emask[3U] 
                    = ((IData)(((((QData)((IData)(__Vtemp_1[1U])) 
                                  << 0x00000020U) | (QData)((IData)(
                                                                    __Vtemp_1[0U]))) 
                                >> 0x00000020U)) & (IData)(
                                                           ((~ 
                                                             VL_SHIFTL_QQI(64,64,7, 0xffffffffffffffffULL, 
                                                                           (0x0000007fU 
                                                                            & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_rsp_pipe_pd_d6 
                                                                               >> 8U)))) 
                                                            >> 0x00000020U)));
            } else {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_emask[0U] 
                    = (IData)(((~ VL_SHIFTL_QQI(64,64,8, 0xffffffffffffffffULL, 
                                                (0x000000ffU 
                                                 & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_rsp_pipe_pd_d6 
                                                    >> 7U)))) 
                               & (((QData)((IData)(
                                                   vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_rsp_emask_in[1U])) 
                                   << 0x00000020U) 
                                  | (QData)((IData)(
                                                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_rsp_emask_in[0U])))));
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_emask[1U] 
                    = (IData)((((~ VL_SHIFTL_QQI(64,64,8, 0xffffffffffffffffULL, 
                                                 (0x000000ffU 
                                                  & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_rsp_pipe_pd_d6 
                                                     >> 7U)))) 
                                & (((QData)((IData)(
                                                    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_rsp_emask_in[1U])) 
                                    << 0x00000020U) 
                                   | (QData)((IData)(
                                                     vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_rsp_emask_in[0U])))) 
                               >> 0x00000020U));
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_emask[2U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_emask[3U] = 0U;
            }
        }
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_rsp_bit_remain_last = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_last[0U] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_last[1U] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_last[2U] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_last[3U] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_last[4U] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_last[5U] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_last[6U] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_last[7U] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_last[8U] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[8U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_last[9U] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[9U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_last[0x0000000aU] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000000aU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_last[0x0000000bU] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000000bU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_last[0x0000000cU] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000000cU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_last[0x0000000dU] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000000dU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_last[0x0000000eU] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000000eU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_last[0x0000000fU] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000000fU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_last[0x00000010U] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x00000010U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_last[0x00000011U] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x00000011U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_last[0x00000012U] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x00000012U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_last[0x00000013U] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x00000013U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_last[0x00000014U] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x00000014U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_last[0x00000015U] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x00000015U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_last[0x00000016U] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x00000016U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_last[0x00000017U] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x00000017U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_last[0x00000018U] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x00000018U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_last[0x00000019U] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x00000019U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_last[0x0000001aU] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000001aU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_last[0x0000001bU] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000001bU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_last[0x0000001cU] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000001cU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_last[0x0000001dU] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000001dU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_last[0x0000001eU] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000001eU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain_last[0x0000001fU] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000001fU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_addr_last = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_byte_remain_last = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_element_avl_last = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__sub_h_total = 1U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_element_avl = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__stripe_cnt = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_byte_avl = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__last_weight_entries = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_req_addr_last = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2buf_wmb_rd_addr = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain[0U] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain[1U] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain[2U] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain[3U] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain[4U] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain[5U] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain[6U] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain[7U] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain[8U] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[8U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain[9U] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[9U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain[0x0000000aU] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000000aU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain[0x0000000bU] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000000bU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain[0x0000000cU] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000000cU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain[0x0000000dU] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000000dU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain[0x0000000eU] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000000eU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain[0x0000000fU] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000000fU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain[0x00000010U] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x00000010U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain[0x00000011U] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x00000011U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain[0x00000012U] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x00000012U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain[0x00000013U] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x00000013U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain[0x00000014U] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x00000014U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain[0x00000015U] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x00000015U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain[0x00000016U] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x00000016U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain[0x00000017U] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x00000017U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain[0x00000018U] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x00000018U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain[0x00000019U] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x00000019U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain[0x0000001aU] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000001aU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain[0x0000001bU] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000001bU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain[0x0000001cU] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000001cU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain[0x0000001dU] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000001dU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain[0x0000001eU] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000001eU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_emask_remain[0x0000001fU] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000001fU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_rsp_bit_remain = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__last_wmb_entries = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_ori_sft_3 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_dual = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_cur_sub_h = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_emask[0U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_emask[1U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_emask[2U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_emask[3U] = 0U;
    }
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4071 = VL_SHIFTR_QQI(64,64,7, 
                                                                (((QData)((IData)(
                                                                                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_emask[1U])) 
                                                                  << 0x00000020U) 
                                                                 | (QData)((IData)(
                                                                                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_emask[0U]))), (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_ori_sft_3));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_emask_hi 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_dual)
            ? (((QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_emask[3U])) 
                << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_emask[2U])))
            : 0ULL);
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_rsp_pipe_pvld_d6) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_ori_element 
                = (0x0000007fU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_rsp_pipe_pd_d6);
        }
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_ori_element = 0U;
    }
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4425 = (0x0000ffffffffffffULL 
                                                   & ((~ 
                                                       (VL_SHIFTL_QQI(64,64,7, 0xffffffffffffffffULL, (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_ori_element)) 
                                                        >> 0x00000010U)) 
                                                      & (((3U 
                                                           == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_cur_sub_h))
                                                           ? 0x000000000000ffffULL
                                                           : 0ULL) 
                                                         >> 0x00000010U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4427 = (0x0000ffffffffffffULL 
                                                   & ((~ 
                                                       (VL_SHIFTL_QQI(64,64,7, 0xffffffffffffffffULL, (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_ori_element)) 
                                                        >> 0x00000010U)) 
                                                      & (((2U 
                                                           <= (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_cur_sub_h))
                                                           ? 0x000000000000ffffULL
                                                           : 0ULL) 
                                                         >> 0x00000010U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4429 = (
                                                   (~ (IData)(
                                                              (VL_SHIFTL_QQI(64,64,7, 0xffffffffffffffffULL, (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_ori_element)) 
                                                               >> 0x00000020U))) 
                                                   & (IData)(
                                                             (((1U 
                                                                <= (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_cur_sub_h))
                                                                ? 0x00000000ffffffffULL
                                                                : 0ULL) 
                                                              >> 0x00000020U)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_emask_p0 
        = ((~ VL_SHIFTL_QQI(64,64,7, 0xffffffffffffffffULL, (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_ori_element))) 
           & (((QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_emask[1U])) 
               << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_emask[0U]))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4070 = VL_SHIFTR_QQI(64,64,7, 
                                                                (((QData)((IData)(
                                                                                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_emask[1U])) 
                                                                  << 0x00000020U) 
                                                                 | (QData)((IData)(
                                                                                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_emask[0U]))), 
                                                                (0x0000007fU 
                                                                 & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_ori_element), 1U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4424 = (0x0000ffffU 
                                                   & ((~ (IData)(
                                                                 VL_SHIFTL_QQI(64,64,7, 0xffffffffffffffffULL, (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_ori_element)))) 
                                                      & (IData)(
                                                                ((3U 
                                                                  == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_cur_sub_h))
                                                                  ? 0x000000000000ffffULL
                                                                  : 0ULL))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4426 = (0x0000ffffU 
                                                   & ((~ (IData)(
                                                                 VL_SHIFTL_QQI(64,64,7, 0xffffffffffffffffULL, (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_ori_element)))) 
                                                      & (IData)(
                                                                ((2U 
                                                                  <= (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_cur_sub_h))
                                                                  ? 0x000000000000ffffULL
                                                                  : 0ULL))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4069 = VL_SHIFTR_QQI(64,64,7, 
                                                                (((QData)((IData)(
                                                                                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_emask[1U])) 
                                                                  << 0x00000020U) 
                                                                 | (QData)((IData)(
                                                                                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_emask[0U]))), (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_ori_element));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4428 = (
                                                   (~ (IData)(
                                                              VL_SHIFTL_QQI(64,64,7, 0xffffffffffffffffULL, (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_ori_element)))) 
                                                   & (IData)(
                                                             ((1U 
                                                               <= (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_cur_sub_h))
                                                               ? 0x00000000ffffffffULL
                                                               : 0ULL)));
    __Vtemp_12[0U] = (((((((0x0000000cU & ((- (IData)(
                                                      (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_emask[0U] 
                                                       >> 0x0000001fU))) 
                                           << 2U)) 
                           | (3U & (- (IData)((1U & 
                                               (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_emask[0U] 
                                                >> 0x0000001eU)))))) 
                          << 0x0000000cU) | (((0x0000000cU 
                                               & ((- (IData)(
                                                             (1U 
                                                              & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_emask[0U] 
                                                                 >> 0x0000001dU)))) 
                                                  << 2U)) 
                                              | (3U 
                                                 & (- (IData)(
                                                              (1U 
                                                               & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_emask[0U] 
                                                                  >> 0x0000001cU)))))) 
                                             << 8U)) 
                        | ((((0x0000000cU & ((- (IData)(
                                                        (1U 
                                                         & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_emask[0U] 
                                                            >> 0x0000001bU)))) 
                                             << 2U)) 
                             | (3U & (- (IData)((1U 
                                                 & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_emask[0U] 
                                                    >> 0x0000001aU)))))) 
                            << 4U) | ((0x0000000cU 
                                       & ((- (IData)(
                                                     (1U 
                                                      & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_emask[0U] 
                                                         >> 0x00000019U)))) 
                                          << 2U)) | 
                                      (3U & (- (IData)(
                                                       (1U 
                                                        & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_emask[0U] 
                                                           >> 0x00000018U)))))))) 
                       << 0x00000010U) | (((((0x0000000cU 
                                              & ((- (IData)(
                                                            (1U 
                                                             & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_emask[0U] 
                                                                >> 0x00000017U)))) 
                                                 << 2U)) 
                                             | (3U 
                                                & (- (IData)(
                                                             (1U 
                                                              & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_emask[0U] 
                                                                 >> 0x00000016U)))))) 
                                            << 0x0000000cU) 
                                           | (((0x0000000cU 
                                                & ((- (IData)(
                                                              (1U 
                                                               & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_emask[0U] 
                                                                  >> 0x00000015U)))) 
                                                   << 2U)) 
                                               | (3U 
                                                  & (- (IData)(
                                                               (1U 
                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_emask[0U] 
                                                                   >> 0x00000014U)))))) 
                                              << 8U)) 
                                          | ((((0x0000000cU 
                                                & ((- (IData)(
                                                              (1U 
                                                               & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_emask[0U] 
                                                                  >> 0x00000013U)))) 
                                                   << 2U)) 
                                               | (3U 
                                                  & (- (IData)(
                                                               (1U 
                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_emask[0U] 
                                                                   >> 0x00000012U)))))) 
                                              << 4U) 
                                             | ((0x0000000cU 
                                                 & ((- (IData)(
                                                               (1U 
                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_emask[0U] 
                                                                   >> 0x00000011U)))) 
                                                    << 2U)) 
                                                | (3U 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_emask[0U] 
                                                                    >> 0x00000010U)))))))));
    __Vtemp_12[1U] = (IData)((((QData)((IData)(((((
                                                   (((0x0000000cU 
                                                      & ((- (IData)(
                                                                    (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_emask[1U] 
                                                                     >> 0x0000001fU))) 
                                                         << 2U)) 
                                                     | (3U 
                                                        & (- (IData)(
                                                                     (1U 
                                                                      & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_emask[1U] 
                                                                         >> 0x0000001eU)))))) 
                                                    << 0x0000000cU) 
                                                   | (((0x0000000cU 
                                                        & ((- (IData)(
                                                                      (1U 
                                                                       & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_emask[1U] 
                                                                          >> 0x0000001dU)))) 
                                                           << 2U)) 
                                                       | (3U 
                                                          & (- (IData)(
                                                                       (1U 
                                                                        & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_emask[1U] 
                                                                           >> 0x0000001cU)))))) 
                                                      << 8U)) 
                                                  | ((((0x0000000cU 
                                                        & ((- (IData)(
                                                                      (1U 
                                                                       & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_emask[1U] 
                                                                          >> 0x0000001bU)))) 
                                                           << 2U)) 
                                                       | (3U 
                                                          & (- (IData)(
                                                                       (1U 
                                                                        & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_emask[1U] 
                                                                           >> 0x0000001aU)))))) 
                                                      << 4U) 
                                                     | ((0x0000000cU 
                                                         & ((- (IData)(
                                                                       (1U 
                                                                        & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_emask[1U] 
                                                                           >> 0x00000019U)))) 
                                                            << 2U)) 
                                                        | (3U 
                                                           & (- (IData)(
                                                                        (1U 
                                                                         & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_emask[1U] 
                                                                            >> 0x00000018U)))))))) 
                                                 << 0x00000010U) 
                                                | (((((0x0000000cU 
                                                       & ((- (IData)(
                                                                     (1U 
                                                                      & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_emask[1U] 
                                                                         >> 0x00000017U)))) 
                                                          << 2U)) 
                                                      | (3U 
                                                         & (- (IData)(
                                                                      (1U 
                                                                       & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_emask[1U] 
                                                                          >> 0x00000016U)))))) 
                                                     << 0x0000000cU) 
                                                    | (((0x0000000cU 
                                                         & ((- (IData)(
                                                                       (1U 
                                                                        & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_emask[1U] 
                                                                           >> 0x00000015U)))) 
                                                            << 2U)) 
                                                        | (3U 
                                                           & (- (IData)(
                                                                        (1U 
                                                                         & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_emask[1U] 
                                                                            >> 0x00000014U)))))) 
                                                       << 8U)) 
                                                   | ((((0x0000000cU 
                                                         & ((- (IData)(
                                                                       (1U 
                                                                        & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_emask[1U] 
                                                                           >> 0x00000013U)))) 
                                                            << 2U)) 
                                                        | (3U 
                                                           & (- (IData)(
                                                                        (1U 
                                                                         & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_emask[1U] 
                                                                            >> 0x00000012U)))))) 
                                                       << 4U) 
                                                      | ((0x0000000cU 
                                                          & ((- (IData)(
                                                                        (1U 
                                                                         & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_emask[1U] 
                                                                            >> 0x00000011U)))) 
                                                             << 2U)) 
                                                         | (3U 
                                                            & (- (IData)(
                                                                         (1U 
                                                                          & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_emask[1U] 
                                                                             >> 0x00000010U))))))))))) 
                               << 0x00000020U) | (QData)((IData)(
                                                                 (((((((0x0000000cU 
                                                                        & ((- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_emask[1U] 
                                                                                >> 0x0000000fU)))) 
                                                                           << 2U)) 
                                                                       | (3U 
                                                                          & (- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_emask[1U] 
                                                                                >> 0x0000000eU)))))) 
                                                                      << 0x0000000cU) 
                                                                     | (((0x0000000cU 
                                                                          & ((- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_emask[1U] 
                                                                                >> 0x0000000dU)))) 
                                                                             << 2U)) 
                                                                         | (3U 
                                                                            & (- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_emask[1U] 
                                                                                >> 0x0000000cU)))))) 
                                                                        << 8U)) 
                                                                    | ((((0x0000000cU 
                                                                          & ((- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_emask[1U] 
                                                                                >> 0x0000000bU)))) 
                                                                             << 2U)) 
                                                                         | (3U 
                                                                            & (- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_emask[1U] 
                                                                                >> 0x0000000aU)))))) 
                                                                        << 4U) 
                                                                       | ((0x0000000cU 
                                                                           & ((- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_emask[1U] 
                                                                                >> 9U)))) 
                                                                              << 2U)) 
                                                                          | (3U 
                                                                             & (- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_emask[1U] 
                                                                                >> 8U)))))))) 
                                                                   << 0x00000010U) 
                                                                  | (((((0x0000000cU 
                                                                         & ((- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_emask[1U] 
                                                                                >> 7U)))) 
                                                                            << 2U)) 
                                                                        | (3U 
                                                                           & (- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_emask[1U] 
                                                                                >> 6U)))))) 
                                                                       << 0x0000000cU) 
                                                                      | (((0x0000000cU 
                                                                           & ((- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_emask[1U] 
                                                                                >> 5U)))) 
                                                                              << 2U)) 
                                                                          | (3U 
                                                                             & (- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_emask[1U] 
                                                                                >> 4U)))))) 
                                                                         << 8U)) 
                                                                     | ((((0x0000000cU 
                                                                           & ((- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_emask[1U] 
                                                                                >> 3U)))) 
                                                                              << 2U)) 
                                                                          | (3U 
                                                                             & (- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_emask[1U] 
                                                                                >> 2U)))))) 
                                                                         << 4U) 
                                                                        | ((0x0000000cU 
                                                                            & ((- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_emask[1U] 
                                                                                >> 1U)))) 
                                                                               << 2U)) 
                                                                           | (3U 
                                                                              & (- (IData)(
                                                                                (1U 
                                                                                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_emask[1U]))))))))))));
    __Vtemp_12[2U] = (IData)(((((QData)((IData)((((
                                                   ((((0x0000000cU 
                                                       & ((- (IData)(
                                                                     (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_emask[1U] 
                                                                      >> 0x0000001fU))) 
                                                          << 2U)) 
                                                      | (3U 
                                                         & (- (IData)(
                                                                      (1U 
                                                                       & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_emask[1U] 
                                                                          >> 0x0000001eU)))))) 
                                                     << 0x0000000cU) 
                                                    | (((0x0000000cU 
                                                         & ((- (IData)(
                                                                       (1U 
                                                                        & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_emask[1U] 
                                                                           >> 0x0000001dU)))) 
                                                            << 2U)) 
                                                        | (3U 
                                                           & (- (IData)(
                                                                        (1U 
                                                                         & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_emask[1U] 
                                                                            >> 0x0000001cU)))))) 
                                                       << 8U)) 
                                                   | ((((0x0000000cU 
                                                         & ((- (IData)(
                                                                       (1U 
                                                                        & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_emask[1U] 
                                                                           >> 0x0000001bU)))) 
                                                            << 2U)) 
                                                        | (3U 
                                                           & (- (IData)(
                                                                        (1U 
                                                                         & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_emask[1U] 
                                                                            >> 0x0000001aU)))))) 
                                                       << 4U) 
                                                      | ((0x0000000cU 
                                                          & ((- (IData)(
                                                                        (1U 
                                                                         & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_emask[1U] 
                                                                            >> 0x00000019U)))) 
                                                             << 2U)) 
                                                         | (3U 
                                                            & (- (IData)(
                                                                         (1U 
                                                                          & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_emask[1U] 
                                                                             >> 0x00000018U)))))))) 
                                                  << 0x00000010U) 
                                                 | (((((0x0000000cU 
                                                        & ((- (IData)(
                                                                      (1U 
                                                                       & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_emask[1U] 
                                                                          >> 0x00000017U)))) 
                                                           << 2U)) 
                                                       | (3U 
                                                          & (- (IData)(
                                                                       (1U 
                                                                        & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_emask[1U] 
                                                                           >> 0x00000016U)))))) 
                                                      << 0x0000000cU) 
                                                     | (((0x0000000cU 
                                                          & ((- (IData)(
                                                                        (1U 
                                                                         & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_emask[1U] 
                                                                            >> 0x00000015U)))) 
                                                             << 2U)) 
                                                         | (3U 
                                                            & (- (IData)(
                                                                         (1U 
                                                                          & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_emask[1U] 
                                                                             >> 0x00000014U)))))) 
                                                        << 8U)) 
                                                    | ((((0x0000000cU 
                                                          & ((- (IData)(
                                                                        (1U 
                                                                         & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_emask[1U] 
                                                                            >> 0x00000013U)))) 
                                                             << 2U)) 
                                                         | (3U 
                                                            & (- (IData)(
                                                                         (1U 
                                                                          & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_emask[1U] 
                                                                             >> 0x00000012U)))))) 
                                                        << 4U) 
                                                       | ((0x0000000cU 
                                                           & ((- (IData)(
                                                                         (1U 
                                                                          & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_emask[1U] 
                                                                             >> 0x00000011U)))) 
                                                              << 2U)) 
                                                          | (3U 
                                                             & (- (IData)(
                                                                          (1U 
                                                                           & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_emask[1U] 
                                                                              >> 0x00000010U))))))))))) 
                                << 0x00000020U) | (QData)((IData)(
                                                                  (((((((0x0000000cU 
                                                                         & ((- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_emask[1U] 
                                                                                >> 0x0000000fU)))) 
                                                                            << 2U)) 
                                                                        | (3U 
                                                                           & (- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_emask[1U] 
                                                                                >> 0x0000000eU)))))) 
                                                                       << 0x0000000cU) 
                                                                      | (((0x0000000cU 
                                                                           & ((- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_emask[1U] 
                                                                                >> 0x0000000dU)))) 
                                                                              << 2U)) 
                                                                          | (3U 
                                                                             & (- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_emask[1U] 
                                                                                >> 0x0000000cU)))))) 
                                                                         << 8U)) 
                                                                     | ((((0x0000000cU 
                                                                           & ((- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_emask[1U] 
                                                                                >> 0x0000000bU)))) 
                                                                              << 2U)) 
                                                                          | (3U 
                                                                             & (- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_emask[1U] 
                                                                                >> 0x0000000aU)))))) 
                                                                         << 4U) 
                                                                        | ((0x0000000cU 
                                                                            & ((- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_emask[1U] 
                                                                                >> 9U)))) 
                                                                               << 2U)) 
                                                                           | (3U 
                                                                              & (- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_emask[1U] 
                                                                                >> 8U)))))))) 
                                                                    << 0x00000010U) 
                                                                   | (((((0x0000000cU 
                                                                          & ((- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_emask[1U] 
                                                                                >> 7U)))) 
                                                                             << 2U)) 
                                                                         | (3U 
                                                                            & (- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_emask[1U] 
                                                                                >> 6U)))))) 
                                                                        << 0x0000000cU) 
                                                                       | (((0x0000000cU 
                                                                            & ((- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_emask[1U] 
                                                                                >> 5U)))) 
                                                                               << 2U)) 
                                                                           | (3U 
                                                                              & (- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_emask[1U] 
                                                                                >> 4U)))))) 
                                                                          << 8U)) 
                                                                      | ((((0x0000000cU 
                                                                            & ((- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_emask[1U] 
                                                                                >> 3U)))) 
                                                                               << 2U)) 
                                                                           | (3U 
                                                                              & (- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_emask[1U] 
                                                                                >> 2U)))))) 
                                                                          << 4U) 
                                                                         | ((0x0000000cU 
                                                                             & ((- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_emask[1U] 
                                                                                >> 1U)))) 
                                                                                << 2U)) 
                                                                            | (3U 
                                                                               & (- (IData)(
                                                                                (1U 
                                                                                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_emask[1U]))))))))))) 
                              >> 0x00000020U));
    __Vtemp_13[0U] = (((((((0x0000000cU & ((- (IData)(
                                                      (1U 
                                                       & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_emask[0U] 
                                                          >> 0x0000000fU)))) 
                                           << 2U)) 
                           | (3U & (- (IData)((1U & 
                                               (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_emask[0U] 
                                                >> 0x0000000eU)))))) 
                          << 0x0000000cU) | (((0x0000000cU 
                                               & ((- (IData)(
                                                             (1U 
                                                              & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_emask[0U] 
                                                                 >> 0x0000000dU)))) 
                                                  << 2U)) 
                                              | (3U 
                                                 & (- (IData)(
                                                              (1U 
                                                               & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_emask[0U] 
                                                                  >> 0x0000000cU)))))) 
                                             << 8U)) 
                        | ((((0x0000000cU & ((- (IData)(
                                                        (1U 
                                                         & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_emask[0U] 
                                                            >> 0x0000000bU)))) 
                                             << 2U)) 
                             | (3U & (- (IData)((1U 
                                                 & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_emask[0U] 
                                                    >> 0x0000000aU)))))) 
                            << 4U) | ((0x0000000cU 
                                       & ((- (IData)(
                                                     (1U 
                                                      & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_emask[0U] 
                                                         >> 9U)))) 
                                          << 2U)) | 
                                      (3U & (- (IData)(
                                                       (1U 
                                                        & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_emask[0U] 
                                                           >> 8U)))))))) 
                       << 0x00000010U) | (((((0x0000000cU 
                                              & ((- (IData)(
                                                            (1U 
                                                             & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_emask[0U] 
                                                                >> 7U)))) 
                                                 << 2U)) 
                                             | (3U 
                                                & (- (IData)(
                                                             (1U 
                                                              & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_emask[0U] 
                                                                 >> 6U)))))) 
                                            << 0x0000000cU) 
                                           | (((0x0000000cU 
                                                & ((- (IData)(
                                                              (1U 
                                                               & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_emask[0U] 
                                                                  >> 5U)))) 
                                                   << 2U)) 
                                               | (3U 
                                                  & (- (IData)(
                                                               (1U 
                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_emask[0U] 
                                                                   >> 4U)))))) 
                                              << 8U)) 
                                          | ((((0x0000000cU 
                                                & ((- (IData)(
                                                              (1U 
                                                               & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_emask[0U] 
                                                                  >> 3U)))) 
                                                   << 2U)) 
                                               | (3U 
                                                  & (- (IData)(
                                                               (1U 
                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_emask[0U] 
                                                                   >> 2U)))))) 
                                              << 4U) 
                                             | ((0x0000000cU 
                                                 & ((- (IData)(
                                                               (1U 
                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_emask[0U] 
                                                                   >> 1U)))) 
                                                    << 2U)) 
                                                | (3U 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_emask[0U]))))))));
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_valid) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2buf_wt_rd_addr 
                = (0x00000fffU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_addr) 
                                  + ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__data_bank) 
                                     << 8U)));
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_en_d5) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d6[0U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d5[0U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d6[1U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d5[1U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d6[2U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d5[2U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d6[3U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d5[3U];
        }
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2buf_wt_rd_addr = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d6[0U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d6[1U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d6[2U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d6[3U] = 0U;
    }
    __Vtemp_14[0U] = (((((((0x0000000cU & ((- (IData)(
                                                      (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d6[0U] 
                                                       >> 0x0000001fU))) 
                                           << 2U)) 
                           | (3U & (- (IData)((1U & 
                                               (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d6[0U] 
                                                >> 0x0000001eU)))))) 
                          << 0x0000000cU) | (((0x0000000cU 
                                               & ((- (IData)(
                                                             (1U 
                                                              & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d6[0U] 
                                                                 >> 0x0000001dU)))) 
                                                  << 2U)) 
                                              | (3U 
                                                 & (- (IData)(
                                                              (1U 
                                                               & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d6[0U] 
                                                                  >> 0x0000001cU)))))) 
                                             << 8U)) 
                        | ((((0x0000000cU & ((- (IData)(
                                                        (1U 
                                                         & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d6[0U] 
                                                            >> 0x0000001bU)))) 
                                             << 2U)) 
                             | (3U & (- (IData)((1U 
                                                 & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d6[0U] 
                                                    >> 0x0000001aU)))))) 
                            << 4U) | ((0x0000000cU 
                                       & ((- (IData)(
                                                     (1U 
                                                      & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d6[0U] 
                                                         >> 0x00000019U)))) 
                                          << 2U)) | 
                                      (3U & (- (IData)(
                                                       (1U 
                                                        & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d6[0U] 
                                                           >> 0x00000018U)))))))) 
                       << 0x00000010U) | (((((0x0000000cU 
                                              & ((- (IData)(
                                                            (1U 
                                                             & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d6[0U] 
                                                                >> 0x00000017U)))) 
                                                 << 2U)) 
                                             | (3U 
                                                & (- (IData)(
                                                             (1U 
                                                              & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d6[0U] 
                                                                 >> 0x00000016U)))))) 
                                            << 0x0000000cU) 
                                           | (((0x0000000cU 
                                                & ((- (IData)(
                                                              (1U 
                                                               & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d6[0U] 
                                                                  >> 0x00000015U)))) 
                                                   << 2U)) 
                                               | (3U 
                                                  & (- (IData)(
                                                               (1U 
                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d6[0U] 
                                                                   >> 0x00000014U)))))) 
                                              << 8U)) 
                                          | ((((0x0000000cU 
                                                & ((- (IData)(
                                                              (1U 
                                                               & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d6[0U] 
                                                                  >> 0x00000013U)))) 
                                                   << 2U)) 
                                               | (3U 
                                                  & (- (IData)(
                                                               (1U 
                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d6[0U] 
                                                                   >> 0x00000012U)))))) 
                                              << 4U) 
                                             | ((0x0000000cU 
                                                 & ((- (IData)(
                                                               (1U 
                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d6[0U] 
                                                                   >> 0x00000011U)))) 
                                                    << 2U)) 
                                                | (3U 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d6[0U] 
                                                                    >> 0x00000010U)))))))));
    __Vtemp_14[1U] = (IData)((((QData)((IData)(((((
                                                   (((0x0000000cU 
                                                      & ((- (IData)(
                                                                    (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d6[1U] 
                                                                     >> 0x0000001fU))) 
                                                         << 2U)) 
                                                     | (3U 
                                                        & (- (IData)(
                                                                     (1U 
                                                                      & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d6[1U] 
                                                                         >> 0x0000001eU)))))) 
                                                    << 0x0000000cU) 
                                                   | (((0x0000000cU 
                                                        & ((- (IData)(
                                                                      (1U 
                                                                       & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d6[1U] 
                                                                          >> 0x0000001dU)))) 
                                                           << 2U)) 
                                                       | (3U 
                                                          & (- (IData)(
                                                                       (1U 
                                                                        & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d6[1U] 
                                                                           >> 0x0000001cU)))))) 
                                                      << 8U)) 
                                                  | ((((0x0000000cU 
                                                        & ((- (IData)(
                                                                      (1U 
                                                                       & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d6[1U] 
                                                                          >> 0x0000001bU)))) 
                                                           << 2U)) 
                                                       | (3U 
                                                          & (- (IData)(
                                                                       (1U 
                                                                        & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d6[1U] 
                                                                           >> 0x0000001aU)))))) 
                                                      << 4U) 
                                                     | ((0x0000000cU 
                                                         & ((- (IData)(
                                                                       (1U 
                                                                        & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d6[1U] 
                                                                           >> 0x00000019U)))) 
                                                            << 2U)) 
                                                        | (3U 
                                                           & (- (IData)(
                                                                        (1U 
                                                                         & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d6[1U] 
                                                                            >> 0x00000018U)))))))) 
                                                 << 0x00000010U) 
                                                | (((((0x0000000cU 
                                                       & ((- (IData)(
                                                                     (1U 
                                                                      & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d6[1U] 
                                                                         >> 0x00000017U)))) 
                                                          << 2U)) 
                                                      | (3U 
                                                         & (- (IData)(
                                                                      (1U 
                                                                       & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d6[1U] 
                                                                          >> 0x00000016U)))))) 
                                                     << 0x0000000cU) 
                                                    | (((0x0000000cU 
                                                         & ((- (IData)(
                                                                       (1U 
                                                                        & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d6[1U] 
                                                                           >> 0x00000015U)))) 
                                                            << 2U)) 
                                                        | (3U 
                                                           & (- (IData)(
                                                                        (1U 
                                                                         & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d6[1U] 
                                                                            >> 0x00000014U)))))) 
                                                       << 8U)) 
                                                   | ((((0x0000000cU 
                                                         & ((- (IData)(
                                                                       (1U 
                                                                        & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d6[1U] 
                                                                           >> 0x00000013U)))) 
                                                            << 2U)) 
                                                        | (3U 
                                                           & (- (IData)(
                                                                        (1U 
                                                                         & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d6[1U] 
                                                                            >> 0x00000012U)))))) 
                                                       << 4U) 
                                                      | ((0x0000000cU 
                                                          & ((- (IData)(
                                                                        (1U 
                                                                         & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d6[1U] 
                                                                            >> 0x00000011U)))) 
                                                             << 2U)) 
                                                         | (3U 
                                                            & (- (IData)(
                                                                         (1U 
                                                                          & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d6[1U] 
                                                                             >> 0x00000010U))))))))))) 
                               << 0x00000020U) | (QData)((IData)(
                                                                 (((((((0x0000000cU 
                                                                        & ((- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d6[1U] 
                                                                                >> 0x0000000fU)))) 
                                                                           << 2U)) 
                                                                       | (3U 
                                                                          & (- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d6[1U] 
                                                                                >> 0x0000000eU)))))) 
                                                                      << 0x0000000cU) 
                                                                     | (((0x0000000cU 
                                                                          & ((- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d6[1U] 
                                                                                >> 0x0000000dU)))) 
                                                                             << 2U)) 
                                                                         | (3U 
                                                                            & (- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d6[1U] 
                                                                                >> 0x0000000cU)))))) 
                                                                        << 8U)) 
                                                                    | ((((0x0000000cU 
                                                                          & ((- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d6[1U] 
                                                                                >> 0x0000000bU)))) 
                                                                             << 2U)) 
                                                                         | (3U 
                                                                            & (- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d6[1U] 
                                                                                >> 0x0000000aU)))))) 
                                                                        << 4U) 
                                                                       | ((0x0000000cU 
                                                                           & ((- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d6[1U] 
                                                                                >> 9U)))) 
                                                                              << 2U)) 
                                                                          | (3U 
                                                                             & (- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d6[1U] 
                                                                                >> 8U)))))))) 
                                                                   << 0x00000010U) 
                                                                  | (((((0x0000000cU 
                                                                         & ((- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d6[1U] 
                                                                                >> 7U)))) 
                                                                            << 2U)) 
                                                                        | (3U 
                                                                           & (- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d6[1U] 
                                                                                >> 6U)))))) 
                                                                       << 0x0000000cU) 
                                                                      | (((0x0000000cU 
                                                                           & ((- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d6[1U] 
                                                                                >> 5U)))) 
                                                                              << 2U)) 
                                                                          | (3U 
                                                                             & (- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d6[1U] 
                                                                                >> 4U)))))) 
                                                                         << 8U)) 
                                                                     | ((((0x0000000cU 
                                                                           & ((- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d6[1U] 
                                                                                >> 3U)))) 
                                                                              << 2U)) 
                                                                          | (3U 
                                                                             & (- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d6[1U] 
                                                                                >> 2U)))))) 
                                                                         << 4U) 
                                                                        | ((0x0000000cU 
                                                                            & ((- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d6[1U] 
                                                                                >> 1U)))) 
                                                                               << 2U)) 
                                                                           | (3U 
                                                                              & (- (IData)(
                                                                                (1U 
                                                                                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d6[1U]))))))))))));
    __Vtemp_14[2U] = (IData)(((((QData)((IData)((((
                                                   ((((0x0000000cU 
                                                       & ((- (IData)(
                                                                     (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d6[1U] 
                                                                      >> 0x0000001fU))) 
                                                          << 2U)) 
                                                      | (3U 
                                                         & (- (IData)(
                                                                      (1U 
                                                                       & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d6[1U] 
                                                                          >> 0x0000001eU)))))) 
                                                     << 0x0000000cU) 
                                                    | (((0x0000000cU 
                                                         & ((- (IData)(
                                                                       (1U 
                                                                        & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d6[1U] 
                                                                           >> 0x0000001dU)))) 
                                                            << 2U)) 
                                                        | (3U 
                                                           & (- (IData)(
                                                                        (1U 
                                                                         & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d6[1U] 
                                                                            >> 0x0000001cU)))))) 
                                                       << 8U)) 
                                                   | ((((0x0000000cU 
                                                         & ((- (IData)(
                                                                       (1U 
                                                                        & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d6[1U] 
                                                                           >> 0x0000001bU)))) 
                                                            << 2U)) 
                                                        | (3U 
                                                           & (- (IData)(
                                                                        (1U 
                                                                         & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d6[1U] 
                                                                            >> 0x0000001aU)))))) 
                                                       << 4U) 
                                                      | ((0x0000000cU 
                                                          & ((- (IData)(
                                                                        (1U 
                                                                         & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d6[1U] 
                                                                            >> 0x00000019U)))) 
                                                             << 2U)) 
                                                         | (3U 
                                                            & (- (IData)(
                                                                         (1U 
                                                                          & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d6[1U] 
                                                                             >> 0x00000018U)))))))) 
                                                  << 0x00000010U) 
                                                 | (((((0x0000000cU 
                                                        & ((- (IData)(
                                                                      (1U 
                                                                       & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d6[1U] 
                                                                          >> 0x00000017U)))) 
                                                           << 2U)) 
                                                       | (3U 
                                                          & (- (IData)(
                                                                       (1U 
                                                                        & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d6[1U] 
                                                                           >> 0x00000016U)))))) 
                                                      << 0x0000000cU) 
                                                     | (((0x0000000cU 
                                                          & ((- (IData)(
                                                                        (1U 
                                                                         & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d6[1U] 
                                                                            >> 0x00000015U)))) 
                                                             << 2U)) 
                                                         | (3U 
                                                            & (- (IData)(
                                                                         (1U 
                                                                          & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d6[1U] 
                                                                             >> 0x00000014U)))))) 
                                                        << 8U)) 
                                                    | ((((0x0000000cU 
                                                          & ((- (IData)(
                                                                        (1U 
                                                                         & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d6[1U] 
                                                                            >> 0x00000013U)))) 
                                                             << 2U)) 
                                                         | (3U 
                                                            & (- (IData)(
                                                                         (1U 
                                                                          & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d6[1U] 
                                                                             >> 0x00000012U)))))) 
                                                        << 4U) 
                                                       | ((0x0000000cU 
                                                           & ((- (IData)(
                                                                         (1U 
                                                                          & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d6[1U] 
                                                                             >> 0x00000011U)))) 
                                                              << 2U)) 
                                                          | (3U 
                                                             & (- (IData)(
                                                                          (1U 
                                                                           & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d6[1U] 
                                                                              >> 0x00000010U))))))))))) 
                                << 0x00000020U) | (QData)((IData)(
                                                                  (((((((0x0000000cU 
                                                                         & ((- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d6[1U] 
                                                                                >> 0x0000000fU)))) 
                                                                            << 2U)) 
                                                                        | (3U 
                                                                           & (- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d6[1U] 
                                                                                >> 0x0000000eU)))))) 
                                                                       << 0x0000000cU) 
                                                                      | (((0x0000000cU 
                                                                           & ((- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d6[1U] 
                                                                                >> 0x0000000dU)))) 
                                                                              << 2U)) 
                                                                          | (3U 
                                                                             & (- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d6[1U] 
                                                                                >> 0x0000000cU)))))) 
                                                                         << 8U)) 
                                                                     | ((((0x0000000cU 
                                                                           & ((- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d6[1U] 
                                                                                >> 0x0000000bU)))) 
                                                                              << 2U)) 
                                                                          | (3U 
                                                                             & (- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d6[1U] 
                                                                                >> 0x0000000aU)))))) 
                                                                         << 4U) 
                                                                        | ((0x0000000cU 
                                                                            & ((- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d6[1U] 
                                                                                >> 9U)))) 
                                                                               << 2U)) 
                                                                           | (3U 
                                                                              & (- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d6[1U] 
                                                                                >> 8U)))))))) 
                                                                    << 0x00000010U) 
                                                                   | (((((0x0000000cU 
                                                                          & ((- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d6[1U] 
                                                                                >> 7U)))) 
                                                                             << 2U)) 
                                                                         | (3U 
                                                                            & (- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d6[1U] 
                                                                                >> 6U)))))) 
                                                                        << 0x0000000cU) 
                                                                       | (((0x0000000cU 
                                                                            & ((- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d6[1U] 
                                                                                >> 5U)))) 
                                                                               << 2U)) 
                                                                           | (3U 
                                                                              & (- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d6[1U] 
                                                                                >> 4U)))))) 
                                                                          << 8U)) 
                                                                      | ((((0x0000000cU 
                                                                            & ((- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d6[1U] 
                                                                                >> 3U)))) 
                                                                               << 2U)) 
                                                                           | (3U 
                                                                              & (- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d6[1U] 
                                                                                >> 2U)))))) 
                                                                          << 4U) 
                                                                         | ((0x0000000cU 
                                                                             & ((- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d6[1U] 
                                                                                >> 1U)))) 
                                                                                << 2U)) 
                                                                            | (3U 
                                                                               & (- (IData)(
                                                                                (1U 
                                                                                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d6[1U]))))))))))) 
                              >> 0x00000020U));
    __Vtemp_15[0U] = (((((((0x0000000cU & ((- (IData)(
                                                      (1U 
                                                       & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d6[0U] 
                                                          >> 0x0000000fU)))) 
                                           << 2U)) 
                           | (3U & (- (IData)((1U & 
                                               (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d6[0U] 
                                                >> 0x0000000eU)))))) 
                          << 0x0000000cU) | (((0x0000000cU 
                                               & ((- (IData)(
                                                             (1U 
                                                              & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d6[0U] 
                                                                 >> 0x0000000dU)))) 
                                                  << 2U)) 
                                              | (3U 
                                                 & (- (IData)(
                                                              (1U 
                                                               & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d6[0U] 
                                                                  >> 0x0000000cU)))))) 
                                             << 8U)) 
                        | ((((0x0000000cU & ((- (IData)(
                                                        (1U 
                                                         & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d6[0U] 
                                                            >> 0x0000000bU)))) 
                                             << 2U)) 
                             | (3U & (- (IData)((1U 
                                                 & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d6[0U] 
                                                    >> 0x0000000aU)))))) 
                            << 4U) | ((0x0000000cU 
                                       & ((- (IData)(
                                                     (1U 
                                                      & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d6[0U] 
                                                         >> 9U)))) 
                                          << 2U)) | 
                                      (3U & (- (IData)(
                                                       (1U 
                                                        & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d6[0U] 
                                                           >> 8U)))))))) 
                       << 0x00000010U) | (((((0x0000000cU 
                                              & ((- (IData)(
                                                            (1U 
                                                             & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d6[0U] 
                                                                >> 7U)))) 
                                                 << 2U)) 
                                             | (3U 
                                                & (- (IData)(
                                                             (1U 
                                                              & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d6[0U] 
                                                                 >> 6U)))))) 
                                            << 0x0000000cU) 
                                           | (((0x0000000cU 
                                                & ((- (IData)(
                                                              (1U 
                                                               & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d6[0U] 
                                                                  >> 5U)))) 
                                                   << 2U)) 
                                               | (3U 
                                                  & (- (IData)(
                                                               (1U 
                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d6[0U] 
                                                                   >> 4U)))))) 
                                              << 8U)) 
                                          | ((((0x0000000cU 
                                                & ((- (IData)(
                                                              (1U 
                                                               & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d6[0U] 
                                                                  >> 3U)))) 
                                                   << 2U)) 
                                               | (3U 
                                                  & (- (IData)(
                                                               (1U 
                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d6[0U] 
                                                                   >> 2U)))))) 
                                              << 4U) 
                                             | ((0x0000000cU 
                                                 & ((- (IData)(
                                                               (1U 
                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d6[0U] 
                                                                   >> 1U)))) 
                                                    << 2U)) 
                                                | (3U 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d6[0U]))))))));
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__layer_st) 
             | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_pipe_valid) 
                & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_group_end) 
                   & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_stripe_end))))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_byte_avl_last 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_byte_avl_w;
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_pipe_pvld_d6) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_last_stripe_end 
                = (1U & (IData)((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_pipe_pd_d6 
                                 >> 0x0000001dU)));
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__layer_st) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__is_fp16_d1 
                = (2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__reg2dp_proc_precision));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__is_int8_d1 
                = (0U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__reg2dp_proc_precision));
        }
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_byte_avl_last = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_last_stripe_end = 1U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__is_fp16_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__is_int8_d1 = 0U;
    }
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__is_int8_d1) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_bmask[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_emask[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_bmask[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_emask[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_bmask[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_emask[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_bmask[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_emask[3U];
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_bmask[0U] 
            = __Vtemp_13[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_bmask[1U] 
            = __Vtemp_12[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_bmask[2U] 
            = __Vtemp_12[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_bmask[3U] 
            = __Vtemp_12[2U];
    }
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_pipe_pvld_d6) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_sel_d1 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_sel_w;
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_en_d6) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__dec_input_mask[0U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d1_w[0U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__dec_input_mask[1U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d1_w[1U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__dec_input_mask[2U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d1_w[2U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__dec_input_mask[3U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d1_w[3U];
        }
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_sel_d1 = 1U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__dec_input_mask[0U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__dec_input_mask[1U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__dec_input_mask[2U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__dec_input_mask[3U] = 0U;
    }
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__is_int8_d1) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d1_w[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d6[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d1_w[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d6[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d1_w[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d6[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d1_w[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d6[3U];
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d1_w[0U] 
            = __Vtemp_15[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d1_w[1U] 
            = __Vtemp_14[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d1_w[2U] 
            = __Vtemp_14[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d1_w[3U] 
            = __Vtemp_14[2U];
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_sel_w 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_last_stripe_end)
            ? 1U : ((0x0000fffeU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_sel_d1) 
                                    << 1U)) | (1U & 
                                               ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_sel_d1) 
                                                >> 0x0000000fU))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__dec_input_mask_en 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_)
            ? (0x000003ffU & (- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_en_d6))))
            : 0U);
    if ((0x00000100U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__dec_input_mask_en))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[0U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__dec_input_mask[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[1U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__dec_input_mask[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[2U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__dec_input_mask[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[3U] 
            = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__dec_input_mask[3U];
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[0U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[1U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[2U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[3U] = 0U;
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_en_d6 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_en_d5));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_emask_p4 
        = ((~ VL_SHIFTL_QQI(64,64,7, 0xffffffffffffffffULL, (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_ori_element))) 
           & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_emask_hi);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4073 = VL_SHIFTR_QQI(64,64,7, vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_emask_hi, 
                                                                (0x0000007fU 
                                                                 & VL_SHIFTL_III(7,7,32, (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_ori_element), 1U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4074 = VL_SHIFTR_QQI(64,64,7, vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_emask_hi, (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_ori_sft_3));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4072 = VL_SHIFTR_QQI(64,64,7, vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_emask_hi, (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_ori_element));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_emask_p1 
        = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4069) 
           & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4428);
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_001 
        = (3U & ((1U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[0U]) 
                 + (1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[0U] 
                          >> 1U))));
    __Vdeeptemp_h73d84302__0 = ((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[0U] 
                                       >> 0x0000000aU)) 
                                + ((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[0U] 
                                          >> 0x0000000bU)) 
                                   + ((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[0U] 
                                             >> 0x0000000cU)) 
                                      + ((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[0U] 
                                                >> 0x0000000dU)) 
                                         + ((1U & (
                                                   vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[0U] 
                                                   >> 0x0000000eU)) 
                                            + ((1U 
                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[0U] 
                                                   >> 0x0000000fU)) 
                                               + ((1U 
                                                   & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[0U] 
                                                      >> 0x00000010U)) 
                                                  + 
                                                  ((1U 
                                                    & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[0U] 
                                                       >> 0x00000011U)) 
                                                   + 
                                                   ((1U 
                                                     & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[0U] 
                                                        >> 0x00000012U)) 
                                                    + 
                                                    ((1U 
                                                      & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[0U] 
                                                         >> 0x00000013U)) 
                                                     + 
                                                     ((1U 
                                                       & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[0U] 
                                                          >> 0x00000014U)) 
                                                      + 
                                                      ((1U 
                                                        & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[0U] 
                                                           >> 0x00000015U)) 
                                                       + 
                                                       ((1U 
                                                         & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[0U] 
                                                            >> 0x00000016U)) 
                                                        + 
                                                        ((1U 
                                                          & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[0U] 
                                                             >> 0x00000017U)) 
                                                         + 
                                                         ((1U 
                                                           & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[0U] 
                                                              >> 0x00000018U)) 
                                                          + 
                                                          ((1U 
                                                            & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[0U] 
                                                               >> 0x00000019U)) 
                                                           + 
                                                           ((1U 
                                                             & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[0U] 
                                                                >> 0x0000001aU)) 
                                                            + 
                                                            ((1U 
                                                              & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[0U] 
                                                                 >> 0x0000001bU)) 
                                                             + 
                                                             ((1U 
                                                               & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[0U] 
                                                                  >> 0x0000001cU)) 
                                                              + 
                                                              ((1U 
                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[0U] 
                                                                   >> 0x0000001dU)) 
                                                               + 
                                                               ((1U 
                                                                 & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[0U] 
                                                                    >> 0x0000001eU)) 
                                                                + 
                                                                ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[0U] 
                                                                  >> 0x0000001fU) 
                                                                 + 
                                                                 ((1U 
                                                                   & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[1U]) 
                                                                  + 
                                                                  ((1U 
                                                                    & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[1U] 
                                                                       >> 1U)) 
                                                                   + 
                                                                   ((1U 
                                                                     & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[1U] 
                                                                        >> 2U)) 
                                                                    + 
                                                                    ((1U 
                                                                      & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[1U] 
                                                                         >> 3U)) 
                                                                     + 
                                                                     ((1U 
                                                                       & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[1U] 
                                                                          >> 4U)) 
                                                                      + 
                                                                      ((1U 
                                                                        & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[1U] 
                                                                           >> 5U)) 
                                                                       + 
                                                                       ((1U 
                                                                         & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[1U] 
                                                                            >> 6U)) 
                                                                        + 
                                                                        ((1U 
                                                                          & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[1U] 
                                                                             >> 7U)) 
                                                                         + 
                                                                         ((1U 
                                                                           & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[1U] 
                                                                              >> 8U)) 
                                                                          + 
                                                                          ((1U 
                                                                            & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[1U] 
                                                                               >> 9U)) 
                                                                           + 
                                                                           ((1U 
                                                                             & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[1U] 
                                                                                >> 0x0000000aU)) 
                                                                            + 
                                                                            ((1U 
                                                                              & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[1U] 
                                                                                >> 0x0000000bU)) 
                                                                             + 
                                                                             ((1U 
                                                                               & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[1U] 
                                                                                >> 0x0000000cU)) 
                                                                              + 
                                                                              ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[1U] 
                                                                                >> 0x0000000dU)) 
                                                                               + 
                                                                               ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[1U] 
                                                                                >> 0x0000000eU)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[1U] 
                                                                                >> 0x0000000fU)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[1U] 
                                                                                >> 0x00000010U)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[1U] 
                                                                                >> 0x00000011U)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[1U] 
                                                                                >> 0x00000012U)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[1U] 
                                                                                >> 0x00000013U)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[1U] 
                                                                                >> 0x00000014U)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[1U] 
                                                                                >> 0x00000015U)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[1U] 
                                                                                >> 0x00000016U)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[1U] 
                                                                                >> 0x00000017U)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[1U] 
                                                                                >> 0x00000018U)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[1U] 
                                                                                >> 0x00000019U)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[1U] 
                                                                                >> 0x0000001aU)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[1U] 
                                                                                >> 0x0000001bU)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[1U] 
                                                                                >> 0x0000001cU)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[1U] 
                                                                                >> 0x0000001dU)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[1U] 
                                                                                >> 0x0000001eU)) 
                                                                                + 
                                                                                ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[1U] 
                                                                                >> 0x0000001fU) 
                                                                                + 
                                                                                ((1U 
                                                                                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[2U]) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[2U] 
                                                                                >> 1U)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[2U] 
                                                                                >> 2U)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[2U] 
                                                                                >> 3U)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[2U] 
                                                                                >> 4U)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[2U] 
                                                                                >> 5U)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[2U] 
                                                                                >> 6U)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[2U] 
                                                                                >> 7U)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[2U] 
                                                                                >> 8U)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[2U] 
                                                                                >> 9U)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[2U] 
                                                                                >> 0x0000000aU)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[2U] 
                                                                                >> 0x0000000bU)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[2U] 
                                                                                >> 0x0000000cU)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[2U] 
                                                                                >> 0x0000000dU)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[2U] 
                                                                                >> 0x0000000eU)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[2U] 
                                                                                >> 0x0000000fU)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[2U] 
                                                                                >> 0x00000010U)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[2U] 
                                                                                >> 0x00000011U)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[2U] 
                                                                                >> 0x00000012U)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[2U] 
                                                                                >> 0x00000013U)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[2U] 
                                                                                >> 0x00000014U)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[2U] 
                                                                                >> 0x00000015U)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[2U] 
                                                                                >> 0x00000016U)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[2U] 
                                                                                >> 0x00000017U)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[2U] 
                                                                                >> 0x00000018U)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[2U] 
                                                                                >> 0x00000019U)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[2U] 
                                                                                >> 0x0000001aU)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[2U] 
                                                                                >> 0x0000001bU)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[2U] 
                                                                                >> 0x0000001cU)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[2U] 
                                                                                >> 0x0000001dU)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[2U] 
                                                                                >> 0x0000001eU)) 
                                                                                + 
                                                                                ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[2U] 
                                                                                >> 0x0000001fU) 
                                                                                + 
                                                                                ((1U 
                                                                                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[3U]) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[3U] 
                                                                                >> 1U)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[3U] 
                                                                                >> 2U)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[3U] 
                                                                                >> 3U)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[3U] 
                                                                                >> 4U)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[3U] 
                                                                                >> 5U)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[3U] 
                                                                                >> 6U)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[3U] 
                                                                                >> 7U)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[3U] 
                                                                                >> 8U)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[3U] 
                                                                                >> 9U)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[3U] 
                                                                                >> 0x0000000aU)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[3U] 
                                                                                >> 0x0000000bU)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[3U] 
                                                                                >> 0x0000000cU)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[3U] 
                                                                                >> 0x0000000dU)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[3U] 
                                                                                >> 0x0000000eU)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[3U] 
                                                                                >> 0x0000000fU)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[3U] 
                                                                                >> 0x00000010U)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[3U] 
                                                                                >> 0x00000011U)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[3U] 
                                                                                >> 0x00000012U)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[3U] 
                                                                                >> 0x00000013U)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[3U] 
                                                                                >> 0x00000014U)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[3U] 
                                                                                >> 0x00000015U)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[3U] 
                                                                                >> 0x00000016U)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[3U] 
                                                                                >> 0x00000017U)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[3U] 
                                                                                >> 0x00000018U)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[3U] 
                                                                                >> 0x00000019U)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[3U] 
                                                                                >> 0x0000001aU)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[3U] 
                                                                                >> 0x0000001bU)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[3U] 
                                                                                >> 0x0000001cU)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[3U] 
                                                                                >> 0x0000001dU)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[3U] 
                                                                                >> 0x0000001eU)) 
                                                                                + 
                                                                                (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[3U] 
                                                                                >> 0x0000001fU))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_127 
        = (0x000000ffU & (((1U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[0U]) 
                           + (1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[0U] 
                                    >> 1U))) + (((1U 
                                                  & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[0U] 
                                                     >> 2U)) 
                                                 + 
                                                 (1U 
                                                  & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[0U] 
                                                     >> 3U))) 
                                                + (
                                                   (1U 
                                                    & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[0U] 
                                                       >> 4U)) 
                                                   + 
                                                   ((1U 
                                                     & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[0U] 
                                                        >> 5U)) 
                                                    + 
                                                    ((1U 
                                                      & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[0U] 
                                                         >> 6U)) 
                                                     + 
                                                     ((1U 
                                                       & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[0U] 
                                                          >> 7U)) 
                                                      + 
                                                      ((1U 
                                                        & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[0U] 
                                                           >> 8U)) 
                                                       + 
                                                       ((1U 
                                                         & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[0U] 
                                                            >> 9U)) 
                                                        + __Vdeeptemp_h73d84302__0)))))))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_003 
        = (7U & (((1U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[0U]) 
                  + (1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[0U] 
                           >> 1U))) + ((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[0U] 
                                              >> 2U)) 
                                       + (1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[0U] 
                                                >> 3U)))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_007 
        = (0x0000000fU & (((1U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[0U]) 
                           + (1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[0U] 
                                    >> 1U))) + (((1U 
                                                  & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[0U] 
                                                     >> 2U)) 
                                                 + 
                                                 (1U 
                                                  & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[0U] 
                                                     >> 3U))) 
                                                + (
                                                   (1U 
                                                    & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[0U] 
                                                       >> 4U)) 
                                                   + 
                                                   ((1U 
                                                     & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[0U] 
                                                        >> 5U)) 
                                                    + 
                                                    ((1U 
                                                      & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[0U] 
                                                         >> 6U)) 
                                                     + 
                                                     (1U 
                                                      & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[0U] 
                                                         >> 7U))))))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_015 
        = (0x0000001fU & (((1U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[0U]) 
                           + (1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[0U] 
                                    >> 1U))) + (((1U 
                                                  & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[0U] 
                                                     >> 2U)) 
                                                 + 
                                                 (1U 
                                                  & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[0U] 
                                                     >> 3U))) 
                                                + (
                                                   (1U 
                                                    & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[0U] 
                                                       >> 4U)) 
                                                   + 
                                                   ((1U 
                                                     & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[0U] 
                                                        >> 5U)) 
                                                    + 
                                                    ((1U 
                                                      & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[0U] 
                                                         >> 6U)) 
                                                     + 
                                                     ((1U 
                                                       & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[0U] 
                                                          >> 7U)) 
                                                      + 
                                                      ((1U 
                                                        & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[0U] 
                                                           >> 8U)) 
                                                       + 
                                                       ((1U 
                                                         & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[0U] 
                                                            >> 9U)) 
                                                        + 
                                                        ((1U 
                                                          & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[0U] 
                                                             >> 0x0000000aU)) 
                                                         + 
                                                         ((1U 
                                                           & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[0U] 
                                                              >> 0x0000000bU)) 
                                                          + 
                                                          ((1U 
                                                            & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[0U] 
                                                               >> 0x0000000cU)) 
                                                           + 
                                                           ((1U 
                                                             & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[0U] 
                                                                >> 0x0000000dU)) 
                                                            + 
                                                            ((1U 
                                                              & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[0U] 
                                                                 >> 0x0000000eU)) 
                                                             + 
                                                             (1U 
                                                              & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[0U] 
                                                                 >> 0x0000000fU))))))))))))))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_031 
        = (0x0000003fU & (((1U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[0U]) 
                           + (1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[0U] 
                                    >> 1U))) + (((1U 
                                                  & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[0U] 
                                                     >> 2U)) 
                                                 + 
                                                 (1U 
                                                  & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[0U] 
                                                     >> 3U))) 
                                                + (
                                                   (1U 
                                                    & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[0U] 
                                                       >> 4U)) 
                                                   + 
                                                   ((1U 
                                                     & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[0U] 
                                                        >> 5U)) 
                                                    + 
                                                    ((1U 
                                                      & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[0U] 
                                                         >> 6U)) 
                                                     + 
                                                     ((1U 
                                                       & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[0U] 
                                                          >> 7U)) 
                                                      + 
                                                      ((1U 
                                                        & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[0U] 
                                                           >> 8U)) 
                                                       + 
                                                       ((1U 
                                                         & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[0U] 
                                                            >> 9U)) 
                                                        + 
                                                        ((1U 
                                                          & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[0U] 
                                                             >> 0x0000000aU)) 
                                                         + 
                                                         ((1U 
                                                           & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[0U] 
                                                              >> 0x0000000bU)) 
                                                          + 
                                                          ((1U 
                                                            & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[0U] 
                                                               >> 0x0000000cU)) 
                                                           + 
                                                           ((1U 
                                                             & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[0U] 
                                                                >> 0x0000000dU)) 
                                                            + 
                                                            ((1U 
                                                              & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[0U] 
                                                                 >> 0x0000000eU)) 
                                                             + 
                                                             ((1U 
                                                               & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[0U] 
                                                                  >> 0x0000000fU)) 
                                                              + 
                                                              ((1U 
                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[0U] 
                                                                   >> 0x00000010U)) 
                                                               + 
                                                               ((1U 
                                                                 & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[0U] 
                                                                    >> 0x00000011U)) 
                                                                + 
                                                                ((1U 
                                                                  & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[0U] 
                                                                     >> 0x00000012U)) 
                                                                 + 
                                                                 ((1U 
                                                                   & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[0U] 
                                                                      >> 0x00000013U)) 
                                                                  + 
                                                                  ((1U 
                                                                    & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[0U] 
                                                                       >> 0x00000014U)) 
                                                                   + 
                                                                   ((1U 
                                                                     & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[0U] 
                                                                        >> 0x00000015U)) 
                                                                    + 
                                                                    ((1U 
                                                                      & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[0U] 
                                                                         >> 0x00000016U)) 
                                                                     + 
                                                                     ((1U 
                                                                       & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[0U] 
                                                                          >> 0x00000017U)) 
                                                                      + 
                                                                      ((1U 
                                                                        & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[0U] 
                                                                           >> 0x00000018U)) 
                                                                       + 
                                                                       ((1U 
                                                                         & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[0U] 
                                                                            >> 0x00000019U)) 
                                                                        + 
                                                                        ((1U 
                                                                          & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[0U] 
                                                                             >> 0x0000001aU)) 
                                                                         + 
                                                                         ((1U 
                                                                           & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[0U] 
                                                                              >> 0x0000001bU)) 
                                                                          + 
                                                                          ((1U 
                                                                            & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[0U] 
                                                                               >> 0x0000001cU)) 
                                                                           + 
                                                                           ((1U 
                                                                             & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[0U] 
                                                                                >> 0x0000001dU)) 
                                                                            + 
                                                                            ((1U 
                                                                              & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[0U] 
                                                                                >> 0x0000001eU)) 
                                                                             + 
                                                                             (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[0U] 
                                                                              >> 0x0000001fU)))))))))))))))))))))))))))))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_063 
        = (0x0000007fU & (((1U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[0U]) 
                           + (1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[0U] 
                                    >> 1U))) + (((1U 
                                                  & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[0U] 
                                                     >> 2U)) 
                                                 + 
                                                 (1U 
                                                  & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[0U] 
                                                     >> 3U))) 
                                                + (
                                                   (1U 
                                                    & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[0U] 
                                                       >> 4U)) 
                                                   + 
                                                   ((1U 
                                                     & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[0U] 
                                                        >> 5U)) 
                                                    + 
                                                    ((1U 
                                                      & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[0U] 
                                                         >> 6U)) 
                                                     + 
                                                     ((1U 
                                                       & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[0U] 
                                                          >> 7U)) 
                                                      + 
                                                      ((1U 
                                                        & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[0U] 
                                                           >> 8U)) 
                                                       + 
                                                       ((1U 
                                                         & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[0U] 
                                                            >> 9U)) 
                                                        + 
                                                        ((1U 
                                                          & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[0U] 
                                                             >> 0x0000000aU)) 
                                                         + 
                                                         ((1U 
                                                           & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[0U] 
                                                              >> 0x0000000bU)) 
                                                          + 
                                                          ((1U 
                                                            & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[0U] 
                                                               >> 0x0000000cU)) 
                                                           + 
                                                           ((1U 
                                                             & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[0U] 
                                                                >> 0x0000000dU)) 
                                                            + 
                                                            ((1U 
                                                              & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[0U] 
                                                                 >> 0x0000000eU)) 
                                                             + 
                                                             ((1U 
                                                               & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[0U] 
                                                                  >> 0x0000000fU)) 
                                                              + 
                                                              ((1U 
                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[0U] 
                                                                   >> 0x00000010U)) 
                                                               + 
                                                               ((1U 
                                                                 & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[0U] 
                                                                    >> 0x00000011U)) 
                                                                + 
                                                                ((1U 
                                                                  & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[0U] 
                                                                     >> 0x00000012U)) 
                                                                 + 
                                                                 ((1U 
                                                                   & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[0U] 
                                                                      >> 0x00000013U)) 
                                                                  + 
                                                                  ((1U 
                                                                    & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[0U] 
                                                                       >> 0x00000014U)) 
                                                                   + 
                                                                   ((1U 
                                                                     & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[0U] 
                                                                        >> 0x00000015U)) 
                                                                    + 
                                                                    ((1U 
                                                                      & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[0U] 
                                                                         >> 0x00000016U)) 
                                                                     + 
                                                                     ((1U 
                                                                       & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[0U] 
                                                                          >> 0x00000017U)) 
                                                                      + 
                                                                      ((1U 
                                                                        & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[0U] 
                                                                           >> 0x00000018U)) 
                                                                       + 
                                                                       ((1U 
                                                                         & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[0U] 
                                                                            >> 0x00000019U)) 
                                                                        + 
                                                                        ((1U 
                                                                          & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[0U] 
                                                                             >> 0x0000001aU)) 
                                                                         + 
                                                                         ((1U 
                                                                           & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[0U] 
                                                                              >> 0x0000001bU)) 
                                                                          + 
                                                                          ((1U 
                                                                            & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[0U] 
                                                                               >> 0x0000001cU)) 
                                                                           + 
                                                                           ((1U 
                                                                             & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[0U] 
                                                                                >> 0x0000001dU)) 
                                                                            + 
                                                                            ((1U 
                                                                              & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[0U] 
                                                                                >> 0x0000001eU)) 
                                                                             + 
                                                                             ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[0U] 
                                                                               >> 0x0000001fU) 
                                                                              + 
                                                                              ((1U 
                                                                                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[1U]) 
                                                                               + 
                                                                               ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[1U] 
                                                                                >> 1U)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[1U] 
                                                                                >> 2U)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[1U] 
                                                                                >> 3U)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[1U] 
                                                                                >> 4U)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[1U] 
                                                                                >> 5U)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[1U] 
                                                                                >> 6U)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[1U] 
                                                                                >> 7U)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[1U] 
                                                                                >> 8U)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[1U] 
                                                                                >> 9U)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[1U] 
                                                                                >> 0x0000000aU)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[1U] 
                                                                                >> 0x0000000bU)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[1U] 
                                                                                >> 0x0000000cU)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[1U] 
                                                                                >> 0x0000000dU)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[1U] 
                                                                                >> 0x0000000eU)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[1U] 
                                                                                >> 0x0000000fU)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[1U] 
                                                                                >> 0x00000010U)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[1U] 
                                                                                >> 0x00000011U)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[1U] 
                                                                                >> 0x00000012U)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[1U] 
                                                                                >> 0x00000013U)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[1U] 
                                                                                >> 0x00000014U)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[1U] 
                                                                                >> 0x00000015U)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[1U] 
                                                                                >> 0x00000016U)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[1U] 
                                                                                >> 0x00000017U)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[1U] 
                                                                                >> 0x00000018U)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[1U] 
                                                                                >> 0x00000019U)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[1U] 
                                                                                >> 0x0000001aU)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[1U] 
                                                                                >> 0x0000001bU)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[1U] 
                                                                                >> 0x0000001cU)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[1U] 
                                                                                >> 0x0000001dU)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[1U] 
                                                                                >> 0x0000001eU)) 
                                                                                + 
                                                                                (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[1U] 
                                                                                >> 0x0000001fU)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__valid_d1 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__dec_input_pipe_valid));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_emask_p5 
        = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4072) 
           & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4428);
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_pipe_pvld_d6) {
            VL_SHIFTL_WWI(1024,1024,10, __Vtemp_7, vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_rd_data_d6, 
                          ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_byte_remain) 
                           << 3U));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__dec_input_data[0U] 
                = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_rd_valid_d6)
                     ? __Vtemp_7[0U] : Vsim__ConstPool__CONST_hd6b7ba52_0[0U]) 
                   | ((0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_byte_remain))
                       ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_data_remain[0U]
                       : Vsim__ConstPool__CONST_h4ae1d737_0[0U]));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__dec_input_data[1U] 
                = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_rd_valid_d6)
                     ? __Vtemp_7[1U] : Vsim__ConstPool__CONST_hd6b7ba52_0[1U]) 
                   | ((0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_byte_remain))
                       ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_data_remain[1U]
                       : Vsim__ConstPool__CONST_h4ae1d737_0[1U]));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__dec_input_data[2U] 
                = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_rd_valid_d6)
                     ? __Vtemp_7[2U] : Vsim__ConstPool__CONST_hd6b7ba52_0[2U]) 
                   | ((0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_byte_remain))
                       ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_data_remain[2U]
                       : Vsim__ConstPool__CONST_h4ae1d737_0[2U]));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__dec_input_data[3U] 
                = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_rd_valid_d6)
                     ? __Vtemp_7[3U] : Vsim__ConstPool__CONST_hd6b7ba52_0[3U]) 
                   | ((0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_byte_remain))
                       ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_data_remain[3U]
                       : Vsim__ConstPool__CONST_h4ae1d737_0[3U]));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__dec_input_data[4U] 
                = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_rd_valid_d6)
                     ? __Vtemp_7[4U] : Vsim__ConstPool__CONST_hd6b7ba52_0[4U]) 
                   | ((0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_byte_remain))
                       ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_data_remain[4U]
                       : Vsim__ConstPool__CONST_h4ae1d737_0[4U]));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__dec_input_data[5U] 
                = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_rd_valid_d6)
                     ? __Vtemp_7[5U] : Vsim__ConstPool__CONST_hd6b7ba52_0[5U]) 
                   | ((0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_byte_remain))
                       ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_data_remain[5U]
                       : Vsim__ConstPool__CONST_h4ae1d737_0[5U]));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__dec_input_data[6U] 
                = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_rd_valid_d6)
                     ? __Vtemp_7[6U] : Vsim__ConstPool__CONST_hd6b7ba52_0[6U]) 
                   | ((0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_byte_remain))
                       ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_data_remain[6U]
                       : Vsim__ConstPool__CONST_h4ae1d737_0[6U]));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__dec_input_data[7U] 
                = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_rd_valid_d6)
                     ? __Vtemp_7[7U] : Vsim__ConstPool__CONST_hd6b7ba52_0[7U]) 
                   | ((0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_byte_remain))
                       ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_data_remain[7U]
                       : Vsim__ConstPool__CONST_h4ae1d737_0[7U]));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__dec_input_data[8U] 
                = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_rd_valid_d6)
                     ? __Vtemp_7[8U] : Vsim__ConstPool__CONST_hd6b7ba52_0[8U]) 
                   | ((0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_byte_remain))
                       ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_data_remain[8U]
                       : Vsim__ConstPool__CONST_h4ae1d737_0[8U]));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__dec_input_data[9U] 
                = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_rd_valid_d6)
                     ? __Vtemp_7[9U] : Vsim__ConstPool__CONST_hd6b7ba52_0[9U]) 
                   | ((0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_byte_remain))
                       ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_data_remain[9U]
                       : Vsim__ConstPool__CONST_h4ae1d737_0[9U]));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__dec_input_data[0x0000000aU] 
                = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_rd_valid_d6)
                     ? __Vtemp_7[0x0000000aU] : Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000000aU]) 
                   | ((0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_byte_remain))
                       ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_data_remain[0x0000000aU]
                       : Vsim__ConstPool__CONST_h4ae1d737_0[0x0000000aU]));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__dec_input_data[0x0000000bU] 
                = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_rd_valid_d6)
                     ? __Vtemp_7[0x0000000bU] : Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000000bU]) 
                   | ((0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_byte_remain))
                       ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_data_remain[0x0000000bU]
                       : Vsim__ConstPool__CONST_h4ae1d737_0[0x0000000bU]));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__dec_input_data[0x0000000cU] 
                = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_rd_valid_d6)
                     ? __Vtemp_7[0x0000000cU] : Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000000cU]) 
                   | ((0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_byte_remain))
                       ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_data_remain[0x0000000cU]
                       : Vsim__ConstPool__CONST_h4ae1d737_0[0x0000000cU]));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__dec_input_data[0x0000000dU] 
                = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_rd_valid_d6)
                     ? __Vtemp_7[0x0000000dU] : Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000000dU]) 
                   | ((0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_byte_remain))
                       ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_data_remain[0x0000000dU]
                       : Vsim__ConstPool__CONST_h4ae1d737_0[0x0000000dU]));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__dec_input_data[0x0000000eU] 
                = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_rd_valid_d6)
                     ? __Vtemp_7[0x0000000eU] : Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000000eU]) 
                   | ((0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_byte_remain))
                       ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_data_remain[0x0000000eU]
                       : Vsim__ConstPool__CONST_h4ae1d737_0[0x0000000eU]));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__dec_input_data[0x0000000fU] 
                = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_rd_valid_d6)
                     ? __Vtemp_7[0x0000000fU] : Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000000fU]) 
                   | ((0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_byte_remain))
                       ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_data_remain[0x0000000fU]
                       : Vsim__ConstPool__CONST_h4ae1d737_0[0x0000000fU]));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__dec_input_data[0x00000010U] 
                = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_rd_valid_d6)
                     ? __Vtemp_7[0x00000010U] : Vsim__ConstPool__CONST_hd6b7ba52_0[0x00000010U]) 
                   | ((0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_byte_remain))
                       ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_data_remain[0x00000010U]
                       : Vsim__ConstPool__CONST_h4ae1d737_0[0x00000010U]));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__dec_input_data[0x00000011U] 
                = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_rd_valid_d6)
                     ? __Vtemp_7[0x00000011U] : Vsim__ConstPool__CONST_hd6b7ba52_0[0x00000011U]) 
                   | ((0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_byte_remain))
                       ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_data_remain[0x00000011U]
                       : Vsim__ConstPool__CONST_h4ae1d737_0[0x00000011U]));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__dec_input_data[0x00000012U] 
                = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_rd_valid_d6)
                     ? __Vtemp_7[0x00000012U] : Vsim__ConstPool__CONST_hd6b7ba52_0[0x00000012U]) 
                   | ((0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_byte_remain))
                       ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_data_remain[0x00000012U]
                       : Vsim__ConstPool__CONST_h4ae1d737_0[0x00000012U]));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__dec_input_data[0x00000013U] 
                = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_rd_valid_d6)
                     ? __Vtemp_7[0x00000013U] : Vsim__ConstPool__CONST_hd6b7ba52_0[0x00000013U]) 
                   | ((0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_byte_remain))
                       ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_data_remain[0x00000013U]
                       : Vsim__ConstPool__CONST_h4ae1d737_0[0x00000013U]));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__dec_input_data[0x00000014U] 
                = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_rd_valid_d6)
                     ? __Vtemp_7[0x00000014U] : Vsim__ConstPool__CONST_hd6b7ba52_0[0x00000014U]) 
                   | ((0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_byte_remain))
                       ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_data_remain[0x00000014U]
                       : Vsim__ConstPool__CONST_h4ae1d737_0[0x00000014U]));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__dec_input_data[0x00000015U] 
                = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_rd_valid_d6)
                     ? __Vtemp_7[0x00000015U] : Vsim__ConstPool__CONST_hd6b7ba52_0[0x00000015U]) 
                   | ((0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_byte_remain))
                       ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_data_remain[0x00000015U]
                       : Vsim__ConstPool__CONST_h4ae1d737_0[0x00000015U]));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__dec_input_data[0x00000016U] 
                = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_rd_valid_d6)
                     ? __Vtemp_7[0x00000016U] : Vsim__ConstPool__CONST_hd6b7ba52_0[0x00000016U]) 
                   | ((0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_byte_remain))
                       ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_data_remain[0x00000016U]
                       : Vsim__ConstPool__CONST_h4ae1d737_0[0x00000016U]));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__dec_input_data[0x00000017U] 
                = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_rd_valid_d6)
                     ? __Vtemp_7[0x00000017U] : Vsim__ConstPool__CONST_hd6b7ba52_0[0x00000017U]) 
                   | ((0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_byte_remain))
                       ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_data_remain[0x00000017U]
                       : Vsim__ConstPool__CONST_h4ae1d737_0[0x00000017U]));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__dec_input_data[0x00000018U] 
                = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_rd_valid_d6)
                     ? __Vtemp_7[0x00000018U] : Vsim__ConstPool__CONST_hd6b7ba52_0[0x00000018U]) 
                   | ((0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_byte_remain))
                       ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_data_remain[0x00000018U]
                       : Vsim__ConstPool__CONST_h4ae1d737_0[0x00000018U]));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__dec_input_data[0x00000019U] 
                = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_rd_valid_d6)
                     ? __Vtemp_7[0x00000019U] : Vsim__ConstPool__CONST_hd6b7ba52_0[0x00000019U]) 
                   | ((0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_byte_remain))
                       ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_data_remain[0x00000019U]
                       : Vsim__ConstPool__CONST_h4ae1d737_0[0x00000019U]));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__dec_input_data[0x0000001aU] 
                = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_rd_valid_d6)
                     ? __Vtemp_7[0x0000001aU] : Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000001aU]) 
                   | ((0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_byte_remain))
                       ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_data_remain[0x0000001aU]
                       : Vsim__ConstPool__CONST_h4ae1d737_0[0x0000001aU]));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__dec_input_data[0x0000001bU] 
                = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_rd_valid_d6)
                     ? __Vtemp_7[0x0000001bU] : Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000001bU]) 
                   | ((0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_byte_remain))
                       ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_data_remain[0x0000001bU]
                       : Vsim__ConstPool__CONST_h4ae1d737_0[0x0000001bU]));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__dec_input_data[0x0000001cU] 
                = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_rd_valid_d6)
                     ? __Vtemp_7[0x0000001cU] : Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000001cU]) 
                   | ((0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_byte_remain))
                       ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_data_remain[0x0000001cU]
                       : Vsim__ConstPool__CONST_h4ae1d737_0[0x0000001cU]));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__dec_input_data[0x0000001dU] 
                = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_rd_valid_d6)
                     ? __Vtemp_7[0x0000001dU] : Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000001dU]) 
                   | ((0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_byte_remain))
                       ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_data_remain[0x0000001dU]
                       : Vsim__ConstPool__CONST_h4ae1d737_0[0x0000001dU]));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__dec_input_data[0x0000001eU] 
                = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_rd_valid_d6)
                     ? __Vtemp_7[0x0000001eU] : Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000001eU]) 
                   | ((0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_byte_remain))
                       ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_data_remain[0x0000001eU]
                       : Vsim__ConstPool__CONST_h4ae1d737_0[0x0000001eU]));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__dec_input_data[0x0000001fU] 
                = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p1_rd_valid_d6)
                     ? __Vtemp_7[0x0000001fU] : Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000001fU]) 
                   | ((0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_byte_remain))
                       ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_data_remain[0x0000001fU]
                       : Vsim__ConstPool__CONST_h4ae1d737_0[0x0000001fU]));
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rls) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2cdma_wmb_entries 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rls_wmb_entries;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2cdma_wt_entries 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rls_wt_entries;
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__layer_st) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__weight_bank 
                = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_weight_bank)));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__data_bank 
                = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__reg2dp_data_bank)));
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__is_compressed_d1) 
             & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__addr_init) 
                | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_req_valid) 
                   | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4063) 
                      & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wl_in_pd_d1 
                         >> 0x0000000fU)))))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_req_addr 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_req_addr_w;
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__addr_init) 
             | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_valid) 
                | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_channel_end) 
                   & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_pipe_valid))))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_addr 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_addr_w;
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_en_d4) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d5[0U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d4[0U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d5[1U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d4[1U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d5[2U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d4[2U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d5[3U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d4[3U];
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_pipe_pvld_d5) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_pipe_pd_d6 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_pipe_pd_d5;
        }
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__dec_input_data[0U] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__dec_input_data[1U] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__dec_input_data[2U] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__dec_input_data[3U] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__dec_input_data[4U] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__dec_input_data[5U] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__dec_input_data[6U] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__dec_input_data[7U] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__dec_input_data[8U] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[8U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__dec_input_data[9U] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[9U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__dec_input_data[0x0000000aU] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000000aU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__dec_input_data[0x0000000bU] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000000bU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__dec_input_data[0x0000000cU] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000000cU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__dec_input_data[0x0000000dU] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000000dU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__dec_input_data[0x0000000eU] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000000eU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__dec_input_data[0x0000000fU] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000000fU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__dec_input_data[0x00000010U] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x00000010U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__dec_input_data[0x00000011U] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x00000011U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__dec_input_data[0x00000012U] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x00000012U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__dec_input_data[0x00000013U] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x00000013U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__dec_input_data[0x00000014U] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x00000014U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__dec_input_data[0x00000015U] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x00000015U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__dec_input_data[0x00000016U] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x00000016U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__dec_input_data[0x00000017U] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x00000017U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__dec_input_data[0x00000018U] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x00000018U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__dec_input_data[0x00000019U] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x00000019U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__dec_input_data[0x0000001aU] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000001aU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__dec_input_data[0x0000001bU] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000001bU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__dec_input_data[0x0000001cU] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000001cU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__dec_input_data[0x0000001dU] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000001dU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__dec_input_data[0x0000001eU] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000001eU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__dec_input_data[0x0000001fU] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000001fU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2cdma_wmb_entries = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__sc2cdma_wt_entries = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__weight_bank = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_req_addr = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__data_bank = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_addr = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d5[0U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d5[1U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d5[2U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d5[3U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_pipe_pd_d6 = 0ULL;
    }
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4421 = (IData)(
                                                          (0x0000000040000000ULL 
                                                           == 
                                                           (0x00000000c0000000ULL 
                                                            & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_pipe_pd_d6)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_004 
        = (7U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_003) 
                 + (1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[0U] 
                          >> 4U))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_008 
        = (0x0000000fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_007) 
                          + (1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[0U] 
                                   >> 8U))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_016 
        = (0x0000001fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_015) 
                          + (1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[0U] 
                                   >> 0x00000010U))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_032 
        = (0x0000003fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_031) 
                          + (1U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[1U])));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_064 
        = (0x0000007fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_063) 
                          + (1U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[2U])));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_en_d5 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_en_d4));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_005 
        = (7U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_004) 
                 + (1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[0U] 
                          >> 5U))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_009 
        = (0x0000000fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_008) 
                          + (1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[0U] 
                                   >> 9U))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_017 
        = (0x0000001fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_016) 
                          + (1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[0U] 
                                   >> 0x00000011U))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_033 
        = (0x0000003fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_032) 
                          + (1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[1U] 
                                   >> 1U))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_065 
        = (0x0000007fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_064) 
                          + (1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[2U] 
                                   >> 1U))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__dec_input_pipe_valid 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_pipe_pvld_d6));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_010 
        = (0x0000000fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_009) 
                          + (1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[0U] 
                                   >> 0x0000000aU))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_018 
        = (0x0000001fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_017) 
                          + (1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[0U] 
                                   >> 0x00000012U))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_034 
        = (0x0000003fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_033) 
                          + (1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[1U] 
                                   >> 2U))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_066 
        = (0x0000007fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_065) 
                          + (1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[2U] 
                                   >> 2U))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_en_d4 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_en_d3));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_011 
        = (0x0000000fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_010) 
                          + (1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[0U] 
                                   >> 0x0000000bU))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_019 
        = (0x0000001fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_018) 
                          + (1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[0U] 
                                   >> 0x00000013U))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_035 
        = (0x0000003fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_034) 
                          + (1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[1U] 
                                   >> 3U))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_067 
        = (0x0000007fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_066) 
                          + (1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[2U] 
                                   >> 3U))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_012 
        = (0x0000000fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_011) 
                          + (1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[0U] 
                                   >> 0x0000000cU))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_020 
        = (0x0000001fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_019) 
                          + (1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[0U] 
                                   >> 0x00000014U))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_036 
        = (0x0000003fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_035) 
                          + (1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[1U] 
                                   >> 4U))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_068 
        = (0x0000007fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_067) 
                          + (1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[2U] 
                                   >> 4U))));
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__layer_st) 
             | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_pipe_pvld_d6))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_byte_remain 
                = (0x0000007fU & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4077));
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_en_d3) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d4[0U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d3[0U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d4[1U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d3[1U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d4[2U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d3[2U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d4[3U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d3[3U];
        }
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_byte_remain = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d4[0U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d4[1U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d4[2U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d4[3U] = 0U;
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_en_d3 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_en_d2));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_013 
        = (0x0000000fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_012) 
                          + (1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[0U] 
                                   >> 0x0000000dU))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_021 
        = (0x0000001fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_020) 
                          + (1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[0U] 
                                   >> 0x00000015U))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_037 
        = (0x0000003fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_036) 
                          + (1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[1U] 
                                   >> 5U))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_069 
        = (0x0000007fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_068) 
                          + (1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[2U] 
                                   >> 5U))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_022 
        = (0x0000001fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_021) 
                          + (1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[0U] 
                                   >> 0x00000016U))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_038 
        = (0x0000003fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_037) 
                          + (1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[1U] 
                                   >> 6U))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_070 
        = (0x0000007fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_069) 
                          + (1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[2U] 
                                   >> 6U))));
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_pipe_pvld_d4) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_pipe_pd_d5 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_pipe_pd_d4;
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_en_d2) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d3[0U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d2[0U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d3[1U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d2[1U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d3[2U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d2[2U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d3[3U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d2[3U];
        }
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_pipe_pd_d5 = 0ULL;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d3[0U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d3[1U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d3[2U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d3[3U] = 0U;
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_en_d2 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_en_d1));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_023 
        = (0x0000001fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_022) 
                          + (1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[0U] 
                                   >> 0x00000017U))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_039 
        = (0x0000003fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_038) 
                          + (1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[1U] 
                                   >> 7U))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_071 
        = (0x0000007fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_070) 
                          + (1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[2U] 
                                   >> 7U))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_024 
        = (0x0000001fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_023) 
                          + (1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[0U] 
                                   >> 0x00000018U))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_040 
        = (0x0000003fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_039) 
                          + (1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[1U] 
                                   >> 8U))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_072 
        = (0x0000007fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_071) 
                          + (1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[2U] 
                                   >> 8U))));
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_pipe_pvld_d3) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_pipe_pd_d4 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_pipe_pd_d3;
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_en_d1) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d2[0U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d1[0U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d2[1U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d1[1U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d2[2U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d1[2U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d2[3U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d1[3U];
        }
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_pipe_pd_d4 = 0ULL;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d2[0U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d2[1U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d2[2U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d2[3U] = 0U;
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_en_d1 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_mask_en_d1));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_025 
        = (0x0000001fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_024) 
                          + (1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[0U] 
                                   >> 0x00000019U))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_041 
        = (0x0000003fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_040) 
                          + (1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[1U] 
                                   >> 9U))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_073 
        = (0x0000007fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_072) 
                          + (1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[2U] 
                                   >> 9U))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_026 
        = (0x0000001fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_025) 
                          + (1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[0U] 
                                   >> 0x0000001aU))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_042 
        = (0x0000003fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_041) 
                          + (1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[1U] 
                                   >> 0x0000000aU))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_074 
        = (0x0000007fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_073) 
                          + (1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[2U] 
                                   >> 0x0000000aU))));
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_pipe_pvld_d2) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_pipe_pd_d3 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_pipe_pd_d2;
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_mask_en_d1) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d1[0U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_mask_d1[0U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d1[1U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_mask_d1[1U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d1[2U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_mask_d1[2U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d1[3U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_mask_d1[3U];
        }
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_pipe_pd_d3 = 0ULL;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d1[0U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d1[1U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d1[2U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_mask_d1[3U] = 0U;
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_mask_en_d1 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_pipe_valid) 
               & (0U != ((((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_mask_w[0U] 
                            ^ vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_mask_d1[0U]) 
                           | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_mask_w[1U] 
                              ^ vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_mask_d1[1U])) 
                          | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_mask_w[2U] 
                             ^ vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_mask_d1[2U])) 
                         | (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_mask_w[3U] 
                            ^ vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_mask_d1[3U])))));
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_pipe_pvld_d1) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_pipe_pd_d2 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_pipe_pd_d1;
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_pipe_valid_d1) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_pipe_pd_d1 
                = (((QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_rls_d1)) 
                    << 0x00000020U) | (QData)((IData)(
                                                      ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_group_end_d1) 
                                                         << 0x0000001fU) 
                                                        | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_channel_end_d1) 
                                                            << 0x0000001eU) 
                                                           | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_stripe_end_d1) 
                                                               << 0x0000001dU) 
                                                              | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_wt_rls_entries_d1) 
                                                                 << 0x00000011U)))) 
                                                       | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_wmb_rls_entries_d1) 
                                                           << 8U) 
                                                          | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_bytes_d1))))));
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_pipe_valid) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_bytes_d1 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_byte_avl_sub;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_wmb_rls_entries_d1 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_wmb_rls_entries;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_rls_d1 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_rls;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_stripe_end_d1 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_stripe_end;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_channel_end_d1 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_channel_end;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_group_end_d1 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_group_end;
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_pipe_valid) 
             & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_rls))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_wt_rls_entries_d1 
                = (0x00000fffU & ((1U & ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_valid)) 
                                         | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rls_cnt_vld)))
                                   ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rls_cnt)
                                   : ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rls_cnt))));
        } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_pipe_valid) 
                    & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_rls))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_wt_rls_entries_d1 = 0U;
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_rsp_pipe_pvld_d6) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_wmb_rls_entries 
                = (0x000001ffU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_rsp_pipe_pd_d6 
                                  >> 0x0000000fU));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_stripe_end 
                = (1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_rsp_pipe_pd_d6 
                         >> 0x00000018U));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_channel_end 
                = (1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_rsp_pipe_pd_d6 
                         >> 0x00000019U));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_group_end 
                = (1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_rsp_pipe_pd_d6 
                         >> 0x0000001aU));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_rls 
                = (1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_rsp_pipe_pd_d6 
                         >> 0x0000001bU));
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__layer_st) 
             | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4422) 
                | ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rls_cnt_vld)) 
                   & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_valid))))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rls_cnt 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rls_cnt_w;
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__layer_st) 
             | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_pipe_valid))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_mask_d1[0U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_mask_w[0U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_mask_d1[1U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_mask_w[1U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_mask_d1[2U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_mask_w[2U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_mask_d1[3U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_mask_w[3U];
        } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__layer_st) 
                    | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_pipe_valid))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_mask_d1[0U] = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_mask_d1[1U] = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_mask_d1[2U] = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_mask_d1[3U] = 0U;
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_rsp_pipe_pvld_d5) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_rsp_pipe_pd_d6 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_rsp_pipe_pd_d5;
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_rsp_pipe_pvld_d4) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_rsp_pipe_pd_d5 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_rsp_pipe_pd_d4;
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_rsp_pipe_pvld_d3) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_rsp_pipe_pd_d4 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_rsp_pipe_pd_d3;
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_rsp_pipe_pvld_d2) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_rsp_pipe_pd_d3 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_rsp_pipe_pd_d2;
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_rsp_pipe_pvld_d1) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_rsp_pipe_pd_d2 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_rsp_pipe_pd_d1;
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_pipe_valid_d1) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_rsp_pipe_pd_d1 
                = ((((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_req_cur_sub_h_d1) 
                       << 0x0000000eU) | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_req_dual_d1) 
                                           << 0x0000000dU) 
                                          | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_req_rls_d1) 
                                             << 0x0000000cU))) 
                     | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_req_group_end_d1) 
                         << 0x0000000bU) | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_req_channel_end_d1) 
                                             << 0x0000000aU) 
                                            | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_req_stripe_end_d1) 
                                                << 9U) 
                                               | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_req_rls_entries_d1))))) 
                    << 0x0000000fU) | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_req_element_d1) 
                                        << 7U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_req_ori_element_d1)));
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_pipe_valid) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_req_element_d1 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_req_element;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_req_dual_d1 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_req_dual;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_req_stripe_end_d1 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__is_stripe_end;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_req_cur_sub_h_d1 
                = (3U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wl_in_pd_d1 
                         >> 0x0000000dU));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_req_ori_element_d1 
                = (0x0000007fU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wl_in_pd_d1);
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_req_rls_d1 
                = ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wl_in_pd_d1 
                    >> 0x00000011U) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__is_stripe_end));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_req_group_end_d1 
                = ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wl_in_pd_d1 
                    >> 0x00000010U) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__is_stripe_end));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_req_channel_end_d1 
                = ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wl_in_pd_d1 
                    >> 0x0000000fU) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__is_stripe_end));
        }
        if ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_pipe_valid) 
              & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wl_in_pd_d1 
                 >> 0x00000011U)) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__is_stripe_end))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_req_rls_entries_d1 
                = (0x000001ffU & ((1U & ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_req_valid)) 
                                         | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_rls_cnt_vld)))
                                   ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_rls_cnt)
                                   : ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_rls_cnt))));
        } else if ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_pipe_valid) 
                     & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wl_in_pd_d1 
                        >> 0x00000011U)) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__is_stripe_end))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_req_rls_entries_d1 = 0U;
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__wt_pop_ready_d1) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wl_in_pd_d1 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__sg2wl_pd;
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__layer_st) 
             | ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__is_compressed_d1) 
                  & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_pipe_valid)) 
                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4064)) 
                | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__is_compressed_d1) 
                   & ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_rls_cnt_vld)) 
                      & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_req_valid)))))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_rls_cnt 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_rls_cnt_w;
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_dl__DOT__layer_st) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__is_compressed_d1 
                = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__dp2reg_consumer)
                    ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d1_weight_format)
                    : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_regfile__DOT__reg2dp_d0_weight_format));
        }
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_pipe_pd_d2 = 0ULL;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rsp_pipe_pd_d1 = 0ULL;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_bytes_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_wmb_rls_entries_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_rls_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_stripe_end_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_channel_end_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_group_end_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_wt_rls_entries_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_wmb_rls_entries = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_stripe_end = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_channel_end = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_group_end = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rls_cnt = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_rls = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_mask_d1[0U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_mask_d1[1U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_mask_d1[2U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_mask_d1[3U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_rsp_pipe_pd_d6 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_rsp_pipe_pd_d5 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_rsp_pipe_pd_d4 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_rsp_pipe_pd_d3 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_rsp_pipe_pd_d2 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_rsp_pipe_pd_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_req_element_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_req_dual_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_req_stripe_end_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_req_cur_sub_h_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_req_ori_element_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_req_rls_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_req_group_end_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_req_channel_end_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_req_rls_entries_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wl_in_pd_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_rls_cnt = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__is_compressed_d1 = 0U;
    }
    __Vdeeptemp_hca9d9079__0 = ((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_bmask[0U] 
                                       >> 0x0000000aU)) 
                                + ((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_bmask[0U] 
                                          >> 0x0000000bU)) 
                                   + ((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_bmask[0U] 
                                             >> 0x0000000cU)) 
                                      + ((1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_bmask[0U] 
                                                >> 0x0000000dU)) 
                                         + ((1U & (
                                                   vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_bmask[0U] 
                                                   >> 0x0000000eU)) 
                                            + ((1U 
                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_bmask[0U] 
                                                   >> 0x0000000fU)) 
                                               + ((1U 
                                                   & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_bmask[0U] 
                                                      >> 0x00000010U)) 
                                                  + 
                                                  ((1U 
                                                    & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_bmask[0U] 
                                                       >> 0x00000011U)) 
                                                   + 
                                                   ((1U 
                                                     & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_bmask[0U] 
                                                        >> 0x00000012U)) 
                                                    + 
                                                    ((1U 
                                                      & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_bmask[0U] 
                                                         >> 0x00000013U)) 
                                                     + 
                                                     ((1U 
                                                       & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_bmask[0U] 
                                                          >> 0x00000014U)) 
                                                      + 
                                                      ((1U 
                                                        & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_bmask[0U] 
                                                           >> 0x00000015U)) 
                                                       + 
                                                       ((1U 
                                                         & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_bmask[0U] 
                                                            >> 0x00000016U)) 
                                                        + 
                                                        ((1U 
                                                          & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_bmask[0U] 
                                                             >> 0x00000017U)) 
                                                         + 
                                                         ((1U 
                                                           & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_bmask[0U] 
                                                              >> 0x00000018U)) 
                                                          + 
                                                          ((1U 
                                                            & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_bmask[0U] 
                                                               >> 0x00000019U)) 
                                                           + 
                                                           ((1U 
                                                             & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_bmask[0U] 
                                                                >> 0x0000001aU)) 
                                                            + 
                                                            ((1U 
                                                              & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_bmask[0U] 
                                                                 >> 0x0000001bU)) 
                                                             + 
                                                             ((1U 
                                                               & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_bmask[0U] 
                                                                  >> 0x0000001cU)) 
                                                              + 
                                                              ((1U 
                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_bmask[0U] 
                                                                   >> 0x0000001dU)) 
                                                               + 
                                                               ((1U 
                                                                 & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_bmask[0U] 
                                                                    >> 0x0000001eU)) 
                                                                + 
                                                                ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_bmask[0U] 
                                                                  >> 0x0000001fU) 
                                                                 + 
                                                                 ((1U 
                                                                   & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_bmask[1U]) 
                                                                  + 
                                                                  ((1U 
                                                                    & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_bmask[1U] 
                                                                       >> 1U)) 
                                                                   + 
                                                                   ((1U 
                                                                     & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_bmask[1U] 
                                                                        >> 2U)) 
                                                                    + 
                                                                    ((1U 
                                                                      & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_bmask[1U] 
                                                                         >> 3U)) 
                                                                     + 
                                                                     ((1U 
                                                                       & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_bmask[1U] 
                                                                          >> 4U)) 
                                                                      + 
                                                                      ((1U 
                                                                        & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_bmask[1U] 
                                                                           >> 5U)) 
                                                                       + 
                                                                       ((1U 
                                                                         & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_bmask[1U] 
                                                                            >> 6U)) 
                                                                        + 
                                                                        ((1U 
                                                                          & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_bmask[1U] 
                                                                             >> 7U)) 
                                                                         + 
                                                                         ((1U 
                                                                           & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_bmask[1U] 
                                                                              >> 8U)) 
                                                                          + 
                                                                          ((1U 
                                                                            & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_bmask[1U] 
                                                                               >> 9U)) 
                                                                           + 
                                                                           ((1U 
                                                                             & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_bmask[1U] 
                                                                                >> 0x0000000aU)) 
                                                                            + 
                                                                            ((1U 
                                                                              & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_bmask[1U] 
                                                                                >> 0x0000000bU)) 
                                                                             + 
                                                                             ((1U 
                                                                               & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_bmask[1U] 
                                                                                >> 0x0000000cU)) 
                                                                              + 
                                                                              ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_bmask[1U] 
                                                                                >> 0x0000000dU)) 
                                                                               + 
                                                                               ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_bmask[1U] 
                                                                                >> 0x0000000eU)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_bmask[1U] 
                                                                                >> 0x0000000fU)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_bmask[1U] 
                                                                                >> 0x00000010U)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_bmask[1U] 
                                                                                >> 0x00000011U)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_bmask[1U] 
                                                                                >> 0x00000012U)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_bmask[1U] 
                                                                                >> 0x00000013U)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_bmask[1U] 
                                                                                >> 0x00000014U)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_bmask[1U] 
                                                                                >> 0x00000015U)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_bmask[1U] 
                                                                                >> 0x00000016U)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_bmask[1U] 
                                                                                >> 0x00000017U)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_bmask[1U] 
                                                                                >> 0x00000018U)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_bmask[1U] 
                                                                                >> 0x00000019U)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_bmask[1U] 
                                                                                >> 0x0000001aU)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_bmask[1U] 
                                                                                >> 0x0000001bU)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_bmask[1U] 
                                                                                >> 0x0000001cU)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_bmask[1U] 
                                                                                >> 0x0000001dU)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_bmask[1U] 
                                                                                >> 0x0000001eU)) 
                                                                                + 
                                                                                ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_bmask[1U] 
                                                                                >> 0x0000001fU) 
                                                                                + 
                                                                                ((1U 
                                                                                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_bmask[2U]) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_bmask[2U] 
                                                                                >> 1U)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_bmask[2U] 
                                                                                >> 2U)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_bmask[2U] 
                                                                                >> 3U)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_bmask[2U] 
                                                                                >> 4U)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_bmask[2U] 
                                                                                >> 5U)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_bmask[2U] 
                                                                                >> 6U)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_bmask[2U] 
                                                                                >> 7U)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_bmask[2U] 
                                                                                >> 8U)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_bmask[2U] 
                                                                                >> 9U)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_bmask[2U] 
                                                                                >> 0x0000000aU)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_bmask[2U] 
                                                                                >> 0x0000000bU)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_bmask[2U] 
                                                                                >> 0x0000000cU)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_bmask[2U] 
                                                                                >> 0x0000000dU)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_bmask[2U] 
                                                                                >> 0x0000000eU)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_bmask[2U] 
                                                                                >> 0x0000000fU)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_bmask[2U] 
                                                                                >> 0x00000010U)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_bmask[2U] 
                                                                                >> 0x00000011U)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_bmask[2U] 
                                                                                >> 0x00000012U)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_bmask[2U] 
                                                                                >> 0x00000013U)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_bmask[2U] 
                                                                                >> 0x00000014U)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_bmask[2U] 
                                                                                >> 0x00000015U)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_bmask[2U] 
                                                                                >> 0x00000016U)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_bmask[2U] 
                                                                                >> 0x00000017U)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_bmask[2U] 
                                                                                >> 0x00000018U)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_bmask[2U] 
                                                                                >> 0x00000019U)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_bmask[2U] 
                                                                                >> 0x0000001aU)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_bmask[2U] 
                                                                                >> 0x0000001bU)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_bmask[2U] 
                                                                                >> 0x0000001cU)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_bmask[2U] 
                                                                                >> 0x0000001dU)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_bmask[2U] 
                                                                                >> 0x0000001eU)) 
                                                                                + 
                                                                                ((vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_bmask[2U] 
                                                                                >> 0x0000001fU) 
                                                                                + 
                                                                                ((1U 
                                                                                & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_bmask[3U]) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_bmask[3U] 
                                                                                >> 1U)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_bmask[3U] 
                                                                                >> 2U)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_bmask[3U] 
                                                                                >> 3U)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_bmask[3U] 
                                                                                >> 4U)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_bmask[3U] 
                                                                                >> 5U)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_bmask[3U] 
                                                                                >> 6U)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_bmask[3U] 
                                                                                >> 7U)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_bmask[3U] 
                                                                                >> 8U)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_bmask[3U] 
                                                                                >> 9U)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_bmask[3U] 
                                                                                >> 0x0000000aU)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_bmask[3U] 
                                                                                >> 0x0000000bU)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_bmask[3U] 
                                                                                >> 0x0000000cU)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_bmask[3U] 
                                                                                >> 0x0000000dU)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_bmask[3U] 
                                                                                >> 0x0000000eU)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_bmask[3U] 
                                                                                >> 0x0000000fU)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_bmask[3U] 
                                                                                >> 0x00000010U)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_bmask[3U] 
                                                                                >> 0x00000011U)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_bmask[3U] 
                                                                                >> 0x00000012U)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_bmask[3U] 
                                                                                >> 0x00000013U)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_bmask[3U] 
                                                                                >> 0x00000014U)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_bmask[3U] 
                                                                                >> 0x00000015U)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_bmask[3U] 
                                                                                >> 0x00000016U)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_bmask[3U] 
                                                                                >> 0x00000017U)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_bmask[3U] 
                                                                                >> 0x00000018U)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_bmask[3U] 
                                                                                >> 0x00000019U)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_bmask[3U] 
                                                                                >> 0x0000001aU)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_bmask[3U] 
                                                                                >> 0x0000001bU)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_bmask[3U] 
                                                                                >> 0x0000001cU)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_bmask[3U] 
                                                                                >> 0x0000001dU)) 
                                                                                + 
                                                                                ((1U 
                                                                                & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_bmask[3U] 
                                                                                >> 0x0000001eU)) 
                                                                                + 
                                                                                (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_bmask[3U] 
                                                                                >> 0x0000001fU))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_byte_avl_sub 
        = (0x000000ffU & (((1U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_bmask[0U]) 
                           + (1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_bmask[0U] 
                                    >> 1U))) + (((1U 
                                                  & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_bmask[0U] 
                                                     >> 2U)) 
                                                 + 
                                                 (1U 
                                                  & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_bmask[0U] 
                                                     >> 3U))) 
                                                + (
                                                   (1U 
                                                    & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_bmask[0U] 
                                                       >> 4U)) 
                                                   + 
                                                   ((1U 
                                                     & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_bmask[0U] 
                                                        >> 5U)) 
                                                    + 
                                                    ((1U 
                                                      & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_bmask[0U] 
                                                         >> 6U)) 
                                                     + 
                                                     ((1U 
                                                       & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_bmask[0U] 
                                                          >> 7U)) 
                                                      + 
                                                      ((1U 
                                                        & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_bmask[0U] 
                                                           >> 8U)) 
                                                       + 
                                                       ((1U 
                                                         & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_bmask[0U] 
                                                            >> 9U)) 
                                                        + __Vdeeptemp_hca9d9079__0)))))))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_027 
        = (0x0000001fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_026) 
                          + (1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[0U] 
                                   >> 0x0000001bU))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_043 
        = (0x0000003fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_042) 
                          + (1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[1U] 
                                   >> 0x0000000bU))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_075 
        = (0x0000007fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_074) 
                          + (1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[2U] 
                                   >> 0x0000000bU))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_028 
        = (0x0000001fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_027) 
                          + (1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[0U] 
                                   >> 0x0000001cU))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_044 
        = (0x0000003fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_043) 
                          + (1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[1U] 
                                   >> 0x0000000cU))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_076 
        = (0x0000007fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_075) 
                          + (1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[2U] 
                                   >> 0x0000000cU))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_029 
        = (0x0000001fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_028) 
                          + (1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[0U] 
                                   >> 0x0000001dU))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_045 
        = (0x0000003fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_044) 
                          + (1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[1U] 
                                   >> 0x0000000dU))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_077 
        = (0x0000007fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_076) 
                          + (1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[2U] 
                                   >> 0x0000000dU))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4075 = (
                                                   (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_group_end)) 
                                                   & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_req_channel_end));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rls_cnt_vld 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wt_rls_cnt_vld_w));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_046 
        = (0x0000003fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_045) 
                          + (1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[1U] 
                                   >> 0x0000000eU))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_078 
        = (0x0000007fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_077) 
                          + (1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[2U] 
                                   >> 0x0000000eU))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_047 
        = (0x0000003fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_046) 
                          + (1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[1U] 
                                   >> 0x0000000fU))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_079 
        = (0x0000007fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_078) 
                          + (1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[2U] 
                                   >> 0x0000000fU))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4430 = (IData)(
                                                          (0x02000000U 
                                                           == 
                                                           (0x06000000U 
                                                            & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_rsp_pipe_pd_d6)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_048 
        = (0x0000003fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_047) 
                          + (1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[1U] 
                                   >> 0x00000010U))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_080 
        = (0x0000007fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_079) 
                          + (1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[2U] 
                                   >> 0x00000010U))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_049 
        = (0x0000003fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_048) 
                          + (1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[1U] 
                                   >> 0x00000011U))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_081 
        = (0x0000007fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_080) 
                          + (1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[2U] 
                                   >> 0x00000011U))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_050 
        = (0x0000003fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_049) 
                          + (1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[1U] 
                                   >> 0x00000012U))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_082 
        = (0x0000007fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_081) 
                          + (1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[2U] 
                                   >> 0x00000012U))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_051 
        = (0x0000003fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_050) 
                          + (1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[1U] 
                                   >> 0x00000013U))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_083 
        = (0x0000007fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_082) 
                          + (1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[2U] 
                                   >> 0x00000013U))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_052 
        = (0x0000003fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_051) 
                          + (1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[1U] 
                                   >> 0x00000014U))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_084 
        = (0x0000007fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_083) 
                          + (1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[2U] 
                                   >> 0x00000014U))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_053 
        = (0x0000003fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_052) 
                          + (1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[1U] 
                                   >> 0x00000015U))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_085 
        = (0x0000007fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_084) 
                          + (1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[2U] 
                                   >> 0x00000015U))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_054 
        = (0x0000003fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_053) 
                          + (1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[1U] 
                                   >> 0x00000016U))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_086 
        = (0x0000007fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_085) 
                          + (1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[2U] 
                                   >> 0x00000016U))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_055 
        = (0x0000003fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_054) 
                          + (1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[1U] 
                                   >> 0x00000017U))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_087 
        = (0x0000007fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_086) 
                          + (1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[2U] 
                                   >> 0x00000017U))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_056 
        = (0x0000003fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_055) 
                          + (1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[1U] 
                                   >> 0x00000018U))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_088 
        = (0x0000007fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_087) 
                          + (1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[2U] 
                                   >> 0x00000018U))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_057 
        = (0x0000003fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_056) 
                          + (1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[1U] 
                                   >> 0x00000019U))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_089 
        = (0x0000007fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_088) 
                          + (1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[2U] 
                                   >> 0x00000019U))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_058 
        = (0x0000003fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_057) 
                          + (1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[1U] 
                                   >> 0x0000001aU))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_090 
        = (0x0000007fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_089) 
                          + (1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[2U] 
                                   >> 0x0000001aU))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_059 
        = (0x0000003fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_058) 
                          + (1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[1U] 
                                   >> 0x0000001bU))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_091 
        = (0x0000007fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_090) 
                          + (1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[2U] 
                                   >> 0x0000001bU))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_060 
        = (0x0000003fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_059) 
                          + (1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[1U] 
                                   >> 0x0000001cU))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_092 
        = (0x0000007fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_091) 
                          + (1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[2U] 
                                   >> 0x0000001cU))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_061 
        = (0x0000003fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_060) 
                          + (1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[1U] 
                                   >> 0x0000001dU))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_093 
        = (0x0000007fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_092) 
                          + (1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[2U] 
                                   >> 0x0000001dU))));
    __Vtableidx51 = ((0x0000007eU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wl_in_pd_d1 
                                     >> 6U)) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__is_int8_d1));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__mon_stripe_length 
        = Vsim__ConstPool__TABLE_hcba7f094_0[__Vtableidx51];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__stripe_length 
        = Vsim__ConstPool__TABLE_hadeabecd_0[__Vtableidx51];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_rls_cnt_vld 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_rls_cnt_vld_w));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_094 
        = (0x0000007fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_093) 
                          + (1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[2U] 
                                   >> 0x0000001eU))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__is_stripe_end 
        = ((0x0000001fU & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__stripe_cnt))) 
           == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__stripe_length));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_095 
        = (0x0000007fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_094) 
                          + (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[2U] 
                             >> 0x0000001fU)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4064 = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__is_stripe_end) 
                                                   & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wl_in_pd_d1 
                                                      >> 0x00000010U));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4431 = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__is_stripe_end) 
                                                   & (IData)(
                                                             (0x00008000U 
                                                              == 
                                                              (0x00018000U 
                                                               & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wl_in_pd_d1))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_req_dual 
        = ((~ ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__is_stripe_end) 
               & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wl_in_pd_d1 
                  >> 7U))) & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__is_int8_d1));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_096 
        = (0x0000007fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_095) 
                          + (1U & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[3U])));
    __Vtableidx52 = ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_req_dual)
                        ? (0x000000feU & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wl_in_pd_d1 
                                          << 1U)) : 
                       (0x0000007fU & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wl_in_pd_d1)) 
                      << 2U) | (3U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wl_in_pd_d1 
                                      >> 0x0000000dU)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__mon_wmb_req_element 
        = Vsim__ConstPool__TABLE_h600b7dc4_0[__Vtableidx52];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__wmb_req_element 
        = Vsim__ConstPool__TABLE_hf7e6f533_0[__Vtableidx52];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_097 
        = (0x0000007fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_096) 
                          + (1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[3U] 
                                   >> 1U))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_098 
        = (0x0000007fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_097) 
                          + (1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[3U] 
                                   >> 2U))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_099 
        = (0x0000007fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_098) 
                          + (1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[3U] 
                                   >> 3U))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_100 
        = (0x0000007fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_099) 
                          + (1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[3U] 
                                   >> 4U))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_101 
        = (0x0000007fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_100) 
                          + (1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[3U] 
                                   >> 5U))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_102 
        = (0x0000007fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_101) 
                          + (1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[3U] 
                                   >> 6U))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_103 
        = (0x0000007fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_102) 
                          + (1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[3U] 
                                   >> 7U))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_104 
        = (0x0000007fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_103) 
                          + (1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[3U] 
                                   >> 8U))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_105 
        = (0x0000007fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_104) 
                          + (1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[3U] 
                                   >> 9U))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_106 
        = (0x0000007fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_105) 
                          + (1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[3U] 
                                   >> 0x0000000aU))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_107 
        = (0x0000007fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_106) 
                          + (1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[3U] 
                                   >> 0x0000000bU))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_108 
        = (0x0000007fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_107) 
                          + (1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[3U] 
                                   >> 0x0000000cU))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_109 
        = (0x0000007fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_108) 
                          + (1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[3U] 
                                   >> 0x0000000dU))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_110 
        = (0x0000007fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_109) 
                          + (1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[3U] 
                                   >> 0x0000000eU))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_111 
        = (0x0000007fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_110) 
                          + (1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[3U] 
                                   >> 0x0000000fU))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_112 
        = (0x0000007fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_111) 
                          + (1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[3U] 
                                   >> 0x00000010U))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_113 
        = (0x0000007fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_112) 
                          + (1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[3U] 
                                   >> 0x00000011U))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_114 
        = (0x0000007fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_113) 
                          + (1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[3U] 
                                   >> 0x00000012U))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_115 
        = (0x0000007fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_114) 
                          + (1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[3U] 
                                   >> 0x00000013U))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_116 
        = (0x0000007fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_115) 
                          + (1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[3U] 
                                   >> 0x00000014U))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_117 
        = (0x0000007fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_116) 
                          + (1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[3U] 
                                   >> 0x00000015U))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_118 
        = (0x0000007fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_117) 
                          + (1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[3U] 
                                   >> 0x00000016U))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_119 
        = (0x0000007fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_118) 
                          + (1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[3U] 
                                   >> 0x00000017U))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_120 
        = (0x0000007fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_119) 
                          + (1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[3U] 
                                   >> 0x00000018U))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_121 
        = (0x0000007fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_120) 
                          + (1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[3U] 
                                   >> 0x00000019U))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_122 
        = (0x0000007fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_121) 
                          + (1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[3U] 
                                   >> 0x0000001aU))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_123 
        = (0x0000007fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_122) 
                          + (1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[3U] 
                                   >> 0x0000001bU))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_124 
        = (0x0000007fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_123) 
                          + (1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[3U] 
                                   >> 0x0000001cU))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_125 
        = (0x0000007fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__vec_sum_124) 
                          + (1U & (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_wl__DOT__u_dec__DOT__input_mask_gated[3U] 
                                   >> 0x0000001dU))));
}

void Vsim___024root___nba_sequent__TOP__297(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__297\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__wr_busy_int 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__wr_busy_next));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__rd_req_int 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__rd_req_p) 
               | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT____VdfgRegularize_hd27e783b_0_0)));
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__wr_reserving) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__wr_adr 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__wr_adr_next;
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ore) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__rd_adr 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__rd_adr_next;
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__wr_reserving) 
             ^ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__wr_popping))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__wr_count 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__wr_count_next;
        } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__wr_reserving) 
                    ^ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__wr_popping))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__wr_count = 0U;
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__rd_pushing) 
             | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ore))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__rd_count_p 
                = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ore)
                    ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__rd_count_p_next_rd_popping)
                    : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__rd_count_p_next_no_rd_popping));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__rd_req_p 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__rd_count_p_next_not_0;
        } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__rd_pushing) 
                    | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ore))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__rd_count_p = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__rd_req_p = 0U;
        }
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__wr_adr = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__rd_adr = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__wr_count = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__rd_count_p = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__rd_req_p = 0U;
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__wr_adr_next 
        = (0x0000007fU & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__wr_adr)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__rd_adr_next 
        = (0x0000007fU & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__rd_adr)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__wr_popping 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ore));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__rd_pushing 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__wr_reserving));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__rd_count_p_next_rd_popping 
        = (0x000000ffU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__rd_pushing)
                           ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__rd_count_p)
                           : ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__rd_count_p) 
                              - (IData)(1U))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__rd_count_p_next_no_rd_popping 
        = (0x000000ffU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__rd_count_p) 
                          + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__rd_pushing)));
}

void Vsim___024root___nba_sequent__TOP__298(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__298\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_wgs_fifo__DOT__rd_req_int 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_wgs_fifo__DOT__rd_req_p) 
               | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_wgs_fifo__DOT____VdfgRegularize_hc3606d62_0_0)));
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_wgs_fifo__DOT__wr_reserving) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_wgs_fifo__DOT__wr_adr 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_wgs_fifo__DOT__wr_adr_next;
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_wgs_fifo__DOT__ore) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_wgs_fifo__DOT__rd_adr 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_wgs_fifo__DOT__rd_adr_next;
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_wgs_fifo__DOT__wr_reserving) 
             ^ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_wgs_fifo__DOT__wr_popping))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_wgs_fifo__DOT__wr_count 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_wgs_fifo__DOT__wr_count_next;
        } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_wgs_fifo__DOT__wr_reserving) 
                    ^ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_wgs_fifo__DOT__wr_popping))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_wgs_fifo__DOT__wr_count = 0U;
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_wgs_fifo__DOT__rd_pushing) 
             | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_wgs_fifo__DOT__ore))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_wgs_fifo__DOT__rd_count_p 
                = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_wgs_fifo__DOT__ore)
                    ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_wgs_fifo__DOT__rd_count_p_next_rd_popping)
                    : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_wgs_fifo__DOT__rd_count_p_next_no_rd_popping));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_wgs_fifo__DOT__rd_req_p 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_wgs_fifo__DOT__rd_count_p_next_not_0;
        } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_wgs_fifo__DOT__rd_pushing) 
                    | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_wgs_fifo__DOT__ore))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_wgs_fifo__DOT__rd_count_p = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_wgs_fifo__DOT__rd_req_p = 0U;
        }
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_wgs_fifo__DOT__wr_adr = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_wgs_fifo__DOT__rd_adr = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_wgs_fifo__DOT__wr_count = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_wgs_fifo__DOT__rd_count_p = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_wgs_fifo__DOT__rd_req_p = 0U;
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_wgs_fifo__DOT__wr_busy_int 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_wgs_fifo__DOT__wr_busy_next));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_wgs_fifo__DOT__wr_adr_next 
        = (0x0000001fU & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_wgs_fifo__DOT__wr_adr)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_wgs_fifo__DOT__rd_adr_next 
        = (0x0000001fU & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_wgs_fifo__DOT__rd_adr)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_wgs_fifo__DOT__wr_popping 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_wgs_fifo__DOT__ore));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_wgs_fifo__DOT__rd_pushing 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_wgs_fifo__DOT__wr_reserving));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_wgs_fifo__DOT__rd_count_p_next_rd_popping 
        = (0x0000003fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_wgs_fifo__DOT__rd_pushing)
                           ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_wgs_fifo__DOT__rd_count_p)
                           : ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_wgs_fifo__DOT__rd_count_p) 
                              - (IData)(1U))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_wgs_fifo__DOT__rd_count_p_next_no_rd_popping 
        = (0x0000003fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_wgs_fifo__DOT__rd_count_p) 
                          + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_wgs_fifo__DOT__rd_pushing)));
}

void Vsim___024root___nba_sequent__TOP__299(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__299\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__wr_busy_int 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__wr_busy_next));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__rd_req_int 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__rd_req_p) 
               | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT____VdfgRegularize_hb40b72be_0_0)));
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__wr_reserving) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__wr_adr 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__wr_adr_next;
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__ore) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__rd_adr 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__rd_adr_next;
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__wr_reserving) 
             ^ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__wr_popping))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__wr_count 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__wr_count_next;
        } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__wr_reserving) 
                    ^ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__wr_popping))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__wr_count = 0U;
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__rd_pushing) 
             | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__ore))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__rd_count_p 
                = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__ore)
                    ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__rd_count_p_next_rd_popping)
                    : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__rd_count_p_next_no_rd_popping));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__rd_req_p 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__rd_count_p_next_not_0;
        } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__rd_pushing) 
                    | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__ore))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__rd_count_p = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__rd_req_p = 0U;
        }
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__wr_adr = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__rd_adr = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__wr_count = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__rd_count_p = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__rd_req_p = 0U;
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__wr_adr_next 
        = (0x0000007fU & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__wr_adr)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__rd_adr_next 
        = (0x0000007fU & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__rd_adr)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__wr_popping 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__ore));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__rd_pushing 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__wr_reserving));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__rd_count_p_next_rd_popping 
        = (0x000000ffU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__rd_pushing)
                           ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__rd_count_p)
                           : ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__rd_count_p) 
                              - (IData)(1U))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__rd_count_p_next_no_rd_popping 
        = (0x000000ffU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__rd_count_p) 
                          + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__rd_pushing)));
}

void Vsim___024root___nba_sequent__TOP__300(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__300\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_fifo__DOT__wr_busy_int 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_fifo__DOT__wr_busy_next));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_fifo__DOT__rd_req_int 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_fifo__DOT__rd_req_p) 
               | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_fifo__DOT____VdfgRegularize_h5fb62954_0_0)));
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_fifo__DOT__wr_reserving) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_fifo__DOT__wr_adr 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_fifo__DOT__wr_adr_next;
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_fifo__DOT__ore) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_fifo__DOT__rd_adr 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_fifo__DOT__rd_adr_next;
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_fifo__DOT__wr_reserving) 
             ^ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_fifo__DOT__wr_popping))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_fifo__DOT__wr_count 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_fifo__DOT__wr_count_next;
        } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_fifo__DOT__wr_reserving) 
                    ^ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_fifo__DOT__wr_popping))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_fifo__DOT__wr_count = 0U;
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_fifo__DOT__rd_pushing) 
             | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_fifo__DOT__ore))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_fifo__DOT__rd_count_p 
                = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_fifo__DOT__ore)
                    ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_fifo__DOT__rd_count_p_next_rd_popping)
                    : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_fifo__DOT__rd_count_p_next_no_rd_popping));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_fifo__DOT__rd_req_p 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_fifo__DOT__rd_count_p_next_not_0;
        } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_fifo__DOT__rd_pushing) 
                    | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_fifo__DOT__ore))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_fifo__DOT__rd_count_p = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_fifo__DOT__rd_req_p = 0U;
        }
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_fifo__DOT__wr_adr = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_fifo__DOT__rd_adr = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_fifo__DOT__wr_count = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_fifo__DOT__rd_count_p = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_fifo__DOT__rd_req_p = 0U;
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_fifo__DOT__wr_adr_next 
        = (0x0000007fU & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_fifo__DOT__wr_adr)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_fifo__DOT__rd_adr_next 
        = (0x0000007fU & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_fifo__DOT__rd_adr)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_fifo__DOT__wr_popping 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_fifo__DOT__ore));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_fifo__DOT__rd_pushing 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_fifo__DOT__wr_reserving));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_fifo__DOT__rd_count_p_next_rd_popping 
        = (0x000000ffU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_fifo__DOT__rd_pushing)
                           ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_fifo__DOT__rd_count_p)
                           : ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_fifo__DOT__rd_count_p) 
                              - (IData)(1U))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_fifo__DOT__rd_count_p_next_no_rd_popping 
        = (0x000000ffU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_fifo__DOT__rd_count_p) 
                          + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_fifo__DOT__rd_pushing)));
}

extern const VlWide<8>/*255:0*/ Vsim__ConstPool__CONST_h9e67c271_0;

void Vsim___024root___nba_sequent__TOP__301(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__301\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<4>/*127:0*/ __Vtemp_29;
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__op_en 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__op_en_w));
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if ((8U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_reg_en_bp))) {
            if ((8U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_nz_mask_bp))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_p3_reg[0U] 
                    = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3666[0x0000000cU];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_p3_reg[1U] 
                    = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3666[0x0000000dU];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_p3_reg[2U] 
                    = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3666[0x0000000eU];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_p3_reg[3U] 
                    = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3666[0x0000000fU];
            } else {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_p3_reg[0U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_p3_reg[1U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_p3_reg[2U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_p3_reg[3U] = 0U;
            }
        }
        if ((4U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_reg_en_bp))) {
            if ((4U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_nz_mask_bp))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_p2_reg[0U] 
                    = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3667[8U];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_p2_reg[1U] 
                    = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3667[9U];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_p2_reg[2U] 
                    = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3667[0x0000000aU];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_p2_reg[3U] 
                    = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3667[0x0000000bU];
            } else {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_p2_reg[0U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_p2_reg[1U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_p2_reg[2U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_p2_reg[3U] = 0U;
            }
        } else if ((4U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_reg_en_bp))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_p2_reg[0U] = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_p2_reg[1U] = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_p2_reg[2U] = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_p2_reg[3U] = 0U;
        }
        if ((2U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_reg_en_bp))) {
            if ((2U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_nz_mask_bp))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_p1_reg[0U] 
                    = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3668[4U];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_p1_reg[1U] 
                    = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3668[5U];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_p1_reg[2U] 
                    = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3668[6U];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_p1_reg[3U] 
                    = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3668[7U];
            } else {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_p1_reg[0U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_p1_reg[1U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_p1_reg[2U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_p1_reg[3U] = 0U;
            }
        } else if ((2U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_reg_en_bp))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_p1_reg[0U] = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_p1_reg[1U] = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_p1_reg[2U] = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_p1_reg[3U] = 0U;
        }
        if ((1U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_reg_en_bp))) {
            if ((1U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_nz_mask_bp))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_p0_reg[0U] 
                    = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3669[0U];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_p0_reg[1U] 
                    = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3669[1U];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_p0_reg[2U] 
                    = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3669[2U];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_p0_reg[3U] 
                    = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3669[3U];
            } else {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_p0_reg[0U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_p0_reg[1U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_p0_reg[2U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_p0_reg[3U] = 0U;
            }
        } else if ((1U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_reg_en_bp))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_p0_reg[0U] = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_p0_reg[1U] = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_p0_reg[2U] = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_p0_reg[3U] = 0U;
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_half_mode) 
             & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_wr_en))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_hold_tag 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_hold_tag_w;
        } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_half_mode) 
                    & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_wr_en))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_hold_tag = 0U;
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_reg_en) 
             | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__dat_fp16_nan_vld) 
                & (0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__dat_fp16_nan_sum))))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_nan_data_num 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__dp2reg_nan_data_num_w;
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_reg_en) 
             | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__dat_fp16_inf_vld) 
                & (0U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__dat_fp16_inf_sum))))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_inf_data_num 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__dp2reg_inf_data_num_w;
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_wr_en_d1) 
             | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__op_en_d0))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cell_en_d0 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_cell_en_d1;
        } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_wr_en_d1) 
                    | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__op_en_d0))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cell_en_d0 = 0ULL;
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_vld_d4) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_nz_mask_d5 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_nz_mask_d4;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_cell_out_sel_hold_d5 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_cell_out_sel_hold_d4;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_hsel_d5 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_hsel_d4;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_addr_d5 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_addr_d4;
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_vld_d4) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_d5[0U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_d4[0U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_d5[1U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_d4[1U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_d5[2U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_d4[2U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_d5[3U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_d4[3U];
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_vld_d4) 
             | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_vld_d5))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_reg_en_d5 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_reg_en_d4;
        } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_vld_d4) 
                    | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_vld_d5))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_reg_en_d5 = 0U;
        }
        if ((0x00000080U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_reg_en_bp))) {
            if ((0x00000080U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_nz_mask_bp))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_p7_reg[0U] 
                    = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_masked[0x0000001cU];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_p7_reg[1U] 
                    = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_masked[0x0000001dU];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_p7_reg[2U] 
                    = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_masked[0x0000001eU];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_p7_reg[3U] 
                    = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_masked[0x0000001fU];
            } else {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_p7_reg[0U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_p7_reg[1U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_p7_reg[2U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_p7_reg[3U] = 0U;
            }
        } else if ((0x00000080U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_reg_en_bp))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_p7_reg[0U] = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_p7_reg[1U] = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_p7_reg[2U] = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_p7_reg[3U] = 0U;
        }
        if ((0x00000040U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_reg_en_bp))) {
            if ((0x00000040U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_nz_mask_bp))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_p6_reg[0U] 
                    = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3663[0x00000018U];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_p6_reg[1U] 
                    = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3663[0x00000019U];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_p6_reg[2U] 
                    = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3663[0x0000001aU];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_p6_reg[3U] 
                    = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3663[0x0000001bU];
            } else {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_p6_reg[0U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_p6_reg[1U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_p6_reg[2U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_p6_reg[3U] = 0U;
            }
        } else if ((0x00000040U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_reg_en_bp))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_p6_reg[0U] = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_p6_reg[1U] = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_p6_reg[2U] = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_p6_reg[3U] = 0U;
        }
        if ((0x00000020U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_reg_en_bp))) {
            if ((0x00000020U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_nz_mask_bp))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_p5_reg[0U] 
                    = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3664[0x00000014U];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_p5_reg[1U] 
                    = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3664[0x00000015U];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_p5_reg[2U] 
                    = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3664[0x00000016U];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_p5_reg[3U] 
                    = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3664[0x00000017U];
            } else {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_p5_reg[0U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_p5_reg[1U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_p5_reg[2U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_p5_reg[3U] = 0U;
            }
        } else if ((0x00000020U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_reg_en_bp))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_p5_reg[0U] = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_p5_reg[1U] = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_p5_reg[2U] = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_p5_reg[3U] = 0U;
        }
        if ((0x00000010U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_reg_en_bp))) {
            if ((0x00000010U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_nz_mask_bp))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_p4_reg[0U] 
                    = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3665[0x00000010U];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_p4_reg[1U] 
                    = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3665[0x00000011U];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_p4_reg[2U] 
                    = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3665[0x00000012U];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_p4_reg[3U] 
                    = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3665[0x00000013U];
            } else {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_p4_reg[0U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_p4_reg[1U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_p4_reg[2U] = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_p4_reg[3U] = 0U;
            }
        } else if ((0x00000010U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_reg_en_bp))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_p4_reg[0U] = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_p4_reg[1U] = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_p4_reg[2U] = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_p4_reg[3U] = 0U;
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_vld_d4) 
             | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_hold_en_d4))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_line_idx_d5 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_line_idx_d4;
        } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_vld_d4) 
                    | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_hold_en_d4))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_line_idx_d5 = 0U;
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_wr_en) 
             | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_wr_en_d1))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_cell_en_d1 
                = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_wr_en) 
                    & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_cvt_en))
                    ? ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_int8)
                        ? (((QData)((IData)((- (IData)(
                                                       (1U 
                                                        & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_wr_info_pd) 
                                                           >> 1U)))))) 
                            << 0x00000020U) | (QData)((IData)(
                                                              (- (IData)(
                                                                         (1U 
                                                                          & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_wr_info_pd)))))))
                        : ((0x00000010U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_wr_info_pd))
                            ? 0x0000ffff0000ffffULL
                            : ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_cell_in_sel_half)
                                ? ((QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__dat_half_mask)) 
                                   << 0x00000020U) : 
                               (((QData)((IData)(((
                                                   (- (IData)(
                                                              (1U 
                                                               & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_wr_info_pd) 
                                                                  >> 3U)))) 
                                                   << 0x00000010U) 
                                                  | (0x0000ffffU 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_wr_info_pd) 
                                                                      >> 2U)))))))) 
                                 << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__dat_half_mask))))))
                    : 0ULL);
        } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_wr_en) 
                    | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_wr_en_d1))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_cell_en_d1 = 0ULL;
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_reg_en) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__is_data_expand 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__is_data_expand_w;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__is_data_shrink 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__is_data_shrink_w;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__is_input_fp16 
                = (2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_in_precision));
            if ((0U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_proc_precision))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_out_int8 = 1U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0U] 
                    = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                        << 0x00000018U) | ((0x00ff0000U 
                                            & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                                               << 0x00000010U)) 
                                           | ((0x0000ff00U 
                                               & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                                                  << 8U)) 
                                              | (0x000000ffU 
                                                 & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value)))));
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[1U] 
                    = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                        << 0x00000018U) | ((0x00ff0000U 
                                            & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                                               << 0x00000010U)) 
                                           | ((0x0000ff00U 
                                               & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                                                  << 8U)) 
                                              | (0x000000ffU 
                                                 & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value)))));
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[2U] 
                    = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                        << 0x00000018U) | ((0x00ff0000U 
                                            & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                                               << 0x00000010U)) 
                                           | ((0x0000ff00U 
                                               & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                                                  << 8U)) 
                                              | (0x000000ffU 
                                                 & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value)))));
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[3U] 
                    = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                        << 0x00000018U) | ((0x00ff0000U 
                                            & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                                               << 0x00000010U)) 
                                           | ((0x0000ff00U 
                                               & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                                                  << 8U)) 
                                              | (0x000000ffU 
                                                 & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value)))));
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[4U] 
                    = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                        << 0x00000018U) | ((0x00ff0000U 
                                            & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                                               << 0x00000010U)) 
                                           | ((0x0000ff00U 
                                               & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                                                  << 8U)) 
                                              | (0x000000ffU 
                                                 & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value)))));
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[5U] 
                    = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                        << 0x00000018U) | ((0x00ff0000U 
                                            & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                                               << 0x00000010U)) 
                                           | ((0x0000ff00U 
                                               & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                                                  << 8U)) 
                                              | (0x000000ffU 
                                                 & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value)))));
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[6U] 
                    = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                        << 0x00000018U) | ((0x00ff0000U 
                                            & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                                               << 0x00000010U)) 
                                           | ((0x0000ff00U 
                                               & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                                                  << 8U)) 
                                              | (0x000000ffU 
                                                 & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value)))));
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[7U] 
                    = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                        << 0x00000018U) | ((0x00ff0000U 
                                            & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                                               << 0x00000010U)) 
                                           | ((0x0000ff00U 
                                               & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                                                  << 8U)) 
                                              | (0x000000ffU 
                                                 & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value)))));
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[8U] 
                    = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                        << 0x00000018U) | ((0x00ff0000U 
                                            & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                                               << 0x00000010U)) 
                                           | ((0x0000ff00U 
                                               & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                                                  << 8U)) 
                                              | (0x000000ffU 
                                                 & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value)))));
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[9U] 
                    = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                        << 0x00000018U) | ((0x00ff0000U 
                                            & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                                               << 0x00000010U)) 
                                           | ((0x0000ff00U 
                                               & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                                                  << 8U)) 
                                              | (0x000000ffU 
                                                 & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value)))));
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x0000000aU] 
                    = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                        << 0x00000018U) | ((0x00ff0000U 
                                            & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                                               << 0x00000010U)) 
                                           | ((0x0000ff00U 
                                               & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                                                  << 8U)) 
                                              | (0x000000ffU 
                                                 & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value)))));
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x0000000bU] 
                    = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                        << 0x00000018U) | ((0x00ff0000U 
                                            & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                                               << 0x00000010U)) 
                                           | ((0x0000ff00U 
                                               & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                                                  << 8U)) 
                                              | (0x000000ffU 
                                                 & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value)))));
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x0000000cU] 
                    = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                        << 0x00000018U) | ((0x00ff0000U 
                                            & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                                               << 0x00000010U)) 
                                           | ((0x0000ff00U 
                                               & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                                                  << 8U)) 
                                              | (0x000000ffU 
                                                 & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value)))));
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x0000000dU] 
                    = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                        << 0x00000018U) | ((0x00ff0000U 
                                            & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                                               << 0x00000010U)) 
                                           | ((0x0000ff00U 
                                               & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                                                  << 8U)) 
                                              | (0x000000ffU 
                                                 & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value)))));
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x0000000eU] 
                    = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                        << 0x00000018U) | ((0x00ff0000U 
                                            & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                                               << 0x00000010U)) 
                                           | ((0x0000ff00U 
                                               & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                                                  << 8U)) 
                                              | (0x000000ffU 
                                                 & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value)))));
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x0000000fU] 
                    = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                        << 0x00000018U) | ((0x00ff0000U 
                                            & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                                               << 0x00000010U)) 
                                           | ((0x0000ff00U 
                                               & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                                                  << 8U)) 
                                              | (0x000000ffU 
                                                 & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value)))));
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x00000010U] 
                    = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                        << 0x00000018U) | ((0x00ff0000U 
                                            & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                                               << 0x00000010U)) 
                                           | ((0x0000ff00U 
                                               & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                                                  << 8U)) 
                                              | (0x000000ffU 
                                                 & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value)))));
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x00000011U] 
                    = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                        << 0x00000018U) | ((0x00ff0000U 
                                            & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                                               << 0x00000010U)) 
                                           | ((0x0000ff00U 
                                               & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                                                  << 8U)) 
                                              | (0x000000ffU 
                                                 & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value)))));
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x00000012U] 
                    = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                        << 0x00000018U) | ((0x00ff0000U 
                                            & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                                               << 0x00000010U)) 
                                           | ((0x0000ff00U 
                                               & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                                                  << 8U)) 
                                              | (0x000000ffU 
                                                 & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value)))));
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x00000013U] 
                    = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                        << 0x00000018U) | ((0x00ff0000U 
                                            & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                                               << 0x00000010U)) 
                                           | ((0x0000ff00U 
                                               & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                                                  << 8U)) 
                                              | (0x000000ffU 
                                                 & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value)))));
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x00000014U] 
                    = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                        << 0x00000018U) | ((0x00ff0000U 
                                            & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                                               << 0x00000010U)) 
                                           | ((0x0000ff00U 
                                               & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                                                  << 8U)) 
                                              | (0x000000ffU 
                                                 & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value)))));
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x00000015U] 
                    = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                        << 0x00000018U) | ((0x00ff0000U 
                                            & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                                               << 0x00000010U)) 
                                           | ((0x0000ff00U 
                                               & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                                                  << 8U)) 
                                              | (0x000000ffU 
                                                 & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value)))));
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x00000016U] 
                    = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                        << 0x00000018U) | ((0x00ff0000U 
                                            & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                                               << 0x00000010U)) 
                                           | ((0x0000ff00U 
                                               & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                                                  << 8U)) 
                                              | (0x000000ffU 
                                                 & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value)))));
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x00000017U] 
                    = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                        << 0x00000018U) | ((0x00ff0000U 
                                            & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                                               << 0x00000010U)) 
                                           | ((0x0000ff00U 
                                               & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                                                  << 8U)) 
                                              | (0x000000ffU 
                                                 & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value)))));
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x00000018U] 
                    = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                        << 0x00000018U) | ((0x00ff0000U 
                                            & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                                               << 0x00000010U)) 
                                           | ((0x0000ff00U 
                                               & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                                                  << 8U)) 
                                              | (0x000000ffU 
                                                 & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value)))));
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x00000019U] 
                    = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                        << 0x00000018U) | ((0x00ff0000U 
                                            & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                                               << 0x00000010U)) 
                                           | ((0x0000ff00U 
                                               & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                                                  << 8U)) 
                                              | (0x000000ffU 
                                                 & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value)))));
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x0000001aU] 
                    = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                        << 0x00000018U) | ((0x00ff0000U 
                                            & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                                               << 0x00000010U)) 
                                           | ((0x0000ff00U 
                                               & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                                                  << 8U)) 
                                              | (0x000000ffU 
                                                 & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value)))));
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x0000001bU] 
                    = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                        << 0x00000018U) | ((0x00ff0000U 
                                            & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                                               << 0x00000010U)) 
                                           | ((0x0000ff00U 
                                               & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                                                  << 8U)) 
                                              | (0x000000ffU 
                                                 & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value)))));
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x0000001cU] 
                    = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                        << 0x00000018U) | ((0x00ff0000U 
                                            & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                                               << 0x00000010U)) 
                                           | ((0x0000ff00U 
                                               & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                                                  << 8U)) 
                                              | (0x000000ffU 
                                                 & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value)))));
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x0000001dU] 
                    = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                        << 0x00000018U) | ((0x00ff0000U 
                                            & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                                               << 0x00000010U)) 
                                           | ((0x0000ff00U 
                                               & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                                                  << 8U)) 
                                              | (0x000000ffU 
                                                 & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value)))));
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x0000001eU] 
                    = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                        << 0x00000018U) | ((0x00ff0000U 
                                            & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                                               << 0x00000010U)) 
                                           | ((0x0000ff00U 
                                               & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                                                  << 8U)) 
                                              | (0x000000ffU 
                                                 & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value)))));
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x0000001fU] 
                    = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                        << 0x00000018U) | ((0x00ff0000U 
                                            & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                                               << 0x00000010U)) 
                                           | ((0x0000ff00U 
                                               & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                                                  << 8U)) 
                                              | (0x000000ffU 
                                                 & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value)))));
            } else {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_out_int8 = 0U;
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0U] 
                    = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                        << 0x00000010U) | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value));
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[1U] 
                    = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                        << 0x00000010U) | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                                           | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                                              >> 0x00000010U)));
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[2U] 
                    = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                        << 0x00000010U) | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                                           | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                                              >> 0x00000010U)));
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[3U] 
                    = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                        << 0x00000010U) | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                                           | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                                              >> 0x00000010U)));
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[4U] 
                    = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                        << 0x00000010U) | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                                           | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                                              >> 0x00000010U)));
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[5U] 
                    = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                        << 0x00000010U) | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                                           | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                                              >> 0x00000010U)));
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[6U] 
                    = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                        << 0x00000010U) | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                                           | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                                              >> 0x00000010U)));
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[7U] 
                    = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                        << 0x00000010U) | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                                           | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                                              >> 0x00000010U)));
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[8U] 
                    = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                        << 0x00000010U) | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                                           | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                                              >> 0x00000010U)));
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[9U] 
                    = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                        << 0x00000010U) | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                                           | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                                              >> 0x00000010U)));
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x0000000aU] 
                    = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                        << 0x00000010U) | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                                           | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                                              >> 0x00000010U)));
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x0000000bU] 
                    = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                        << 0x00000010U) | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                                           | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                                              >> 0x00000010U)));
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x0000000cU] 
                    = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                        << 0x00000010U) | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                                           | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                                              >> 0x00000010U)));
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x0000000dU] 
                    = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                        << 0x00000010U) | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                                           | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                                              >> 0x00000010U)));
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x0000000eU] 
                    = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                        << 0x00000010U) | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                                           | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                                              >> 0x00000010U)));
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x0000000fU] 
                    = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                        << 0x00000010U) | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                                           | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                                              >> 0x00000010U)));
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x00000010U] 
                    = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                        << 0x00000010U) | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                                           | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                                              >> 0x00000010U)));
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x00000011U] 
                    = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                        << 0x00000010U) | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                                           | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                                              >> 0x00000010U)));
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x00000012U] 
                    = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                        << 0x00000010U) | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                                           | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                                              >> 0x00000010U)));
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x00000013U] 
                    = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                        << 0x00000010U) | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                                           | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                                              >> 0x00000010U)));
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x00000014U] 
                    = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                        << 0x00000010U) | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                                           | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                                              >> 0x00000010U)));
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x00000015U] 
                    = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                        << 0x00000010U) | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                                           | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                                              >> 0x00000010U)));
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x00000016U] 
                    = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                        << 0x00000010U) | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                                           | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                                              >> 0x00000010U)));
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x00000017U] 
                    = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                        << 0x00000010U) | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                                           | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                                              >> 0x00000010U)));
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x00000018U] 
                    = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                        << 0x00000010U) | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                                           | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                                              >> 0x00000010U)));
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x00000019U] 
                    = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                        << 0x00000010U) | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                                           | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                                              >> 0x00000010U)));
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x0000001aU] 
                    = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                        << 0x00000010U) | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                                           | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                                              >> 0x00000010U)));
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x0000001bU] 
                    = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                        << 0x00000010U) | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                                           | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                                              >> 0x00000010U)));
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x0000001cU] 
                    = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                        << 0x00000010U) | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                                           | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                                              >> 0x00000010U)));
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x0000001dU] 
                    = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                        << 0x00000010U) | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                                           | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                                              >> 0x00000010U)));
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x0000001eU] 
                    = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                        << 0x00000010U) | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                                           | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                                              >> 0x00000010U)));
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x0000001fU] 
                    = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                        << 0x00000010U) | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                                           | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_pad_value) 
                                              >> 0x00000010U)));
            }
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__is_data_normal 
                = (1U & (~ ((0U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_in_precision)) 
                            ^ (0U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_proc_precision)))));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__is_input_int8 
                = (- (QData)((IData)((0U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_in_precision)))));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_scale[0U] 
                = ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                      ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.cvt_scale)
                      : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.cvt_scale)) 
                    << 0x00000010U) | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                                        ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.cvt_scale)
                                        : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.cvt_scale)));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_scale[1U] 
                = ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                      ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.cvt_scale)
                      : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.cvt_scale)) 
                    << 0x00000010U) | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                                         ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.cvt_scale)
                                         : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.cvt_scale)) 
                                       | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                                            ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.cvt_scale)
                                            : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.cvt_scale)) 
                                          >> 0x00000010U)));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_scale[2U] 
                = ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                      ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.cvt_scale)
                      : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.cvt_scale)) 
                    << 0x00000010U) | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                                         ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.cvt_scale)
                                         : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.cvt_scale)) 
                                       | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                                            ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.cvt_scale)
                                            : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.cvt_scale)) 
                                          >> 0x00000010U)));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_scale[3U] 
                = ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                      ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.cvt_scale)
                      : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.cvt_scale)) 
                    << 0x00000010U) | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                                         ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.cvt_scale)
                                         : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.cvt_scale)) 
                                       | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                                            ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.cvt_scale)
                                            : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.cvt_scale)) 
                                          >> 0x00000010U)));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_scale[4U] 
                = ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                      ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.cvt_scale)
                      : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.cvt_scale)) 
                    << 0x00000010U) | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                                         ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.cvt_scale)
                                         : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.cvt_scale)) 
                                       | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                                            ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.cvt_scale)
                                            : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.cvt_scale)) 
                                          >> 0x00000010U)));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_scale[5U] 
                = ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                      ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.cvt_scale)
                      : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.cvt_scale)) 
                    << 0x00000010U) | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                                         ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.cvt_scale)
                                         : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.cvt_scale)) 
                                       | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                                            ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.cvt_scale)
                                            : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.cvt_scale)) 
                                          >> 0x00000010U)));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_scale[6U] 
                = ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                      ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.cvt_scale)
                      : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.cvt_scale)) 
                    << 0x00000010U) | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                                         ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.cvt_scale)
                                         : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.cvt_scale)) 
                                       | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                                            ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.cvt_scale)
                                            : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.cvt_scale)) 
                                          >> 0x00000010U)));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_scale[7U] 
                = ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                      ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.cvt_scale)
                      : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.cvt_scale)) 
                    << 0x00000010U) | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                                         ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.cvt_scale)
                                         : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.cvt_scale)) 
                                       | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                                            ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.cvt_scale)
                                            : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.cvt_scale)) 
                                          >> 0x00000010U)));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_offset[0U] 
                = ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                      ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.cvt_offset)
                      : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.cvt_offset)) 
                    << 0x00000010U) | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                                        ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.cvt_offset)
                                        : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.cvt_offset)));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_offset[1U] 
                = ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                      ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.cvt_offset)
                      : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.cvt_offset)) 
                    << 0x00000010U) | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                                         ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.cvt_offset)
                                         : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.cvt_offset)) 
                                       | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                                            ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.cvt_offset)
                                            : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.cvt_offset)) 
                                          >> 0x00000010U)));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_offset[2U] 
                = ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                      ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.cvt_offset)
                      : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.cvt_offset)) 
                    << 0x00000010U) | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                                         ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.cvt_offset)
                                         : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.cvt_offset)) 
                                       | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                                            ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.cvt_offset)
                                            : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.cvt_offset)) 
                                          >> 0x00000010U)));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_offset[3U] 
                = ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                      ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.cvt_offset)
                      : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.cvt_offset)) 
                    << 0x00000010U) | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                                         ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.cvt_offset)
                                         : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.cvt_offset)) 
                                       | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                                            ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.cvt_offset)
                                            : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.cvt_offset)) 
                                          >> 0x00000010U)));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_offset[4U] 
                = ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                      ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.cvt_offset)
                      : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.cvt_offset)) 
                    << 0x00000010U) | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                                         ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.cvt_offset)
                                         : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.cvt_offset)) 
                                       | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                                            ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.cvt_offset)
                                            : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.cvt_offset)) 
                                          >> 0x00000010U)));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_offset[5U] 
                = ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                      ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.cvt_offset)
                      : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.cvt_offset)) 
                    << 0x00000010U) | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                                         ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.cvt_offset)
                                         : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.cvt_offset)) 
                                       | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                                            ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.cvt_offset)
                                            : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.cvt_offset)) 
                                          >> 0x00000010U)));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_offset[6U] 
                = ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                      ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.cvt_offset)
                      : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.cvt_offset)) 
                    << 0x00000010U) | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                                         ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.cvt_offset)
                                         : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.cvt_offset)) 
                                       | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                                            ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.cvt_offset)
                                            : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.cvt_offset)) 
                                          >> 0x00000010U)));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_offset[7U] 
                = ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                      ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.cvt_offset)
                      : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.cvt_offset)) 
                    << 0x00000010U) | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                                         ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.cvt_offset)
                                         : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.cvt_offset)) 
                                       | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                                            ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.cvt_offset)
                                            : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.cvt_offset)) 
                                          >> 0x00000010U)));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_offset[8U] 
                = ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                      ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.cvt_offset)
                      : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.cvt_offset)) 
                    << 0x00000010U) | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                                         ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.cvt_offset)
                                         : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.cvt_offset)) 
                                       | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                                            ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.cvt_offset)
                                            : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.cvt_offset)) 
                                          >> 0x00000010U)));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_offset[9U] 
                = ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                      ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.cvt_offset)
                      : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.cvt_offset)) 
                    << 0x00000010U) | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                                         ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.cvt_offset)
                                         : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.cvt_offset)) 
                                       | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                                            ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.cvt_offset)
                                            : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.cvt_offset)) 
                                          >> 0x00000010U)));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_offset[0x0000000aU] 
                = ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                      ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.cvt_offset)
                      : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.cvt_offset)) 
                    << 0x00000010U) | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                                         ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.cvt_offset)
                                         : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.cvt_offset)) 
                                       | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                                            ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.cvt_offset)
                                            : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.cvt_offset)) 
                                          >> 0x00000010U)));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_offset[0x0000000bU] 
                = ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                      ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.cvt_offset)
                      : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.cvt_offset)) 
                    << 0x00000010U) | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                                         ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.cvt_offset)
                                         : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.cvt_offset)) 
                                       | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                                            ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.cvt_offset)
                                            : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.cvt_offset)) 
                                          >> 0x00000010U)));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_offset[0x0000000cU] 
                = ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                      ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.cvt_offset)
                      : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.cvt_offset)) 
                    << 0x00000010U) | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                                         ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.cvt_offset)
                                         : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.cvt_offset)) 
                                       | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                                            ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.cvt_offset)
                                            : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.cvt_offset)) 
                                          >> 0x00000010U)));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_offset[0x0000000dU] 
                = ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                      ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.cvt_offset)
                      : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.cvt_offset)) 
                    << 0x00000010U) | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                                         ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.cvt_offset)
                                         : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.cvt_offset)) 
                                       | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                                            ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.cvt_offset)
                                            : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.cvt_offset)) 
                                          >> 0x00000010U)));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_offset[0x0000000eU] 
                = ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                      ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.cvt_offset)
                      : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.cvt_offset)) 
                    << 0x00000010U) | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                                         ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.cvt_offset)
                                         : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.cvt_offset)) 
                                       | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                                            ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.cvt_offset)
                                            : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.cvt_offset)) 
                                          >> 0x00000010U)));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_offset[0x0000000fU] 
                = ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                      ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.cvt_offset)
                      : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.cvt_offset)) 
                    << 0x00000010U) | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                                         ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.cvt_offset)
                                         : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.cvt_offset)) 
                                       | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                                            ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.cvt_offset)
                                            : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.cvt_offset)) 
                                          >> 0x00000010U)));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_offset[0x00000010U] 
                = ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                      ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.cvt_offset)
                      : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.cvt_offset)) 
                    << 0x00000010U) | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                                         ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.cvt_offset)
                                         : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.cvt_offset)) 
                                       | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                                            ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.cvt_offset)
                                            : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.cvt_offset)) 
                                          >> 0x00000010U)));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_offset[0x00000011U] 
                = ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                      ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.cvt_offset)
                      : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.cvt_offset)) 
                    << 0x00000010U) | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                                         ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.cvt_offset)
                                         : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.cvt_offset)) 
                                       | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                                            ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.cvt_offset)
                                            : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.cvt_offset)) 
                                          >> 0x00000010U)));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_offset[0x00000012U] 
                = ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                      ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.cvt_offset)
                      : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.cvt_offset)) 
                    << 0x00000010U) | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                                         ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.cvt_offset)
                                         : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.cvt_offset)) 
                                       | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                                            ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.cvt_offset)
                                            : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.cvt_offset)) 
                                          >> 0x00000010U)));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_offset[0x00000013U] 
                = ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                      ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.cvt_offset)
                      : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.cvt_offset)) 
                    << 0x00000010U) | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                                         ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.cvt_offset)
                                         : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.cvt_offset)) 
                                       | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                                            ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.cvt_offset)
                                            : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.cvt_offset)) 
                                          >> 0x00000010U)));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_offset[0x00000014U] 
                = ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                      ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.cvt_offset)
                      : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.cvt_offset)) 
                    << 0x00000010U) | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                                         ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.cvt_offset)
                                         : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.cvt_offset)) 
                                       | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                                            ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.cvt_offset)
                                            : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.cvt_offset)) 
                                          >> 0x00000010U)));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_offset[0x00000015U] 
                = ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                      ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.cvt_offset)
                      : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.cvt_offset)) 
                    << 0x00000010U) | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                                         ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.cvt_offset)
                                         : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.cvt_offset)) 
                                       | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                                            ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.cvt_offset)
                                            : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.cvt_offset)) 
                                          >> 0x00000010U)));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_offset[0x00000016U] 
                = ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                      ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.cvt_offset)
                      : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.cvt_offset)) 
                    << 0x00000010U) | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                                         ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.cvt_offset)
                                         : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.cvt_offset)) 
                                       | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                                            ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.cvt_offset)
                                            : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.cvt_offset)) 
                                          >> 0x00000010U)));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_offset[0x00000017U] 
                = ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                      ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.cvt_offset)
                      : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.cvt_offset)) 
                    << 0x00000010U) | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                                         ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.cvt_offset)
                                         : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.cvt_offset)) 
                                       | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                                            ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.cvt_offset)
                                            : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.cvt_offset)) 
                                          >> 0x00000010U)));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_offset[0x00000018U] 
                = ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                      ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.cvt_offset)
                      : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.cvt_offset)) 
                    << 0x00000010U) | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                                         ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.cvt_offset)
                                         : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.cvt_offset)) 
                                       | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                                            ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.cvt_offset)
                                            : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.cvt_offset)) 
                                          >> 0x00000010U)));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_offset[0x00000019U] 
                = ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                      ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.cvt_offset)
                      : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.cvt_offset)) 
                    << 0x00000010U) | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                                         ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.cvt_offset)
                                         : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.cvt_offset)) 
                                       | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                                            ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.cvt_offset)
                                            : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.cvt_offset)) 
                                          >> 0x00000010U)));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_offset[0x0000001aU] 
                = ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                      ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.cvt_offset)
                      : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.cvt_offset)) 
                    << 0x00000010U) | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                                         ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.cvt_offset)
                                         : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.cvt_offset)) 
                                       | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                                            ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.cvt_offset)
                                            : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.cvt_offset)) 
                                          >> 0x00000010U)));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_offset[0x0000001bU] 
                = ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                      ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.cvt_offset)
                      : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.cvt_offset)) 
                    << 0x00000010U) | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                                         ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.cvt_offset)
                                         : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.cvt_offset)) 
                                       | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                                            ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.cvt_offset)
                                            : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.cvt_offset)) 
                                          >> 0x00000010U)));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_offset[0x0000001cU] 
                = ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                      ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.cvt_offset)
                      : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.cvt_offset)) 
                    << 0x00000010U) | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                                         ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.cvt_offset)
                                         : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.cvt_offset)) 
                                       | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                                            ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.cvt_offset)
                                            : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.cvt_offset)) 
                                          >> 0x00000010U)));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_offset[0x0000001dU] 
                = ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                      ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.cvt_offset)
                      : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.cvt_offset)) 
                    << 0x00000010U) | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                                         ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.cvt_offset)
                                         : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.cvt_offset)) 
                                       | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                                            ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.cvt_offset)
                                            : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.cvt_offset)) 
                                          >> 0x00000010U)));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_offset[0x0000001eU] 
                = ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                      ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.cvt_offset)
                      : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.cvt_offset)) 
                    << 0x00000010U) | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                                         ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.cvt_offset)
                                         : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.cvt_offset)) 
                                       | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                                            ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.cvt_offset)
                                            : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.cvt_offset)) 
                                          >> 0x00000010U)));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_offset[0x0000001fU] 
                = ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                      ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.cvt_offset)
                      : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.cvt_offset)) 
                    << 0x00000010U) | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                                         ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.cvt_offset)
                                         : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.cvt_offset)) 
                                       | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                                            ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.cvt_offset)
                                            : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.cvt_offset)) 
                                          >> 0x00000010U)));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_truncate[0U] 
                = ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                      ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.cvt_truncate)
                      : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.cvt_truncate)) 
                    << 0x0000001eU) | ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                                          ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.cvt_truncate)
                                          : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.cvt_truncate)) 
                                        << 0x00000018U) 
                                       | ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                                             ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.cvt_truncate)
                                             : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.cvt_truncate)) 
                                           << 0x00000012U) 
                                          | ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                                                ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.cvt_truncate)
                                                : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.cvt_truncate)) 
                                              << 0x0000000cU) 
                                             | ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                                                   ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.cvt_truncate)
                                                   : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.cvt_truncate)) 
                                                 << 6U) 
                                                | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                                                    ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.cvt_truncate)
                                                    : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.cvt_truncate)))))));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_truncate[1U] 
                = ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                      ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.cvt_truncate)
                      : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.cvt_truncate)) 
                    << 0x0000001cU) | ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                                          ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.cvt_truncate)
                                          : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.cvt_truncate)) 
                                        << 0x00000016U) 
                                       | ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                                             ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.cvt_truncate)
                                             : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.cvt_truncate)) 
                                           << 0x00000010U) 
                                          | ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                                                ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.cvt_truncate)
                                                : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.cvt_truncate)) 
                                              << 0x0000000aU) 
                                             | ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                                                   ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.cvt_truncate)
                                                   : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.cvt_truncate)) 
                                                 << 4U) 
                                                | ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                                                      ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.cvt_truncate)
                                                      : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.cvt_truncate)) 
                                                    >> 2U) 
                                                   | ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                                                         ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.cvt_truncate)
                                                         : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.cvt_truncate)) 
                                                       >> 8U) 
                                                      | ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                                                            ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.cvt_truncate)
                                                            : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.cvt_truncate)) 
                                                          >> 0x0000000eU) 
                                                         | ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                                                               ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.cvt_truncate)
                                                               : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.cvt_truncate)) 
                                                             >> 0x00000014U) 
                                                            | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                                                                 ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.cvt_truncate)
                                                                 : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.cvt_truncate)) 
                                                               >> 0x0000001aU))))))))));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_truncate[2U] 
                = ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                      ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.cvt_truncate)
                      : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.cvt_truncate)) 
                    << 0x0000001aU) | ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                                          ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.cvt_truncate)
                                          : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.cvt_truncate)) 
                                        << 0x00000014U) 
                                       | ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                                             ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.cvt_truncate)
                                             : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.cvt_truncate)) 
                                           << 0x0000000eU) 
                                          | ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                                                ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.cvt_truncate)
                                                : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.cvt_truncate)) 
                                              << 8U) 
                                             | ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                                                   ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.cvt_truncate)
                                                   : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.cvt_truncate)) 
                                                 << 2U) 
                                                | ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                                                      ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.cvt_truncate)
                                                      : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.cvt_truncate)) 
                                                    >> 4U) 
                                                   | ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                                                         ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.cvt_truncate)
                                                         : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.cvt_truncate)) 
                                                       >> 0x0000000aU) 
                                                      | ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                                                            ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.cvt_truncate)
                                                            : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.cvt_truncate)) 
                                                          >> 0x00000010U) 
                                                         | ((((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                                                               ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.cvt_truncate)
                                                               : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.cvt_truncate)) 
                                                             >> 0x00000016U) 
                                                            | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_consumer)
                                                                 ? (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d1.cvt_truncate)
                                                                 : (IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0.cvt_truncate)) 
                                                               >> 0x0000001cU))))))))));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision 
                = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_proc_precision) 
                    << 0x0000001eU) | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_proc_precision) 
                                        << 0x0000001cU) 
                                       | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_proc_precision) 
                                           << 0x0000001aU) 
                                          | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_proc_precision) 
                                              << 0x00000018U) 
                                             | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_proc_precision) 
                                                 << 0x00000016U) 
                                                | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_proc_precision) 
                                                    << 0x00000014U) 
                                                   | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_proc_precision) 
                                                       << 0x00000012U) 
                                                      | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_proc_precision) 
                                                          << 0x00000010U) 
                                                         | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_proc_precision) 
                                                             << 0x0000000eU) 
                                                            | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_proc_precision) 
                                                                << 0x0000000cU) 
                                                               | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_proc_precision) 
                                                                   << 0x0000000aU) 
                                                                  | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_proc_precision) 
                                                                      << 8U) 
                                                                     | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_proc_precision) 
                                                                         << 6U) 
                                                                        | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_proc_precision) 
                                                                            << 4U) 
                                                                           | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_proc_precision) 
                                                                               << 2U) 
                                                                              | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_proc_precision))))))))))))))));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision 
                = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_in_precision) 
                    << 0x0000001eU) | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_in_precision) 
                                        << 0x0000001cU) 
                                       | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_in_precision) 
                                           << 0x0000001aU) 
                                          | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_in_precision) 
                                              << 0x00000018U) 
                                             | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_in_precision) 
                                                 << 0x00000016U) 
                                                | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_in_precision) 
                                                    << 0x00000014U) 
                                                   | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_in_precision) 
                                                       << 0x00000012U) 
                                                      | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_in_precision) 
                                                          << 0x00000010U) 
                                                         | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_in_precision) 
                                                             << 0x0000000eU) 
                                                            | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_in_precision) 
                                                                << 0x0000000cU) 
                                                               | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_in_precision) 
                                                                   << 0x0000000aU) 
                                                                  | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_in_precision) 
                                                                      << 8U) 
                                                                     | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_in_precision) 
                                                                         << 6U) 
                                                                        | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_in_precision) 
                                                                            << 4U) 
                                                                           | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_in_precision) 
                                                                               << 2U) 
                                                                              | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_in_precision))))))))))))))));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__nan_pass 
                = (1U & ((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_nan_to_zero)) 
                         | (2U != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_in_precision))));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_int8 
                = (0U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_in_precision));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_cvt_en 
                = (0x0000003fU & (- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_cvt_en))));
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_vld_d3) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_nz_mask_d4 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_nz_mask_d3;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_cell_out_sel_hold_d4 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_cell_out_sel_hold_d3;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_hsel_d4 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_hsel_d3;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_addr_d4 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_addr_d3;
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_vld_d3) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_d4[0U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_d3[0U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_d4[1U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_d3[1U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_d4[2U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_d3[2U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_d4[3U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_d3[3U];
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_vld_d3) 
             | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_vld_d4))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_reg_en_d4 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_reg_en_d3;
        } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_vld_d3) 
                    | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_vld_d4))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_reg_en_d4 = 0U;
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_vld_d3) 
             | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_hold_en_d3))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_line_idx_d4 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_line_idx_d3;
        } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_vld_d3) 
                    | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_hold_en_d3))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_line_idx_d4 = 0U;
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_vld_d2) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_nz_mask_d3 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_nz_mask_d2;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_cell_out_sel_hold_d3 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_cell_out_sel_hold_d2;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_hsel_d3 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_hsel_d2;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_addr_d3 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_addr_d2;
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_vld_d2) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_d3[0U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_d2[0U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_d3[1U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_d2[1U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_d3[2U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_d2[2U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_d3[3U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_d2[3U];
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_vld_d2) 
             | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_vld_d3))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_reg_en_d3 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_reg_en_d2;
        } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_vld_d2) 
                    | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_vld_d3))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_reg_en_d3 = 0U;
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_vld_d2) 
             | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_hold_en_d2))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_line_idx_d3 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_line_idx_d2;
        } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_vld_d2) 
                    | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_hold_en_d2))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_line_idx_d3 = 0U;
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_vld_d1) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_nz_mask_d2 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_nz_mask_d1;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_cell_out_sel_hold_d2 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_cell_out_sel_hold_d1;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_hsel_d2 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_hsel_d1;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_addr_d2 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_addr_d1;
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_wr_en) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_cell_in_sel_half_d1 
                = (0x0000000fU & (- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_cell_in_sel_half))));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_cell_in_sel_interval_d1 
                = (3U & (- (IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_wr_info_pd) 
                                          >> 4U)))));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_bypass_sel_half_d1 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_bypass_sel_half;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_wr_mean_d1 
                = (1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_wr_info_pd) 
                         >> 7U));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_wr_uint_d1 
                = (- (QData)((IData)((1U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_wr_info_pd) 
                                            >> 8U)))));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_nz_mask_d1 
                = (0x000000ffU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_bypass_sel_half)
                                   ? VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_transform_mask), 4U)
                                   : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_transform_mask)));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_cell_out_sel_hold_d1 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_cell_out_sel_hold;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_hsel_d1 
                = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT____VdfgRegularize_h3411b656_0_3) 
                    << 1U) | (1U & (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_single_hsel))));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_addr_d1 
                = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_cell_out_sel_hold)
                    ? ((((- (IData)((7U == (7U & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_wr_info_pd) 
                                                  >> 9U))))) 
                         & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_hold_addr_7)) 
                        | ((- (IData)((6U == (7U & 
                                              ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_wr_info_pd) 
                                               >> 9U))))) 
                           & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_hold_addr_6))) 
                       | ((((- (IData)((5U == (7U & 
                                               ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_wr_info_pd) 
                                                >> 9U))))) 
                            & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_hold_addr_5)) 
                           | ((- (IData)((4U == (7U 
                                                 & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_wr_info_pd) 
                                                    >> 9U))))) 
                              & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_hold_addr_4))) 
                          | (((- (IData)((3U == (7U 
                                                 & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_wr_info_pd) 
                                                    >> 9U))))) 
                              & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_hold_addr_3)) 
                             | (((- (IData)((2U == 
                                             (7U & 
                                              ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_wr_info_pd) 
                                               >> 9U))))) 
                                 & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_hold_addr_2)) 
                                | (((- (IData)((1U 
                                                == 
                                                (7U 
                                                 & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_wr_info_pd) 
                                                    >> 9U))))) 
                                    & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_hold_addr_1)) 
                                   | ((- (IData)((0U 
                                                  == 
                                                  (7U 
                                                   & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_wr_info_pd) 
                                                      >> 9U))))) 
                                      & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_hold_addr_0)))))))
                    : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_wr_addr));
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_vld_d1) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_d2[0U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_d1[0U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_d2[1U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_d1[1U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_d2[2U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_d1[2U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_d2[3U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_d1[3U];
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_vld_d1) 
             | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_vld_d2))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_reg_en_d2 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_reg_en_d1;
        } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_vld_d1) 
                    | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_vld_d2))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_reg_en_d2 = 0U;
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_vld_d1) 
             | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_hold_en_d1))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_line_idx_d2 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_line_idx_d1;
        } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_vld_d1) 
                    | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_hold_en_d1))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_line_idx_d2 = 0U;
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_vld) {
            VL_SHIFTL_WWI(128,128,32, __Vtemp_29, vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_sel_pad_mask, 0x00000040U);
            if (((~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_half_hold)) 
                 & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_bypass_sel_half))) {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_d1[0U] 
                    = __Vtemp_29[0U];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_d1[1U] 
                    = __Vtemp_29[1U];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_d1[2U] 
                    = __Vtemp_29[2U];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_d1[3U] 
                    = __Vtemp_29[3U];
            } else {
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_d1[0U] 
                    = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_sel_pad_mask[0U];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_d1[1U] 
                    = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_sel_pad_mask[1U];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_d1[2U] 
                    = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_sel_pad_mask[2U];
                vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_d1[3U] 
                    = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_sel_pad_mask[3U];
            }
        }
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_reg_en_d1 
            = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_vld)
                ? ((0x000000f0U & ((- (IData)((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT____VdfgRegularize_h3411b656_0_3))) 
                                   << 4U)) | (0x0000000fU 
                                              & (- (IData)(
                                                           (1U 
                                                            & (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_single_hsel)))))))
                : 0U);
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_wr_en) 
             & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_half_en))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_line_idx_d1 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_line_idx;
        } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_wr_en) 
                    & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_half_en))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_line_idx_d1 = 0U;
        }
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_p3_reg[0U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_p3_reg[1U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_p3_reg[2U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_p3_reg[3U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_p2_reg[0U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_p2_reg[1U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_p2_reg[2U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_p2_reg[3U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_p1_reg[0U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_p1_reg[1U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_p1_reg[2U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_p1_reg[3U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_p0_reg[0U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_p0_reg[1U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_p0_reg[2U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_p0_reg[3U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__is_data_expand = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_cell_in_sel_half_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_hold_tag = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_cell_in_sel_interval_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_bypass_sel_half_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__is_data_shrink = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__is_input_fp16 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_out_int8 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0U] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[1U] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[2U] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[3U] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[4U] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[5U] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[6U] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[7U] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[8U] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[8U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[9U] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[9U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x0000000aU] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000000aU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x0000000bU] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000000bU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x0000000cU] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000000cU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x0000000dU] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000000dU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x0000000eU] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000000eU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x0000000fU] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000000fU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x00000010U] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x00000010U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x00000011U] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x00000011U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x00000012U] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x00000012U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x00000013U] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x00000013U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x00000014U] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x00000014U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x00000015U] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x00000015U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x00000016U] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x00000016U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x00000017U] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x00000017U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x00000018U] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x00000018U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x00000019U] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x00000019U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x0000001aU] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000001aU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x0000001bU] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000001bU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x0000001cU] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000001cU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x0000001dU] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000001dU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x0000001eU] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000001eU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_pad_value[0x0000001fU] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000001fU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__is_data_normal = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_wr_mean_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__is_input_int8 = 0ULL;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_wr_uint_d1 = 0ULL;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_nan_data_num = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dp2reg_inf_data_num = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cell_en_d0 = 0ULL;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_nz_mask_d5 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_cell_out_sel_hold_d5 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_d5[0U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_d5[1U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_d5[2U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_d5[3U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_reg_en_d5 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_scale[0U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_scale[1U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_scale[2U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_scale[3U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_scale[4U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_scale[5U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_scale[6U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_scale[7U] 
            = Vsim__ConstPool__CONST_h9e67c271_0[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_offset[0U] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_offset[1U] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[1U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_offset[2U] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[2U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_offset[3U] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[3U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_offset[4U] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[4U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_offset[5U] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[5U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_offset[6U] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[6U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_offset[7U] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[7U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_offset[8U] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[8U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_offset[9U] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[9U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_offset[0x0000000aU] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000000aU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_offset[0x0000000bU] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000000bU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_offset[0x0000000cU] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000000cU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_offset[0x0000000dU] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000000dU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_offset[0x0000000eU] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000000eU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_offset[0x0000000fU] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000000fU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_offset[0x00000010U] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x00000010U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_offset[0x00000011U] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x00000011U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_offset[0x00000012U] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x00000012U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_offset[0x00000013U] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x00000013U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_offset[0x00000014U] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x00000014U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_offset[0x00000015U] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x00000015U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_offset[0x00000016U] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x00000016U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_offset[0x00000017U] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x00000017U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_offset[0x00000018U] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x00000018U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_offset[0x00000019U] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x00000019U];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_offset[0x0000001aU] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000001aU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_offset[0x0000001bU] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000001bU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_offset[0x0000001cU] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000001cU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_offset[0x0000001dU] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000001dU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_offset[0x0000001eU] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000001eU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_offset[0x0000001fU] 
            = Vsim__ConstPool__CONST_hd6b7ba52_0[0x0000001fU];
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_truncate[0U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_truncate[1U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_truncate[2U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_p7_reg[0U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_p7_reg[1U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_p7_reg[2U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_p7_reg[3U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_p6_reg[0U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_p6_reg[1U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_p6_reg[2U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_p6_reg[3U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_p5_reg[0U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_p5_reg[1U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_p5_reg[2U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_p5_reg[3U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_p4_reg[0U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_p4_reg[1U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_p4_reg[2U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_p4_reg[3U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_proc_precision = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_precision = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__nan_pass = 1U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_line_idx_d5 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_hsel_d5 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_addr_d5 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_cell_en_d1 = 0ULL;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_nz_mask_d4 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_cell_out_sel_hold_d4 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_d4[0U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_d4[1U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_d4[2U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_d4[3U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_reg_en_d4 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_line_idx_d4 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_hsel_d4 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_addr_d4 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_in_int8 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_cvt_en = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_nz_mask_d3 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_cell_out_sel_hold_d3 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_d3[0U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_d3[1U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_d3[2U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_d3[3U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_reg_en_d3 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_line_idx_d3 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_hsel_d3 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_addr_d3 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_nz_mask_d2 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_cell_out_sel_hold_d2 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_d2[0U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_d2[1U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_d2[2U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_d2[3U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_reg_en_d2 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_line_idx_d2 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_hsel_d2 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_addr_d2 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_nz_mask_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_cell_out_sel_hold_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_d1[0U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_d1[1U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_d1[2U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_d1[3U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_reg_en_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_line_idx_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_hsel_d1 = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_addr_d1 = 0U;
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_vld_d5 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_vld_d4));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__slcg_hls_en_d3 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__slcg_hls_en_d2));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_hold_en_d5 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_hold_en_d4));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_wr_lo_data[0U] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_p0_reg[0U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_wr_lo_data[1U] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_p0_reg[1U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_wr_lo_data[2U] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_p0_reg[2U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_wr_lo_data[3U] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_p0_reg[3U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_wr_lo_data[4U] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_p1_reg[0U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_wr_lo_data[5U] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_p1_reg[1U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_wr_lo_data[6U] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_p1_reg[2U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_wr_lo_data[7U] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_p1_reg[3U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_wr_lo_data[8U] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_p2_reg[0U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_wr_lo_data[9U] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_p2_reg[1U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_wr_lo_data[0x0000000aU] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_p2_reg[2U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_wr_lo_data[0x0000000bU] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_p2_reg[3U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_wr_lo_data[0x0000000cU] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_p3_reg[0U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_wr_lo_data[0x0000000dU] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_p3_reg[1U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_wr_lo_data[0x0000000eU] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_p3_reg[2U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__cbuf_p0_wr_lo_data[0x0000000fU] 
        = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_data_p3_reg[3U];
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__dat_fp16_nan_vld 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__dat_fp16_nan_vld_w));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__dat_fp16_inf_vld 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__dat_fp16_inf_vld_w));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__op_en_d0 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_wr_en_d1));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_vld_d4 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_vld_d3));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_vld_d5 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_vld_d4));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__slcg_hls_en_d2 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__slcg_hls_en_d1));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_hold_en_d4 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_hold_en_d3));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_wr_en_d1 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_wr_en));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_vld_d3 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_vld_d2));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_vld_d4 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_vld_d3));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__slcg_hls_en_d1 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__reg2dp_cvt_en) 
               & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__reg2dp_op_en_reg) 
                  >> 2U)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_hold_en_d3 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_hold_en_d2));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_vld_d2 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_vld_d1));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_vld_d3 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_vld_d2));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_hold_en_d2 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_hold_en_d1));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_vld_d1 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_vld));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_vld_d2 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_vld_d1));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_hold_en_d1 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_hold_en));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_nz_mask_bp 
        = ((4U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_cvt_en))
            ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_nz_mask_d5)
            : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_nz_mask_d1));
    if (((8U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_cvt_en))
          ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_vld_d5)
          : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_vld_d1))) {
        if ((8U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_cvt_en))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[0U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_d5[0U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[1U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_d5[1U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[2U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_d5[2U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[3U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_d5[3U];
        } else {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[0U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_d1[0U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[1U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_d1[1U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[2U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_d1[2U];
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[3U] 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_d1[3U];
        }
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[0U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[1U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[2U] = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_pad_mask_bp[3U] = 0U;
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_reg_en_bp 
        = ((0x00000010U & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cfg_cvt_en))
            ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_reg_en_d5)
            : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_reg_en_d1));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_vld_d1 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__cvt_out_vld));
}

void Vsim___024root___nba_sequent__TOP__302(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__302\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_sg2pack_fifo__DOT__wr_reserving) 
             | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_sg2pack_fifo__DOT__wr_popping))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_sg2pack_fifo__DOT__rd_count_p 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_sg2pack_fifo__DOT__rd_count_p_next;
        } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_sg2pack_fifo__DOT__wr_reserving) 
                    | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_sg2pack_fifo__DOT__wr_popping))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_sg2pack_fifo__DOT__rd_count_p = 0U;
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_sg2pack_fifo__DOT__wr_popping) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_sg2pack_fifo__DOT__rd_adr 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_sg2pack_fifo__DOT__rd_adr_next_popping;
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_sg2pack_fifo__DOT__wr_reserving) 
             ^ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_sg2pack_fifo__DOT__wr_popping))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_sg2pack_fifo__DOT__wr_count 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_sg2pack_fifo__DOT__wr_count_next;
        } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_sg2pack_fifo__DOT__wr_reserving) 
                    ^ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_sg2pack_fifo__DOT__wr_popping))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_sg2pack_fifo__DOT__wr_count = 0U;
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_sg2pack_fifo__DOT__wr_reserving) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_sg2pack_fifo__DOT__wr_adr 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_sg2pack_fifo__DOT__wr_adr_next;
        }
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_sg2pack_fifo__DOT__rd_count_p = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_sg2pack_fifo__DOT__rd_adr = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_sg2pack_fifo__DOT__wr_count = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_sg2pack_fifo__DOT__wr_adr = 0U;
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_sg2pack_fifo__DOT__wr_busy_int 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_sg2pack_fifo__DOT__wr_busy_next));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_sg2pack_fifo__DOT__rd_req_int 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_sg2pack_fifo__DOT__rd_req_p) 
               | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_sg2pack_fifo__DOT____VdfgRegularize_h9a03d938_0_2)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_sg2pack_fifo__DOT__rd_adr_next_popping 
        = (0x0000007fU & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_sg2pack_fifo__DOT__rd_adr)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_sg2pack_fifo__DOT__ram__DOT__ra 
        = ((0U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_sg2pack_fifo__DOT__wr_count))
            ? 0x80U : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_sg2pack_fifo__DOT__rd_adr));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_sg2pack_fifo__DOT__wr_adr_next 
        = (0x0000007fU & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_sg2pack_fifo__DOT__wr_adr)));
}

void Vsim___024root___nba_sequent__TOP__303(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__303\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__u_wt_fifo__DOT__wr_popping) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__u_wt_fifo__DOT__rd_adr 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__u_wt_fifo__DOT__rd_adr_next_popping;
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__u_wt_fifo__DOT__wr_reserving) 
             ^ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__u_wt_fifo__DOT__wr_popping))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__u_wt_fifo__DOT__wr_count 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__u_wt_fifo__DOT__wr_count_next;
        } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__u_wt_fifo__DOT__wr_reserving) 
                    ^ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__u_wt_fifo__DOT__wr_popping))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__u_wt_fifo__DOT__wr_count = 0U;
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__u_wt_fifo__DOT__wr_reserving) 
             | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__u_wt_fifo__DOT__wr_popping))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__u_wt_fifo__DOT__rd_count 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__u_wt_fifo__DOT__rd_count_next;
        } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__u_wt_fifo__DOT__wr_reserving) 
                    | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__u_wt_fifo__DOT__wr_popping))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__u_wt_fifo__DOT__rd_count = 0U;
        }
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__u_wt_fifo__DOT__rd_adr = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__u_wt_fifo__DOT__wr_count = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__u_wt_fifo__DOT__rd_count = 0U;
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__u_wt_fifo__DOT__rd_adr_next_popping 
        = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__u_wt_fifo__DOT__rd_adr)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__u_wt_fifo__DOT__ram__DOT__ra 
        = ((0U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__u_wt_fifo__DOT__wr_count))
            ? 4U : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__u_wt_fifo__DOT__rd_adr));
}

void Vsim___024root___nba_sequent__TOP__304(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__304\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_partition_c_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__u_dat_fifo__DOT__wr_reserving) 
             | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__u_dat_fifo__DOT__wr_popping))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__u_dat_fifo__DOT__rd_count 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__u_dat_fifo__DOT__rd_count_next;
        } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__u_dat_fifo__DOT__wr_reserving) 
                    | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__u_dat_fifo__DOT__wr_popping))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__u_dat_fifo__DOT__rd_count = 0U;
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__u_dat_fifo__DOT__wr_popping) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__u_dat_fifo__DOT__rd_adr 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__u_dat_fifo__DOT__rd_adr_next_popping;
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__u_dat_fifo__DOT__wr_reserving) 
             ^ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__u_dat_fifo__DOT__wr_popping))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__u_dat_fifo__DOT__wr_count 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__u_dat_fifo__DOT__wr_count_next;
        } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__u_dat_fifo__DOT__wr_reserving) 
                    ^ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__u_dat_fifo__DOT__wr_popping))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__u_dat_fifo__DOT__wr_count = 0U;
        }
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__u_dat_fifo__DOT__rd_count = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__u_dat_fifo__DOT__rd_adr = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__u_dat_fifo__DOT__wr_count = 0U;
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__u_dat_fifo__DOT__rd_adr_next_popping 
        = (3U & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__u_dat_fifo__DOT__rd_adr)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__u_dat_fifo__DOT__ram__DOT__ra 
        = ((0U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__u_dat_fifo__DOT__wr_count))
            ? 4U : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__u_dat_fifo__DOT__rd_adr));
}

void Vsim___024root___nba_sequent__TOP__305(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__305\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__u_dat_fifo__DOT__clk_mgate__DOT__p_clkgate__DOT__qd 
        = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__u_dat_fifo__DOT__wr_reserving) 
            | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__u_dat_fifo__DOT____VdfgRegularize_h5cc6d539_0_1)) 
           | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__u_dat_fifo__DOT__wr_busy_int) 
              != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__u_dat_fifo__DOT__wr_busy_next)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__u_wt_fifo__DOT__clk_mgate__DOT__p_clkgate__DOT__qd 
        = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__u_wt_fifo__DOT__wr_reserving) 
            | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__u_wt_fifo__DOT____VdfgRegularize_h196c53ff_0_1)) 
           | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__u_wt_fifo__DOT__wr_busy_int) 
              != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_csc__DOT__u_sg__DOT__u_wt_fifo__DOT__wr_busy_next)));
}

void Vsim___024root___nba_sequent__TOP__306(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__306\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_cq__DOT__ig2cq_busy_int 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_partition_p_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_cq__DOT__wr_count_next_is_80));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_cq__DOT__cq2eg_pvld_int 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_partition_p_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_cq__DOT__cq2eg_pvld_p) 
               | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_cq__DOT____VdfgRegularize_h83eb64b8_0_0)));
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_partition_p_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_cq__DOT__wr_reserving) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_cq__DOT__ig2cq_adr 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_cq__DOT__wr_adr_next;
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_cq__DOT__ore) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_cq__DOT__cq2eg_adr 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_cq__DOT__rd_adr_next;
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_cq__DOT__wr_reserving) 
             ^ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_cq__DOT__wr_popping))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_cq__DOT__ig2cq_count 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_cq__DOT__wr_count_next;
        } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_cq__DOT__wr_reserving) 
                    ^ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_cq__DOT__wr_popping))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_cq__DOT__ig2cq_count = 0U;
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_cq__DOT__rd_pushing) 
             | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_cq__DOT__ore))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_cq__DOT__cq2eg_count_p 
                = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_cq__DOT__ore)
                    ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_cq__DOT__rd_count_p_next_rd_popping)
                    : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_cq__DOT__rd_count_p_next_no_rd_popping));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_cq__DOT__cq2eg_pvld_p 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_cq__DOT__rd_count_p_next_not_0;
        } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_cq__DOT__rd_pushing) 
                    | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_cq__DOT__ore))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_cq__DOT__cq2eg_count_p = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_cq__DOT__cq2eg_pvld_p = 0U;
        }
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_cq__DOT__ig2cq_adr = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_cq__DOT__cq2eg_adr = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_cq__DOT__ig2cq_count = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_cq__DOT__cq2eg_count_p = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_cq__DOT__cq2eg_pvld_p = 0U;
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_cq__DOT__wr_adr_next 
        = ((0x4fU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_cq__DOT__ig2cq_adr))
            ? 0U : (0x0000007fU & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_cq__DOT__ig2cq_adr))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_cq__DOT__rd_adr_next 
        = ((0x4fU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_cq__DOT__cq2eg_adr))
            ? 0U : (0x0000007fU & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_cq__DOT__cq2eg_adr))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_cq__DOT__wr_popping 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_partition_p_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_cq__DOT__ore));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_cq__DOT__rd_pushing 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_partition_p_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_cq__DOT__wr_reserving));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_cq__DOT__rd_count_p_next_rd_popping 
        = (0x0000007fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_cq__DOT__rd_pushing)
                           ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_cq__DOT__cq2eg_count_p)
                           : ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_cq__DOT__cq2eg_count_p) 
                              - (IData)(1U))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_cq__DOT__rd_count_p_next_no_rd_popping 
        = (0x0000007fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_cq__DOT__cq2eg_count_p) 
                          + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_cq__DOT__rd_pushing)));
}

void Vsim___024root___nba_sequent__TOP__307(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__307\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__ig2cq_busy_int 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_partition_p_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__wr_count_next_is_160));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__cq2eg_pvld_int 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_partition_p_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__cq2eg_pvld_p) 
               | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT____VdfgRegularize_hc242e027_0_0)));
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_partition_p_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__wr_reserving) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__ig2cq_adr 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__wr_adr_next;
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__ore) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__cq2eg_adr 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__rd_adr_next;
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__wr_reserving) 
             ^ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__wr_popping))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__ig2cq_count 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__wr_count_next;
        } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__wr_reserving) 
                    ^ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__wr_popping))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__ig2cq_count = 0U;
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__rd_pushing) 
             | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__ore))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__cq2eg_count_p 
                = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__ore)
                    ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__rd_count_p_next_rd_popping)
                    : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__rd_count_p_next_no_rd_popping));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__cq2eg_pvld_p 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__rd_count_p_next_not_0;
        } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__rd_pushing) 
                    | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__ore))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__cq2eg_count_p = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__cq2eg_pvld_p = 0U;
        }
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__ig2cq_adr = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__cq2eg_adr = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__ig2cq_count = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__cq2eg_count_p = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__cq2eg_pvld_p = 0U;
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__wr_adr_next 
        = ((0x9fU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__ig2cq_adr))
            ? 0U : (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__ig2cq_adr))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__rd_adr_next 
        = ((0x9fU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__cq2eg_adr))
            ? 0U : (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__cq2eg_adr))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__wr_popping 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_partition_p_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__ore));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__rd_pushing 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_partition_p_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__wr_reserving));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__rd_count_p_next_rd_popping 
        = (0x000000ffU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__rd_pushing)
                           ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__cq2eg_count_p)
                           : ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__cq2eg_count_p) 
                              - (IData)(1U))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__rd_count_p_next_no_rd_popping 
        = (0x000000ffU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__cq2eg_count_p) 
                          + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__rd_pushing)));
}

void Vsim___024root___nba_sequent__TOP__308(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__308\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_cq__DOT__ig2cq_busy_int 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_partition_p_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_cq__DOT__wr_count_next_is_160));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_cq__DOT__cq2eg_pvld_int 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_partition_p_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_cq__DOT__cq2eg_pvld_p) 
               | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_cq__DOT____VdfgRegularize_hc29973a6_0_0)));
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_partition_p_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_cq__DOT__wr_reserving) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_cq__DOT__ig2cq_adr 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_cq__DOT__wr_adr_next;
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_cq__DOT__ore) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_cq__DOT__cq2eg_adr 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_cq__DOT__rd_adr_next;
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_cq__DOT__wr_reserving) 
             ^ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_cq__DOT__wr_popping))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_cq__DOT__ig2cq_count 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_cq__DOT__wr_count_next;
        } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_cq__DOT__wr_reserving) 
                    ^ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_cq__DOT__wr_popping))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_cq__DOT__ig2cq_count = 0U;
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_cq__DOT__rd_pushing) 
             | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_cq__DOT__ore))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_cq__DOT__cq2eg_count_p 
                = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_cq__DOT__ore)
                    ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_cq__DOT__rd_count_p_next_rd_popping)
                    : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_cq__DOT__rd_count_p_next_no_rd_popping));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_cq__DOT__cq2eg_pvld_p 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_cq__DOT__rd_count_p_next_not_0;
        } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_cq__DOT__rd_pushing) 
                    | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_cq__DOT__ore))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_cq__DOT__cq2eg_count_p = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_cq__DOT__cq2eg_pvld_p = 0U;
        }
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_cq__DOT__ig2cq_adr = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_cq__DOT__cq2eg_adr = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_cq__DOT__ig2cq_count = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_cq__DOT__cq2eg_count_p = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_cq__DOT__cq2eg_pvld_p = 0U;
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_cq__DOT__wr_adr_next 
        = ((0x9fU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_cq__DOT__ig2cq_adr))
            ? 0U : (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_cq__DOT__ig2cq_adr))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_cq__DOT__rd_adr_next 
        = ((0x9fU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_cq__DOT__cq2eg_adr))
            ? 0U : (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_cq__DOT__cq2eg_adr))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_cq__DOT__wr_popping 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_partition_p_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_cq__DOT__ore));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_cq__DOT__rd_pushing 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_partition_p_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_cq__DOT__wr_reserving));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_cq__DOT__rd_count_p_next_rd_popping 
        = (0x000000ffU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_cq__DOT__rd_pushing)
                           ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_cq__DOT__cq2eg_count_p)
                           : ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_cq__DOT__cq2eg_count_p) 
                              - (IData)(1U))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_cq__DOT__rd_count_p_next_no_rd_popping 
        = (0x000000ffU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_cq__DOT__cq2eg_count_p) 
                          + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_cq__DOT__rd_pushing)));
}

void Vsim___024root___nba_sequent__TOP__309(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__309\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_cq__DOT__ig2cq_busy_int 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_partition_p_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_cq__DOT__wr_count_next_is_80));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_cq__DOT__cq2eg_pvld_int 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_partition_p_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_cq__DOT__cq2eg_pvld_p) 
               | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_cq__DOT____VdfgRegularize_hf6ef4b61_0_0)));
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_partition_p_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_cq__DOT__wr_reserving) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_cq__DOT__ig2cq_adr 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_cq__DOT__wr_adr_next;
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_cq__DOT__ore) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_cq__DOT__cq2eg_adr 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_cq__DOT__rd_adr_next;
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_cq__DOT__wr_reserving) 
             ^ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_cq__DOT__wr_popping))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_cq__DOT__ig2cq_count 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_cq__DOT__wr_count_next;
        } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_cq__DOT__wr_reserving) 
                    ^ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_cq__DOT__wr_popping))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_cq__DOT__ig2cq_count = 0U;
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_cq__DOT__rd_pushing) 
             | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_cq__DOT__ore))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_cq__DOT__cq2eg_count_p 
                = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_cq__DOT__ore)
                    ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_cq__DOT__rd_count_p_next_rd_popping)
                    : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_cq__DOT__rd_count_p_next_no_rd_popping));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_cq__DOT__cq2eg_pvld_p 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_cq__DOT__rd_count_p_next_not_0;
        } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_cq__DOT__rd_pushing) 
                    | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_cq__DOT__ore))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_cq__DOT__cq2eg_count_p = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_cq__DOT__cq2eg_pvld_p = 0U;
        }
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_cq__DOT__ig2cq_adr = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_cq__DOT__cq2eg_adr = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_cq__DOT__ig2cq_count = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_cq__DOT__cq2eg_count_p = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_cq__DOT__cq2eg_pvld_p = 0U;
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_cq__DOT__wr_adr_next 
        = ((0x4fU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_cq__DOT__ig2cq_adr))
            ? 0U : (0x0000007fU & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_cq__DOT__ig2cq_adr))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_cq__DOT__rd_adr_next 
        = ((0x4fU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_cq__DOT__cq2eg_adr))
            ? 0U : (0x0000007fU & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_cq__DOT__cq2eg_adr))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_cq__DOT__wr_popping 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_partition_p_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_cq__DOT__ore));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_cq__DOT__rd_pushing 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_partition_p_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_cq__DOT__wr_reserving));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_cq__DOT__rd_count_p_next_rd_popping 
        = (0x0000007fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_cq__DOT__rd_pushing)
                           ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_cq__DOT__cq2eg_count_p)
                           : ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_cq__DOT__cq2eg_count_p) 
                              - (IData)(1U))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_cq__DOT__rd_count_p_next_no_rd_popping 
        = (0x0000007fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_cq__DOT__cq2eg_count_p) 
                          + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_cq__DOT__rd_pushing)));
}

void Vsim___024root___nba_sequent__TOP__310(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__310\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_lat_fifo__DOT__lat_rd_pvld_int 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_partition_p_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_lat_fifo__DOT__lat_rd_pvld_p) 
               | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_lat_fifo__DOT____VdfgRegularize_hafefd77d_0_0)));
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_partition_p_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_lat_fifo__DOT__wr_reserving) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_lat_fifo__DOT__lat_wr_adr 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_lat_fifo__DOT__wr_adr_next;
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_lat_fifo__DOT__ore) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_lat_fifo__DOT__lat_rd_adr 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_lat_fifo__DOT__rd_adr_next;
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_lat_fifo__DOT__wr_reserving) 
             ^ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_lat_fifo__DOT__wr_popping))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_lat_fifo__DOT__lat_wr_count 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_lat_fifo__DOT__wr_count_next;
        } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_lat_fifo__DOT__wr_reserving) 
                    ^ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_lat_fifo__DOT__wr_popping))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_lat_fifo__DOT__lat_wr_count = 0U;
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_lat_fifo__DOT__rd_pushing) 
             | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_lat_fifo__DOT__ore))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_lat_fifo__DOT__lat_rd_count_p 
                = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_lat_fifo__DOT__ore)
                    ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_lat_fifo__DOT__rd_count_p_next_rd_popping)
                    : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_lat_fifo__DOT__rd_count_p_next_no_rd_popping));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_lat_fifo__DOT__lat_rd_pvld_p 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_lat_fifo__DOT__rd_count_p_next_not_0;
        } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_lat_fifo__DOT__rd_pushing) 
                    | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_lat_fifo__DOT__ore))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_lat_fifo__DOT__lat_rd_count_p = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_lat_fifo__DOT__lat_rd_pvld_p = 0U;
        }
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_lat_fifo__DOT__lat_wr_adr = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_lat_fifo__DOT__lat_rd_adr = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_lat_fifo__DOT__lat_wr_count = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_lat_fifo__DOT__lat_rd_count_p = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_lat_fifo__DOT__lat_rd_pvld_p = 0U;
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_lat_fifo__DOT__lat_wr_busy_int 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_partition_p_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_lat_fifo__DOT__wr_count_next_is_80));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_lat_fifo__DOT__wr_adr_next 
        = ((0x4fU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_lat_fifo__DOT__lat_wr_adr))
            ? 0U : (0x0000007fU & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_lat_fifo__DOT__lat_wr_adr))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_lat_fifo__DOT__rd_adr_next 
        = ((0x4fU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_lat_fifo__DOT__lat_rd_adr))
            ? 0U : (0x0000007fU & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_lat_fifo__DOT__lat_rd_adr))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_lat_fifo__DOT__wr_popping 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_partition_p_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_lat_fifo__DOT__ore));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_lat_fifo__DOT__rd_pushing 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_partition_p_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_lat_fifo__DOT__wr_reserving));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_lat_fifo__DOT__rd_count_p_next_rd_popping 
        = (0x0000007fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_lat_fifo__DOT__rd_pushing)
                           ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_lat_fifo__DOT__lat_rd_count_p)
                           : ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_lat_fifo__DOT__lat_rd_count_p) 
                              - (IData)(1U))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_lat_fifo__DOT__rd_count_p_next_no_rd_popping 
        = (0x0000007fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_lat_fifo__DOT__lat_rd_count_p) 
                          + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_lat_fifo__DOT__rd_pushing)));
}

void Vsim___024root___nba_sequent__TOP__311(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__311\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__u_lat_fifo__DOT__lat_rd_pvld_int 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_partition_p_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__u_lat_fifo__DOT__lat_rd_pvld_p) 
               | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__u_lat_fifo__DOT____VdfgRegularize_h4a0e293e_0_0)));
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_partition_p_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__u_lat_fifo__DOT__wr_reserving) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__u_lat_fifo__DOT__lat_wr_adr 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__u_lat_fifo__DOT__wr_adr_next;
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ore) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__u_lat_fifo__DOT__lat_rd_adr 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__u_lat_fifo__DOT__rd_adr_next;
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__u_lat_fifo__DOT__wr_reserving) 
             ^ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__u_lat_fifo__DOT__wr_popping))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__u_lat_fifo__DOT__lat_wr_count 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__u_lat_fifo__DOT__wr_count_next;
        } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__u_lat_fifo__DOT__wr_reserving) 
                    ^ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__u_lat_fifo__DOT__wr_popping))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__u_lat_fifo__DOT__lat_wr_count = 0U;
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__u_lat_fifo__DOT__rd_pushing) 
             | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ore))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__u_lat_fifo__DOT__lat_rd_count_p 
                = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ore)
                    ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__u_lat_fifo__DOT__rd_count_p_next_rd_popping)
                    : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__u_lat_fifo__DOT__rd_count_p_next_no_rd_popping));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__u_lat_fifo__DOT__lat_rd_pvld_p 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__u_lat_fifo__DOT__rd_count_p_next_not_0;
        } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__u_lat_fifo__DOT__rd_pushing) 
                    | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ore))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__u_lat_fifo__DOT__lat_rd_count_p = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__u_lat_fifo__DOT__lat_rd_pvld_p = 0U;
        }
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__u_lat_fifo__DOT__lat_wr_adr = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__u_lat_fifo__DOT__lat_rd_adr = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__u_lat_fifo__DOT__lat_wr_count = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__u_lat_fifo__DOT__lat_rd_count_p = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__u_lat_fifo__DOT__lat_rd_pvld_p = 0U;
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__u_lat_fifo__DOT__lat_wr_busy_int 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_partition_p_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__u_lat_fifo__DOT__wr_count_next_is_80));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__u_lat_fifo__DOT__wr_adr_next 
        = ((0x4fU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__u_lat_fifo__DOT__lat_wr_adr))
            ? 0U : (0x0000007fU & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__u_lat_fifo__DOT__lat_wr_adr))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__u_lat_fifo__DOT__rd_adr_next 
        = ((0x4fU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__u_lat_fifo__DOT__lat_rd_adr))
            ? 0U : (0x0000007fU & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__u_lat_fifo__DOT__lat_rd_adr))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__u_lat_fifo__DOT__wr_popping 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_partition_p_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ore));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__u_lat_fifo__DOT__rd_pushing 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_partition_p_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__u_lat_fifo__DOT__wr_reserving));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__u_lat_fifo__DOT__rd_count_p_next_rd_popping 
        = (0x0000007fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__u_lat_fifo__DOT__rd_pushing)
                           ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__u_lat_fifo__DOT__lat_rd_count_p)
                           : ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__u_lat_fifo__DOT__lat_rd_count_p) 
                              - (IData)(1U))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__u_lat_fifo__DOT__rd_count_p_next_no_rd_popping 
        = (0x0000007fU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__u_lat_fifo__DOT__lat_rd_count_p) 
                          + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_erdma__DOT__u_eg__DOT__u_lat_fifo__DOT__rd_pushing)));
}

void Vsim___024root___nba_sequent__TOP__312(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__312\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__lat_rd_pvld_int 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_partition_p_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__lat_rd_pvld_p) 
               | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT____VdfgRegularize_hfe94e5bc_0_0)));
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_partition_p_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__wr_reserving) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__lat_wr_adr 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__wr_adr_next;
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ore) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__lat_rd_adr 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__rd_adr_next;
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__wr_reserving) 
             ^ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__wr_popping))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__lat_wr_count 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__wr_count_next;
        } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__wr_reserving) 
                    ^ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__wr_popping))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__lat_wr_count = 0U;
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__rd_pushing) 
             | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ore))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__lat_rd_count_p 
                = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ore)
                    ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__rd_count_p_next_rd_popping)
                    : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__rd_count_p_next_no_rd_popping));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__lat_rd_pvld_p 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__rd_count_p_next_not_0;
        } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__rd_pushing) 
                    | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ore))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__lat_rd_count_p = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__lat_rd_pvld_p = 0U;
        }
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__lat_wr_adr = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__lat_rd_adr = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__lat_wr_count = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__lat_rd_count_p = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__lat_rd_pvld_p = 0U;
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__lat_wr_busy_int 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_partition_p_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__wr_count_next_is_160));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__wr_adr_next 
        = ((0x9fU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__lat_wr_adr))
            ? 0U : (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__lat_wr_adr))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__rd_adr_next 
        = ((0x9fU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__lat_rd_adr))
            ? 0U : (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__lat_rd_adr))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__wr_popping 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_partition_p_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ore));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__rd_pushing 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_partition_p_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__wr_reserving));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__rd_count_p_next_rd_popping 
        = (0x000000ffU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__rd_pushing)
                           ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__lat_rd_count_p)
                           : ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__lat_rd_count_p) 
                              - (IData)(1U))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__rd_count_p_next_no_rd_popping 
        = (0x000000ffU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__lat_rd_count_p) 
                          + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_eg__DOT__u_lat_fifo__DOT__rd_pushing)));
}

void Vsim___024root___nba_sequent__TOP__313(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__313\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_lat_fifo__DOT__lat_rd_pvld_int 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_partition_p_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_lat_fifo__DOT__lat_rd_pvld_p) 
               | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_lat_fifo__DOT____VdfgRegularize_he76c201d_0_0)));
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_partition_p_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_lat_fifo__DOT__wr_reserving) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_lat_fifo__DOT__lat_wr_adr 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_lat_fifo__DOT__wr_adr_next;
        }
        if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ore) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_lat_fifo__DOT__lat_rd_adr 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_lat_fifo__DOT__rd_adr_next;
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_lat_fifo__DOT__wr_reserving) 
             ^ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_lat_fifo__DOT__wr_popping))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_lat_fifo__DOT__lat_wr_count 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_lat_fifo__DOT__wr_count_next;
        } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_lat_fifo__DOT__wr_reserving) 
                    ^ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_lat_fifo__DOT__wr_popping))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_lat_fifo__DOT__lat_wr_count = 0U;
        }
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_lat_fifo__DOT__rd_pushing) 
             | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ore))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_lat_fifo__DOT__lat_rd_count_p 
                = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ore)
                    ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_lat_fifo__DOT__rd_count_p_next_rd_popping)
                    : (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_lat_fifo__DOT__rd_count_p_next_no_rd_popping));
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_lat_fifo__DOT__lat_rd_pvld_p 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_lat_fifo__DOT__rd_count_p_next_not_0;
        } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_lat_fifo__DOT__rd_pushing) 
                    | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ore))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_lat_fifo__DOT__lat_rd_count_p = 0U;
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_lat_fifo__DOT__lat_rd_pvld_p = 0U;
        }
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_lat_fifo__DOT__lat_wr_adr = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_lat_fifo__DOT__lat_rd_adr = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_lat_fifo__DOT__lat_wr_count = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_lat_fifo__DOT__lat_rd_count_p = 0U;
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_lat_fifo__DOT__lat_rd_pvld_p = 0U;
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_lat_fifo__DOT__lat_wr_busy_int 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_partition_p_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_lat_fifo__DOT__wr_count_next_is_160));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_lat_fifo__DOT__wr_adr_next 
        = ((0x9fU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_lat_fifo__DOT__lat_wr_adr))
            ? 0U : (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_lat_fifo__DOT__lat_wr_adr))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_lat_fifo__DOT__rd_adr_next 
        = ((0x9fU == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_lat_fifo__DOT__lat_rd_adr))
            ? 0U : (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_lat_fifo__DOT__lat_rd_adr))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_lat_fifo__DOT__wr_popping 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_partition_p_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ore));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_lat_fifo__DOT__rd_pushing 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_partition_p_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_lat_fifo__DOT__wr_reserving));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_lat_fifo__DOT__rd_count_p_next_rd_popping 
        = (0x000000ffU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_lat_fifo__DOT__rd_pushing)
                           ? (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_lat_fifo__DOT__lat_rd_count_p)
                           : ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_lat_fifo__DOT__lat_rd_count_p) 
                              - (IData)(1U))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_lat_fifo__DOT__rd_count_p_next_no_rd_popping 
        = (0x000000ffU & ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_lat_fifo__DOT__lat_rd_count_p) 
                          + (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_eg__DOT__u_lat_fifo__DOT__rd_pushing)));
}

void Vsim___024root___nba_sequent__TOP__314(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__314\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_partition_p_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_sfifo0__DOT__wr_reserving) 
             | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_sfifo0__DOT__wr_popping))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_sfifo0__DOT__sfifo_rd_count_p 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_sfifo0__DOT__rd_count_p_next;
        } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_sfifo0__DOT__wr_reserving) 
                    | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_sfifo0__DOT__wr_popping))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_sfifo0__DOT__sfifo_rd_count_p = 0U;
        }
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_sfifo0__DOT__sfifo_rd_count_p = 0U;
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_sfifo0__DOT__sfifo_rd_pvld_int 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_partition_p_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_sfifo0__DOT__sfifo_rd_pvld_p) 
               | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_sfifo0__DOT____VdfgRegularize_h148d05aa_0_1)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_sfifo0__DOT__sfifo_wr_busy_int 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_partition_p_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_sfifo0__DOT__wr_count_next_is_1));
}

void Vsim___024root___nba_sequent__TOP__315(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__315\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_partition_p_reset__DOT__sync_reset_synced_rstn__DOT__reset_) {
        if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_sfifo1__DOT__wr_reserving) 
             | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_sfifo1__DOT__wr_popping))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_sfifo1__DOT__sfifo_rd_count_p 
                = vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_sfifo1__DOT__rd_count_p_next;
        } else if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_sfifo1__DOT__wr_reserving) 
                    | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_sfifo1__DOT__wr_popping))) {
            vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_sfifo1__DOT__sfifo_rd_count_p = 0U;
        }
    } else {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_sfifo1__DOT__sfifo_rd_count_p = 0U;
    }
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_sfifo1__DOT__sfifo_rd_pvld_int 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_partition_p_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_sfifo1__DOT__sfifo_rd_pvld_p) 
               | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_sfifo1__DOT____VdfgRegularize_h148d05aa_0_1)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_sfifo1__DOT__sfifo_wr_busy_int 
        = ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_partition_p_reset__DOT__sync_reset_synced_rstn__DOT__reset_) 
           && (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_sfifo1__DOT__wr_count_next_is_1));
}

void Vsim___024root___nba_sequent__TOP__316(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__316\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_cmd__DOT__u_sfifo__DOT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd 
        = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_cmd__DOT__u_sfifo__DOT__wr_reserving) 
            | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_cmd__DOT__u_sfifo__DOT____VdfgRegularize_h94767e84_0_1)) 
           | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_cmd__DOT__u_sfifo__DOT__spt_fifo_busy_int) 
              != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_cmd__DOT__u_sfifo__DOT__wr_count_next_is_4)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_cmd__DOT__u_dfifo__DOT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd 
        = (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_cmd__DOT__u_dfifo__DOT__wr_reserving) 
            | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_cmd__DOT__u_dfifo__DOT____VdfgRegularize_ha74463a5_0_1)) 
           | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_cmd__DOT__u_dfifo__DOT__dma_fifo_busy_int) 
              != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_cmd__DOT__u_dfifo__DOT__wr_count_next_is_4)));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_dat__DOT__u_in__DOT__u_dfifo2__DOT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd 
        = (1U & (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_dat__DOT__u_in__DOT__u_dfifo2__DOT__wr_reserving) 
                  | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_dat__DOT__u_in__DOT__u_dfifo2__DOT__wr_popping)) 
                 | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_dat__DOT__u_in__DOT__u_dfifo2__DOT__dfifo_wr_busy_int) 
                     != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_dat__DOT__u_in__DOT__u_dfifo2__DOT__wr_count_next_is_3)) 
                    | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_dat__DOT__u_in__DOT__dfifo2_rd_prdy) 
                       & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_dat__DOT__u_in__DOT__u_dfifo2__DOT__dfifo_rd_pvld_int)))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_dat__DOT__u_in__DOT__u_dfifo3__DOT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd 
        = (1U & (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_dat__DOT__u_in__DOT__u_dfifo3__DOT__wr_reserving) 
                  | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_dat__DOT__u_in__DOT__u_dfifo3__DOT__wr_popping)) 
                 | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_dat__DOT__u_in__DOT__u_dfifo3__DOT__dfifo_wr_busy_int) 
                     != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_dat__DOT__u_in__DOT__u_dfifo3__DOT__wr_count_next_is_3)) 
                    | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_dat__DOT__u_in__DOT__dfifo3_rd_prdy) 
                       & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_dat__DOT__u_in__DOT__u_dfifo3__DOT__dfifo_rd_pvld_int)))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_dat__DOT__u_in__DOT__u_dfifo0__DOT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd 
        = (1U & (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_dat__DOT__u_in__DOT__u_dfifo0__DOT__wr_reserving) 
                  | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_dat__DOT__u_in__DOT__u_dfifo0__DOT__wr_popping)) 
                 | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_dat__DOT__u_in__DOT__u_dfifo0__DOT__dfifo_wr_busy_int) 
                     != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_dat__DOT__u_in__DOT__u_dfifo0__DOT__wr_count_next_is_3)) 
                    | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_dat__DOT__u_in__DOT__dfifo0_rd_prdy) 
                       & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_dat__DOT__u_in__DOT__u_dfifo0__DOT__dfifo_rd_pvld_int)))));
    vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_dat__DOT__u_in__DOT__u_dfifo1__DOT__nvdla_core_clk_mgate__DOT__p_clkgate__DOT__qd 
        = (1U & (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_dat__DOT__u_in__DOT__u_dfifo1__DOT__wr_reserving) 
                  | (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_dat__DOT__u_in__DOT__u_dfifo1__DOT__wr_popping)) 
                 | (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_dat__DOT__u_in__DOT__u_dfifo1__DOT__dfifo_wr_busy_int) 
                     != (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_dat__DOT__u_in__DOT__u_dfifo1__DOT__wr_count_next_is_3)) 
                    | ((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_dat__DOT__u_in__DOT__dfifo1_rd_prdy) 
                       & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_wdma__DOT__u_dat__DOT__u_in__DOT__u_dfifo1__DOT__dfifo_rd_pvld_int)))));
}

extern const VlWide<9>/*287:0*/ Vsim__ConstPool__CONST_h4d851b67_0;
extern const VlWide<9>/*287:0*/ Vsim__ConstPool__CONST_h083ec1be_0;

void Vsim___024root___nba_sequent__TOP__317(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_sequent__TOP__317\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__u_cmd__DOT__wr_popping) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__cmd_fifo_rd_pd[0U] 
            = (Vsim__ConstPool__CONST_h4d851b67_0[0U] 
               & ((0U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__u_cmd__DOT__ram__DOT__ra))
                   ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__u_cmd__DOT__ram__DOT__ram_ff0[0U]
                   : ((1U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__u_cmd__DOT__ram__DOT__ra))
                       ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__u_cmd__DOT__ram__DOT__ram_ff1[0U]
                       : ((2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__u_cmd__DOT__ram__DOT__ra))
                           ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__p1_pipe_data[0U]
                           : Vsim__ConstPool__CONST_h083ec1be_0[0U]))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__cmd_fifo_rd_pd[1U] 
            = (Vsim__ConstPool__CONST_h4d851b67_0[1U] 
               & ((0U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__u_cmd__DOT__ram__DOT__ra))
                   ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__u_cmd__DOT__ram__DOT__ram_ff0[1U]
                   : ((1U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__u_cmd__DOT__ram__DOT__ra))
                       ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__u_cmd__DOT__ram__DOT__ram_ff1[1U]
                       : ((2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__u_cmd__DOT__ram__DOT__ra))
                           ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__p1_pipe_data[1U]
                           : Vsim__ConstPool__CONST_h083ec1be_0[1U]))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__cmd_fifo_rd_pd[2U] 
            = (Vsim__ConstPool__CONST_h4d851b67_0[2U] 
               & ((0U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__u_cmd__DOT__ram__DOT__ra))
                   ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__u_cmd__DOT__ram__DOT__ram_ff0[2U]
                   : ((1U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__u_cmd__DOT__ram__DOT__ra))
                       ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__u_cmd__DOT__ram__DOT__ram_ff1[2U]
                       : ((2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__u_cmd__DOT__ram__DOT__ra))
                           ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__p1_pipe_data[2U]
                           : Vsim__ConstPool__CONST_h083ec1be_0[2U]))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__cmd_fifo_rd_pd[3U] 
            = (Vsim__ConstPool__CONST_h4d851b67_0[3U] 
               & ((0U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__u_cmd__DOT__ram__DOT__ra))
                   ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__u_cmd__DOT__ram__DOT__ram_ff0[3U]
                   : ((1U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__u_cmd__DOT__ram__DOT__ra))
                       ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__u_cmd__DOT__ram__DOT__ram_ff1[3U]
                       : ((2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__u_cmd__DOT__ram__DOT__ra))
                           ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__p1_pipe_data[3U]
                           : Vsim__ConstPool__CONST_h083ec1be_0[3U]))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__cmd_fifo_rd_pd[4U] 
            = (Vsim__ConstPool__CONST_h4d851b67_0[4U] 
               & ((0U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__u_cmd__DOT__ram__DOT__ra))
                   ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__u_cmd__DOT__ram__DOT__ram_ff0[4U]
                   : ((1U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__u_cmd__DOT__ram__DOT__ra))
                       ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__u_cmd__DOT__ram__DOT__ram_ff1[4U]
                       : ((2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__u_cmd__DOT__ram__DOT__ra))
                           ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__p1_pipe_data[4U]
                           : Vsim__ConstPool__CONST_h083ec1be_0[4U]))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__cmd_fifo_rd_pd[5U] 
            = (Vsim__ConstPool__CONST_h4d851b67_0[5U] 
               & ((0U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__u_cmd__DOT__ram__DOT__ra))
                   ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__u_cmd__DOT__ram__DOT__ram_ff0[5U]
                   : ((1U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__u_cmd__DOT__ram__DOT__ra))
                       ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__u_cmd__DOT__ram__DOT__ram_ff1[5U]
                       : ((2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__u_cmd__DOT__ram__DOT__ra))
                           ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__p1_pipe_data[5U]
                           : Vsim__ConstPool__CONST_h083ec1be_0[5U]))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__cmd_fifo_rd_pd[6U] 
            = (Vsim__ConstPool__CONST_h4d851b67_0[6U] 
               & ((0U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__u_cmd__DOT__ram__DOT__ra))
                   ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__u_cmd__DOT__ram__DOT__ram_ff0[6U]
                   : ((1U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__u_cmd__DOT__ram__DOT__ra))
                       ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__u_cmd__DOT__ram__DOT__ram_ff1[6U]
                       : ((2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__u_cmd__DOT__ram__DOT__ra))
                           ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__p1_pipe_data[6U]
                           : Vsim__ConstPool__CONST_h083ec1be_0[6U]))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__cmd_fifo_rd_pd[7U] 
            = (Vsim__ConstPool__CONST_h4d851b67_0[7U] 
               & ((0U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__u_cmd__DOT__ram__DOT__ra))
                   ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__u_cmd__DOT__ram__DOT__ram_ff0[7U]
                   : ((1U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__u_cmd__DOT__ram__DOT__ra))
                       ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__u_cmd__DOT__ram__DOT__ram_ff1[7U]
                       : ((2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__u_cmd__DOT__ram__DOT__ra))
                           ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__p1_pipe_data[7U]
                           : Vsim__ConstPool__CONST_h083ec1be_0[7U]))));
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__cmd_fifo_rd_pd[8U] 
            = (Vsim__ConstPool__CONST_h4d851b67_0[8U] 
               & ((0U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__u_cmd__DOT__ram__DOT__ra))
                   ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__u_cmd__DOT__ram__DOT__ram_ff0[8U]
                   : ((1U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__u_cmd__DOT__ram__DOT__ra))
                       ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__u_cmd__DOT__ram__DOT__ram_ff1[8U]
                       : ((2U == (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__u_cmd__DOT__ram__DOT__ra))
                           ? vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__p1_pipe_data[8U]
                           : Vsim__ConstPool__CONST_h083ec1be_0[8U]))));
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__u_cmd__DOT__ram_we) 
         & (~ (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__u_cmd__DOT__cmd_fifo_wr_adr)))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__u_cmd__DOT__ram__DOT__ram_ff0[0U] 
            = (Vsim__ConstPool__CONST_h4d851b67_0[0U] 
               & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__p1_pipe_data[0U]);
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__u_cmd__DOT__ram__DOT__ram_ff0[1U] 
            = (Vsim__ConstPool__CONST_h4d851b67_0[1U] 
               & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__p1_pipe_data[1U]);
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__u_cmd__DOT__ram__DOT__ram_ff0[2U] 
            = (Vsim__ConstPool__CONST_h4d851b67_0[2U] 
               & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__p1_pipe_data[2U]);
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__u_cmd__DOT__ram__DOT__ram_ff0[3U] 
            = (Vsim__ConstPool__CONST_h4d851b67_0[3U] 
               & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__p1_pipe_data[3U]);
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__u_cmd__DOT__ram__DOT__ram_ff0[4U] 
            = (Vsim__ConstPool__CONST_h4d851b67_0[4U] 
               & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__p1_pipe_data[4U]);
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__u_cmd__DOT__ram__DOT__ram_ff0[5U] 
            = (Vsim__ConstPool__CONST_h4d851b67_0[5U] 
               & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__p1_pipe_data[5U]);
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__u_cmd__DOT__ram__DOT__ram_ff0[6U] 
            = (Vsim__ConstPool__CONST_h4d851b67_0[6U] 
               & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__p1_pipe_data[6U]);
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__u_cmd__DOT__ram__DOT__ram_ff0[7U] 
            = (Vsim__ConstPool__CONST_h4d851b67_0[7U] 
               & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__p1_pipe_data[7U]);
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__u_cmd__DOT__ram__DOT__ram_ff0[8U] 
            = (Vsim__ConstPool__CONST_h4d851b67_0[8U] 
               & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__p1_pipe_data[8U]);
    }
    if (((IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__u_cmd__DOT__ram_we) 
         & (IData)(vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__u_cmd__DOT__cmd_fifo_wr_adr))) {
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__u_cmd__DOT__ram__DOT__ram_ff1[0U] 
            = (Vsim__ConstPool__CONST_h4d851b67_0[0U] 
               & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__p1_pipe_data[0U]);
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__u_cmd__DOT__ram__DOT__ram_ff1[1U] 
            = (Vsim__ConstPool__CONST_h4d851b67_0[1U] 
               & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__p1_pipe_data[1U]);
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__u_cmd__DOT__ram__DOT__ram_ff1[2U] 
            = (Vsim__ConstPool__CONST_h4d851b67_0[2U] 
               & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__p1_pipe_data[2U]);
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__u_cmd__DOT__ram__DOT__ram_ff1[3U] 
            = (Vsim__ConstPool__CONST_h4d851b67_0[3U] 
               & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__p1_pipe_data[3U]);
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__u_cmd__DOT__ram__DOT__ram_ff1[4U] 
            = (Vsim__ConstPool__CONST_h4d851b67_0[4U] 
               & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__p1_pipe_data[4U]);
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__u_cmd__DOT__ram__DOT__ram_ff1[5U] 
            = (Vsim__ConstPool__CONST_h4d851b67_0[5U] 
               & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__p1_pipe_data[5U]);
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__u_cmd__DOT__ram__DOT__ram_ff1[6U] 
            = (Vsim__ConstPool__CONST_h4d851b67_0[6U] 
               & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__p1_pipe_data[6U]);
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__u_cmd__DOT__ram__DOT__ram_ff1[7U] 
            = (Vsim__ConstPool__CONST_h4d851b67_0[7U] 
               & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__p1_pipe_data[7U]);
        vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__u_cmd__DOT__ram__DOT__ram_ff1[8U] 
            = (Vsim__ConstPool__CONST_h4d851b67_0[8U] 
               & vlSelfRef.tb_top__DOT__nvdla_top__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_core__DOT__u_ew__DOT__u_lut__DOT__p1_pipe_data[8U]);
    }
}
