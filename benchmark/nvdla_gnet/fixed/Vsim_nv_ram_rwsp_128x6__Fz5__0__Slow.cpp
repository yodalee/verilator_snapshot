// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

extern const VlUnpacked<CData/*0:0*/, 64> Vsim__ConstPool__TABLE_he6bd8b03_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vsim__ConstPool__TABLE_h881e9653_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vsim__ConstPool__TABLE_h56c190ed_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vsim__ConstPool__TABLE_h8c6a59f0_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vsim__ConstPool__TABLE_h4d193276_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vsim__ConstPool__TABLE_h66672509_0;

VL_ATTR_COLD void Vsim_nv_ram_rwsp_128x6__Fz5___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram__0(Vsim_nv_ram_rwsp_128x6__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rwsp_128x6__Fz5___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT____Vlvbound_h29c19499__0;
    r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT____Vlvbound_h29c19499__0 = 0;
    CData/*5:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__r0_arr 
        = vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__array
        [vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__ra_lat];
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
    vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__posedge_updateDR_sync 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__updateDR_sync_1p)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__updateDR_sync));
    vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__UJ_la_bist_clkw0_gate__DOT__E 
        = vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__debug_mode_sync;
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
    vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__access_en_r 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__re_q));
    if (vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__debug_mode_sync) {
            vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__WA 
                = vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__pre_Wa_reg_w0;
            vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__WD 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__rd_data;
            vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__RA 
                = (0x0000007fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__pre_Ra_reg_r0));
        } else {
            vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__WA = 0U;
            vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__WD = 0U;
            vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__RA 
                = (0x0000007fU & 0U);
        }
        vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__muxed_we_w0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__debug_mode_sync) 
                  && ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__posedge_updateDR_sync) 
                      & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__we_q))));
        vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__muxed_re_r0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__debug_mode_sync) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__access_en_r)));
    } else {
        vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__WA 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__wr_adr;
        vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__muxed_we_w0 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__wr_reserving;
        vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__WD 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__wr_data_in;
        vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__RA 
            = (0x0000007fU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__rd_adr) 
                              + (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ore)));
        vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__muxed_re_r0 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__rd_enable;
    }
    vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__dout_0_0 
        = ((((IData)(vlSelfRef.r_nv_ram_rwsp_128x6__DOT____Vcellout__ram_Inst_128X6__RD_5) 
             << 5U) | (((IData)(vlSelfRef.r_nv_ram_rwsp_128x6__DOT____Vcellout__ram_Inst_128X6__RD_4) 
                        << 4U) | ((IData)(vlSelfRef.r_nv_ram_rwsp_128x6__DOT____Vcellout__ram_Inst_128X6__RD_3) 
                                  << 3U))) | (((IData)(vlSelfRef.r_nv_ram_rwsp_128x6__DOT____Vcellout__ram_Inst_128X6__RD_2) 
                                               << 2U) 
                                              | (((IData)(vlSelfRef.r_nv_ram_rwsp_128x6__DOT____Vcellout__ram_Inst_128X6__RD_1) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.r_nv_ram_rwsp_128x6__DOT____Vcellout__ram_Inst_128X6__RD_0))));
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

VL_ATTR_COLD void Vsim_nv_ram_rwsp_128x6__Fz5___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__ram__0(Vsim_nv_ram_rwsp_128x6__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rwsp_128x6__Fz5___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__ram__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT____Vlvbound_h29c19499__0;
    r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT____Vlvbound_h29c19499__0 = 0;
    CData/*5:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__r0_arr 
        = vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__array
        [vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__ra_lat];
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
    vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__posedge_updateDR_sync 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__updateDR_sync_1p)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0));
    vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__UJ_la_bist_clkw0_gate__DOT__E 
        = vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0;
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
    vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__access_en_r 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__re_q));
    if (vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) {
            vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__WA 
                = vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__pre_Wa_reg_w0;
            vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__WD 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__rd_data;
            vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__RA 
                = (0x0000007fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__pre_Ra_reg_r0));
        } else {
            vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__WA = 0U;
            vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__WD = 0U;
            vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__RA 
                = (0x0000007fU & 0U);
        }
        vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__muxed_we_w0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__posedge_updateDR_sync) 
                      & (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__we_q))));
        vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__muxed_re_r0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__access_en_r)));
    } else {
        vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__WA 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__wr_adr;
        vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__muxed_we_w0 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__wr_reserving;
        vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__WD 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__wr_data_in;
        vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__RA 
            = (0x0000007fU & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__rd_adr) 
                              + (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__ore)));
        vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__muxed_re_r0 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__rd_enable;
    }
    vlSelfRef.__PVT__r_nv_ram_rwsp_128x6__DOT__dout_0_0 
        = ((((IData)(vlSelfRef.r_nv_ram_rwsp_128x6__DOT____Vcellout__ram_Inst_128X6__RD_5) 
             << 5U) | (((IData)(vlSelfRef.r_nv_ram_rwsp_128x6__DOT____Vcellout__ram_Inst_128X6__RD_4) 
                        << 4U) | ((IData)(vlSelfRef.r_nv_ram_rwsp_128x6__DOT____Vcellout__ram_Inst_128X6__RD_3) 
                                  << 3U))) | (((IData)(vlSelfRef.r_nv_ram_rwsp_128x6__DOT____Vcellout__ram_Inst_128X6__RD_2) 
                                               << 2U) 
                                              | (((IData)(vlSelfRef.r_nv_ram_rwsp_128x6__DOT____Vcellout__ram_Inst_128X6__RD_1) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.r_nv_ram_rwsp_128x6__DOT____Vcellout__ram_Inst_128X6__RD_0))));
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

VL_ATTR_COLD void Vsim_nv_ram_rwsp_128x6__Fz5___ctor_var_reset(Vsim_nv_ram_rwsp_128x6__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rwsp_128x6__Fz5___ctor_var_reset\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->ra = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 397185324164439704ull);
    vlSelf->re = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9839690450034771972ull);
    vlSelf->ore = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7056137305480628317ull);
    vlSelf->dout = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 11474705599699299244ull);
    vlSelf->wa = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 15817334002654144152ull);
    vlSelf->we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10105644630884274164ull);
    vlSelf->di = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 15530784800990054812ull);
    vlSelf->pwrbus_ram_pd = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5219006355734432551ull);
    vlSelf->__PVT__SO_int_net = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17252655622214923015ull);
    vlSelf->__PVT__mbist_ramaccess_rst_ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4635875347747302704ull);
    vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__la_bist_clkw0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14279101814415910314ull);
    vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__updateDR_sync = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5026302778819576540ull);
    vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__updateDR_sync_1p = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11691667192137268966ull);
    vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__debug_mode_sync = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6834684489893212757ull);
    vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__dft_rst_gated_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5257117791829637358ull);
    vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__Ra_array_reg_r0 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 11926798251885418769ull);
    vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ctx_ctrl_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6720648485051321622ull);
    vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__gated_clk_core = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16655595812827865575ull);
    vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__shiftDR_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9695597829759798797ull);
    vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__posedge_updateDR_sync = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 861720362378251175ull);
    vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__pre_Wa_reg_w0 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 3980047148829618151ull);
    vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__muxed_we_w0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 916138258767657946ull);
    vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__we_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8873981340582172313ull);
    vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__pre_Ra_reg_r0 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 15358781719995140702ull);
    vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__access_en_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12683443857946296822ull);
    vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__access_en_r_1p = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5978836942686136384ull);
    vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__muxed_re_r0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10545982913854238137ull);
    vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__re_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10770525006876144100ull);
    vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__dout_0_0 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 8963998057637056917ull);
    vlSelf->r_nv_ram_rwsp_128x6__DOT____Vcellout__ram_Inst_128X6__RD_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6813782918343464862ull);
    vlSelf->r_nv_ram_rwsp_128x6__DOT____Vcellout__ram_Inst_128X6__RD_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14945286570648329528ull);
    vlSelf->r_nv_ram_rwsp_128x6__DOT____Vcellout__ram_Inst_128X6__RD_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 622754436110300600ull);
    vlSelf->r_nv_ram_rwsp_128x6__DOT____Vcellout__ram_Inst_128X6__RD_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17785524397349736520ull);
    vlSelf->r_nv_ram_rwsp_128x6__DOT____Vcellout__ram_Inst_128X6__RD_4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6701436862431593397ull);
    vlSelf->r_nv_ram_rwsp_128x6__DOT____Vcellout__ram_Inst_128X6__RD_5 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9466560997369316770ull);
    vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__mbist_ce_r0_1p = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15237422205008383846ull);
    vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18144265208832293109ull);
    vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__CLK_GATE_clk__DOT__qd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11488574926447799176ull);
    vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9419860713315688489ull);
    vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__UJ_la_bist_clkw0_gate__DOT__E = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12350211292026879170ull);
    vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__UJ_la_bist_clkw0_gate__DOT__qd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2174791665717464581ull);
    vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__UJ_clk_gate_core__DOT__qd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5275235999240789724ull);
    vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__RA = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 16072020114513766985ull);
    vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__WA = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 3811336358337579636ull);
    vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__WD = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 10098885956167809378ull);
    vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__we_lat = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2696223081590564194ull);
    vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__weclk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1450219679651423593ull);
    vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__wa_lat = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 17610348833393938545ull);
    vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__wd_lat = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 6534404375293811919ull);
    vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__re_lat = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9153046042350750418ull);
    vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__radclk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 526089208195979738ull);
    vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__ra_lat = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 14771601282358376567ull);
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__array[__Vi0] = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 18055435520076544991ull);
    }
    vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__bitclk = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 10816020585585825539ull);
    vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__r0_arr = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 420685830006279455ull);
    vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__collision_ff = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 6369842499855014459ull);
    vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__collision_ff_clk = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 1730819862748568085ull);
    vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__r0_dout_tmp = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 17613317883188059774ull);
    vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__r0_dout_tmp2 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 8444360445355050513ull);
    vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17738648959080995144ull);
    vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__testInst_re_reg_r0__DOT__clk_wire = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16824940003537796539ull);
    vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6960303279899868996ull);
    vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__testInst_Data_reg_r0__DOT__clk_wire = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8489792623077803612ull);
    vlSelf->r_nv_ram_rwsp_128x6__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14383274777574026285ull);
    vlSelf->r_nv_ram_rwsp_128x6__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11471585809074673888ull);
    vlSelf->r_nv_ram_rwsp_128x6__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15756012060880270869ull);
    vlSelf->r_nv_ram_rwsp_128x6__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9137663559159325118ull);
    vlSelf->r_nv_ram_rwsp_128x6__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12471058448343549547ull);
    vlSelf->r_nv_ram_rwsp_128x6__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5008108636999467139ull);
    vlSelf->__VdlyVal__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__array__v0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15613389970147996095ull);
    vlSelf->__VdlyDim0__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__array__v0 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 16442303184176102558ull);
    vlSelf->__VdlySet__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__array__v0 = 0;
    vlSelf->__VdlyVal__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__array__v1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16214891042675416903ull);
    vlSelf->__VdlyDim0__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__array__v1 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 3315248375120586239ull);
    vlSelf->__VdlySet__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__array__v1 = 0;
    vlSelf->__VdlyVal__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__array__v2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8854093626029775200ull);
    vlSelf->__VdlyDim0__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__array__v2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 17410162105154499884ull);
    vlSelf->__VdlySet__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__array__v2 = 0;
    vlSelf->__VdlyVal__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__array__v3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 394678517915958226ull);
    vlSelf->__VdlyDim0__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__array__v3 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 1848926732044262222ull);
    vlSelf->__VdlySet__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__array__v3 = 0;
    vlSelf->__VdlyVal__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__array__v4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11335062009528398704ull);
    vlSelf->__VdlyDim0__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__array__v4 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 7901013709269778877ull);
    vlSelf->__VdlySet__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__array__v4 = 0;
    vlSelf->__VdlyVal__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__array__v5 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6004256199103823220ull);
    vlSelf->__VdlyDim0__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__array__v5 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 14944301475397326333ull);
    vlSelf->__VdlySet__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__array__v5 = 0;
}
