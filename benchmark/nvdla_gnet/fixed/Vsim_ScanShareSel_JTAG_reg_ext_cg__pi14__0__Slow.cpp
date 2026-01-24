// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

VL_ATTR_COLD void Vsim_ScanShareSel_JTAG_reg_ext_cg__pi14___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_4__r_nv_ram_rws_32x544__DOT__testInst_Data_reg_r0_31_0__0(Vsim_ScanShareSel_JTAG_reg_ext_cg__pi14* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vsim_ScanShareSel_JTAG_reg_ext_cg__pi14___stl_sequent__TOP__tb_top__DOT__nvdla_top__DOT__u_partition_a__DOT__u_NV_NVDLA_cacc__DOT__u_assembly_buffer__DOT__u_accu_abuf_4__r_nv_ram_rws_32x544__DOT__testInst_Data_reg_r0_31_0__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.Q = (((((((((IData)(vlSelfRef.__Vcellout__Jreg_ff__BRA__31__KET____DOT__SSS__DOT__nr__Q) 
                          << 3U) | ((IData)(vlSelfRef.__Vcellout__Jreg_ff__BRA__30__KET____DOT__SSS__DOT__nr__Q) 
                                    << 2U)) | (((IData)(vlSelfRef.__Vcellout__Jreg_ff__BRA__29__KET____DOT__SSS__DOT__nr__Q) 
                                                << 1U) 
                                               | (IData)(vlSelfRef.__Vcellout__Jreg_ff__BRA__28__KET____DOT__SSS__DOT__nr__Q))) 
                       << 0x0000000cU) | (((((IData)(vlSelfRef.__Vcellout__Jreg_ff__BRA__27__KET____DOT__SSS__DOT__nr__Q) 
                                             << 3U) 
                                            | ((IData)(vlSelfRef.__Vcellout__Jreg_ff__BRA__26__KET____DOT__SSS__DOT__nr__Q) 
                                               << 2U)) 
                                           | (((IData)(vlSelfRef.__Vcellout__Jreg_ff__BRA__25__KET____DOT__SSS__DOT__nr__Q) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.__Vcellout__Jreg_ff__BRA__24__KET____DOT__SSS__DOT__nr__Q))) 
                                          << 8U)) | 
                     ((((((IData)(vlSelfRef.__Vcellout__Jreg_ff__BRA__23__KET____DOT__SSS__DOT__nr__Q) 
                          << 3U) | ((IData)(vlSelfRef.__Vcellout__Jreg_ff__BRA__22__KET____DOT__SSS__DOT__nr__Q) 
                                    << 2U)) | (((IData)(vlSelfRef.__Vcellout__Jreg_ff__BRA__21__KET____DOT__SSS__DOT__nr__Q) 
                                                << 1U) 
                                               | (IData)(vlSelfRef.__Vcellout__Jreg_ff__BRA__20__KET____DOT__SSS__DOT__nr__Q))) 
                       << 4U) | ((((IData)(vlSelfRef.__Vcellout__Jreg_ff__BRA__19__KET____DOT__SSS__DOT__nr__Q) 
                                   << 3U) | ((IData)(vlSelfRef.__Vcellout__Jreg_ff__BRA__18__KET____DOT__SSS__DOT__nr__Q) 
                                             << 2U)) 
                                 | (((IData)(vlSelfRef.__Vcellout__Jreg_ff__BRA__17__KET____DOT__SSS__DOT__nr__Q) 
                                     << 1U) | (IData)(vlSelfRef.__Vcellout__Jreg_ff__BRA__16__KET____DOT__SSS__DOT__nr__Q))))) 
                    << 0x00000010U) | (((((((IData)(vlSelfRef.__Vcellout__Jreg_ff__BRA__15__KET____DOT__SSS__DOT__nr__Q) 
                                            << 3U) 
                                           | ((IData)(vlSelfRef.__Vcellout__Jreg_ff__BRA__14__KET____DOT__SSS__DOT__nr__Q) 
                                              << 2U)) 
                                          | (((IData)(vlSelfRef.__Vcellout__Jreg_ff__BRA__13__KET____DOT__SSS__DOT__nr__Q) 
                                              << 1U) 
                                             | (IData)(vlSelfRef.__Vcellout__Jreg_ff__BRA__12__KET____DOT__SSS__DOT__nr__Q))) 
                                         << 0x0000000cU) 
                                        | (((((IData)(vlSelfRef.__Vcellout__Jreg_ff__BRA__11__KET____DOT__SSS__DOT__nr__Q) 
                                              << 3U) 
                                             | ((IData)(vlSelfRef.__Vcellout__Jreg_ff__BRA__10__KET____DOT__SSS__DOT__nr__Q) 
                                                << 2U)) 
                                            | (((IData)(vlSelfRef.__Vcellout__Jreg_ff__BRA__9__KET____DOT__SSS__DOT__nr__Q) 
                                                << 1U) 
                                               | (IData)(vlSelfRef.__Vcellout__Jreg_ff__BRA__8__KET____DOT__SSS__DOT__nr__Q))) 
                                           << 8U)) 
                                       | ((((((IData)(vlSelfRef.__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                              << 3U) 
                                             | ((IData)(vlSelfRef.__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                << 2U)) 
                                            | (((IData)(vlSelfRef.__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                << 1U) 
                                               | (IData)(vlSelfRef.__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q))) 
                                           << 4U) | 
                                          ((((IData)(vlSelfRef.__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                             << 3U) 
                                            | ((IData)(vlSelfRef.__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                               << 2U)) 
                                           | (((IData)(vlSelfRef.__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q))))));
}

VL_ATTR_COLD void Vsim_ScanShareSel_JTAG_reg_ext_cg__pi14___ctor_var_reset(Vsim_ScanShareSel_JTAG_reg_ext_cg__pi14* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vsim_ScanShareSel_JTAG_reg_ext_cg__pi14___ctor_var_reset\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->D = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9391737413944127320ull);
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->reset_ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16045251163025377914ull);
    vlSelf->scanin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18086663322088233579ull);
    vlSelf->sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14660815779230110548ull);
    vlSelf->shiftDR = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 973725432361505801ull);
    vlSelf->Q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17714545831559622561ull);
    vlSelf->scanout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4552453323431310566ull);
    vlSelf->__PVT__clk_wire = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7194709672137212313ull);
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7488032794441497119ull);
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7150219488376000343ull);
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10660408215280537462ull);
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9698375589442749867ull);
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2864288818865253249ull);
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12771385105098096481ull);
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15849523675929298463ull);
    vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5371961028311928750ull);
    vlSelf->__Vcellout__Jreg_ff__BRA__8__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16309721225153626639ull);
    vlSelf->__Vcellout__Jreg_ff__BRA__9__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3002248169816613044ull);
    vlSelf->__Vcellout__Jreg_ff__BRA__10__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12877625295216879546ull);
    vlSelf->__Vcellout__Jreg_ff__BRA__11__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17669087379306256215ull);
    vlSelf->__Vcellout__Jreg_ff__BRA__12__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14504083221801537737ull);
    vlSelf->__Vcellout__Jreg_ff__BRA__13__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1920198662813533508ull);
    vlSelf->__Vcellout__Jreg_ff__BRA__14__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13664937456588403479ull);
    vlSelf->__Vcellout__Jreg_ff__BRA__15__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2905017285412257759ull);
    vlSelf->__Vcellout__Jreg_ff__BRA__16__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15040136554314606031ull);
    vlSelf->__Vcellout__Jreg_ff__BRA__17__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15921399631943082517ull);
    vlSelf->__Vcellout__Jreg_ff__BRA__18__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7906104705960515541ull);
    vlSelf->__Vcellout__Jreg_ff__BRA__19__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11903759361920846762ull);
    vlSelf->__Vcellout__Jreg_ff__BRA__20__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 811733944291171121ull);
    vlSelf->__Vcellout__Jreg_ff__BRA__21__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17639151694446458218ull);
    vlSelf->__Vcellout__Jreg_ff__BRA__22__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16723901349574078535ull);
    vlSelf->__Vcellout__Jreg_ff__BRA__23__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6919653727862390919ull);
    vlSelf->__Vcellout__Jreg_ff__BRA__24__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16478022572690647907ull);
    vlSelf->__Vcellout__Jreg_ff__BRA__25__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11458961889867616617ull);
    vlSelf->__Vcellout__Jreg_ff__BRA__26__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3169375195253512439ull);
    vlSelf->__Vcellout__Jreg_ff__BRA__27__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13034637382907669287ull);
    vlSelf->__Vcellout__Jreg_ff__BRA__28__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10366263729971311966ull);
    vlSelf->__Vcellout__Jreg_ff__BRA__29__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5764970199882574352ull);
    vlSelf->__Vcellout__Jreg_ff__BRA__30__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10461607754651364992ull);
    vlSelf->__Vcellout__Jreg_ff__BRA__31__KET____DOT__SSS__DOT__nr__Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12301395241960177885ull);
}
