// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

extern const VlWide<8>/*255:0*/ Vsim__ConstPool__CONST_h9e67c271_0;
extern const VlWide<8>/*255:0*/ Vsim__ConstPool__CONST_h5b979007_0;

VL_ATTR_COLD void Vsim_nv_ram_rws_16x256___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_00__0(Vsim_nv_ram_rws_16x256* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_16x256___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_00__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__pre_Ra_reg_r0 
        = ((((IData)(vlSelfRef.r_nv_ram_rws_16x256__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
             << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_16x256__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                       << 2U)) | (((IData)(vlSelfRef.r_nv_ram_rws_16x256__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                   << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_16x256__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__posedge_updateDR_sync 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__updateDR_sync_1p)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__pre_Wa_reg_w0 
        = ((((IData)(vlSelfRef.r_nv_ram_rws_16x256__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
             << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_16x256__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                       << 2U)) | (((IData)(vlSelfRef.r_nv_ram_rws_16x256__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                   << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_16x256__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_la_bist_clkw0_gate__DOT__E 
        = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__debug_mode_sync;
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[0U] 
        = (((((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__31__KET____DOT__SSS__DOT__nr__Q) 
                  << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__30__KET____DOT__SSS__DOT__nr__Q) 
                            << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__29__KET____DOT__SSS__DOT__nr__Q) 
                                        << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__28__KET____DOT__SSS__DOT__nr__Q))) 
               << 0x0000000cU) | (((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__27__KET____DOT__SSS__DOT__nr__Q) 
                                     << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__26__KET____DOT__SSS__DOT__nr__Q) 
                                               << 2U)) 
                                   | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__25__KET____DOT__SSS__DOT__nr__Q) 
                                       << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__24__KET____DOT__SSS__DOT__nr__Q))) 
                                  << 8U)) | ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__23__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__22__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__21__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__20__KET____DOT__SSS__DOT__nr__Q))) 
                                              << 4U) 
                                             | ((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__19__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__18__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 2U)) 
                                                | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__17__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__16__KET____DOT__SSS__DOT__nr__Q))))) 
            << 0x00000010U) | (((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__15__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__14__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__13__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__12__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 0x0000000cU) | 
                                (((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__11__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__10__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__9__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__8__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 8U)) | ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                                << 3U) 
                                               | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 2U)) 
                                              | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q))) 
                                             << 4U) 
                                            | ((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q))))));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[1U] 
        = (((((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__63__KET____DOT__SSS__DOT__nr__Q) 
                  << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__62__KET____DOT__SSS__DOT__nr__Q) 
                            << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__61__KET____DOT__SSS__DOT__nr__Q) 
                                        << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__60__KET____DOT__SSS__DOT__nr__Q))) 
               << 0x0000000cU) | (((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__59__KET____DOT__SSS__DOT__nr__Q) 
                                     << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__58__KET____DOT__SSS__DOT__nr__Q) 
                                               << 2U)) 
                                   | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__57__KET____DOT__SSS__DOT__nr__Q) 
                                       << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__56__KET____DOT__SSS__DOT__nr__Q))) 
                                  << 8U)) | ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__55__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__54__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__53__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__52__KET____DOT__SSS__DOT__nr__Q))) 
                                              << 4U) 
                                             | ((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__51__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__50__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 2U)) 
                                                | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__49__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__48__KET____DOT__SSS__DOT__nr__Q))))) 
            << 0x00000010U) | (((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__47__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__46__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__45__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__44__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 0x0000000cU) | 
                                (((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__43__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__42__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__41__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__40__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 8U)) | ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__39__KET____DOT__SSS__DOT__nr__Q) 
                                                << 3U) 
                                               | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__38__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 2U)) 
                                              | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__37__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__36__KET____DOT__SSS__DOT__nr__Q))) 
                                             << 4U) 
                                            | ((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__35__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__34__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__33__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__32__KET____DOT__SSS__DOT__nr__Q))))));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[2U] 
        = (((((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__95__KET____DOT__SSS__DOT__nr__Q) 
                  << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__94__KET____DOT__SSS__DOT__nr__Q) 
                            << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__93__KET____DOT__SSS__DOT__nr__Q) 
                                        << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__92__KET____DOT__SSS__DOT__nr__Q))) 
               << 0x0000000cU) | (((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__91__KET____DOT__SSS__DOT__nr__Q) 
                                     << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__90__KET____DOT__SSS__DOT__nr__Q) 
                                               << 2U)) 
                                   | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__89__KET____DOT__SSS__DOT__nr__Q) 
                                       << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__88__KET____DOT__SSS__DOT__nr__Q))) 
                                  << 8U)) | ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__87__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__86__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__85__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__84__KET____DOT__SSS__DOT__nr__Q))) 
                                              << 4U) 
                                             | ((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__83__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__82__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 2U)) 
                                                | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__81__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__80__KET____DOT__SSS__DOT__nr__Q))))) 
            << 0x00000010U) | (((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__79__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__78__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__77__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__76__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 0x0000000cU) | 
                                (((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__75__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__74__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__73__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__72__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 8U)) | ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__71__KET____DOT__SSS__DOT__nr__Q) 
                                                << 3U) 
                                               | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__70__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 2U)) 
                                              | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__69__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__68__KET____DOT__SSS__DOT__nr__Q))) 
                                             << 4U) 
                                            | ((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__67__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__66__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__65__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__64__KET____DOT__SSS__DOT__nr__Q))))));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[3U] 
        = (((((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__127__KET____DOT__SSS__DOT__nr__Q) 
                  << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__126__KET____DOT__SSS__DOT__nr__Q) 
                            << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__125__KET____DOT__SSS__DOT__nr__Q) 
                                        << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__124__KET____DOT__SSS__DOT__nr__Q))) 
               << 0x0000000cU) | (((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__123__KET____DOT__SSS__DOT__nr__Q) 
                                     << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__122__KET____DOT__SSS__DOT__nr__Q) 
                                               << 2U)) 
                                   | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__121__KET____DOT__SSS__DOT__nr__Q) 
                                       << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__120__KET____DOT__SSS__DOT__nr__Q))) 
                                  << 8U)) | ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__119__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__118__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__117__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__116__KET____DOT__SSS__DOT__nr__Q))) 
                                              << 4U) 
                                             | ((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__115__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__114__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 2U)) 
                                                | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__113__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__112__KET____DOT__SSS__DOT__nr__Q))))) 
            << 0x00000010U) | (((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__111__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__110__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__109__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__108__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 0x0000000cU) | 
                                (((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__107__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__106__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__105__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__104__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 8U)) | ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__103__KET____DOT__SSS__DOT__nr__Q) 
                                                << 3U) 
                                               | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__102__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 2U)) 
                                              | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__101__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__100__KET____DOT__SSS__DOT__nr__Q))) 
                                             << 4U) 
                                            | ((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__99__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__98__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__97__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__96__KET____DOT__SSS__DOT__nr__Q))))));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[4U] 
        = (((((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__159__KET____DOT__SSS__DOT__nr__Q) 
                  << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__158__KET____DOT__SSS__DOT__nr__Q) 
                            << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__157__KET____DOT__SSS__DOT__nr__Q) 
                                        << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__156__KET____DOT__SSS__DOT__nr__Q))) 
               << 0x0000000cU) | (((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__155__KET____DOT__SSS__DOT__nr__Q) 
                                     << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__154__KET____DOT__SSS__DOT__nr__Q) 
                                               << 2U)) 
                                   | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__153__KET____DOT__SSS__DOT__nr__Q) 
                                       << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__152__KET____DOT__SSS__DOT__nr__Q))) 
                                  << 8U)) | ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__151__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__150__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__149__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__148__KET____DOT__SSS__DOT__nr__Q))) 
                                              << 4U) 
                                             | ((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__147__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__146__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 2U)) 
                                                | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__145__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__144__KET____DOT__SSS__DOT__nr__Q))))) 
            << 0x00000010U) | (((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__143__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__142__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__141__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__140__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 0x0000000cU) | 
                                (((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__139__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__138__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__137__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__136__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 8U)) | ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__135__KET____DOT__SSS__DOT__nr__Q) 
                                                << 3U) 
                                               | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__134__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 2U)) 
                                              | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__133__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__132__KET____DOT__SSS__DOT__nr__Q))) 
                                             << 4U) 
                                            | ((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__131__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__130__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__129__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__128__KET____DOT__SSS__DOT__nr__Q))))));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[5U] 
        = (((((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__191__KET____DOT__SSS__DOT__nr__Q) 
                  << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__190__KET____DOT__SSS__DOT__nr__Q) 
                            << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__189__KET____DOT__SSS__DOT__nr__Q) 
                                        << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__188__KET____DOT__SSS__DOT__nr__Q))) 
               << 0x0000000cU) | (((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__187__KET____DOT__SSS__DOT__nr__Q) 
                                     << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__186__KET____DOT__SSS__DOT__nr__Q) 
                                               << 2U)) 
                                   | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__185__KET____DOT__SSS__DOT__nr__Q) 
                                       << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__184__KET____DOT__SSS__DOT__nr__Q))) 
                                  << 8U)) | ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__183__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__182__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__181__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__180__KET____DOT__SSS__DOT__nr__Q))) 
                                              << 4U) 
                                             | ((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__179__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__178__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 2U)) 
                                                | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__177__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__176__KET____DOT__SSS__DOT__nr__Q))))) 
            << 0x00000010U) | (((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__175__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__174__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__173__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__172__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 0x0000000cU) | 
                                (((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__171__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__170__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__169__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__168__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 8U)) | ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__167__KET____DOT__SSS__DOT__nr__Q) 
                                                << 3U) 
                                               | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__166__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 2U)) 
                                              | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__165__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__164__KET____DOT__SSS__DOT__nr__Q))) 
                                             << 4U) 
                                            | ((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__163__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__162__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__161__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__160__KET____DOT__SSS__DOT__nr__Q))))));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[6U] 
        = (((((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__223__KET____DOT__SSS__DOT__nr__Q) 
                  << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__222__KET____DOT__SSS__DOT__nr__Q) 
                            << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__221__KET____DOT__SSS__DOT__nr__Q) 
                                        << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__220__KET____DOT__SSS__DOT__nr__Q))) 
               << 0x0000000cU) | (((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__219__KET____DOT__SSS__DOT__nr__Q) 
                                     << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__218__KET____DOT__SSS__DOT__nr__Q) 
                                               << 2U)) 
                                   | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__217__KET____DOT__SSS__DOT__nr__Q) 
                                       << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__216__KET____DOT__SSS__DOT__nr__Q))) 
                                  << 8U)) | ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__215__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__214__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__213__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__212__KET____DOT__SSS__DOT__nr__Q))) 
                                              << 4U) 
                                             | ((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__211__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__210__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 2U)) 
                                                | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__209__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__208__KET____DOT__SSS__DOT__nr__Q))))) 
            << 0x00000010U) | (((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__207__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__206__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__205__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__204__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 0x0000000cU) | 
                                (((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__203__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__202__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__201__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__200__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 8U)) | ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__199__KET____DOT__SSS__DOT__nr__Q) 
                                                << 3U) 
                                               | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__198__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 2U)) 
                                              | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__197__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__196__KET____DOT__SSS__DOT__nr__Q))) 
                                             << 4U) 
                                            | ((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__195__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__194__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__193__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__192__KET____DOT__SSS__DOT__nr__Q))))));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[7U] 
        = (((((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__255__KET____DOT__SSS__DOT__nr__Q) 
                  << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__254__KET____DOT__SSS__DOT__nr__Q) 
                            << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__253__KET____DOT__SSS__DOT__nr__Q) 
                                        << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__252__KET____DOT__SSS__DOT__nr__Q))) 
               << 0x0000000cU) | (((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__251__KET____DOT__SSS__DOT__nr__Q) 
                                     << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__250__KET____DOT__SSS__DOT__nr__Q) 
                                               << 2U)) 
                                   | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__249__KET____DOT__SSS__DOT__nr__Q) 
                                       << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__248__KET____DOT__SSS__DOT__nr__Q))) 
                                  << 8U)) | ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__247__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__246__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__245__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__244__KET____DOT__SSS__DOT__nr__Q))) 
                                              << 4U) 
                                             | ((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__243__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__242__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 2U)) 
                                                | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__241__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__240__KET____DOT__SSS__DOT__nr__Q))))) 
            << 0x00000010U) | (((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__239__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__238__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__237__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__236__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 0x0000000cU) | 
                                (((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__235__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__234__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__233__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__232__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 8U)) | ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__231__KET____DOT__SSS__DOT__nr__Q) 
                                                << 3U) 
                                               | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__230__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 2U)) 
                                              | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__229__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__228__KET____DOT__SSS__DOT__nr__Q))) 
                                             << 4U) 
                                            | ((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__227__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__226__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__225__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__224__KET____DOT__SSS__DOT__nr__Q))))));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__nvdla_op_gated_clk_buffer) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__nvdla_op_gated_clk_buffer) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__CLK_GATE_clk__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__testInst_Ra_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__nvdla_op_gated_clk_buffer) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__nvdla_op_gated_clk_buffer) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__access_en_r 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__re_q));
    if (vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__debug_mode_sync) {
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__RA 
                = (0x0000000fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__pre_Ra_reg_r0));
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WA 
                = (0x0000000fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__pre_Wa_reg_w0));
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[0U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[0U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[1U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[1U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[2U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[2U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[3U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[3U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[4U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[4U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[5U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[5U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[6U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[6U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[7U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[7U];
        } else {
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__RA 
                = (0x0000000fU & 0U);
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WA 
                = (0x0000000fU & 0U);
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[0U] 
                = Vsim__ConstPool__CONST_h9e67c271_0[0U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[1U] 
                = Vsim__ConstPool__CONST_h9e67c271_0[1U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[2U] 
                = Vsim__ConstPool__CONST_h9e67c271_0[2U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[3U] 
                = Vsim__ConstPool__CONST_h9e67c271_0[3U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[4U] 
                = Vsim__ConstPool__CONST_h9e67c271_0[4U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[5U] 
                = Vsim__ConstPool__CONST_h9e67c271_0[5U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[6U] 
                = Vsim__ConstPool__CONST_h9e67c271_0[6U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[7U] 
                = Vsim__ConstPool__CONST_h9e67c271_0[7U];
        }
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_we_w0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__debug_mode_sync) 
                  && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__posedge_updateDR_sync) 
                      & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__we_q))));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_re_r0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__debug_mode_sync) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__access_en_r)));
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__RA 
            = (0x0000000fU & ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_rd_sel_00))) 
                                & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dc2sbuf_p0_rd_addr)) 
                               | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_rd_sel_00))) 
                                  & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dc2sbuf_p1_rd_addr))) 
                              | ((IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_3659) 
                                 | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_rd_sel_00))) 
                                     & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__rd_p0_addr_d1)) 
                                    | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_rd_sel_00))) 
                                       & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__rd_p1_addr_d1))))));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WA 
            = (0x0000000fU & ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_00))) 
                                & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dc2sbuf_p0_wr_addr)) 
                               | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_00))) 
                                  & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dc2sbuf_p1_wr_addr))) 
                              | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_00))) 
                                   & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_idx_d1)) 
                                  | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_00))) 
                                     & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_idx_d1))) 
                                 | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_00))) 
                                     & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_addr_d1)) 
                                    | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_00))) 
                                       & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_addr_d1))))));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_we_w0 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_we_00;
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[0U] 
            = ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_00))) 
                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[0U]) 
                | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_00))) 
                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[8U])) 
               | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_00))) 
                    & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_data_d1[0U]) 
                   | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_00))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_data_d1[0U])) 
                  | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_00))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_d1[0U]) 
                     | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_00))) 
                        & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_data_d1[0U]))));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[1U] 
            = ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_00))) 
                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[1U]) 
                | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_00))) 
                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[9U])) 
               | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_00))) 
                    & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_data_d1[1U]) 
                   | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_00))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_data_d1[1U])) 
                  | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_00))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_d1[1U]) 
                     | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_00))) 
                        & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_data_d1[1U]))));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[2U] 
            = ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_00))) 
                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[2U]) 
                | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_00))) 
                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[0x0000000aU])) 
               | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_00))) 
                    & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_data_d1[2U]) 
                   | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_00))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_data_d1[2U])) 
                  | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_00))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_d1[2U]) 
                     | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_00))) 
                        & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_data_d1[2U]))));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[3U] 
            = ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_00))) 
                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[3U]) 
                | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_00))) 
                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[0x0000000bU])) 
               | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_00))) 
                    & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_data_d1[3U]) 
                   | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_00))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_data_d1[3U])) 
                  | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_00))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_d1[3U]) 
                     | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_00))) 
                        & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_data_d1[3U]))));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[4U] 
            = ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_00))) 
                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[4U]) 
                | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_00))) 
                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[0x0000000cU])) 
               | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_00))) 
                    & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_data_d1[4U]) 
                   | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_00))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_data_d1[4U])) 
                  | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_00))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_d1[4U]) 
                     | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_00))) 
                        & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_data_d1[4U]))));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[5U] 
            = ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_00))) 
                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[5U]) 
                | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_00))) 
                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[0x0000000dU])) 
               | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_00))) 
                    & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_data_d1[5U]) 
                   | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_00))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_data_d1[5U])) 
                  | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_00))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_d1[5U]) 
                     | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_00))) 
                        & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_data_d1[5U]))));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[6U] 
            = ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_00))) 
                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[6U]) 
                | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_00))) 
                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[0x0000000eU])) 
               | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_00))) 
                    & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_data_d1[6U]) 
                   | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_00))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_data_d1[6U])) 
                  | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_00))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_d1[6U]) 
                     | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_00))) 
                        & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_data_d1[6U]))));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[7U] 
            = ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_00))) 
                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[7U]) 
                | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_00))) 
                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[0x0000000fU])) 
               | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_00))) 
                    & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_data_d1[7U]) 
                   | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_00))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_data_d1[7U])) 
                  | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_00))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_d1[7U]) 
                     | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_00))) 
                        & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_data_d1[7U]))));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_re_r0 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_re_00;
    }
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__radclk 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__re_lat));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__weclk 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__we_lat));
    if (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__debug_mode_sync)
          ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__re_q)
          : (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__debug_mode_sync))) {
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_Data_r0[0U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__r0_dout_tmp2[0U];
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_Data_r0[1U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__r0_dout_tmp2[1U];
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_Data_r0[2U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__r0_dout_tmp2[2U];
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_Data_r0[3U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__r0_dout_tmp2[3U];
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_Data_r0[4U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__r0_dout_tmp2[4U];
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_Data_r0[5U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__r0_dout_tmp2[5U];
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_Data_r0[6U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__r0_dout_tmp2[6U];
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_Data_r0[7U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__r0_dout_tmp2[7U];
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_Data_r0[0U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[0U];
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_Data_r0[1U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[1U];
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_Data_r0[2U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[2U];
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_Data_r0[3U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[3U];
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_Data_r0[4U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[4U];
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_Data_r0[5U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[5U];
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_Data_r0[6U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[6U];
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_Data_r0[7U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[7U];
    }
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__bitclk[0U] 
        = (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__weclk)));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__bitclk[1U] 
        = (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__weclk)));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__bitclk[2U] 
        = (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__weclk)));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__bitclk[3U] 
        = (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__weclk)));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__bitclk[4U] 
        = (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__weclk)));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__bitclk[5U] 
        = (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__weclk)));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__bitclk[6U] 
        = (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__weclk)));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__bitclk[7U] 
        = (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__weclk)));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__collision_ff_clk[0U] 
        = ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__weclk))) 
           & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__radclk))) 
              & (- (IData)(((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__ra_lat) 
                            == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__wa_lat))))));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__collision_ff_clk[1U] 
        = ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__weclk))) 
           & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__radclk))) 
              & (- (IData)(((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__ra_lat) 
                            == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__wa_lat))))));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__collision_ff_clk[2U] 
        = ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__weclk))) 
           & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__radclk))) 
              & (- (IData)(((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__ra_lat) 
                            == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__wa_lat))))));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__collision_ff_clk[3U] 
        = ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__weclk))) 
           & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__radclk))) 
              & (- (IData)(((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__ra_lat) 
                            == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__wa_lat))))));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__collision_ff_clk[4U] 
        = ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__weclk))) 
           & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__radclk))) 
              & (- (IData)(((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__ra_lat) 
                            == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__wa_lat))))));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__collision_ff_clk[5U] 
        = ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__weclk))) 
           & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__radclk))) 
              & (- (IData)(((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__ra_lat) 
                            == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__wa_lat))))));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__collision_ff_clk[6U] 
        = ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__weclk))) 
           & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__radclk))) 
              & (- (IData)(((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__ra_lat) 
                            == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__wa_lat))))));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__collision_ff_clk[7U] 
        = ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__weclk))) 
           & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__radclk))) 
              & (- (IData)(((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__ra_lat) 
                            == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__wa_lat))))));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__a = 0U;
    while (VL_GTS_III(32, 0x00000100U, vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__a)) {
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__r0_dout_tmp[(7U 
                                                                                & (vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__a 
                                                                                >> 5U))] 
            = (((~ ((IData)(1U) << (0x0000001fU & vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__a))) 
                & vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__r0_dout_tmp[
                (7U & (vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__a 
                       >> 5U))]) | (((1U & (~ ((vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__collision_ff[
                                                (7U 
                                                 & (vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__a 
                                                    >> 5U))] 
                                                >> 
                                                (0x0000001fU 
                                                 & vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__a)) 
                                               | ((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__ra_lat) 
                                                    == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__wa_lat)) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__weclk)) 
                                                  & (Vsim__ConstPool__CONST_h5b979007_0[
                                                     (7U 
                                                      & (vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__a 
                                                         >> 5U))] 
                                                     >> 
                                                     (0x0000001fU 
                                                      & vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__a)))))) 
                                     && (1U & (vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__array
                                               [vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__ra_lat][
                                               (7U 
                                                & (vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__a 
                                                   >> 5U))] 
                                               >> (0x0000001fU 
                                                   & vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__a)))) 
                                    << (0x0000001fU 
                                        & vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__a)));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__a 
            = ((IData)(1U) + vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__a);
    }
}

VL_ATTR_COLD void Vsim_nv_ram_rws_16x256___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_01__0(Vsim_nv_ram_rws_16x256* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_16x256___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_01__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__pre_Ra_reg_r0 
        = ((((IData)(vlSelfRef.r_nv_ram_rws_16x256__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
             << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_16x256__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                       << 2U)) | (((IData)(vlSelfRef.r_nv_ram_rws_16x256__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                   << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_16x256__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__posedge_updateDR_sync 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__updateDR_sync_1p)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__pre_Wa_reg_w0 
        = ((((IData)(vlSelfRef.r_nv_ram_rws_16x256__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
             << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_16x256__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                       << 2U)) | (((IData)(vlSelfRef.r_nv_ram_rws_16x256__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                   << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_16x256__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_la_bist_clkw0_gate__DOT__E 
        = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__debug_mode_sync;
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[0U] 
        = (((((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__31__KET____DOT__SSS__DOT__nr__Q) 
                  << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__30__KET____DOT__SSS__DOT__nr__Q) 
                            << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__29__KET____DOT__SSS__DOT__nr__Q) 
                                        << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__28__KET____DOT__SSS__DOT__nr__Q))) 
               << 0x0000000cU) | (((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__27__KET____DOT__SSS__DOT__nr__Q) 
                                     << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__26__KET____DOT__SSS__DOT__nr__Q) 
                                               << 2U)) 
                                   | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__25__KET____DOT__SSS__DOT__nr__Q) 
                                       << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__24__KET____DOT__SSS__DOT__nr__Q))) 
                                  << 8U)) | ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__23__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__22__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__21__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__20__KET____DOT__SSS__DOT__nr__Q))) 
                                              << 4U) 
                                             | ((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__19__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__18__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 2U)) 
                                                | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__17__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__16__KET____DOT__SSS__DOT__nr__Q))))) 
            << 0x00000010U) | (((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__15__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__14__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__13__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__12__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 0x0000000cU) | 
                                (((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__11__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__10__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__9__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__8__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 8U)) | ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                                << 3U) 
                                               | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 2U)) 
                                              | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q))) 
                                             << 4U) 
                                            | ((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q))))));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[1U] 
        = (((((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__63__KET____DOT__SSS__DOT__nr__Q) 
                  << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__62__KET____DOT__SSS__DOT__nr__Q) 
                            << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__61__KET____DOT__SSS__DOT__nr__Q) 
                                        << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__60__KET____DOT__SSS__DOT__nr__Q))) 
               << 0x0000000cU) | (((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__59__KET____DOT__SSS__DOT__nr__Q) 
                                     << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__58__KET____DOT__SSS__DOT__nr__Q) 
                                               << 2U)) 
                                   | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__57__KET____DOT__SSS__DOT__nr__Q) 
                                       << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__56__KET____DOT__SSS__DOT__nr__Q))) 
                                  << 8U)) | ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__55__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__54__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__53__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__52__KET____DOT__SSS__DOT__nr__Q))) 
                                              << 4U) 
                                             | ((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__51__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__50__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 2U)) 
                                                | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__49__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__48__KET____DOT__SSS__DOT__nr__Q))))) 
            << 0x00000010U) | (((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__47__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__46__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__45__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__44__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 0x0000000cU) | 
                                (((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__43__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__42__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__41__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__40__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 8U)) | ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__39__KET____DOT__SSS__DOT__nr__Q) 
                                                << 3U) 
                                               | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__38__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 2U)) 
                                              | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__37__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__36__KET____DOT__SSS__DOT__nr__Q))) 
                                             << 4U) 
                                            | ((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__35__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__34__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__33__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__32__KET____DOT__SSS__DOT__nr__Q))))));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[2U] 
        = (((((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__95__KET____DOT__SSS__DOT__nr__Q) 
                  << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__94__KET____DOT__SSS__DOT__nr__Q) 
                            << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__93__KET____DOT__SSS__DOT__nr__Q) 
                                        << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__92__KET____DOT__SSS__DOT__nr__Q))) 
               << 0x0000000cU) | (((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__91__KET____DOT__SSS__DOT__nr__Q) 
                                     << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__90__KET____DOT__SSS__DOT__nr__Q) 
                                               << 2U)) 
                                   | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__89__KET____DOT__SSS__DOT__nr__Q) 
                                       << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__88__KET____DOT__SSS__DOT__nr__Q))) 
                                  << 8U)) | ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__87__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__86__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__85__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__84__KET____DOT__SSS__DOT__nr__Q))) 
                                              << 4U) 
                                             | ((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__83__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__82__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 2U)) 
                                                | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__81__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__80__KET____DOT__SSS__DOT__nr__Q))))) 
            << 0x00000010U) | (((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__79__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__78__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__77__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__76__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 0x0000000cU) | 
                                (((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__75__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__74__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__73__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__72__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 8U)) | ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__71__KET____DOT__SSS__DOT__nr__Q) 
                                                << 3U) 
                                               | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__70__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 2U)) 
                                              | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__69__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__68__KET____DOT__SSS__DOT__nr__Q))) 
                                             << 4U) 
                                            | ((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__67__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__66__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__65__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__64__KET____DOT__SSS__DOT__nr__Q))))));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[3U] 
        = (((((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__127__KET____DOT__SSS__DOT__nr__Q) 
                  << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__126__KET____DOT__SSS__DOT__nr__Q) 
                            << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__125__KET____DOT__SSS__DOT__nr__Q) 
                                        << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__124__KET____DOT__SSS__DOT__nr__Q))) 
               << 0x0000000cU) | (((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__123__KET____DOT__SSS__DOT__nr__Q) 
                                     << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__122__KET____DOT__SSS__DOT__nr__Q) 
                                               << 2U)) 
                                   | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__121__KET____DOT__SSS__DOT__nr__Q) 
                                       << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__120__KET____DOT__SSS__DOT__nr__Q))) 
                                  << 8U)) | ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__119__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__118__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__117__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__116__KET____DOT__SSS__DOT__nr__Q))) 
                                              << 4U) 
                                             | ((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__115__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__114__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 2U)) 
                                                | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__113__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__112__KET____DOT__SSS__DOT__nr__Q))))) 
            << 0x00000010U) | (((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__111__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__110__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__109__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__108__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 0x0000000cU) | 
                                (((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__107__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__106__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__105__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__104__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 8U)) | ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__103__KET____DOT__SSS__DOT__nr__Q) 
                                                << 3U) 
                                               | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__102__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 2U)) 
                                              | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__101__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__100__KET____DOT__SSS__DOT__nr__Q))) 
                                             << 4U) 
                                            | ((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__99__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__98__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__97__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__96__KET____DOT__SSS__DOT__nr__Q))))));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[4U] 
        = (((((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__159__KET____DOT__SSS__DOT__nr__Q) 
                  << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__158__KET____DOT__SSS__DOT__nr__Q) 
                            << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__157__KET____DOT__SSS__DOT__nr__Q) 
                                        << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__156__KET____DOT__SSS__DOT__nr__Q))) 
               << 0x0000000cU) | (((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__155__KET____DOT__SSS__DOT__nr__Q) 
                                     << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__154__KET____DOT__SSS__DOT__nr__Q) 
                                               << 2U)) 
                                   | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__153__KET____DOT__SSS__DOT__nr__Q) 
                                       << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__152__KET____DOT__SSS__DOT__nr__Q))) 
                                  << 8U)) | ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__151__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__150__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__149__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__148__KET____DOT__SSS__DOT__nr__Q))) 
                                              << 4U) 
                                             | ((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__147__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__146__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 2U)) 
                                                | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__145__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__144__KET____DOT__SSS__DOT__nr__Q))))) 
            << 0x00000010U) | (((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__143__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__142__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__141__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__140__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 0x0000000cU) | 
                                (((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__139__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__138__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__137__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__136__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 8U)) | ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__135__KET____DOT__SSS__DOT__nr__Q) 
                                                << 3U) 
                                               | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__134__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 2U)) 
                                              | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__133__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__132__KET____DOT__SSS__DOT__nr__Q))) 
                                             << 4U) 
                                            | ((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__131__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__130__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__129__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__128__KET____DOT__SSS__DOT__nr__Q))))));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[5U] 
        = (((((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__191__KET____DOT__SSS__DOT__nr__Q) 
                  << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__190__KET____DOT__SSS__DOT__nr__Q) 
                            << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__189__KET____DOT__SSS__DOT__nr__Q) 
                                        << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__188__KET____DOT__SSS__DOT__nr__Q))) 
               << 0x0000000cU) | (((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__187__KET____DOT__SSS__DOT__nr__Q) 
                                     << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__186__KET____DOT__SSS__DOT__nr__Q) 
                                               << 2U)) 
                                   | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__185__KET____DOT__SSS__DOT__nr__Q) 
                                       << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__184__KET____DOT__SSS__DOT__nr__Q))) 
                                  << 8U)) | ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__183__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__182__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__181__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__180__KET____DOT__SSS__DOT__nr__Q))) 
                                              << 4U) 
                                             | ((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__179__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__178__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 2U)) 
                                                | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__177__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__176__KET____DOT__SSS__DOT__nr__Q))))) 
            << 0x00000010U) | (((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__175__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__174__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__173__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__172__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 0x0000000cU) | 
                                (((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__171__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__170__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__169__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__168__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 8U)) | ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__167__KET____DOT__SSS__DOT__nr__Q) 
                                                << 3U) 
                                               | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__166__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 2U)) 
                                              | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__165__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__164__KET____DOT__SSS__DOT__nr__Q))) 
                                             << 4U) 
                                            | ((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__163__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__162__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__161__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__160__KET____DOT__SSS__DOT__nr__Q))))));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[6U] 
        = (((((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__223__KET____DOT__SSS__DOT__nr__Q) 
                  << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__222__KET____DOT__SSS__DOT__nr__Q) 
                            << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__221__KET____DOT__SSS__DOT__nr__Q) 
                                        << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__220__KET____DOT__SSS__DOT__nr__Q))) 
               << 0x0000000cU) | (((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__219__KET____DOT__SSS__DOT__nr__Q) 
                                     << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__218__KET____DOT__SSS__DOT__nr__Q) 
                                               << 2U)) 
                                   | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__217__KET____DOT__SSS__DOT__nr__Q) 
                                       << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__216__KET____DOT__SSS__DOT__nr__Q))) 
                                  << 8U)) | ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__215__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__214__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__213__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__212__KET____DOT__SSS__DOT__nr__Q))) 
                                              << 4U) 
                                             | ((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__211__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__210__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 2U)) 
                                                | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__209__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__208__KET____DOT__SSS__DOT__nr__Q))))) 
            << 0x00000010U) | (((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__207__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__206__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__205__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__204__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 0x0000000cU) | 
                                (((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__203__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__202__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__201__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__200__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 8U)) | ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__199__KET____DOT__SSS__DOT__nr__Q) 
                                                << 3U) 
                                               | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__198__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 2U)) 
                                              | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__197__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__196__KET____DOT__SSS__DOT__nr__Q))) 
                                             << 4U) 
                                            | ((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__195__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__194__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__193__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__192__KET____DOT__SSS__DOT__nr__Q))))));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[7U] 
        = (((((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__255__KET____DOT__SSS__DOT__nr__Q) 
                  << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__254__KET____DOT__SSS__DOT__nr__Q) 
                            << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__253__KET____DOT__SSS__DOT__nr__Q) 
                                        << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__252__KET____DOT__SSS__DOT__nr__Q))) 
               << 0x0000000cU) | (((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__251__KET____DOT__SSS__DOT__nr__Q) 
                                     << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__250__KET____DOT__SSS__DOT__nr__Q) 
                                               << 2U)) 
                                   | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__249__KET____DOT__SSS__DOT__nr__Q) 
                                       << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__248__KET____DOT__SSS__DOT__nr__Q))) 
                                  << 8U)) | ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__247__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__246__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__245__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__244__KET____DOT__SSS__DOT__nr__Q))) 
                                              << 4U) 
                                             | ((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__243__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__242__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 2U)) 
                                                | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__241__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__240__KET____DOT__SSS__DOT__nr__Q))))) 
            << 0x00000010U) | (((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__239__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__238__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__237__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__236__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 0x0000000cU) | 
                                (((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__235__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__234__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__233__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__232__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 8U)) | ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__231__KET____DOT__SSS__DOT__nr__Q) 
                                                << 3U) 
                                               | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__230__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 2U)) 
                                              | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__229__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__228__KET____DOT__SSS__DOT__nr__Q))) 
                                             << 4U) 
                                            | ((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__227__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__226__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__225__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__224__KET____DOT__SSS__DOT__nr__Q))))));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__nvdla_op_gated_clk_buffer) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__nvdla_op_gated_clk_buffer) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__CLK_GATE_clk__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__testInst_Ra_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__nvdla_op_gated_clk_buffer) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__nvdla_op_gated_clk_buffer) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__access_en_r 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__re_q));
    if (vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__debug_mode_sync) {
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__RA 
                = (0x0000000fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__pre_Ra_reg_r0));
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WA 
                = (0x0000000fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__pre_Wa_reg_w0));
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[0U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[0U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[1U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[1U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[2U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[2U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[3U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[3U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[4U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[4U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[5U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[5U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[6U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[6U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[7U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[7U];
        } else {
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__RA 
                = (0x0000000fU & 0U);
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WA 
                = (0x0000000fU & 0U);
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[0U] 
                = Vsim__ConstPool__CONST_h9e67c271_0[0U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[1U] 
                = Vsim__ConstPool__CONST_h9e67c271_0[1U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[2U] 
                = Vsim__ConstPool__CONST_h9e67c271_0[2U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[3U] 
                = Vsim__ConstPool__CONST_h9e67c271_0[3U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[4U] 
                = Vsim__ConstPool__CONST_h9e67c271_0[4U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[5U] 
                = Vsim__ConstPool__CONST_h9e67c271_0[5U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[6U] 
                = Vsim__ConstPool__CONST_h9e67c271_0[6U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[7U] 
                = Vsim__ConstPool__CONST_h9e67c271_0[7U];
        }
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_we_w0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__debug_mode_sync) 
                  && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__posedge_updateDR_sync) 
                      & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__we_q))));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_re_r0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__debug_mode_sync) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__access_en_r)));
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__RA 
            = (0x0000000fU & ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_rd_sel_01))) 
                                & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dc2sbuf_p0_rd_addr)) 
                               | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_rd_sel_01))) 
                                  & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dc2sbuf_p1_rd_addr))) 
                              | ((IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_3659) 
                                 | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_rd_sel_01))) 
                                     & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__rd_p0_addr_d1)) 
                                    | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_rd_sel_01))) 
                                       & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__rd_p1_addr_d1))))));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WA 
            = (0x0000000fU & ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_01))) 
                                & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dc2sbuf_p0_wr_addr)) 
                               | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_01))) 
                                  & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dc2sbuf_p1_wr_addr))) 
                              | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_01))) 
                                   & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_idx_d1)) 
                                  | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_01))) 
                                     & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_idx_d1))) 
                                 | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_01))) 
                                     & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_addr_d1)) 
                                    | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_01))) 
                                       & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_addr_d1))))));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_we_w0 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_we_01;
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[0U] 
            = ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_01))) 
                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[0U]) 
                | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_01))) 
                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[8U])) 
               | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_01))) 
                    & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_data_d1[0U]) 
                   | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_01))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_data_d1[0U])) 
                  | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_01))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_d1[0U]) 
                     | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_01))) 
                        & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_data_d1[0U]))));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[1U] 
            = ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_01))) 
                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[1U]) 
                | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_01))) 
                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[9U])) 
               | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_01))) 
                    & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_data_d1[1U]) 
                   | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_01))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_data_d1[1U])) 
                  | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_01))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_d1[1U]) 
                     | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_01))) 
                        & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_data_d1[1U]))));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[2U] 
            = ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_01))) 
                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[2U]) 
                | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_01))) 
                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[0x0000000aU])) 
               | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_01))) 
                    & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_data_d1[2U]) 
                   | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_01))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_data_d1[2U])) 
                  | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_01))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_d1[2U]) 
                     | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_01))) 
                        & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_data_d1[2U]))));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[3U] 
            = ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_01))) 
                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[3U]) 
                | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_01))) 
                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[0x0000000bU])) 
               | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_01))) 
                    & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_data_d1[3U]) 
                   | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_01))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_data_d1[3U])) 
                  | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_01))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_d1[3U]) 
                     | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_01))) 
                        & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_data_d1[3U]))));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[4U] 
            = ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_01))) 
                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[4U]) 
                | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_01))) 
                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[0x0000000cU])) 
               | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_01))) 
                    & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_data_d1[4U]) 
                   | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_01))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_data_d1[4U])) 
                  | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_01))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_d1[4U]) 
                     | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_01))) 
                        & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_data_d1[4U]))));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[5U] 
            = ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_01))) 
                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[5U]) 
                | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_01))) 
                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[0x0000000dU])) 
               | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_01))) 
                    & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_data_d1[5U]) 
                   | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_01))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_data_d1[5U])) 
                  | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_01))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_d1[5U]) 
                     | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_01))) 
                        & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_data_d1[5U]))));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[6U] 
            = ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_01))) 
                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[6U]) 
                | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_01))) 
                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[0x0000000eU])) 
               | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_01))) 
                    & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_data_d1[6U]) 
                   | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_01))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_data_d1[6U])) 
                  | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_01))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_d1[6U]) 
                     | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_01))) 
                        & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_data_d1[6U]))));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[7U] 
            = ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_01))) 
                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[7U]) 
                | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_01))) 
                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[0x0000000fU])) 
               | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_01))) 
                    & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_data_d1[7U]) 
                   | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_01))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_data_d1[7U])) 
                  | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_01))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_d1[7U]) 
                     | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_01))) 
                        & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_data_d1[7U]))));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_re_r0 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_re_01;
    }
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__radclk 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__re_lat));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__weclk 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__we_lat));
    if (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__debug_mode_sync)
          ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__re_q)
          : (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__debug_mode_sync))) {
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_Data_r0[0U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__r0_dout_tmp2[0U];
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_Data_r0[1U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__r0_dout_tmp2[1U];
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_Data_r0[2U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__r0_dout_tmp2[2U];
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_Data_r0[3U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__r0_dout_tmp2[3U];
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_Data_r0[4U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__r0_dout_tmp2[4U];
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_Data_r0[5U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__r0_dout_tmp2[5U];
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_Data_r0[6U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__r0_dout_tmp2[6U];
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_Data_r0[7U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__r0_dout_tmp2[7U];
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_Data_r0[0U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[0U];
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_Data_r0[1U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[1U];
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_Data_r0[2U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[2U];
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_Data_r0[3U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[3U];
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_Data_r0[4U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[4U];
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_Data_r0[5U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[5U];
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_Data_r0[6U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[6U];
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_Data_r0[7U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[7U];
    }
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__bitclk[0U] 
        = (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__weclk)));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__bitclk[1U] 
        = (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__weclk)));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__bitclk[2U] 
        = (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__weclk)));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__bitclk[3U] 
        = (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__weclk)));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__bitclk[4U] 
        = (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__weclk)));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__bitclk[5U] 
        = (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__weclk)));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__bitclk[6U] 
        = (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__weclk)));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__bitclk[7U] 
        = (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__weclk)));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__collision_ff_clk[0U] 
        = ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__weclk))) 
           & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__radclk))) 
              & (- (IData)(((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__ra_lat) 
                            == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__wa_lat))))));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__collision_ff_clk[1U] 
        = ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__weclk))) 
           & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__radclk))) 
              & (- (IData)(((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__ra_lat) 
                            == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__wa_lat))))));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__collision_ff_clk[2U] 
        = ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__weclk))) 
           & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__radclk))) 
              & (- (IData)(((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__ra_lat) 
                            == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__wa_lat))))));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__collision_ff_clk[3U] 
        = ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__weclk))) 
           & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__radclk))) 
              & (- (IData)(((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__ra_lat) 
                            == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__wa_lat))))));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__collision_ff_clk[4U] 
        = ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__weclk))) 
           & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__radclk))) 
              & (- (IData)(((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__ra_lat) 
                            == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__wa_lat))))));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__collision_ff_clk[5U] 
        = ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__weclk))) 
           & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__radclk))) 
              & (- (IData)(((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__ra_lat) 
                            == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__wa_lat))))));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__collision_ff_clk[6U] 
        = ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__weclk))) 
           & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__radclk))) 
              & (- (IData)(((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__ra_lat) 
                            == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__wa_lat))))));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__collision_ff_clk[7U] 
        = ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__weclk))) 
           & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__radclk))) 
              & (- (IData)(((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__ra_lat) 
                            == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__wa_lat))))));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__a = 0U;
    while (VL_GTS_III(32, 0x00000100U, vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__a)) {
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__r0_dout_tmp[(7U 
                                                                                & (vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__a 
                                                                                >> 5U))] 
            = (((~ ((IData)(1U) << (0x0000001fU & vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__a))) 
                & vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__r0_dout_tmp[
                (7U & (vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__a 
                       >> 5U))]) | (((1U & (~ ((vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__collision_ff[
                                                (7U 
                                                 & (vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__a 
                                                    >> 5U))] 
                                                >> 
                                                (0x0000001fU 
                                                 & vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__a)) 
                                               | ((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__ra_lat) 
                                                    == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__wa_lat)) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__weclk)) 
                                                  & (Vsim__ConstPool__CONST_h5b979007_0[
                                                     (7U 
                                                      & (vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__a 
                                                         >> 5U))] 
                                                     >> 
                                                     (0x0000001fU 
                                                      & vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__a)))))) 
                                     && (1U & (vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__array
                                               [vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__ra_lat][
                                               (7U 
                                                & (vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__a 
                                                   >> 5U))] 
                                               >> (0x0000001fU 
                                                   & vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__a)))) 
                                    << (0x0000001fU 
                                        & vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__a)));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__a 
            = ((IData)(1U) + vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__a);
    }
}

VL_ATTR_COLD void Vsim_nv_ram_rws_16x256___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_02__0(Vsim_nv_ram_rws_16x256* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_16x256___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_02__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__pre_Ra_reg_r0 
        = ((((IData)(vlSelfRef.r_nv_ram_rws_16x256__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
             << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_16x256__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                       << 2U)) | (((IData)(vlSelfRef.r_nv_ram_rws_16x256__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                   << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_16x256__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__posedge_updateDR_sync 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__updateDR_sync_1p)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__pre_Wa_reg_w0 
        = ((((IData)(vlSelfRef.r_nv_ram_rws_16x256__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
             << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_16x256__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                       << 2U)) | (((IData)(vlSelfRef.r_nv_ram_rws_16x256__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                   << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_16x256__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_la_bist_clkw0_gate__DOT__E 
        = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__debug_mode_sync;
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[0U] 
        = (((((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__31__KET____DOT__SSS__DOT__nr__Q) 
                  << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__30__KET____DOT__SSS__DOT__nr__Q) 
                            << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__29__KET____DOT__SSS__DOT__nr__Q) 
                                        << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__28__KET____DOT__SSS__DOT__nr__Q))) 
               << 0x0000000cU) | (((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__27__KET____DOT__SSS__DOT__nr__Q) 
                                     << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__26__KET____DOT__SSS__DOT__nr__Q) 
                                               << 2U)) 
                                   | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__25__KET____DOT__SSS__DOT__nr__Q) 
                                       << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__24__KET____DOT__SSS__DOT__nr__Q))) 
                                  << 8U)) | ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__23__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__22__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__21__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__20__KET____DOT__SSS__DOT__nr__Q))) 
                                              << 4U) 
                                             | ((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__19__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__18__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 2U)) 
                                                | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__17__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__16__KET____DOT__SSS__DOT__nr__Q))))) 
            << 0x00000010U) | (((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__15__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__14__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__13__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__12__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 0x0000000cU) | 
                                (((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__11__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__10__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__9__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__8__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 8U)) | ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                                << 3U) 
                                               | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 2U)) 
                                              | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q))) 
                                             << 4U) 
                                            | ((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q))))));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[1U] 
        = (((((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__63__KET____DOT__SSS__DOT__nr__Q) 
                  << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__62__KET____DOT__SSS__DOT__nr__Q) 
                            << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__61__KET____DOT__SSS__DOT__nr__Q) 
                                        << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__60__KET____DOT__SSS__DOT__nr__Q))) 
               << 0x0000000cU) | (((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__59__KET____DOT__SSS__DOT__nr__Q) 
                                     << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__58__KET____DOT__SSS__DOT__nr__Q) 
                                               << 2U)) 
                                   | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__57__KET____DOT__SSS__DOT__nr__Q) 
                                       << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__56__KET____DOT__SSS__DOT__nr__Q))) 
                                  << 8U)) | ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__55__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__54__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__53__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__52__KET____DOT__SSS__DOT__nr__Q))) 
                                              << 4U) 
                                             | ((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__51__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__50__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 2U)) 
                                                | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__49__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__48__KET____DOT__SSS__DOT__nr__Q))))) 
            << 0x00000010U) | (((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__47__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__46__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__45__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__44__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 0x0000000cU) | 
                                (((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__43__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__42__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__41__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__40__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 8U)) | ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__39__KET____DOT__SSS__DOT__nr__Q) 
                                                << 3U) 
                                               | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__38__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 2U)) 
                                              | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__37__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__36__KET____DOT__SSS__DOT__nr__Q))) 
                                             << 4U) 
                                            | ((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__35__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__34__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__33__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__32__KET____DOT__SSS__DOT__nr__Q))))));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[2U] 
        = (((((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__95__KET____DOT__SSS__DOT__nr__Q) 
                  << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__94__KET____DOT__SSS__DOT__nr__Q) 
                            << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__93__KET____DOT__SSS__DOT__nr__Q) 
                                        << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__92__KET____DOT__SSS__DOT__nr__Q))) 
               << 0x0000000cU) | (((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__91__KET____DOT__SSS__DOT__nr__Q) 
                                     << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__90__KET____DOT__SSS__DOT__nr__Q) 
                                               << 2U)) 
                                   | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__89__KET____DOT__SSS__DOT__nr__Q) 
                                       << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__88__KET____DOT__SSS__DOT__nr__Q))) 
                                  << 8U)) | ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__87__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__86__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__85__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__84__KET____DOT__SSS__DOT__nr__Q))) 
                                              << 4U) 
                                             | ((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__83__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__82__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 2U)) 
                                                | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__81__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__80__KET____DOT__SSS__DOT__nr__Q))))) 
            << 0x00000010U) | (((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__79__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__78__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__77__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__76__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 0x0000000cU) | 
                                (((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__75__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__74__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__73__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__72__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 8U)) | ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__71__KET____DOT__SSS__DOT__nr__Q) 
                                                << 3U) 
                                               | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__70__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 2U)) 
                                              | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__69__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__68__KET____DOT__SSS__DOT__nr__Q))) 
                                             << 4U) 
                                            | ((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__67__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__66__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__65__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__64__KET____DOT__SSS__DOT__nr__Q))))));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[3U] 
        = (((((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__127__KET____DOT__SSS__DOT__nr__Q) 
                  << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__126__KET____DOT__SSS__DOT__nr__Q) 
                            << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__125__KET____DOT__SSS__DOT__nr__Q) 
                                        << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__124__KET____DOT__SSS__DOT__nr__Q))) 
               << 0x0000000cU) | (((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__123__KET____DOT__SSS__DOT__nr__Q) 
                                     << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__122__KET____DOT__SSS__DOT__nr__Q) 
                                               << 2U)) 
                                   | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__121__KET____DOT__SSS__DOT__nr__Q) 
                                       << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__120__KET____DOT__SSS__DOT__nr__Q))) 
                                  << 8U)) | ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__119__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__118__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__117__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__116__KET____DOT__SSS__DOT__nr__Q))) 
                                              << 4U) 
                                             | ((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__115__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__114__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 2U)) 
                                                | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__113__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__112__KET____DOT__SSS__DOT__nr__Q))))) 
            << 0x00000010U) | (((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__111__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__110__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__109__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__108__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 0x0000000cU) | 
                                (((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__107__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__106__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__105__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__104__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 8U)) | ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__103__KET____DOT__SSS__DOT__nr__Q) 
                                                << 3U) 
                                               | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__102__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 2U)) 
                                              | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__101__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__100__KET____DOT__SSS__DOT__nr__Q))) 
                                             << 4U) 
                                            | ((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__99__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__98__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__97__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__96__KET____DOT__SSS__DOT__nr__Q))))));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[4U] 
        = (((((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__159__KET____DOT__SSS__DOT__nr__Q) 
                  << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__158__KET____DOT__SSS__DOT__nr__Q) 
                            << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__157__KET____DOT__SSS__DOT__nr__Q) 
                                        << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__156__KET____DOT__SSS__DOT__nr__Q))) 
               << 0x0000000cU) | (((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__155__KET____DOT__SSS__DOT__nr__Q) 
                                     << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__154__KET____DOT__SSS__DOT__nr__Q) 
                                               << 2U)) 
                                   | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__153__KET____DOT__SSS__DOT__nr__Q) 
                                       << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__152__KET____DOT__SSS__DOT__nr__Q))) 
                                  << 8U)) | ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__151__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__150__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__149__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__148__KET____DOT__SSS__DOT__nr__Q))) 
                                              << 4U) 
                                             | ((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__147__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__146__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 2U)) 
                                                | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__145__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__144__KET____DOT__SSS__DOT__nr__Q))))) 
            << 0x00000010U) | (((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__143__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__142__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__141__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__140__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 0x0000000cU) | 
                                (((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__139__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__138__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__137__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__136__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 8U)) | ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__135__KET____DOT__SSS__DOT__nr__Q) 
                                                << 3U) 
                                               | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__134__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 2U)) 
                                              | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__133__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__132__KET____DOT__SSS__DOT__nr__Q))) 
                                             << 4U) 
                                            | ((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__131__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__130__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__129__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__128__KET____DOT__SSS__DOT__nr__Q))))));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[5U] 
        = (((((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__191__KET____DOT__SSS__DOT__nr__Q) 
                  << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__190__KET____DOT__SSS__DOT__nr__Q) 
                            << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__189__KET____DOT__SSS__DOT__nr__Q) 
                                        << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__188__KET____DOT__SSS__DOT__nr__Q))) 
               << 0x0000000cU) | (((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__187__KET____DOT__SSS__DOT__nr__Q) 
                                     << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__186__KET____DOT__SSS__DOT__nr__Q) 
                                               << 2U)) 
                                   | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__185__KET____DOT__SSS__DOT__nr__Q) 
                                       << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__184__KET____DOT__SSS__DOT__nr__Q))) 
                                  << 8U)) | ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__183__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__182__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__181__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__180__KET____DOT__SSS__DOT__nr__Q))) 
                                              << 4U) 
                                             | ((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__179__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__178__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 2U)) 
                                                | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__177__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__176__KET____DOT__SSS__DOT__nr__Q))))) 
            << 0x00000010U) | (((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__175__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__174__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__173__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__172__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 0x0000000cU) | 
                                (((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__171__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__170__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__169__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__168__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 8U)) | ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__167__KET____DOT__SSS__DOT__nr__Q) 
                                                << 3U) 
                                               | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__166__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 2U)) 
                                              | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__165__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__164__KET____DOT__SSS__DOT__nr__Q))) 
                                             << 4U) 
                                            | ((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__163__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__162__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__161__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__160__KET____DOT__SSS__DOT__nr__Q))))));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[6U] 
        = (((((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__223__KET____DOT__SSS__DOT__nr__Q) 
                  << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__222__KET____DOT__SSS__DOT__nr__Q) 
                            << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__221__KET____DOT__SSS__DOT__nr__Q) 
                                        << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__220__KET____DOT__SSS__DOT__nr__Q))) 
               << 0x0000000cU) | (((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__219__KET____DOT__SSS__DOT__nr__Q) 
                                     << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__218__KET____DOT__SSS__DOT__nr__Q) 
                                               << 2U)) 
                                   | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__217__KET____DOT__SSS__DOT__nr__Q) 
                                       << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__216__KET____DOT__SSS__DOT__nr__Q))) 
                                  << 8U)) | ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__215__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__214__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__213__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__212__KET____DOT__SSS__DOT__nr__Q))) 
                                              << 4U) 
                                             | ((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__211__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__210__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 2U)) 
                                                | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__209__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__208__KET____DOT__SSS__DOT__nr__Q))))) 
            << 0x00000010U) | (((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__207__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__206__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__205__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__204__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 0x0000000cU) | 
                                (((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__203__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__202__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__201__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__200__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 8U)) | ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__199__KET____DOT__SSS__DOT__nr__Q) 
                                                << 3U) 
                                               | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__198__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 2U)) 
                                              | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__197__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__196__KET____DOT__SSS__DOT__nr__Q))) 
                                             << 4U) 
                                            | ((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__195__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__194__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__193__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__192__KET____DOT__SSS__DOT__nr__Q))))));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[7U] 
        = (((((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__255__KET____DOT__SSS__DOT__nr__Q) 
                  << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__254__KET____DOT__SSS__DOT__nr__Q) 
                            << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__253__KET____DOT__SSS__DOT__nr__Q) 
                                        << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__252__KET____DOT__SSS__DOT__nr__Q))) 
               << 0x0000000cU) | (((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__251__KET____DOT__SSS__DOT__nr__Q) 
                                     << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__250__KET____DOT__SSS__DOT__nr__Q) 
                                               << 2U)) 
                                   | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__249__KET____DOT__SSS__DOT__nr__Q) 
                                       << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__248__KET____DOT__SSS__DOT__nr__Q))) 
                                  << 8U)) | ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__247__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__246__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__245__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__244__KET____DOT__SSS__DOT__nr__Q))) 
                                              << 4U) 
                                             | ((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__243__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__242__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 2U)) 
                                                | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__241__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__240__KET____DOT__SSS__DOT__nr__Q))))) 
            << 0x00000010U) | (((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__239__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__238__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__237__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__236__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 0x0000000cU) | 
                                (((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__235__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__234__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__233__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__232__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 8U)) | ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__231__KET____DOT__SSS__DOT__nr__Q) 
                                                << 3U) 
                                               | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__230__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 2U)) 
                                              | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__229__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__228__KET____DOT__SSS__DOT__nr__Q))) 
                                             << 4U) 
                                            | ((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__227__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__226__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__225__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__224__KET____DOT__SSS__DOT__nr__Q))))));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__nvdla_op_gated_clk_buffer) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__nvdla_op_gated_clk_buffer) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__CLK_GATE_clk__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__testInst_Ra_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__nvdla_op_gated_clk_buffer) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__nvdla_op_gated_clk_buffer) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__access_en_r 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__re_q));
    if (vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__debug_mode_sync) {
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__RA 
                = (0x0000000fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__pre_Ra_reg_r0));
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WA 
                = (0x0000000fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__pre_Wa_reg_w0));
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[0U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[0U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[1U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[1U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[2U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[2U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[3U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[3U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[4U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[4U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[5U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[5U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[6U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[6U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[7U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[7U];
        } else {
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__RA 
                = (0x0000000fU & 0U);
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WA 
                = (0x0000000fU & 0U);
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[0U] 
                = Vsim__ConstPool__CONST_h9e67c271_0[0U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[1U] 
                = Vsim__ConstPool__CONST_h9e67c271_0[1U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[2U] 
                = Vsim__ConstPool__CONST_h9e67c271_0[2U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[3U] 
                = Vsim__ConstPool__CONST_h9e67c271_0[3U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[4U] 
                = Vsim__ConstPool__CONST_h9e67c271_0[4U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[5U] 
                = Vsim__ConstPool__CONST_h9e67c271_0[5U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[6U] 
                = Vsim__ConstPool__CONST_h9e67c271_0[6U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[7U] 
                = Vsim__ConstPool__CONST_h9e67c271_0[7U];
        }
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_we_w0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__debug_mode_sync) 
                  && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__posedge_updateDR_sync) 
                      & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__we_q))));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_re_r0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__debug_mode_sync) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__access_en_r)));
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__RA 
            = (0x0000000fU & ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_rd_sel_02))) 
                                & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dc2sbuf_p0_rd_addr)) 
                               | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_rd_sel_02))) 
                                  & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dc2sbuf_p1_rd_addr))) 
                              | ((IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_3659) 
                                 | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_rd_sel_02))) 
                                     & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__rd_p0_addr_d1)) 
                                    | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_rd_sel_02))) 
                                       & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__rd_p1_addr_d1))))));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WA 
            = (0x0000000fU & ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_02))) 
                                & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dc2sbuf_p0_wr_addr)) 
                               | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_02))) 
                                  & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dc2sbuf_p1_wr_addr))) 
                              | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_02))) 
                                   & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_idx_d1)) 
                                  | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_02))) 
                                     & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_idx_d1))) 
                                 | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_02))) 
                                     & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_addr_d1)) 
                                    | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_02))) 
                                       & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_addr_d1))))));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_we_w0 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_we_02;
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[0U] 
            = ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_02))) 
                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[0U]) 
                | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_02))) 
                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[8U])) 
               | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_02))) 
                    & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_data_d1[0U]) 
                   | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_02))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_data_d1[0U])) 
                  | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_02))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_d1[0U]) 
                     | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_02))) 
                        & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_data_d1[0U]))));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[1U] 
            = ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_02))) 
                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[1U]) 
                | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_02))) 
                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[9U])) 
               | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_02))) 
                    & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_data_d1[1U]) 
                   | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_02))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_data_d1[1U])) 
                  | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_02))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_d1[1U]) 
                     | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_02))) 
                        & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_data_d1[1U]))));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[2U] 
            = ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_02))) 
                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[2U]) 
                | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_02))) 
                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[0x0000000aU])) 
               | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_02))) 
                    & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_data_d1[2U]) 
                   | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_02))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_data_d1[2U])) 
                  | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_02))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_d1[2U]) 
                     | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_02))) 
                        & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_data_d1[2U]))));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[3U] 
            = ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_02))) 
                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[3U]) 
                | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_02))) 
                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[0x0000000bU])) 
               | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_02))) 
                    & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_data_d1[3U]) 
                   | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_02))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_data_d1[3U])) 
                  | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_02))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_d1[3U]) 
                     | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_02))) 
                        & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_data_d1[3U]))));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[4U] 
            = ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_02))) 
                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[4U]) 
                | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_02))) 
                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[0x0000000cU])) 
               | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_02))) 
                    & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_data_d1[4U]) 
                   | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_02))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_data_d1[4U])) 
                  | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_02))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_d1[4U]) 
                     | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_02))) 
                        & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_data_d1[4U]))));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[5U] 
            = ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_02))) 
                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[5U]) 
                | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_02))) 
                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[0x0000000dU])) 
               | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_02))) 
                    & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_data_d1[5U]) 
                   | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_02))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_data_d1[5U])) 
                  | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_02))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_d1[5U]) 
                     | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_02))) 
                        & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_data_d1[5U]))));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[6U] 
            = ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_02))) 
                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[6U]) 
                | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_02))) 
                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[0x0000000eU])) 
               | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_02))) 
                    & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_data_d1[6U]) 
                   | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_02))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_data_d1[6U])) 
                  | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_02))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_d1[6U]) 
                     | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_02))) 
                        & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_data_d1[6U]))));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[7U] 
            = ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_02))) 
                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[7U]) 
                | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_02))) 
                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[0x0000000fU])) 
               | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_02))) 
                    & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_data_d1[7U]) 
                   | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_02))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_data_d1[7U])) 
                  | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_02))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_d1[7U]) 
                     | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_02))) 
                        & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_data_d1[7U]))));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_re_r0 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_re_02;
    }
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__radclk 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__re_lat));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__weclk 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__we_lat));
    if (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__debug_mode_sync)
          ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__re_q)
          : (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__debug_mode_sync))) {
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_Data_r0[0U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__r0_dout_tmp2[0U];
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_Data_r0[1U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__r0_dout_tmp2[1U];
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_Data_r0[2U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__r0_dout_tmp2[2U];
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_Data_r0[3U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__r0_dout_tmp2[3U];
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_Data_r0[4U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__r0_dout_tmp2[4U];
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_Data_r0[5U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__r0_dout_tmp2[5U];
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_Data_r0[6U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__r0_dout_tmp2[6U];
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_Data_r0[7U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__r0_dout_tmp2[7U];
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_Data_r0[0U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[0U];
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_Data_r0[1U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[1U];
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_Data_r0[2U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[2U];
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_Data_r0[3U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[3U];
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_Data_r0[4U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[4U];
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_Data_r0[5U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[5U];
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_Data_r0[6U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[6U];
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_Data_r0[7U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[7U];
    }
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__bitclk[0U] 
        = (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__weclk)));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__bitclk[1U] 
        = (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__weclk)));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__bitclk[2U] 
        = (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__weclk)));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__bitclk[3U] 
        = (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__weclk)));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__bitclk[4U] 
        = (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__weclk)));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__bitclk[5U] 
        = (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__weclk)));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__bitclk[6U] 
        = (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__weclk)));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__bitclk[7U] 
        = (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__weclk)));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__collision_ff_clk[0U] 
        = ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__weclk))) 
           & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__radclk))) 
              & (- (IData)(((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__ra_lat) 
                            == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__wa_lat))))));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__collision_ff_clk[1U] 
        = ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__weclk))) 
           & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__radclk))) 
              & (- (IData)(((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__ra_lat) 
                            == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__wa_lat))))));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__collision_ff_clk[2U] 
        = ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__weclk))) 
           & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__radclk))) 
              & (- (IData)(((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__ra_lat) 
                            == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__wa_lat))))));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__collision_ff_clk[3U] 
        = ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__weclk))) 
           & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__radclk))) 
              & (- (IData)(((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__ra_lat) 
                            == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__wa_lat))))));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__collision_ff_clk[4U] 
        = ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__weclk))) 
           & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__radclk))) 
              & (- (IData)(((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__ra_lat) 
                            == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__wa_lat))))));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__collision_ff_clk[5U] 
        = ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__weclk))) 
           & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__radclk))) 
              & (- (IData)(((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__ra_lat) 
                            == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__wa_lat))))));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__collision_ff_clk[6U] 
        = ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__weclk))) 
           & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__radclk))) 
              & (- (IData)(((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__ra_lat) 
                            == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__wa_lat))))));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__collision_ff_clk[7U] 
        = ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__weclk))) 
           & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__radclk))) 
              & (- (IData)(((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__ra_lat) 
                            == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__wa_lat))))));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__a = 0U;
    while (VL_GTS_III(32, 0x00000100U, vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__a)) {
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__r0_dout_tmp[(7U 
                                                                                & (vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__a 
                                                                                >> 5U))] 
            = (((~ ((IData)(1U) << (0x0000001fU & vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__a))) 
                & vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__r0_dout_tmp[
                (7U & (vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__a 
                       >> 5U))]) | (((1U & (~ ((vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__collision_ff[
                                                (7U 
                                                 & (vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__a 
                                                    >> 5U))] 
                                                >> 
                                                (0x0000001fU 
                                                 & vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__a)) 
                                               | ((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__ra_lat) 
                                                    == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__wa_lat)) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__weclk)) 
                                                  & (Vsim__ConstPool__CONST_h5b979007_0[
                                                     (7U 
                                                      & (vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__a 
                                                         >> 5U))] 
                                                     >> 
                                                     (0x0000001fU 
                                                      & vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__a)))))) 
                                     && (1U & (vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__array
                                               [vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__ra_lat][
                                               (7U 
                                                & (vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__a 
                                                   >> 5U))] 
                                               >> (0x0000001fU 
                                                   & vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__a)))) 
                                    << (0x0000001fU 
                                        & vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__a)));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__a 
            = ((IData)(1U) + vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__a);
    }
}

VL_ATTR_COLD void Vsim_nv_ram_rws_16x256___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_03__0(Vsim_nv_ram_rws_16x256* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_16x256___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_03__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__pre_Ra_reg_r0 
        = ((((IData)(vlSelfRef.r_nv_ram_rws_16x256__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
             << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_16x256__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                       << 2U)) | (((IData)(vlSelfRef.r_nv_ram_rws_16x256__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                   << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_16x256__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__posedge_updateDR_sync 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__updateDR_sync_1p)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__pre_Wa_reg_w0 
        = ((((IData)(vlSelfRef.r_nv_ram_rws_16x256__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
             << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_16x256__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                       << 2U)) | (((IData)(vlSelfRef.r_nv_ram_rws_16x256__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                   << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_16x256__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_la_bist_clkw0_gate__DOT__E 
        = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__debug_mode_sync;
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[0U] 
        = (((((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__31__KET____DOT__SSS__DOT__nr__Q) 
                  << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__30__KET____DOT__SSS__DOT__nr__Q) 
                            << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__29__KET____DOT__SSS__DOT__nr__Q) 
                                        << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__28__KET____DOT__SSS__DOT__nr__Q))) 
               << 0x0000000cU) | (((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__27__KET____DOT__SSS__DOT__nr__Q) 
                                     << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__26__KET____DOT__SSS__DOT__nr__Q) 
                                               << 2U)) 
                                   | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__25__KET____DOT__SSS__DOT__nr__Q) 
                                       << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__24__KET____DOT__SSS__DOT__nr__Q))) 
                                  << 8U)) | ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__23__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__22__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__21__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__20__KET____DOT__SSS__DOT__nr__Q))) 
                                              << 4U) 
                                             | ((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__19__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__18__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 2U)) 
                                                | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__17__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__16__KET____DOT__SSS__DOT__nr__Q))))) 
            << 0x00000010U) | (((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__15__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__14__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__13__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__12__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 0x0000000cU) | 
                                (((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__11__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__10__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__9__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__8__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 8U)) | ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                                << 3U) 
                                               | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 2U)) 
                                              | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q))) 
                                             << 4U) 
                                            | ((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q))))));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[1U] 
        = (((((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__63__KET____DOT__SSS__DOT__nr__Q) 
                  << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__62__KET____DOT__SSS__DOT__nr__Q) 
                            << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__61__KET____DOT__SSS__DOT__nr__Q) 
                                        << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__60__KET____DOT__SSS__DOT__nr__Q))) 
               << 0x0000000cU) | (((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__59__KET____DOT__SSS__DOT__nr__Q) 
                                     << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__58__KET____DOT__SSS__DOT__nr__Q) 
                                               << 2U)) 
                                   | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__57__KET____DOT__SSS__DOT__nr__Q) 
                                       << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__56__KET____DOT__SSS__DOT__nr__Q))) 
                                  << 8U)) | ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__55__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__54__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__53__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__52__KET____DOT__SSS__DOT__nr__Q))) 
                                              << 4U) 
                                             | ((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__51__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__50__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 2U)) 
                                                | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__49__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__48__KET____DOT__SSS__DOT__nr__Q))))) 
            << 0x00000010U) | (((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__47__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__46__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__45__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__44__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 0x0000000cU) | 
                                (((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__43__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__42__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__41__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__40__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 8U)) | ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__39__KET____DOT__SSS__DOT__nr__Q) 
                                                << 3U) 
                                               | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__38__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 2U)) 
                                              | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__37__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__36__KET____DOT__SSS__DOT__nr__Q))) 
                                             << 4U) 
                                            | ((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__35__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__34__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__33__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__32__KET____DOT__SSS__DOT__nr__Q))))));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[2U] 
        = (((((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__95__KET____DOT__SSS__DOT__nr__Q) 
                  << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__94__KET____DOT__SSS__DOT__nr__Q) 
                            << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__93__KET____DOT__SSS__DOT__nr__Q) 
                                        << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__92__KET____DOT__SSS__DOT__nr__Q))) 
               << 0x0000000cU) | (((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__91__KET____DOT__SSS__DOT__nr__Q) 
                                     << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__90__KET____DOT__SSS__DOT__nr__Q) 
                                               << 2U)) 
                                   | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__89__KET____DOT__SSS__DOT__nr__Q) 
                                       << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__88__KET____DOT__SSS__DOT__nr__Q))) 
                                  << 8U)) | ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__87__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__86__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__85__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__84__KET____DOT__SSS__DOT__nr__Q))) 
                                              << 4U) 
                                             | ((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__83__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__82__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 2U)) 
                                                | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__81__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__80__KET____DOT__SSS__DOT__nr__Q))))) 
            << 0x00000010U) | (((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__79__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__78__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__77__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__76__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 0x0000000cU) | 
                                (((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__75__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__74__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__73__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__72__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 8U)) | ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__71__KET____DOT__SSS__DOT__nr__Q) 
                                                << 3U) 
                                               | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__70__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 2U)) 
                                              | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__69__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__68__KET____DOT__SSS__DOT__nr__Q))) 
                                             << 4U) 
                                            | ((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__67__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__66__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__65__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__64__KET____DOT__SSS__DOT__nr__Q))))));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[3U] 
        = (((((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__127__KET____DOT__SSS__DOT__nr__Q) 
                  << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__126__KET____DOT__SSS__DOT__nr__Q) 
                            << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__125__KET____DOT__SSS__DOT__nr__Q) 
                                        << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__124__KET____DOT__SSS__DOT__nr__Q))) 
               << 0x0000000cU) | (((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__123__KET____DOT__SSS__DOT__nr__Q) 
                                     << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__122__KET____DOT__SSS__DOT__nr__Q) 
                                               << 2U)) 
                                   | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__121__KET____DOT__SSS__DOT__nr__Q) 
                                       << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__120__KET____DOT__SSS__DOT__nr__Q))) 
                                  << 8U)) | ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__119__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__118__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__117__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__116__KET____DOT__SSS__DOT__nr__Q))) 
                                              << 4U) 
                                             | ((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__115__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__114__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 2U)) 
                                                | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__113__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__112__KET____DOT__SSS__DOT__nr__Q))))) 
            << 0x00000010U) | (((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__111__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__110__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__109__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__108__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 0x0000000cU) | 
                                (((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__107__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__106__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__105__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__104__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 8U)) | ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__103__KET____DOT__SSS__DOT__nr__Q) 
                                                << 3U) 
                                               | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__102__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 2U)) 
                                              | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__101__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__100__KET____DOT__SSS__DOT__nr__Q))) 
                                             << 4U) 
                                            | ((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__99__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__98__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__97__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__96__KET____DOT__SSS__DOT__nr__Q))))));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[4U] 
        = (((((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__159__KET____DOT__SSS__DOT__nr__Q) 
                  << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__158__KET____DOT__SSS__DOT__nr__Q) 
                            << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__157__KET____DOT__SSS__DOT__nr__Q) 
                                        << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__156__KET____DOT__SSS__DOT__nr__Q))) 
               << 0x0000000cU) | (((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__155__KET____DOT__SSS__DOT__nr__Q) 
                                     << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__154__KET____DOT__SSS__DOT__nr__Q) 
                                               << 2U)) 
                                   | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__153__KET____DOT__SSS__DOT__nr__Q) 
                                       << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__152__KET____DOT__SSS__DOT__nr__Q))) 
                                  << 8U)) | ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__151__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__150__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__149__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__148__KET____DOT__SSS__DOT__nr__Q))) 
                                              << 4U) 
                                             | ((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__147__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__146__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 2U)) 
                                                | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__145__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__144__KET____DOT__SSS__DOT__nr__Q))))) 
            << 0x00000010U) | (((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__143__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__142__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__141__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__140__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 0x0000000cU) | 
                                (((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__139__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__138__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__137__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__136__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 8U)) | ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__135__KET____DOT__SSS__DOT__nr__Q) 
                                                << 3U) 
                                               | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__134__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 2U)) 
                                              | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__133__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__132__KET____DOT__SSS__DOT__nr__Q))) 
                                             << 4U) 
                                            | ((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__131__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__130__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__129__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__128__KET____DOT__SSS__DOT__nr__Q))))));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[5U] 
        = (((((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__191__KET____DOT__SSS__DOT__nr__Q) 
                  << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__190__KET____DOT__SSS__DOT__nr__Q) 
                            << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__189__KET____DOT__SSS__DOT__nr__Q) 
                                        << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__188__KET____DOT__SSS__DOT__nr__Q))) 
               << 0x0000000cU) | (((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__187__KET____DOT__SSS__DOT__nr__Q) 
                                     << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__186__KET____DOT__SSS__DOT__nr__Q) 
                                               << 2U)) 
                                   | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__185__KET____DOT__SSS__DOT__nr__Q) 
                                       << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__184__KET____DOT__SSS__DOT__nr__Q))) 
                                  << 8U)) | ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__183__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__182__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__181__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__180__KET____DOT__SSS__DOT__nr__Q))) 
                                              << 4U) 
                                             | ((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__179__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__178__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 2U)) 
                                                | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__177__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__176__KET____DOT__SSS__DOT__nr__Q))))) 
            << 0x00000010U) | (((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__175__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__174__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__173__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__172__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 0x0000000cU) | 
                                (((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__171__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__170__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__169__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__168__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 8U)) | ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__167__KET____DOT__SSS__DOT__nr__Q) 
                                                << 3U) 
                                               | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__166__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 2U)) 
                                              | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__165__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__164__KET____DOT__SSS__DOT__nr__Q))) 
                                             << 4U) 
                                            | ((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__163__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__162__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__161__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__160__KET____DOT__SSS__DOT__nr__Q))))));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[6U] 
        = (((((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__223__KET____DOT__SSS__DOT__nr__Q) 
                  << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__222__KET____DOT__SSS__DOT__nr__Q) 
                            << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__221__KET____DOT__SSS__DOT__nr__Q) 
                                        << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__220__KET____DOT__SSS__DOT__nr__Q))) 
               << 0x0000000cU) | (((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__219__KET____DOT__SSS__DOT__nr__Q) 
                                     << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__218__KET____DOT__SSS__DOT__nr__Q) 
                                               << 2U)) 
                                   | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__217__KET____DOT__SSS__DOT__nr__Q) 
                                       << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__216__KET____DOT__SSS__DOT__nr__Q))) 
                                  << 8U)) | ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__215__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__214__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__213__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__212__KET____DOT__SSS__DOT__nr__Q))) 
                                              << 4U) 
                                             | ((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__211__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__210__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 2U)) 
                                                | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__209__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__208__KET____DOT__SSS__DOT__nr__Q))))) 
            << 0x00000010U) | (((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__207__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__206__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__205__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__204__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 0x0000000cU) | 
                                (((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__203__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__202__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__201__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__200__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 8U)) | ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__199__KET____DOT__SSS__DOT__nr__Q) 
                                                << 3U) 
                                               | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__198__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 2U)) 
                                              | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__197__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__196__KET____DOT__SSS__DOT__nr__Q))) 
                                             << 4U) 
                                            | ((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__195__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__194__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__193__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__192__KET____DOT__SSS__DOT__nr__Q))))));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[7U] 
        = (((((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__255__KET____DOT__SSS__DOT__nr__Q) 
                  << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__254__KET____DOT__SSS__DOT__nr__Q) 
                            << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__253__KET____DOT__SSS__DOT__nr__Q) 
                                        << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__252__KET____DOT__SSS__DOT__nr__Q))) 
               << 0x0000000cU) | (((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__251__KET____DOT__SSS__DOT__nr__Q) 
                                     << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__250__KET____DOT__SSS__DOT__nr__Q) 
                                               << 2U)) 
                                   | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__249__KET____DOT__SSS__DOT__nr__Q) 
                                       << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__248__KET____DOT__SSS__DOT__nr__Q))) 
                                  << 8U)) | ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__247__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__246__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__245__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__244__KET____DOT__SSS__DOT__nr__Q))) 
                                              << 4U) 
                                             | ((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__243__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__242__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 2U)) 
                                                | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__241__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__240__KET____DOT__SSS__DOT__nr__Q))))) 
            << 0x00000010U) | (((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__239__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__238__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__237__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__236__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 0x0000000cU) | 
                                (((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__235__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__234__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__233__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__232__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 8U)) | ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__231__KET____DOT__SSS__DOT__nr__Q) 
                                                << 3U) 
                                               | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__230__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 2U)) 
                                              | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__229__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__228__KET____DOT__SSS__DOT__nr__Q))) 
                                             << 4U) 
                                            | ((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__227__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__226__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__225__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__224__KET____DOT__SSS__DOT__nr__Q))))));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__nvdla_op_gated_clk_buffer) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__nvdla_op_gated_clk_buffer) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__CLK_GATE_clk__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__testInst_Ra_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__nvdla_op_gated_clk_buffer) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__nvdla_op_gated_clk_buffer) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__access_en_r 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__re_q));
    if (vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__debug_mode_sync) {
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__RA 
                = (0x0000000fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__pre_Ra_reg_r0));
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WA 
                = (0x0000000fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__pre_Wa_reg_w0));
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[0U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[0U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[1U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[1U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[2U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[2U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[3U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[3U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[4U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[4U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[5U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[5U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[6U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[6U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[7U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[7U];
        } else {
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__RA 
                = (0x0000000fU & 0U);
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WA 
                = (0x0000000fU & 0U);
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[0U] 
                = Vsim__ConstPool__CONST_h9e67c271_0[0U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[1U] 
                = Vsim__ConstPool__CONST_h9e67c271_0[1U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[2U] 
                = Vsim__ConstPool__CONST_h9e67c271_0[2U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[3U] 
                = Vsim__ConstPool__CONST_h9e67c271_0[3U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[4U] 
                = Vsim__ConstPool__CONST_h9e67c271_0[4U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[5U] 
                = Vsim__ConstPool__CONST_h9e67c271_0[5U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[6U] 
                = Vsim__ConstPool__CONST_h9e67c271_0[6U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[7U] 
                = Vsim__ConstPool__CONST_h9e67c271_0[7U];
        }
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_we_w0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__debug_mode_sync) 
                  && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__posedge_updateDR_sync) 
                      & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__we_q))));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_re_r0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__debug_mode_sync) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__access_en_r)));
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__RA 
            = (0x0000000fU & ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_rd_sel_03))) 
                                & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dc2sbuf_p0_rd_addr)) 
                               | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_rd_sel_03))) 
                                  & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dc2sbuf_p1_rd_addr))) 
                              | ((IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_3659) 
                                 | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_rd_sel_03))) 
                                     & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__rd_p0_addr_d1)) 
                                    | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_rd_sel_03))) 
                                       & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__rd_p1_addr_d1))))));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WA 
            = (0x0000000fU & ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_03))) 
                                & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dc2sbuf_p0_wr_addr)) 
                               | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_03))) 
                                  & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dc2sbuf_p1_wr_addr))) 
                              | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_03))) 
                                   & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_idx_d1)) 
                                  | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_03))) 
                                     & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_idx_d1))) 
                                 | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_03))) 
                                     & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_addr_d1)) 
                                    | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_03))) 
                                       & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_addr_d1))))));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_we_w0 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_we_03;
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[0U] 
            = ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_03))) 
                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[0U]) 
                | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_03))) 
                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[8U])) 
               | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_03))) 
                    & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_data_d1[0U]) 
                   | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_03))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_data_d1[0U])) 
                  | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_03))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_d1[0U]) 
                     | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_03))) 
                        & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_data_d1[0U]))));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[1U] 
            = ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_03))) 
                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[1U]) 
                | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_03))) 
                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[9U])) 
               | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_03))) 
                    & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_data_d1[1U]) 
                   | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_03))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_data_d1[1U])) 
                  | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_03))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_d1[1U]) 
                     | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_03))) 
                        & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_data_d1[1U]))));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[2U] 
            = ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_03))) 
                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[2U]) 
                | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_03))) 
                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[0x0000000aU])) 
               | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_03))) 
                    & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_data_d1[2U]) 
                   | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_03))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_data_d1[2U])) 
                  | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_03))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_d1[2U]) 
                     | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_03))) 
                        & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_data_d1[2U]))));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[3U] 
            = ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_03))) 
                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[3U]) 
                | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_03))) 
                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[0x0000000bU])) 
               | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_03))) 
                    & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_data_d1[3U]) 
                   | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_03))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_data_d1[3U])) 
                  | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_03))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_d1[3U]) 
                     | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_03))) 
                        & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_data_d1[3U]))));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[4U] 
            = ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_03))) 
                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[4U]) 
                | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_03))) 
                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[0x0000000cU])) 
               | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_03))) 
                    & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_data_d1[4U]) 
                   | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_03))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_data_d1[4U])) 
                  | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_03))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_d1[4U]) 
                     | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_03))) 
                        & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_data_d1[4U]))));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[5U] 
            = ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_03))) 
                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[5U]) 
                | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_03))) 
                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[0x0000000dU])) 
               | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_03))) 
                    & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_data_d1[5U]) 
                   | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_03))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_data_d1[5U])) 
                  | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_03))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_d1[5U]) 
                     | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_03))) 
                        & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_data_d1[5U]))));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[6U] 
            = ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_03))) 
                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[6U]) 
                | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_03))) 
                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[0x0000000eU])) 
               | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_03))) 
                    & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_data_d1[6U]) 
                   | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_03))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_data_d1[6U])) 
                  | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_03))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_d1[6U]) 
                     | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_03))) 
                        & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_data_d1[6U]))));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[7U] 
            = ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_03))) 
                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[7U]) 
                | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_03))) 
                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[0x0000000fU])) 
               | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_03))) 
                    & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_data_d1[7U]) 
                   | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_03))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_data_d1[7U])) 
                  | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_03))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_d1[7U]) 
                     | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_03))) 
                        & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_data_d1[7U]))));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_re_r0 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_re_03;
    }
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__radclk 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__re_lat));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__weclk 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__we_lat));
    if (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__debug_mode_sync)
          ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__re_q)
          : (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__debug_mode_sync))) {
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_Data_r0[0U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__r0_dout_tmp2[0U];
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_Data_r0[1U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__r0_dout_tmp2[1U];
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_Data_r0[2U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__r0_dout_tmp2[2U];
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_Data_r0[3U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__r0_dout_tmp2[3U];
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_Data_r0[4U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__r0_dout_tmp2[4U];
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_Data_r0[5U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__r0_dout_tmp2[5U];
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_Data_r0[6U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__r0_dout_tmp2[6U];
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_Data_r0[7U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__r0_dout_tmp2[7U];
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_Data_r0[0U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[0U];
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_Data_r0[1U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[1U];
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_Data_r0[2U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[2U];
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_Data_r0[3U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[3U];
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_Data_r0[4U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[4U];
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_Data_r0[5U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[5U];
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_Data_r0[6U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[6U];
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_Data_r0[7U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[7U];
    }
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__bitclk[0U] 
        = (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__weclk)));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__bitclk[1U] 
        = (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__weclk)));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__bitclk[2U] 
        = (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__weclk)));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__bitclk[3U] 
        = (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__weclk)));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__bitclk[4U] 
        = (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__weclk)));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__bitclk[5U] 
        = (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__weclk)));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__bitclk[6U] 
        = (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__weclk)));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__bitclk[7U] 
        = (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__weclk)));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__collision_ff_clk[0U] 
        = ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__weclk))) 
           & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__radclk))) 
              & (- (IData)(((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__ra_lat) 
                            == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__wa_lat))))));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__collision_ff_clk[1U] 
        = ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__weclk))) 
           & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__radclk))) 
              & (- (IData)(((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__ra_lat) 
                            == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__wa_lat))))));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__collision_ff_clk[2U] 
        = ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__weclk))) 
           & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__radclk))) 
              & (- (IData)(((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__ra_lat) 
                            == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__wa_lat))))));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__collision_ff_clk[3U] 
        = ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__weclk))) 
           & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__radclk))) 
              & (- (IData)(((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__ra_lat) 
                            == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__wa_lat))))));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__collision_ff_clk[4U] 
        = ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__weclk))) 
           & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__radclk))) 
              & (- (IData)(((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__ra_lat) 
                            == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__wa_lat))))));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__collision_ff_clk[5U] 
        = ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__weclk))) 
           & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__radclk))) 
              & (- (IData)(((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__ra_lat) 
                            == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__wa_lat))))));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__collision_ff_clk[6U] 
        = ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__weclk))) 
           & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__radclk))) 
              & (- (IData)(((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__ra_lat) 
                            == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__wa_lat))))));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__collision_ff_clk[7U] 
        = ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__weclk))) 
           & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__radclk))) 
              & (- (IData)(((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__ra_lat) 
                            == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__wa_lat))))));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__a = 0U;
    while (VL_GTS_III(32, 0x00000100U, vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__a)) {
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__r0_dout_tmp[(7U 
                                                                                & (vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__a 
                                                                                >> 5U))] 
            = (((~ ((IData)(1U) << (0x0000001fU & vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__a))) 
                & vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__r0_dout_tmp[
                (7U & (vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__a 
                       >> 5U))]) | (((1U & (~ ((vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__collision_ff[
                                                (7U 
                                                 & (vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__a 
                                                    >> 5U))] 
                                                >> 
                                                (0x0000001fU 
                                                 & vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__a)) 
                                               | ((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__ra_lat) 
                                                    == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__wa_lat)) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__weclk)) 
                                                  & (Vsim__ConstPool__CONST_h5b979007_0[
                                                     (7U 
                                                      & (vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__a 
                                                         >> 5U))] 
                                                     >> 
                                                     (0x0000001fU 
                                                      & vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__a)))))) 
                                     && (1U & (vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__array
                                               [vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__ra_lat][
                                               (7U 
                                                & (vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__a 
                                                   >> 5U))] 
                                               >> (0x0000001fU 
                                                   & vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__a)))) 
                                    << (0x0000001fU 
                                        & vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__a)));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__a 
            = ((IData)(1U) + vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__a);
    }
}

VL_ATTR_COLD void Vsim_nv_ram_rws_16x256___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_04__0(Vsim_nv_ram_rws_16x256* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_16x256___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_04__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__pre_Ra_reg_r0 
        = ((((IData)(vlSelfRef.r_nv_ram_rws_16x256__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
             << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_16x256__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                       << 2U)) | (((IData)(vlSelfRef.r_nv_ram_rws_16x256__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                   << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_16x256__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__posedge_updateDR_sync 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__updateDR_sync_1p)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__pre_Wa_reg_w0 
        = ((((IData)(vlSelfRef.r_nv_ram_rws_16x256__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
             << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_16x256__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                       << 2U)) | (((IData)(vlSelfRef.r_nv_ram_rws_16x256__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                   << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_16x256__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_la_bist_clkw0_gate__DOT__E 
        = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__debug_mode_sync;
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[0U] 
        = (((((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__31__KET____DOT__SSS__DOT__nr__Q) 
                  << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__30__KET____DOT__SSS__DOT__nr__Q) 
                            << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__29__KET____DOT__SSS__DOT__nr__Q) 
                                        << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__28__KET____DOT__SSS__DOT__nr__Q))) 
               << 0x0000000cU) | (((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__27__KET____DOT__SSS__DOT__nr__Q) 
                                     << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__26__KET____DOT__SSS__DOT__nr__Q) 
                                               << 2U)) 
                                   | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__25__KET____DOT__SSS__DOT__nr__Q) 
                                       << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__24__KET____DOT__SSS__DOT__nr__Q))) 
                                  << 8U)) | ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__23__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__22__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__21__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__20__KET____DOT__SSS__DOT__nr__Q))) 
                                              << 4U) 
                                             | ((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__19__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__18__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 2U)) 
                                                | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__17__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__16__KET____DOT__SSS__DOT__nr__Q))))) 
            << 0x00000010U) | (((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__15__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__14__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__13__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__12__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 0x0000000cU) | 
                                (((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__11__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__10__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__9__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__8__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 8U)) | ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                                << 3U) 
                                               | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 2U)) 
                                              | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q))) 
                                             << 4U) 
                                            | ((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q))))));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[1U] 
        = (((((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__63__KET____DOT__SSS__DOT__nr__Q) 
                  << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__62__KET____DOT__SSS__DOT__nr__Q) 
                            << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__61__KET____DOT__SSS__DOT__nr__Q) 
                                        << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__60__KET____DOT__SSS__DOT__nr__Q))) 
               << 0x0000000cU) | (((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__59__KET____DOT__SSS__DOT__nr__Q) 
                                     << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__58__KET____DOT__SSS__DOT__nr__Q) 
                                               << 2U)) 
                                   | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__57__KET____DOT__SSS__DOT__nr__Q) 
                                       << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__56__KET____DOT__SSS__DOT__nr__Q))) 
                                  << 8U)) | ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__55__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__54__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__53__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__52__KET____DOT__SSS__DOT__nr__Q))) 
                                              << 4U) 
                                             | ((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__51__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__50__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 2U)) 
                                                | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__49__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__48__KET____DOT__SSS__DOT__nr__Q))))) 
            << 0x00000010U) | (((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__47__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__46__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__45__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__44__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 0x0000000cU) | 
                                (((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__43__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__42__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__41__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__40__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 8U)) | ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__39__KET____DOT__SSS__DOT__nr__Q) 
                                                << 3U) 
                                               | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__38__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 2U)) 
                                              | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__37__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__36__KET____DOT__SSS__DOT__nr__Q))) 
                                             << 4U) 
                                            | ((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__35__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__34__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__33__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__32__KET____DOT__SSS__DOT__nr__Q))))));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[2U] 
        = (((((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__95__KET____DOT__SSS__DOT__nr__Q) 
                  << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__94__KET____DOT__SSS__DOT__nr__Q) 
                            << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__93__KET____DOT__SSS__DOT__nr__Q) 
                                        << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__92__KET____DOT__SSS__DOT__nr__Q))) 
               << 0x0000000cU) | (((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__91__KET____DOT__SSS__DOT__nr__Q) 
                                     << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__90__KET____DOT__SSS__DOT__nr__Q) 
                                               << 2U)) 
                                   | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__89__KET____DOT__SSS__DOT__nr__Q) 
                                       << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__88__KET____DOT__SSS__DOT__nr__Q))) 
                                  << 8U)) | ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__87__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__86__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__85__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__84__KET____DOT__SSS__DOT__nr__Q))) 
                                              << 4U) 
                                             | ((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__83__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__82__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 2U)) 
                                                | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__81__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__80__KET____DOT__SSS__DOT__nr__Q))))) 
            << 0x00000010U) | (((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__79__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__78__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__77__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__76__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 0x0000000cU) | 
                                (((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__75__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__74__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__73__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__72__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 8U)) | ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__71__KET____DOT__SSS__DOT__nr__Q) 
                                                << 3U) 
                                               | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__70__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 2U)) 
                                              | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__69__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__68__KET____DOT__SSS__DOT__nr__Q))) 
                                             << 4U) 
                                            | ((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__67__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__66__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__65__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__64__KET____DOT__SSS__DOT__nr__Q))))));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[3U] 
        = (((((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__127__KET____DOT__SSS__DOT__nr__Q) 
                  << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__126__KET____DOT__SSS__DOT__nr__Q) 
                            << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__125__KET____DOT__SSS__DOT__nr__Q) 
                                        << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__124__KET____DOT__SSS__DOT__nr__Q))) 
               << 0x0000000cU) | (((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__123__KET____DOT__SSS__DOT__nr__Q) 
                                     << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__122__KET____DOT__SSS__DOT__nr__Q) 
                                               << 2U)) 
                                   | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__121__KET____DOT__SSS__DOT__nr__Q) 
                                       << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__120__KET____DOT__SSS__DOT__nr__Q))) 
                                  << 8U)) | ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__119__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__118__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__117__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__116__KET____DOT__SSS__DOT__nr__Q))) 
                                              << 4U) 
                                             | ((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__115__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__114__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 2U)) 
                                                | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__113__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__112__KET____DOT__SSS__DOT__nr__Q))))) 
            << 0x00000010U) | (((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__111__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__110__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__109__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__108__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 0x0000000cU) | 
                                (((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__107__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__106__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__105__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__104__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 8U)) | ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__103__KET____DOT__SSS__DOT__nr__Q) 
                                                << 3U) 
                                               | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__102__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 2U)) 
                                              | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__101__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__100__KET____DOT__SSS__DOT__nr__Q))) 
                                             << 4U) 
                                            | ((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__99__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__98__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__97__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__96__KET____DOT__SSS__DOT__nr__Q))))));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[4U] 
        = (((((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__159__KET____DOT__SSS__DOT__nr__Q) 
                  << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__158__KET____DOT__SSS__DOT__nr__Q) 
                            << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__157__KET____DOT__SSS__DOT__nr__Q) 
                                        << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__156__KET____DOT__SSS__DOT__nr__Q))) 
               << 0x0000000cU) | (((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__155__KET____DOT__SSS__DOT__nr__Q) 
                                     << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__154__KET____DOT__SSS__DOT__nr__Q) 
                                               << 2U)) 
                                   | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__153__KET____DOT__SSS__DOT__nr__Q) 
                                       << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__152__KET____DOT__SSS__DOT__nr__Q))) 
                                  << 8U)) | ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__151__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__150__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__149__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__148__KET____DOT__SSS__DOT__nr__Q))) 
                                              << 4U) 
                                             | ((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__147__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__146__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 2U)) 
                                                | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__145__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__144__KET____DOT__SSS__DOT__nr__Q))))) 
            << 0x00000010U) | (((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__143__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__142__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__141__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__140__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 0x0000000cU) | 
                                (((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__139__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__138__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__137__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__136__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 8U)) | ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__135__KET____DOT__SSS__DOT__nr__Q) 
                                                << 3U) 
                                               | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__134__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 2U)) 
                                              | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__133__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__132__KET____DOT__SSS__DOT__nr__Q))) 
                                             << 4U) 
                                            | ((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__131__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__130__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__129__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__128__KET____DOT__SSS__DOT__nr__Q))))));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[5U] 
        = (((((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__191__KET____DOT__SSS__DOT__nr__Q) 
                  << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__190__KET____DOT__SSS__DOT__nr__Q) 
                            << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__189__KET____DOT__SSS__DOT__nr__Q) 
                                        << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__188__KET____DOT__SSS__DOT__nr__Q))) 
               << 0x0000000cU) | (((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__187__KET____DOT__SSS__DOT__nr__Q) 
                                     << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__186__KET____DOT__SSS__DOT__nr__Q) 
                                               << 2U)) 
                                   | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__185__KET____DOT__SSS__DOT__nr__Q) 
                                       << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__184__KET____DOT__SSS__DOT__nr__Q))) 
                                  << 8U)) | ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__183__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__182__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__181__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__180__KET____DOT__SSS__DOT__nr__Q))) 
                                              << 4U) 
                                             | ((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__179__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__178__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 2U)) 
                                                | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__177__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__176__KET____DOT__SSS__DOT__nr__Q))))) 
            << 0x00000010U) | (((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__175__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__174__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__173__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__172__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 0x0000000cU) | 
                                (((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__171__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__170__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__169__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__168__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 8U)) | ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__167__KET____DOT__SSS__DOT__nr__Q) 
                                                << 3U) 
                                               | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__166__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 2U)) 
                                              | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__165__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__164__KET____DOT__SSS__DOT__nr__Q))) 
                                             << 4U) 
                                            | ((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__163__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__162__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__161__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__160__KET____DOT__SSS__DOT__nr__Q))))));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[6U] 
        = (((((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__223__KET____DOT__SSS__DOT__nr__Q) 
                  << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__222__KET____DOT__SSS__DOT__nr__Q) 
                            << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__221__KET____DOT__SSS__DOT__nr__Q) 
                                        << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__220__KET____DOT__SSS__DOT__nr__Q))) 
               << 0x0000000cU) | (((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__219__KET____DOT__SSS__DOT__nr__Q) 
                                     << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__218__KET____DOT__SSS__DOT__nr__Q) 
                                               << 2U)) 
                                   | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__217__KET____DOT__SSS__DOT__nr__Q) 
                                       << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__216__KET____DOT__SSS__DOT__nr__Q))) 
                                  << 8U)) | ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__215__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__214__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__213__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__212__KET____DOT__SSS__DOT__nr__Q))) 
                                              << 4U) 
                                             | ((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__211__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__210__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 2U)) 
                                                | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__209__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__208__KET____DOT__SSS__DOT__nr__Q))))) 
            << 0x00000010U) | (((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__207__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__206__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__205__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__204__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 0x0000000cU) | 
                                (((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__203__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__202__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__201__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__200__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 8U)) | ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__199__KET____DOT__SSS__DOT__nr__Q) 
                                                << 3U) 
                                               | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__198__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 2U)) 
                                              | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__197__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__196__KET____DOT__SSS__DOT__nr__Q))) 
                                             << 4U) 
                                            | ((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__195__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__194__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__193__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__192__KET____DOT__SSS__DOT__nr__Q))))));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[7U] 
        = (((((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__255__KET____DOT__SSS__DOT__nr__Q) 
                  << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__254__KET____DOT__SSS__DOT__nr__Q) 
                            << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__253__KET____DOT__SSS__DOT__nr__Q) 
                                        << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__252__KET____DOT__SSS__DOT__nr__Q))) 
               << 0x0000000cU) | (((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__251__KET____DOT__SSS__DOT__nr__Q) 
                                     << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__250__KET____DOT__SSS__DOT__nr__Q) 
                                               << 2U)) 
                                   | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__249__KET____DOT__SSS__DOT__nr__Q) 
                                       << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__248__KET____DOT__SSS__DOT__nr__Q))) 
                                  << 8U)) | ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__247__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__246__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__245__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__244__KET____DOT__SSS__DOT__nr__Q))) 
                                              << 4U) 
                                             | ((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__243__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__242__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 2U)) 
                                                | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__241__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__240__KET____DOT__SSS__DOT__nr__Q))))) 
            << 0x00000010U) | (((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__239__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__238__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__237__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__236__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 0x0000000cU) | 
                                (((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__235__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__234__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__233__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__232__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 8U)) | ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__231__KET____DOT__SSS__DOT__nr__Q) 
                                                << 3U) 
                                               | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__230__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 2U)) 
                                              | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__229__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__228__KET____DOT__SSS__DOT__nr__Q))) 
                                             << 4U) 
                                            | ((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__227__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__226__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__225__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__224__KET____DOT__SSS__DOT__nr__Q))))));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__nvdla_op_gated_clk_buffer) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__nvdla_op_gated_clk_buffer) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__CLK_GATE_clk__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__testInst_Ra_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__nvdla_op_gated_clk_buffer) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__nvdla_op_gated_clk_buffer) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__access_en_r 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__re_q));
    if (vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__debug_mode_sync) {
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__RA 
                = (0x0000000fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__pre_Ra_reg_r0));
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WA 
                = (0x0000000fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__pre_Wa_reg_w0));
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[0U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[0U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[1U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[1U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[2U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[2U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[3U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[3U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[4U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[4U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[5U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[5U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[6U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[6U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[7U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[7U];
        } else {
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__RA 
                = (0x0000000fU & 0U);
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WA 
                = (0x0000000fU & 0U);
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[0U] 
                = Vsim__ConstPool__CONST_h9e67c271_0[0U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[1U] 
                = Vsim__ConstPool__CONST_h9e67c271_0[1U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[2U] 
                = Vsim__ConstPool__CONST_h9e67c271_0[2U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[3U] 
                = Vsim__ConstPool__CONST_h9e67c271_0[3U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[4U] 
                = Vsim__ConstPool__CONST_h9e67c271_0[4U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[5U] 
                = Vsim__ConstPool__CONST_h9e67c271_0[5U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[6U] 
                = Vsim__ConstPool__CONST_h9e67c271_0[6U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[7U] 
                = Vsim__ConstPool__CONST_h9e67c271_0[7U];
        }
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_we_w0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__debug_mode_sync) 
                  && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__posedge_updateDR_sync) 
                      & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__we_q))));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_re_r0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__debug_mode_sync) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__access_en_r)));
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__RA 
            = (0x0000000fU & ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_rd_sel_04))) 
                                & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dc2sbuf_p0_rd_addr)) 
                               | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_rd_sel_04))) 
                                  & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dc2sbuf_p1_rd_addr))) 
                              | ((IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_3658) 
                                 | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_rd_sel_04))) 
                                     & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__rd_p0_addr_d1)) 
                                    | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_rd_sel_04))) 
                                       & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__rd_p1_addr_d1))))));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WA 
            = (0x0000000fU & ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_04))) 
                                & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dc2sbuf_p0_wr_addr)) 
                               | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_04))) 
                                  & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dc2sbuf_p1_wr_addr))) 
                              | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_04))) 
                                   & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_idx_d1)) 
                                  | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_04))) 
                                     & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_idx_d1))) 
                                 | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_04))) 
                                     & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_addr_d1)) 
                                    | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_04))) 
                                       & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_addr_d1))))));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_we_w0 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_we_04;
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[0U] 
            = ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_04))) 
                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[0U]) 
                | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_04))) 
                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[8U])) 
               | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_04))) 
                    & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_data_d1[0U]) 
                   | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_04))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_data_d1[0U])) 
                  | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_04))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_d1[0U]) 
                     | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_04))) 
                        & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_data_d1[0U]))));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[1U] 
            = ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_04))) 
                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[1U]) 
                | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_04))) 
                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[9U])) 
               | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_04))) 
                    & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_data_d1[1U]) 
                   | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_04))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_data_d1[1U])) 
                  | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_04))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_d1[1U]) 
                     | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_04))) 
                        & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_data_d1[1U]))));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[2U] 
            = ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_04))) 
                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[2U]) 
                | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_04))) 
                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[0x0000000aU])) 
               | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_04))) 
                    & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_data_d1[2U]) 
                   | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_04))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_data_d1[2U])) 
                  | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_04))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_d1[2U]) 
                     | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_04))) 
                        & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_data_d1[2U]))));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[3U] 
            = ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_04))) 
                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[3U]) 
                | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_04))) 
                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[0x0000000bU])) 
               | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_04))) 
                    & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_data_d1[3U]) 
                   | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_04))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_data_d1[3U])) 
                  | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_04))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_d1[3U]) 
                     | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_04))) 
                        & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_data_d1[3U]))));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[4U] 
            = ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_04))) 
                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[4U]) 
                | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_04))) 
                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[0x0000000cU])) 
               | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_04))) 
                    & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_data_d1[4U]) 
                   | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_04))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_data_d1[4U])) 
                  | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_04))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_d1[4U]) 
                     | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_04))) 
                        & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_data_d1[4U]))));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[5U] 
            = ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_04))) 
                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[5U]) 
                | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_04))) 
                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[0x0000000dU])) 
               | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_04))) 
                    & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_data_d1[5U]) 
                   | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_04))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_data_d1[5U])) 
                  | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_04))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_d1[5U]) 
                     | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_04))) 
                        & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_data_d1[5U]))));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[6U] 
            = ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_04))) 
                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[6U]) 
                | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_04))) 
                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[0x0000000eU])) 
               | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_04))) 
                    & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_data_d1[6U]) 
                   | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_04))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_data_d1[6U])) 
                  | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_04))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_d1[6U]) 
                     | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_04))) 
                        & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_data_d1[6U]))));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[7U] 
            = ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_04))) 
                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[7U]) 
                | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_04))) 
                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[0x0000000fU])) 
               | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_04))) 
                    & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_data_d1[7U]) 
                   | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_04))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_data_d1[7U])) 
                  | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_04))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_d1[7U]) 
                     | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_04))) 
                        & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_data_d1[7U]))));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_re_r0 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_re_04;
    }
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__radclk 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__re_lat));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__weclk 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__we_lat));
    if (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__debug_mode_sync)
          ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__re_q)
          : (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__debug_mode_sync))) {
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_Data_r0[0U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__r0_dout_tmp2[0U];
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_Data_r0[1U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__r0_dout_tmp2[1U];
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_Data_r0[2U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__r0_dout_tmp2[2U];
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_Data_r0[3U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__r0_dout_tmp2[3U];
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_Data_r0[4U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__r0_dout_tmp2[4U];
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_Data_r0[5U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__r0_dout_tmp2[5U];
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_Data_r0[6U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__r0_dout_tmp2[6U];
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_Data_r0[7U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__r0_dout_tmp2[7U];
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_Data_r0[0U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[0U];
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_Data_r0[1U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[1U];
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_Data_r0[2U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[2U];
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_Data_r0[3U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[3U];
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_Data_r0[4U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[4U];
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_Data_r0[5U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[5U];
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_Data_r0[6U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[6U];
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_Data_r0[7U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[7U];
    }
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__bitclk[0U] 
        = (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__weclk)));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__bitclk[1U] 
        = (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__weclk)));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__bitclk[2U] 
        = (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__weclk)));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__bitclk[3U] 
        = (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__weclk)));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__bitclk[4U] 
        = (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__weclk)));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__bitclk[5U] 
        = (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__weclk)));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__bitclk[6U] 
        = (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__weclk)));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__bitclk[7U] 
        = (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__weclk)));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__collision_ff_clk[0U] 
        = ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__weclk))) 
           & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__radclk))) 
              & (- (IData)(((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__ra_lat) 
                            == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__wa_lat))))));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__collision_ff_clk[1U] 
        = ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__weclk))) 
           & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__radclk))) 
              & (- (IData)(((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__ra_lat) 
                            == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__wa_lat))))));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__collision_ff_clk[2U] 
        = ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__weclk))) 
           & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__radclk))) 
              & (- (IData)(((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__ra_lat) 
                            == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__wa_lat))))));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__collision_ff_clk[3U] 
        = ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__weclk))) 
           & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__radclk))) 
              & (- (IData)(((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__ra_lat) 
                            == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__wa_lat))))));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__collision_ff_clk[4U] 
        = ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__weclk))) 
           & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__radclk))) 
              & (- (IData)(((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__ra_lat) 
                            == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__wa_lat))))));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__collision_ff_clk[5U] 
        = ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__weclk))) 
           & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__radclk))) 
              & (- (IData)(((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__ra_lat) 
                            == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__wa_lat))))));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__collision_ff_clk[6U] 
        = ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__weclk))) 
           & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__radclk))) 
              & (- (IData)(((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__ra_lat) 
                            == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__wa_lat))))));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__collision_ff_clk[7U] 
        = ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__weclk))) 
           & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__radclk))) 
              & (- (IData)(((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__ra_lat) 
                            == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__wa_lat))))));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__a = 0U;
    while (VL_GTS_III(32, 0x00000100U, vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__a)) {
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__r0_dout_tmp[(7U 
                                                                                & (vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__a 
                                                                                >> 5U))] 
            = (((~ ((IData)(1U) << (0x0000001fU & vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__a))) 
                & vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__r0_dout_tmp[
                (7U & (vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__a 
                       >> 5U))]) | (((1U & (~ ((vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__collision_ff[
                                                (7U 
                                                 & (vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__a 
                                                    >> 5U))] 
                                                >> 
                                                (0x0000001fU 
                                                 & vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__a)) 
                                               | ((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__ra_lat) 
                                                    == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__wa_lat)) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__weclk)) 
                                                  & (Vsim__ConstPool__CONST_h5b979007_0[
                                                     (7U 
                                                      & (vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__a 
                                                         >> 5U))] 
                                                     >> 
                                                     (0x0000001fU 
                                                      & vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__a)))))) 
                                     && (1U & (vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__array
                                               [vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__ra_lat][
                                               (7U 
                                                & (vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__a 
                                                   >> 5U))] 
                                               >> (0x0000001fU 
                                                   & vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__a)))) 
                                    << (0x0000001fU 
                                        & vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__a)));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__a 
            = ((IData)(1U) + vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__a);
    }
}

VL_ATTR_COLD void Vsim_nv_ram_rws_16x256___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_05__0(Vsim_nv_ram_rws_16x256* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_16x256___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_05__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__pre_Ra_reg_r0 
        = ((((IData)(vlSelfRef.r_nv_ram_rws_16x256__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
             << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_16x256__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                       << 2U)) | (((IData)(vlSelfRef.r_nv_ram_rws_16x256__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                   << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_16x256__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__posedge_updateDR_sync 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__updateDR_sync_1p)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__pre_Wa_reg_w0 
        = ((((IData)(vlSelfRef.r_nv_ram_rws_16x256__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
             << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_16x256__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                       << 2U)) | (((IData)(vlSelfRef.r_nv_ram_rws_16x256__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                   << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_16x256__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_la_bist_clkw0_gate__DOT__E 
        = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__debug_mode_sync;
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[0U] 
        = (((((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__31__KET____DOT__SSS__DOT__nr__Q) 
                  << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__30__KET____DOT__SSS__DOT__nr__Q) 
                            << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__29__KET____DOT__SSS__DOT__nr__Q) 
                                        << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__28__KET____DOT__SSS__DOT__nr__Q))) 
               << 0x0000000cU) | (((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__27__KET____DOT__SSS__DOT__nr__Q) 
                                     << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__26__KET____DOT__SSS__DOT__nr__Q) 
                                               << 2U)) 
                                   | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__25__KET____DOT__SSS__DOT__nr__Q) 
                                       << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__24__KET____DOT__SSS__DOT__nr__Q))) 
                                  << 8U)) | ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__23__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__22__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__21__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__20__KET____DOT__SSS__DOT__nr__Q))) 
                                              << 4U) 
                                             | ((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__19__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__18__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 2U)) 
                                                | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__17__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__16__KET____DOT__SSS__DOT__nr__Q))))) 
            << 0x00000010U) | (((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__15__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__14__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__13__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__12__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 0x0000000cU) | 
                                (((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__11__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__10__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__9__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__8__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 8U)) | ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                                << 3U) 
                                               | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 2U)) 
                                              | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q))) 
                                             << 4U) 
                                            | ((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q))))));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[1U] 
        = (((((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__63__KET____DOT__SSS__DOT__nr__Q) 
                  << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__62__KET____DOT__SSS__DOT__nr__Q) 
                            << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__61__KET____DOT__SSS__DOT__nr__Q) 
                                        << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__60__KET____DOT__SSS__DOT__nr__Q))) 
               << 0x0000000cU) | (((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__59__KET____DOT__SSS__DOT__nr__Q) 
                                     << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__58__KET____DOT__SSS__DOT__nr__Q) 
                                               << 2U)) 
                                   | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__57__KET____DOT__SSS__DOT__nr__Q) 
                                       << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__56__KET____DOT__SSS__DOT__nr__Q))) 
                                  << 8U)) | ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__55__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__54__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__53__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__52__KET____DOT__SSS__DOT__nr__Q))) 
                                              << 4U) 
                                             | ((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__51__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__50__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 2U)) 
                                                | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__49__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__48__KET____DOT__SSS__DOT__nr__Q))))) 
            << 0x00000010U) | (((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__47__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__46__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__45__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__44__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 0x0000000cU) | 
                                (((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__43__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__42__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__41__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__40__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 8U)) | ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__39__KET____DOT__SSS__DOT__nr__Q) 
                                                << 3U) 
                                               | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__38__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 2U)) 
                                              | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__37__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__36__KET____DOT__SSS__DOT__nr__Q))) 
                                             << 4U) 
                                            | ((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__35__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__34__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__33__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__32__KET____DOT__SSS__DOT__nr__Q))))));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[2U] 
        = (((((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__95__KET____DOT__SSS__DOT__nr__Q) 
                  << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__94__KET____DOT__SSS__DOT__nr__Q) 
                            << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__93__KET____DOT__SSS__DOT__nr__Q) 
                                        << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__92__KET____DOT__SSS__DOT__nr__Q))) 
               << 0x0000000cU) | (((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__91__KET____DOT__SSS__DOT__nr__Q) 
                                     << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__90__KET____DOT__SSS__DOT__nr__Q) 
                                               << 2U)) 
                                   | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__89__KET____DOT__SSS__DOT__nr__Q) 
                                       << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__88__KET____DOT__SSS__DOT__nr__Q))) 
                                  << 8U)) | ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__87__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__86__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__85__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__84__KET____DOT__SSS__DOT__nr__Q))) 
                                              << 4U) 
                                             | ((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__83__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__82__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 2U)) 
                                                | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__81__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__80__KET____DOT__SSS__DOT__nr__Q))))) 
            << 0x00000010U) | (((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__79__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__78__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__77__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__76__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 0x0000000cU) | 
                                (((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__75__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__74__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__73__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__72__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 8U)) | ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__71__KET____DOT__SSS__DOT__nr__Q) 
                                                << 3U) 
                                               | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__70__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 2U)) 
                                              | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__69__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__68__KET____DOT__SSS__DOT__nr__Q))) 
                                             << 4U) 
                                            | ((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__67__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__66__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__65__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__64__KET____DOT__SSS__DOT__nr__Q))))));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[3U] 
        = (((((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__127__KET____DOT__SSS__DOT__nr__Q) 
                  << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__126__KET____DOT__SSS__DOT__nr__Q) 
                            << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__125__KET____DOT__SSS__DOT__nr__Q) 
                                        << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__124__KET____DOT__SSS__DOT__nr__Q))) 
               << 0x0000000cU) | (((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__123__KET____DOT__SSS__DOT__nr__Q) 
                                     << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__122__KET____DOT__SSS__DOT__nr__Q) 
                                               << 2U)) 
                                   | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__121__KET____DOT__SSS__DOT__nr__Q) 
                                       << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__120__KET____DOT__SSS__DOT__nr__Q))) 
                                  << 8U)) | ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__119__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__118__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__117__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__116__KET____DOT__SSS__DOT__nr__Q))) 
                                              << 4U) 
                                             | ((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__115__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__114__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 2U)) 
                                                | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__113__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__112__KET____DOT__SSS__DOT__nr__Q))))) 
            << 0x00000010U) | (((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__111__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__110__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__109__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__108__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 0x0000000cU) | 
                                (((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__107__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__106__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__105__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__104__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 8U)) | ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__103__KET____DOT__SSS__DOT__nr__Q) 
                                                << 3U) 
                                               | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__102__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 2U)) 
                                              | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__101__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__100__KET____DOT__SSS__DOT__nr__Q))) 
                                             << 4U) 
                                            | ((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__99__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__98__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__97__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__96__KET____DOT__SSS__DOT__nr__Q))))));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[4U] 
        = (((((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__159__KET____DOT__SSS__DOT__nr__Q) 
                  << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__158__KET____DOT__SSS__DOT__nr__Q) 
                            << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__157__KET____DOT__SSS__DOT__nr__Q) 
                                        << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__156__KET____DOT__SSS__DOT__nr__Q))) 
               << 0x0000000cU) | (((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__155__KET____DOT__SSS__DOT__nr__Q) 
                                     << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__154__KET____DOT__SSS__DOT__nr__Q) 
                                               << 2U)) 
                                   | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__153__KET____DOT__SSS__DOT__nr__Q) 
                                       << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__152__KET____DOT__SSS__DOT__nr__Q))) 
                                  << 8U)) | ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__151__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__150__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__149__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__148__KET____DOT__SSS__DOT__nr__Q))) 
                                              << 4U) 
                                             | ((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__147__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__146__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 2U)) 
                                                | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__145__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__144__KET____DOT__SSS__DOT__nr__Q))))) 
            << 0x00000010U) | (((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__143__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__142__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__141__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__140__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 0x0000000cU) | 
                                (((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__139__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__138__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__137__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__136__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 8U)) | ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__135__KET____DOT__SSS__DOT__nr__Q) 
                                                << 3U) 
                                               | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__134__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 2U)) 
                                              | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__133__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__132__KET____DOT__SSS__DOT__nr__Q))) 
                                             << 4U) 
                                            | ((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__131__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__130__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__129__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__128__KET____DOT__SSS__DOT__nr__Q))))));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[5U] 
        = (((((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__191__KET____DOT__SSS__DOT__nr__Q) 
                  << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__190__KET____DOT__SSS__DOT__nr__Q) 
                            << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__189__KET____DOT__SSS__DOT__nr__Q) 
                                        << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__188__KET____DOT__SSS__DOT__nr__Q))) 
               << 0x0000000cU) | (((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__187__KET____DOT__SSS__DOT__nr__Q) 
                                     << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__186__KET____DOT__SSS__DOT__nr__Q) 
                                               << 2U)) 
                                   | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__185__KET____DOT__SSS__DOT__nr__Q) 
                                       << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__184__KET____DOT__SSS__DOT__nr__Q))) 
                                  << 8U)) | ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__183__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__182__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__181__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__180__KET____DOT__SSS__DOT__nr__Q))) 
                                              << 4U) 
                                             | ((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__179__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__178__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 2U)) 
                                                | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__177__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__176__KET____DOT__SSS__DOT__nr__Q))))) 
            << 0x00000010U) | (((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__175__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__174__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__173__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__172__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 0x0000000cU) | 
                                (((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__171__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__170__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__169__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__168__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 8U)) | ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__167__KET____DOT__SSS__DOT__nr__Q) 
                                                << 3U) 
                                               | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__166__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 2U)) 
                                              | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__165__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__164__KET____DOT__SSS__DOT__nr__Q))) 
                                             << 4U) 
                                            | ((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__163__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__162__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__161__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__160__KET____DOT__SSS__DOT__nr__Q))))));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[6U] 
        = (((((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__223__KET____DOT__SSS__DOT__nr__Q) 
                  << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__222__KET____DOT__SSS__DOT__nr__Q) 
                            << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__221__KET____DOT__SSS__DOT__nr__Q) 
                                        << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__220__KET____DOT__SSS__DOT__nr__Q))) 
               << 0x0000000cU) | (((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__219__KET____DOT__SSS__DOT__nr__Q) 
                                     << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__218__KET____DOT__SSS__DOT__nr__Q) 
                                               << 2U)) 
                                   | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__217__KET____DOT__SSS__DOT__nr__Q) 
                                       << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__216__KET____DOT__SSS__DOT__nr__Q))) 
                                  << 8U)) | ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__215__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__214__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__213__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__212__KET____DOT__SSS__DOT__nr__Q))) 
                                              << 4U) 
                                             | ((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__211__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__210__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 2U)) 
                                                | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__209__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__208__KET____DOT__SSS__DOT__nr__Q))))) 
            << 0x00000010U) | (((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__207__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__206__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__205__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__204__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 0x0000000cU) | 
                                (((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__203__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__202__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__201__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__200__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 8U)) | ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__199__KET____DOT__SSS__DOT__nr__Q) 
                                                << 3U) 
                                               | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__198__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 2U)) 
                                              | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__197__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__196__KET____DOT__SSS__DOT__nr__Q))) 
                                             << 4U) 
                                            | ((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__195__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__194__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__193__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__192__KET____DOT__SSS__DOT__nr__Q))))));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[7U] 
        = (((((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__255__KET____DOT__SSS__DOT__nr__Q) 
                  << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__254__KET____DOT__SSS__DOT__nr__Q) 
                            << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__253__KET____DOT__SSS__DOT__nr__Q) 
                                        << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__252__KET____DOT__SSS__DOT__nr__Q))) 
               << 0x0000000cU) | (((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__251__KET____DOT__SSS__DOT__nr__Q) 
                                     << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__250__KET____DOT__SSS__DOT__nr__Q) 
                                               << 2U)) 
                                   | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__249__KET____DOT__SSS__DOT__nr__Q) 
                                       << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__248__KET____DOT__SSS__DOT__nr__Q))) 
                                  << 8U)) | ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__247__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__246__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__245__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__244__KET____DOT__SSS__DOT__nr__Q))) 
                                              << 4U) 
                                             | ((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__243__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__242__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 2U)) 
                                                | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__241__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__240__KET____DOT__SSS__DOT__nr__Q))))) 
            << 0x00000010U) | (((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__239__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__238__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__237__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__236__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 0x0000000cU) | 
                                (((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__235__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__234__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__233__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__232__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 8U)) | ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__231__KET____DOT__SSS__DOT__nr__Q) 
                                                << 3U) 
                                               | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__230__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 2U)) 
                                              | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__229__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__228__KET____DOT__SSS__DOT__nr__Q))) 
                                             << 4U) 
                                            | ((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__227__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__226__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__225__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__224__KET____DOT__SSS__DOT__nr__Q))))));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__nvdla_op_gated_clk_buffer) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__nvdla_op_gated_clk_buffer) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__CLK_GATE_clk__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__testInst_Ra_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__nvdla_op_gated_clk_buffer) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__nvdla_op_gated_clk_buffer) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__access_en_r 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__re_q));
    if (vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__debug_mode_sync) {
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__RA 
                = (0x0000000fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__pre_Ra_reg_r0));
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WA 
                = (0x0000000fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__pre_Wa_reg_w0));
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[0U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[0U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[1U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[1U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[2U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[2U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[3U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[3U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[4U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[4U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[5U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[5U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[6U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[6U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[7U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[7U];
        } else {
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__RA 
                = (0x0000000fU & 0U);
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WA 
                = (0x0000000fU & 0U);
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[0U] 
                = Vsim__ConstPool__CONST_h9e67c271_0[0U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[1U] 
                = Vsim__ConstPool__CONST_h9e67c271_0[1U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[2U] 
                = Vsim__ConstPool__CONST_h9e67c271_0[2U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[3U] 
                = Vsim__ConstPool__CONST_h9e67c271_0[3U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[4U] 
                = Vsim__ConstPool__CONST_h9e67c271_0[4U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[5U] 
                = Vsim__ConstPool__CONST_h9e67c271_0[5U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[6U] 
                = Vsim__ConstPool__CONST_h9e67c271_0[6U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[7U] 
                = Vsim__ConstPool__CONST_h9e67c271_0[7U];
        }
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_we_w0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__debug_mode_sync) 
                  && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__posedge_updateDR_sync) 
                      & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__we_q))));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_re_r0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__debug_mode_sync) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__access_en_r)));
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__RA 
            = (0x0000000fU & ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_rd_sel_05))) 
                                & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dc2sbuf_p0_rd_addr)) 
                               | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_rd_sel_05))) 
                                  & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dc2sbuf_p1_rd_addr))) 
                              | ((IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_3658) 
                                 | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_rd_sel_05))) 
                                     & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__rd_p0_addr_d1)) 
                                    | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_rd_sel_05))) 
                                       & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__rd_p1_addr_d1))))));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WA 
            = (0x0000000fU & ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_05))) 
                                & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dc2sbuf_p0_wr_addr)) 
                               | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_05))) 
                                  & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dc2sbuf_p1_wr_addr))) 
                              | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_05))) 
                                   & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_idx_d1)) 
                                  | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_05))) 
                                     & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_idx_d1))) 
                                 | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_05))) 
                                     & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_addr_d1)) 
                                    | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_05))) 
                                       & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_addr_d1))))));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_we_w0 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_we_05;
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[0U] 
            = ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_05))) 
                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[0U]) 
                | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_05))) 
                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[8U])) 
               | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_05))) 
                    & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_data_d1[0U]) 
                   | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_05))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_data_d1[0U])) 
                  | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_05))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_d1[0U]) 
                     | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_05))) 
                        & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_data_d1[0U]))));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[1U] 
            = ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_05))) 
                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[1U]) 
                | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_05))) 
                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[9U])) 
               | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_05))) 
                    & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_data_d1[1U]) 
                   | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_05))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_data_d1[1U])) 
                  | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_05))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_d1[1U]) 
                     | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_05))) 
                        & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_data_d1[1U]))));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[2U] 
            = ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_05))) 
                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[2U]) 
                | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_05))) 
                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[0x0000000aU])) 
               | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_05))) 
                    & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_data_d1[2U]) 
                   | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_05))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_data_d1[2U])) 
                  | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_05))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_d1[2U]) 
                     | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_05))) 
                        & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_data_d1[2U]))));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[3U] 
            = ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_05))) 
                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[3U]) 
                | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_05))) 
                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[0x0000000bU])) 
               | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_05))) 
                    & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_data_d1[3U]) 
                   | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_05))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_data_d1[3U])) 
                  | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_05))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_d1[3U]) 
                     | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_05))) 
                        & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_data_d1[3U]))));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[4U] 
            = ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_05))) 
                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[4U]) 
                | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_05))) 
                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[0x0000000cU])) 
               | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_05))) 
                    & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_data_d1[4U]) 
                   | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_05))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_data_d1[4U])) 
                  | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_05))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_d1[4U]) 
                     | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_05))) 
                        & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_data_d1[4U]))));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[5U] 
            = ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_05))) 
                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[5U]) 
                | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_05))) 
                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[0x0000000dU])) 
               | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_05))) 
                    & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_data_d1[5U]) 
                   | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_05))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_data_d1[5U])) 
                  | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_05))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_d1[5U]) 
                     | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_05))) 
                        & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_data_d1[5U]))));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[6U] 
            = ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_05))) 
                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[6U]) 
                | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_05))) 
                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[0x0000000eU])) 
               | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_05))) 
                    & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_data_d1[6U]) 
                   | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_05))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_data_d1[6U])) 
                  | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_05))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_d1[6U]) 
                     | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_05))) 
                        & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_data_d1[6U]))));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[7U] 
            = ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_05))) 
                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[7U]) 
                | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_05))) 
                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[0x0000000fU])) 
               | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_05))) 
                    & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_data_d1[7U]) 
                   | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_05))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_data_d1[7U])) 
                  | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_05))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_d1[7U]) 
                     | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_05))) 
                        & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_data_d1[7U]))));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_re_r0 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_re_05;
    }
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__radclk 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__re_lat));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__weclk 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__we_lat));
    if (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__debug_mode_sync)
          ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__re_q)
          : (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__debug_mode_sync))) {
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_Data_r0[0U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__r0_dout_tmp2[0U];
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_Data_r0[1U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__r0_dout_tmp2[1U];
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_Data_r0[2U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__r0_dout_tmp2[2U];
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_Data_r0[3U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__r0_dout_tmp2[3U];
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_Data_r0[4U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__r0_dout_tmp2[4U];
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_Data_r0[5U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__r0_dout_tmp2[5U];
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_Data_r0[6U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__r0_dout_tmp2[6U];
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_Data_r0[7U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__r0_dout_tmp2[7U];
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_Data_r0[0U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[0U];
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_Data_r0[1U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[1U];
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_Data_r0[2U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[2U];
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_Data_r0[3U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[3U];
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_Data_r0[4U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[4U];
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_Data_r0[5U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[5U];
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_Data_r0[6U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[6U];
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_Data_r0[7U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[7U];
    }
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__bitclk[0U] 
        = (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__weclk)));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__bitclk[1U] 
        = (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__weclk)));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__bitclk[2U] 
        = (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__weclk)));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__bitclk[3U] 
        = (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__weclk)));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__bitclk[4U] 
        = (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__weclk)));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__bitclk[5U] 
        = (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__weclk)));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__bitclk[6U] 
        = (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__weclk)));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__bitclk[7U] 
        = (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__weclk)));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__collision_ff_clk[0U] 
        = ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__weclk))) 
           & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__radclk))) 
              & (- (IData)(((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__ra_lat) 
                            == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__wa_lat))))));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__collision_ff_clk[1U] 
        = ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__weclk))) 
           & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__radclk))) 
              & (- (IData)(((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__ra_lat) 
                            == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__wa_lat))))));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__collision_ff_clk[2U] 
        = ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__weclk))) 
           & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__radclk))) 
              & (- (IData)(((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__ra_lat) 
                            == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__wa_lat))))));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__collision_ff_clk[3U] 
        = ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__weclk))) 
           & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__radclk))) 
              & (- (IData)(((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__ra_lat) 
                            == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__wa_lat))))));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__collision_ff_clk[4U] 
        = ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__weclk))) 
           & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__radclk))) 
              & (- (IData)(((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__ra_lat) 
                            == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__wa_lat))))));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__collision_ff_clk[5U] 
        = ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__weclk))) 
           & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__radclk))) 
              & (- (IData)(((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__ra_lat) 
                            == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__wa_lat))))));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__collision_ff_clk[6U] 
        = ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__weclk))) 
           & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__radclk))) 
              & (- (IData)(((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__ra_lat) 
                            == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__wa_lat))))));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__collision_ff_clk[7U] 
        = ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__weclk))) 
           & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__radclk))) 
              & (- (IData)(((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__ra_lat) 
                            == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__wa_lat))))));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__a = 0U;
    while (VL_GTS_III(32, 0x00000100U, vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__a)) {
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__r0_dout_tmp[(7U 
                                                                                & (vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__a 
                                                                                >> 5U))] 
            = (((~ ((IData)(1U) << (0x0000001fU & vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__a))) 
                & vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__r0_dout_tmp[
                (7U & (vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__a 
                       >> 5U))]) | (((1U & (~ ((vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__collision_ff[
                                                (7U 
                                                 & (vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__a 
                                                    >> 5U))] 
                                                >> 
                                                (0x0000001fU 
                                                 & vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__a)) 
                                               | ((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__ra_lat) 
                                                    == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__wa_lat)) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__weclk)) 
                                                  & (Vsim__ConstPool__CONST_h5b979007_0[
                                                     (7U 
                                                      & (vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__a 
                                                         >> 5U))] 
                                                     >> 
                                                     (0x0000001fU 
                                                      & vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__a)))))) 
                                     && (1U & (vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__array
                                               [vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__ra_lat][
                                               (7U 
                                                & (vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__a 
                                                   >> 5U))] 
                                               >> (0x0000001fU 
                                                   & vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__a)))) 
                                    << (0x0000001fU 
                                        & vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__a)));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__a 
            = ((IData)(1U) + vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__a);
    }
}

VL_ATTR_COLD void Vsim_nv_ram_rws_16x256___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_06__0(Vsim_nv_ram_rws_16x256* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_16x256___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_06__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__pre_Ra_reg_r0 
        = ((((IData)(vlSelfRef.r_nv_ram_rws_16x256__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
             << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_16x256__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                       << 2U)) | (((IData)(vlSelfRef.r_nv_ram_rws_16x256__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                   << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_16x256__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__posedge_updateDR_sync 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__updateDR_sync_1p)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__pre_Wa_reg_w0 
        = ((((IData)(vlSelfRef.r_nv_ram_rws_16x256__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
             << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_16x256__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                       << 2U)) | (((IData)(vlSelfRef.r_nv_ram_rws_16x256__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                   << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_16x256__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_la_bist_clkw0_gate__DOT__E 
        = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__debug_mode_sync;
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[0U] 
        = (((((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__31__KET____DOT__SSS__DOT__nr__Q) 
                  << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__30__KET____DOT__SSS__DOT__nr__Q) 
                            << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__29__KET____DOT__SSS__DOT__nr__Q) 
                                        << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__28__KET____DOT__SSS__DOT__nr__Q))) 
               << 0x0000000cU) | (((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__27__KET____DOT__SSS__DOT__nr__Q) 
                                     << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__26__KET____DOT__SSS__DOT__nr__Q) 
                                               << 2U)) 
                                   | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__25__KET____DOT__SSS__DOT__nr__Q) 
                                       << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__24__KET____DOT__SSS__DOT__nr__Q))) 
                                  << 8U)) | ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__23__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__22__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__21__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__20__KET____DOT__SSS__DOT__nr__Q))) 
                                              << 4U) 
                                             | ((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__19__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__18__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 2U)) 
                                                | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__17__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__16__KET____DOT__SSS__DOT__nr__Q))))) 
            << 0x00000010U) | (((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__15__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__14__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__13__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__12__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 0x0000000cU) | 
                                (((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__11__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__10__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__9__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__8__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 8U)) | ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                                << 3U) 
                                               | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 2U)) 
                                              | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q))) 
                                             << 4U) 
                                            | ((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q))))));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[1U] 
        = (((((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__63__KET____DOT__SSS__DOT__nr__Q) 
                  << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__62__KET____DOT__SSS__DOT__nr__Q) 
                            << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__61__KET____DOT__SSS__DOT__nr__Q) 
                                        << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__60__KET____DOT__SSS__DOT__nr__Q))) 
               << 0x0000000cU) | (((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__59__KET____DOT__SSS__DOT__nr__Q) 
                                     << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__58__KET____DOT__SSS__DOT__nr__Q) 
                                               << 2U)) 
                                   | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__57__KET____DOT__SSS__DOT__nr__Q) 
                                       << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__56__KET____DOT__SSS__DOT__nr__Q))) 
                                  << 8U)) | ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__55__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__54__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__53__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__52__KET____DOT__SSS__DOT__nr__Q))) 
                                              << 4U) 
                                             | ((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__51__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__50__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 2U)) 
                                                | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__49__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__48__KET____DOT__SSS__DOT__nr__Q))))) 
            << 0x00000010U) | (((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__47__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__46__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__45__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__44__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 0x0000000cU) | 
                                (((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__43__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__42__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__41__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__40__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 8U)) | ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__39__KET____DOT__SSS__DOT__nr__Q) 
                                                << 3U) 
                                               | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__38__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 2U)) 
                                              | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__37__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__36__KET____DOT__SSS__DOT__nr__Q))) 
                                             << 4U) 
                                            | ((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__35__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__34__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__33__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__32__KET____DOT__SSS__DOT__nr__Q))))));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[2U] 
        = (((((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__95__KET____DOT__SSS__DOT__nr__Q) 
                  << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__94__KET____DOT__SSS__DOT__nr__Q) 
                            << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__93__KET____DOT__SSS__DOT__nr__Q) 
                                        << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__92__KET____DOT__SSS__DOT__nr__Q))) 
               << 0x0000000cU) | (((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__91__KET____DOT__SSS__DOT__nr__Q) 
                                     << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__90__KET____DOT__SSS__DOT__nr__Q) 
                                               << 2U)) 
                                   | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__89__KET____DOT__SSS__DOT__nr__Q) 
                                       << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__88__KET____DOT__SSS__DOT__nr__Q))) 
                                  << 8U)) | ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__87__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__86__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__85__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__84__KET____DOT__SSS__DOT__nr__Q))) 
                                              << 4U) 
                                             | ((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__83__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__82__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 2U)) 
                                                | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__81__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__80__KET____DOT__SSS__DOT__nr__Q))))) 
            << 0x00000010U) | (((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__79__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__78__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__77__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__76__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 0x0000000cU) | 
                                (((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__75__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__74__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__73__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__72__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 8U)) | ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__71__KET____DOT__SSS__DOT__nr__Q) 
                                                << 3U) 
                                               | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__70__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 2U)) 
                                              | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__69__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__68__KET____DOT__SSS__DOT__nr__Q))) 
                                             << 4U) 
                                            | ((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__67__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__66__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__65__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__64__KET____DOT__SSS__DOT__nr__Q))))));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[3U] 
        = (((((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__127__KET____DOT__SSS__DOT__nr__Q) 
                  << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__126__KET____DOT__SSS__DOT__nr__Q) 
                            << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__125__KET____DOT__SSS__DOT__nr__Q) 
                                        << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__124__KET____DOT__SSS__DOT__nr__Q))) 
               << 0x0000000cU) | (((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__123__KET____DOT__SSS__DOT__nr__Q) 
                                     << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__122__KET____DOT__SSS__DOT__nr__Q) 
                                               << 2U)) 
                                   | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__121__KET____DOT__SSS__DOT__nr__Q) 
                                       << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__120__KET____DOT__SSS__DOT__nr__Q))) 
                                  << 8U)) | ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__119__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__118__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__117__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__116__KET____DOT__SSS__DOT__nr__Q))) 
                                              << 4U) 
                                             | ((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__115__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__114__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 2U)) 
                                                | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__113__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__112__KET____DOT__SSS__DOT__nr__Q))))) 
            << 0x00000010U) | (((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__111__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__110__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__109__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__108__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 0x0000000cU) | 
                                (((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__107__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__106__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__105__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__104__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 8U)) | ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__103__KET____DOT__SSS__DOT__nr__Q) 
                                                << 3U) 
                                               | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__102__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 2U)) 
                                              | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__101__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__100__KET____DOT__SSS__DOT__nr__Q))) 
                                             << 4U) 
                                            | ((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__99__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__98__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__97__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__96__KET____DOT__SSS__DOT__nr__Q))))));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[4U] 
        = (((((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__159__KET____DOT__SSS__DOT__nr__Q) 
                  << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__158__KET____DOT__SSS__DOT__nr__Q) 
                            << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__157__KET____DOT__SSS__DOT__nr__Q) 
                                        << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__156__KET____DOT__SSS__DOT__nr__Q))) 
               << 0x0000000cU) | (((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__155__KET____DOT__SSS__DOT__nr__Q) 
                                     << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__154__KET____DOT__SSS__DOT__nr__Q) 
                                               << 2U)) 
                                   | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__153__KET____DOT__SSS__DOT__nr__Q) 
                                       << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__152__KET____DOT__SSS__DOT__nr__Q))) 
                                  << 8U)) | ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__151__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__150__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__149__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__148__KET____DOT__SSS__DOT__nr__Q))) 
                                              << 4U) 
                                             | ((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__147__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__146__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 2U)) 
                                                | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__145__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__144__KET____DOT__SSS__DOT__nr__Q))))) 
            << 0x00000010U) | (((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__143__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__142__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__141__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__140__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 0x0000000cU) | 
                                (((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__139__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__138__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__137__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__136__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 8U)) | ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__135__KET____DOT__SSS__DOT__nr__Q) 
                                                << 3U) 
                                               | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__134__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 2U)) 
                                              | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__133__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__132__KET____DOT__SSS__DOT__nr__Q))) 
                                             << 4U) 
                                            | ((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__131__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__130__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__129__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__128__KET____DOT__SSS__DOT__nr__Q))))));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[5U] 
        = (((((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__191__KET____DOT__SSS__DOT__nr__Q) 
                  << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__190__KET____DOT__SSS__DOT__nr__Q) 
                            << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__189__KET____DOT__SSS__DOT__nr__Q) 
                                        << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__188__KET____DOT__SSS__DOT__nr__Q))) 
               << 0x0000000cU) | (((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__187__KET____DOT__SSS__DOT__nr__Q) 
                                     << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__186__KET____DOT__SSS__DOT__nr__Q) 
                                               << 2U)) 
                                   | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__185__KET____DOT__SSS__DOT__nr__Q) 
                                       << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__184__KET____DOT__SSS__DOT__nr__Q))) 
                                  << 8U)) | ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__183__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__182__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__181__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__180__KET____DOT__SSS__DOT__nr__Q))) 
                                              << 4U) 
                                             | ((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__179__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__178__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 2U)) 
                                                | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__177__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__176__KET____DOT__SSS__DOT__nr__Q))))) 
            << 0x00000010U) | (((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__175__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__174__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__173__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__172__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 0x0000000cU) | 
                                (((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__171__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__170__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__169__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__168__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 8U)) | ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__167__KET____DOT__SSS__DOT__nr__Q) 
                                                << 3U) 
                                               | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__166__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 2U)) 
                                              | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__165__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__164__KET____DOT__SSS__DOT__nr__Q))) 
                                             << 4U) 
                                            | ((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__163__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__162__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__161__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__160__KET____DOT__SSS__DOT__nr__Q))))));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[6U] 
        = (((((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__223__KET____DOT__SSS__DOT__nr__Q) 
                  << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__222__KET____DOT__SSS__DOT__nr__Q) 
                            << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__221__KET____DOT__SSS__DOT__nr__Q) 
                                        << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__220__KET____DOT__SSS__DOT__nr__Q))) 
               << 0x0000000cU) | (((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__219__KET____DOT__SSS__DOT__nr__Q) 
                                     << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__218__KET____DOT__SSS__DOT__nr__Q) 
                                               << 2U)) 
                                   | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__217__KET____DOT__SSS__DOT__nr__Q) 
                                       << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__216__KET____DOT__SSS__DOT__nr__Q))) 
                                  << 8U)) | ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__215__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__214__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__213__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__212__KET____DOT__SSS__DOT__nr__Q))) 
                                              << 4U) 
                                             | ((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__211__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__210__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 2U)) 
                                                | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__209__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__208__KET____DOT__SSS__DOT__nr__Q))))) 
            << 0x00000010U) | (((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__207__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__206__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__205__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__204__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 0x0000000cU) | 
                                (((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__203__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__202__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__201__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__200__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 8U)) | ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__199__KET____DOT__SSS__DOT__nr__Q) 
                                                << 3U) 
                                               | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__198__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 2U)) 
                                              | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__197__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__196__KET____DOT__SSS__DOT__nr__Q))) 
                                             << 4U) 
                                            | ((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__195__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__194__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__193__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__192__KET____DOT__SSS__DOT__nr__Q))))));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[7U] 
        = (((((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__255__KET____DOT__SSS__DOT__nr__Q) 
                  << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__254__KET____DOT__SSS__DOT__nr__Q) 
                            << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__253__KET____DOT__SSS__DOT__nr__Q) 
                                        << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__252__KET____DOT__SSS__DOT__nr__Q))) 
               << 0x0000000cU) | (((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__251__KET____DOT__SSS__DOT__nr__Q) 
                                     << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__250__KET____DOT__SSS__DOT__nr__Q) 
                                               << 2U)) 
                                   | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__249__KET____DOT__SSS__DOT__nr__Q) 
                                       << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__248__KET____DOT__SSS__DOT__nr__Q))) 
                                  << 8U)) | ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__247__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__246__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__245__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__244__KET____DOT__SSS__DOT__nr__Q))) 
                                              << 4U) 
                                             | ((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__243__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__242__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 2U)) 
                                                | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__241__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__240__KET____DOT__SSS__DOT__nr__Q))))) 
            << 0x00000010U) | (((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__239__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__238__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__237__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__236__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 0x0000000cU) | 
                                (((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__235__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__234__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__233__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__232__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 8U)) | ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__231__KET____DOT__SSS__DOT__nr__Q) 
                                                << 3U) 
                                               | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__230__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 2U)) 
                                              | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__229__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__228__KET____DOT__SSS__DOT__nr__Q))) 
                                             << 4U) 
                                            | ((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__227__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__226__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__225__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__224__KET____DOT__SSS__DOT__nr__Q))))));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__nvdla_op_gated_clk_buffer) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__nvdla_op_gated_clk_buffer) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__CLK_GATE_clk__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__testInst_Ra_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__nvdla_op_gated_clk_buffer) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__nvdla_op_gated_clk_buffer) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__access_en_r 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__re_q));
    if (vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__debug_mode_sync) {
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__RA 
                = (0x0000000fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__pre_Ra_reg_r0));
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WA 
                = (0x0000000fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__pre_Wa_reg_w0));
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[0U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[0U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[1U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[1U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[2U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[2U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[3U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[3U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[4U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[4U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[5U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[5U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[6U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[6U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[7U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[7U];
        } else {
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__RA 
                = (0x0000000fU & 0U);
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WA 
                = (0x0000000fU & 0U);
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[0U] 
                = Vsim__ConstPool__CONST_h9e67c271_0[0U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[1U] 
                = Vsim__ConstPool__CONST_h9e67c271_0[1U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[2U] 
                = Vsim__ConstPool__CONST_h9e67c271_0[2U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[3U] 
                = Vsim__ConstPool__CONST_h9e67c271_0[3U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[4U] 
                = Vsim__ConstPool__CONST_h9e67c271_0[4U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[5U] 
                = Vsim__ConstPool__CONST_h9e67c271_0[5U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[6U] 
                = Vsim__ConstPool__CONST_h9e67c271_0[6U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[7U] 
                = Vsim__ConstPool__CONST_h9e67c271_0[7U];
        }
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_we_w0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__debug_mode_sync) 
                  && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__posedge_updateDR_sync) 
                      & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__we_q))));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_re_r0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__debug_mode_sync) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__access_en_r)));
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__RA 
            = (0x0000000fU & ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_rd_sel_06))) 
                                & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dc2sbuf_p0_rd_addr)) 
                               | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_rd_sel_06))) 
                                  & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dc2sbuf_p1_rd_addr))) 
                              | ((IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_3658) 
                                 | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_rd_sel_06))) 
                                     & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__rd_p0_addr_d1)) 
                                    | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_rd_sel_06))) 
                                       & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__rd_p1_addr_d1))))));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WA 
            = (0x0000000fU & ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_06))) 
                                & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dc2sbuf_p0_wr_addr)) 
                               | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_06))) 
                                  & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dc2sbuf_p1_wr_addr))) 
                              | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_06))) 
                                   & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_idx_d1)) 
                                  | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_06))) 
                                     & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_idx_d1))) 
                                 | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_06))) 
                                     & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_addr_d1)) 
                                    | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_06))) 
                                       & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_addr_d1))))));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_we_w0 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_we_06;
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[0U] 
            = ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_06))) 
                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[0U]) 
                | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_06))) 
                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[8U])) 
               | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_06))) 
                    & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_data_d1[0U]) 
                   | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_06))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_data_d1[0U])) 
                  | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_06))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_d1[0U]) 
                     | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_06))) 
                        & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_data_d1[0U]))));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[1U] 
            = ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_06))) 
                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[1U]) 
                | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_06))) 
                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[9U])) 
               | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_06))) 
                    & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_data_d1[1U]) 
                   | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_06))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_data_d1[1U])) 
                  | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_06))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_d1[1U]) 
                     | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_06))) 
                        & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_data_d1[1U]))));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[2U] 
            = ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_06))) 
                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[2U]) 
                | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_06))) 
                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[0x0000000aU])) 
               | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_06))) 
                    & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_data_d1[2U]) 
                   | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_06))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_data_d1[2U])) 
                  | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_06))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_d1[2U]) 
                     | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_06))) 
                        & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_data_d1[2U]))));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[3U] 
            = ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_06))) 
                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[3U]) 
                | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_06))) 
                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[0x0000000bU])) 
               | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_06))) 
                    & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_data_d1[3U]) 
                   | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_06))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_data_d1[3U])) 
                  | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_06))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_d1[3U]) 
                     | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_06))) 
                        & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_data_d1[3U]))));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[4U] 
            = ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_06))) 
                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[4U]) 
                | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_06))) 
                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[0x0000000cU])) 
               | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_06))) 
                    & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_data_d1[4U]) 
                   | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_06))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_data_d1[4U])) 
                  | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_06))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_d1[4U]) 
                     | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_06))) 
                        & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_data_d1[4U]))));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[5U] 
            = ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_06))) 
                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[5U]) 
                | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_06))) 
                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[0x0000000dU])) 
               | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_06))) 
                    & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_data_d1[5U]) 
                   | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_06))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_data_d1[5U])) 
                  | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_06))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_d1[5U]) 
                     | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_06))) 
                        & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_data_d1[5U]))));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[6U] 
            = ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_06))) 
                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[6U]) 
                | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_06))) 
                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[0x0000000eU])) 
               | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_06))) 
                    & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_data_d1[6U]) 
                   | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_06))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_data_d1[6U])) 
                  | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_06))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_d1[6U]) 
                     | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_06))) 
                        & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_data_d1[6U]))));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[7U] 
            = ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_06))) 
                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[7U]) 
                | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_06))) 
                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[0x0000000fU])) 
               | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_06))) 
                    & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_data_d1[7U]) 
                   | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_06))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_data_d1[7U])) 
                  | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_06))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_d1[7U]) 
                     | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_06))) 
                        & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_data_d1[7U]))));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_re_r0 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_re_06;
    }
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__radclk 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__re_lat));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__weclk 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__we_lat));
    if (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__debug_mode_sync)
          ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__re_q)
          : (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__debug_mode_sync))) {
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_Data_r0[0U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__r0_dout_tmp2[0U];
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_Data_r0[1U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__r0_dout_tmp2[1U];
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_Data_r0[2U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__r0_dout_tmp2[2U];
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_Data_r0[3U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__r0_dout_tmp2[3U];
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_Data_r0[4U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__r0_dout_tmp2[4U];
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_Data_r0[5U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__r0_dout_tmp2[5U];
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_Data_r0[6U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__r0_dout_tmp2[6U];
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_Data_r0[7U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__r0_dout_tmp2[7U];
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_Data_r0[0U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[0U];
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_Data_r0[1U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[1U];
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_Data_r0[2U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[2U];
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_Data_r0[3U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[3U];
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_Data_r0[4U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[4U];
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_Data_r0[5U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[5U];
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_Data_r0[6U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[6U];
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_Data_r0[7U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[7U];
    }
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__bitclk[0U] 
        = (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__weclk)));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__bitclk[1U] 
        = (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__weclk)));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__bitclk[2U] 
        = (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__weclk)));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__bitclk[3U] 
        = (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__weclk)));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__bitclk[4U] 
        = (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__weclk)));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__bitclk[5U] 
        = (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__weclk)));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__bitclk[6U] 
        = (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__weclk)));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__bitclk[7U] 
        = (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__weclk)));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__collision_ff_clk[0U] 
        = ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__weclk))) 
           & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__radclk))) 
              & (- (IData)(((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__ra_lat) 
                            == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__wa_lat))))));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__collision_ff_clk[1U] 
        = ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__weclk))) 
           & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__radclk))) 
              & (- (IData)(((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__ra_lat) 
                            == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__wa_lat))))));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__collision_ff_clk[2U] 
        = ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__weclk))) 
           & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__radclk))) 
              & (- (IData)(((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__ra_lat) 
                            == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__wa_lat))))));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__collision_ff_clk[3U] 
        = ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__weclk))) 
           & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__radclk))) 
              & (- (IData)(((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__ra_lat) 
                            == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__wa_lat))))));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__collision_ff_clk[4U] 
        = ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__weclk))) 
           & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__radclk))) 
              & (- (IData)(((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__ra_lat) 
                            == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__wa_lat))))));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__collision_ff_clk[5U] 
        = ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__weclk))) 
           & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__radclk))) 
              & (- (IData)(((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__ra_lat) 
                            == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__wa_lat))))));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__collision_ff_clk[6U] 
        = ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__weclk))) 
           & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__radclk))) 
              & (- (IData)(((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__ra_lat) 
                            == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__wa_lat))))));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__collision_ff_clk[7U] 
        = ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__weclk))) 
           & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__radclk))) 
              & (- (IData)(((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__ra_lat) 
                            == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__wa_lat))))));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__a = 0U;
    while (VL_GTS_III(32, 0x00000100U, vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__a)) {
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__r0_dout_tmp[(7U 
                                                                                & (vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__a 
                                                                                >> 5U))] 
            = (((~ ((IData)(1U) << (0x0000001fU & vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__a))) 
                & vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__r0_dout_tmp[
                (7U & (vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__a 
                       >> 5U))]) | (((1U & (~ ((vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__collision_ff[
                                                (7U 
                                                 & (vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__a 
                                                    >> 5U))] 
                                                >> 
                                                (0x0000001fU 
                                                 & vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__a)) 
                                               | ((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__ra_lat) 
                                                    == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__wa_lat)) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__weclk)) 
                                                  & (Vsim__ConstPool__CONST_h5b979007_0[
                                                     (7U 
                                                      & (vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__a 
                                                         >> 5U))] 
                                                     >> 
                                                     (0x0000001fU 
                                                      & vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__a)))))) 
                                     && (1U & (vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__array
                                               [vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__ra_lat][
                                               (7U 
                                                & (vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__a 
                                                   >> 5U))] 
                                               >> (0x0000001fU 
                                                   & vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__a)))) 
                                    << (0x0000001fU 
                                        & vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__a)));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__a 
            = ((IData)(1U) + vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__a);
    }
}

VL_ATTR_COLD void Vsim_nv_ram_rws_16x256___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_07__0(Vsim_nv_ram_rws_16x256* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vsim_nv_ram_rws_16x256___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_07__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__pre_Ra_reg_r0 
        = ((((IData)(vlSelfRef.r_nv_ram_rws_16x256__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
             << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_16x256__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                       << 2U)) | (((IData)(vlSelfRef.r_nv_ram_rws_16x256__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                   << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_16x256__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__posedge_updateDR_sync 
        = ((~ (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__updateDR_sync_1p)) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__pre_Wa_reg_w0 
        = ((((IData)(vlSelfRef.r_nv_ram_rws_16x256__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
             << 3U) | ((IData)(vlSelfRef.r_nv_ram_rws_16x256__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                       << 2U)) | (((IData)(vlSelfRef.r_nv_ram_rws_16x256__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                   << 1U) | (IData)(vlSelfRef.r_nv_ram_rws_16x256__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_la_bist_clkw0_gate__DOT__E 
        = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__debug_mode_sync;
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[0U] 
        = (((((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__31__KET____DOT__SSS__DOT__nr__Q) 
                  << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__30__KET____DOT__SSS__DOT__nr__Q) 
                            << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__29__KET____DOT__SSS__DOT__nr__Q) 
                                        << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__28__KET____DOT__SSS__DOT__nr__Q))) 
               << 0x0000000cU) | (((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__27__KET____DOT__SSS__DOT__nr__Q) 
                                     << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__26__KET____DOT__SSS__DOT__nr__Q) 
                                               << 2U)) 
                                   | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__25__KET____DOT__SSS__DOT__nr__Q) 
                                       << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__24__KET____DOT__SSS__DOT__nr__Q))) 
                                  << 8U)) | ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__23__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__22__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__21__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__20__KET____DOT__SSS__DOT__nr__Q))) 
                                              << 4U) 
                                             | ((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__19__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__18__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 2U)) 
                                                | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__17__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__16__KET____DOT__SSS__DOT__nr__Q))))) 
            << 0x00000010U) | (((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__15__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__14__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__13__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__12__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 0x0000000cU) | 
                                (((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__11__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__10__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__9__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__8__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 8U)) | ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                                << 3U) 
                                               | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 2U)) 
                                              | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q))) 
                                             << 4U) 
                                            | ((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q))))));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[1U] 
        = (((((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__63__KET____DOT__SSS__DOT__nr__Q) 
                  << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__62__KET____DOT__SSS__DOT__nr__Q) 
                            << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__61__KET____DOT__SSS__DOT__nr__Q) 
                                        << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__60__KET____DOT__SSS__DOT__nr__Q))) 
               << 0x0000000cU) | (((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__59__KET____DOT__SSS__DOT__nr__Q) 
                                     << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__58__KET____DOT__SSS__DOT__nr__Q) 
                                               << 2U)) 
                                   | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__57__KET____DOT__SSS__DOT__nr__Q) 
                                       << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__56__KET____DOT__SSS__DOT__nr__Q))) 
                                  << 8U)) | ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__55__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__54__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__53__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__52__KET____DOT__SSS__DOT__nr__Q))) 
                                              << 4U) 
                                             | ((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__51__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__50__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 2U)) 
                                                | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__49__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__48__KET____DOT__SSS__DOT__nr__Q))))) 
            << 0x00000010U) | (((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__47__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__46__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__45__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__44__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 0x0000000cU) | 
                                (((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__43__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__42__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__41__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__40__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 8U)) | ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__39__KET____DOT__SSS__DOT__nr__Q) 
                                                << 3U) 
                                               | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__38__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 2U)) 
                                              | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__37__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__36__KET____DOT__SSS__DOT__nr__Q))) 
                                             << 4U) 
                                            | ((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__35__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__34__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__33__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__32__KET____DOT__SSS__DOT__nr__Q))))));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[2U] 
        = (((((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__95__KET____DOT__SSS__DOT__nr__Q) 
                  << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__94__KET____DOT__SSS__DOT__nr__Q) 
                            << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__93__KET____DOT__SSS__DOT__nr__Q) 
                                        << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__92__KET____DOT__SSS__DOT__nr__Q))) 
               << 0x0000000cU) | (((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__91__KET____DOT__SSS__DOT__nr__Q) 
                                     << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__90__KET____DOT__SSS__DOT__nr__Q) 
                                               << 2U)) 
                                   | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__89__KET____DOT__SSS__DOT__nr__Q) 
                                       << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__88__KET____DOT__SSS__DOT__nr__Q))) 
                                  << 8U)) | ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__87__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__86__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__85__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__84__KET____DOT__SSS__DOT__nr__Q))) 
                                              << 4U) 
                                             | ((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__83__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__82__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 2U)) 
                                                | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__81__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__80__KET____DOT__SSS__DOT__nr__Q))))) 
            << 0x00000010U) | (((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__79__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__78__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__77__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__76__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 0x0000000cU) | 
                                (((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__75__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__74__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__73__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__72__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 8U)) | ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__71__KET____DOT__SSS__DOT__nr__Q) 
                                                << 3U) 
                                               | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__70__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 2U)) 
                                              | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__69__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__68__KET____DOT__SSS__DOT__nr__Q))) 
                                             << 4U) 
                                            | ((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__67__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__66__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__65__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__64__KET____DOT__SSS__DOT__nr__Q))))));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[3U] 
        = (((((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__127__KET____DOT__SSS__DOT__nr__Q) 
                  << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__126__KET____DOT__SSS__DOT__nr__Q) 
                            << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__125__KET____DOT__SSS__DOT__nr__Q) 
                                        << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__124__KET____DOT__SSS__DOT__nr__Q))) 
               << 0x0000000cU) | (((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__123__KET____DOT__SSS__DOT__nr__Q) 
                                     << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__122__KET____DOT__SSS__DOT__nr__Q) 
                                               << 2U)) 
                                   | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__121__KET____DOT__SSS__DOT__nr__Q) 
                                       << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__120__KET____DOT__SSS__DOT__nr__Q))) 
                                  << 8U)) | ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__119__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__118__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__117__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__116__KET____DOT__SSS__DOT__nr__Q))) 
                                              << 4U) 
                                             | ((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__115__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__114__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 2U)) 
                                                | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__113__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__112__KET____DOT__SSS__DOT__nr__Q))))) 
            << 0x00000010U) | (((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__111__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__110__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__109__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__108__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 0x0000000cU) | 
                                (((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__107__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__106__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__105__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__104__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 8U)) | ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__103__KET____DOT__SSS__DOT__nr__Q) 
                                                << 3U) 
                                               | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__102__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 2U)) 
                                              | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__101__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__100__KET____DOT__SSS__DOT__nr__Q))) 
                                             << 4U) 
                                            | ((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__99__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__98__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__97__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__96__KET____DOT__SSS__DOT__nr__Q))))));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[4U] 
        = (((((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__159__KET____DOT__SSS__DOT__nr__Q) 
                  << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__158__KET____DOT__SSS__DOT__nr__Q) 
                            << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__157__KET____DOT__SSS__DOT__nr__Q) 
                                        << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__156__KET____DOT__SSS__DOT__nr__Q))) 
               << 0x0000000cU) | (((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__155__KET____DOT__SSS__DOT__nr__Q) 
                                     << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__154__KET____DOT__SSS__DOT__nr__Q) 
                                               << 2U)) 
                                   | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__153__KET____DOT__SSS__DOT__nr__Q) 
                                       << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__152__KET____DOT__SSS__DOT__nr__Q))) 
                                  << 8U)) | ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__151__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__150__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__149__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__148__KET____DOT__SSS__DOT__nr__Q))) 
                                              << 4U) 
                                             | ((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__147__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__146__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 2U)) 
                                                | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__145__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__144__KET____DOT__SSS__DOT__nr__Q))))) 
            << 0x00000010U) | (((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__143__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__142__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__141__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__140__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 0x0000000cU) | 
                                (((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__139__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__138__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__137__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__136__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 8U)) | ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__135__KET____DOT__SSS__DOT__nr__Q) 
                                                << 3U) 
                                               | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__134__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 2U)) 
                                              | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__133__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__132__KET____DOT__SSS__DOT__nr__Q))) 
                                             << 4U) 
                                            | ((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__131__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__130__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__129__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__128__KET____DOT__SSS__DOT__nr__Q))))));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[5U] 
        = (((((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__191__KET____DOT__SSS__DOT__nr__Q) 
                  << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__190__KET____DOT__SSS__DOT__nr__Q) 
                            << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__189__KET____DOT__SSS__DOT__nr__Q) 
                                        << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__188__KET____DOT__SSS__DOT__nr__Q))) 
               << 0x0000000cU) | (((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__187__KET____DOT__SSS__DOT__nr__Q) 
                                     << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__186__KET____DOT__SSS__DOT__nr__Q) 
                                               << 2U)) 
                                   | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__185__KET____DOT__SSS__DOT__nr__Q) 
                                       << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__184__KET____DOT__SSS__DOT__nr__Q))) 
                                  << 8U)) | ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__183__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__182__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__181__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__180__KET____DOT__SSS__DOT__nr__Q))) 
                                              << 4U) 
                                             | ((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__179__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__178__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 2U)) 
                                                | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__177__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__176__KET____DOT__SSS__DOT__nr__Q))))) 
            << 0x00000010U) | (((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__175__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__174__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__173__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__172__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 0x0000000cU) | 
                                (((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__171__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__170__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__169__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__168__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 8U)) | ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__167__KET____DOT__SSS__DOT__nr__Q) 
                                                << 3U) 
                                               | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__166__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 2U)) 
                                              | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__165__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__164__KET____DOT__SSS__DOT__nr__Q))) 
                                             << 4U) 
                                            | ((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__163__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__162__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__161__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__160__KET____DOT__SSS__DOT__nr__Q))))));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[6U] 
        = (((((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__223__KET____DOT__SSS__DOT__nr__Q) 
                  << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__222__KET____DOT__SSS__DOT__nr__Q) 
                            << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__221__KET____DOT__SSS__DOT__nr__Q) 
                                        << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__220__KET____DOT__SSS__DOT__nr__Q))) 
               << 0x0000000cU) | (((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__219__KET____DOT__SSS__DOT__nr__Q) 
                                     << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__218__KET____DOT__SSS__DOT__nr__Q) 
                                               << 2U)) 
                                   | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__217__KET____DOT__SSS__DOT__nr__Q) 
                                       << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__216__KET____DOT__SSS__DOT__nr__Q))) 
                                  << 8U)) | ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__215__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__214__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__213__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__212__KET____DOT__SSS__DOT__nr__Q))) 
                                              << 4U) 
                                             | ((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__211__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__210__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 2U)) 
                                                | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__209__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__208__KET____DOT__SSS__DOT__nr__Q))))) 
            << 0x00000010U) | (((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__207__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__206__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__205__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__204__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 0x0000000cU) | 
                                (((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__203__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__202__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__201__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__200__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 8U)) | ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__199__KET____DOT__SSS__DOT__nr__Q) 
                                                << 3U) 
                                               | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__198__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 2U)) 
                                              | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__197__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__196__KET____DOT__SSS__DOT__nr__Q))) 
                                             << 4U) 
                                            | ((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__195__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__194__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__193__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__192__KET____DOT__SSS__DOT__nr__Q))))));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[7U] 
        = (((((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__255__KET____DOT__SSS__DOT__nr__Q) 
                  << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__254__KET____DOT__SSS__DOT__nr__Q) 
                            << 2U)) | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__253__KET____DOT__SSS__DOT__nr__Q) 
                                        << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__252__KET____DOT__SSS__DOT__nr__Q))) 
               << 0x0000000cU) | (((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__251__KET____DOT__SSS__DOT__nr__Q) 
                                     << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__250__KET____DOT__SSS__DOT__nr__Q) 
                                               << 2U)) 
                                   | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__249__KET____DOT__SSS__DOT__nr__Q) 
                                       << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__248__KET____DOT__SSS__DOT__nr__Q))) 
                                  << 8U)) | ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__247__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__246__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__245__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__244__KET____DOT__SSS__DOT__nr__Q))) 
                                              << 4U) 
                                             | ((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__243__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__242__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 2U)) 
                                                | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__241__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__240__KET____DOT__SSS__DOT__nr__Q))))) 
            << 0x00000010U) | (((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__239__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__238__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__237__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__236__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 0x0000000cU) | 
                                (((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__235__KET____DOT__SSS__DOT__nr__Q) 
                                    << 3U) | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__234__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                  | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__233__KET____DOT__SSS__DOT__nr__Q) 
                                      << 1U) | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__232__KET____DOT__SSS__DOT__nr__Q))) 
                                 << 8U)) | ((((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__231__KET____DOT__SSS__DOT__nr__Q) 
                                                << 3U) 
                                               | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__230__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 2U)) 
                                              | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__229__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__228__KET____DOT__SSS__DOT__nr__Q))) 
                                             << 4U) 
                                            | ((((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__227__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 3U) 
                                                | ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__226__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 2U)) 
                                               | (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__225__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x256__DOT__testInst_Data_reg_r0->__Vcellout__Jreg_ff__BRA__224__KET____DOT__SSS__DOT__nr__Q))))));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__nvdla_op_gated_clk_buffer) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__nvdla_op_gated_clk_buffer) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__CLK_GATE_clk__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__testInst_Ra_reg_r0__DOT__clk_wire 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__nvdla_op_gated_clk_buffer) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__nvdla_op_gated_clk_buffer) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__access_en_r 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__posedge_updateDR_sync) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__re_q));
    if (vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_la_bist_clkw0_gate__DOT__E) {
        if (vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__debug_mode_sync) {
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__RA 
                = (0x0000000fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__pre_Ra_reg_r0));
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WA 
                = (0x0000000fU & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__pre_Wa_reg_w0));
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[0U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[0U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[1U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[1U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[2U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[2U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[3U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[3U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[4U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[4U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[5U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[5U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[6U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[6U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[7U] 
                = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__mbist_Do_r0_int_net[7U];
        } else {
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__RA 
                = (0x0000000fU & 0U);
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WA 
                = (0x0000000fU & 0U);
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[0U] 
                = Vsim__ConstPool__CONST_h9e67c271_0[0U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[1U] 
                = Vsim__ConstPool__CONST_h9e67c271_0[1U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[2U] 
                = Vsim__ConstPool__CONST_h9e67c271_0[2U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[3U] 
                = Vsim__ConstPool__CONST_h9e67c271_0[3U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[4U] 
                = Vsim__ConstPool__CONST_h9e67c271_0[4U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[5U] 
                = Vsim__ConstPool__CONST_h9e67c271_0[5U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[6U] 
                = Vsim__ConstPool__CONST_h9e67c271_0[6U];
            vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[7U] 
                = Vsim__ConstPool__CONST_h9e67c271_0[7U];
        }
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_we_w0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__debug_mode_sync) 
                  && ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__posedge_updateDR_sync) 
                      & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__we_q))));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_re_r0 
            = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__UJ_la_bist_clkw0_gate__DOT__E) 
               & ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__debug_mode_sync) 
                  && (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__access_en_r)));
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__RA 
            = (0x0000000fU & ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_rd_sel_07))) 
                                & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dc2sbuf_p0_rd_addr)) 
                               | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_rd_sel_07))) 
                                  & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__dc2sbuf_p1_rd_addr))) 
                              | ((IData)(vlSymsp->TOP.__VdfgRegularize_h6e95ff9d_0_3658) 
                                 | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_rd_sel_07))) 
                                     & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__rd_p0_addr_d1)) 
                                    | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_rd_sel_07))) 
                                       & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_pack__DOT__rd_p1_addr_d1))))));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WA 
            = (0x0000000fU & ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_07))) 
                                & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dc2sbuf_p0_wr_addr)) 
                               | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_07))) 
                                  & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dc2sbuf_p1_wr_addr))) 
                              | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_07))) 
                                   & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_idx_d1)) 
                                  | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_07))) 
                                     & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_idx_d1))) 
                                 | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_07))) 
                                     & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_addr_d1)) 
                                    | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_07))) 
                                       & (IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_addr_d1))))));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_we_w0 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_we_07;
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[0U] 
            = ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_07))) 
                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[0U]) 
                | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_07))) 
                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[8U])) 
               | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_07))) 
                    & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_data_d1[0U]) 
                   | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_07))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_data_d1[0U])) 
                  | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_07))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_d1[0U]) 
                     | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_07))) 
                        & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_data_d1[0U]))));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[1U] 
            = ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_07))) 
                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[1U]) 
                | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_07))) 
                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[9U])) 
               | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_07))) 
                    & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_data_d1[1U]) 
                   | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_07))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_data_d1[1U])) 
                  | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_07))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_d1[1U]) 
                     | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_07))) 
                        & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_data_d1[1U]))));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[2U] 
            = ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_07))) 
                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[2U]) 
                | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_07))) 
                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[0x0000000aU])) 
               | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_07))) 
                    & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_data_d1[2U]) 
                   | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_07))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_data_d1[2U])) 
                  | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_07))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_d1[2U]) 
                     | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_07))) 
                        & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_data_d1[2U]))));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[3U] 
            = ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_07))) 
                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[3U]) 
                | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_07))) 
                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[0x0000000bU])) 
               | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_07))) 
                    & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_data_d1[3U]) 
                   | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_07))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_data_d1[3U])) 
                  | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_07))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_d1[3U]) 
                     | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_07))) 
                        & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_data_d1[3U]))));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[4U] 
            = ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_07))) 
                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[4U]) 
                | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_07))) 
                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[0x0000000cU])) 
               | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_07))) 
                    & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_data_d1[4U]) 
                   | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_07))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_data_d1[4U])) 
                  | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_07))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_d1[4U]) 
                     | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_07))) 
                        & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_data_d1[4U]))));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[5U] 
            = ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_07))) 
                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[5U]) 
                | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_07))) 
                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[0x0000000dU])) 
               | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_07))) 
                    & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_data_d1[5U]) 
                   | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_07))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_data_d1[5U])) 
                  | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_07))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_d1[5U]) 
                     | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_07))) 
                        & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_data_d1[5U]))));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[6U] 
            = ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_07))) 
                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[6U]) 
                | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_07))) 
                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[0x0000000eU])) 
               | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_07))) 
                    & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_data_d1[6U]) 
                   | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_07))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_data_d1[6U])) 
                  | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_07))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_d1[6U]) 
                     | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_07))) 
                        & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_data_d1[6U]))));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[7U] 
            = ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p0_wr_sel_07))) 
                 & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[7U]) 
                | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__dc2sbuf_p1_wr_sel_07))) 
                   & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__dma_rd_rsp_pd[0x0000000fU])) 
               | ((((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p0_wr_sel_07))) 
                    & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p0_data_d1[7U]) 
                   | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__wg2sbuf_p1_wr_sel_07))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wg__DOT__sbuf_wr_p1_data_d1[7U])) 
                  | (((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p0_wr_sel_07))) 
                      & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p0_data_d1[7U]) 
                     | ((- (IData)((IData)(vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__img2sbuf_p1_wr_sel_07))) 
                        & vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__rsp_img_p1_data_d1[7U]))));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_re_r0 
            = vlSymsp->TOP.tb_top__DOT__nvdla_top__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__sbuf_re_07;
    }
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__radclk 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__re_lat));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__weclk 
        = ((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__gated_clk_core) 
           & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__we_lat));
    if (((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__debug_mode_sync)
          ? (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__re_q)
          : (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__debug_mode_sync))) {
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_Data_r0[0U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__r0_dout_tmp2[0U];
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_Data_r0[1U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__r0_dout_tmp2[1U];
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_Data_r0[2U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__r0_dout_tmp2[2U];
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_Data_r0[3U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__r0_dout_tmp2[3U];
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_Data_r0[4U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__r0_dout_tmp2[4U];
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_Data_r0[5U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__r0_dout_tmp2[5U];
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_Data_r0[6U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__r0_dout_tmp2[6U];
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_Data_r0[7U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__r0_dout_tmp2[7U];
    } else {
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_Data_r0[0U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[0U];
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_Data_r0[1U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[1U];
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_Data_r0[2U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[2U];
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_Data_r0[3U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[3U];
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_Data_r0[4U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[4U];
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_Data_r0[5U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[5U];
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_Data_r0[6U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[6U];
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__muxed_Data_r0[7U] 
            = vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__WD[7U];
    }
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__bitclk[0U] 
        = (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__weclk)));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__bitclk[1U] 
        = (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__weclk)));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__bitclk[2U] 
        = (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__weclk)));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__bitclk[3U] 
        = (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__weclk)));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__bitclk[4U] 
        = (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__weclk)));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__bitclk[5U] 
        = (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__weclk)));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__bitclk[6U] 
        = (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__weclk)));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__bitclk[7U] 
        = (- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__weclk)));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__collision_ff_clk[0U] 
        = ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__weclk))) 
           & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__radclk))) 
              & (- (IData)(((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__ra_lat) 
                            == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__wa_lat))))));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__collision_ff_clk[1U] 
        = ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__weclk))) 
           & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__radclk))) 
              & (- (IData)(((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__ra_lat) 
                            == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__wa_lat))))));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__collision_ff_clk[2U] 
        = ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__weclk))) 
           & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__radclk))) 
              & (- (IData)(((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__ra_lat) 
                            == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__wa_lat))))));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__collision_ff_clk[3U] 
        = ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__weclk))) 
           & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__radclk))) 
              & (- (IData)(((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__ra_lat) 
                            == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__wa_lat))))));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__collision_ff_clk[4U] 
        = ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__weclk))) 
           & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__radclk))) 
              & (- (IData)(((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__ra_lat) 
                            == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__wa_lat))))));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__collision_ff_clk[5U] 
        = ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__weclk))) 
           & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__radclk))) 
              & (- (IData)(((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__ra_lat) 
                            == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__wa_lat))))));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__collision_ff_clk[6U] 
        = ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__weclk))) 
           & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__radclk))) 
              & (- (IData)(((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__ra_lat) 
                            == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__wa_lat))))));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__collision_ff_clk[7U] 
        = ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__weclk))) 
           & ((- (IData)((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__radclk))) 
              & (- (IData)(((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__ra_lat) 
                            == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__wa_lat))))));
    vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__a = 0U;
    while (VL_GTS_III(32, 0x00000100U, vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__a)) {
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__r0_dout_tmp[(7U 
                                                                                & (vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__a 
                                                                                >> 5U))] 
            = (((~ ((IData)(1U) << (0x0000001fU & vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__a))) 
                & vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__r0_dout_tmp[
                (7U & (vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__a 
                       >> 5U))]) | (((1U & (~ ((vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__collision_ff[
                                                (7U 
                                                 & (vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__a 
                                                    >> 5U))] 
                                                >> 
                                                (0x0000001fU 
                                                 & vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__a)) 
                                               | ((((IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__ra_lat) 
                                                    == (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__wa_lat)) 
                                                   & (IData)(vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__weclk)) 
                                                  & (Vsim__ConstPool__CONST_h5b979007_0[
                                                     (7U 
                                                      & (vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__a 
                                                         >> 5U))] 
                                                     >> 
                                                     (0x0000001fU 
                                                      & vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__a)))))) 
                                     && (1U & (vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__array
                                               [vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__ra_lat][
                                               (7U 
                                                & (vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__a 
                                                   >> 5U))] 
                                               >> (0x0000001fU 
                                                   & vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__a)))) 
                                    << (0x0000001fU 
                                        & vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__a)));
        vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__a 
            = ((IData)(1U) + vlSelfRef.__PVT__r_nv_ram_rws_16x256__DOT__ram_Inst_16X256__DOT__ITOP__DOT__io__DOT__a);
    }
}
