// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

VL_ATTR_COLD void Vsim_nv_ram_rwst_256x8___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__adr_ram__0(Vsim_nv_ram_rwst_256x8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rwst_256x8___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__adr_ram__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) & (IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) & (IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__CLK_GATE_clk__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__testInst_re_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) & (IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__r0_arr 
        = vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__array
        [vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__ra_lat];
    vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__pre_Wa_reg_w0 
        = ((((((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
               << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                         << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                     << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q))) 
            << 4U) | ((((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                        << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                  << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                              << 1U) 
                                             | (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q))));
    vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__pre_Ra_reg_r0 
        = ((((((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
               << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                         << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                     << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q))) 
            << 4U) | ((((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                        << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                  << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                              << 1U) 
                                             | (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3063 = ((IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__ra_lat) 
                                                   == (IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__wa_lat));
    vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__posedge_updateDR_sync 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__updateDR_sync_1p)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0));
    vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) & (IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__UJ_la_bist_clkw0_gate__DOT__E 
        = vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0;
    vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__mbist_Do_r0_int_net 
        = ((((((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
               << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                         << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                     << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q))) 
            << 4U) | ((((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                        << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                  << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                              << 1U) 
                                             | (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q))));
    vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__access_en_r 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__re_q));
    vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__radclk 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__re_lat));
    vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__weclk 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__we_lat));
    if (vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) {
            vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__WA 
                = vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__pre_Wa_reg_w0;
            vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__WD 
                = vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__mbist_Do_r0_int_net;
        } else {
            vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__WA = 0U;
            vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__WD = 0U;
        }
        vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__muxed_we_w0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && ((IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__posedge_updateDR_sync) 
                      & (IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__we_q))));
        vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__muxed_re_r0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__access_en_r)));
    } else {
        vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__WA 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__adr_ram_wr_adr;
        vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__muxed_we_w0 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__adr_ram_wr_enable;
        vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__WD 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__cq_wr_adr;
        vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__muxed_re_r0 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__adr_ram_rd_enable;
    }
    vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__bitclk 
        = (0x000000ffU & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__weclk))));
    vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
        = (0x000000ffU & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__weclk))) 
                          & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__radclk))) 
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3063))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3064 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3063) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__weclk));
    vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = ((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__r0_arr) 
                         >> 7U) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                       >> 7U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3064))))) 
               << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                     >> 6U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3064))) 
                                << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                          >> 4U)))) 
             | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__collision_ff) 
                             >> 5U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3064))) 
                        << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                  >> 4U))) | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3064))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U))))) 
            << 4U) | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                     >> 3U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3064))) 
                                << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                          >> 2U))) 
                        | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 2U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3064))) 
                                 & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                    >> 2U)))) << 2U) 
                      | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 1U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3064))) 
                                 << 1U) & (IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                         | (1U & ((~ ((IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3064))) 
                                  & (IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__r0_arr))))));
}

VL_ATTR_COLD void Vsim_nv_ram_rwst_256x8___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__adr_ram__1(Vsim_nv_ram_rwst_256x8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rwst_256x8___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__adr_ram__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__muxed_Data_r0 
        = (((IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
             ? (IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__re_q)
             : (IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0))
            ? (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__adr_ram_rd_data)
            : (IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__WD));
    vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__RA 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__UJ_la_bist_clkw0_gate__DOT__E)
            ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
                ? (IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__pre_Ra_reg_r0)
                : 0U) : (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__cq_rd_adr));
    vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__wthru 
        = ((((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__adr_ram_rd_enable) 
             & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__adr_ram_wr_enable)) 
            & (~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0))) 
           & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__cq_rd_adr) 
              == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__adr_ram_wr_adr)));
}

VL_ATTR_COLD void Vsim_nv_ram_rwst_256x8___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__adr_ram__0(Vsim_nv_ram_rwst_256x8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rwst_256x8___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__adr_ram__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) & (IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) & (IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__CLK_GATE_clk__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__testInst_re_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) & (IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__r0_arr 
        = vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__array
        [vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__ra_lat];
    vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__pre_Wa_reg_w0 
        = ((((((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
               << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                         << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                     << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q))) 
            << 4U) | ((((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                        << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                  << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                              << 1U) 
                                             | (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q))));
    vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__pre_Ra_reg_r0 
        = ((((((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
               << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                         << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                     << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q))) 
            << 4U) | ((((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                        << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                  << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                              << 1U) 
                                             | (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3065 = ((IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__ra_lat) 
                                                   == (IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__wa_lat));
    vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__posedge_updateDR_sync 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__updateDR_sync_1p)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0));
    vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) & (IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__UJ_la_bist_clkw0_gate__DOT__E 
        = vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0;
    vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__mbist_Do_r0_int_net 
        = ((((((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
               << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                         << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                     << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q))) 
            << 4U) | ((((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                        << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                  << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                              << 1U) 
                                             | (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q))));
    vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__access_en_r 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__re_q));
    vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__radclk 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__re_lat));
    vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__weclk 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__we_lat));
    if (vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) {
            vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__WA 
                = vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__pre_Wa_reg_w0;
            vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__WD 
                = vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__mbist_Do_r0_int_net;
        } else {
            vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__WA = 0U;
            vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__WD = 0U;
        }
        vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__muxed_we_w0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && ((IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__posedge_updateDR_sync) 
                      & (IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__we_q))));
        vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__muxed_re_r0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__access_en_r)));
    } else {
        vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__WA 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__adr_ram_wr_adr;
        vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__muxed_we_w0 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__adr_ram_wr_enable;
        vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__WD 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__cq_wr_adr;
        vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__muxed_re_r0 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__adr_ram_rd_enable;
    }
    vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__bitclk 
        = (0x000000ffU & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__weclk))));
    vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
        = (0x000000ffU & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__weclk))) 
                          & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__radclk))) 
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3065))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3066 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3065) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__weclk));
    vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = ((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__r0_arr) 
                         >> 7U) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                       >> 7U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3066))))) 
               << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                     >> 6U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3066))) 
                                << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                          >> 4U)))) 
             | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__collision_ff) 
                             >> 5U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3066))) 
                        << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                  >> 4U))) | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3066))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U))))) 
            << 4U) | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                     >> 3U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3066))) 
                                << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                          >> 2U))) 
                        | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 2U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3066))) 
                                 & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                    >> 2U)))) << 2U) 
                      | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 1U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3066))) 
                                 << 1U) & (IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                         | (1U & ((~ ((IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3066))) 
                                  & (IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__r0_arr))))));
}

VL_ATTR_COLD void Vsim_nv_ram_rwst_256x8___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__adr_ram__1(Vsim_nv_ram_rwst_256x8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rwst_256x8___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__adr_ram__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__muxed_Data_r0 
        = (((IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
             ? (IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__re_q)
             : (IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0))
            ? (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__adr_ram_rd_data)
            : (IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__WD));
    vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__RA 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__UJ_la_bist_clkw0_gate__DOT__E)
            ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
                ? (IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__pre_Ra_reg_r0)
                : 0U) : (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__cq_rd_adr));
    vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__wthru 
        = ((((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__adr_ram_rd_enable) 
             & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__adr_ram_wr_enable)) 
            & (~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0))) 
           & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__cq_rd_adr) 
              == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__adr_ram_wr_adr)));
}

VL_ATTR_COLD void Vsim_nv_ram_rwst_256x8___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__adr_ram__0(Vsim_nv_ram_rwst_256x8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rwst_256x8___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__adr_ram__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) & (IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) & (IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__CLK_GATE_clk__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__testInst_re_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) & (IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__r0_arr 
        = vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__array
        [vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__ra_lat];
    vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__pre_Wa_reg_w0 
        = ((((((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
               << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                         << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                     << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q))) 
            << 4U) | ((((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                        << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                  << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                              << 1U) 
                                             | (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q))));
    vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__pre_Ra_reg_r0 
        = ((((((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
               << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                         << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                     << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q))) 
            << 4U) | ((((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                        << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                  << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                              << 1U) 
                                             | (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3067 = ((IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__ra_lat) 
                                                   == (IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__wa_lat));
    vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__posedge_updateDR_sync 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__updateDR_sync_1p)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0));
    vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) & (IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__UJ_la_bist_clkw0_gate__DOT__E 
        = vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0;
    vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__mbist_Do_r0_int_net 
        = ((((((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
               << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                         << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                     << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q))) 
            << 4U) | ((((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                        << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                  << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                              << 1U) 
                                             | (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q))));
    vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__access_en_r 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__re_q));
    vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__radclk 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__re_lat));
    vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__weclk 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__we_lat));
    if (vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) {
            vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__WA 
                = vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__pre_Wa_reg_w0;
            vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__WD 
                = vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__mbist_Do_r0_int_net;
        } else {
            vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__WA = 0U;
            vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__WD = 0U;
        }
        vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__muxed_we_w0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && ((IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__posedge_updateDR_sync) 
                      & (IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__we_q))));
        vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__muxed_re_r0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__access_en_r)));
    } else {
        vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__WA 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__adr_ram_wr_adr;
        vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__muxed_we_w0 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__adr_ram_wr_enable;
        vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__WD 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__cq_wr_adr;
        vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__muxed_re_r0 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__adr_ram_rd_enable;
    }
    vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__bitclk 
        = (0x000000ffU & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__weclk))));
    vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
        = (0x000000ffU & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__weclk))) 
                          & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__radclk))) 
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3067))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3068 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3067) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__weclk));
    vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = ((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__r0_arr) 
                         >> 7U) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                       >> 7U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3068))))) 
               << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                     >> 6U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3068))) 
                                << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                          >> 4U)))) 
             | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__collision_ff) 
                             >> 5U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3068))) 
                        << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                  >> 4U))) | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3068))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U))))) 
            << 4U) | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                     >> 3U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3068))) 
                                << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                          >> 2U))) 
                        | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 2U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3068))) 
                                 & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                    >> 2U)))) << 2U) 
                      | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 1U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3068))) 
                                 << 1U) & (IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                         | (1U & ((~ ((IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3068))) 
                                  & (IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__r0_arr))))));
}

VL_ATTR_COLD void Vsim_nv_ram_rwst_256x8___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__adr_ram__1(Vsim_nv_ram_rwst_256x8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rwst_256x8___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__adr_ram__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__muxed_Data_r0 
        = (((IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
             ? (IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__re_q)
             : (IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0))
            ? (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__adr_ram_rd_data)
            : (IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__WD));
    vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__RA 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__UJ_la_bist_clkw0_gate__DOT__E)
            ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
                ? (IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__pre_Ra_reg_r0)
                : 0U) : (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__cq_rd_adr));
    vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__wthru 
        = ((((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__adr_ram_rd_enable) 
             & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__adr_ram_wr_enable)) 
            & (~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0))) 
           & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__cq_rd_adr) 
              == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_read__DOT__u_cq__DOT__adr_ram_wr_adr)));
}

VL_ATTR_COLD void Vsim_nv_ram_rwst_256x8___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_cq__DOT__adr_ram__0(Vsim_nv_ram_rwst_256x8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rwst_256x8___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_cq__DOT__adr_ram__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) & (IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) & (IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__CLK_GATE_clk__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__testInst_re_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) & (IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__r0_arr 
        = vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__array
        [vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__ra_lat];
    vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__pre_Wa_reg_w0 
        = ((((((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
               << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                         << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                     << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q))) 
            << 4U) | ((((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                        << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                  << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                              << 1U) 
                                             | (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__testInst_Wa_reg_w0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q))));
    vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__pre_Ra_reg_r0 
        = ((((((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
               << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                         << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                     << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q))) 
            << 4U) | ((((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                        << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                  << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                              << 1U) 
                                             | (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__testInst_Ra_reg_r0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3069 = ((IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__ra_lat) 
                                                   == (IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__wa_lat));
    vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__posedge_updateDR_sync 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__updateDR_sync_1p)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0));
    vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__clk) & (IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__UJ_la_bist_clkw0_gate__DOT__E 
        = vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0;
    vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__mbist_Do_r0_int_net 
        = ((((((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
               << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                         << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                     << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q))) 
            << 4U) | ((((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                        << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                  << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                              << 1U) 
                                             | (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q))));
    vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__access_en_r 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__re_q));
    vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__radclk 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__re_lat));
    vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__weclk 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__we_lat));
    if (vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) {
            vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__WA 
                = vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__pre_Wa_reg_w0;
            vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__WD 
                = vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__mbist_Do_r0_int_net;
        } else {
            vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__WA = 0U;
            vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__WD = 0U;
        }
        vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__muxed_we_w0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && ((IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__posedge_updateDR_sync) 
                      & (IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__we_q))));
        vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__muxed_re_r0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__access_en_r)));
    } else {
        vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__WA 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_cq__DOT__adr_ram_wr_adr;
        vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__muxed_we_w0 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_cq__DOT__adr_ram_wr_enable;
        vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__WD 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_cq__DOT__cq_wr_adr;
        vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__muxed_re_r0 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_cq__DOT__adr_ram_rd_enable;
    }
    vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__bitclk 
        = (0x000000ffU & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__weclk))));
    vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
        = (0x000000ffU & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__weclk))) 
                          & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__radclk))) 
                             & (- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3069))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3070 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3069) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__weclk));
    vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
        = ((((((IData)((((IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__r0_arr) 
                         >> 7U) & (~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                       >> 7U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3070))))) 
               << 3U) | (4U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                     >> 6U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3070))) 
                                << 2U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                          >> 4U)))) 
             | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__collision_ff) 
                             >> 5U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3070))) 
                        << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                  >> 4U))) | (1U & 
                                              ((~ (
                                                   ((IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                                    >> 4U) 
                                                   | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3070))) 
                                               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                                  >> 4U))))) 
            << 4U) | ((((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                     >> 3U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3070))) 
                                << 1U) & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                          >> 2U))) 
                        | (1U & ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 2U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3070))) 
                                 & ((IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                    >> 2U)))) << 2U) 
                      | ((2U & (((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      >> 1U) | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3070))) 
                                 << 1U) & (IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__r0_arr))) 
                         | (1U & ((~ ((IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                      | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3070))) 
                                  & (IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__r0_arr))))));
}

VL_ATTR_COLD void Vsim_nv_ram_rwst_256x8___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_cq__DOT__adr_ram__1(Vsim_nv_ram_rwst_256x8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rwst_256x8___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_cq__DOT__adr_ram__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__muxed_Data_r0 
        = (((IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
             ? (IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__re_q)
             : (IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0))
            ? (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_cq__DOT__adr_ram_rd_data)
            : (IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__WD));
    vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__RA 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__UJ_la_bist_clkw0_gate__DOT__E)
            ? ((IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
                ? (IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__pre_Ra_reg_r0)
                : 0U) : (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_cq__DOT__cq_rd_adr));
    vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__wthru 
        = ((((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_cq__DOT__adr_ram_rd_enable) 
             & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_cq__DOT__adr_ram_wr_enable)) 
            & (~ (IData)(vlSelfRef.__PVT__r_nv_ram_rwst_256x8__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0))) 
           & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_cq__DOT__cq_rd_adr) 
              == (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_cvif__DOT__u_write__DOT__u_cq__DOT__adr_ram_wr_adr)));
}

VL_ATTR_COLD void Vsim_nv_ram_rwst_256x8___ctor_var_reset(Vsim_nv_ram_rwst_256x8* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rwst_256x8___ctor_var_reset\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->ra = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 397185324164439704ull);
    vlSelf->re = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9839690450034771972ull);
    vlSelf->dout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11474705599699299244ull);
    vlSelf->wa = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15817334002654144152ull);
    vlSelf->we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10105644630884274164ull);
    vlSelf->di = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15530784800990054812ull);
    vlSelf->pwrbus_ram_pd = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5219006355734432551ull);
    vlSelf->__PVT__SO_int_net = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17252655622214923015ull);
    vlSelf->__PVT__mbist_ramaccess_rst_ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4635875347747302704ull);
    vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__mbist_Do_r0_int_net = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17872768338277481210ull);
    vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__wthru = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3134134922998468344ull);
    vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__wthru_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14815889498227373754ull);
    vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__la_bist_clkw0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6550456153206298222ull);
    vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__updateDR_sync_1p = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6835862747019167048ull);
    vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__dft_rst_gated_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11802254045436694167ull);
    vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__Ra_array_reg_r0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10431381755033713844ull);
    vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ctx_ctrl_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 104864959127245333ull);
    vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__gated_clk_core = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3123879656452649145ull);
    vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__shiftDR_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2818248254364020888ull);
    vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__posedge_updateDR_sync = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10775295991160300153ull);
    vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__pre_Wa_reg_w0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3208632760495868304ull);
    vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__muxed_we_w0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3453034284003426596ull);
    vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__we_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14288347873089636113ull);
    vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__pre_Ra_reg_r0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7221843659052550542ull);
    vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__access_en_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3194673811271123129ull);
    vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__muxed_re_r0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10664010947259764332ull);
    vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__re_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1849192964991469332ull);
    vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__muxed_Data_r0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4636282849414888651ull);
    vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__mbist_ce_r0_1p = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10754850588173870755ull);
    vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12992588731057366192ull);
    vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__CLK_GATE_clk__DOT__qd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13808549395278251722ull);
    vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3707465576178498265ull);
    vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__UJ_la_bist_clkw0_gate__DOT__E = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16289803484494690872ull);
    vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__UJ_la_bist_clkw0_gate__DOT__qd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6415709263684386797ull);
    vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__UJ_clk_gate_core__DOT__qd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15415700594451071200ull);
    vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__RA = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15310139150834985637ull);
    vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__WA = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 235438596776519262ull);
    vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__WD = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16146561139592062927ull);
    vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__we_lat = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6695023865064406174ull);
    vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__weclk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13696309783303846124ull);
    vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__wa_lat = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8453385289037619714ull);
    vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__wd_lat = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8328017925980566240ull);
    vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__re_lat = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12480876904961180741ull);
    vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__radclk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15793134610335469605ull);
    vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__ra_lat = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15595499068442484727ull);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__array[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4851111462857578936ull);
    }
    vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__bitclk = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 258123128308622485ull);
    vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__r0_arr = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11334134897766277975ull);
    vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__collision_ff = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4355348627483211561ull);
    vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__collision_ff_clk = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4422671552185901896ull);
    vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__r0_dout_tmp = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2988327561264091649ull);
    vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__r0_dout_tmp2 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4360466408266718662ull);
    vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6285958479006316433ull);
    vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__testInst_re_reg_r0__DOT__clk_wire = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9402030172433615698ull);
    vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12025234913559226918ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_3063 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17854303490062293001ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_3064 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12514483523040568014ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_3065 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15710734994644160622ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_3066 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 379279448453439641ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_3067 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 429640514144876309ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_3068 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8349392687217856204ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_3069 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11164719130193747388ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_3070 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2944929715520622093ull);
    vlSelf->__VdlyVal__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__array__v0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13937373558927739239ull);
    vlSelf->__VdlyDim0__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__array__v0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14959681804098903234ull);
    vlSelf->__VdlySet__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__array__v0 = 0;
    vlSelf->__VdlyVal__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__array__v1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9511896030666776573ull);
    vlSelf->__VdlyDim0__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__array__v1 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11346343967868499584ull);
    vlSelf->__VdlySet__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__array__v1 = 0;
    vlSelf->__VdlyVal__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__array__v2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4750392313435794060ull);
    vlSelf->__VdlyDim0__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__array__v2 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 608943637480723470ull);
    vlSelf->__VdlySet__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__array__v2 = 0;
    vlSelf->__VdlyVal__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__array__v3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14993226136341211110ull);
    vlSelf->__VdlyDim0__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__array__v3 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6809030259257301339ull);
    vlSelf->__VdlySet__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__array__v3 = 0;
    vlSelf->__VdlyVal__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__array__v4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11169245554950782635ull);
    vlSelf->__VdlyDim0__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__array__v4 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10606662695574961019ull);
    vlSelf->__VdlySet__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__array__v4 = 0;
    vlSelf->__VdlyVal__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__array__v5 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16045699860489169484ull);
    vlSelf->__VdlyDim0__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__array__v5 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13886770056137749804ull);
    vlSelf->__VdlySet__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__array__v5 = 0;
    vlSelf->__VdlyVal__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__array__v6 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8684902443843508064ull);
    vlSelf->__VdlyDim0__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__array__v6 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14313806655277372904ull);
    vlSelf->__VdlySet__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__array__v6 = 0;
    vlSelf->__VdlyVal__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__array__v7 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10312239625113357411ull);
    vlSelf->__VdlyDim0__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__array__v7 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16385985866346096188ull);
    vlSelf->__VdlySet__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__array__v7 = 0;
}
