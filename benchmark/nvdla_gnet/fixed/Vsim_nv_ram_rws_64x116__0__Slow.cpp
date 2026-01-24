// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

VL_ATTR_COLD void Vsim_nv_ram_rws_64x116___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank0_uram_0__0(Vsim_nv_ram_rws_64x116* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_64x116___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank0_uram_0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__pre_Wa_reg_w0 
        = ((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
             << 5U) | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                        << 4U) | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                  << 3U))) | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                               << 2U) 
                                              | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q))));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__pre_Ra_reg_r0 
        = ((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
             << 5U) | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                        << 4U) | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                  << 3U))) | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                               << 2U) 
                                              | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q))));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__posedge_updateDR_sync 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__updateDR_sync_1p)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__UJ_la_bist_clkw0_gate__DOT__E 
        = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0;
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__mbist_Do_r0_int_net[0U] 
        = (((((((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__31__KET____DOT__SSS__DOT__nr__Q) 
                  << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__30__KET____DOT__SSS__DOT__nr__Q) 
                            << 2U)) | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__29__KET____DOT__SSS__DOT__nr__Q) 
                                        << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__28__KET____DOT__SSS__DOT__nr__Q))) 
               << 0x0000000cU) | (((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__27__KET____DOT__SSS__DOT__nr__Q) 
                                     << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__26__KET____DOT__SSS__DOT__nr__Q) 
                                               << 2U)) 
                                   | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__25__KET____DOT__SSS__DOT__nr__Q) 
                                       << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__24__KET____DOT__SSS__DOT__nr__Q))) 
                                  << 8U)) | ((((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__23__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__22__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__21__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__20__KET____DOT__SSS__DOT__nr__Q))) 
                                              << 4U) 
                                             | ((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__19__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__18__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 2U)) 
                                                | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__17__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__16__KET____DOT__SSS__DOT__nr__Q))))) 
            << 0x00000010U) | (((((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__15__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__14__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__13__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__12__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 0x0000000cU) | 
                                (((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__11__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__10__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__9__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__8__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 8U)) | ((((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                                << 3U) 
                                               | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 2U)) 
                                              | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q))) 
                                             << 4U) 
                                            | ((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q))))));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__mbist_Do_r0_int_net[1U] 
        = (((((((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__63__KET____DOT__SSS__DOT__nr__Q) 
                  << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__62__KET____DOT__SSS__DOT__nr__Q) 
                            << 2U)) | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__61__KET____DOT__SSS__DOT__nr__Q) 
                                        << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__60__KET____DOT__SSS__DOT__nr__Q))) 
               << 0x0000000cU) | (((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__59__KET____DOT__SSS__DOT__nr__Q) 
                                     << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__58__KET____DOT__SSS__DOT__nr__Q) 
                                               << 2U)) 
                                   | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__57__KET____DOT__SSS__DOT__nr__Q) 
                                       << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__56__KET____DOT__SSS__DOT__nr__Q))) 
                                  << 8U)) | ((((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__55__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__54__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__53__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__52__KET____DOT__SSS__DOT__nr__Q))) 
                                              << 4U) 
                                             | ((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__51__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__50__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 2U)) 
                                                | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__49__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__48__KET____DOT__SSS__DOT__nr__Q))))) 
            << 0x00000010U) | (((((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__47__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__46__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__45__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__44__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 0x0000000cU) | 
                                (((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__43__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__42__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__41__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__40__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 8U)) | ((((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__39__KET____DOT__SSS__DOT__nr__Q) 
                                                << 3U) 
                                               | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__38__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 2U)) 
                                              | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__37__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__36__KET____DOT__SSS__DOT__nr__Q))) 
                                             << 4U) 
                                            | ((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__35__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__34__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__33__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__32__KET____DOT__SSS__DOT__nr__Q))))));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__mbist_Do_r0_int_net[2U] 
        = (((((((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__95__KET____DOT__SSS__DOT__nr__Q) 
                  << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__94__KET____DOT__SSS__DOT__nr__Q) 
                            << 2U)) | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__93__KET____DOT__SSS__DOT__nr__Q) 
                                        << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__92__KET____DOT__SSS__DOT__nr__Q))) 
               << 0x0000000cU) | (((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__91__KET____DOT__SSS__DOT__nr__Q) 
                                     << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__90__KET____DOT__SSS__DOT__nr__Q) 
                                               << 2U)) 
                                   | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__89__KET____DOT__SSS__DOT__nr__Q) 
                                       << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__88__KET____DOT__SSS__DOT__nr__Q))) 
                                  << 8U)) | ((((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__87__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__86__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__85__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__84__KET____DOT__SSS__DOT__nr__Q))) 
                                              << 4U) 
                                             | ((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__83__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__82__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 2U)) 
                                                | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__81__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__80__KET____DOT__SSS__DOT__nr__Q))))) 
            << 0x00000010U) | (((((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__79__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__78__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__77__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__76__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 0x0000000cU) | 
                                (((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__75__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__74__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__73__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__72__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 8U)) | ((((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__71__KET____DOT__SSS__DOT__nr__Q) 
                                                << 3U) 
                                               | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__70__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 2U)) 
                                              | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__69__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__68__KET____DOT__SSS__DOT__nr__Q))) 
                                             << 4U) 
                                            | ((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__67__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__66__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__65__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__64__KET____DOT__SSS__DOT__nr__Q))))));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__mbist_Do_r0_int_net[3U] 
        = (0x000fffffU & (((((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__115__KET____DOT__SSS__DOT__nr__Q) 
                               << 4U) | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__114__KET____DOT__SSS__DOT__nr__Q) 
                                          << 3U) | 
                                         ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__113__KET____DOT__SSS__DOT__nr__Q) 
                                          << 2U))) 
                             | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__112__KET____DOT__SSS__DOT__nr__Q) 
                                 << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__111__KET____DOT__SSS__DOT__nr__Q))) 
                            << 0x0000000fU) | (((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__110__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 4U) 
                                                 | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__109__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 3U) 
                                                    | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__108__KET____DOT__SSS__DOT__nr__Q) 
                                                       << 2U))) 
                                                | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__107__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__106__KET____DOT__SSS__DOT__nr__Q))) 
                                               << 0x0000000aU)) 
                          | ((((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__105__KET____DOT__SSS__DOT__nr__Q) 
                                 << 4U) | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__104__KET____DOT__SSS__DOT__nr__Q) 
                                            << 3U) 
                                           | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__103__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U))) 
                               | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__102__KET____DOT__SSS__DOT__nr__Q) 
                                   << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__101__KET____DOT__SSS__DOT__nr__Q))) 
                              << 5U) | ((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__100__KET____DOT__SSS__DOT__nr__Q) 
                                          << 4U) | 
                                         (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__99__KET____DOT__SSS__DOT__nr__Q) 
                                           << 3U) | 
                                          ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__98__KET____DOT__SSS__DOT__nr__Q) 
                                           << 2U))) 
                                        | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__97__KET____DOT__SSS__DOT__nr__Q) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__96__KET____DOT__SSS__DOT__nr__Q))))));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__access_en_r 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__re_q));
    if (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) {
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__D_Ra_reg_r0 
                = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__pre_Ra_reg_r0;
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Wa_w0 
                = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__pre_Wa_reg_w0;
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[0U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__mbist_Do_r0_int_net[0U];
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[1U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__mbist_Do_r0_int_net[1U];
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[2U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__mbist_Do_r0_int_net[2U];
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[3U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__mbist_Do_r0_int_net[3U];
        } else {
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__D_Ra_reg_r0 = 0U;
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Wa_w0 = 0U;
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[0U] = 0U;
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[1U] = 0U;
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[2U] = 0U;
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[3U] = 0U;
        }
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__D_Ra_reg_r0 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__sub_lbuf_dout_cnt;
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Wa_w0 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_waddr_0;
        if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__fp16_mean_pool_cfg) {
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[0U] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__fp_mem0_wdata[0U];
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[1U] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__fp_mem0_wdata[1U];
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[2U] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__fp_mem0_wdata[2U];
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[3U] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__fp_mem0_wdata[3U];
        } else {
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[0U] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__int_mem_wdata_0[0U];
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[1U] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__int_mem_wdata_0[1U];
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[2U] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__int_mem_wdata_0[2U];
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[3U] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__int_mem_wdata_0[3U];
        }
    }
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__RA 
        = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__D_Ra_reg_r0;
    if (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
          ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__re_q)
          : (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0))) {
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[0U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__dout[0U];
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[1U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__dout[1U];
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[2U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__dout[2U];
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[3U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__dout[3U];
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[0U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[0U];
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[1U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[1U];
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[2U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[2U];
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[3U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[3U];
    }
}

VL_ATTR_COLD void Vsim_nv_ram_rws_64x116___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank0_uram_0__1(Vsim_nv_ram_rws_64x116* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_64x116___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank0_uram_0__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__core_din_format_switch_0.nvdla_core_clk) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__core_din_format_switch_0.nvdla_core_clk) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__CLK_GATE_clk__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__testInst_Ra_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__core_din_format_switch_0.nvdla_core_clk) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__core_din_format_switch_0.nvdla_core_clk) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__latffclk 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__core_din_format_switch_0.nvdla_core_clk) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__re = 
        (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_re) 
               | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_re_last)));
    if (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_we_w0 
            = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
                     & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                        && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__posedge_updateDR_sync) 
                            & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__we_q)))));
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_re_r0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__access_en_r)));
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_we_w0 
            = (1U & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_we));
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_re_r0 
            = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__re;
    }
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__WRDCLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__WE_LATB)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__RECLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__RE_LATB)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__WECLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__latffclk)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__WE_FF));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__rmuxd0[0U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000003fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__RADR))][0U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__rmuxd0[1U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000003fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__RADR))][1U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__rmuxd0[2U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000003fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__RADR))][2U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__rmuxd0[3U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000003fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__RADR))][3U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__WrClk0 
        = ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__WECLK) 
                & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__WAFF) 
                   >> 6U)) | ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__WECLK)) 
                              & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__RADR) 
                                 >> 6U)))) & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__WECLK));
}

VL_ATTR_COLD void Vsim_nv_ram_rws_64x116___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank1_uram_0__0(Vsim_nv_ram_rws_64x116* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_64x116___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank1_uram_0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__pre_Wa_reg_w0 
        = ((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
             << 5U) | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                        << 4U) | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                  << 3U))) | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                               << 2U) 
                                              | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q))));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__pre_Ra_reg_r0 
        = ((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
             << 5U) | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                        << 4U) | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                  << 3U))) | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                               << 2U) 
                                              | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q))));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__posedge_updateDR_sync 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__updateDR_sync_1p)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__UJ_la_bist_clkw0_gate__DOT__E 
        = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0;
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__mbist_Do_r0_int_net[0U] 
        = (((((((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__31__KET____DOT__SSS__DOT__nr__Q) 
                  << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__30__KET____DOT__SSS__DOT__nr__Q) 
                            << 2U)) | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__29__KET____DOT__SSS__DOT__nr__Q) 
                                        << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__28__KET____DOT__SSS__DOT__nr__Q))) 
               << 0x0000000cU) | (((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__27__KET____DOT__SSS__DOT__nr__Q) 
                                     << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__26__KET____DOT__SSS__DOT__nr__Q) 
                                               << 2U)) 
                                   | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__25__KET____DOT__SSS__DOT__nr__Q) 
                                       << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__24__KET____DOT__SSS__DOT__nr__Q))) 
                                  << 8U)) | ((((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__23__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__22__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__21__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__20__KET____DOT__SSS__DOT__nr__Q))) 
                                              << 4U) 
                                             | ((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__19__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__18__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 2U)) 
                                                | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__17__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__16__KET____DOT__SSS__DOT__nr__Q))))) 
            << 0x00000010U) | (((((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__15__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__14__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__13__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__12__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 0x0000000cU) | 
                                (((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__11__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__10__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__9__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__8__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 8U)) | ((((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                                << 3U) 
                                               | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 2U)) 
                                              | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q))) 
                                             << 4U) 
                                            | ((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q))))));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__mbist_Do_r0_int_net[1U] 
        = (((((((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__63__KET____DOT__SSS__DOT__nr__Q) 
                  << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__62__KET____DOT__SSS__DOT__nr__Q) 
                            << 2U)) | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__61__KET____DOT__SSS__DOT__nr__Q) 
                                        << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__60__KET____DOT__SSS__DOT__nr__Q))) 
               << 0x0000000cU) | (((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__59__KET____DOT__SSS__DOT__nr__Q) 
                                     << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__58__KET____DOT__SSS__DOT__nr__Q) 
                                               << 2U)) 
                                   | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__57__KET____DOT__SSS__DOT__nr__Q) 
                                       << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__56__KET____DOT__SSS__DOT__nr__Q))) 
                                  << 8U)) | ((((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__55__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__54__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__53__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__52__KET____DOT__SSS__DOT__nr__Q))) 
                                              << 4U) 
                                             | ((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__51__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__50__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 2U)) 
                                                | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__49__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__48__KET____DOT__SSS__DOT__nr__Q))))) 
            << 0x00000010U) | (((((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__47__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__46__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__45__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__44__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 0x0000000cU) | 
                                (((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__43__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__42__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__41__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__40__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 8U)) | ((((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__39__KET____DOT__SSS__DOT__nr__Q) 
                                                << 3U) 
                                               | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__38__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 2U)) 
                                              | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__37__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__36__KET____DOT__SSS__DOT__nr__Q))) 
                                             << 4U) 
                                            | ((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__35__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__34__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__33__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__32__KET____DOT__SSS__DOT__nr__Q))))));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__mbist_Do_r0_int_net[2U] 
        = (((((((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__95__KET____DOT__SSS__DOT__nr__Q) 
                  << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__94__KET____DOT__SSS__DOT__nr__Q) 
                            << 2U)) | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__93__KET____DOT__SSS__DOT__nr__Q) 
                                        << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__92__KET____DOT__SSS__DOT__nr__Q))) 
               << 0x0000000cU) | (((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__91__KET____DOT__SSS__DOT__nr__Q) 
                                     << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__90__KET____DOT__SSS__DOT__nr__Q) 
                                               << 2U)) 
                                   | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__89__KET____DOT__SSS__DOT__nr__Q) 
                                       << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__88__KET____DOT__SSS__DOT__nr__Q))) 
                                  << 8U)) | ((((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__87__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__86__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__85__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__84__KET____DOT__SSS__DOT__nr__Q))) 
                                              << 4U) 
                                             | ((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__83__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__82__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 2U)) 
                                                | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__81__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__80__KET____DOT__SSS__DOT__nr__Q))))) 
            << 0x00000010U) | (((((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__79__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__78__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__77__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__76__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 0x0000000cU) | 
                                (((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__75__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__74__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__73__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__72__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 8U)) | ((((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__71__KET____DOT__SSS__DOT__nr__Q) 
                                                << 3U) 
                                               | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__70__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 2U)) 
                                              | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__69__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__68__KET____DOT__SSS__DOT__nr__Q))) 
                                             << 4U) 
                                            | ((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__67__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__66__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__65__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__64__KET____DOT__SSS__DOT__nr__Q))))));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__mbist_Do_r0_int_net[3U] 
        = (0x000fffffU & (((((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__115__KET____DOT__SSS__DOT__nr__Q) 
                               << 4U) | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__114__KET____DOT__SSS__DOT__nr__Q) 
                                          << 3U) | 
                                         ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__113__KET____DOT__SSS__DOT__nr__Q) 
                                          << 2U))) 
                             | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__112__KET____DOT__SSS__DOT__nr__Q) 
                                 << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__111__KET____DOT__SSS__DOT__nr__Q))) 
                            << 0x0000000fU) | (((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__110__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 4U) 
                                                 | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__109__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 3U) 
                                                    | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__108__KET____DOT__SSS__DOT__nr__Q) 
                                                       << 2U))) 
                                                | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__107__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__106__KET____DOT__SSS__DOT__nr__Q))) 
                                               << 0x0000000aU)) 
                          | ((((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__105__KET____DOT__SSS__DOT__nr__Q) 
                                 << 4U) | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__104__KET____DOT__SSS__DOT__nr__Q) 
                                            << 3U) 
                                           | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__103__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U))) 
                               | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__102__KET____DOT__SSS__DOT__nr__Q) 
                                   << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__101__KET____DOT__SSS__DOT__nr__Q))) 
                              << 5U) | ((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__100__KET____DOT__SSS__DOT__nr__Q) 
                                          << 4U) | 
                                         (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__99__KET____DOT__SSS__DOT__nr__Q) 
                                           << 3U) | 
                                          ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__98__KET____DOT__SSS__DOT__nr__Q) 
                                           << 2U))) 
                                        | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__97__KET____DOT__SSS__DOT__nr__Q) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__96__KET____DOT__SSS__DOT__nr__Q))))));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__access_en_r 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__re_q));
    if (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) {
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__D_Ra_reg_r0 
                = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__pre_Ra_reg_r0;
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Wa_w0 
                = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__pre_Wa_reg_w0;
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[0U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__mbist_Do_r0_int_net[0U];
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[1U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__mbist_Do_r0_int_net[1U];
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[2U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__mbist_Do_r0_int_net[2U];
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[3U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__mbist_Do_r0_int_net[3U];
        } else {
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__D_Ra_reg_r0 = 0U;
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Wa_w0 = 0U;
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[0U] = 0U;
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[1U] = 0U;
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[2U] = 0U;
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[3U] = 0U;
        }
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__D_Ra_reg_r0 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__sub_lbuf_dout_cnt;
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Wa_w0 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_waddr_0;
        if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__fp16_mean_pool_cfg) {
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[0U] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__fp_mem1_wdata[0U];
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[1U] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__fp_mem1_wdata[1U];
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[2U] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__fp_mem1_wdata[2U];
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[3U] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__fp_mem1_wdata[3U];
        } else {
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[0U] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__int_mem_wdata_1[0U];
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[1U] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__int_mem_wdata_1[1U];
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[2U] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__int_mem_wdata_1[2U];
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[3U] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__int_mem_wdata_1[3U];
        }
    }
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__RA 
        = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__D_Ra_reg_r0;
    if (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
          ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__re_q)
          : (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0))) {
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[0U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__dout[0U];
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[1U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__dout[1U];
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[2U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__dout[2U];
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[3U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__dout[3U];
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[0U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[0U];
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[1U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[1U];
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[2U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[2U];
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[3U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[3U];
    }
}

VL_ATTR_COLD void Vsim_nv_ram_rws_64x116___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank1_uram_0__1(Vsim_nv_ram_rws_64x116* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_64x116___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank1_uram_0__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__core_din_format_switch_0.nvdla_core_clk) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__core_din_format_switch_0.nvdla_core_clk) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__CLK_GATE_clk__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__testInst_Ra_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__core_din_format_switch_0.nvdla_core_clk) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__core_din_format_switch_0.nvdla_core_clk) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__latffclk 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__core_din_format_switch_0.nvdla_core_clk) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__re = 
        (1U & (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_re) 
                | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_re_last)) 
               >> 1U));
    if (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_we_w0 
            = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
                     & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                        && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__posedge_updateDR_sync) 
                            & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__we_q)))));
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_re_r0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__access_en_r)));
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_we_w0 
            = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_we) 
                     >> 1U));
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_re_r0 
            = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__re;
    }
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__WRDCLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__WE_LATB)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__RECLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__RE_LATB)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__WECLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__latffclk)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__WE_FF));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__rmuxd0[0U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000003fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__RADR))][0U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__rmuxd0[1U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000003fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__RADR))][1U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__rmuxd0[2U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000003fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__RADR))][2U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__rmuxd0[3U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000003fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__RADR))][3U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__WrClk0 
        = ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__WECLK) 
                & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__WAFF) 
                   >> 6U)) | ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__WECLK)) 
                              & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__RADR) 
                                 >> 6U)))) & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__WECLK));
}

VL_ATTR_COLD void Vsim_nv_ram_rws_64x116___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank2_uram_0__0(Vsim_nv_ram_rws_64x116* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_64x116___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank2_uram_0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__pre_Wa_reg_w0 
        = ((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
             << 5U) | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                        << 4U) | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                  << 3U))) | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                               << 2U) 
                                              | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q))));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__pre_Ra_reg_r0 
        = ((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
             << 5U) | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                        << 4U) | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                  << 3U))) | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                               << 2U) 
                                              | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q))));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__posedge_updateDR_sync 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__updateDR_sync_1p)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__UJ_la_bist_clkw0_gate__DOT__E 
        = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0;
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__mbist_Do_r0_int_net[0U] 
        = (((((((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__31__KET____DOT__SSS__DOT__nr__Q) 
                  << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__30__KET____DOT__SSS__DOT__nr__Q) 
                            << 2U)) | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__29__KET____DOT__SSS__DOT__nr__Q) 
                                        << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__28__KET____DOT__SSS__DOT__nr__Q))) 
               << 0x0000000cU) | (((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__27__KET____DOT__SSS__DOT__nr__Q) 
                                     << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__26__KET____DOT__SSS__DOT__nr__Q) 
                                               << 2U)) 
                                   | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__25__KET____DOT__SSS__DOT__nr__Q) 
                                       << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__24__KET____DOT__SSS__DOT__nr__Q))) 
                                  << 8U)) | ((((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__23__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__22__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__21__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__20__KET____DOT__SSS__DOT__nr__Q))) 
                                              << 4U) 
                                             | ((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__19__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__18__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 2U)) 
                                                | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__17__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__16__KET____DOT__SSS__DOT__nr__Q))))) 
            << 0x00000010U) | (((((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__15__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__14__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__13__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__12__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 0x0000000cU) | 
                                (((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__11__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__10__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__9__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__8__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 8U)) | ((((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                                << 3U) 
                                               | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 2U)) 
                                              | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q))) 
                                             << 4U) 
                                            | ((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q))))));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__mbist_Do_r0_int_net[1U] 
        = (((((((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__63__KET____DOT__SSS__DOT__nr__Q) 
                  << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__62__KET____DOT__SSS__DOT__nr__Q) 
                            << 2U)) | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__61__KET____DOT__SSS__DOT__nr__Q) 
                                        << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__60__KET____DOT__SSS__DOT__nr__Q))) 
               << 0x0000000cU) | (((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__59__KET____DOT__SSS__DOT__nr__Q) 
                                     << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__58__KET____DOT__SSS__DOT__nr__Q) 
                                               << 2U)) 
                                   | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__57__KET____DOT__SSS__DOT__nr__Q) 
                                       << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__56__KET____DOT__SSS__DOT__nr__Q))) 
                                  << 8U)) | ((((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__55__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__54__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__53__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__52__KET____DOT__SSS__DOT__nr__Q))) 
                                              << 4U) 
                                             | ((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__51__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__50__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 2U)) 
                                                | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__49__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__48__KET____DOT__SSS__DOT__nr__Q))))) 
            << 0x00000010U) | (((((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__47__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__46__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__45__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__44__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 0x0000000cU) | 
                                (((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__43__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__42__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__41__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__40__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 8U)) | ((((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__39__KET____DOT__SSS__DOT__nr__Q) 
                                                << 3U) 
                                               | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__38__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 2U)) 
                                              | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__37__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__36__KET____DOT__SSS__DOT__nr__Q))) 
                                             << 4U) 
                                            | ((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__35__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__34__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__33__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__32__KET____DOT__SSS__DOT__nr__Q))))));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__mbist_Do_r0_int_net[2U] 
        = (((((((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__95__KET____DOT__SSS__DOT__nr__Q) 
                  << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__94__KET____DOT__SSS__DOT__nr__Q) 
                            << 2U)) | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__93__KET____DOT__SSS__DOT__nr__Q) 
                                        << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__92__KET____DOT__SSS__DOT__nr__Q))) 
               << 0x0000000cU) | (((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__91__KET____DOT__SSS__DOT__nr__Q) 
                                     << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__90__KET____DOT__SSS__DOT__nr__Q) 
                                               << 2U)) 
                                   | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__89__KET____DOT__SSS__DOT__nr__Q) 
                                       << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__88__KET____DOT__SSS__DOT__nr__Q))) 
                                  << 8U)) | ((((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__87__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__86__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__85__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__84__KET____DOT__SSS__DOT__nr__Q))) 
                                              << 4U) 
                                             | ((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__83__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__82__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 2U)) 
                                                | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__81__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__80__KET____DOT__SSS__DOT__nr__Q))))) 
            << 0x00000010U) | (((((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__79__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__78__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__77__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__76__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 0x0000000cU) | 
                                (((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__75__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__74__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__73__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__72__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 8U)) | ((((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__71__KET____DOT__SSS__DOT__nr__Q) 
                                                << 3U) 
                                               | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__70__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 2U)) 
                                              | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__69__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__68__KET____DOT__SSS__DOT__nr__Q))) 
                                             << 4U) 
                                            | ((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__67__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__66__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__65__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__64__KET____DOT__SSS__DOT__nr__Q))))));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__mbist_Do_r0_int_net[3U] 
        = (0x000fffffU & (((((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__115__KET____DOT__SSS__DOT__nr__Q) 
                               << 4U) | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__114__KET____DOT__SSS__DOT__nr__Q) 
                                          << 3U) | 
                                         ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__113__KET____DOT__SSS__DOT__nr__Q) 
                                          << 2U))) 
                             | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__112__KET____DOT__SSS__DOT__nr__Q) 
                                 << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__111__KET____DOT__SSS__DOT__nr__Q))) 
                            << 0x0000000fU) | (((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__110__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 4U) 
                                                 | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__109__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 3U) 
                                                    | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__108__KET____DOT__SSS__DOT__nr__Q) 
                                                       << 2U))) 
                                                | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__107__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__106__KET____DOT__SSS__DOT__nr__Q))) 
                                               << 0x0000000aU)) 
                          | ((((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__105__KET____DOT__SSS__DOT__nr__Q) 
                                 << 4U) | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__104__KET____DOT__SSS__DOT__nr__Q) 
                                            << 3U) 
                                           | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__103__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U))) 
                               | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__102__KET____DOT__SSS__DOT__nr__Q) 
                                   << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__101__KET____DOT__SSS__DOT__nr__Q))) 
                              << 5U) | ((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__100__KET____DOT__SSS__DOT__nr__Q) 
                                          << 4U) | 
                                         (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__99__KET____DOT__SSS__DOT__nr__Q) 
                                           << 3U) | 
                                          ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__98__KET____DOT__SSS__DOT__nr__Q) 
                                           << 2U))) 
                                        | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__97__KET____DOT__SSS__DOT__nr__Q) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__96__KET____DOT__SSS__DOT__nr__Q))))));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__access_en_r 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__re_q));
    if (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) {
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__D_Ra_reg_r0 
                = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__pre_Ra_reg_r0;
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Wa_w0 
                = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__pre_Wa_reg_w0;
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[0U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__mbist_Do_r0_int_net[0U];
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[1U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__mbist_Do_r0_int_net[1U];
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[2U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__mbist_Do_r0_int_net[2U];
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[3U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__mbist_Do_r0_int_net[3U];
        } else {
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__D_Ra_reg_r0 = 0U;
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Wa_w0 = 0U;
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[0U] = 0U;
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[1U] = 0U;
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[2U] = 0U;
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[3U] = 0U;
        }
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__D_Ra_reg_r0 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__sub_lbuf_dout_cnt;
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Wa_w0 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_waddr_0;
        if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__fp16_mean_pool_cfg) {
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[0U] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__fp_mem2_wdata[0U];
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[1U] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__fp_mem2_wdata[1U];
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[2U] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__fp_mem2_wdata[2U];
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[3U] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__fp_mem2_wdata[3U];
        } else {
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[0U] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__int_mem_wdata_2[0U];
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[1U] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__int_mem_wdata_2[1U];
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[2U] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__int_mem_wdata_2[2U];
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[3U] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__int_mem_wdata_2[3U];
        }
    }
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__RA 
        = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__D_Ra_reg_r0;
    if (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
          ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__re_q)
          : (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0))) {
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[0U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__dout[0U];
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[1U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__dout[1U];
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[2U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__dout[2U];
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[3U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__dout[3U];
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[0U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[0U];
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[1U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[1U];
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[2U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[2U];
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[3U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[3U];
    }
}

VL_ATTR_COLD void Vsim_nv_ram_rws_64x116___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank2_uram_0__1(Vsim_nv_ram_rws_64x116* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_64x116___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank2_uram_0__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__core_din_format_switch_0.nvdla_core_clk) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__core_din_format_switch_0.nvdla_core_clk) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__CLK_GATE_clk__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__testInst_Ra_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__core_din_format_switch_0.nvdla_core_clk) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__core_din_format_switch_0.nvdla_core_clk) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__latffclk 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__core_din_format_switch_0.nvdla_core_clk) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__re = 
        (1U & (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_re) 
                | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_re_last)) 
               >> 2U));
    if (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_we_w0 
            = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
                     & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                        && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__posedge_updateDR_sync) 
                            & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__we_q)))));
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_re_r0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__access_en_r)));
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_we_w0 
            = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_we) 
                     >> 2U));
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_re_r0 
            = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__re;
    }
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__WRDCLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__WE_LATB)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__RECLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__RE_LATB)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__WECLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__latffclk)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__WE_FF));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__rmuxd0[0U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000003fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__RADR))][0U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__rmuxd0[1U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000003fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__RADR))][1U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__rmuxd0[2U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000003fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__RADR))][2U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__rmuxd0[3U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000003fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__RADR))][3U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__WrClk0 
        = ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__WECLK) 
                & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__WAFF) 
                   >> 6U)) | ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__WECLK)) 
                              & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__RADR) 
                                 >> 6U)))) & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__WECLK));
}

VL_ATTR_COLD void Vsim_nv_ram_rws_64x116___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank3_uram_0__0(Vsim_nv_ram_rws_64x116* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_64x116___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank3_uram_0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__pre_Wa_reg_w0 
        = ((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
             << 5U) | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                        << 4U) | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                  << 3U))) | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                               << 2U) 
                                              | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q))));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__pre_Ra_reg_r0 
        = ((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
             << 5U) | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                        << 4U) | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                  << 3U))) | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                               << 2U) 
                                              | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q))));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__posedge_updateDR_sync 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__updateDR_sync_1p)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__UJ_la_bist_clkw0_gate__DOT__E 
        = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0;
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__mbist_Do_r0_int_net[0U] 
        = (((((((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__31__KET____DOT__SSS__DOT__nr__Q) 
                  << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__30__KET____DOT__SSS__DOT__nr__Q) 
                            << 2U)) | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__29__KET____DOT__SSS__DOT__nr__Q) 
                                        << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__28__KET____DOT__SSS__DOT__nr__Q))) 
               << 0x0000000cU) | (((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__27__KET____DOT__SSS__DOT__nr__Q) 
                                     << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__26__KET____DOT__SSS__DOT__nr__Q) 
                                               << 2U)) 
                                   | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__25__KET____DOT__SSS__DOT__nr__Q) 
                                       << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__24__KET____DOT__SSS__DOT__nr__Q))) 
                                  << 8U)) | ((((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__23__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__22__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__21__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__20__KET____DOT__SSS__DOT__nr__Q))) 
                                              << 4U) 
                                             | ((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__19__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__18__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 2U)) 
                                                | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__17__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__16__KET____DOT__SSS__DOT__nr__Q))))) 
            << 0x00000010U) | (((((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__15__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__14__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__13__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__12__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 0x0000000cU) | 
                                (((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__11__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__10__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__9__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__8__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 8U)) | ((((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                                << 3U) 
                                               | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 2U)) 
                                              | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q))) 
                                             << 4U) 
                                            | ((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q))))));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__mbist_Do_r0_int_net[1U] 
        = (((((((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__63__KET____DOT__SSS__DOT__nr__Q) 
                  << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__62__KET____DOT__SSS__DOT__nr__Q) 
                            << 2U)) | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__61__KET____DOT__SSS__DOT__nr__Q) 
                                        << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__60__KET____DOT__SSS__DOT__nr__Q))) 
               << 0x0000000cU) | (((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__59__KET____DOT__SSS__DOT__nr__Q) 
                                     << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__58__KET____DOT__SSS__DOT__nr__Q) 
                                               << 2U)) 
                                   | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__57__KET____DOT__SSS__DOT__nr__Q) 
                                       << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__56__KET____DOT__SSS__DOT__nr__Q))) 
                                  << 8U)) | ((((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__55__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__54__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__53__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__52__KET____DOT__SSS__DOT__nr__Q))) 
                                              << 4U) 
                                             | ((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__51__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__50__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 2U)) 
                                                | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__49__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__48__KET____DOT__SSS__DOT__nr__Q))))) 
            << 0x00000010U) | (((((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__47__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__46__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__45__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__44__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 0x0000000cU) | 
                                (((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__43__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__42__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__41__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__40__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 8U)) | ((((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__39__KET____DOT__SSS__DOT__nr__Q) 
                                                << 3U) 
                                               | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__38__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 2U)) 
                                              | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__37__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__36__KET____DOT__SSS__DOT__nr__Q))) 
                                             << 4U) 
                                            | ((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__35__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__34__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__33__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__32__KET____DOT__SSS__DOT__nr__Q))))));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__mbist_Do_r0_int_net[2U] 
        = (((((((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__95__KET____DOT__SSS__DOT__nr__Q) 
                  << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__94__KET____DOT__SSS__DOT__nr__Q) 
                            << 2U)) | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__93__KET____DOT__SSS__DOT__nr__Q) 
                                        << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__92__KET____DOT__SSS__DOT__nr__Q))) 
               << 0x0000000cU) | (((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__91__KET____DOT__SSS__DOT__nr__Q) 
                                     << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__90__KET____DOT__SSS__DOT__nr__Q) 
                                               << 2U)) 
                                   | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__89__KET____DOT__SSS__DOT__nr__Q) 
                                       << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__88__KET____DOT__SSS__DOT__nr__Q))) 
                                  << 8U)) | ((((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__87__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__86__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__85__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__84__KET____DOT__SSS__DOT__nr__Q))) 
                                              << 4U) 
                                             | ((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__83__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__82__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 2U)) 
                                                | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__81__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__80__KET____DOT__SSS__DOT__nr__Q))))) 
            << 0x00000010U) | (((((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__79__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__78__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__77__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__76__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 0x0000000cU) | 
                                (((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__75__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__74__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__73__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__72__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 8U)) | ((((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__71__KET____DOT__SSS__DOT__nr__Q) 
                                                << 3U) 
                                               | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__70__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 2U)) 
                                              | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__69__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__68__KET____DOT__SSS__DOT__nr__Q))) 
                                             << 4U) 
                                            | ((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__67__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__66__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__65__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__64__KET____DOT__SSS__DOT__nr__Q))))));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__mbist_Do_r0_int_net[3U] 
        = (0x000fffffU & (((((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__115__KET____DOT__SSS__DOT__nr__Q) 
                               << 4U) | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__114__KET____DOT__SSS__DOT__nr__Q) 
                                          << 3U) | 
                                         ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__113__KET____DOT__SSS__DOT__nr__Q) 
                                          << 2U))) 
                             | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__112__KET____DOT__SSS__DOT__nr__Q) 
                                 << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__111__KET____DOT__SSS__DOT__nr__Q))) 
                            << 0x0000000fU) | (((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__110__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 4U) 
                                                 | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__109__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 3U) 
                                                    | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__108__KET____DOT__SSS__DOT__nr__Q) 
                                                       << 2U))) 
                                                | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__107__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__106__KET____DOT__SSS__DOT__nr__Q))) 
                                               << 0x0000000aU)) 
                          | ((((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__105__KET____DOT__SSS__DOT__nr__Q) 
                                 << 4U) | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__104__KET____DOT__SSS__DOT__nr__Q) 
                                            << 3U) 
                                           | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__103__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U))) 
                               | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__102__KET____DOT__SSS__DOT__nr__Q) 
                                   << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__101__KET____DOT__SSS__DOT__nr__Q))) 
                              << 5U) | ((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__100__KET____DOT__SSS__DOT__nr__Q) 
                                          << 4U) | 
                                         (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__99__KET____DOT__SSS__DOT__nr__Q) 
                                           << 3U) | 
                                          ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__98__KET____DOT__SSS__DOT__nr__Q) 
                                           << 2U))) 
                                        | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__97__KET____DOT__SSS__DOT__nr__Q) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__96__KET____DOT__SSS__DOT__nr__Q))))));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__access_en_r 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__re_q));
    if (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) {
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__D_Ra_reg_r0 
                = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__pre_Ra_reg_r0;
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Wa_w0 
                = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__pre_Wa_reg_w0;
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[0U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__mbist_Do_r0_int_net[0U];
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[1U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__mbist_Do_r0_int_net[1U];
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[2U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__mbist_Do_r0_int_net[2U];
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[3U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__mbist_Do_r0_int_net[3U];
        } else {
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__D_Ra_reg_r0 = 0U;
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Wa_w0 = 0U;
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[0U] = 0U;
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[1U] = 0U;
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[2U] = 0U;
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[3U] = 0U;
        }
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__D_Ra_reg_r0 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__sub_lbuf_dout_cnt;
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Wa_w0 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_waddr_0;
        if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__fp16_mean_pool_cfg) {
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[0U] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__fp_mem3_wdata[0U];
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[1U] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__fp_mem3_wdata[1U];
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[2U] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__fp_mem3_wdata[2U];
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[3U] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__fp_mem3_wdata[3U];
        } else {
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[0U] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__int_mem_wdata_3[0U];
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[1U] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__int_mem_wdata_3[1U];
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[2U] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__int_mem_wdata_3[2U];
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[3U] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__int_mem_wdata_3[3U];
        }
    }
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__RA 
        = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__D_Ra_reg_r0;
    if (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
          ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__re_q)
          : (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0))) {
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[0U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__dout[0U];
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[1U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__dout[1U];
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[2U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__dout[2U];
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[3U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__dout[3U];
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[0U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[0U];
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[1U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[1U];
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[2U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[2U];
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[3U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[3U];
    }
}

VL_ATTR_COLD void Vsim_nv_ram_rws_64x116___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank3_uram_0__1(Vsim_nv_ram_rws_64x116* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_64x116___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank3_uram_0__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__core_din_format_switch_0.nvdla_core_clk) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__core_din_format_switch_0.nvdla_core_clk) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__CLK_GATE_clk__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__testInst_Ra_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__core_din_format_switch_0.nvdla_core_clk) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__core_din_format_switch_0.nvdla_core_clk) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__latffclk 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__core_din_format_switch_0.nvdla_core_clk) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__re = 
        (1U & (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_re) 
                | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_re_last)) 
               >> 3U));
    if (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_we_w0 
            = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
                     & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                        && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__posedge_updateDR_sync) 
                            & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__we_q)))));
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_re_r0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__access_en_r)));
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_we_w0 
            = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_we) 
                     >> 3U));
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_re_r0 
            = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__re;
    }
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__WRDCLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__WE_LATB)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__RECLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__RE_LATB)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__WECLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__latffclk)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__WE_FF));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__rmuxd0[0U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000003fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__RADR))][0U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__rmuxd0[1U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000003fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__RADR))][1U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__rmuxd0[2U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000003fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__RADR))][2U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__rmuxd0[3U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000003fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__RADR))][3U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__WrClk0 
        = ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__WECLK) 
                & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__WAFF) 
                   >> 6U)) | ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__WECLK)) 
                              & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__RADR) 
                                 >> 6U)))) & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__WECLK));
}

VL_ATTR_COLD void Vsim_nv_ram_rws_64x116___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank4_uram_0__0(Vsim_nv_ram_rws_64x116* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_64x116___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank4_uram_0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__pre_Wa_reg_w0 
        = ((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
             << 5U) | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                        << 4U) | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                  << 3U))) | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                               << 2U) 
                                              | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q))));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__pre_Ra_reg_r0 
        = ((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
             << 5U) | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                        << 4U) | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                  << 3U))) | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                               << 2U) 
                                              | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q))));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__posedge_updateDR_sync 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__updateDR_sync_1p)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__UJ_la_bist_clkw0_gate__DOT__E 
        = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0;
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__mbist_Do_r0_int_net[0U] 
        = (((((((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__31__KET____DOT__SSS__DOT__nr__Q) 
                  << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__30__KET____DOT__SSS__DOT__nr__Q) 
                            << 2U)) | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__29__KET____DOT__SSS__DOT__nr__Q) 
                                        << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__28__KET____DOT__SSS__DOT__nr__Q))) 
               << 0x0000000cU) | (((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__27__KET____DOT__SSS__DOT__nr__Q) 
                                     << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__26__KET____DOT__SSS__DOT__nr__Q) 
                                               << 2U)) 
                                   | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__25__KET____DOT__SSS__DOT__nr__Q) 
                                       << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__24__KET____DOT__SSS__DOT__nr__Q))) 
                                  << 8U)) | ((((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__23__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__22__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__21__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__20__KET____DOT__SSS__DOT__nr__Q))) 
                                              << 4U) 
                                             | ((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__19__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__18__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 2U)) 
                                                | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__17__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__16__KET____DOT__SSS__DOT__nr__Q))))) 
            << 0x00000010U) | (((((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__15__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__14__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__13__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__12__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 0x0000000cU) | 
                                (((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__11__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__10__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__9__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__8__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 8U)) | ((((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                                << 3U) 
                                               | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 2U)) 
                                              | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q))) 
                                             << 4U) 
                                            | ((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q))))));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__mbist_Do_r0_int_net[1U] 
        = (((((((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__63__KET____DOT__SSS__DOT__nr__Q) 
                  << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__62__KET____DOT__SSS__DOT__nr__Q) 
                            << 2U)) | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__61__KET____DOT__SSS__DOT__nr__Q) 
                                        << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__60__KET____DOT__SSS__DOT__nr__Q))) 
               << 0x0000000cU) | (((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__59__KET____DOT__SSS__DOT__nr__Q) 
                                     << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__58__KET____DOT__SSS__DOT__nr__Q) 
                                               << 2U)) 
                                   | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__57__KET____DOT__SSS__DOT__nr__Q) 
                                       << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__56__KET____DOT__SSS__DOT__nr__Q))) 
                                  << 8U)) | ((((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__55__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__54__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__53__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__52__KET____DOT__SSS__DOT__nr__Q))) 
                                              << 4U) 
                                             | ((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__51__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__50__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 2U)) 
                                                | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__49__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__48__KET____DOT__SSS__DOT__nr__Q))))) 
            << 0x00000010U) | (((((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__47__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__46__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__45__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__44__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 0x0000000cU) | 
                                (((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__43__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__42__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__41__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__40__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 8U)) | ((((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__39__KET____DOT__SSS__DOT__nr__Q) 
                                                << 3U) 
                                               | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__38__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 2U)) 
                                              | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__37__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__36__KET____DOT__SSS__DOT__nr__Q))) 
                                             << 4U) 
                                            | ((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__35__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__34__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__33__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__32__KET____DOT__SSS__DOT__nr__Q))))));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__mbist_Do_r0_int_net[2U] 
        = (((((((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__95__KET____DOT__SSS__DOT__nr__Q) 
                  << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__94__KET____DOT__SSS__DOT__nr__Q) 
                            << 2U)) | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__93__KET____DOT__SSS__DOT__nr__Q) 
                                        << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__92__KET____DOT__SSS__DOT__nr__Q))) 
               << 0x0000000cU) | (((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__91__KET____DOT__SSS__DOT__nr__Q) 
                                     << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__90__KET____DOT__SSS__DOT__nr__Q) 
                                               << 2U)) 
                                   | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__89__KET____DOT__SSS__DOT__nr__Q) 
                                       << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__88__KET____DOT__SSS__DOT__nr__Q))) 
                                  << 8U)) | ((((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__87__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__86__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__85__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__84__KET____DOT__SSS__DOT__nr__Q))) 
                                              << 4U) 
                                             | ((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__83__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__82__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 2U)) 
                                                | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__81__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__80__KET____DOT__SSS__DOT__nr__Q))))) 
            << 0x00000010U) | (((((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__79__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__78__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__77__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__76__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 0x0000000cU) | 
                                (((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__75__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__74__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__73__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__72__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 8U)) | ((((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__71__KET____DOT__SSS__DOT__nr__Q) 
                                                << 3U) 
                                               | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__70__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 2U)) 
                                              | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__69__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__68__KET____DOT__SSS__DOT__nr__Q))) 
                                             << 4U) 
                                            | ((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__67__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__66__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__65__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__64__KET____DOT__SSS__DOT__nr__Q))))));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__mbist_Do_r0_int_net[3U] 
        = (0x000fffffU & (((((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__115__KET____DOT__SSS__DOT__nr__Q) 
                               << 4U) | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__114__KET____DOT__SSS__DOT__nr__Q) 
                                          << 3U) | 
                                         ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__113__KET____DOT__SSS__DOT__nr__Q) 
                                          << 2U))) 
                             | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__112__KET____DOT__SSS__DOT__nr__Q) 
                                 << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__111__KET____DOT__SSS__DOT__nr__Q))) 
                            << 0x0000000fU) | (((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__110__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 4U) 
                                                 | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__109__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 3U) 
                                                    | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__108__KET____DOT__SSS__DOT__nr__Q) 
                                                       << 2U))) 
                                                | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__107__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__106__KET____DOT__SSS__DOT__nr__Q))) 
                                               << 0x0000000aU)) 
                          | ((((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__105__KET____DOT__SSS__DOT__nr__Q) 
                                 << 4U) | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__104__KET____DOT__SSS__DOT__nr__Q) 
                                            << 3U) 
                                           | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__103__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U))) 
                               | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__102__KET____DOT__SSS__DOT__nr__Q) 
                                   << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__101__KET____DOT__SSS__DOT__nr__Q))) 
                              << 5U) | ((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__100__KET____DOT__SSS__DOT__nr__Q) 
                                          << 4U) | 
                                         (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__99__KET____DOT__SSS__DOT__nr__Q) 
                                           << 3U) | 
                                          ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__98__KET____DOT__SSS__DOT__nr__Q) 
                                           << 2U))) 
                                        | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__97__KET____DOT__SSS__DOT__nr__Q) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__96__KET____DOT__SSS__DOT__nr__Q))))));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__access_en_r 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__re_q));
    if (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) {
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__D_Ra_reg_r0 
                = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__pre_Ra_reg_r0;
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Wa_w0 
                = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__pre_Wa_reg_w0;
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[0U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__mbist_Do_r0_int_net[0U];
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[1U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__mbist_Do_r0_int_net[1U];
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[2U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__mbist_Do_r0_int_net[2U];
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[3U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__mbist_Do_r0_int_net[3U];
        } else {
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__D_Ra_reg_r0 = 0U;
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Wa_w0 = 0U;
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[0U] = 0U;
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[1U] = 0U;
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[2U] = 0U;
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[3U] = 0U;
        }
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__D_Ra_reg_r0 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__sub_lbuf_dout_cnt;
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Wa_w0 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_waddr_0;
        if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__fp16_mean_pool_cfg) {
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[0U] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__fp_mem4_wdata[0U];
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[1U] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__fp_mem4_wdata[1U];
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[2U] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__fp_mem4_wdata[2U];
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[3U] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__fp_mem4_wdata[3U];
        } else {
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[0U] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__int_mem_wdata_4[0U];
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[1U] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__int_mem_wdata_4[1U];
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[2U] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__int_mem_wdata_4[2U];
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[3U] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__int_mem_wdata_4[3U];
        }
    }
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__RA 
        = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__D_Ra_reg_r0;
    if (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
          ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__re_q)
          : (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0))) {
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[0U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__dout[0U];
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[1U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__dout[1U];
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[2U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__dout[2U];
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[3U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__dout[3U];
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[0U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[0U];
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[1U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[1U];
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[2U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[2U];
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[3U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[3U];
    }
}

VL_ATTR_COLD void Vsim_nv_ram_rws_64x116___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank4_uram_0__1(Vsim_nv_ram_rws_64x116* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_64x116___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank4_uram_0__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__core_din_format_switch_0.nvdla_core_clk) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__core_din_format_switch_0.nvdla_core_clk) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__CLK_GATE_clk__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__testInst_Ra_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__core_din_format_switch_0.nvdla_core_clk) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__core_din_format_switch_0.nvdla_core_clk) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__latffclk 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__core_din_format_switch_0.nvdla_core_clk) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__re = 
        (1U & (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_re) 
                | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_re_last)) 
               >> 4U));
    if (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_we_w0 
            = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
                     & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                        && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__posedge_updateDR_sync) 
                            & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__we_q)))));
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_re_r0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__access_en_r)));
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_we_w0 
            = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_we) 
                     >> 4U));
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_re_r0 
            = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__re;
    }
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__WRDCLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__WE_LATB)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__RECLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__RE_LATB)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__WECLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__latffclk)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__WE_FF));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__rmuxd0[0U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000003fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__RADR))][0U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__rmuxd0[1U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000003fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__RADR))][1U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__rmuxd0[2U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000003fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__RADR))][2U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__rmuxd0[3U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000003fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__RADR))][3U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__WrClk0 
        = ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__WECLK) 
                & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__WAFF) 
                   >> 6U)) | ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__WECLK)) 
                              & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__RADR) 
                                 >> 6U)))) & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__WECLK));
}

VL_ATTR_COLD void Vsim_nv_ram_rws_64x116___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank5_uram_0__0(Vsim_nv_ram_rws_64x116* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_64x116___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank5_uram_0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__pre_Wa_reg_w0 
        = ((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
             << 5U) | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                        << 4U) | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                  << 3U))) | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                               << 2U) 
                                              | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q))));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__pre_Ra_reg_r0 
        = ((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
             << 5U) | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                        << 4U) | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                  << 3U))) | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                               << 2U) 
                                              | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q))));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__posedge_updateDR_sync 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__updateDR_sync_1p)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__UJ_la_bist_clkw0_gate__DOT__E 
        = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0;
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__mbist_Do_r0_int_net[0U] 
        = (((((((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__31__KET____DOT__SSS__DOT__nr__Q) 
                  << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__30__KET____DOT__SSS__DOT__nr__Q) 
                            << 2U)) | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__29__KET____DOT__SSS__DOT__nr__Q) 
                                        << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__28__KET____DOT__SSS__DOT__nr__Q))) 
               << 0x0000000cU) | (((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__27__KET____DOT__SSS__DOT__nr__Q) 
                                     << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__26__KET____DOT__SSS__DOT__nr__Q) 
                                               << 2U)) 
                                   | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__25__KET____DOT__SSS__DOT__nr__Q) 
                                       << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__24__KET____DOT__SSS__DOT__nr__Q))) 
                                  << 8U)) | ((((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__23__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__22__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__21__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__20__KET____DOT__SSS__DOT__nr__Q))) 
                                              << 4U) 
                                             | ((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__19__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__18__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 2U)) 
                                                | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__17__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__16__KET____DOT__SSS__DOT__nr__Q))))) 
            << 0x00000010U) | (((((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__15__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__14__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__13__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__12__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 0x0000000cU) | 
                                (((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__11__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__10__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__9__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__8__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 8U)) | ((((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                                << 3U) 
                                               | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 2U)) 
                                              | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q))) 
                                             << 4U) 
                                            | ((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q))))));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__mbist_Do_r0_int_net[1U] 
        = (((((((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__63__KET____DOT__SSS__DOT__nr__Q) 
                  << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__62__KET____DOT__SSS__DOT__nr__Q) 
                            << 2U)) | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__61__KET____DOT__SSS__DOT__nr__Q) 
                                        << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__60__KET____DOT__SSS__DOT__nr__Q))) 
               << 0x0000000cU) | (((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__59__KET____DOT__SSS__DOT__nr__Q) 
                                     << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__58__KET____DOT__SSS__DOT__nr__Q) 
                                               << 2U)) 
                                   | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__57__KET____DOT__SSS__DOT__nr__Q) 
                                       << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__56__KET____DOT__SSS__DOT__nr__Q))) 
                                  << 8U)) | ((((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__55__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__54__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__53__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__52__KET____DOT__SSS__DOT__nr__Q))) 
                                              << 4U) 
                                             | ((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__51__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__50__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 2U)) 
                                                | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__49__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__48__KET____DOT__SSS__DOT__nr__Q))))) 
            << 0x00000010U) | (((((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__47__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__46__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__45__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__44__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 0x0000000cU) | 
                                (((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__43__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__42__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__41__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__40__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 8U)) | ((((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__39__KET____DOT__SSS__DOT__nr__Q) 
                                                << 3U) 
                                               | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__38__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 2U)) 
                                              | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__37__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__36__KET____DOT__SSS__DOT__nr__Q))) 
                                             << 4U) 
                                            | ((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__35__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__34__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__33__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__32__KET____DOT__SSS__DOT__nr__Q))))));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__mbist_Do_r0_int_net[2U] 
        = (((((((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__95__KET____DOT__SSS__DOT__nr__Q) 
                  << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__94__KET____DOT__SSS__DOT__nr__Q) 
                            << 2U)) | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__93__KET____DOT__SSS__DOT__nr__Q) 
                                        << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__92__KET____DOT__SSS__DOT__nr__Q))) 
               << 0x0000000cU) | (((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__91__KET____DOT__SSS__DOT__nr__Q) 
                                     << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__90__KET____DOT__SSS__DOT__nr__Q) 
                                               << 2U)) 
                                   | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__89__KET____DOT__SSS__DOT__nr__Q) 
                                       << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__88__KET____DOT__SSS__DOT__nr__Q))) 
                                  << 8U)) | ((((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__87__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__86__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__85__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__84__KET____DOT__SSS__DOT__nr__Q))) 
                                              << 4U) 
                                             | ((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__83__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__82__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 2U)) 
                                                | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__81__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__80__KET____DOT__SSS__DOT__nr__Q))))) 
            << 0x00000010U) | (((((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__79__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__78__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__77__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__76__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 0x0000000cU) | 
                                (((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__75__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__74__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__73__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__72__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 8U)) | ((((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__71__KET____DOT__SSS__DOT__nr__Q) 
                                                << 3U) 
                                               | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__70__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 2U)) 
                                              | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__69__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__68__KET____DOT__SSS__DOT__nr__Q))) 
                                             << 4U) 
                                            | ((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__67__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__66__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__65__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__64__KET____DOT__SSS__DOT__nr__Q))))));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__mbist_Do_r0_int_net[3U] 
        = (0x000fffffU & (((((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__115__KET____DOT__SSS__DOT__nr__Q) 
                               << 4U) | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__114__KET____DOT__SSS__DOT__nr__Q) 
                                          << 3U) | 
                                         ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__113__KET____DOT__SSS__DOT__nr__Q) 
                                          << 2U))) 
                             | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__112__KET____DOT__SSS__DOT__nr__Q) 
                                 << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__111__KET____DOT__SSS__DOT__nr__Q))) 
                            << 0x0000000fU) | (((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__110__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 4U) 
                                                 | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__109__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 3U) 
                                                    | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__108__KET____DOT__SSS__DOT__nr__Q) 
                                                       << 2U))) 
                                                | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__107__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__106__KET____DOT__SSS__DOT__nr__Q))) 
                                               << 0x0000000aU)) 
                          | ((((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__105__KET____DOT__SSS__DOT__nr__Q) 
                                 << 4U) | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__104__KET____DOT__SSS__DOT__nr__Q) 
                                            << 3U) 
                                           | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__103__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U))) 
                               | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__102__KET____DOT__SSS__DOT__nr__Q) 
                                   << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__101__KET____DOT__SSS__DOT__nr__Q))) 
                              << 5U) | ((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__100__KET____DOT__SSS__DOT__nr__Q) 
                                          << 4U) | 
                                         (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__99__KET____DOT__SSS__DOT__nr__Q) 
                                           << 3U) | 
                                          ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__98__KET____DOT__SSS__DOT__nr__Q) 
                                           << 2U))) 
                                        | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__97__KET____DOT__SSS__DOT__nr__Q) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__96__KET____DOT__SSS__DOT__nr__Q))))));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__access_en_r 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__re_q));
    if (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) {
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__D_Ra_reg_r0 
                = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__pre_Ra_reg_r0;
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Wa_w0 
                = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__pre_Wa_reg_w0;
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[0U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__mbist_Do_r0_int_net[0U];
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[1U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__mbist_Do_r0_int_net[1U];
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[2U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__mbist_Do_r0_int_net[2U];
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[3U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__mbist_Do_r0_int_net[3U];
        } else {
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__D_Ra_reg_r0 = 0U;
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Wa_w0 = 0U;
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[0U] = 0U;
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[1U] = 0U;
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[2U] = 0U;
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[3U] = 0U;
        }
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__D_Ra_reg_r0 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__sub_lbuf_dout_cnt;
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Wa_w0 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_waddr_0;
        if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__fp16_mean_pool_cfg) {
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[0U] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__fp_mem5_wdata[0U];
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[1U] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__fp_mem5_wdata[1U];
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[2U] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__fp_mem5_wdata[2U];
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[3U] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__fp_mem5_wdata[3U];
        } else {
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[0U] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__int_mem_wdata_5[0U];
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[1U] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__int_mem_wdata_5[1U];
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[2U] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__int_mem_wdata_5[2U];
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[3U] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__int_mem_wdata_5[3U];
        }
    }
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__RA 
        = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__D_Ra_reg_r0;
    if (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
          ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__re_q)
          : (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0))) {
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[0U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__dout[0U];
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[1U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__dout[1U];
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[2U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__dout[2U];
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[3U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__dout[3U];
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[0U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[0U];
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[1U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[1U];
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[2U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[2U];
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[3U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[3U];
    }
}

VL_ATTR_COLD void Vsim_nv_ram_rws_64x116___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank5_uram_0__1(Vsim_nv_ram_rws_64x116* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_64x116___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank5_uram_0__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__core_din_format_switch_0.nvdla_core_clk) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__core_din_format_switch_0.nvdla_core_clk) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__CLK_GATE_clk__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__testInst_Ra_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__core_din_format_switch_0.nvdla_core_clk) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__core_din_format_switch_0.nvdla_core_clk) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__latffclk 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__core_din_format_switch_0.nvdla_core_clk) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__re = 
        (1U & (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_re) 
                | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_re_last)) 
               >> 5U));
    if (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_we_w0 
            = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
                     & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                        && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__posedge_updateDR_sync) 
                            & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__we_q)))));
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_re_r0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__access_en_r)));
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_we_w0 
            = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_we) 
                     >> 5U));
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_re_r0 
            = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__re;
    }
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__WRDCLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__WE_LATB)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__RECLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__RE_LATB)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__WECLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__latffclk)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__WE_FF));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__rmuxd0[0U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000003fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__RADR))][0U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__rmuxd0[1U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000003fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__RADR))][1U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__rmuxd0[2U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000003fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__RADR))][2U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__rmuxd0[3U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000003fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__RADR))][3U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__WrClk0 
        = ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__WECLK) 
                & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__WAFF) 
                   >> 6U)) | ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__WECLK)) 
                              & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__RADR) 
                                 >> 6U)))) & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__WECLK));
}

VL_ATTR_COLD void Vsim_nv_ram_rws_64x116___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank6_uram_0__0(Vsim_nv_ram_rws_64x116* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_64x116___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank6_uram_0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__pre_Wa_reg_w0 
        = ((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
             << 5U) | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                        << 4U) | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                  << 3U))) | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                               << 2U) 
                                              | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q))));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__pre_Ra_reg_r0 
        = ((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
             << 5U) | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                        << 4U) | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                  << 3U))) | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                               << 2U) 
                                              | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q))));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__posedge_updateDR_sync 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__updateDR_sync_1p)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__UJ_la_bist_clkw0_gate__DOT__E 
        = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0;
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__mbist_Do_r0_int_net[0U] 
        = (((((((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__31__KET____DOT__SSS__DOT__nr__Q) 
                  << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__30__KET____DOT__SSS__DOT__nr__Q) 
                            << 2U)) | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__29__KET____DOT__SSS__DOT__nr__Q) 
                                        << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__28__KET____DOT__SSS__DOT__nr__Q))) 
               << 0x0000000cU) | (((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__27__KET____DOT__SSS__DOT__nr__Q) 
                                     << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__26__KET____DOT__SSS__DOT__nr__Q) 
                                               << 2U)) 
                                   | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__25__KET____DOT__SSS__DOT__nr__Q) 
                                       << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__24__KET____DOT__SSS__DOT__nr__Q))) 
                                  << 8U)) | ((((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__23__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__22__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__21__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__20__KET____DOT__SSS__DOT__nr__Q))) 
                                              << 4U) 
                                             | ((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__19__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__18__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 2U)) 
                                                | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__17__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__16__KET____DOT__SSS__DOT__nr__Q))))) 
            << 0x00000010U) | (((((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__15__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__14__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__13__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__12__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 0x0000000cU) | 
                                (((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__11__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__10__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__9__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__8__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 8U)) | ((((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                                << 3U) 
                                               | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 2U)) 
                                              | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q))) 
                                             << 4U) 
                                            | ((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q))))));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__mbist_Do_r0_int_net[1U] 
        = (((((((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__63__KET____DOT__SSS__DOT__nr__Q) 
                  << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__62__KET____DOT__SSS__DOT__nr__Q) 
                            << 2U)) | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__61__KET____DOT__SSS__DOT__nr__Q) 
                                        << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__60__KET____DOT__SSS__DOT__nr__Q))) 
               << 0x0000000cU) | (((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__59__KET____DOT__SSS__DOT__nr__Q) 
                                     << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__58__KET____DOT__SSS__DOT__nr__Q) 
                                               << 2U)) 
                                   | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__57__KET____DOT__SSS__DOT__nr__Q) 
                                       << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__56__KET____DOT__SSS__DOT__nr__Q))) 
                                  << 8U)) | ((((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__55__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__54__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__53__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__52__KET____DOT__SSS__DOT__nr__Q))) 
                                              << 4U) 
                                             | ((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__51__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__50__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 2U)) 
                                                | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__49__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__48__KET____DOT__SSS__DOT__nr__Q))))) 
            << 0x00000010U) | (((((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__47__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__46__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__45__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__44__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 0x0000000cU) | 
                                (((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__43__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__42__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__41__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__40__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 8U)) | ((((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__39__KET____DOT__SSS__DOT__nr__Q) 
                                                << 3U) 
                                               | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__38__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 2U)) 
                                              | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__37__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__36__KET____DOT__SSS__DOT__nr__Q))) 
                                             << 4U) 
                                            | ((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__35__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__34__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__33__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__32__KET____DOT__SSS__DOT__nr__Q))))));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__mbist_Do_r0_int_net[2U] 
        = (((((((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__95__KET____DOT__SSS__DOT__nr__Q) 
                  << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__94__KET____DOT__SSS__DOT__nr__Q) 
                            << 2U)) | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__93__KET____DOT__SSS__DOT__nr__Q) 
                                        << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__92__KET____DOT__SSS__DOT__nr__Q))) 
               << 0x0000000cU) | (((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__91__KET____DOT__SSS__DOT__nr__Q) 
                                     << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__90__KET____DOT__SSS__DOT__nr__Q) 
                                               << 2U)) 
                                   | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__89__KET____DOT__SSS__DOT__nr__Q) 
                                       << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__88__KET____DOT__SSS__DOT__nr__Q))) 
                                  << 8U)) | ((((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__87__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__86__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__85__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__84__KET____DOT__SSS__DOT__nr__Q))) 
                                              << 4U) 
                                             | ((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__83__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__82__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 2U)) 
                                                | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__81__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__80__KET____DOT__SSS__DOT__nr__Q))))) 
            << 0x00000010U) | (((((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__79__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__78__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__77__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__76__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 0x0000000cU) | 
                                (((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__75__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__74__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__73__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__72__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 8U)) | ((((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__71__KET____DOT__SSS__DOT__nr__Q) 
                                                << 3U) 
                                               | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__70__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 2U)) 
                                              | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__69__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__68__KET____DOT__SSS__DOT__nr__Q))) 
                                             << 4U) 
                                            | ((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__67__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__66__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__65__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__64__KET____DOT__SSS__DOT__nr__Q))))));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__mbist_Do_r0_int_net[3U] 
        = (0x000fffffU & (((((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__115__KET____DOT__SSS__DOT__nr__Q) 
                               << 4U) | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__114__KET____DOT__SSS__DOT__nr__Q) 
                                          << 3U) | 
                                         ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__113__KET____DOT__SSS__DOT__nr__Q) 
                                          << 2U))) 
                             | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__112__KET____DOT__SSS__DOT__nr__Q) 
                                 << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__111__KET____DOT__SSS__DOT__nr__Q))) 
                            << 0x0000000fU) | (((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__110__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 4U) 
                                                 | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__109__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 3U) 
                                                    | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__108__KET____DOT__SSS__DOT__nr__Q) 
                                                       << 2U))) 
                                                | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__107__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__106__KET____DOT__SSS__DOT__nr__Q))) 
                                               << 0x0000000aU)) 
                          | ((((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__105__KET____DOT__SSS__DOT__nr__Q) 
                                 << 4U) | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__104__KET____DOT__SSS__DOT__nr__Q) 
                                            << 3U) 
                                           | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__103__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U))) 
                               | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__102__KET____DOT__SSS__DOT__nr__Q) 
                                   << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__101__KET____DOT__SSS__DOT__nr__Q))) 
                              << 5U) | ((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__100__KET____DOT__SSS__DOT__nr__Q) 
                                          << 4U) | 
                                         (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__99__KET____DOT__SSS__DOT__nr__Q) 
                                           << 3U) | 
                                          ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__98__KET____DOT__SSS__DOT__nr__Q) 
                                           << 2U))) 
                                        | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__97__KET____DOT__SSS__DOT__nr__Q) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__96__KET____DOT__SSS__DOT__nr__Q))))));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__access_en_r 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__re_q));
    if (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) {
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__D_Ra_reg_r0 
                = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__pre_Ra_reg_r0;
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Wa_w0 
                = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__pre_Wa_reg_w0;
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[0U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__mbist_Do_r0_int_net[0U];
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[1U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__mbist_Do_r0_int_net[1U];
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[2U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__mbist_Do_r0_int_net[2U];
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[3U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__mbist_Do_r0_int_net[3U];
        } else {
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__D_Ra_reg_r0 = 0U;
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Wa_w0 = 0U;
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[0U] = 0U;
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[1U] = 0U;
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[2U] = 0U;
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[3U] = 0U;
        }
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__D_Ra_reg_r0 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__sub_lbuf_dout_cnt;
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Wa_w0 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_waddr_0;
        if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__fp16_mean_pool_cfg) {
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[0U] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__fp_mem6_wdata[0U];
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[1U] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__fp_mem6_wdata[1U];
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[2U] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__fp_mem6_wdata[2U];
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[3U] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__fp_mem6_wdata[3U];
        } else {
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[0U] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__int_mem_wdata_6[0U];
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[1U] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__int_mem_wdata_6[1U];
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[2U] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__int_mem_wdata_6[2U];
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[3U] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__int_mem_wdata_6[3U];
        }
    }
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__RA 
        = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__D_Ra_reg_r0;
    if (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
          ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__re_q)
          : (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0))) {
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[0U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__dout[0U];
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[1U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__dout[1U];
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[2U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__dout[2U];
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[3U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__dout[3U];
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[0U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[0U];
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[1U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[1U];
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[2U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[2U];
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[3U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[3U];
    }
}

VL_ATTR_COLD void Vsim_nv_ram_rws_64x116___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank6_uram_0__1(Vsim_nv_ram_rws_64x116* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_64x116___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank6_uram_0__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__core_din_format_switch_0.nvdla_core_clk) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__core_din_format_switch_0.nvdla_core_clk) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__CLK_GATE_clk__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__testInst_Ra_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__core_din_format_switch_0.nvdla_core_clk) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__core_din_format_switch_0.nvdla_core_clk) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__latffclk 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__core_din_format_switch_0.nvdla_core_clk) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__re = 
        (1U & (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_re) 
                | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_re_last)) 
               >> 6U));
    if (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_we_w0 
            = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
                     & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                        && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__posedge_updateDR_sync) 
                            & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__we_q)))));
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_re_r0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__access_en_r)));
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_we_w0 
            = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_we) 
                     >> 6U));
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_re_r0 
            = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__re;
    }
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__WRDCLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__WE_LATB)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__RECLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__RE_LATB)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__WECLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__latffclk)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__WE_FF));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__rmuxd0[0U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000003fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__RADR))][0U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__rmuxd0[1U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000003fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__RADR))][1U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__rmuxd0[2U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000003fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__RADR))][2U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__rmuxd0[3U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000003fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__RADR))][3U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__WrClk0 
        = ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__WECLK) 
                & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__WAFF) 
                   >> 6U)) | ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__WECLK)) 
                              & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__RADR) 
                                 >> 6U)))) & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__WECLK));
}

VL_ATTR_COLD void Vsim_nv_ram_rws_64x116___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank7_uram_0__0(Vsim_nv_ram_rws_64x116* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_64x116___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank7_uram_0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__pre_Wa_reg_w0 
        = ((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
             << 5U) | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                        << 4U) | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                  << 3U))) | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                               << 2U) 
                                              | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q))));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__pre_Ra_reg_r0 
        = ((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
             << 5U) | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                        << 4U) | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                  << 3U))) | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                               << 2U) 
                                              | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q))));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__posedge_updateDR_sync 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__updateDR_sync_1p)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__UJ_la_bist_clkw0_gate__DOT__E 
        = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0;
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__mbist_Do_r0_int_net[0U] 
        = (((((((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__31__KET____DOT__SSS__DOT__nr__Q) 
                  << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__30__KET____DOT__SSS__DOT__nr__Q) 
                            << 2U)) | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__29__KET____DOT__SSS__DOT__nr__Q) 
                                        << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__28__KET____DOT__SSS__DOT__nr__Q))) 
               << 0x0000000cU) | (((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__27__KET____DOT__SSS__DOT__nr__Q) 
                                     << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__26__KET____DOT__SSS__DOT__nr__Q) 
                                               << 2U)) 
                                   | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__25__KET____DOT__SSS__DOT__nr__Q) 
                                       << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__24__KET____DOT__SSS__DOT__nr__Q))) 
                                  << 8U)) | ((((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__23__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__22__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__21__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__20__KET____DOT__SSS__DOT__nr__Q))) 
                                              << 4U) 
                                             | ((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__19__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__18__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 2U)) 
                                                | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__17__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__16__KET____DOT__SSS__DOT__nr__Q))))) 
            << 0x00000010U) | (((((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__15__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__14__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__13__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__12__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 0x0000000cU) | 
                                (((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__11__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__10__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__9__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__8__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 8U)) | ((((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                                << 3U) 
                                               | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 2U)) 
                                              | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q))) 
                                             << 4U) 
                                            | ((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q))))));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__mbist_Do_r0_int_net[1U] 
        = (((((((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__63__KET____DOT__SSS__DOT__nr__Q) 
                  << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__62__KET____DOT__SSS__DOT__nr__Q) 
                            << 2U)) | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__61__KET____DOT__SSS__DOT__nr__Q) 
                                        << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__60__KET____DOT__SSS__DOT__nr__Q))) 
               << 0x0000000cU) | (((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__59__KET____DOT__SSS__DOT__nr__Q) 
                                     << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__58__KET____DOT__SSS__DOT__nr__Q) 
                                               << 2U)) 
                                   | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__57__KET____DOT__SSS__DOT__nr__Q) 
                                       << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__56__KET____DOT__SSS__DOT__nr__Q))) 
                                  << 8U)) | ((((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__55__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__54__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__53__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__52__KET____DOT__SSS__DOT__nr__Q))) 
                                              << 4U) 
                                             | ((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__51__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__50__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 2U)) 
                                                | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__49__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__48__KET____DOT__SSS__DOT__nr__Q))))) 
            << 0x00000010U) | (((((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__47__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__46__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__45__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__44__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 0x0000000cU) | 
                                (((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__43__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__42__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__41__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__40__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 8U)) | ((((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__39__KET____DOT__SSS__DOT__nr__Q) 
                                                << 3U) 
                                               | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__38__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 2U)) 
                                              | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__37__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__36__KET____DOT__SSS__DOT__nr__Q))) 
                                             << 4U) 
                                            | ((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__35__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__34__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__33__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__32__KET____DOT__SSS__DOT__nr__Q))))));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__mbist_Do_r0_int_net[2U] 
        = (((((((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__95__KET____DOT__SSS__DOT__nr__Q) 
                  << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__94__KET____DOT__SSS__DOT__nr__Q) 
                            << 2U)) | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__93__KET____DOT__SSS__DOT__nr__Q) 
                                        << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__92__KET____DOT__SSS__DOT__nr__Q))) 
               << 0x0000000cU) | (((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__91__KET____DOT__SSS__DOT__nr__Q) 
                                     << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__90__KET____DOT__SSS__DOT__nr__Q) 
                                               << 2U)) 
                                   | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__89__KET____DOT__SSS__DOT__nr__Q) 
                                       << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__88__KET____DOT__SSS__DOT__nr__Q))) 
                                  << 8U)) | ((((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__87__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__86__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__85__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__84__KET____DOT__SSS__DOT__nr__Q))) 
                                              << 4U) 
                                             | ((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__83__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__82__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 2U)) 
                                                | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__81__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__80__KET____DOT__SSS__DOT__nr__Q))))) 
            << 0x00000010U) | (((((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__79__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__78__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__77__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__76__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 0x0000000cU) | 
                                (((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__75__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__74__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__73__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__72__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 8U)) | ((((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__71__KET____DOT__SSS__DOT__nr__Q) 
                                                << 3U) 
                                               | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__70__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 2U)) 
                                              | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__69__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__68__KET____DOT__SSS__DOT__nr__Q))) 
                                             << 4U) 
                                            | ((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__67__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__66__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__65__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__64__KET____DOT__SSS__DOT__nr__Q))))));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__mbist_Do_r0_int_net[3U] 
        = (0x000fffffU & (((((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__115__KET____DOT__SSS__DOT__nr__Q) 
                               << 4U) | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__114__KET____DOT__SSS__DOT__nr__Q) 
                                          << 3U) | 
                                         ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__113__KET____DOT__SSS__DOT__nr__Q) 
                                          << 2U))) 
                             | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__112__KET____DOT__SSS__DOT__nr__Q) 
                                 << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__111__KET____DOT__SSS__DOT__nr__Q))) 
                            << 0x0000000fU) | (((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__110__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 4U) 
                                                 | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__109__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 3U) 
                                                    | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__108__KET____DOT__SSS__DOT__nr__Q) 
                                                       << 2U))) 
                                                | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__107__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__106__KET____DOT__SSS__DOT__nr__Q))) 
                                               << 0x0000000aU)) 
                          | ((((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__105__KET____DOT__SSS__DOT__nr__Q) 
                                 << 4U) | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__104__KET____DOT__SSS__DOT__nr__Q) 
                                            << 3U) 
                                           | ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__103__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U))) 
                               | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__102__KET____DOT__SSS__DOT__nr__Q) 
                                   << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__101__KET____DOT__SSS__DOT__nr__Q))) 
                              << 5U) | ((((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__100__KET____DOT__SSS__DOT__nr__Q) 
                                          << 4U) | 
                                         (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__99__KET____DOT__SSS__DOT__nr__Q) 
                                           << 3U) | 
                                          ((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__98__KET____DOT__SSS__DOT__nr__Q) 
                                           << 2U))) 
                                        | (((IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__97__KET____DOT__SSS__DOT__nr__Q) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__96__KET____DOT__SSS__DOT__nr__Q))))));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__access_en_r 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__re_q));
    if (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) {
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__D_Ra_reg_r0 
                = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__pre_Ra_reg_r0;
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Wa_w0 
                = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__pre_Wa_reg_w0;
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[0U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__mbist_Do_r0_int_net[0U];
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[1U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__mbist_Do_r0_int_net[1U];
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[2U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__mbist_Do_r0_int_net[2U];
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[3U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__mbist_Do_r0_int_net[3U];
        } else {
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__D_Ra_reg_r0 = 0U;
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Wa_w0 = 0U;
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[0U] = 0U;
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[1U] = 0U;
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[2U] = 0U;
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[3U] = 0U;
        }
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__D_Ra_reg_r0 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__sub_lbuf_dout_cnt;
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Wa_w0 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_waddr_0;
        if (vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__fp16_mean_pool_cfg) {
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[0U] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__fp_mem7_wdata[0U];
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[1U] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__fp_mem7_wdata[1U];
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[2U] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__fp_mem7_wdata[2U];
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[3U] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__fp_mem7_wdata[3U];
        } else {
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[0U] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__int_mem_wdata_7[0U];
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[1U] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__int_mem_wdata_7[1U];
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[2U] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__int_mem_wdata_7[2U];
            vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[3U] 
                = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__int_mem_wdata_7[3U];
        }
    }
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__RA 
        = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__D_Ra_reg_r0;
    if (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)
          ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__re_q)
          : (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0))) {
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[0U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__dout[0U];
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[1U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__dout[1U];
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[2U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__dout[2U];
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[3U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__dout[3U];
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[0U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[0U];
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[1U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[1U];
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[2U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[2U];
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0[3U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0[3U];
    }
}

VL_ATTR_COLD void Vsim_nv_ram_rws_64x116___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank7_uram_0__1(Vsim_nv_ram_rws_64x116* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_64x116___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank7_uram_0__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__core_din_format_switch_0.nvdla_core_clk) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__core_din_format_switch_0.nvdla_core_clk) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__CLK_GATE_clk__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__testInst_Ra_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__core_din_format_switch_0.nvdla_core_clk) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__core_din_format_switch_0.nvdla_core_clk) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__latffclk 
        = ((IData)(vlSymsp->TOP__tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal1d__DOT__core_din_format_switch_0.nvdla_core_clk) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__re = 
        (1U & (((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_re) 
                | (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_re_last)) 
               >> 7U));
    if (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_we_w0 
            = (1U & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
                     & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                        && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__posedge_updateDR_sync) 
                            & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__we_q)))));
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_re_r0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__access_en_r)));
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_we_w0 
            = (1U & ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__mem_we) 
                     >> 7U));
        vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__muxed_re_r0 
            = vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__re;
    }
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__WRDCLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__WE_LATB)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__RECLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__RE_LATB)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__latffclk));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__WECLK 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__latffclk)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__WE_FF));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__rmuxd0[0U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000003fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__RADR))][0U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__rmuxd0[1U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000003fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__RADR))][1U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__rmuxd0[2U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000003fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__RADR))][2U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__rmuxd0[3U] 
        = (vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__iow0__DOT__arr
           [(0x0000003fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__RADR))][3U] 
           & (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__RECLK))));
    vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__WrClk0 
        = ((~ (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__WECLK) 
                & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__WAFF) 
                   >> 6U)) | ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__WECLK)) 
                              & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__RADR) 
                                 >> 6U)))) & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__WECLK));
}

VL_ATTR_COLD void Vsim_nv_ram_rws_64x116___ctor_var_reset(Vsim_nv_ram_rws_64x116* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_nv_ram_rws_64x116___ctor_var_reset\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->ra = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 397185324164439704ull);
    vlSelf->re = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9839690450034771972ull);
    VL_SCOPED_RAND_RESET_W(116, vlSelf->dout, __VscopeHash, 11474705599699299244ull);
    vlSelf->wa = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 15817334002654144152ull);
    vlSelf->we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10105644630884274164ull);
    VL_SCOPED_RAND_RESET_W(116, vlSelf->di, __VscopeHash, 15530784800990054812ull);
    vlSelf->pwrbus_ram_pd = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5219006355734432551ull);
    vlSelf->__PVT__SO_int_net = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17252655622214923015ull);
    vlSelf->__PVT__mbist_ramaccess_rst_ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4635875347747302704ull);
    VL_SCOPED_RAND_RESET_W(116, vlSelf->__PVT__r_nv_ram_rws_64x116__DOT__mbist_Do_r0_int_net, __VscopeHash, 1877881479079967575ull);
    vlSelf->__PVT__r_nv_ram_rws_64x116__DOT__re = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5418385879770884916ull);
    vlSelf->__PVT__r_nv_ram_rws_64x116__DOT__la_bist_clkw0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2091399973563907630ull);
    vlSelf->__PVT__r_nv_ram_rws_64x116__DOT__updateDR_sync_1p = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3380095166147918035ull);
    vlSelf->__PVT__r_nv_ram_rws_64x116__DOT__dft_rst_gated_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7125591271609568831ull);
    vlSelf->__PVT__r_nv_ram_rws_64x116__DOT__Ra_array_reg_r0 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 17478957316806945758ull);
    vlSelf->__PVT__r_nv_ram_rws_64x116__DOT__ctx_ctrl_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18243096058087008125ull);
    vlSelf->__PVT__r_nv_ram_rws_64x116__DOT__shiftDR_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11179640640578256762ull);
    VL_SCOPED_RAND_RESET_W(116, vlSelf->__PVT__r_nv_ram_rws_64x116__DOT__muxed_Di_w0, __VscopeHash, 17710425128253710458ull);
    vlSelf->__PVT__r_nv_ram_rws_64x116__DOT__posedge_updateDR_sync = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11859212611885363038ull);
    vlSelf->__PVT__r_nv_ram_rws_64x116__DOT__pre_Wa_reg_w0 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 14997534841949968432ull);
    vlSelf->__PVT__r_nv_ram_rws_64x116__DOT__muxed_Wa_w0 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 12821857835406264476ull);
    vlSelf->__PVT__r_nv_ram_rws_64x116__DOT__muxed_we_w0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 334826797589724952ull);
    vlSelf->__PVT__r_nv_ram_rws_64x116__DOT__we_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 600465922148558216ull);
    vlSelf->__PVT__r_nv_ram_rws_64x116__DOT__pre_Ra_reg_r0 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 3461095091393961417ull);
    vlSelf->__PVT__r_nv_ram_rws_64x116__DOT__D_Ra_reg_r0 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 9942785119155127130ull);
    vlSelf->__PVT__r_nv_ram_rws_64x116__DOT__access_en_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 857653013506059336ull);
    vlSelf->__PVT__r_nv_ram_rws_64x116__DOT__muxed_re_r0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4122079203913862117ull);
    vlSelf->__PVT__r_nv_ram_rws_64x116__DOT__re_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6655596910656154621ull);
    VL_SCOPED_RAND_RESET_W(116, vlSelf->__PVT__r_nv_ram_rws_64x116__DOT__muxed_Data_r0, __VscopeHash, 14823295654345857419ull);
    vlSelf->__PVT__r_nv_ram_rws_64x116__DOT__mbist_ce_r0_1p = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14711454590550113837ull);
    vlSelf->__PVT__r_nv_ram_rws_64x116__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1008654888025666816ull);
    vlSelf->__PVT__r_nv_ram_rws_64x116__DOT__CLK_GATE_clk__DOT__qd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6462636523818049245ull);
    vlSelf->__PVT__r_nv_ram_rws_64x116__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5769490870905820980ull);
    vlSelf->__PVT__r_nv_ram_rws_64x116__DOT__UJ_la_bist_clkw0_gate__DOT__E = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12509835072882076004ull);
    vlSelf->__PVT__r_nv_ram_rws_64x116__DOT__UJ_la_bist_clkw0_gate__DOT__qd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6212825350621576709ull);
    vlSelf->__PVT__r_nv_ram_rws_64x116__DOT__UJ_clk_gate_core__DOT__qd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16820375898956125363ull);
    vlSelf->__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__RA = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 2685969195093922873ull);
    vlSelf->__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__RE_LATB = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3466025983982150960ull);
    vlSelf->__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__RE_FF = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4010010344517787097ull);
    vlSelf->__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__WE_LATB = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5661570296620008790ull);
    vlSelf->__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__WE_FF = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13498199473165160834ull);
    vlSelf->__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__RADR = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 10007401265240833977ull);
    vlSelf->__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__WADR = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 9328991461199859483ull);
    vlSelf->__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__WAFF = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 519025818431496077ull);
    vlSelf->__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__latffclk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9522515782644049722ull);
    vlSelf->__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__WRDCLK = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8681970681305180429ull);
    vlSelf->__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__RECLK = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 343322023460055638ull);
    vlSelf->__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__WECLK = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4939529582049641481ull);
    VL_SCOPED_RAND_RESET_W(116, vlSelf->__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__WDQ_pr, __VscopeHash, 1318501512718684738ull);
    VL_SCOPED_RAND_RESET_W(116, vlSelf->__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__dout, __VscopeHash, 3066230047579039711ull);
    vlSelf->__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__RD_rdnt0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13459691979243628684ull);
    vlSelf->__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__RD_rdnt1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9050698048566729569ull);
    vlSelf->__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__WrClk0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7243574938482387392ull);
    VL_SCOPED_RAND_RESET_W(116, vlSelf->__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__rmuxd0, __VscopeHash, 12899977181559531508ull);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(116, vlSelf->__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__iow0__DOT__arr[__Vi0], __VscopeHash, 17872273298167181230ull);
    }
    vlSelf->__PVT__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__iow0__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17459305853826372169ull);
    vlSelf->__PVT__r_nv_ram_rws_64x116__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2010067406089148398ull);
    vlSelf->r_nv_ram_rws_64x116__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17015795189663641205ull);
    vlSelf->r_nv_ram_rws_64x116__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13260837170549885866ull);
    vlSelf->r_nv_ram_rws_64x116__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10636373775861762021ull);
    vlSelf->r_nv_ram_rws_64x116__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2452965742030793803ull);
    vlSelf->r_nv_ram_rws_64x116__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1546248322932145902ull);
    vlSelf->r_nv_ram_rws_64x116__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17784206609880028190ull);
    vlSelf->__PVT__r_nv_ram_rws_64x116__DOT__testInst_Ra_reg_r0__DOT__clk_wire = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13702732381320733607ull);
    vlSelf->r_nv_ram_rws_64x116__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18247333865442539786ull);
    vlSelf->r_nv_ram_rws_64x116__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5628948803055992770ull);
    vlSelf->r_nv_ram_rws_64x116__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4219303321859865434ull);
    vlSelf->r_nv_ram_rws_64x116__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3148774493629874156ull);
    vlSelf->r_nv_ram_rws_64x116__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14036686988200777208ull);
    vlSelf->r_nv_ram_rws_64x116__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2075934939158929806ull);
    vlSelf->__PVT__r_nv_ram_rws_64x116__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11218486822969091025ull);
    vlSelf->__PVT__r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT__clk_wire = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13671127655813793708ull);
    vlSelf->r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 303357421528542936ull);
    vlSelf->r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15282962279758601778ull);
    vlSelf->r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3299478698540068317ull);
    vlSelf->r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3295220873542192389ull);
    vlSelf->r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2921722610869558680ull);
    vlSelf->r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10196141346637630205ull);
    vlSelf->r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16730765993571639960ull);
    vlSelf->r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13806547058146067062ull);
    vlSelf->r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__8__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5463848147413106655ull);
    vlSelf->r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__9__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8932503972987805482ull);
    vlSelf->r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__10__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 487674425981369920ull);
    vlSelf->r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__11__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4598381273713099387ull);
    vlSelf->r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__12__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6547281116554920261ull);
    vlSelf->r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__13__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12269659571026873371ull);
    vlSelf->r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__14__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2290569200685359778ull);
    vlSelf->r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__15__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12577694712890423526ull);
    vlSelf->r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__16__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2820843124680012475ull);
    vlSelf->r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__17__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1349097700442672996ull);
    vlSelf->r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__18__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9150383394198210448ull);
    vlSelf->r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__19__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9109786388966516113ull);
    vlSelf->r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__20__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14311599936427370263ull);
    vlSelf->r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__21__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5662273190303004318ull);
    vlSelf->r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__22__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7128670231278635463ull);
    vlSelf->r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__23__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8922727828727207219ull);
    vlSelf->r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__24__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12869133862396321123ull);
    vlSelf->r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__25__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16189276297784051702ull);
    vlSelf->r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__26__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14786715872691495793ull);
    vlSelf->r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__27__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3457734391493012746ull);
    vlSelf->r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__28__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5552951185985982272ull);
    vlSelf->r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__29__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11265095961430175556ull);
    vlSelf->r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__30__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9384936405651766028ull);
    vlSelf->r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__31__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 660172751957647061ull);
    vlSelf->r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__32__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17798098123886374470ull);
    vlSelf->r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__33__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16422114965088123830ull);
    vlSelf->r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__34__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8832798064529848423ull);
    vlSelf->r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__35__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17308448398430633321ull);
    vlSelf->r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__36__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3584302765852717771ull);
    vlSelf->r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__37__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9149259473591573882ull);
    vlSelf->r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__38__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9598370206223634597ull);
    vlSelf->r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__39__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8145001339647611366ull);
    vlSelf->r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__40__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18307587804523979636ull);
    vlSelf->r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__41__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4735500312145743168ull);
    vlSelf->r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__42__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9921003900360059632ull);
    vlSelf->r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__43__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15978202289709444738ull);
    vlSelf->r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__44__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5952514454164104492ull);
    vlSelf->r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__45__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17199509205100363511ull);
    vlSelf->r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__46__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16228310019750603908ull);
    vlSelf->r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__47__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4967452923940780898ull);
    vlSelf->r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__48__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16283173383573932179ull);
    vlSelf->r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__49__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11496294633427454410ull);
    vlSelf->r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__50__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11890958524027520896ull);
    vlSelf->r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__51__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13639645087092393692ull);
    vlSelf->r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__52__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5158847881783833377ull);
    vlSelf->r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__53__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13648977062394740330ull);
    vlSelf->r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__54__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4509178289650525833ull);
    vlSelf->r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__55__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13319994174052048250ull);
    vlSelf->r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__56__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9405233190197705019ull);
    vlSelf->r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__57__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 594459392418665439ull);
    vlSelf->r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__58__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8104155389053375515ull);
    vlSelf->r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__59__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8594454556429031918ull);
    vlSelf->r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__60__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13753989196240801188ull);
    vlSelf->r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__61__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8404834690241216909ull);
    vlSelf->r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__62__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16362817312342105011ull);
    vlSelf->r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__63__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12537725711116544616ull);
    vlSelf->r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__64__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5193147167184194599ull);
    vlSelf->r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__65__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3974273512905976226ull);
    vlSelf->r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__66__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4932160378370475375ull);
    vlSelf->r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__67__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3328276173138225101ull);
    vlSelf->r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__68__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11259182774279792107ull);
    vlSelf->r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__69__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5173224184958862477ull);
    vlSelf->r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__70__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13848622920541399091ull);
    vlSelf->r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__71__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14739560175484591314ull);
    vlSelf->r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__72__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9941473376729528505ull);
    vlSelf->r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__73__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9706133241149542164ull);
    vlSelf->r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__74__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13681706541520524538ull);
    vlSelf->r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__75__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9639839505931184899ull);
    vlSelf->r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__76__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10167094544401377608ull);
    vlSelf->r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__77__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16906255807127236572ull);
    vlSelf->r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__78__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6993269346158780425ull);
    vlSelf->r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__79__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2774978315476486056ull);
    vlSelf->r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__80__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17586664559888527888ull);
    vlSelf->r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__81__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10441827936636341084ull);
    vlSelf->r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__82__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10330968498743777106ull);
    vlSelf->r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__83__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14691870676812139680ull);
    vlSelf->r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__84__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12794340867839217315ull);
    vlSelf->r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__85__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16411579125178342587ull);
    vlSelf->r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__86__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18051456508459240478ull);
    vlSelf->r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__87__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5203676222690006320ull);
    vlSelf->r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__88__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3306874349590694154ull);
    vlSelf->r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__89__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7920409552413601910ull);
    vlSelf->r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__90__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7103275799532095920ull);
    vlSelf->r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__91__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14912879478775563668ull);
    vlSelf->r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__92__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 897782781963525994ull);
    vlSelf->r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__93__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2829928293359936342ull);
    vlSelf->r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__94__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16738997975203850545ull);
    vlSelf->r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__95__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5626283416554908652ull);
    vlSelf->r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__96__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4609830220418489582ull);
    vlSelf->r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__97__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6426742528839243311ull);
    vlSelf->r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__98__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10747164895205159859ull);
    vlSelf->r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__99__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1501703406137519208ull);
    vlSelf->r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__100__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 590889325306465604ull);
    vlSelf->r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__101__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9209619794924912265ull);
    vlSelf->r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__102__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16114003557782621905ull);
    vlSelf->r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__103__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8043529391003086631ull);
    vlSelf->r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__104__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1070685380059934360ull);
    vlSelf->r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__105__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6387193441578470181ull);
    vlSelf->r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__106__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13457895900033822272ull);
    vlSelf->r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__107__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12135484542434374747ull);
    vlSelf->r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__108__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16908457540591674447ull);
    vlSelf->r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__109__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5910724600214378480ull);
    vlSelf->r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__110__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2109784179220538332ull);
    vlSelf->r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__111__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10260525463346885676ull);
    vlSelf->r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__112__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1866896962513633573ull);
    vlSelf->r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__113__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14096387666457856401ull);
    vlSelf->r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__114__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4498705199590480841ull);
    vlSelf->r_nv_ram_rws_64x116__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__115__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11368213754872471282ull);
    VL_SCOPED_RAND_RESET_W(116, vlSelf->__VdlyVal__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__iow0__DOT__arr__v0, __VscopeHash, 13534086597874594780ull);
    vlSelf->__VdlyDim0__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__iow0__DOT__arr__v0 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 13563550970506162584ull);
    vlSelf->__VdlySet__r_nv_ram_rws_64x116__DOT__ram_Inst_64X116__DOT__ITOP__DOT__iow0__DOT__arr__v0 = 0;
}
