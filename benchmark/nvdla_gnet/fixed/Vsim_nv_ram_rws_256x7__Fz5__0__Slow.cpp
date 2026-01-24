// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

extern const VlUnpacked<CData/*0:0*/, 128> Vsim__ConstPool__TABLE_hf7a46379_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vsim__ConstPool__TABLE_h2ac4e62a_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vsim__ConstPool__TABLE_h8677cf3c_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vsim__ConstPool__TABLE_hd8796a29_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vsim__ConstPool__TABLE_hd25f4b33_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vsim__ConstPool__TABLE_h6b82ef6d_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vsim__ConstPool__TABLE_h3347d2c4_0;

VL_ATTR_COLD void Vsim_nv_ram_rws_256x7__Fz5___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__ram__0(Vsim_nv_ram_rws_256x7__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_256x7__Fz5___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__ram__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT____Vlvbound_h5b092bc5__0;
    r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT____Vlvbound_h5b092bc5__0 = 0;
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__CLK_GATE_clk__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__testInst_re_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__r0_arr 
        = vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__array
        [vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__ra_lat];
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
    vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__mbist_Do_r0_int_net 
        = ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_256x7__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
               << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x7__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                         << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x7__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                     << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x7__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q))) 
            << 3U) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x7__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                       << 2U) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x7__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                  << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x7__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q))));
    vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__posedge_updateDR_sync 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__updateDR_sync_1p)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0));
    vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__UJ_la_bist_clkw0_gate__DOT__E 
        = vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0;
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
    vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__access_en_r 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__re_q));
    vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__radclk 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__re_lat));
    vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__weclk 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__we_lat));
    if (vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) {
            vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__WD 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__mbist_Do_r0_int_net;
            vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__WA 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__pre_Wa_reg_w0;
        } else {
            vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__WD = 0U;
            vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__WA = 0U;
        }
        vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__muxed_we_w0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__posedge_updateDR_sync) 
                      & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__we_q))));
        vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__muxed_re_r0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__access_en_r)));
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__WD 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__cq_wr_pd;
        vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__muxed_we_w0 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__wr_reserving_and_not_bypassing;
        vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__WA 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__cq_wr_adr;
        vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__muxed_re_r0 
            = (0U != (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__cq_rd_take_elig));
    }
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

VL_ATTR_COLD void Vsim_nv_ram_rws_256x7__Fz5___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__ram__1(Vsim_nv_ram_rws_256x7__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_256x7__Fz5___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__ram__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__muxed_Data_r0 
        = (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
             ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__re_q)
             : (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0))
            ? (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__cq_rd_pd_p)
            : (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__WD));
    vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__RA 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__UJ_la_bist_clkw0_gate__DOT__E)
            ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
                ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__pre_Ra_reg_r0)
                : 0U) : (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__cq_rd_adr));
}

VL_ATTR_COLD void Vsim_nv_ram_rws_256x7__Fz5___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__ram__0(Vsim_nv_ram_rws_256x7__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_256x7__Fz5___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__ram__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT____Vlvbound_h5b092bc5__0;
    r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT____Vlvbound_h5b092bc5__0 = 0;
    CData/*6:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__CLK_GATE_clk__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__testInst_re_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__r0_arr 
        = vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__array
        [vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__ra_lat];
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
    vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__mbist_Do_r0_int_net 
        = ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_256x7__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
               << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x7__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                         << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x7__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                     << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x7__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q))) 
            << 3U) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x7__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                       << 2U) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_256x7__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                  << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x7__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q))));
    vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__posedge_updateDR_sync 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__updateDR_sync_1p)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0));
    vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__UJ_la_bist_clkw0_gate__DOT__E 
        = vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0;
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
    vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__access_en_r 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__re_q));
    vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__radclk 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__re_lat));
    vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__weclk 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__we_lat));
    if (vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) {
            vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__WD 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__mbist_Do_r0_int_net;
            vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__WA 
                = vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__pre_Wa_reg_w0;
        } else {
            vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__WD = 0U;
            vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__WA = 0U;
        }
        vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__muxed_we_w0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__posedge_updateDR_sync) 
                      & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__we_q))));
        vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__muxed_re_r0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__access_en_r)));
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__WD 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__cq_wr_pd;
        vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__muxed_we_w0 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__wr_reserving_and_not_bypassing;
        vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__WA 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__cq_wr_adr;
        vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__muxed_re_r0 
            = (0U != (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__cq_rd_take_elig));
    }
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

VL_ATTR_COLD void Vsim_nv_ram_rws_256x7__Fz5___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__ram__1(Vsim_nv_ram_rws_256x7__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_256x7__Fz5___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__ram__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__muxed_Data_r0 
        = (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
             ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__re_q)
             : (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0))
            ? (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__cq_rd_pd_p)
            : (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__WD));
    vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__RA 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__UJ_la_bist_clkw0_gate__DOT__E)
            ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
                ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_256x7__DOT__pre_Ra_reg_r0)
                : 0U) : (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__cq_rd_adr));
}

VL_ATTR_COLD void Vsim_nv_ram_rws_256x7__Fz5___ctor_var_reset(Vsim_nv_ram_rws_256x7__Fz5* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_256x7__Fz5___ctor_var_reset\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->ra = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 397185324164439704ull);
    vlSelf->re = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9839690450034771972ull);
    vlSelf->dout = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 11474705599699299244ull);
    vlSelf->wa = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15817334002654144152ull);
    vlSelf->we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10105644630884274164ull);
    vlSelf->di = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 15530784800990054812ull);
    vlSelf->pwrbus_ram_pd = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5219006355734432551ull);
    vlSelf->__PVT__SO_int_net = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17252655622214923015ull);
    vlSelf->__PVT__mbist_ramaccess_rst_ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4635875347747302704ull);
    vlSelf->__PVT__r_nv_ram_rws_256x7__DOT__mbist_Do_r0_int_net = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 5718683093334161689ull);
    vlSelf->__PVT__r_nv_ram_rws_256x7__DOT__la_bist_clkw0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1890151121750567850ull);
    vlSelf->__PVT__r_nv_ram_rws_256x7__DOT__updateDR_sync_1p = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12997995026672716276ull);
    vlSelf->__PVT__r_nv_ram_rws_256x7__DOT__dft_rst_gated_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2983938447561543678ull);
    vlSelf->__PVT__r_nv_ram_rws_256x7__DOT__Ra_array_reg_r0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4710727828273861253ull);
    vlSelf->__PVT__r_nv_ram_rws_256x7__DOT__ctx_ctrl_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9577039239569689407ull);
    vlSelf->__PVT__r_nv_ram_rws_256x7__DOT__gated_clk_core = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15494680717935785609ull);
    vlSelf->__PVT__r_nv_ram_rws_256x7__DOT__shiftDR_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1041742886104222929ull);
    vlSelf->__PVT__r_nv_ram_rws_256x7__DOT__posedge_updateDR_sync = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6864854261342142708ull);
    vlSelf->__PVT__r_nv_ram_rws_256x7__DOT__pre_Wa_reg_w0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16885424878414130612ull);
    vlSelf->__PVT__r_nv_ram_rws_256x7__DOT__muxed_we_w0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 524588664924796247ull);
    vlSelf->__PVT__r_nv_ram_rws_256x7__DOT__we_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2427487958954966408ull);
    vlSelf->__PVT__r_nv_ram_rws_256x7__DOT__pre_Ra_reg_r0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4128128161105706357ull);
    vlSelf->__PVT__r_nv_ram_rws_256x7__DOT__access_en_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17301465995007068403ull);
    vlSelf->__PVT__r_nv_ram_rws_256x7__DOT__muxed_re_r0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16416150366194253864ull);
    vlSelf->__PVT__r_nv_ram_rws_256x7__DOT__re_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11998864783249204940ull);
    vlSelf->r_nv_ram_rws_256x7__DOT____Vcellout__ram_Inst_256X7__RD_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5565100300655453946ull);
    vlSelf->r_nv_ram_rws_256x7__DOT____Vcellout__ram_Inst_256X7__RD_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6563878035304203078ull);
    vlSelf->r_nv_ram_rws_256x7__DOT____Vcellout__ram_Inst_256X7__RD_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15161351861284295666ull);
    vlSelf->r_nv_ram_rws_256x7__DOT____Vcellout__ram_Inst_256X7__RD_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4295515830029167651ull);
    vlSelf->r_nv_ram_rws_256x7__DOT____Vcellout__ram_Inst_256X7__RD_4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4704606669724547754ull);
    vlSelf->r_nv_ram_rws_256x7__DOT____Vcellout__ram_Inst_256X7__RD_5 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 493453017492136402ull);
    vlSelf->r_nv_ram_rws_256x7__DOT____Vcellout__ram_Inst_256X7__RD_6 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4006698050134419633ull);
    vlSelf->__PVT__r_nv_ram_rws_256x7__DOT__muxed_Data_r0 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 4741666558546152677ull);
    vlSelf->__PVT__r_nv_ram_rws_256x7__DOT__mbist_ce_r0_1p = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6823455267036807603ull);
    vlSelf->__PVT__r_nv_ram_rws_256x7__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13530984334886605284ull);
    vlSelf->__PVT__r_nv_ram_rws_256x7__DOT__CLK_GATE_clk__DOT__qd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16467620257865333664ull);
    vlSelf->__PVT__r_nv_ram_rws_256x7__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17419309716372840727ull);
    vlSelf->__PVT__r_nv_ram_rws_256x7__DOT__UJ_la_bist_clkw0_gate__DOT__E = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4907552574789205136ull);
    vlSelf->__PVT__r_nv_ram_rws_256x7__DOT__UJ_la_bist_clkw0_gate__DOT__qd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17451134892740306981ull);
    vlSelf->__PVT__r_nv_ram_rws_256x7__DOT__UJ_clk_gate_core__DOT__qd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2607437482953690355ull);
    vlSelf->__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__RA = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 188320550632226546ull);
    vlSelf->__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__WA = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1788106502423970336ull);
    vlSelf->__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__WD = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 14352918017347187169ull);
    vlSelf->__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__we_lat = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6860649843898619676ull);
    vlSelf->__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__weclk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7156123867339586919ull);
    vlSelf->__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__wa_lat = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4469532327929679193ull);
    vlSelf->__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__wd_lat = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 18340696394496838062ull);
    vlSelf->__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__re_lat = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13626366489563632227ull);
    vlSelf->__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__radclk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9298600785420993620ull);
    vlSelf->__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__ra_lat = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3594487469239848375ull);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__array[__Vi0] = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 2520743811879058068ull);
    }
    vlSelf->__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__bitclk = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 2201045392193032243ull);
    vlSelf->__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__r0_arr = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 9577596796690473209ull);
    vlSelf->__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__collision_ff = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 8396041680088678277ull);
    vlSelf->__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__collision_ff_clk = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 2940622907642394951ull);
    vlSelf->__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__r0_dout_tmp = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 8556774450021988278ull);
    vlSelf->__PVT__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__r0_dout_tmp2 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 14031124873894485919ull);
    vlSelf->__PVT__r_nv_ram_rws_256x7__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5086282188764059841ull);
    vlSelf->__PVT__r_nv_ram_rws_256x7__DOT__testInst_re_reg_r0__DOT__clk_wire = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13216716172420636028ull);
    vlSelf->__PVT__r_nv_ram_rws_256x7__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7543514892995797766ull);
    vlSelf->__VdlyVal__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__array__v0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7989790285744901574ull);
    vlSelf->__VdlyDim0__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__array__v0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12001258317821795806ull);
    vlSelf->__VdlySet__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__array__v0 = 0;
    vlSelf->__VdlyVal__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__array__v1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8496964795473256041ull);
    vlSelf->__VdlyDim0__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__array__v1 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11525212577266846337ull);
    vlSelf->__VdlySet__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__array__v1 = 0;
    vlSelf->__VdlyVal__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__array__v2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8912185685093531370ull);
    vlSelf->__VdlyDim0__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__array__v2 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6521747912033284867ull);
    vlSelf->__VdlySet__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__array__v2 = 0;
    vlSelf->__VdlyVal__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__array__v3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9503256254090597045ull);
    vlSelf->__VdlyDim0__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__array__v3 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10916338692239067283ull);
    vlSelf->__VdlySet__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__array__v3 = 0;
    vlSelf->__VdlyVal__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__array__v4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5653320431515390390ull);
    vlSelf->__VdlyDim0__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__array__v4 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3354186054135362788ull);
    vlSelf->__VdlySet__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__array__v4 = 0;
    vlSelf->__VdlyVal__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__array__v5 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6068541321135671609ull);
    vlSelf->__VdlyDim0__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__array__v5 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10654676362527564448ull);
    vlSelf->__VdlySet__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__array__v5 = 0;
    vlSelf->__VdlyVal__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__array__v6 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 611850736453525673ull);
    vlSelf->__VdlyDim0__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__array__v6 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12610132202849796536ull);
    vlSelf->__VdlySet__r_nv_ram_rws_256x7__DOT__ram_Inst_256X7__DOT__ITOP__DOT__io__DOT__array__v6 = 0;
}
