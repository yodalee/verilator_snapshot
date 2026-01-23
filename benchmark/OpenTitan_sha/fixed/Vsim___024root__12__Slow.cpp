// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

extern const VlWide<42>/*1343:0*/ Vsim__ConstPool__CONST_hdf86e638_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vsim__ConstPool__TABLE_hd5a99a19_0;

VL_ATTR_COLD void Vsim___024root___stl_sequent__TOP__11(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___stl_sequent__TOP__11\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*27:0*/ __Vfunc_info_cfg_qual__729__Vfuncout;
    __Vfunc_info_cfg_qual__729__Vfuncout = 0;
    IData/*27:0*/ __Vfunc_info_cfg_qual__729__in_cfg;
    __Vfunc_info_cfg_qual__729__in_cfg = 0;
    IData/*27:0*/ __Vfunc_info_cfg_qual__729__qual_cfg;
    __Vfunc_info_cfg_qual__729__qual_cfg = 0;
    IData/*27:0*/ __Vfunc_info_cfg_qual__729__out_cfg;
    __Vfunc_info_cfg_qual__729__out_cfg = 0;
    IData/*27:0*/ __Vfunc_info_cfg_qual__744__Vfuncout;
    __Vfunc_info_cfg_qual__744__Vfuncout = 0;
    IData/*27:0*/ __Vfunc_info_cfg_qual__744__in_cfg;
    __Vfunc_info_cfg_qual__744__in_cfg = 0;
    IData/*27:0*/ __Vfunc_info_cfg_qual__744__qual_cfg;
    __Vfunc_info_cfg_qual__744__qual_cfg = 0;
    IData/*27:0*/ __Vfunc_info_cfg_qual__744__out_cfg;
    __Vfunc_info_cfg_qual__744__out_cfg = 0;
    IData/*27:0*/ __Vfunc_info_cfg_qual__759__Vfuncout;
    __Vfunc_info_cfg_qual__759__Vfuncout = 0;
    IData/*27:0*/ __Vfunc_info_cfg_qual__759__in_cfg;
    __Vfunc_info_cfg_qual__759__in_cfg = 0;
    IData/*27:0*/ __Vfunc_info_cfg_qual__759__qual_cfg;
    __Vfunc_info_cfg_qual__759__qual_cfg = 0;
    IData/*27:0*/ __Vfunc_info_cfg_qual__759__out_cfg;
    __Vfunc_info_cfg_qual__759__out_cfg = 0;
    CData/*4:0*/ __Vtableidx91;
    __Vtableidx91 = 0;
    VlWide<8>/*255:0*/ __Vtemp_924;
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_block_encrypt__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT____Vcellout__gen_sbox_j__BRA__0__KET____DOT__gen_sbox_i__BRA__2__KET____DOT__u_aes_sbox_ij__data_o 
        = (0x63U ^ ([&]() {
                vlSelfRef.__Vfunc_aes_mvm__2259__mat_a
                    [0U] = 0x58U;
                vlSelfRef.__Vfunc_aes_mvm__2259__mat_a
                    [1U] = 0x2dU;
                vlSelfRef.__Vfunc_aes_mvm__2259__mat_a
                    [2U] = 0x9eU;
                vlSelfRef.__Vfunc_aes_mvm__2259__mat_a
                    [3U] = 0x0bU;
                vlSelfRef.__Vfunc_aes_mvm__2259__mat_a
                    [4U] = 0xdcU;
                vlSelfRef.__Vfunc_aes_mvm__2259__mat_a
                    [5U] = 4U;
                vlSelfRef.__Vfunc_aes_mvm__2259__mat_a
                    [6U] = 3U;
                vlSelfRef.__Vfunc_aes_mvm__2259__mat_a
                    [7U] = 0x24U;
                vlSelfRef.__Vfunc_aes_mvm__2259__vec_b 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_block_encrypt__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__0__KET____DOT__gen_sbox_i__BRA__2__KET____DOT__u_aes_sbox_ij__DOT__gen_sbox_unmasked__DOT__gen_sbox_canright__DOT__u_aes_sbox__DOT__data_inverse;
                vlSelfRef.__Vfunc_aes_mvm__2259__vec_c = 0U;
                vlSelfRef.__Vfunc_aes_mvm__2259__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                       | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_b) 
                                   >> 7U) & vlSelfRef.__Vfunc_aes_mvm__2259__mat_a
                                  [0U])));
                vlSelfRef.__Vfunc_aes_mvm__2259__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2259__mat_a
                                   [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_b) 
                                           >> 6U)))));
                vlSelfRef.__Vfunc_aes_mvm__2259__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2259__mat_a
                                   [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_b) 
                                           >> 5U)))));
                vlSelfRef.__Vfunc_aes_mvm__2259__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2259__mat_a
                                   [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_b) 
                                           >> 4U)))));
                vlSelfRef.__Vfunc_aes_mvm__2259__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2259__mat_a
                                   [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_b) 
                                           >> 3U)))));
                vlSelfRef.__Vfunc_aes_mvm__2259__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2259__mat_a
                                   [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_b) 
                                           >> 2U)))));
                vlSelfRef.__Vfunc_aes_mvm__2259__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2259__mat_a
                                   [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_b) 
                                           >> 1U)))));
                vlSelfRef.__Vfunc_aes_mvm__2259__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2259__mat_a
                                   [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2259__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                                ^ (0x03fffffeU & (vlSelfRef.__Vfunc_aes_mvm__2259__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_b) 
                                                     >> 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__2259__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                                ^ (0x07fffffeU & (vlSelfRef.__Vfunc_aes_mvm__2259__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_b) 
                                                     >> 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__2259__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                                ^ (0x0ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__2259__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2259__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                                ^ (0x1ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__2259__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2259__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                                ^ (0x3ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__2259__mat_a
                                                  [4U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2259__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                                ^ (0x7ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__2259__mat_a
                                                  [5U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2259__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                       | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2259__mat_a
                                   [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2259__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                                ^ (0xfffffffeU & (vlSelfRef.__Vfunc_aes_mvm__2259__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2259__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                                ^ (0x07fffffcU & (vlSelfRef.__Vfunc_aes_mvm__2259__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_b) 
                                                     >> 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__2259__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                                ^ (0x0ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2259__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2259__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                                ^ (0x1ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2259__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2259__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                                ^ (0x3ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2259__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2259__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                                ^ (0x7ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2259__mat_a
                                                  [4U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2259__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                       | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2259__mat_a
                                   [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2259__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                                ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2259__mat_a
                                                  [6U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2259__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                                ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2259__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_b) 
                                                     << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2259__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                                ^ (0x0ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2259__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2259__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                                ^ (0x1ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2259__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2259__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                                ^ (0x3ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2259__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2259__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                                ^ (0x7ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2259__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2259__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                       | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2259__mat_a
                                   [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2259__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2259__mat_a
                                                  [5U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2259__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2259__mat_a
                                                  [6U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_b) 
                                                     << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2259__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2259__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_b) 
                                                     << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2259__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                                         ^ (0x1ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2259__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_b) 
                                                  >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2259__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                                         ^ (0x3ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2259__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_b) 
                                                  >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2259__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                                         ^ (0x7ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2259__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2259__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                       | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__2259__mat_a
                                            [3U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2259__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2259__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2259__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2259__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2259__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2259__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2259__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2259__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2259__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                                         ^ (0x3fffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2259__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_b) 
                                                  >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2259__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                                         ^ (0x7fffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2259__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2259__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                       | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__2259__mat_a
                                            [2U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2259__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2259__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2259__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2259__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2259__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2259__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2259__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2259__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2259__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2259__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__2259__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                                         ^ (0x7fffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2259__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2259__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                       | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__2259__mat_a
                                            [1U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2259__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2259__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2259__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2259__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2259__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2259__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2259__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2259__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2259__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2259__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__2259__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2259__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_b) 
                                                  << 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__2259__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                       | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__2259__mat_a
                                            [0U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2259__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2259__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2259__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2259__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2259__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2259__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2259__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2259__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2259__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2259__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__2259__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2259__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_b) 
                                                  << 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__2259__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2259__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2259__vec_b) 
                                                  << 7U))))));
                vlSelfRef.__Vfunc_aes_mvm__2259__Vfuncout 
                    = vlSelfRef.__Vfunc_aes_mvm__2259__vec_c;
            }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__2259__Vfuncout)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_block_encrypt__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT____Vcellout__gen_sbox_j__BRA__0__KET____DOT__gen_sbox_i__BRA__3__KET____DOT__u_aes_sbox_ij__data_o 
        = (0x63U ^ ([&]() {
                vlSelfRef.__Vfunc_aes_mvm__2291__mat_a
                    [0U] = 0x58U;
                vlSelfRef.__Vfunc_aes_mvm__2291__mat_a
                    [1U] = 0x2dU;
                vlSelfRef.__Vfunc_aes_mvm__2291__mat_a
                    [2U] = 0x9eU;
                vlSelfRef.__Vfunc_aes_mvm__2291__mat_a
                    [3U] = 0x0bU;
                vlSelfRef.__Vfunc_aes_mvm__2291__mat_a
                    [4U] = 0xdcU;
                vlSelfRef.__Vfunc_aes_mvm__2291__mat_a
                    [5U] = 4U;
                vlSelfRef.__Vfunc_aes_mvm__2291__mat_a
                    [6U] = 3U;
                vlSelfRef.__Vfunc_aes_mvm__2291__mat_a
                    [7U] = 0x24U;
                vlSelfRef.__Vfunc_aes_mvm__2291__vec_b 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_block_encrypt__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__0__KET____DOT__gen_sbox_i__BRA__3__KET____DOT__u_aes_sbox_ij__DOT__gen_sbox_unmasked__DOT__gen_sbox_canright__DOT__u_aes_sbox__DOT__data_inverse;
                vlSelfRef.__Vfunc_aes_mvm__2291__vec_c = 0U;
                vlSelfRef.__Vfunc_aes_mvm__2291__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                       | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_b) 
                                   >> 7U) & vlSelfRef.__Vfunc_aes_mvm__2291__mat_a
                                  [0U])));
                vlSelfRef.__Vfunc_aes_mvm__2291__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2291__mat_a
                                   [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_b) 
                                           >> 6U)))));
                vlSelfRef.__Vfunc_aes_mvm__2291__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2291__mat_a
                                   [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_b) 
                                           >> 5U)))));
                vlSelfRef.__Vfunc_aes_mvm__2291__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2291__mat_a
                                   [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_b) 
                                           >> 4U)))));
                vlSelfRef.__Vfunc_aes_mvm__2291__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2291__mat_a
                                   [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_b) 
                                           >> 3U)))));
                vlSelfRef.__Vfunc_aes_mvm__2291__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2291__mat_a
                                   [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_b) 
                                           >> 2U)))));
                vlSelfRef.__Vfunc_aes_mvm__2291__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2291__mat_a
                                   [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_b) 
                                           >> 1U)))));
                vlSelfRef.__Vfunc_aes_mvm__2291__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2291__mat_a
                                   [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2291__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                                ^ (0x03fffffeU & (vlSelfRef.__Vfunc_aes_mvm__2291__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_b) 
                                                     >> 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__2291__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                                ^ (0x07fffffeU & (vlSelfRef.__Vfunc_aes_mvm__2291__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_b) 
                                                     >> 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__2291__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                                ^ (0x0ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__2291__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2291__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                                ^ (0x1ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__2291__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2291__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                                ^ (0x3ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__2291__mat_a
                                                  [4U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2291__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                                ^ (0x7ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__2291__mat_a
                                                  [5U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2291__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                       | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2291__mat_a
                                   [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2291__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                                ^ (0xfffffffeU & (vlSelfRef.__Vfunc_aes_mvm__2291__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2291__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                                ^ (0x07fffffcU & (vlSelfRef.__Vfunc_aes_mvm__2291__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_b) 
                                                     >> 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__2291__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                                ^ (0x0ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2291__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2291__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                                ^ (0x1ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2291__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2291__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                                ^ (0x3ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2291__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2291__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                                ^ (0x7ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2291__mat_a
                                                  [4U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2291__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                       | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2291__mat_a
                                   [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2291__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                                ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2291__mat_a
                                                  [6U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2291__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                                ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2291__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_b) 
                                                     << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2291__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                                ^ (0x0ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2291__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2291__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                                ^ (0x1ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2291__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2291__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                                ^ (0x3ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2291__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2291__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                                ^ (0x7ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2291__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2291__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                       | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2291__mat_a
                                   [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2291__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2291__mat_a
                                                  [5U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2291__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2291__mat_a
                                                  [6U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_b) 
                                                     << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2291__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2291__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_b) 
                                                     << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2291__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                                         ^ (0x1ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2291__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_b) 
                                                  >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2291__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                                         ^ (0x3ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2291__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_b) 
                                                  >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2291__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                                         ^ (0x7ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2291__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2291__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                       | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__2291__mat_a
                                            [3U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2291__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2291__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2291__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2291__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2291__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2291__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2291__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2291__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2291__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                                         ^ (0x3fffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2291__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_b) 
                                                  >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2291__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                                         ^ (0x7fffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2291__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2291__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                       | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__2291__mat_a
                                            [2U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2291__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2291__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2291__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2291__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2291__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2291__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2291__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2291__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2291__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2291__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__2291__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                                         ^ (0x7fffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2291__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2291__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                       | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__2291__mat_a
                                            [1U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2291__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2291__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2291__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2291__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2291__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2291__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2291__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2291__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2291__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2291__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__2291__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2291__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_b) 
                                                  << 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__2291__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                       | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__2291__mat_a
                                            [0U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2291__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2291__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2291__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2291__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2291__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2291__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2291__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2291__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2291__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2291__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__2291__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2291__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_b) 
                                                  << 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__2291__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2291__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2291__vec_b) 
                                                  << 7U))))));
                vlSelfRef.__Vfunc_aes_mvm__2291__Vfuncout 
                    = vlSelfRef.__Vfunc_aes_mvm__2291__vec_c;
            }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__2291__Vfuncout)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_block_encrypt__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT____Vcellout__gen_sbox_j__BRA__1__KET____DOT__gen_sbox_i__BRA__0__KET____DOT__u_aes_sbox_ij__data_o 
        = (0x63U ^ ([&]() {
                vlSelfRef.__Vfunc_aes_mvm__2323__mat_a
                    [0U] = 0x58U;
                vlSelfRef.__Vfunc_aes_mvm__2323__mat_a
                    [1U] = 0x2dU;
                vlSelfRef.__Vfunc_aes_mvm__2323__mat_a
                    [2U] = 0x9eU;
                vlSelfRef.__Vfunc_aes_mvm__2323__mat_a
                    [3U] = 0x0bU;
                vlSelfRef.__Vfunc_aes_mvm__2323__mat_a
                    [4U] = 0xdcU;
                vlSelfRef.__Vfunc_aes_mvm__2323__mat_a
                    [5U] = 4U;
                vlSelfRef.__Vfunc_aes_mvm__2323__mat_a
                    [6U] = 3U;
                vlSelfRef.__Vfunc_aes_mvm__2323__mat_a
                    [7U] = 0x24U;
                vlSelfRef.__Vfunc_aes_mvm__2323__vec_b 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_block_encrypt__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__1__KET____DOT__gen_sbox_i__BRA__0__KET____DOT__u_aes_sbox_ij__DOT__gen_sbox_unmasked__DOT__gen_sbox_canright__DOT__u_aes_sbox__DOT__data_inverse;
                vlSelfRef.__Vfunc_aes_mvm__2323__vec_c = 0U;
                vlSelfRef.__Vfunc_aes_mvm__2323__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                       | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_b) 
                                   >> 7U) & vlSelfRef.__Vfunc_aes_mvm__2323__mat_a
                                  [0U])));
                vlSelfRef.__Vfunc_aes_mvm__2323__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2323__mat_a
                                   [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_b) 
                                           >> 6U)))));
                vlSelfRef.__Vfunc_aes_mvm__2323__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2323__mat_a
                                   [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_b) 
                                           >> 5U)))));
                vlSelfRef.__Vfunc_aes_mvm__2323__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2323__mat_a
                                   [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_b) 
                                           >> 4U)))));
                vlSelfRef.__Vfunc_aes_mvm__2323__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2323__mat_a
                                   [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_b) 
                                           >> 3U)))));
                vlSelfRef.__Vfunc_aes_mvm__2323__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2323__mat_a
                                   [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_b) 
                                           >> 2U)))));
                vlSelfRef.__Vfunc_aes_mvm__2323__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2323__mat_a
                                   [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_b) 
                                           >> 1U)))));
                vlSelfRef.__Vfunc_aes_mvm__2323__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2323__mat_a
                                   [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2323__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                                ^ (0x03fffffeU & (vlSelfRef.__Vfunc_aes_mvm__2323__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_b) 
                                                     >> 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__2323__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                                ^ (0x07fffffeU & (vlSelfRef.__Vfunc_aes_mvm__2323__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_b) 
                                                     >> 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__2323__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                                ^ (0x0ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__2323__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2323__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                                ^ (0x1ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__2323__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2323__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                                ^ (0x3ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__2323__mat_a
                                                  [4U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2323__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                                ^ (0x7ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__2323__mat_a
                                                  [5U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2323__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                       | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2323__mat_a
                                   [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2323__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                                ^ (0xfffffffeU & (vlSelfRef.__Vfunc_aes_mvm__2323__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2323__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                                ^ (0x07fffffcU & (vlSelfRef.__Vfunc_aes_mvm__2323__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_b) 
                                                     >> 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__2323__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                                ^ (0x0ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2323__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2323__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                                ^ (0x1ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2323__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2323__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                                ^ (0x3ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2323__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2323__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                                ^ (0x7ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2323__mat_a
                                                  [4U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2323__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                       | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2323__mat_a
                                   [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2323__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                                ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2323__mat_a
                                                  [6U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2323__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                                ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2323__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_b) 
                                                     << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2323__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                                ^ (0x0ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2323__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2323__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                                ^ (0x1ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2323__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2323__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                                ^ (0x3ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2323__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2323__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                                ^ (0x7ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2323__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2323__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                       | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2323__mat_a
                                   [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2323__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2323__mat_a
                                                  [5U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2323__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2323__mat_a
                                                  [6U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_b) 
                                                     << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2323__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2323__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_b) 
                                                     << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2323__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                                         ^ (0x1ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2323__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_b) 
                                                  >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2323__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                                         ^ (0x3ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2323__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_b) 
                                                  >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2323__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                                         ^ (0x7ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2323__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2323__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                       | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__2323__mat_a
                                            [3U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2323__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2323__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2323__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2323__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2323__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2323__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2323__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2323__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2323__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                                         ^ (0x3fffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2323__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_b) 
                                                  >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2323__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                                         ^ (0x7fffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2323__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2323__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                       | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__2323__mat_a
                                            [2U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2323__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2323__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2323__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2323__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2323__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2323__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2323__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2323__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2323__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2323__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__2323__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                                         ^ (0x7fffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2323__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2323__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                       | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__2323__mat_a
                                            [1U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2323__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2323__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2323__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2323__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2323__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2323__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2323__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2323__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2323__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2323__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__2323__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2323__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_b) 
                                                  << 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__2323__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                       | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__2323__mat_a
                                            [0U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2323__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2323__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2323__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2323__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2323__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2323__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2323__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2323__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2323__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2323__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__2323__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2323__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_b) 
                                                  << 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__2323__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2323__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2323__vec_b) 
                                                  << 7U))))));
                vlSelfRef.__Vfunc_aes_mvm__2323__Vfuncout 
                    = vlSelfRef.__Vfunc_aes_mvm__2323__vec_c;
            }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__2323__Vfuncout)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_block_encrypt__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT____Vcellout__gen_sbox_j__BRA__1__KET____DOT__gen_sbox_i__BRA__1__KET____DOT__u_aes_sbox_ij__data_o 
        = (0x63U ^ ([&]() {
                vlSelfRef.__Vfunc_aes_mvm__2355__mat_a
                    [0U] = 0x58U;
                vlSelfRef.__Vfunc_aes_mvm__2355__mat_a
                    [1U] = 0x2dU;
                vlSelfRef.__Vfunc_aes_mvm__2355__mat_a
                    [2U] = 0x9eU;
                vlSelfRef.__Vfunc_aes_mvm__2355__mat_a
                    [3U] = 0x0bU;
                vlSelfRef.__Vfunc_aes_mvm__2355__mat_a
                    [4U] = 0xdcU;
                vlSelfRef.__Vfunc_aes_mvm__2355__mat_a
                    [5U] = 4U;
                vlSelfRef.__Vfunc_aes_mvm__2355__mat_a
                    [6U] = 3U;
                vlSelfRef.__Vfunc_aes_mvm__2355__mat_a
                    [7U] = 0x24U;
                vlSelfRef.__Vfunc_aes_mvm__2355__vec_b 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_block_encrypt__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__1__KET____DOT__gen_sbox_i__BRA__1__KET____DOT__u_aes_sbox_ij__DOT__gen_sbox_unmasked__DOT__gen_sbox_canright__DOT__u_aes_sbox__DOT__data_inverse;
                vlSelfRef.__Vfunc_aes_mvm__2355__vec_c = 0U;
                vlSelfRef.__Vfunc_aes_mvm__2355__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                       | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_b) 
                                   >> 7U) & vlSelfRef.__Vfunc_aes_mvm__2355__mat_a
                                  [0U])));
                vlSelfRef.__Vfunc_aes_mvm__2355__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2355__mat_a
                                   [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_b) 
                                           >> 6U)))));
                vlSelfRef.__Vfunc_aes_mvm__2355__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2355__mat_a
                                   [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_b) 
                                           >> 5U)))));
                vlSelfRef.__Vfunc_aes_mvm__2355__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2355__mat_a
                                   [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_b) 
                                           >> 4U)))));
                vlSelfRef.__Vfunc_aes_mvm__2355__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2355__mat_a
                                   [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_b) 
                                           >> 3U)))));
                vlSelfRef.__Vfunc_aes_mvm__2355__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2355__mat_a
                                   [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_b) 
                                           >> 2U)))));
                vlSelfRef.__Vfunc_aes_mvm__2355__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2355__mat_a
                                   [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_b) 
                                           >> 1U)))));
                vlSelfRef.__Vfunc_aes_mvm__2355__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2355__mat_a
                                   [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2355__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                                ^ (0x03fffffeU & (vlSelfRef.__Vfunc_aes_mvm__2355__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_b) 
                                                     >> 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__2355__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                                ^ (0x07fffffeU & (vlSelfRef.__Vfunc_aes_mvm__2355__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_b) 
                                                     >> 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__2355__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                                ^ (0x0ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__2355__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2355__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                                ^ (0x1ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__2355__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2355__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                                ^ (0x3ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__2355__mat_a
                                                  [4U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2355__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                                ^ (0x7ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__2355__mat_a
                                                  [5U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2355__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                       | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2355__mat_a
                                   [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2355__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                                ^ (0xfffffffeU & (vlSelfRef.__Vfunc_aes_mvm__2355__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2355__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                                ^ (0x07fffffcU & (vlSelfRef.__Vfunc_aes_mvm__2355__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_b) 
                                                     >> 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__2355__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                                ^ (0x0ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2355__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2355__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                                ^ (0x1ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2355__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2355__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                                ^ (0x3ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2355__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2355__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                                ^ (0x7ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2355__mat_a
                                                  [4U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2355__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                       | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2355__mat_a
                                   [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2355__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                                ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2355__mat_a
                                                  [6U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2355__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                                ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2355__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_b) 
                                                     << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2355__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                                ^ (0x0ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2355__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2355__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                                ^ (0x1ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2355__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2355__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                                ^ (0x3ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2355__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2355__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                                ^ (0x7ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2355__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2355__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                       | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2355__mat_a
                                   [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2355__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2355__mat_a
                                                  [5U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2355__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2355__mat_a
                                                  [6U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_b) 
                                                     << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2355__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2355__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_b) 
                                                     << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2355__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                                         ^ (0x1ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2355__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_b) 
                                                  >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2355__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                                         ^ (0x3ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2355__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_b) 
                                                  >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2355__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                                         ^ (0x7ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2355__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2355__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                       | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__2355__mat_a
                                            [3U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2355__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2355__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2355__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2355__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2355__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2355__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2355__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2355__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2355__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                                         ^ (0x3fffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2355__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_b) 
                                                  >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2355__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                                         ^ (0x7fffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2355__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2355__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                       | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__2355__mat_a
                                            [2U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2355__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2355__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2355__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2355__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2355__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2355__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2355__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2355__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2355__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2355__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__2355__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                                         ^ (0x7fffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2355__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2355__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                       | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__2355__mat_a
                                            [1U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2355__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2355__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2355__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2355__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2355__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2355__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2355__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2355__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2355__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2355__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__2355__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2355__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_b) 
                                                  << 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__2355__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                       | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__2355__mat_a
                                            [0U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2355__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2355__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2355__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2355__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2355__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2355__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2355__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2355__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2355__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2355__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__2355__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2355__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_b) 
                                                  << 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__2355__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2355__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2355__vec_b) 
                                                  << 7U))))));
                vlSelfRef.__Vfunc_aes_mvm__2355__Vfuncout 
                    = vlSelfRef.__Vfunc_aes_mvm__2355__vec_c;
            }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__2355__Vfuncout)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_block_encrypt__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT____Vcellout__gen_sbox_j__BRA__1__KET____DOT__gen_sbox_i__BRA__2__KET____DOT__u_aes_sbox_ij__data_o 
        = (0x63U ^ ([&]() {
                vlSelfRef.__Vfunc_aes_mvm__2387__mat_a
                    [0U] = 0x58U;
                vlSelfRef.__Vfunc_aes_mvm__2387__mat_a
                    [1U] = 0x2dU;
                vlSelfRef.__Vfunc_aes_mvm__2387__mat_a
                    [2U] = 0x9eU;
                vlSelfRef.__Vfunc_aes_mvm__2387__mat_a
                    [3U] = 0x0bU;
                vlSelfRef.__Vfunc_aes_mvm__2387__mat_a
                    [4U] = 0xdcU;
                vlSelfRef.__Vfunc_aes_mvm__2387__mat_a
                    [5U] = 4U;
                vlSelfRef.__Vfunc_aes_mvm__2387__mat_a
                    [6U] = 3U;
                vlSelfRef.__Vfunc_aes_mvm__2387__mat_a
                    [7U] = 0x24U;
                vlSelfRef.__Vfunc_aes_mvm__2387__vec_b 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_block_encrypt__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__1__KET____DOT__gen_sbox_i__BRA__2__KET____DOT__u_aes_sbox_ij__DOT__gen_sbox_unmasked__DOT__gen_sbox_canright__DOT__u_aes_sbox__DOT__data_inverse;
                vlSelfRef.__Vfunc_aes_mvm__2387__vec_c = 0U;
                vlSelfRef.__Vfunc_aes_mvm__2387__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                       | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_b) 
                                   >> 7U) & vlSelfRef.__Vfunc_aes_mvm__2387__mat_a
                                  [0U])));
                vlSelfRef.__Vfunc_aes_mvm__2387__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2387__mat_a
                                   [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_b) 
                                           >> 6U)))));
                vlSelfRef.__Vfunc_aes_mvm__2387__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2387__mat_a
                                   [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_b) 
                                           >> 5U)))));
                vlSelfRef.__Vfunc_aes_mvm__2387__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2387__mat_a
                                   [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_b) 
                                           >> 4U)))));
                vlSelfRef.__Vfunc_aes_mvm__2387__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2387__mat_a
                                   [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_b) 
                                           >> 3U)))));
                vlSelfRef.__Vfunc_aes_mvm__2387__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2387__mat_a
                                   [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_b) 
                                           >> 2U)))));
                vlSelfRef.__Vfunc_aes_mvm__2387__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2387__mat_a
                                   [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_b) 
                                           >> 1U)))));
                vlSelfRef.__Vfunc_aes_mvm__2387__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2387__mat_a
                                   [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2387__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                                ^ (0x03fffffeU & (vlSelfRef.__Vfunc_aes_mvm__2387__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_b) 
                                                     >> 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__2387__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                                ^ (0x07fffffeU & (vlSelfRef.__Vfunc_aes_mvm__2387__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_b) 
                                                     >> 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__2387__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                                ^ (0x0ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__2387__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2387__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                                ^ (0x1ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__2387__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2387__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                                ^ (0x3ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__2387__mat_a
                                                  [4U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2387__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                                ^ (0x7ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__2387__mat_a
                                                  [5U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2387__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                       | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2387__mat_a
                                   [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2387__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                                ^ (0xfffffffeU & (vlSelfRef.__Vfunc_aes_mvm__2387__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2387__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                                ^ (0x07fffffcU & (vlSelfRef.__Vfunc_aes_mvm__2387__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_b) 
                                                     >> 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__2387__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                                ^ (0x0ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2387__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2387__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                                ^ (0x1ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2387__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2387__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                                ^ (0x3ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2387__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2387__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                                ^ (0x7ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2387__mat_a
                                                  [4U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2387__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                       | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2387__mat_a
                                   [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2387__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                                ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2387__mat_a
                                                  [6U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2387__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                                ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2387__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_b) 
                                                     << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2387__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                                ^ (0x0ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2387__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2387__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                                ^ (0x1ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2387__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2387__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                                ^ (0x3ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2387__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2387__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                                ^ (0x7ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2387__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2387__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                       | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2387__mat_a
                                   [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2387__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2387__mat_a
                                                  [5U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2387__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2387__mat_a
                                                  [6U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_b) 
                                                     << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2387__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2387__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_b) 
                                                     << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2387__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                                         ^ (0x1ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2387__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_b) 
                                                  >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2387__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                                         ^ (0x3ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2387__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_b) 
                                                  >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2387__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                                         ^ (0x7ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2387__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2387__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                       | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__2387__mat_a
                                            [3U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2387__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2387__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2387__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2387__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2387__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2387__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2387__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2387__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2387__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                                         ^ (0x3fffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2387__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_b) 
                                                  >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2387__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                                         ^ (0x7fffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2387__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2387__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                       | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__2387__mat_a
                                            [2U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2387__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2387__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2387__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2387__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2387__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2387__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2387__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2387__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2387__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2387__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__2387__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                                         ^ (0x7fffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2387__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2387__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                       | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__2387__mat_a
                                            [1U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2387__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2387__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2387__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2387__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2387__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2387__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2387__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2387__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2387__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2387__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__2387__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2387__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_b) 
                                                  << 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__2387__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                       | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__2387__mat_a
                                            [0U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2387__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2387__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2387__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2387__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2387__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2387__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2387__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2387__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2387__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2387__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__2387__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2387__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_b) 
                                                  << 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__2387__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2387__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2387__vec_b) 
                                                  << 7U))))));
                vlSelfRef.__Vfunc_aes_mvm__2387__Vfuncout 
                    = vlSelfRef.__Vfunc_aes_mvm__2387__vec_c;
            }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__2387__Vfuncout)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_block_encrypt__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT____Vcellout__gen_sbox_j__BRA__1__KET____DOT__gen_sbox_i__BRA__3__KET____DOT__u_aes_sbox_ij__data_o 
        = (0x63U ^ ([&]() {
                vlSelfRef.__Vfunc_aes_mvm__2419__mat_a
                    [0U] = 0x58U;
                vlSelfRef.__Vfunc_aes_mvm__2419__mat_a
                    [1U] = 0x2dU;
                vlSelfRef.__Vfunc_aes_mvm__2419__mat_a
                    [2U] = 0x9eU;
                vlSelfRef.__Vfunc_aes_mvm__2419__mat_a
                    [3U] = 0x0bU;
                vlSelfRef.__Vfunc_aes_mvm__2419__mat_a
                    [4U] = 0xdcU;
                vlSelfRef.__Vfunc_aes_mvm__2419__mat_a
                    [5U] = 4U;
                vlSelfRef.__Vfunc_aes_mvm__2419__mat_a
                    [6U] = 3U;
                vlSelfRef.__Vfunc_aes_mvm__2419__mat_a
                    [7U] = 0x24U;
                vlSelfRef.__Vfunc_aes_mvm__2419__vec_b 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_block_encrypt__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__1__KET____DOT__gen_sbox_i__BRA__3__KET____DOT__u_aes_sbox_ij__DOT__gen_sbox_unmasked__DOT__gen_sbox_canright__DOT__u_aes_sbox__DOT__data_inverse;
                vlSelfRef.__Vfunc_aes_mvm__2419__vec_c = 0U;
                vlSelfRef.__Vfunc_aes_mvm__2419__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                       | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_b) 
                                   >> 7U) & vlSelfRef.__Vfunc_aes_mvm__2419__mat_a
                                  [0U])));
                vlSelfRef.__Vfunc_aes_mvm__2419__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2419__mat_a
                                   [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_b) 
                                           >> 6U)))));
                vlSelfRef.__Vfunc_aes_mvm__2419__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2419__mat_a
                                   [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_b) 
                                           >> 5U)))));
                vlSelfRef.__Vfunc_aes_mvm__2419__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2419__mat_a
                                   [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_b) 
                                           >> 4U)))));
                vlSelfRef.__Vfunc_aes_mvm__2419__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2419__mat_a
                                   [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_b) 
                                           >> 3U)))));
                vlSelfRef.__Vfunc_aes_mvm__2419__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2419__mat_a
                                   [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_b) 
                                           >> 2U)))));
                vlSelfRef.__Vfunc_aes_mvm__2419__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2419__mat_a
                                   [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_b) 
                                           >> 1U)))));
                vlSelfRef.__Vfunc_aes_mvm__2419__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2419__mat_a
                                   [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2419__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                                ^ (0x03fffffeU & (vlSelfRef.__Vfunc_aes_mvm__2419__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_b) 
                                                     >> 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__2419__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                                ^ (0x07fffffeU & (vlSelfRef.__Vfunc_aes_mvm__2419__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_b) 
                                                     >> 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__2419__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                                ^ (0x0ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__2419__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2419__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                                ^ (0x1ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__2419__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2419__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                                ^ (0x3ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__2419__mat_a
                                                  [4U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2419__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                                ^ (0x7ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__2419__mat_a
                                                  [5U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2419__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                       | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2419__mat_a
                                   [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2419__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                                ^ (0xfffffffeU & (vlSelfRef.__Vfunc_aes_mvm__2419__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2419__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                                ^ (0x07fffffcU & (vlSelfRef.__Vfunc_aes_mvm__2419__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_b) 
                                                     >> 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__2419__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                                ^ (0x0ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2419__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2419__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                                ^ (0x1ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2419__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2419__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                                ^ (0x3ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2419__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2419__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                                ^ (0x7ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2419__mat_a
                                                  [4U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2419__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                       | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2419__mat_a
                                   [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2419__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                                ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2419__mat_a
                                                  [6U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2419__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                                ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2419__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_b) 
                                                     << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2419__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                                ^ (0x0ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2419__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2419__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                                ^ (0x1ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2419__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2419__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                                ^ (0x3ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2419__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2419__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                                ^ (0x7ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2419__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2419__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                       | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2419__mat_a
                                   [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2419__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2419__mat_a
                                                  [5U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2419__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2419__mat_a
                                                  [6U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_b) 
                                                     << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2419__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2419__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_b) 
                                                     << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2419__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                                         ^ (0x1ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2419__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_b) 
                                                  >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2419__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                                         ^ (0x3ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2419__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_b) 
                                                  >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2419__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                                         ^ (0x7ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2419__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2419__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                       | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__2419__mat_a
                                            [3U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2419__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2419__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2419__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2419__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2419__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2419__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2419__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2419__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2419__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                                         ^ (0x3fffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2419__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_b) 
                                                  >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2419__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                                         ^ (0x7fffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2419__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2419__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                       | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__2419__mat_a
                                            [2U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2419__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2419__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2419__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2419__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2419__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2419__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2419__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2419__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2419__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2419__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__2419__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                                         ^ (0x7fffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2419__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2419__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                       | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__2419__mat_a
                                            [1U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2419__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2419__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2419__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2419__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2419__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2419__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2419__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2419__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2419__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2419__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__2419__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2419__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_b) 
                                                  << 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__2419__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                       | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__2419__mat_a
                                            [0U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2419__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2419__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2419__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2419__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2419__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2419__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2419__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2419__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2419__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2419__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__2419__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2419__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_b) 
                                                  << 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__2419__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2419__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2419__vec_b) 
                                                  << 7U))))));
                vlSelfRef.__Vfunc_aes_mvm__2419__Vfuncout 
                    = vlSelfRef.__Vfunc_aes_mvm__2419__vec_c;
            }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__2419__Vfuncout)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_block_encrypt__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT____Vcellout__gen_sbox_j__BRA__2__KET____DOT__gen_sbox_i__BRA__0__KET____DOT__u_aes_sbox_ij__data_o 
        = (0x63U ^ ([&]() {
                vlSelfRef.__Vfunc_aes_mvm__2451__mat_a
                    [0U] = 0x58U;
                vlSelfRef.__Vfunc_aes_mvm__2451__mat_a
                    [1U] = 0x2dU;
                vlSelfRef.__Vfunc_aes_mvm__2451__mat_a
                    [2U] = 0x9eU;
                vlSelfRef.__Vfunc_aes_mvm__2451__mat_a
                    [3U] = 0x0bU;
                vlSelfRef.__Vfunc_aes_mvm__2451__mat_a
                    [4U] = 0xdcU;
                vlSelfRef.__Vfunc_aes_mvm__2451__mat_a
                    [5U] = 4U;
                vlSelfRef.__Vfunc_aes_mvm__2451__mat_a
                    [6U] = 3U;
                vlSelfRef.__Vfunc_aes_mvm__2451__mat_a
                    [7U] = 0x24U;
                vlSelfRef.__Vfunc_aes_mvm__2451__vec_b 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_block_encrypt__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__2__KET____DOT__gen_sbox_i__BRA__0__KET____DOT__u_aes_sbox_ij__DOT__gen_sbox_unmasked__DOT__gen_sbox_canright__DOT__u_aes_sbox__DOT__data_inverse;
                vlSelfRef.__Vfunc_aes_mvm__2451__vec_c = 0U;
                vlSelfRef.__Vfunc_aes_mvm__2451__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                       | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_b) 
                                   >> 7U) & vlSelfRef.__Vfunc_aes_mvm__2451__mat_a
                                  [0U])));
                vlSelfRef.__Vfunc_aes_mvm__2451__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2451__mat_a
                                   [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_b) 
                                           >> 6U)))));
                vlSelfRef.__Vfunc_aes_mvm__2451__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2451__mat_a
                                   [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_b) 
                                           >> 5U)))));
                vlSelfRef.__Vfunc_aes_mvm__2451__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2451__mat_a
                                   [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_b) 
                                           >> 4U)))));
                vlSelfRef.__Vfunc_aes_mvm__2451__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2451__mat_a
                                   [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_b) 
                                           >> 3U)))));
                vlSelfRef.__Vfunc_aes_mvm__2451__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2451__mat_a
                                   [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_b) 
                                           >> 2U)))));
                vlSelfRef.__Vfunc_aes_mvm__2451__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2451__mat_a
                                   [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_b) 
                                           >> 1U)))));
                vlSelfRef.__Vfunc_aes_mvm__2451__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2451__mat_a
                                   [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2451__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                                ^ (0x03fffffeU & (vlSelfRef.__Vfunc_aes_mvm__2451__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_b) 
                                                     >> 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__2451__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                                ^ (0x07fffffeU & (vlSelfRef.__Vfunc_aes_mvm__2451__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_b) 
                                                     >> 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__2451__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                                ^ (0x0ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__2451__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2451__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                                ^ (0x1ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__2451__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2451__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                                ^ (0x3ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__2451__mat_a
                                                  [4U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2451__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                                ^ (0x7ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__2451__mat_a
                                                  [5U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2451__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                       | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2451__mat_a
                                   [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2451__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                                ^ (0xfffffffeU & (vlSelfRef.__Vfunc_aes_mvm__2451__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2451__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                                ^ (0x07fffffcU & (vlSelfRef.__Vfunc_aes_mvm__2451__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_b) 
                                                     >> 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__2451__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                                ^ (0x0ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2451__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2451__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                                ^ (0x1ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2451__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2451__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                                ^ (0x3ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2451__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2451__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                                ^ (0x7ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2451__mat_a
                                                  [4U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2451__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                       | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2451__mat_a
                                   [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2451__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                                ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2451__mat_a
                                                  [6U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2451__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                                ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2451__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_b) 
                                                     << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2451__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                                ^ (0x0ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2451__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2451__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                                ^ (0x1ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2451__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2451__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                                ^ (0x3ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2451__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2451__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                                ^ (0x7ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2451__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2451__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                       | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2451__mat_a
                                   [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2451__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2451__mat_a
                                                  [5U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2451__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2451__mat_a
                                                  [6U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_b) 
                                                     << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2451__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2451__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_b) 
                                                     << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2451__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                                         ^ (0x1ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2451__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_b) 
                                                  >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2451__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                                         ^ (0x3ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2451__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_b) 
                                                  >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2451__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                                         ^ (0x7ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2451__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2451__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                       | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__2451__mat_a
                                            [3U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2451__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2451__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2451__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2451__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2451__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2451__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2451__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2451__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2451__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                                         ^ (0x3fffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2451__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_b) 
                                                  >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2451__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                                         ^ (0x7fffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2451__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2451__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                       | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__2451__mat_a
                                            [2U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2451__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2451__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2451__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2451__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2451__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2451__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2451__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2451__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2451__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2451__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__2451__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                                         ^ (0x7fffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2451__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2451__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                       | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__2451__mat_a
                                            [1U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2451__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2451__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2451__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2451__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2451__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2451__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2451__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2451__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2451__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2451__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__2451__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2451__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_b) 
                                                  << 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__2451__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                       | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__2451__mat_a
                                            [0U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2451__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2451__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2451__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2451__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2451__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2451__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2451__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2451__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2451__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2451__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__2451__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2451__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_b) 
                                                  << 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__2451__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2451__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2451__vec_b) 
                                                  << 7U))))));
                vlSelfRef.__Vfunc_aes_mvm__2451__Vfuncout 
                    = vlSelfRef.__Vfunc_aes_mvm__2451__vec_c;
            }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__2451__Vfuncout)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_block_encrypt__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT____Vcellout__gen_sbox_j__BRA__2__KET____DOT__gen_sbox_i__BRA__1__KET____DOT__u_aes_sbox_ij__data_o 
        = (0x63U ^ ([&]() {
                vlSelfRef.__Vfunc_aes_mvm__2483__mat_a
                    [0U] = 0x58U;
                vlSelfRef.__Vfunc_aes_mvm__2483__mat_a
                    [1U] = 0x2dU;
                vlSelfRef.__Vfunc_aes_mvm__2483__mat_a
                    [2U] = 0x9eU;
                vlSelfRef.__Vfunc_aes_mvm__2483__mat_a
                    [3U] = 0x0bU;
                vlSelfRef.__Vfunc_aes_mvm__2483__mat_a
                    [4U] = 0xdcU;
                vlSelfRef.__Vfunc_aes_mvm__2483__mat_a
                    [5U] = 4U;
                vlSelfRef.__Vfunc_aes_mvm__2483__mat_a
                    [6U] = 3U;
                vlSelfRef.__Vfunc_aes_mvm__2483__mat_a
                    [7U] = 0x24U;
                vlSelfRef.__Vfunc_aes_mvm__2483__vec_b 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_block_encrypt__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__2__KET____DOT__gen_sbox_i__BRA__1__KET____DOT__u_aes_sbox_ij__DOT__gen_sbox_unmasked__DOT__gen_sbox_canright__DOT__u_aes_sbox__DOT__data_inverse;
                vlSelfRef.__Vfunc_aes_mvm__2483__vec_c = 0U;
                vlSelfRef.__Vfunc_aes_mvm__2483__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                       | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_b) 
                                   >> 7U) & vlSelfRef.__Vfunc_aes_mvm__2483__mat_a
                                  [0U])));
                vlSelfRef.__Vfunc_aes_mvm__2483__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2483__mat_a
                                   [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_b) 
                                           >> 6U)))));
                vlSelfRef.__Vfunc_aes_mvm__2483__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2483__mat_a
                                   [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_b) 
                                           >> 5U)))));
                vlSelfRef.__Vfunc_aes_mvm__2483__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2483__mat_a
                                   [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_b) 
                                           >> 4U)))));
                vlSelfRef.__Vfunc_aes_mvm__2483__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2483__mat_a
                                   [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_b) 
                                           >> 3U)))));
                vlSelfRef.__Vfunc_aes_mvm__2483__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2483__mat_a
                                   [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_b) 
                                           >> 2U)))));
                vlSelfRef.__Vfunc_aes_mvm__2483__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2483__mat_a
                                   [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_b) 
                                           >> 1U)))));
                vlSelfRef.__Vfunc_aes_mvm__2483__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2483__mat_a
                                   [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2483__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                                ^ (0x03fffffeU & (vlSelfRef.__Vfunc_aes_mvm__2483__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_b) 
                                                     >> 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__2483__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                                ^ (0x07fffffeU & (vlSelfRef.__Vfunc_aes_mvm__2483__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_b) 
                                                     >> 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__2483__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                                ^ (0x0ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__2483__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2483__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                                ^ (0x1ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__2483__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2483__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                                ^ (0x3ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__2483__mat_a
                                                  [4U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2483__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                                ^ (0x7ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__2483__mat_a
                                                  [5U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2483__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                       | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2483__mat_a
                                   [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2483__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                                ^ (0xfffffffeU & (vlSelfRef.__Vfunc_aes_mvm__2483__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2483__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                                ^ (0x07fffffcU & (vlSelfRef.__Vfunc_aes_mvm__2483__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_b) 
                                                     >> 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__2483__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                                ^ (0x0ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2483__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2483__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                                ^ (0x1ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2483__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2483__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                                ^ (0x3ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2483__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2483__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                                ^ (0x7ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2483__mat_a
                                                  [4U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2483__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                       | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2483__mat_a
                                   [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2483__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                                ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2483__mat_a
                                                  [6U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2483__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                                ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2483__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_b) 
                                                     << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2483__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                                ^ (0x0ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2483__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2483__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                                ^ (0x1ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2483__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2483__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                                ^ (0x3ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2483__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2483__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                                ^ (0x7ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2483__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2483__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                       | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2483__mat_a
                                   [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2483__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2483__mat_a
                                                  [5U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2483__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2483__mat_a
                                                  [6U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_b) 
                                                     << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2483__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2483__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_b) 
                                                     << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2483__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                                         ^ (0x1ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2483__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_b) 
                                                  >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2483__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                                         ^ (0x3ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2483__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_b) 
                                                  >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2483__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                                         ^ (0x7ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2483__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2483__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                       | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__2483__mat_a
                                            [3U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2483__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2483__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2483__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2483__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2483__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2483__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2483__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2483__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2483__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                                         ^ (0x3fffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2483__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_b) 
                                                  >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2483__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                                         ^ (0x7fffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2483__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2483__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                       | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__2483__mat_a
                                            [2U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2483__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2483__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2483__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2483__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2483__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2483__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2483__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2483__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2483__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2483__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__2483__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                                         ^ (0x7fffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2483__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2483__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                       | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__2483__mat_a
                                            [1U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2483__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2483__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2483__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2483__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2483__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2483__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2483__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2483__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2483__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2483__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__2483__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2483__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_b) 
                                                  << 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__2483__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                       | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__2483__mat_a
                                            [0U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2483__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2483__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2483__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2483__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2483__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2483__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2483__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2483__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2483__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2483__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__2483__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2483__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_b) 
                                                  << 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__2483__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2483__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2483__vec_b) 
                                                  << 7U))))));
                vlSelfRef.__Vfunc_aes_mvm__2483__Vfuncout 
                    = vlSelfRef.__Vfunc_aes_mvm__2483__vec_c;
            }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__2483__Vfuncout)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_block_encrypt__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT____Vcellout__gen_sbox_j__BRA__2__KET____DOT__gen_sbox_i__BRA__2__KET____DOT__u_aes_sbox_ij__data_o 
        = (0x63U ^ ([&]() {
                vlSelfRef.__Vfunc_aes_mvm__2515__mat_a
                    [0U] = 0x58U;
                vlSelfRef.__Vfunc_aes_mvm__2515__mat_a
                    [1U] = 0x2dU;
                vlSelfRef.__Vfunc_aes_mvm__2515__mat_a
                    [2U] = 0x9eU;
                vlSelfRef.__Vfunc_aes_mvm__2515__mat_a
                    [3U] = 0x0bU;
                vlSelfRef.__Vfunc_aes_mvm__2515__mat_a
                    [4U] = 0xdcU;
                vlSelfRef.__Vfunc_aes_mvm__2515__mat_a
                    [5U] = 4U;
                vlSelfRef.__Vfunc_aes_mvm__2515__mat_a
                    [6U] = 3U;
                vlSelfRef.__Vfunc_aes_mvm__2515__mat_a
                    [7U] = 0x24U;
                vlSelfRef.__Vfunc_aes_mvm__2515__vec_b 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_block_encrypt__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__2__KET____DOT__gen_sbox_i__BRA__2__KET____DOT__u_aes_sbox_ij__DOT__gen_sbox_unmasked__DOT__gen_sbox_canright__DOT__u_aes_sbox__DOT__data_inverse;
                vlSelfRef.__Vfunc_aes_mvm__2515__vec_c = 0U;
                vlSelfRef.__Vfunc_aes_mvm__2515__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                       | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_b) 
                                   >> 7U) & vlSelfRef.__Vfunc_aes_mvm__2515__mat_a
                                  [0U])));
                vlSelfRef.__Vfunc_aes_mvm__2515__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2515__mat_a
                                   [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_b) 
                                           >> 6U)))));
                vlSelfRef.__Vfunc_aes_mvm__2515__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2515__mat_a
                                   [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_b) 
                                           >> 5U)))));
                vlSelfRef.__Vfunc_aes_mvm__2515__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2515__mat_a
                                   [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_b) 
                                           >> 4U)))));
                vlSelfRef.__Vfunc_aes_mvm__2515__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2515__mat_a
                                   [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_b) 
                                           >> 3U)))));
                vlSelfRef.__Vfunc_aes_mvm__2515__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2515__mat_a
                                   [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_b) 
                                           >> 2U)))));
                vlSelfRef.__Vfunc_aes_mvm__2515__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2515__mat_a
                                   [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_b) 
                                           >> 1U)))));
                vlSelfRef.__Vfunc_aes_mvm__2515__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2515__mat_a
                                   [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2515__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                                ^ (0x03fffffeU & (vlSelfRef.__Vfunc_aes_mvm__2515__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_b) 
                                                     >> 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__2515__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                                ^ (0x07fffffeU & (vlSelfRef.__Vfunc_aes_mvm__2515__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_b) 
                                                     >> 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__2515__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                                ^ (0x0ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__2515__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2515__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                                ^ (0x1ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__2515__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2515__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                                ^ (0x3ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__2515__mat_a
                                                  [4U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2515__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                                ^ (0x7ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__2515__mat_a
                                                  [5U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2515__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                       | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2515__mat_a
                                   [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2515__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                                ^ (0xfffffffeU & (vlSelfRef.__Vfunc_aes_mvm__2515__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2515__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                                ^ (0x07fffffcU & (vlSelfRef.__Vfunc_aes_mvm__2515__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_b) 
                                                     >> 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__2515__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                                ^ (0x0ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2515__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2515__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                                ^ (0x1ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2515__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2515__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                                ^ (0x3ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2515__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2515__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                                ^ (0x7ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2515__mat_a
                                                  [4U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2515__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                       | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2515__mat_a
                                   [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2515__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                                ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2515__mat_a
                                                  [6U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2515__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                                ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2515__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_b) 
                                                     << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2515__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                                ^ (0x0ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2515__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2515__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                                ^ (0x1ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2515__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2515__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                                ^ (0x3ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2515__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2515__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                                ^ (0x7ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2515__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2515__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                       | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2515__mat_a
                                   [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2515__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2515__mat_a
                                                  [5U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2515__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2515__mat_a
                                                  [6U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_b) 
                                                     << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2515__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2515__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_b) 
                                                     << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2515__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                                         ^ (0x1ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2515__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_b) 
                                                  >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2515__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                                         ^ (0x3ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2515__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_b) 
                                                  >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2515__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                                         ^ (0x7ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2515__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2515__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                       | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__2515__mat_a
                                            [3U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2515__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2515__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2515__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2515__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2515__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2515__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2515__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2515__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2515__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                                         ^ (0x3fffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2515__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_b) 
                                                  >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2515__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                                         ^ (0x7fffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2515__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2515__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                       | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__2515__mat_a
                                            [2U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2515__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2515__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2515__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2515__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2515__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2515__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2515__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2515__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2515__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2515__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__2515__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                                         ^ (0x7fffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2515__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2515__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                       | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__2515__mat_a
                                            [1U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2515__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2515__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2515__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2515__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2515__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2515__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2515__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2515__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2515__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2515__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__2515__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2515__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_b) 
                                                  << 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__2515__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                       | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__2515__mat_a
                                            [0U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2515__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2515__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2515__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2515__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2515__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2515__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2515__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2515__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2515__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2515__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__2515__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2515__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_b) 
                                                  << 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__2515__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2515__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2515__vec_b) 
                                                  << 7U))))));
                vlSelfRef.__Vfunc_aes_mvm__2515__Vfuncout 
                    = vlSelfRef.__Vfunc_aes_mvm__2515__vec_c;
            }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__2515__Vfuncout)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_block_encrypt__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT____Vcellout__gen_sbox_j__BRA__2__KET____DOT__gen_sbox_i__BRA__3__KET____DOT__u_aes_sbox_ij__data_o 
        = (0x63U ^ ([&]() {
                vlSelfRef.__Vfunc_aes_mvm__2547__mat_a
                    [0U] = 0x58U;
                vlSelfRef.__Vfunc_aes_mvm__2547__mat_a
                    [1U] = 0x2dU;
                vlSelfRef.__Vfunc_aes_mvm__2547__mat_a
                    [2U] = 0x9eU;
                vlSelfRef.__Vfunc_aes_mvm__2547__mat_a
                    [3U] = 0x0bU;
                vlSelfRef.__Vfunc_aes_mvm__2547__mat_a
                    [4U] = 0xdcU;
                vlSelfRef.__Vfunc_aes_mvm__2547__mat_a
                    [5U] = 4U;
                vlSelfRef.__Vfunc_aes_mvm__2547__mat_a
                    [6U] = 3U;
                vlSelfRef.__Vfunc_aes_mvm__2547__mat_a
                    [7U] = 0x24U;
                vlSelfRef.__Vfunc_aes_mvm__2547__vec_b 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_block_encrypt__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__2__KET____DOT__gen_sbox_i__BRA__3__KET____DOT__u_aes_sbox_ij__DOT__gen_sbox_unmasked__DOT__gen_sbox_canright__DOT__u_aes_sbox__DOT__data_inverse;
                vlSelfRef.__Vfunc_aes_mvm__2547__vec_c = 0U;
                vlSelfRef.__Vfunc_aes_mvm__2547__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                       | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_b) 
                                   >> 7U) & vlSelfRef.__Vfunc_aes_mvm__2547__mat_a
                                  [0U])));
                vlSelfRef.__Vfunc_aes_mvm__2547__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2547__mat_a
                                   [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_b) 
                                           >> 6U)))));
                vlSelfRef.__Vfunc_aes_mvm__2547__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2547__mat_a
                                   [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_b) 
                                           >> 5U)))));
                vlSelfRef.__Vfunc_aes_mvm__2547__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2547__mat_a
                                   [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_b) 
                                           >> 4U)))));
                vlSelfRef.__Vfunc_aes_mvm__2547__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2547__mat_a
                                   [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_b) 
                                           >> 3U)))));
                vlSelfRef.__Vfunc_aes_mvm__2547__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2547__mat_a
                                   [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_b) 
                                           >> 2U)))));
                vlSelfRef.__Vfunc_aes_mvm__2547__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2547__mat_a
                                   [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_b) 
                                           >> 1U)))));
                vlSelfRef.__Vfunc_aes_mvm__2547__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2547__mat_a
                                   [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2547__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                                ^ (0x03fffffeU & (vlSelfRef.__Vfunc_aes_mvm__2547__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_b) 
                                                     >> 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__2547__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                                ^ (0x07fffffeU & (vlSelfRef.__Vfunc_aes_mvm__2547__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_b) 
                                                     >> 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__2547__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                                ^ (0x0ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__2547__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2547__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                                ^ (0x1ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__2547__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2547__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                                ^ (0x3ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__2547__mat_a
                                                  [4U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2547__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                                ^ (0x7ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__2547__mat_a
                                                  [5U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2547__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                       | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2547__mat_a
                                   [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2547__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                                ^ (0xfffffffeU & (vlSelfRef.__Vfunc_aes_mvm__2547__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2547__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                                ^ (0x07fffffcU & (vlSelfRef.__Vfunc_aes_mvm__2547__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_b) 
                                                     >> 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__2547__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                                ^ (0x0ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2547__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2547__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                                ^ (0x1ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2547__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2547__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                                ^ (0x3ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2547__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2547__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                                ^ (0x7ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2547__mat_a
                                                  [4U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2547__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                       | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2547__mat_a
                                   [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2547__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                                ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2547__mat_a
                                                  [6U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2547__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                                ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2547__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_b) 
                                                     << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2547__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                                ^ (0x0ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2547__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2547__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                                ^ (0x1ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2547__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2547__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                                ^ (0x3ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2547__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2547__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                                ^ (0x7ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2547__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2547__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                       | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2547__mat_a
                                   [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2547__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2547__mat_a
                                                  [5U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2547__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2547__mat_a
                                                  [6U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_b) 
                                                     << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2547__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2547__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_b) 
                                                     << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2547__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                                         ^ (0x1ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2547__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_b) 
                                                  >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2547__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                                         ^ (0x3ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2547__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_b) 
                                                  >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2547__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                                         ^ (0x7ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2547__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2547__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                       | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__2547__mat_a
                                            [3U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2547__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2547__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2547__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2547__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2547__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2547__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2547__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2547__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2547__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                                         ^ (0x3fffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2547__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_b) 
                                                  >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2547__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                                         ^ (0x7fffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2547__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2547__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                       | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__2547__mat_a
                                            [2U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2547__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2547__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2547__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2547__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2547__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2547__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2547__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2547__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2547__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2547__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__2547__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                                         ^ (0x7fffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2547__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2547__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                       | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__2547__mat_a
                                            [1U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2547__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2547__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2547__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2547__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2547__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2547__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2547__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2547__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2547__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2547__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__2547__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2547__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_b) 
                                                  << 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__2547__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                       | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__2547__mat_a
                                            [0U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2547__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2547__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2547__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2547__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2547__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2547__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2547__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2547__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2547__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2547__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__2547__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2547__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_b) 
                                                  << 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__2547__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2547__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2547__vec_b) 
                                                  << 7U))))));
                vlSelfRef.__Vfunc_aes_mvm__2547__Vfuncout 
                    = vlSelfRef.__Vfunc_aes_mvm__2547__vec_c;
            }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__2547__Vfuncout)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_block_encrypt__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT____Vcellout__gen_sbox_j__BRA__3__KET____DOT__gen_sbox_i__BRA__0__KET____DOT__u_aes_sbox_ij__data_o 
        = (0x63U ^ ([&]() {
                vlSelfRef.__Vfunc_aes_mvm__2579__mat_a
                    [0U] = 0x58U;
                vlSelfRef.__Vfunc_aes_mvm__2579__mat_a
                    [1U] = 0x2dU;
                vlSelfRef.__Vfunc_aes_mvm__2579__mat_a
                    [2U] = 0x9eU;
                vlSelfRef.__Vfunc_aes_mvm__2579__mat_a
                    [3U] = 0x0bU;
                vlSelfRef.__Vfunc_aes_mvm__2579__mat_a
                    [4U] = 0xdcU;
                vlSelfRef.__Vfunc_aes_mvm__2579__mat_a
                    [5U] = 4U;
                vlSelfRef.__Vfunc_aes_mvm__2579__mat_a
                    [6U] = 3U;
                vlSelfRef.__Vfunc_aes_mvm__2579__mat_a
                    [7U] = 0x24U;
                vlSelfRef.__Vfunc_aes_mvm__2579__vec_b 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_block_encrypt__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__3__KET____DOT__gen_sbox_i__BRA__0__KET____DOT__u_aes_sbox_ij__DOT__gen_sbox_unmasked__DOT__gen_sbox_canright__DOT__u_aes_sbox__DOT__data_inverse;
                vlSelfRef.__Vfunc_aes_mvm__2579__vec_c = 0U;
                vlSelfRef.__Vfunc_aes_mvm__2579__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                       | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_b) 
                                   >> 7U) & vlSelfRef.__Vfunc_aes_mvm__2579__mat_a
                                  [0U])));
                vlSelfRef.__Vfunc_aes_mvm__2579__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2579__mat_a
                                   [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_b) 
                                           >> 6U)))));
                vlSelfRef.__Vfunc_aes_mvm__2579__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2579__mat_a
                                   [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_b) 
                                           >> 5U)))));
                vlSelfRef.__Vfunc_aes_mvm__2579__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2579__mat_a
                                   [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_b) 
                                           >> 4U)))));
                vlSelfRef.__Vfunc_aes_mvm__2579__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2579__mat_a
                                   [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_b) 
                                           >> 3U)))));
                vlSelfRef.__Vfunc_aes_mvm__2579__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2579__mat_a
                                   [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_b) 
                                           >> 2U)))));
                vlSelfRef.__Vfunc_aes_mvm__2579__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2579__mat_a
                                   [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_b) 
                                           >> 1U)))));
                vlSelfRef.__Vfunc_aes_mvm__2579__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2579__mat_a
                                   [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2579__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                                ^ (0x03fffffeU & (vlSelfRef.__Vfunc_aes_mvm__2579__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_b) 
                                                     >> 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__2579__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                                ^ (0x07fffffeU & (vlSelfRef.__Vfunc_aes_mvm__2579__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_b) 
                                                     >> 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__2579__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                                ^ (0x0ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__2579__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2579__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                                ^ (0x1ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__2579__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2579__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                                ^ (0x3ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__2579__mat_a
                                                  [4U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2579__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                                ^ (0x7ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__2579__mat_a
                                                  [5U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2579__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                       | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2579__mat_a
                                   [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2579__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                                ^ (0xfffffffeU & (vlSelfRef.__Vfunc_aes_mvm__2579__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2579__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                                ^ (0x07fffffcU & (vlSelfRef.__Vfunc_aes_mvm__2579__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_b) 
                                                     >> 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__2579__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                                ^ (0x0ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2579__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2579__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                                ^ (0x1ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2579__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2579__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                                ^ (0x3ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2579__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2579__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                                ^ (0x7ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2579__mat_a
                                                  [4U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2579__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                       | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2579__mat_a
                                   [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2579__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                                ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2579__mat_a
                                                  [6U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2579__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                                ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2579__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_b) 
                                                     << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2579__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                                ^ (0x0ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2579__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2579__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                                ^ (0x1ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2579__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2579__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                                ^ (0x3ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2579__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2579__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                                ^ (0x7ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2579__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2579__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                       | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2579__mat_a
                                   [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2579__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2579__mat_a
                                                  [5U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2579__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2579__mat_a
                                                  [6U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_b) 
                                                     << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2579__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2579__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_b) 
                                                     << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2579__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                                         ^ (0x1ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2579__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_b) 
                                                  >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2579__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                                         ^ (0x3ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2579__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_b) 
                                                  >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2579__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                                         ^ (0x7ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2579__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2579__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                       | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__2579__mat_a
                                            [3U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2579__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2579__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2579__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2579__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2579__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2579__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2579__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2579__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2579__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                                         ^ (0x3fffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2579__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_b) 
                                                  >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2579__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                                         ^ (0x7fffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2579__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2579__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                       | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__2579__mat_a
                                            [2U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2579__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2579__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2579__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2579__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2579__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2579__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2579__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2579__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2579__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2579__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__2579__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                                         ^ (0x7fffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2579__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2579__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                       | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__2579__mat_a
                                            [1U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2579__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2579__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2579__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2579__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2579__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2579__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2579__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2579__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2579__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2579__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__2579__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2579__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_b) 
                                                  << 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__2579__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                       | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__2579__mat_a
                                            [0U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2579__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2579__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2579__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2579__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2579__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2579__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2579__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2579__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2579__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2579__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__2579__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2579__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_b) 
                                                  << 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__2579__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2579__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2579__vec_b) 
                                                  << 7U))))));
                vlSelfRef.__Vfunc_aes_mvm__2579__Vfuncout 
                    = vlSelfRef.__Vfunc_aes_mvm__2579__vec_c;
            }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__2579__Vfuncout)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_block_encrypt__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT____Vcellout__gen_sbox_j__BRA__3__KET____DOT__gen_sbox_i__BRA__1__KET____DOT__u_aes_sbox_ij__data_o 
        = (0x63U ^ ([&]() {
                vlSelfRef.__Vfunc_aes_mvm__2611__mat_a
                    [0U] = 0x58U;
                vlSelfRef.__Vfunc_aes_mvm__2611__mat_a
                    [1U] = 0x2dU;
                vlSelfRef.__Vfunc_aes_mvm__2611__mat_a
                    [2U] = 0x9eU;
                vlSelfRef.__Vfunc_aes_mvm__2611__mat_a
                    [3U] = 0x0bU;
                vlSelfRef.__Vfunc_aes_mvm__2611__mat_a
                    [4U] = 0xdcU;
                vlSelfRef.__Vfunc_aes_mvm__2611__mat_a
                    [5U] = 4U;
                vlSelfRef.__Vfunc_aes_mvm__2611__mat_a
                    [6U] = 3U;
                vlSelfRef.__Vfunc_aes_mvm__2611__mat_a
                    [7U] = 0x24U;
                vlSelfRef.__Vfunc_aes_mvm__2611__vec_b 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_block_encrypt__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__3__KET____DOT__gen_sbox_i__BRA__1__KET____DOT__u_aes_sbox_ij__DOT__gen_sbox_unmasked__DOT__gen_sbox_canright__DOT__u_aes_sbox__DOT__data_inverse;
                vlSelfRef.__Vfunc_aes_mvm__2611__vec_c = 0U;
                vlSelfRef.__Vfunc_aes_mvm__2611__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                       | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_b) 
                                   >> 7U) & vlSelfRef.__Vfunc_aes_mvm__2611__mat_a
                                  [0U])));
                vlSelfRef.__Vfunc_aes_mvm__2611__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2611__mat_a
                                   [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_b) 
                                           >> 6U)))));
                vlSelfRef.__Vfunc_aes_mvm__2611__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2611__mat_a
                                   [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_b) 
                                           >> 5U)))));
                vlSelfRef.__Vfunc_aes_mvm__2611__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2611__mat_a
                                   [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_b) 
                                           >> 4U)))));
                vlSelfRef.__Vfunc_aes_mvm__2611__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2611__mat_a
                                   [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_b) 
                                           >> 3U)))));
                vlSelfRef.__Vfunc_aes_mvm__2611__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2611__mat_a
                                   [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_b) 
                                           >> 2U)))));
                vlSelfRef.__Vfunc_aes_mvm__2611__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2611__mat_a
                                   [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_b) 
                                           >> 1U)))));
                vlSelfRef.__Vfunc_aes_mvm__2611__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2611__mat_a
                                   [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2611__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                                ^ (0x03fffffeU & (vlSelfRef.__Vfunc_aes_mvm__2611__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_b) 
                                                     >> 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__2611__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                                ^ (0x07fffffeU & (vlSelfRef.__Vfunc_aes_mvm__2611__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_b) 
                                                     >> 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__2611__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                                ^ (0x0ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__2611__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2611__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                                ^ (0x1ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__2611__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2611__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                                ^ (0x3ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__2611__mat_a
                                                  [4U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2611__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                                ^ (0x7ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__2611__mat_a
                                                  [5U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2611__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                       | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2611__mat_a
                                   [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2611__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                                ^ (0xfffffffeU & (vlSelfRef.__Vfunc_aes_mvm__2611__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2611__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                                ^ (0x07fffffcU & (vlSelfRef.__Vfunc_aes_mvm__2611__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_b) 
                                                     >> 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__2611__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                                ^ (0x0ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2611__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2611__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                                ^ (0x1ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2611__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2611__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                                ^ (0x3ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2611__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2611__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                                ^ (0x7ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2611__mat_a
                                                  [4U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2611__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                       | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2611__mat_a
                                   [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2611__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                                ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2611__mat_a
                                                  [6U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2611__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                                ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2611__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_b) 
                                                     << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2611__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                                ^ (0x0ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2611__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2611__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                                ^ (0x1ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2611__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2611__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                                ^ (0x3ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2611__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2611__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                                ^ (0x7ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2611__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2611__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                       | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2611__mat_a
                                   [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2611__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2611__mat_a
                                                  [5U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2611__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2611__mat_a
                                                  [6U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_b) 
                                                     << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2611__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2611__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_b) 
                                                     << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2611__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                                         ^ (0x1ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2611__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_b) 
                                                  >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2611__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                                         ^ (0x3ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2611__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_b) 
                                                  >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2611__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                                         ^ (0x7ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2611__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2611__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                       | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__2611__mat_a
                                            [3U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2611__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2611__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2611__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2611__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2611__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2611__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2611__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2611__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2611__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                                         ^ (0x3fffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2611__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_b) 
                                                  >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2611__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                                         ^ (0x7fffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2611__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2611__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                       | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__2611__mat_a
                                            [2U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2611__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2611__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2611__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2611__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2611__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2611__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2611__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2611__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2611__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2611__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__2611__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                                         ^ (0x7fffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2611__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2611__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                       | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__2611__mat_a
                                            [1U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2611__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2611__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2611__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2611__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2611__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2611__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2611__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2611__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2611__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2611__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__2611__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2611__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_b) 
                                                  << 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__2611__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                       | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__2611__mat_a
                                            [0U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2611__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2611__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2611__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2611__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2611__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2611__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2611__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2611__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2611__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2611__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__2611__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2611__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_b) 
                                                  << 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__2611__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2611__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2611__vec_b) 
                                                  << 7U))))));
                vlSelfRef.__Vfunc_aes_mvm__2611__Vfuncout 
                    = vlSelfRef.__Vfunc_aes_mvm__2611__vec_c;
            }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__2611__Vfuncout)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_block_encrypt__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT____Vcellout__gen_sbox_j__BRA__3__KET____DOT__gen_sbox_i__BRA__2__KET____DOT__u_aes_sbox_ij__data_o 
        = (0x63U ^ ([&]() {
                vlSelfRef.__Vfunc_aes_mvm__2643__mat_a
                    [0U] = 0x58U;
                vlSelfRef.__Vfunc_aes_mvm__2643__mat_a
                    [1U] = 0x2dU;
                vlSelfRef.__Vfunc_aes_mvm__2643__mat_a
                    [2U] = 0x9eU;
                vlSelfRef.__Vfunc_aes_mvm__2643__mat_a
                    [3U] = 0x0bU;
                vlSelfRef.__Vfunc_aes_mvm__2643__mat_a
                    [4U] = 0xdcU;
                vlSelfRef.__Vfunc_aes_mvm__2643__mat_a
                    [5U] = 4U;
                vlSelfRef.__Vfunc_aes_mvm__2643__mat_a
                    [6U] = 3U;
                vlSelfRef.__Vfunc_aes_mvm__2643__mat_a
                    [7U] = 0x24U;
                vlSelfRef.__Vfunc_aes_mvm__2643__vec_b 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_block_encrypt__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__3__KET____DOT__gen_sbox_i__BRA__2__KET____DOT__u_aes_sbox_ij__DOT__gen_sbox_unmasked__DOT__gen_sbox_canright__DOT__u_aes_sbox__DOT__data_inverse;
                vlSelfRef.__Vfunc_aes_mvm__2643__vec_c = 0U;
                vlSelfRef.__Vfunc_aes_mvm__2643__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                       | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_b) 
                                   >> 7U) & vlSelfRef.__Vfunc_aes_mvm__2643__mat_a
                                  [0U])));
                vlSelfRef.__Vfunc_aes_mvm__2643__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2643__mat_a
                                   [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_b) 
                                           >> 6U)))));
                vlSelfRef.__Vfunc_aes_mvm__2643__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2643__mat_a
                                   [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_b) 
                                           >> 5U)))));
                vlSelfRef.__Vfunc_aes_mvm__2643__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2643__mat_a
                                   [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_b) 
                                           >> 4U)))));
                vlSelfRef.__Vfunc_aes_mvm__2643__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2643__mat_a
                                   [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_b) 
                                           >> 3U)))));
                vlSelfRef.__Vfunc_aes_mvm__2643__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2643__mat_a
                                   [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_b) 
                                           >> 2U)))));
                vlSelfRef.__Vfunc_aes_mvm__2643__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2643__mat_a
                                   [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_b) 
                                           >> 1U)))));
                vlSelfRef.__Vfunc_aes_mvm__2643__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2643__mat_a
                                   [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2643__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                                ^ (0x03fffffeU & (vlSelfRef.__Vfunc_aes_mvm__2643__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_b) 
                                                     >> 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__2643__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                                ^ (0x07fffffeU & (vlSelfRef.__Vfunc_aes_mvm__2643__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_b) 
                                                     >> 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__2643__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                                ^ (0x0ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__2643__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2643__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                                ^ (0x1ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__2643__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2643__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                                ^ (0x3ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__2643__mat_a
                                                  [4U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2643__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                                ^ (0x7ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__2643__mat_a
                                                  [5U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2643__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                       | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2643__mat_a
                                   [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2643__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                                ^ (0xfffffffeU & (vlSelfRef.__Vfunc_aes_mvm__2643__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2643__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                                ^ (0x07fffffcU & (vlSelfRef.__Vfunc_aes_mvm__2643__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_b) 
                                                     >> 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__2643__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                                ^ (0x0ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2643__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2643__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                                ^ (0x1ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2643__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2643__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                                ^ (0x3ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2643__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2643__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                                ^ (0x7ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2643__mat_a
                                                  [4U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2643__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                       | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2643__mat_a
                                   [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2643__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                                ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2643__mat_a
                                                  [6U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2643__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                                ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2643__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_b) 
                                                     << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2643__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                                ^ (0x0ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2643__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2643__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                                ^ (0x1ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2643__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2643__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                                ^ (0x3ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2643__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2643__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                                ^ (0x7ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2643__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2643__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                       | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2643__mat_a
                                   [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2643__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2643__mat_a
                                                  [5U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2643__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2643__mat_a
                                                  [6U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_b) 
                                                     << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2643__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2643__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_b) 
                                                     << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2643__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                                         ^ (0x1ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2643__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_b) 
                                                  >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2643__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                                         ^ (0x3ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2643__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_b) 
                                                  >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2643__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                                         ^ (0x7ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2643__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2643__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                       | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__2643__mat_a
                                            [3U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2643__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2643__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2643__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2643__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2643__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2643__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2643__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2643__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2643__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                                         ^ (0x3fffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2643__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_b) 
                                                  >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2643__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                                         ^ (0x7fffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2643__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2643__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                       | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__2643__mat_a
                                            [2U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2643__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2643__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2643__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2643__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2643__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2643__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2643__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2643__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2643__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2643__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__2643__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                                         ^ (0x7fffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2643__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2643__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                       | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__2643__mat_a
                                            [1U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2643__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2643__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2643__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2643__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2643__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2643__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2643__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2643__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2643__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2643__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__2643__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2643__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_b) 
                                                  << 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__2643__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                       | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__2643__mat_a
                                            [0U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2643__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2643__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2643__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2643__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2643__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2643__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2643__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2643__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2643__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2643__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__2643__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2643__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_b) 
                                                  << 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__2643__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2643__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2643__vec_b) 
                                                  << 7U))))));
                vlSelfRef.__Vfunc_aes_mvm__2643__Vfuncout 
                    = vlSelfRef.__Vfunc_aes_mvm__2643__vec_c;
            }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__2643__Vfuncout)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_block_encrypt__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT____Vcellout__gen_sbox_j__BRA__3__KET____DOT__gen_sbox_i__BRA__3__KET____DOT__u_aes_sbox_ij__data_o 
        = (0x63U ^ ([&]() {
                vlSelfRef.__Vfunc_aes_mvm__2675__mat_a
                    [0U] = 0x58U;
                vlSelfRef.__Vfunc_aes_mvm__2675__mat_a
                    [1U] = 0x2dU;
                vlSelfRef.__Vfunc_aes_mvm__2675__mat_a
                    [2U] = 0x9eU;
                vlSelfRef.__Vfunc_aes_mvm__2675__mat_a
                    [3U] = 0x0bU;
                vlSelfRef.__Vfunc_aes_mvm__2675__mat_a
                    [4U] = 0xdcU;
                vlSelfRef.__Vfunc_aes_mvm__2675__mat_a
                    [5U] = 4U;
                vlSelfRef.__Vfunc_aes_mvm__2675__mat_a
                    [6U] = 3U;
                vlSelfRef.__Vfunc_aes_mvm__2675__mat_a
                    [7U] = 0x24U;
                vlSelfRef.__Vfunc_aes_mvm__2675__vec_b 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_block_encrypt__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__gen_sbox_j__BRA__3__KET____DOT__gen_sbox_i__BRA__3__KET____DOT__u_aes_sbox_ij__DOT__gen_sbox_unmasked__DOT__gen_sbox_canright__DOT__u_aes_sbox__DOT__data_inverse;
                vlSelfRef.__Vfunc_aes_mvm__2675__vec_c = 0U;
                vlSelfRef.__Vfunc_aes_mvm__2675__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                       | (IData)((((IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_b) 
                                   >> 7U) & vlSelfRef.__Vfunc_aes_mvm__2675__mat_a
                                  [0U])));
                vlSelfRef.__Vfunc_aes_mvm__2675__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2675__mat_a
                                   [1U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_b) 
                                           >> 6U)))));
                vlSelfRef.__Vfunc_aes_mvm__2675__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2675__mat_a
                                   [2U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_b) 
                                           >> 5U)))));
                vlSelfRef.__Vfunc_aes_mvm__2675__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2675__mat_a
                                   [3U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_b) 
                                           >> 4U)))));
                vlSelfRef.__Vfunc_aes_mvm__2675__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2675__mat_a
                                   [4U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_b) 
                                           >> 3U)))));
                vlSelfRef.__Vfunc_aes_mvm__2675__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2675__mat_a
                                   [5U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_b) 
                                           >> 2U)))));
                vlSelfRef.__Vfunc_aes_mvm__2675__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2675__mat_a
                                   [6U] & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_b) 
                                           >> 1U)))));
                vlSelfRef.__Vfunc_aes_mvm__2675__vec_c 
                    = ((0xfeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                       | (1U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2675__mat_a
                                   [7U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2675__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                                ^ (0x03fffffeU & (vlSelfRef.__Vfunc_aes_mvm__2675__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_b) 
                                                     >> 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__2675__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                                ^ (0x07fffffeU & (vlSelfRef.__Vfunc_aes_mvm__2675__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_b) 
                                                     >> 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__2675__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                                ^ (0x0ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__2675__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2675__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                                ^ (0x1ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__2675__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2675__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                                ^ (0x3ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__2675__mat_a
                                                  [4U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2675__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                                ^ (0x7ffffffeU & (vlSelfRef.__Vfunc_aes_mvm__2675__mat_a
                                                  [5U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2675__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                       | (2U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2675__mat_a
                                   [6U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2675__vec_c 
                    = ((0xfdU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                       | (2U & ((0xfffffffeU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                                ^ (0xfffffffeU & (vlSelfRef.__Vfunc_aes_mvm__2675__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2675__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                                ^ (0x07fffffcU & (vlSelfRef.__Vfunc_aes_mvm__2675__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_b) 
                                                     >> 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__2675__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                                ^ (0x0ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2675__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2675__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                                ^ (0x1ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2675__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2675__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                                ^ (0x3ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2675__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2675__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                                ^ (0x7ffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2675__mat_a
                                                  [4U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2675__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                       | (4U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2675__mat_a
                                   [5U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2675__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                                ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2675__mat_a
                                                  [6U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2675__vec_c 
                    = ((0xfbU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                       | (4U & ((0xfffffffcU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                                ^ (0xfffffffcU & (vlSelfRef.__Vfunc_aes_mvm__2675__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_b) 
                                                     << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2675__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                                ^ (0x0ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2675__mat_a
                                                  [0U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_b) 
                                                     >> 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2675__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                                ^ (0x1ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2675__mat_a
                                                  [1U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_b) 
                                                     >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2675__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                                ^ (0x3ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2675__mat_a
                                                  [2U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_b) 
                                                     >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2675__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                                ^ (0x7ffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2675__mat_a
                                                  [3U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_b) 
                                                     >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2675__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                       | (8U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c) 
                                ^ (vlSelfRef.__Vfunc_aes_mvm__2675__mat_a
                                   [4U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2675__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2675__mat_a
                                                  [5U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_b) 
                                                     << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2675__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2675__mat_a
                                                  [6U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_b) 
                                                     << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2675__vec_c 
                    = ((0xf7U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                       | (8U & ((0xfffffff8U & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                                ^ (0xfffffff8U & (vlSelfRef.__Vfunc_aes_mvm__2675__mat_a
                                                  [7U] 
                                                  & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_b) 
                                                     << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2675__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                                         ^ (0x1ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2675__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_b) 
                                                  >> 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2675__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                                         ^ (0x3ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2675__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_b) 
                                                  >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2675__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                                         ^ (0x7ffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2675__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2675__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                       | (0x00000010U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__2675__mat_a
                                            [3U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2675__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2675__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2675__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2675__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2675__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2675__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2675__vec_c 
                    = ((0xefU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                       | (0x00000010U & ((0xfffffff0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                                         ^ (0xfffffff0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2675__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2675__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                                         ^ (0x3fffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2675__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_b) 
                                                  >> 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2675__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                                         ^ (0x7fffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2675__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2675__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                       | (0x00000020U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__2675__mat_a
                                            [2U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2675__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2675__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2675__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2675__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2675__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2675__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2675__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2675__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2675__vec_c 
                    = ((0xdfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                       | (0x00000020U & ((0xffffffe0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                                         ^ (0xffffffe0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2675__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__2675__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                                         ^ (0x7fffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2675__mat_a
                                               [0U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_b) 
                                                  >> 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2675__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                       | (0x00000040U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__2675__mat_a
                                            [1U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2675__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2675__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2675__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2675__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2675__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2675__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2675__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2675__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2675__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2675__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__2675__vec_c 
                    = ((0xbfU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                       | (0x00000040U & ((0xffffffc0U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                                         ^ (0xffffffc0U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2675__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_b) 
                                                  << 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__2675__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                       | (0x00000080U & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c) 
                                         ^ (vlSelfRef.__Vfunc_aes_mvm__2675__mat_a
                                            [0U] & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_b)))));
                vlSelfRef.__Vfunc_aes_mvm__2675__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2675__mat_a
                                               [1U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_b) 
                                                  << 1U))))));
                vlSelfRef.__Vfunc_aes_mvm__2675__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2675__mat_a
                                               [2U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_b) 
                                                  << 2U))))));
                vlSelfRef.__Vfunc_aes_mvm__2675__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2675__mat_a
                                               [3U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_b) 
                                                  << 3U))))));
                vlSelfRef.__Vfunc_aes_mvm__2675__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2675__mat_a
                                               [4U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_b) 
                                                  << 4U))))));
                vlSelfRef.__Vfunc_aes_mvm__2675__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2675__mat_a
                                               [5U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_b) 
                                                  << 5U))))));
                vlSelfRef.__Vfunc_aes_mvm__2675__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2675__mat_a
                                               [6U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_b) 
                                                  << 6U))))));
                vlSelfRef.__Vfunc_aes_mvm__2675__vec_c 
                    = ((0x7fU & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                       | (0x00000080U & ((0xffffff80U 
                                          & (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_c)) 
                                         ^ (0xffffff80U 
                                            & (vlSelfRef.__Vfunc_aes_mvm__2675__mat_a
                                               [7U] 
                                               & ((IData)(vlSelfRef.__Vfunc_aes_mvm__2675__vec_b) 
                                                  << 7U))))));
                vlSelfRef.__Vfunc_aes_mvm__2675__Vfuncout 
                    = vlSelfRef.__Vfunc_aes_mvm__2675__vec_c;
            }(), (IData)(vlSelfRef.__Vfunc_aes_mvm__2675__Vfuncout)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__usbdev_avsetupfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__usbdev_avsetupfifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr) 
           & (3U == (3U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__usbdev_avsetupfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__usbdev_avoutfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__usbdev_avoutfifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr) 
           & (7U == (7U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__usbdev_avoutfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__sck_sram_rerror[0U] 
        = (3U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__sck_sram_i));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__sck_sram_rerror[1U] 
        = (3U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__sck_sram_i));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__sck_sram_rdata[0U] 
        = (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__sck_sram_i 
                   >> 2U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__sck_sram_rdata[1U] 
        = (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__sck_sram_i 
                   >> 2U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__u_arbiter__DOT__rsp_rvalid_o 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__u_arbiter__DOT__u_req_fifo__DOT__gen_normal_fifo__DOT__fifo_empty)
             ? 0U : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__u_arbiter__DOT__u_req_fifo__DOT__gen_normal_fifo__DOT__storage_rdata)) 
           & (- (IData)((1U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__sck_sram_i 
                                       >> 0x00000022U))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__u_arbiter__DOT__u_req_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr 
        = ((((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__u_arbiter__DOT__u_req_fifo__DOT__gen_normal_fifo__DOT__fifo_empty)) 
             & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__u_arbiter__DOT__u_req_fifo__DOT__gen_normal_fifo__DOT__under_rst))) 
            & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__sck_sram_i 
               >> 0x00000022U)) & (0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__u_arbiter__DOT__u_req_fifo__DOT__gen_normal_fifo__DOT__storage_rdata)));
    if ((1U & (~ VL_ONEHOT_I((((4U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_block_encrypt__DOT__u_aes_cipher_core__DOT__u_aes_key_dec_sel_buf_chk__DOT__gen_sec_buf__DOT__u_prim_buf_sel_i__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i)) 
                               << 1U) | (3U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_block_encrypt__DOT__u_aes_cipher_core__DOT__u_aes_key_dec_sel_buf_chk__DOT__gen_sec_buf__DOT__u_prim_buf_sel_i__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))))))) {
        if ((0U != (((4U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_block_encrypt__DOT__u_aes_cipher_core__DOT__u_aes_key_dec_sel_buf_chk__DOT__gen_sec_buf__DOT__u_prim_buf_sel_i__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i)) 
                     << 1U) | (3U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_block_encrypt__DOT__u_aes_cipher_core__DOT__u_aes_key_dec_sel_buf_chk__DOT__gen_sec_buf__DOT__u_prim_buf_sel_i__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: aes_sel_buf_chk.sv:65: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_csrng.u_csrng_core.u_csrng_block_encrypt.u_aes_cipher_core.u_aes_key_dec_sel_buf_chk.gen_mux2_sel_chk.mux2_sel_chk: unique case, but multiple matches found for '3'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),3,
                             (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_block_encrypt__DOT__u_aes_cipher_core__DOT__u_aes_key_dec_sel_buf_chk__DOT__gen_sec_buf__DOT__u_prim_buf_sel_i__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/aes_sel_buf_chk.sv", 65, "");
            }
        }
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_block_encrypt__DOT__u_aes_cipher_core__DOT__u_aes_key_expand__DOT__u_aes_key_expand_en_buf_chk__DOT__gen_sec_buf__DOT__u_prim_buf_sel_i__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_block_encrypt__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_cipher_control_fsm_i__DOT__key_expand_en_no) 
            << 2U) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_block_encrypt__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__key_expand_en_o) 
                       << 1U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_block_encrypt__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__key_expand_en_o)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_kdi__DOT__u_req_arb__DOT__gen_normal_case__DOT__gen_tree__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__gen_nodes__DOT__sel 
        = (1U & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__u_otp_key_req_sync__DOT__u_prim_sync_reqack__DOT__dst_req_o)) 
                 | ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_kdi__DOT__u_req_arb__DOT__gen_normal_case__DOT__prio_tree__BRA__9__KET__)) 
                    & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_kdi__DOT__u_req_arb__DOT__gen_normal_case__DOT__prio_tree__BRA__10__KET__))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_kdi__DOT__u_req_arb__DOT__gen_normal_case__DOT__prio_tree__BRA__4__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_kdi__DOT__u_req_arb__DOT__gen_normal_case__DOT__prio_tree__BRA__10__KET__) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_kdi__DOT__u_req_arb__DOT__gen_normal_case__DOT__prio_tree__BRA__9__KET__));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_adapter_eflash__DOT__error_blanking_data 
        = (([&]() {
                vlSelfRef.__Vfunc_mubi4_test_true_strict__846__val 
                    = (0x0000000fU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_adapter_eflash__DOT__u_reqfifo__DOT__rdata_o 
                                      >> 0x0000000aU));
                vlSelfRef.__Vfunc_mubi4_test_true_strict__846__Vfuncout 
                    = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__846__val));
            }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__846__Vfuncout))
            ? 0U : 0xffffffffU);
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_prim_packer_fifo_esbit__DOT__load_data 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_prim_packer_fifo_esbit__DOT__wvalid_i) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_prim_packer_fifo_esbit__DOT__wready_o));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_prim_packer_fifo_postht__DOT__load_data 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_prim_packer_fifo_postht__DOT__wvalid_i) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_prim_packer_fifo_postht__DOT__wready_o));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__core_hw2reg[1U] 
        = ((0xfffffff3U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__core_hw2reg[1U]) 
           | (0x0000000cU & ((- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__postht_entropy_drop_alert))) 
                             << 2U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__sfifo_esrng_err_sum 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT____VdfgRegularize_h11713af8_0_11) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT____VdfgRegularize_h11713af8_0_0));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_sys_sram_arbiter__DOT__rsp_error_o[0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT____Vcellout__u_sys_sram_arbiter__rsp_error_o
        [0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_sys_sram_arbiter__DOT__rsp_error_o[1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT____Vcellout__u_sys_sram_arbiter__rsp_error_o
        [1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_sys_sram_arbiter__DOT__rsp_error_o[2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT____Vcellout__u_sys_sram_arbiter__rsp_error_o
        [2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_sys_sram_arbiter__DOT__rsp_error_o[3U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT____Vcellout__u_sys_sram_arbiter__rsp_error_o
        [3U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_sys_sram_arbiter__DOT__rsp_error_o[4U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT____Vcellout__u_sys_sram_arbiter__rsp_error_o
        [4U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__sys_sram_rerror[0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT____Vcellout__u_sys_sram_arbiter__rsp_error_o
        [0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__sys_sram_rerror[1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT____Vcellout__u_sys_sram_arbiter__rsp_error_o
        [1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__sys_sram_rerror[2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT____Vcellout__u_sys_sram_arbiter__rsp_error_o
        [2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__sys_sram_rerror[3U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT____Vcellout__u_sys_sram_arbiter__rsp_error_o
        [3U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__sys_sram_rerror[4U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT____Vcellout__u_sys_sram_arbiter__rsp_error_o
        [4U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__token_idx0 
        = ((VL_GTS_III(32, 0x00000015U, (0x0000001fU 
                                         & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_lc_ctrl_state_decode__DOT__dec_lc_state)) 
            & VL_GTS_III(32, 0x00000015U, (0x0000001fU 
                                           & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__transition_target_q)))
            ? ((0x052aU >= (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT____VdfgRegularize_h20c6869d_0_0))
                ? (7U & (((0U == (0x0000001fU & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT____VdfgRegularize_h20c6869d_0_0)))
                           ? 0U : (Vsim__ConstPool__CONST_hdf86e638_0[
                                   (((IData)(2U) + (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT____VdfgRegularize_h20c6869d_0_0)) 
                                    >> 5U)] << ((IData)(0x00000020U) 
                                                - (0x0000001fU 
                                                   & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT____VdfgRegularize_h20c6869d_0_0))))) 
                         | (Vsim__ConstPool__CONST_hdf86e638_0[
                            ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT____VdfgRegularize_h20c6869d_0_0) 
                             >> 5U)] >> (0x0000001fU 
                                         & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT____VdfgRegularize_h20c6869d_0_0)))))
                : 0U) : 5U);
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__token_idx1 
        = ((VL_GTS_III(32, 0x00000015U, (0x0000001fU 
                                         & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_lc_ctrl_state_decode__DOT__dec_lc_state 
                                            >> 5U))) 
            & VL_GTS_III(32, 0x00000015U, (0x0000001fU 
                                           & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__transition_target_q 
                                              >> 5U))))
            ? ((0x052aU >= (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT____VdfgRegularize_h20c6869d_0_1))
                ? (7U & (((0U == (0x0000001fU & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT____VdfgRegularize_h20c6869d_0_1)))
                           ? 0U : (Vsim__ConstPool__CONST_hdf86e638_0[
                                   (((IData)(2U) + (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT____VdfgRegularize_h20c6869d_0_1)) 
                                    >> 5U)] << ((IData)(0x00000020U) 
                                                - (0x0000001fU 
                                                   & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT____VdfgRegularize_h20c6869d_0_1))))) 
                         | (Vsim__ConstPool__CONST_hdf86e638_0[
                            ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT____VdfgRegularize_h20c6869d_0_1) 
                             >> 5U)] >> (0x0000001fU 
                                         & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT____VdfgRegularize_h20c6869d_0_1)))))
                : 0U) : 5U);
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lci__DOT__lc_data_i[0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__next_lc_cnt[0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lci__DOT__lc_data_i[1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__next_lc_cnt[1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lci__DOT__lc_data_i[2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__next_lc_cnt[2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lci__DOT__lc_data_i[3U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__next_lc_cnt[3U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lci__DOT__lc_data_i[4U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__next_lc_cnt[4U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lci__DOT__lc_data_i[5U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__next_lc_cnt[5U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lci__DOT__lc_data_i[6U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__next_lc_cnt[6U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lci__DOT__lc_data_i[7U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__next_lc_cnt[7U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lci__DOT__lc_data_i[8U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__next_lc_cnt[8U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lci__DOT__lc_data_i[9U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__next_lc_cnt[9U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lci__DOT__lc_data_i[0x0000000aU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__next_lc_cnt[0x0000000aU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lci__DOT__lc_data_i[0x0000000bU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__next_lc_cnt[0x0000000bU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lci__DOT__lc_data_i[0x0000000cU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__next_lc_state[0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lci__DOT__lc_data_i[0x0000000dU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__next_lc_state[1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lci__DOT__lc_data_i[0x0000000eU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__next_lc_state[2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lci__DOT__lc_data_i[0x0000000fU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__next_lc_state[3U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lci__DOT__lc_data_i[0x00000010U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__next_lc_state[4U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lci__DOT__lc_data_i[0x00000011U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__next_lc_state[5U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lci__DOT__lc_data_i[0x00000012U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__next_lc_state[6U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lci__DOT__lc_data_i[0x00000013U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__next_lc_state[7U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lci__DOT__lc_data_i[0x00000014U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__next_lc_state[8U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lci__DOT__lc_data_i[0x00000015U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__next_lc_state[9U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__usbdev_impl__DOT__u_usb_fs_nb_pe__DOT__u_usb_fs_rx__DOT__in_packet_d 
        = ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__usbdev_impl__DOT__u_usb_fs_nb_pe__DOT__u_usb_fs_rx__DOT__see_eop)) 
           & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__usbdev_impl__DOT__u_usb_fs_nb_pe__DOT__u_usb_fs_nb_in_pe__DOT__rx_pkt_start_i) 
              | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__usbdev_impl__DOT__u_usb_fs_nb_pe__DOT__u_usb_fs_rx__DOT__in_packet_q)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__usbdev_impl__DOT__u_usb_fs_nb_pe__DOT__u_usb_fs_rx__DOT__packet_valid_d 
        = ((1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__usbdev_impl__DOT__u_usb_fs_nb_pe__DOT__u_usb_fs_rx__DOT__bit_phase_q))
            ? ((0U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__usb_rcvr_ok_counter_q)) 
               & (((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__usbdev_impl__DOT__u_usb_fs_nb_pe__DOT__u_usb_fs_rx__DOT__packet_valid_q)) 
                   & (0x0665U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__usbdev_impl__DOT__u_usb_fs_nb_pe__DOT__u_usb_fs_rx__DOT__line_history_q))) 
                  | ((~ ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__usbdev_impl__DOT__u_usb_fs_nb_pe__DOT__u_usb_fs_rx__DOT__packet_valid_q) 
                         & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__usbdev_impl__DOT__u_usb_fs_nb_pe__DOT__u_usb_fs_rx__DOT__see_eop))) 
                     & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__usbdev_impl__DOT__u_usb_fs_nb_pe__DOT__u_usb_fs_rx__DOT__packet_valid_q))))
            : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__usbdev_impl__DOT__u_usb_fs_nb_pe__DOT__u_usb_fs_rx__DOT__packet_valid_q));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_upload__DOT__sys_sram_rdata[0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT__a_rdata_o;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_upload__DOT__sys_sram_rdata[1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT__a_rdata_o;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT____Vcellout__u_sys_sram_arbiter__rsp_rdata_o[0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT__a_rdata_o;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT____Vcellout__u_sys_sram_arbiter__rsp_rdata_o[1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT__a_rdata_o;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT____Vcellout__u_sys_sram_arbiter__rsp_rdata_o[2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT__a_rdata_o;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT____Vcellout__u_sys_sram_arbiter__rsp_rdata_o[3U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT__a_rdata_o;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT____Vcellout__u_sys_sram_arbiter__rsp_rdata_o[4U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT__a_rdata_o;
    vlSelfRef.__VdfgRegularize_he50b618e_0_6 = (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT__a_rdata_o)) 
                                                 << 2U) 
                                                | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT__a_rerror_o)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_tlul2sram_egress__DOT__tlul_adapter_sram__DOT__u_rspfifo__DOT__wdata_i 
        = (((QData)((IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT__a_rdata_o 
                             & ((((0x0000ff00U & ((- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_tlul2sram_egress__DOT__tlul_adapter_sram__DOT__u_sramreqfifo__DOT__rdata_o) 
                                                                 >> 4U)))) 
                                                  << 8U)) 
                                  | (0x000000ffU & 
                                     (- (IData)((1U 
                                                 & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_tlul2sram_egress__DOT__tlul_adapter_sram__DOT__u_sramreqfifo__DOT__rdata_o) 
                                                    >> 3U)))))) 
                                 << 0x00000010U) | 
                                ((0x0000ff00U & ((- (IData)(
                                                            (1U 
                                                             & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_tlul2sram_egress__DOT__tlul_adapter_sram__DOT__u_sramreqfifo__DOT__rdata_o) 
                                                                >> 2U)))) 
                                                 << 8U)) 
                                 | (0x000000ffU & (- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_tlul2sram_egress__DOT__tlul_adapter_sram__DOT__u_sramreqfifo__DOT__rdata_o) 
                                                                 >> 1U)))))))))) 
            << 8U) | (QData)((IData)((1U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT__a_rerror_o) 
                                            >> 1U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_tlul2sram_ingress__DOT__tlul_adapter_sram__DOT__u_rspfifo__DOT__wdata_i 
        = (((QData)((IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT__a_rdata_o 
                             & ((((0x0000ff00U & ((- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_tlul2sram_ingress__DOT__tlul_adapter_sram__DOT__u_sramreqfifo__DOT__rdata_o) 
                                                                 >> 4U)))) 
                                                  << 8U)) 
                                  | (0x000000ffU & 
                                     (- (IData)((1U 
                                                 & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_tlul2sram_ingress__DOT__tlul_adapter_sram__DOT__u_sramreqfifo__DOT__rdata_o) 
                                                    >> 3U)))))) 
                                 << 0x00000010U) | 
                                ((0x0000ff00U & ((- (IData)(
                                                            (1U 
                                                             & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_tlul2sram_ingress__DOT__tlul_adapter_sram__DOT__u_sramreqfifo__DOT__rdata_o) 
                                                                >> 2U)))) 
                                                 << 8U)) 
                                 | (0x000000ffU & (- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_tlul2sram_ingress__DOT__tlul_adapter_sram__DOT__u_sramreqfifo__DOT__rdata_o) 
                                                                 >> 1U)))))))))) 
            << 8U) | (QData)((IData)((1U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT__a_rerror_o) 
                                            >> 1U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_block_encrypt__DOT__u_aes_cipher_core__DOT__u_aes_sub_bytes__DOT__u_aes_sb_en_buf_chk__DOT__gen_sec_buf__DOT__u_prim_buf_sel_i__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i 
        = ((4U & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_block_encrypt__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__sub_bytes_en_o)) 
                  << 2U)) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_block_encrypt__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__sub_bytes_en_o) 
                              << 1U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_block_encrypt__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__sub_bytes_en_o)));
    if ((0x00000010U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_block_encrypt__DOT__u_aes_cipher_core__DOT__u_aes_key_words_sel_buf_chk__DOT__gen_sec_buf__DOT__u_prim_buf_sel_i__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))) {
        if ((8U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_block_encrypt__DOT__u_aes_cipher_core__DOT__u_aes_key_words_sel_buf_chk__DOT__gen_sec_buf__DOT__u_prim_buf_sel_i__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))) {
            if ((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_block_encrypt__DOT__u_aes_cipher_core__DOT__u_aes_key_words_sel_buf_chk__DOT__gen_sec_buf__DOT__u_prim_buf_sel_i__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_block_encrypt__DOT__u_aes_cipher_core__DOT__key_words[0U][0U] = 0U;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_block_encrypt__DOT__u_aes_cipher_core__DOT__key_words[0U][1U] = 0U;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_block_encrypt__DOT__u_aes_cipher_core__DOT__key_words[0U][2U] = 0U;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_block_encrypt__DOT__u_aes_cipher_core__DOT__key_words[0U][3U] = 0U;
            } else if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_block_encrypt__DOT__u_aes_cipher_core__DOT__u_aes_key_words_sel_buf_chk__DOT__gen_sec_buf__DOT__u_prim_buf_sel_i__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_block_encrypt__DOT__u_aes_cipher_core__DOT__key_words[0U][0U] = 0U;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_block_encrypt__DOT__u_aes_cipher_core__DOT__key_words[0U][1U] = 0U;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_block_encrypt__DOT__u_aes_cipher_core__DOT__key_words[0U][2U] = 0U;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_block_encrypt__DOT__u_aes_cipher_core__DOT__key_words[0U][3U] = 0U;
            } else {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_block_encrypt__DOT__u_aes_cipher_core__DOT__key_words[0U][0U] = 0U;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_block_encrypt__DOT__u_aes_cipher_core__DOT__key_words[0U][1U] = 0U;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_block_encrypt__DOT__u_aes_cipher_core__DOT__key_words[0U][2U] = 0U;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_block_encrypt__DOT__u_aes_cipher_core__DOT__key_words[0U][3U] = 0U;
            }
        } else {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_block_encrypt__DOT__u_aes_cipher_core__DOT__key_words[0U][0U] = 0U;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_block_encrypt__DOT__u_aes_cipher_core__DOT__key_words[0U][1U] = 0U;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_block_encrypt__DOT__u_aes_cipher_core__DOT__key_words[0U][2U] = 0U;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_block_encrypt__DOT__u_aes_cipher_core__DOT__key_words[0U][3U] = 0U;
        }
    } else if ((8U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_block_encrypt__DOT__u_aes_cipher_core__DOT__u_aes_key_words_sel_buf_chk__DOT__gen_sec_buf__DOT__u_prim_buf_sel_i__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))) {
        if ((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_block_encrypt__DOT__u_aes_cipher_core__DOT__u_aes_key_words_sel_buf_chk__DOT__gen_sec_buf__DOT__u_prim_buf_sel_i__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))) {
            if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_block_encrypt__DOT__u_aes_cipher_core__DOT__u_aes_key_words_sel_buf_chk__DOT__gen_sec_buf__DOT__u_prim_buf_sel_i__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))) {
                if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_block_encrypt__DOT__u_aes_cipher_core__DOT__u_aes_key_words_sel_buf_chk__DOT__gen_sec_buf__DOT__u_prim_buf_sel_i__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))) {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_block_encrypt__DOT__u_aes_cipher_core__DOT__key_words[0U][0U] = 0U;
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_block_encrypt__DOT__u_aes_cipher_core__DOT__key_words[0U][1U] = 0U;
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_block_encrypt__DOT__u_aes_cipher_core__DOT__key_words[0U][2U] = 0U;
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_block_encrypt__DOT__u_aes_cipher_core__DOT__key_words[0U][3U] = 0U;
                } else {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_block_encrypt__DOT__u_aes_cipher_core__DOT__key_words[0U][0U] 
                        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_block_encrypt__DOT__u_aes_cipher_core__DOT__key_full_q
                        [0U][0U];
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_block_encrypt__DOT__u_aes_cipher_core__DOT__key_words[0U][1U] 
                        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_block_encrypt__DOT__u_aes_cipher_core__DOT__key_full_q
                        [0U][1U];
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_block_encrypt__DOT__u_aes_cipher_core__DOT__key_words[0U][2U] 
                        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_block_encrypt__DOT__u_aes_cipher_core__DOT__key_full_q
                        [0U][2U];
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_block_encrypt__DOT__u_aes_cipher_core__DOT__key_words[0U][3U] 
                        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_block_encrypt__DOT__u_aes_cipher_core__DOT__key_full_q
                        [0U][3U];
                }
            } else {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_block_encrypt__DOT__u_aes_cipher_core__DOT__key_words[0U][0U] = 0U;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_block_encrypt__DOT__u_aes_cipher_core__DOT__key_words[0U][1U] = 0U;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_block_encrypt__DOT__u_aes_cipher_core__DOT__key_words[0U][2U] = 0U;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_block_encrypt__DOT__u_aes_cipher_core__DOT__key_words[0U][3U] = 0U;
            }
        } else {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_block_encrypt__DOT__u_aes_cipher_core__DOT__key_words[0U][0U] = 0U;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_block_encrypt__DOT__u_aes_cipher_core__DOT__key_words[0U][1U] = 0U;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_block_encrypt__DOT__u_aes_cipher_core__DOT__key_words[0U][2U] = 0U;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_block_encrypt__DOT__u_aes_cipher_core__DOT__key_words[0U][3U] = 0U;
        }
    } else if ((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_block_encrypt__DOT__u_aes_cipher_core__DOT__u_aes_key_words_sel_buf_chk__DOT__gen_sec_buf__DOT__u_prim_buf_sel_i__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_block_encrypt__DOT__u_aes_cipher_core__DOT__key_words[0U][0U] = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_block_encrypt__DOT__u_aes_cipher_core__DOT__key_words[0U][1U] = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_block_encrypt__DOT__u_aes_cipher_core__DOT__key_words[0U][2U] = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_block_encrypt__DOT__u_aes_cipher_core__DOT__key_words[0U][3U] = 0U;
    } else if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_block_encrypt__DOT__u_aes_cipher_core__DOT__u_aes_key_words_sel_buf_chk__DOT__gen_sec_buf__DOT__u_prim_buf_sel_i__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_block_encrypt__DOT__u_aes_cipher_core__DOT__key_words[0U][0U] = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_block_encrypt__DOT__u_aes_cipher_core__DOT__key_words[0U][1U] = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_block_encrypt__DOT__u_aes_cipher_core__DOT__key_words[0U][2U] = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_block_encrypt__DOT__u_aes_cipher_core__DOT__key_words[0U][3U] = 0U;
    } else if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_block_encrypt__DOT__u_aes_cipher_core__DOT__u_aes_key_words_sel_buf_chk__DOT__gen_sec_buf__DOT__u_prim_buf_sel_i__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_block_encrypt__DOT__u_aes_cipher_core__DOT__key_words[0U][0U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_block_encrypt__DOT__u_aes_cipher_core__DOT__key_full_q
            [0U][4U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_block_encrypt__DOT__u_aes_cipher_core__DOT__key_words[0U][1U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_block_encrypt__DOT__u_aes_cipher_core__DOT__key_full_q
            [0U][5U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_block_encrypt__DOT__u_aes_cipher_core__DOT__key_words[0U][2U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_block_encrypt__DOT__u_aes_cipher_core__DOT__key_full_q
            [0U][6U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_block_encrypt__DOT__u_aes_cipher_core__DOT__key_words[0U][3U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_block_encrypt__DOT__u_aes_cipher_core__DOT__key_full_q
            [0U][7U];
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_block_encrypt__DOT__u_aes_cipher_core__DOT__key_words[0U][0U] = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_block_encrypt__DOT__u_aes_cipher_core__DOT__key_words[0U][1U] = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_block_encrypt__DOT__u_aes_cipher_core__DOT__key_words[0U][2U] = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_block_encrypt__DOT__u_aes_cipher_core__DOT__key_words[0U][3U] = 0U;
    }
    __Vtableidx91 = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_block_encrypt__DOT__u_aes_cipher_core__DOT__u_aes_key_words_sel_buf_chk__DOT__gen_sec_buf__DOT__u_prim_buf_sel_i__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_block_encrypt__DOT__u_aes_cipher_core__DOT__key_words_sel_err 
        = Vsim__ConstPool__TABLE_hd5a99a19_0[__Vtableidx91];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_main_sm__DOT__fw_ov_ent_insert_i 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__fw_ov_mode) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__fw_ov_entropy_insert_pfe));
    __Vfunc_info_cfg_qual__744__qual_cfg = (0x0666U 
                                            | (0x0ffff000U 
                                               & (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_region_cfg__DOT__gen_info_priv_bank__BRA__0__KET____DOT__gen_info_priv_type__BRA__0__KET____DOT__u_info_cfg__DOT____Vcellinp__u_owner_mubi__mubi_i) 
                                                   << 0x00000018U) 
                                                  | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_region_cfg__DOT__gen_info_priv_bank__BRA__0__KET____DOT__gen_info_priv_type__BRA__0__KET____DOT__u_info_cfg__DOT____Vcellinp__u_owner_mubi__mubi_i) 
                                                      << 0x00000014U) 
                                                     | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_region_cfg__DOT__gen_info_priv_bank__BRA__0__KET____DOT__gen_info_priv_type__BRA__0__KET____DOT__u_info_cfg__DOT____Vcellinp__u_owner_mubi__mubi_i) 
                                                         << 0x00000010U) 
                                                        | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_region_cfg__DOT__gen_info_priv_bank__BRA__0__KET____DOT__gen_info_priv_type__BRA__0__KET____DOT__u_info_cfg__DOT____Vcellinp__u_owner_mubi__mubi_i) 
                                                           << 0x0000000cU))))));
    __Vfunc_info_cfg_qual__744__in_cfg = (0x0fffffffU 
                                          & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_region_cfg__DOT____Vcellinp__gen_info_priv_bank__BRA__0__KET____DOT__gen_info_priv_type__BRA__0__KET____DOT__u_info_cfg__cfgs_i[2U] 
                                              << 8U) 
                                             | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_region_cfg__DOT____Vcellinp__gen_info_priv_bank__BRA__0__KET____DOT__gen_info_priv_type__BRA__0__KET____DOT__u_info_cfg__cfgs_i[1U] 
                                                >> 0x00000018U)));
    __Vfunc_info_cfg_qual__744__out_cfg = ((([&]() {
                    vlSelfRef.__Vfunc_mubi4_and_hi__745__b 
                        = (0x0000000fU & (__Vfunc_info_cfg_qual__744__qual_cfg 
                                          >> 0x00000018U));
                    vlSelfRef.__Vfunc_mubi4_and_hi__745__a 
                        = (0x0000000fU & (__Vfunc_info_cfg_qual__744__in_cfg 
                                          >> 0x00000018U));
                    vlSelfRef.__Vfunc_mubi4_and__746__b 
                        = vlSelfRef.__Vfunc_mubi4_and_hi__745__b;
                    vlSelfRef.__Vfunc_mubi4_and__746__a 
                        = vlSelfRef.__Vfunc_mubi4_and_hi__745__a;
                    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
                    vlSelf->__Vfunc_mubi4_and__746__out = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14461512902246179640ull);
                    vlSelfRef.__Vfunc_mubi4_and__746__a_in 
                        = vlSelfRef.__Vfunc_mubi4_and__746__a;
                    vlSelfRef.__Vfunc_mubi4_and__746__b_in 
                        = vlSelfRef.__Vfunc_mubi4_and__746__b;
                    vlSelfRef.__Vfunc_mubi4_and__746__out 
                        = ((0x0cU & (IData)(vlSelfRef.__Vfunc_mubi4_and__746__out)) 
                           | ((2U & ((IData)(vlSelfRef.__Vfunc_mubi4_and__746__a_in) 
                                     & (IData)(vlSelfRef.__Vfunc_mubi4_and__746__b_in))) 
                              | (1U & ((IData)(vlSelfRef.__Vfunc_mubi4_and__746__a_in) 
                                       | (IData)(vlSelfRef.__Vfunc_mubi4_and__746__b_in)))));
                    vlSelfRef.__Vfunc_mubi4_and__746__out 
                        = ((3U & (IData)(vlSelfRef.__Vfunc_mubi4_and__746__out)) 
                           | (((2U & (((IData)(vlSelfRef.__Vfunc_mubi4_and__746__a_in) 
                                       | (IData)(vlSelfRef.__Vfunc_mubi4_and__746__b_in)) 
                                      >> 2U)) | (1U 
                                                 & (((IData)(vlSelfRef.__Vfunc_mubi4_and__746__a_in) 
                                                     & (IData)(vlSelfRef.__Vfunc_mubi4_and__746__b_in)) 
                                                    >> 2U))) 
                              << 2U));
                    vlSelfRef.__Vfunc_mubi4_and__746__Vfuncout 
                        = vlSelfRef.__Vfunc_mubi4_and__746__out;
                    vlSelfRef.__Vfunc_mubi4_and_hi__745__Vfuncout 
                        = vlSelfRef.__Vfunc_mubi4_and__746__Vfuncout;
                }(), (IData)(vlSelfRef.__Vfunc_mubi4_and_hi__745__Vfuncout)) 
                                            << 0x00000018U) 
                                           | ((([&]() {
                        vlSelfRef.__Vfunc_mubi4_and_hi__747__b 
                            = (0x0000000fU & (__Vfunc_info_cfg_qual__744__qual_cfg 
                                              >> 0x00000014U));
                        vlSelfRef.__Vfunc_mubi4_and_hi__747__a 
                            = (0x0000000fU & (__Vfunc_info_cfg_qual__744__in_cfg 
                                              >> 0x00000014U));
                        vlSelfRef.__Vfunc_mubi4_and__748__b 
                            = vlSelfRef.__Vfunc_mubi4_and_hi__747__b;
                        vlSelfRef.__Vfunc_mubi4_and__748__a 
                            = vlSelfRef.__Vfunc_mubi4_and_hi__747__a;
                        const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
                        vlSelf->__Vfunc_mubi4_and__748__out = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1565957160651763861ull);
                        vlSelfRef.__Vfunc_mubi4_and__748__a_in 
                            = vlSelfRef.__Vfunc_mubi4_and__748__a;
                        vlSelfRef.__Vfunc_mubi4_and__748__b_in 
                            = vlSelfRef.__Vfunc_mubi4_and__748__b;
                        vlSelfRef.__Vfunc_mubi4_and__748__out 
                            = ((0x0cU & (IData)(vlSelfRef.__Vfunc_mubi4_and__748__out)) 
                               | ((2U & ((IData)(vlSelfRef.__Vfunc_mubi4_and__748__a_in) 
                                         & (IData)(vlSelfRef.__Vfunc_mubi4_and__748__b_in))) 
                                  | (1U & ((IData)(vlSelfRef.__Vfunc_mubi4_and__748__a_in) 
                                           | (IData)(vlSelfRef.__Vfunc_mubi4_and__748__b_in)))));
                        vlSelfRef.__Vfunc_mubi4_and__748__out 
                            = ((3U & (IData)(vlSelfRef.__Vfunc_mubi4_and__748__out)) 
                               | (((2U & (((IData)(vlSelfRef.__Vfunc_mubi4_and__748__a_in) 
                                           | (IData)(vlSelfRef.__Vfunc_mubi4_and__748__b_in)) 
                                          >> 2U)) | 
                                   (1U & (((IData)(vlSelfRef.__Vfunc_mubi4_and__748__a_in) 
                                           & (IData)(vlSelfRef.__Vfunc_mubi4_and__748__b_in)) 
                                          >> 2U))) 
                                  << 2U));
                        vlSelfRef.__Vfunc_mubi4_and__748__Vfuncout 
                            = vlSelfRef.__Vfunc_mubi4_and__748__out;
                        vlSelfRef.__Vfunc_mubi4_and_hi__747__Vfuncout 
                            = vlSelfRef.__Vfunc_mubi4_and__748__Vfuncout;
                    }(), (IData)(vlSelfRef.__Vfunc_mubi4_and_hi__747__Vfuncout)) 
                                               << 0x00000014U) 
                                              | ((([&]() {
                            vlSelfRef.__Vfunc_mubi4_and_hi__749__b 
                                = (0x0000000fU & (__Vfunc_info_cfg_qual__744__qual_cfg 
                                                  >> 0x00000010U));
                            vlSelfRef.__Vfunc_mubi4_and_hi__749__a 
                                = (0x0000000fU & (__Vfunc_info_cfg_qual__744__in_cfg 
                                                  >> 0x00000010U));
                            vlSelfRef.__Vfunc_mubi4_and__750__b 
                                = vlSelfRef.__Vfunc_mubi4_and_hi__749__b;
                            vlSelfRef.__Vfunc_mubi4_and__750__a 
                                = vlSelfRef.__Vfunc_mubi4_and_hi__749__a;
                            const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
                            vlSelf->__Vfunc_mubi4_and__750__out = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6117820268623410437ull);
                            vlSelfRef.__Vfunc_mubi4_and__750__a_in 
                                = vlSelfRef.__Vfunc_mubi4_and__750__a;
                            vlSelfRef.__Vfunc_mubi4_and__750__b_in 
                                = vlSelfRef.__Vfunc_mubi4_and__750__b;
                            vlSelfRef.__Vfunc_mubi4_and__750__out 
                                = ((0x0cU & (IData)(vlSelfRef.__Vfunc_mubi4_and__750__out)) 
                                   | ((2U & ((IData)(vlSelfRef.__Vfunc_mubi4_and__750__a_in) 
                                             & (IData)(vlSelfRef.__Vfunc_mubi4_and__750__b_in))) 
                                      | (1U & ((IData)(vlSelfRef.__Vfunc_mubi4_and__750__a_in) 
                                               | (IData)(vlSelfRef.__Vfunc_mubi4_and__750__b_in)))));
                            vlSelfRef.__Vfunc_mubi4_and__750__out 
                                = ((3U & (IData)(vlSelfRef.__Vfunc_mubi4_and__750__out)) 
                                   | (((2U & (((IData)(vlSelfRef.__Vfunc_mubi4_and__750__a_in) 
                                               | (IData)(vlSelfRef.__Vfunc_mubi4_and__750__b_in)) 
                                              >> 2U)) 
                                       | (1U & (((IData)(vlSelfRef.__Vfunc_mubi4_and__750__a_in) 
                                                 & (IData)(vlSelfRef.__Vfunc_mubi4_and__750__b_in)) 
                                                >> 2U))) 
                                      << 2U));
                            vlSelfRef.__Vfunc_mubi4_and__750__Vfuncout 
                                = vlSelfRef.__Vfunc_mubi4_and__750__out;
                            vlSelfRef.__Vfunc_mubi4_and_hi__749__Vfuncout 
                                = vlSelfRef.__Vfunc_mubi4_and__750__Vfuncout;
                        }(), (IData)(vlSelfRef.__Vfunc_mubi4_and_hi__749__Vfuncout)) 
                                                  << 0x00000010U) 
                                                 | ((([&]() {
                                vlSelfRef.__Vfunc_mubi4_and_hi__751__b 
                                    = (0x0000000fU 
                                       & (__Vfunc_info_cfg_qual__744__qual_cfg 
                                          >> 0x0000000cU));
                                vlSelfRef.__Vfunc_mubi4_and_hi__751__a 
                                    = (0x0000000fU 
                                       & (__Vfunc_info_cfg_qual__744__in_cfg 
                                          >> 0x0000000cU));
                                vlSelfRef.__Vfunc_mubi4_and__752__b 
                                    = vlSelfRef.__Vfunc_mubi4_and_hi__751__b;
                                vlSelfRef.__Vfunc_mubi4_and__752__a 
                                    = vlSelfRef.__Vfunc_mubi4_and_hi__751__a;
                                const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
                                vlSelf->__Vfunc_mubi4_and__752__out = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9653266114353257229ull);
                                vlSelfRef.__Vfunc_mubi4_and__752__a_in 
                                    = vlSelfRef.__Vfunc_mubi4_and__752__a;
                                vlSelfRef.__Vfunc_mubi4_and__752__b_in 
                                    = vlSelfRef.__Vfunc_mubi4_and__752__b;
                                vlSelfRef.__Vfunc_mubi4_and__752__out 
                                    = ((0x0cU & (IData)(vlSelfRef.__Vfunc_mubi4_and__752__out)) 
                                       | ((2U & ((IData)(vlSelfRef.__Vfunc_mubi4_and__752__a_in) 
                                                 & (IData)(vlSelfRef.__Vfunc_mubi4_and__752__b_in))) 
                                          | (1U & ((IData)(vlSelfRef.__Vfunc_mubi4_and__752__a_in) 
                                                   | (IData)(vlSelfRef.__Vfunc_mubi4_and__752__b_in)))));
                                vlSelfRef.__Vfunc_mubi4_and__752__out 
                                    = ((3U & (IData)(vlSelfRef.__Vfunc_mubi4_and__752__out)) 
                                       | (((2U & (((IData)(vlSelfRef.__Vfunc_mubi4_and__752__a_in) 
                                                   | (IData)(vlSelfRef.__Vfunc_mubi4_and__752__b_in)) 
                                                  >> 2U)) 
                                           | (1U & 
                                              (((IData)(vlSelfRef.__Vfunc_mubi4_and__752__a_in) 
                                                & (IData)(vlSelfRef.__Vfunc_mubi4_and__752__b_in)) 
                                               >> 2U))) 
                                          << 2U));
                                vlSelfRef.__Vfunc_mubi4_and__752__Vfuncout 
                                    = vlSelfRef.__Vfunc_mubi4_and__752__out;
                                vlSelfRef.__Vfunc_mubi4_and_hi__751__Vfuncout 
                                    = vlSelfRef.__Vfunc_mubi4_and__752__Vfuncout;
                            }(), (IData)(vlSelfRef.__Vfunc_mubi4_and_hi__751__Vfuncout)) 
                                                     << 0x0000000cU) 
                                                    | ((([&]() {
                                    vlSelfRef.__Vfunc_mubi4_and_hi__753__b 
                                        = (0x0000000fU 
                                           & (__Vfunc_info_cfg_qual__744__qual_cfg 
                                              >> 8U));
                                    vlSelfRef.__Vfunc_mubi4_and_hi__753__a 
                                        = (0x0000000fU 
                                           & (__Vfunc_info_cfg_qual__744__in_cfg 
                                              >> 8U));
                                    vlSelfRef.__Vfunc_mubi4_and__754__b 
                                        = vlSelfRef.__Vfunc_mubi4_and_hi__753__b;
                                    vlSelfRef.__Vfunc_mubi4_and__754__a 
                                        = vlSelfRef.__Vfunc_mubi4_and_hi__753__a;
                                    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
                                    vlSelf->__Vfunc_mubi4_and__754__out = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2662873267417936710ull);
                                    vlSelfRef.__Vfunc_mubi4_and__754__a_in 
                                        = vlSelfRef.__Vfunc_mubi4_and__754__a;
                                    vlSelfRef.__Vfunc_mubi4_and__754__b_in 
                                        = vlSelfRef.__Vfunc_mubi4_and__754__b;
                                    vlSelfRef.__Vfunc_mubi4_and__754__out 
                                        = ((0x0cU & (IData)(vlSelfRef.__Vfunc_mubi4_and__754__out)) 
                                           | ((2U & 
                                               ((IData)(vlSelfRef.__Vfunc_mubi4_and__754__a_in) 
                                                & (IData)(vlSelfRef.__Vfunc_mubi4_and__754__b_in))) 
                                              | (1U 
                                                 & ((IData)(vlSelfRef.__Vfunc_mubi4_and__754__a_in) 
                                                    | (IData)(vlSelfRef.__Vfunc_mubi4_and__754__b_in)))));
                                    vlSelfRef.__Vfunc_mubi4_and__754__out 
                                        = ((3U & (IData)(vlSelfRef.__Vfunc_mubi4_and__754__out)) 
                                           | (((2U 
                                                & (((IData)(vlSelfRef.__Vfunc_mubi4_and__754__a_in) 
                                                    | (IData)(vlSelfRef.__Vfunc_mubi4_and__754__b_in)) 
                                                   >> 2U)) 
                                               | (1U 
                                                  & (((IData)(vlSelfRef.__Vfunc_mubi4_and__754__a_in) 
                                                      & (IData)(vlSelfRef.__Vfunc_mubi4_and__754__b_in)) 
                                                     >> 2U))) 
                                              << 2U));
                                    vlSelfRef.__Vfunc_mubi4_and__754__Vfuncout 
                                        = vlSelfRef.__Vfunc_mubi4_and__754__out;
                                    vlSelfRef.__Vfunc_mubi4_and_hi__753__Vfuncout 
                                        = vlSelfRef.__Vfunc_mubi4_and__754__Vfuncout;
                                }(), (IData)(vlSelfRef.__Vfunc_mubi4_and_hi__753__Vfuncout)) 
                                                        << 8U) 
                                                       | ((([&]() {
                                        vlSelfRef.__Vfunc_mubi4_and_hi__755__b 
                                            = (0x0000000fU 
                                               & (__Vfunc_info_cfg_qual__744__qual_cfg 
                                                  >> 4U));
                                        vlSelfRef.__Vfunc_mubi4_and_hi__755__a 
                                            = (0x0000000fU 
                                               & (__Vfunc_info_cfg_qual__744__in_cfg 
                                                  >> 4U));
                                        vlSelfRef.__Vfunc_mubi4_and__756__b 
                                            = vlSelfRef.__Vfunc_mubi4_and_hi__755__b;
                                        vlSelfRef.__Vfunc_mubi4_and__756__a 
                                            = vlSelfRef.__Vfunc_mubi4_and_hi__755__a;
                                        const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
                                        vlSelf->__Vfunc_mubi4_and__756__out = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5298466098113612559ull);
                                        vlSelfRef.__Vfunc_mubi4_and__756__a_in 
                                            = vlSelfRef.__Vfunc_mubi4_and__756__a;
                                        vlSelfRef.__Vfunc_mubi4_and__756__b_in 
                                            = vlSelfRef.__Vfunc_mubi4_and__756__b;
                                        vlSelfRef.__Vfunc_mubi4_and__756__out 
                                            = ((0x0cU 
                                                & (IData)(vlSelfRef.__Vfunc_mubi4_and__756__out)) 
                                               | ((2U 
                                                   & ((IData)(vlSelfRef.__Vfunc_mubi4_and__756__a_in) 
                                                      & (IData)(vlSelfRef.__Vfunc_mubi4_and__756__b_in))) 
                                                  | (1U 
                                                     & ((IData)(vlSelfRef.__Vfunc_mubi4_and__756__a_in) 
                                                        | (IData)(vlSelfRef.__Vfunc_mubi4_and__756__b_in)))));
                                        vlSelfRef.__Vfunc_mubi4_and__756__out 
                                            = ((3U 
                                                & (IData)(vlSelfRef.__Vfunc_mubi4_and__756__out)) 
                                               | (((2U 
                                                    & (((IData)(vlSelfRef.__Vfunc_mubi4_and__756__a_in) 
                                                        | (IData)(vlSelfRef.__Vfunc_mubi4_and__756__b_in)) 
                                                       >> 2U)) 
                                                   | (1U 
                                                      & (((IData)(vlSelfRef.__Vfunc_mubi4_and__756__a_in) 
                                                          & (IData)(vlSelfRef.__Vfunc_mubi4_and__756__b_in)) 
                                                         >> 2U))) 
                                                  << 2U));
                                        vlSelfRef.__Vfunc_mubi4_and__756__Vfuncout 
                                            = vlSelfRef.__Vfunc_mubi4_and__756__out;
                                        vlSelfRef.__Vfunc_mubi4_and_hi__755__Vfuncout 
                                            = vlSelfRef.__Vfunc_mubi4_and__756__Vfuncout;
                                    }(), (IData)(vlSelfRef.__Vfunc_mubi4_and_hi__755__Vfuncout)) 
                                                           << 4U) 
                                                          | ([&]() {
                                    vlSelfRef.__Vfunc_mubi4_and_hi__757__b 
                                        = (0x0000000fU 
                                           & __Vfunc_info_cfg_qual__744__qual_cfg);
                                    vlSelfRef.__Vfunc_mubi4_and_hi__757__a 
                                        = (0x0000000fU 
                                           & __Vfunc_info_cfg_qual__744__in_cfg);
                                    vlSelfRef.__Vfunc_mubi4_and__758__b 
                                        = vlSelfRef.__Vfunc_mubi4_and_hi__757__b;
                                    vlSelfRef.__Vfunc_mubi4_and__758__a 
                                        = vlSelfRef.__Vfunc_mubi4_and_hi__757__a;
                                    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
                                    vlSelf->__Vfunc_mubi4_and__758__out = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10400964021594243910ull);
                                    vlSelfRef.__Vfunc_mubi4_and__758__a_in 
                                        = vlSelfRef.__Vfunc_mubi4_and__758__a;
                                    vlSelfRef.__Vfunc_mubi4_and__758__b_in 
                                        = vlSelfRef.__Vfunc_mubi4_and__758__b;
                                    vlSelfRef.__Vfunc_mubi4_and__758__out 
                                        = ((0x0cU & (IData)(vlSelfRef.__Vfunc_mubi4_and__758__out)) 
                                           | ((2U & 
                                               ((IData)(vlSelfRef.__Vfunc_mubi4_and__758__a_in) 
                                                & (IData)(vlSelfRef.__Vfunc_mubi4_and__758__b_in))) 
                                              | (1U 
                                                 & ((IData)(vlSelfRef.__Vfunc_mubi4_and__758__a_in) 
                                                    | (IData)(vlSelfRef.__Vfunc_mubi4_and__758__b_in)))));
                                    vlSelfRef.__Vfunc_mubi4_and__758__out 
                                        = ((3U & (IData)(vlSelfRef.__Vfunc_mubi4_and__758__out)) 
                                           | (((2U 
                                                & (((IData)(vlSelfRef.__Vfunc_mubi4_and__758__a_in) 
                                                    | (IData)(vlSelfRef.__Vfunc_mubi4_and__758__b_in)) 
                                                   >> 2U)) 
                                               | (1U 
                                                  & (((IData)(vlSelfRef.__Vfunc_mubi4_and__758__a_in) 
                                                      & (IData)(vlSelfRef.__Vfunc_mubi4_and__758__b_in)) 
                                                     >> 2U))) 
                                              << 2U));
                                    vlSelfRef.__Vfunc_mubi4_and__758__Vfuncout 
                                        = vlSelfRef.__Vfunc_mubi4_and__758__out;
                                    vlSelfRef.__Vfunc_mubi4_and_hi__757__Vfuncout 
                                        = vlSelfRef.__Vfunc_mubi4_and__758__Vfuncout;
                                }(), (IData)(vlSelfRef.__Vfunc_mubi4_and_hi__757__Vfuncout))))))));
    __Vfunc_info_cfg_qual__744__Vfuncout = __Vfunc_info_cfg_qual__744__out_cfg;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_region_cfg__DOT____Vcellout__gen_info_priv_bank__BRA__0__KET____DOT__gen_info_priv_type__BRA__0__KET____DOT__u_info_cfg__cfgs_o[1U] 
        = ((0x00ffffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_region_cfg__DOT____Vcellout__gen_info_priv_bank__BRA__0__KET____DOT__gen_info_priv_type__BRA__0__KET____DOT__u_info_cfg__cfgs_o[1U]) 
           | (__Vfunc_info_cfg_qual__744__Vfuncout 
              << 0x00000018U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_region_cfg__DOT____Vcellout__gen_info_priv_bank__BRA__0__KET____DOT__gen_info_priv_type__BRA__0__KET____DOT__u_info_cfg__cfgs_o[2U] 
        = ((0xfff00000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_region_cfg__DOT____Vcellout__gen_info_priv_bank__BRA__0__KET____DOT__gen_info_priv_type__BRA__0__KET____DOT__u_info_cfg__cfgs_o[2U]) 
           | (__Vfunc_info_cfg_qual__744__Vfuncout 
              >> 8U));
    __Vfunc_info_cfg_qual__729__qual_cfg = (0x0666U 
                                            | (0x0ffff000U 
                                               & (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_region_cfg__DOT__gen_info_priv_bank__BRA__0__KET____DOT__gen_info_priv_type__BRA__0__KET____DOT__u_info_cfg__DOT____Vcellinp__u_creator_mubi__mubi_i) 
                                                   << 0x00000018U) 
                                                  | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_region_cfg__DOT__gen_info_priv_bank__BRA__0__KET____DOT__gen_info_priv_type__BRA__0__KET____DOT__u_info_cfg__DOT____Vcellinp__u_creator_mubi__mubi_i) 
                                                      << 0x00000014U) 
                                                     | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_region_cfg__DOT__gen_info_priv_bank__BRA__0__KET____DOT__gen_info_priv_type__BRA__0__KET____DOT__u_info_cfg__DOT____Vcellinp__u_creator_mubi__mubi_i) 
                                                         << 0x00000010U) 
                                                        | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_region_cfg__DOT__gen_info_priv_bank__BRA__0__KET____DOT__gen_info_priv_type__BRA__0__KET____DOT__u_info_cfg__DOT____Vcellinp__u_creator_mubi__mubi_i) 
                                                           << 0x0000000cU))))));
    __Vfunc_info_cfg_qual__729__in_cfg = (0x0fffffffU 
                                          & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_region_cfg__DOT____Vcellinp__gen_info_priv_bank__BRA__0__KET____DOT__gen_info_priv_type__BRA__0__KET____DOT__u_info_cfg__cfgs_i[1U] 
                                              << 4U) 
                                             | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_region_cfg__DOT____Vcellinp__gen_info_priv_bank__BRA__0__KET____DOT__gen_info_priv_type__BRA__0__KET____DOT__u_info_cfg__cfgs_i[0U] 
                                                >> 0x0000001cU)));
    __Vfunc_info_cfg_qual__729__out_cfg = ((([&]() {
                    vlSelfRef.__Vfunc_mubi4_and_hi__730__b 
                        = (0x0000000fU & (__Vfunc_info_cfg_qual__729__qual_cfg 
                                          >> 0x00000018U));
                    vlSelfRef.__Vfunc_mubi4_and_hi__730__a 
                        = (0x0000000fU & (__Vfunc_info_cfg_qual__729__in_cfg 
                                          >> 0x00000018U));
                    vlSelfRef.__Vfunc_mubi4_and__731__b 
                        = vlSelfRef.__Vfunc_mubi4_and_hi__730__b;
                    vlSelfRef.__Vfunc_mubi4_and__731__a 
                        = vlSelfRef.__Vfunc_mubi4_and_hi__730__a;
                    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
                    vlSelf->__Vfunc_mubi4_and__731__out = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16909333441797060379ull);
                    vlSelfRef.__Vfunc_mubi4_and__731__a_in 
                        = vlSelfRef.__Vfunc_mubi4_and__731__a;
                    vlSelfRef.__Vfunc_mubi4_and__731__b_in 
                        = vlSelfRef.__Vfunc_mubi4_and__731__b;
                    vlSelfRef.__Vfunc_mubi4_and__731__out 
                        = ((0x0cU & (IData)(vlSelfRef.__Vfunc_mubi4_and__731__out)) 
                           | ((2U & ((IData)(vlSelfRef.__Vfunc_mubi4_and__731__a_in) 
                                     & (IData)(vlSelfRef.__Vfunc_mubi4_and__731__b_in))) 
                              | (1U & ((IData)(vlSelfRef.__Vfunc_mubi4_and__731__a_in) 
                                       | (IData)(vlSelfRef.__Vfunc_mubi4_and__731__b_in)))));
                    vlSelfRef.__Vfunc_mubi4_and__731__out 
                        = ((3U & (IData)(vlSelfRef.__Vfunc_mubi4_and__731__out)) 
                           | (((2U & (((IData)(vlSelfRef.__Vfunc_mubi4_and__731__a_in) 
                                       | (IData)(vlSelfRef.__Vfunc_mubi4_and__731__b_in)) 
                                      >> 2U)) | (1U 
                                                 & (((IData)(vlSelfRef.__Vfunc_mubi4_and__731__a_in) 
                                                     & (IData)(vlSelfRef.__Vfunc_mubi4_and__731__b_in)) 
                                                    >> 2U))) 
                              << 2U));
                    vlSelfRef.__Vfunc_mubi4_and__731__Vfuncout 
                        = vlSelfRef.__Vfunc_mubi4_and__731__out;
                    vlSelfRef.__Vfunc_mubi4_and_hi__730__Vfuncout 
                        = vlSelfRef.__Vfunc_mubi4_and__731__Vfuncout;
                }(), (IData)(vlSelfRef.__Vfunc_mubi4_and_hi__730__Vfuncout)) 
                                            << 0x00000018U) 
                                           | ((([&]() {
                        vlSelfRef.__Vfunc_mubi4_and_hi__732__b 
                            = (0x0000000fU & (__Vfunc_info_cfg_qual__729__qual_cfg 
                                              >> 0x00000014U));
                        vlSelfRef.__Vfunc_mubi4_and_hi__732__a 
                            = (0x0000000fU & (__Vfunc_info_cfg_qual__729__in_cfg 
                                              >> 0x00000014U));
                        vlSelfRef.__Vfunc_mubi4_and__733__b 
                            = vlSelfRef.__Vfunc_mubi4_and_hi__732__b;
                        vlSelfRef.__Vfunc_mubi4_and__733__a 
                            = vlSelfRef.__Vfunc_mubi4_and_hi__732__a;
                        const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
                        vlSelf->__Vfunc_mubi4_and__733__out = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3857535287381799876ull);
                        vlSelfRef.__Vfunc_mubi4_and__733__a_in 
                            = vlSelfRef.__Vfunc_mubi4_and__733__a;
                        vlSelfRef.__Vfunc_mubi4_and__733__b_in 
                            = vlSelfRef.__Vfunc_mubi4_and__733__b;
                        vlSelfRef.__Vfunc_mubi4_and__733__out 
                            = ((0x0cU & (IData)(vlSelfRef.__Vfunc_mubi4_and__733__out)) 
                               | ((2U & ((IData)(vlSelfRef.__Vfunc_mubi4_and__733__a_in) 
                                         & (IData)(vlSelfRef.__Vfunc_mubi4_and__733__b_in))) 
                                  | (1U & ((IData)(vlSelfRef.__Vfunc_mubi4_and__733__a_in) 
                                           | (IData)(vlSelfRef.__Vfunc_mubi4_and__733__b_in)))));
                        vlSelfRef.__Vfunc_mubi4_and__733__out 
                            = ((3U & (IData)(vlSelfRef.__Vfunc_mubi4_and__733__out)) 
                               | (((2U & (((IData)(vlSelfRef.__Vfunc_mubi4_and__733__a_in) 
                                           | (IData)(vlSelfRef.__Vfunc_mubi4_and__733__b_in)) 
                                          >> 2U)) | 
                                   (1U & (((IData)(vlSelfRef.__Vfunc_mubi4_and__733__a_in) 
                                           & (IData)(vlSelfRef.__Vfunc_mubi4_and__733__b_in)) 
                                          >> 2U))) 
                                  << 2U));
                        vlSelfRef.__Vfunc_mubi4_and__733__Vfuncout 
                            = vlSelfRef.__Vfunc_mubi4_and__733__out;
                        vlSelfRef.__Vfunc_mubi4_and_hi__732__Vfuncout 
                            = vlSelfRef.__Vfunc_mubi4_and__733__Vfuncout;
                    }(), (IData)(vlSelfRef.__Vfunc_mubi4_and_hi__732__Vfuncout)) 
                                               << 0x00000014U) 
                                              | ((([&]() {
                            vlSelfRef.__Vfunc_mubi4_and_hi__734__b 
                                = (0x0000000fU & (__Vfunc_info_cfg_qual__729__qual_cfg 
                                                  >> 0x00000010U));
                            vlSelfRef.__Vfunc_mubi4_and_hi__734__a 
                                = (0x0000000fU & (__Vfunc_info_cfg_qual__729__in_cfg 
                                                  >> 0x00000010U));
                            vlSelfRef.__Vfunc_mubi4_and__735__b 
                                = vlSelfRef.__Vfunc_mubi4_and_hi__734__b;
                            vlSelfRef.__Vfunc_mubi4_and__735__a 
                                = vlSelfRef.__Vfunc_mubi4_and_hi__734__a;
                            const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
                            vlSelf->__Vfunc_mubi4_and__735__out = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12565998899807718120ull);
                            vlSelfRef.__Vfunc_mubi4_and__735__a_in 
                                = vlSelfRef.__Vfunc_mubi4_and__735__a;
                            vlSelfRef.__Vfunc_mubi4_and__735__b_in 
                                = vlSelfRef.__Vfunc_mubi4_and__735__b;
                            vlSelfRef.__Vfunc_mubi4_and__735__out 
                                = ((0x0cU & (IData)(vlSelfRef.__Vfunc_mubi4_and__735__out)) 
                                   | ((2U & ((IData)(vlSelfRef.__Vfunc_mubi4_and__735__a_in) 
                                             & (IData)(vlSelfRef.__Vfunc_mubi4_and__735__b_in))) 
                                      | (1U & ((IData)(vlSelfRef.__Vfunc_mubi4_and__735__a_in) 
                                               | (IData)(vlSelfRef.__Vfunc_mubi4_and__735__b_in)))));
                            vlSelfRef.__Vfunc_mubi4_and__735__out 
                                = ((3U & (IData)(vlSelfRef.__Vfunc_mubi4_and__735__out)) 
                                   | (((2U & (((IData)(vlSelfRef.__Vfunc_mubi4_and__735__a_in) 
                                               | (IData)(vlSelfRef.__Vfunc_mubi4_and__735__b_in)) 
                                              >> 2U)) 
                                       | (1U & (((IData)(vlSelfRef.__Vfunc_mubi4_and__735__a_in) 
                                                 & (IData)(vlSelfRef.__Vfunc_mubi4_and__735__b_in)) 
                                                >> 2U))) 
                                      << 2U));
                            vlSelfRef.__Vfunc_mubi4_and__735__Vfuncout 
                                = vlSelfRef.__Vfunc_mubi4_and__735__out;
                            vlSelfRef.__Vfunc_mubi4_and_hi__734__Vfuncout 
                                = vlSelfRef.__Vfunc_mubi4_and__735__Vfuncout;
                        }(), (IData)(vlSelfRef.__Vfunc_mubi4_and_hi__734__Vfuncout)) 
                                                  << 0x00000010U) 
                                                 | ((([&]() {
                                vlSelfRef.__Vfunc_mubi4_and_hi__736__b 
                                    = (0x0000000fU 
                                       & (__Vfunc_info_cfg_qual__729__qual_cfg 
                                          >> 0x0000000cU));
                                vlSelfRef.__Vfunc_mubi4_and_hi__736__a 
                                    = (0x0000000fU 
                                       & (__Vfunc_info_cfg_qual__729__in_cfg 
                                          >> 0x0000000cU));
                                vlSelfRef.__Vfunc_mubi4_and__737__b 
                                    = vlSelfRef.__Vfunc_mubi4_and_hi__736__b;
                                vlSelfRef.__Vfunc_mubi4_and__737__a 
                                    = vlSelfRef.__Vfunc_mubi4_and_hi__736__a;
                                const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
                                vlSelf->__Vfunc_mubi4_and__737__out = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5762601929817699562ull);
                                vlSelfRef.__Vfunc_mubi4_and__737__a_in 
                                    = vlSelfRef.__Vfunc_mubi4_and__737__a;
                                vlSelfRef.__Vfunc_mubi4_and__737__b_in 
                                    = vlSelfRef.__Vfunc_mubi4_and__737__b;
                                vlSelfRef.__Vfunc_mubi4_and__737__out 
                                    = ((0x0cU & (IData)(vlSelfRef.__Vfunc_mubi4_and__737__out)) 
                                       | ((2U & ((IData)(vlSelfRef.__Vfunc_mubi4_and__737__a_in) 
                                                 & (IData)(vlSelfRef.__Vfunc_mubi4_and__737__b_in))) 
                                          | (1U & ((IData)(vlSelfRef.__Vfunc_mubi4_and__737__a_in) 
                                                   | (IData)(vlSelfRef.__Vfunc_mubi4_and__737__b_in)))));
                                vlSelfRef.__Vfunc_mubi4_and__737__out 
                                    = ((3U & (IData)(vlSelfRef.__Vfunc_mubi4_and__737__out)) 
                                       | (((2U & (((IData)(vlSelfRef.__Vfunc_mubi4_and__737__a_in) 
                                                   | (IData)(vlSelfRef.__Vfunc_mubi4_and__737__b_in)) 
                                                  >> 2U)) 
                                           | (1U & 
                                              (((IData)(vlSelfRef.__Vfunc_mubi4_and__737__a_in) 
                                                & (IData)(vlSelfRef.__Vfunc_mubi4_and__737__b_in)) 
                                               >> 2U))) 
                                          << 2U));
                                vlSelfRef.__Vfunc_mubi4_and__737__Vfuncout 
                                    = vlSelfRef.__Vfunc_mubi4_and__737__out;
                                vlSelfRef.__Vfunc_mubi4_and_hi__736__Vfuncout 
                                    = vlSelfRef.__Vfunc_mubi4_and__737__Vfuncout;
                            }(), (IData)(vlSelfRef.__Vfunc_mubi4_and_hi__736__Vfuncout)) 
                                                     << 0x0000000cU) 
                                                    | ((([&]() {
                                    vlSelfRef.__Vfunc_mubi4_and_hi__738__b 
                                        = (0x0000000fU 
                                           & (__Vfunc_info_cfg_qual__729__qual_cfg 
                                              >> 8U));
                                    vlSelfRef.__Vfunc_mubi4_and_hi__738__a 
                                        = (0x0000000fU 
                                           & (__Vfunc_info_cfg_qual__729__in_cfg 
                                              >> 8U));
                                    vlSelfRef.__Vfunc_mubi4_and__739__b 
                                        = vlSelfRef.__Vfunc_mubi4_and_hi__738__b;
                                    vlSelfRef.__Vfunc_mubi4_and__739__a 
                                        = vlSelfRef.__Vfunc_mubi4_and_hi__738__a;
                                    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
                                    vlSelf->__Vfunc_mubi4_and__739__out = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1327114017049914070ull);
                                    vlSelfRef.__Vfunc_mubi4_and__739__a_in 
                                        = vlSelfRef.__Vfunc_mubi4_and__739__a;
                                    vlSelfRef.__Vfunc_mubi4_and__739__b_in 
                                        = vlSelfRef.__Vfunc_mubi4_and__739__b;
                                    vlSelfRef.__Vfunc_mubi4_and__739__out 
                                        = ((0x0cU & (IData)(vlSelfRef.__Vfunc_mubi4_and__739__out)) 
                                           | ((2U & 
                                               ((IData)(vlSelfRef.__Vfunc_mubi4_and__739__a_in) 
                                                & (IData)(vlSelfRef.__Vfunc_mubi4_and__739__b_in))) 
                                              | (1U 
                                                 & ((IData)(vlSelfRef.__Vfunc_mubi4_and__739__a_in) 
                                                    | (IData)(vlSelfRef.__Vfunc_mubi4_and__739__b_in)))));
                                    vlSelfRef.__Vfunc_mubi4_and__739__out 
                                        = ((3U & (IData)(vlSelfRef.__Vfunc_mubi4_and__739__out)) 
                                           | (((2U 
                                                & (((IData)(vlSelfRef.__Vfunc_mubi4_and__739__a_in) 
                                                    | (IData)(vlSelfRef.__Vfunc_mubi4_and__739__b_in)) 
                                                   >> 2U)) 
                                               | (1U 
                                                  & (((IData)(vlSelfRef.__Vfunc_mubi4_and__739__a_in) 
                                                      & (IData)(vlSelfRef.__Vfunc_mubi4_and__739__b_in)) 
                                                     >> 2U))) 
                                              << 2U));
                                    vlSelfRef.__Vfunc_mubi4_and__739__Vfuncout 
                                        = vlSelfRef.__Vfunc_mubi4_and__739__out;
                                    vlSelfRef.__Vfunc_mubi4_and_hi__738__Vfuncout 
                                        = vlSelfRef.__Vfunc_mubi4_and__739__Vfuncout;
                                }(), (IData)(vlSelfRef.__Vfunc_mubi4_and_hi__738__Vfuncout)) 
                                                        << 8U) 
                                                       | ((([&]() {
                                        vlSelfRef.__Vfunc_mubi4_and_hi__740__b 
                                            = (0x0000000fU 
                                               & (__Vfunc_info_cfg_qual__729__qual_cfg 
                                                  >> 4U));
                                        vlSelfRef.__Vfunc_mubi4_and_hi__740__a 
                                            = (0x0000000fU 
                                               & (__Vfunc_info_cfg_qual__729__in_cfg 
                                                  >> 4U));
                                        vlSelfRef.__Vfunc_mubi4_and__741__b 
                                            = vlSelfRef.__Vfunc_mubi4_and_hi__740__b;
                                        vlSelfRef.__Vfunc_mubi4_and__741__a 
                                            = vlSelfRef.__Vfunc_mubi4_and_hi__740__a;
                                        const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
                                        vlSelf->__Vfunc_mubi4_and__741__out = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2638569687241239024ull);
                                        vlSelfRef.__Vfunc_mubi4_and__741__a_in 
                                            = vlSelfRef.__Vfunc_mubi4_and__741__a;
                                        vlSelfRef.__Vfunc_mubi4_and__741__b_in 
                                            = vlSelfRef.__Vfunc_mubi4_and__741__b;
                                        vlSelfRef.__Vfunc_mubi4_and__741__out 
                                            = ((0x0cU 
                                                & (IData)(vlSelfRef.__Vfunc_mubi4_and__741__out)) 
                                               | ((2U 
                                                   & ((IData)(vlSelfRef.__Vfunc_mubi4_and__741__a_in) 
                                                      & (IData)(vlSelfRef.__Vfunc_mubi4_and__741__b_in))) 
                                                  | (1U 
                                                     & ((IData)(vlSelfRef.__Vfunc_mubi4_and__741__a_in) 
                                                        | (IData)(vlSelfRef.__Vfunc_mubi4_and__741__b_in)))));
                                        vlSelfRef.__Vfunc_mubi4_and__741__out 
                                            = ((3U 
                                                & (IData)(vlSelfRef.__Vfunc_mubi4_and__741__out)) 
                                               | (((2U 
                                                    & (((IData)(vlSelfRef.__Vfunc_mubi4_and__741__a_in) 
                                                        | (IData)(vlSelfRef.__Vfunc_mubi4_and__741__b_in)) 
                                                       >> 2U)) 
                                                   | (1U 
                                                      & (((IData)(vlSelfRef.__Vfunc_mubi4_and__741__a_in) 
                                                          & (IData)(vlSelfRef.__Vfunc_mubi4_and__741__b_in)) 
                                                         >> 2U))) 
                                                  << 2U));
                                        vlSelfRef.__Vfunc_mubi4_and__741__Vfuncout 
                                            = vlSelfRef.__Vfunc_mubi4_and__741__out;
                                        vlSelfRef.__Vfunc_mubi4_and_hi__740__Vfuncout 
                                            = vlSelfRef.__Vfunc_mubi4_and__741__Vfuncout;
                                    }(), (IData)(vlSelfRef.__Vfunc_mubi4_and_hi__740__Vfuncout)) 
                                                           << 4U) 
                                                          | ([&]() {
                                    vlSelfRef.__Vfunc_mubi4_and_hi__742__b 
                                        = (0x0000000fU 
                                           & __Vfunc_info_cfg_qual__729__qual_cfg);
                                    vlSelfRef.__Vfunc_mubi4_and_hi__742__a 
                                        = (0x0000000fU 
                                           & __Vfunc_info_cfg_qual__729__in_cfg);
                                    vlSelfRef.__Vfunc_mubi4_and__743__b 
                                        = vlSelfRef.__Vfunc_mubi4_and_hi__742__b;
                                    vlSelfRef.__Vfunc_mubi4_and__743__a 
                                        = vlSelfRef.__Vfunc_mubi4_and_hi__742__a;
                                    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
                                    vlSelf->__Vfunc_mubi4_and__743__out = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3539813584420516982ull);
                                    vlSelfRef.__Vfunc_mubi4_and__743__a_in 
                                        = vlSelfRef.__Vfunc_mubi4_and__743__a;
                                    vlSelfRef.__Vfunc_mubi4_and__743__b_in 
                                        = vlSelfRef.__Vfunc_mubi4_and__743__b;
                                    vlSelfRef.__Vfunc_mubi4_and__743__out 
                                        = ((0x0cU & (IData)(vlSelfRef.__Vfunc_mubi4_and__743__out)) 
                                           | ((2U & 
                                               ((IData)(vlSelfRef.__Vfunc_mubi4_and__743__a_in) 
                                                & (IData)(vlSelfRef.__Vfunc_mubi4_and__743__b_in))) 
                                              | (1U 
                                                 & ((IData)(vlSelfRef.__Vfunc_mubi4_and__743__a_in) 
                                                    | (IData)(vlSelfRef.__Vfunc_mubi4_and__743__b_in)))));
                                    vlSelfRef.__Vfunc_mubi4_and__743__out 
                                        = ((3U & (IData)(vlSelfRef.__Vfunc_mubi4_and__743__out)) 
                                           | (((2U 
                                                & (((IData)(vlSelfRef.__Vfunc_mubi4_and__743__a_in) 
                                                    | (IData)(vlSelfRef.__Vfunc_mubi4_and__743__b_in)) 
                                                   >> 2U)) 
                                               | (1U 
                                                  & (((IData)(vlSelfRef.__Vfunc_mubi4_and__743__a_in) 
                                                      & (IData)(vlSelfRef.__Vfunc_mubi4_and__743__b_in)) 
                                                     >> 2U))) 
                                              << 2U));
                                    vlSelfRef.__Vfunc_mubi4_and__743__Vfuncout 
                                        = vlSelfRef.__Vfunc_mubi4_and__743__out;
                                    vlSelfRef.__Vfunc_mubi4_and_hi__742__Vfuncout 
                                        = vlSelfRef.__Vfunc_mubi4_and__743__Vfuncout;
                                }(), (IData)(vlSelfRef.__Vfunc_mubi4_and_hi__742__Vfuncout))))))));
    __Vfunc_info_cfg_qual__729__Vfuncout = __Vfunc_info_cfg_qual__729__out_cfg;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_region_cfg__DOT____Vcellout__gen_info_priv_bank__BRA__0__KET____DOT__gen_info_priv_type__BRA__0__KET____DOT__u_info_cfg__cfgs_o[0U] 
        = ((0x0fffffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_region_cfg__DOT____Vcellout__gen_info_priv_bank__BRA__0__KET____DOT__gen_info_priv_type__BRA__0__KET____DOT__u_info_cfg__cfgs_o[0U]) 
           | (__Vfunc_info_cfg_qual__729__Vfuncout 
              << 0x0000001cU));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_region_cfg__DOT____Vcellout__gen_info_priv_bank__BRA__0__KET____DOT__gen_info_priv_type__BRA__0__KET____DOT__u_info_cfg__cfgs_o[1U] 
        = ((0xff000000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_region_cfg__DOT____Vcellout__gen_info_priv_bank__BRA__0__KET____DOT__gen_info_priv_type__BRA__0__KET____DOT__u_info_cfg__cfgs_o[1U]) 
           | (__Vfunc_info_cfg_qual__729__Vfuncout 
              >> 4U));
    __Vfunc_info_cfg_qual__759__qual_cfg = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_region_cfg__DOT__gen_info_priv_bank__BRA__0__KET____DOT__gen_info_priv_type__BRA__0__KET____DOT__u_info_cfg__DOT__isolate_qual;
    __Vfunc_info_cfg_qual__759__in_cfg = (0x0fffffffU 
                                          & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_region_cfg__DOT____Vcellinp__gen_info_priv_bank__BRA__0__KET____DOT__gen_info_priv_type__BRA__0__KET____DOT__u_info_cfg__cfgs_i[3U] 
                                              << 0x0000000cU) 
                                             | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_region_cfg__DOT____Vcellinp__gen_info_priv_bank__BRA__0__KET____DOT__gen_info_priv_type__BRA__0__KET____DOT__u_info_cfg__cfgs_i[2U] 
                                                >> 0x00000014U)));
    __Vfunc_info_cfg_qual__759__out_cfg = ((([&]() {
                    vlSelfRef.__Vfunc_mubi4_and_hi__760__b 
                        = (0x0000000fU & (__Vfunc_info_cfg_qual__759__qual_cfg 
                                          >> 0x00000018U));
                    vlSelfRef.__Vfunc_mubi4_and_hi__760__a 
                        = (0x0000000fU & (__Vfunc_info_cfg_qual__759__in_cfg 
                                          >> 0x00000018U));
                    vlSelfRef.__Vfunc_mubi4_and__761__b 
                        = vlSelfRef.__Vfunc_mubi4_and_hi__760__b;
                    vlSelfRef.__Vfunc_mubi4_and__761__a 
                        = vlSelfRef.__Vfunc_mubi4_and_hi__760__a;
                    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
                    vlSelf->__Vfunc_mubi4_and__761__out = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17300852510535876857ull);
                    vlSelfRef.__Vfunc_mubi4_and__761__a_in 
                        = vlSelfRef.__Vfunc_mubi4_and__761__a;
                    vlSelfRef.__Vfunc_mubi4_and__761__b_in 
                        = vlSelfRef.__Vfunc_mubi4_and__761__b;
                    vlSelfRef.__Vfunc_mubi4_and__761__out 
                        = ((0x0cU & (IData)(vlSelfRef.__Vfunc_mubi4_and__761__out)) 
                           | ((2U & ((IData)(vlSelfRef.__Vfunc_mubi4_and__761__a_in) 
                                     & (IData)(vlSelfRef.__Vfunc_mubi4_and__761__b_in))) 
                              | (1U & ((IData)(vlSelfRef.__Vfunc_mubi4_and__761__a_in) 
                                       | (IData)(vlSelfRef.__Vfunc_mubi4_and__761__b_in)))));
                    vlSelfRef.__Vfunc_mubi4_and__761__out 
                        = ((3U & (IData)(vlSelfRef.__Vfunc_mubi4_and__761__out)) 
                           | (((2U & (((IData)(vlSelfRef.__Vfunc_mubi4_and__761__a_in) 
                                       | (IData)(vlSelfRef.__Vfunc_mubi4_and__761__b_in)) 
                                      >> 2U)) | (1U 
                                                 & (((IData)(vlSelfRef.__Vfunc_mubi4_and__761__a_in) 
                                                     & (IData)(vlSelfRef.__Vfunc_mubi4_and__761__b_in)) 
                                                    >> 2U))) 
                              << 2U));
                    vlSelfRef.__Vfunc_mubi4_and__761__Vfuncout 
                        = vlSelfRef.__Vfunc_mubi4_and__761__out;
                    vlSelfRef.__Vfunc_mubi4_and_hi__760__Vfuncout 
                        = vlSelfRef.__Vfunc_mubi4_and__761__Vfuncout;
                }(), (IData)(vlSelfRef.__Vfunc_mubi4_and_hi__760__Vfuncout)) 
                                            << 0x00000018U) 
                                           | ((([&]() {
                        vlSelfRef.__Vfunc_mubi4_and_hi__762__b 
                            = (0x0000000fU & (__Vfunc_info_cfg_qual__759__qual_cfg 
                                              >> 0x00000014U));
                        vlSelfRef.__Vfunc_mubi4_and_hi__762__a 
                            = (0x0000000fU & (__Vfunc_info_cfg_qual__759__in_cfg 
                                              >> 0x00000014U));
                        vlSelfRef.__Vfunc_mubi4_and__763__b 
                            = vlSelfRef.__Vfunc_mubi4_and_hi__762__b;
                        vlSelfRef.__Vfunc_mubi4_and__763__a 
                            = vlSelfRef.__Vfunc_mubi4_and_hi__762__a;
                        const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
                        vlSelf->__Vfunc_mubi4_and__763__out = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4805141936831716195ull);
                        vlSelfRef.__Vfunc_mubi4_and__763__a_in 
                            = vlSelfRef.__Vfunc_mubi4_and__763__a;
                        vlSelfRef.__Vfunc_mubi4_and__763__b_in 
                            = vlSelfRef.__Vfunc_mubi4_and__763__b;
                        vlSelfRef.__Vfunc_mubi4_and__763__out 
                            = ((0x0cU & (IData)(vlSelfRef.__Vfunc_mubi4_and__763__out)) 
                               | ((2U & ((IData)(vlSelfRef.__Vfunc_mubi4_and__763__a_in) 
                                         & (IData)(vlSelfRef.__Vfunc_mubi4_and__763__b_in))) 
                                  | (1U & ((IData)(vlSelfRef.__Vfunc_mubi4_and__763__a_in) 
                                           | (IData)(vlSelfRef.__Vfunc_mubi4_and__763__b_in)))));
                        vlSelfRef.__Vfunc_mubi4_and__763__out 
                            = ((3U & (IData)(vlSelfRef.__Vfunc_mubi4_and__763__out)) 
                               | (((2U & (((IData)(vlSelfRef.__Vfunc_mubi4_and__763__a_in) 
                                           | (IData)(vlSelfRef.__Vfunc_mubi4_and__763__b_in)) 
                                          >> 2U)) | 
                                   (1U & (((IData)(vlSelfRef.__Vfunc_mubi4_and__763__a_in) 
                                           & (IData)(vlSelfRef.__Vfunc_mubi4_and__763__b_in)) 
                                          >> 2U))) 
                                  << 2U));
                        vlSelfRef.__Vfunc_mubi4_and__763__Vfuncout 
                            = vlSelfRef.__Vfunc_mubi4_and__763__out;
                        vlSelfRef.__Vfunc_mubi4_and_hi__762__Vfuncout 
                            = vlSelfRef.__Vfunc_mubi4_and__763__Vfuncout;
                    }(), (IData)(vlSelfRef.__Vfunc_mubi4_and_hi__762__Vfuncout)) 
                                               << 0x00000014U) 
                                              | ((([&]() {
                            vlSelfRef.__Vfunc_mubi4_and_hi__764__b 
                                = (0x0000000fU & (__Vfunc_info_cfg_qual__759__qual_cfg 
                                                  >> 0x00000010U));
                            vlSelfRef.__Vfunc_mubi4_and_hi__764__a 
                                = (0x0000000fU & (__Vfunc_info_cfg_qual__759__in_cfg 
                                                  >> 0x00000010U));
                            vlSelfRef.__Vfunc_mubi4_and__765__b 
                                = vlSelfRef.__Vfunc_mubi4_and_hi__764__b;
                            vlSelfRef.__Vfunc_mubi4_and__765__a 
                                = vlSelfRef.__Vfunc_mubi4_and_hi__764__a;
                            const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
                            vlSelf->__Vfunc_mubi4_and__765__out = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5757553777122972879ull);
                            vlSelfRef.__Vfunc_mubi4_and__765__a_in 
                                = vlSelfRef.__Vfunc_mubi4_and__765__a;
                            vlSelfRef.__Vfunc_mubi4_and__765__b_in 
                                = vlSelfRef.__Vfunc_mubi4_and__765__b;
                            vlSelfRef.__Vfunc_mubi4_and__765__out 
                                = ((0x0cU & (IData)(vlSelfRef.__Vfunc_mubi4_and__765__out)) 
                                   | ((2U & ((IData)(vlSelfRef.__Vfunc_mubi4_and__765__a_in) 
                                             & (IData)(vlSelfRef.__Vfunc_mubi4_and__765__b_in))) 
                                      | (1U & ((IData)(vlSelfRef.__Vfunc_mubi4_and__765__a_in) 
                                               | (IData)(vlSelfRef.__Vfunc_mubi4_and__765__b_in)))));
                            vlSelfRef.__Vfunc_mubi4_and__765__out 
                                = ((3U & (IData)(vlSelfRef.__Vfunc_mubi4_and__765__out)) 
                                   | (((2U & (((IData)(vlSelfRef.__Vfunc_mubi4_and__765__a_in) 
                                               | (IData)(vlSelfRef.__Vfunc_mubi4_and__765__b_in)) 
                                              >> 2U)) 
                                       | (1U & (((IData)(vlSelfRef.__Vfunc_mubi4_and__765__a_in) 
                                                 & (IData)(vlSelfRef.__Vfunc_mubi4_and__765__b_in)) 
                                                >> 2U))) 
                                      << 2U));
                            vlSelfRef.__Vfunc_mubi4_and__765__Vfuncout 
                                = vlSelfRef.__Vfunc_mubi4_and__765__out;
                            vlSelfRef.__Vfunc_mubi4_and_hi__764__Vfuncout 
                                = vlSelfRef.__Vfunc_mubi4_and__765__Vfuncout;
                        }(), (IData)(vlSelfRef.__Vfunc_mubi4_and_hi__764__Vfuncout)) 
                                                  << 0x00000010U) 
                                                 | ((([&]() {
                                vlSelfRef.__Vfunc_mubi4_and_hi__766__b 
                                    = (0x0000000fU 
                                       & (__Vfunc_info_cfg_qual__759__qual_cfg 
                                          >> 0x0000000cU));
                                vlSelfRef.__Vfunc_mubi4_and_hi__766__a 
                                    = (0x0000000fU 
                                       & (__Vfunc_info_cfg_qual__759__in_cfg 
                                          >> 0x0000000cU));
                                vlSelfRef.__Vfunc_mubi4_and__767__b 
                                    = vlSelfRef.__Vfunc_mubi4_and_hi__766__b;
                                vlSelfRef.__Vfunc_mubi4_and__767__a 
                                    = vlSelfRef.__Vfunc_mubi4_and_hi__766__a;
                                const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
                                vlSelf->__Vfunc_mubi4_and__767__out = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6889392703524730591ull);
                                vlSelfRef.__Vfunc_mubi4_and__767__a_in 
                                    = vlSelfRef.__Vfunc_mubi4_and__767__a;
                                vlSelfRef.__Vfunc_mubi4_and__767__b_in 
                                    = vlSelfRef.__Vfunc_mubi4_and__767__b;
                                vlSelfRef.__Vfunc_mubi4_and__767__out 
                                    = ((0x0cU & (IData)(vlSelfRef.__Vfunc_mubi4_and__767__out)) 
                                       | ((2U & ((IData)(vlSelfRef.__Vfunc_mubi4_and__767__a_in) 
                                                 & (IData)(vlSelfRef.__Vfunc_mubi4_and__767__b_in))) 
                                          | (1U & ((IData)(vlSelfRef.__Vfunc_mubi4_and__767__a_in) 
                                                   | (IData)(vlSelfRef.__Vfunc_mubi4_and__767__b_in)))));
                                vlSelfRef.__Vfunc_mubi4_and__767__out 
                                    = ((3U & (IData)(vlSelfRef.__Vfunc_mubi4_and__767__out)) 
                                       | (((2U & (((IData)(vlSelfRef.__Vfunc_mubi4_and__767__a_in) 
                                                   | (IData)(vlSelfRef.__Vfunc_mubi4_and__767__b_in)) 
                                                  >> 2U)) 
                                           | (1U & 
                                              (((IData)(vlSelfRef.__Vfunc_mubi4_and__767__a_in) 
                                                & (IData)(vlSelfRef.__Vfunc_mubi4_and__767__b_in)) 
                                               >> 2U))) 
                                          << 2U));
                                vlSelfRef.__Vfunc_mubi4_and__767__Vfuncout 
                                    = vlSelfRef.__Vfunc_mubi4_and__767__out;
                                vlSelfRef.__Vfunc_mubi4_and_hi__766__Vfuncout 
                                    = vlSelfRef.__Vfunc_mubi4_and__767__Vfuncout;
                            }(), (IData)(vlSelfRef.__Vfunc_mubi4_and_hi__766__Vfuncout)) 
                                                     << 0x0000000cU) 
                                                    | ((([&]() {
                                    vlSelfRef.__Vfunc_mubi4_and_hi__768__b 
                                        = (0x0000000fU 
                                           & (__Vfunc_info_cfg_qual__759__qual_cfg 
                                              >> 8U));
                                    vlSelfRef.__Vfunc_mubi4_and_hi__768__a 
                                        = (0x0000000fU 
                                           & (__Vfunc_info_cfg_qual__759__in_cfg 
                                              >> 8U));
                                    vlSelfRef.__Vfunc_mubi4_and__769__b 
                                        = vlSelfRef.__Vfunc_mubi4_and_hi__768__b;
                                    vlSelfRef.__Vfunc_mubi4_and__769__a 
                                        = vlSelfRef.__Vfunc_mubi4_and_hi__768__a;
                                    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
                                    vlSelf->__Vfunc_mubi4_and__769__out = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2590459528745571654ull);
                                    vlSelfRef.__Vfunc_mubi4_and__769__a_in 
                                        = vlSelfRef.__Vfunc_mubi4_and__769__a;
                                    vlSelfRef.__Vfunc_mubi4_and__769__b_in 
                                        = vlSelfRef.__Vfunc_mubi4_and__769__b;
                                    vlSelfRef.__Vfunc_mubi4_and__769__out 
                                        = ((0x0cU & (IData)(vlSelfRef.__Vfunc_mubi4_and__769__out)) 
                                           | ((2U & 
                                               ((IData)(vlSelfRef.__Vfunc_mubi4_and__769__a_in) 
                                                & (IData)(vlSelfRef.__Vfunc_mubi4_and__769__b_in))) 
                                              | (1U 
                                                 & ((IData)(vlSelfRef.__Vfunc_mubi4_and__769__a_in) 
                                                    | (IData)(vlSelfRef.__Vfunc_mubi4_and__769__b_in)))));
                                    vlSelfRef.__Vfunc_mubi4_and__769__out 
                                        = ((3U & (IData)(vlSelfRef.__Vfunc_mubi4_and__769__out)) 
                                           | (((2U 
                                                & (((IData)(vlSelfRef.__Vfunc_mubi4_and__769__a_in) 
                                                    | (IData)(vlSelfRef.__Vfunc_mubi4_and__769__b_in)) 
                                                   >> 2U)) 
                                               | (1U 
                                                  & (((IData)(vlSelfRef.__Vfunc_mubi4_and__769__a_in) 
                                                      & (IData)(vlSelfRef.__Vfunc_mubi4_and__769__b_in)) 
                                                     >> 2U))) 
                                              << 2U));
                                    vlSelfRef.__Vfunc_mubi4_and__769__Vfuncout 
                                        = vlSelfRef.__Vfunc_mubi4_and__769__out;
                                    vlSelfRef.__Vfunc_mubi4_and_hi__768__Vfuncout 
                                        = vlSelfRef.__Vfunc_mubi4_and__769__Vfuncout;
                                }(), (IData)(vlSelfRef.__Vfunc_mubi4_and_hi__768__Vfuncout)) 
                                                        << 8U) 
                                                       | ((([&]() {
                                        vlSelfRef.__Vfunc_mubi4_and_hi__770__b 
                                            = (0x0000000fU 
                                               & (__Vfunc_info_cfg_qual__759__qual_cfg 
                                                  >> 4U));
                                        vlSelfRef.__Vfunc_mubi4_and_hi__770__a 
                                            = (0x0000000fU 
                                               & (__Vfunc_info_cfg_qual__759__in_cfg 
                                                  >> 4U));
                                        vlSelfRef.__Vfunc_mubi4_and__771__b 
                                            = vlSelfRef.__Vfunc_mubi4_and_hi__770__b;
                                        vlSelfRef.__Vfunc_mubi4_and__771__a 
                                            = vlSelfRef.__Vfunc_mubi4_and_hi__770__a;
                                        const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
                                        vlSelf->__Vfunc_mubi4_and__771__out = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13009107059730754925ull);
                                        vlSelfRef.__Vfunc_mubi4_and__771__a_in 
                                            = vlSelfRef.__Vfunc_mubi4_and__771__a;
                                        vlSelfRef.__Vfunc_mubi4_and__771__b_in 
                                            = vlSelfRef.__Vfunc_mubi4_and__771__b;
                                        vlSelfRef.__Vfunc_mubi4_and__771__out 
                                            = ((0x0cU 
                                                & (IData)(vlSelfRef.__Vfunc_mubi4_and__771__out)) 
                                               | ((2U 
                                                   & ((IData)(vlSelfRef.__Vfunc_mubi4_and__771__a_in) 
                                                      & (IData)(vlSelfRef.__Vfunc_mubi4_and__771__b_in))) 
                                                  | (1U 
                                                     & ((IData)(vlSelfRef.__Vfunc_mubi4_and__771__a_in) 
                                                        | (IData)(vlSelfRef.__Vfunc_mubi4_and__771__b_in)))));
                                        vlSelfRef.__Vfunc_mubi4_and__771__out 
                                            = ((3U 
                                                & (IData)(vlSelfRef.__Vfunc_mubi4_and__771__out)) 
                                               | (((2U 
                                                    & (((IData)(vlSelfRef.__Vfunc_mubi4_and__771__a_in) 
                                                        | (IData)(vlSelfRef.__Vfunc_mubi4_and__771__b_in)) 
                                                       >> 2U)) 
                                                   | (1U 
                                                      & (((IData)(vlSelfRef.__Vfunc_mubi4_and__771__a_in) 
                                                          & (IData)(vlSelfRef.__Vfunc_mubi4_and__771__b_in)) 
                                                         >> 2U))) 
                                                  << 2U));
                                        vlSelfRef.__Vfunc_mubi4_and__771__Vfuncout 
                                            = vlSelfRef.__Vfunc_mubi4_and__771__out;
                                        vlSelfRef.__Vfunc_mubi4_and_hi__770__Vfuncout 
                                            = vlSelfRef.__Vfunc_mubi4_and__771__Vfuncout;
                                    }(), (IData)(vlSelfRef.__Vfunc_mubi4_and_hi__770__Vfuncout)) 
                                                           << 4U) 
                                                          | ([&]() {
                                    vlSelfRef.__Vfunc_mubi4_and_hi__772__b 
                                        = (0x0000000fU 
                                           & __Vfunc_info_cfg_qual__759__qual_cfg);
                                    vlSelfRef.__Vfunc_mubi4_and_hi__772__a 
                                        = (0x0000000fU 
                                           & __Vfunc_info_cfg_qual__759__in_cfg);
                                    vlSelfRef.__Vfunc_mubi4_and__773__b 
                                        = vlSelfRef.__Vfunc_mubi4_and_hi__772__b;
                                    vlSelfRef.__Vfunc_mubi4_and__773__a 
                                        = vlSelfRef.__Vfunc_mubi4_and_hi__772__a;
                                    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
                                    vlSelf->__Vfunc_mubi4_and__773__out = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7053329393250201904ull);
                                    vlSelfRef.__Vfunc_mubi4_and__773__a_in 
                                        = vlSelfRef.__Vfunc_mubi4_and__773__a;
                                    vlSelfRef.__Vfunc_mubi4_and__773__b_in 
                                        = vlSelfRef.__Vfunc_mubi4_and__773__b;
                                    vlSelfRef.__Vfunc_mubi4_and__773__out 
                                        = ((0x0cU & (IData)(vlSelfRef.__Vfunc_mubi4_and__773__out)) 
                                           | ((2U & 
                                               ((IData)(vlSelfRef.__Vfunc_mubi4_and__773__a_in) 
                                                & (IData)(vlSelfRef.__Vfunc_mubi4_and__773__b_in))) 
                                              | (1U 
                                                 & ((IData)(vlSelfRef.__Vfunc_mubi4_and__773__a_in) 
                                                    | (IData)(vlSelfRef.__Vfunc_mubi4_and__773__b_in)))));
                                    vlSelfRef.__Vfunc_mubi4_and__773__out 
                                        = ((3U & (IData)(vlSelfRef.__Vfunc_mubi4_and__773__out)) 
                                           | (((2U 
                                                & (((IData)(vlSelfRef.__Vfunc_mubi4_and__773__a_in) 
                                                    | (IData)(vlSelfRef.__Vfunc_mubi4_and__773__b_in)) 
                                                   >> 2U)) 
                                               | (1U 
                                                  & (((IData)(vlSelfRef.__Vfunc_mubi4_and__773__a_in) 
                                                      & (IData)(vlSelfRef.__Vfunc_mubi4_and__773__b_in)) 
                                                     >> 2U))) 
                                              << 2U));
                                    vlSelfRef.__Vfunc_mubi4_and__773__Vfuncout 
                                        = vlSelfRef.__Vfunc_mubi4_and__773__out;
                                    vlSelfRef.__Vfunc_mubi4_and_hi__772__Vfuncout 
                                        = vlSelfRef.__Vfunc_mubi4_and__773__Vfuncout;
                                }(), (IData)(vlSelfRef.__Vfunc_mubi4_and_hi__772__Vfuncout))))))));
    __Vfunc_info_cfg_qual__759__Vfuncout = __Vfunc_info_cfg_qual__759__out_cfg;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_region_cfg__DOT____Vcellout__gen_info_priv_bank__BRA__0__KET____DOT__gen_info_priv_type__BRA__0__KET____DOT__u_info_cfg__cfgs_o[2U] 
        = ((0x000fffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_region_cfg__DOT____Vcellout__gen_info_priv_bank__BRA__0__KET____DOT__gen_info_priv_type__BRA__0__KET____DOT__u_info_cfg__cfgs_o[2U]) 
           | (__Vfunc_info_cfg_qual__759__Vfuncout 
              << 0x00000014U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_region_cfg__DOT____Vcellout__gen_info_priv_bank__BRA__0__KET____DOT__gen_info_priv_type__BRA__0__KET____DOT__u_info_cfg__cfgs_o[3U] 
        = ((0xffff0000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_region_cfg__DOT____Vcellout__gen_info_priv_bank__BRA__0__KET____DOT__gen_info_priv_type__BRA__0__KET____DOT__u_info_cfg__cfgs_o[3U]) 
           | (__Vfunc_info_cfg_qual__759__Vfuncout 
              >> 0x0000000cU));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_block_encrypt__DOT__u_aes_cipher_core__DOT__u_aes_add_rk_sel_buf_chk__DOT__gen_sec_buf__DOT__u_prim_buf_sel_i__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_block_encrypt__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__add_rk_sel_o) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_block_encrypt__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__add_rk_sel_o) 
              | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_csrng__DOT__u_csrng_core__DOT__u_csrng_block_encrypt__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__add_rk_sel_o)));
    vlSelfRef.__VdfgRegularize_he50b618e_0_1028[0U] 
        = vlSelfRef.__VdfgRegularize_he50b618e_0_1027[0U];
    vlSelfRef.__VdfgRegularize_he50b618e_0_1028[1U] 
        = vlSelfRef.__VdfgRegularize_he50b618e_0_1027[1U];
    vlSelfRef.__VdfgRegularize_he50b618e_0_1028[2U] 
        = vlSelfRef.__VdfgRegularize_he50b618e_0_1027[2U];
    vlSelfRef.__VdfgRegularize_he50b618e_0_1028[3U] 
        = vlSelfRef.__VdfgRegularize_he50b618e_0_1027[3U];
    vlSelfRef.__VdfgRegularize_he50b618e_0_1028[4U] 
        = vlSelfRef.__VdfgRegularize_he50b618e_0_1027[4U];
    vlSelfRef.__VdfgRegularize_he50b618e_0_1028[5U] 
        = vlSelfRef.__VdfgRegularize_he50b618e_0_1027[5U];
    vlSelfRef.__VdfgRegularize_he50b618e_0_1028[6U] 
        = vlSelfRef.__VdfgRegularize_he50b618e_0_1027[6U];
    vlSelfRef.__VdfgRegularize_he50b618e_0_1028[7U] 
        = vlSelfRef.__VdfgRegularize_he50b618e_0_1027[7U];
    vlSelfRef.__VdfgRegularize_he50b618e_0_1028[8U] 
        = vlSelfRef.__VdfgRegularize_he50b618e_0_1027[8U];
    vlSelfRef.__VdfgRegularize_he50b618e_0_1028[9U] 
        = vlSelfRef.__VdfgRegularize_he50b618e_0_1027[9U];
    vlSelfRef.__VdfgRegularize_he50b618e_0_1028[0x0000000aU] 
        = vlSelfRef.__VdfgRegularize_he50b618e_0_1027[0x0000000aU];
    vlSelfRef.__VdfgRegularize_he50b618e_0_1028[0x0000000bU] 
        = vlSelfRef.__VdfgRegularize_he50b618e_0_1027[0x0000000bU];
    vlSelfRef.__VdfgRegularize_he50b618e_0_1028[0x0000000cU] 
        = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT____Vcellout__u_attest_sw_binding_0__q 
            << 0x0000000eU) | vlSelfRef.__VdfgRegularize_he50b618e_0_1027[0x0000000cU]);
    vlSelfRef.__VdfgRegularize_he50b618e_0_1028[0x0000000dU] 
        = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT____Vcellout__u_attest_sw_binding_0__q 
            >> 0x00000012U) | ((IData)((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT____Vcellout__u_attest_sw_binding_2__q)) 
                                         << 0x00000020U) 
                                        | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT____Vcellout__u_attest_sw_binding_1__q)))) 
                               << 0x0000000eU));
    vlSelfRef.__VdfgRegularize_he50b618e_0_1028[0x0000000eU] 
        = (((IData)((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT____Vcellout__u_attest_sw_binding_2__q)) 
                      << 0x00000020U) | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT____Vcellout__u_attest_sw_binding_1__q)))) 
            >> 0x00000012U) | ((IData)(((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT____Vcellout__u_attest_sw_binding_2__q)) 
                                          << 0x00000020U) 
                                         | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT____Vcellout__u_attest_sw_binding_1__q))) 
                                        >> 0x00000020U)) 
                               << 0x0000000eU));
    vlSelfRef.__VdfgRegularize_he50b618e_0_1028[0x0000000fU] 
        = ((0xffffc000U & vlSelfRef.__VdfgRegularize_he50b618e_0_1028[0x0000000fU]) 
           | ((IData)(((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT____Vcellout__u_attest_sw_binding_2__q)) 
                         << 0x00000020U) | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT____Vcellout__u_attest_sw_binding_1__q))) 
                       >> 0x00000020U)) >> 0x00000012U));
    vlSelfRef.__VdfgRegularize_he50b618e_0_1028[0x0000000fU] 
        = ((0x00003fffU & vlSelfRef.__VdfgRegularize_he50b618e_0_1028[0x0000000fU]) 
           | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT____Vcellout__u_attest_sw_binding_3__q 
              << 0x0000000eU));
    vlSelfRef.__VdfgRegularize_he50b618e_0_1028[0x00000010U] 
        = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT____Vcellout__u_attest_sw_binding_3__q 
            >> 0x00000012U) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT____Vcellout__u_attest_sw_binding_4__q 
                               << 0x0000000eU));
    vlSelfRef.__VdfgRegularize_he50b618e_0_1028[0x00000011U] 
        = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT____Vcellout__u_attest_sw_binding_4__q 
            >> 0x00000012U) | ((IData)((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT____Vcellout__u_attest_sw_binding_6__q)) 
                                         << 0x00000020U) 
                                        | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT____Vcellout__u_attest_sw_binding_5__q)))) 
                               << 0x0000000eU));
    vlSelfRef.__VdfgRegularize_he50b618e_0_1028[0x00000012U] 
        = (((IData)((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT____Vcellout__u_attest_sw_binding_6__q)) 
                      << 0x00000020U) | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT____Vcellout__u_attest_sw_binding_5__q)))) 
            >> 0x00000012U) | ((IData)(((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT____Vcellout__u_attest_sw_binding_6__q)) 
                                          << 0x00000020U) 
                                         | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT____Vcellout__u_attest_sw_binding_5__q))) 
                                        >> 0x00000020U)) 
                               << 0x0000000eU));
    vlSelfRef.__VdfgRegularize_he50b618e_0_1028[0x00000013U] 
        = ((0xffffc000U & vlSelfRef.__VdfgRegularize_he50b618e_0_1028[0x00000013U]) 
           | ((IData)(((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT____Vcellout__u_attest_sw_binding_6__q)) 
                         << 0x00000020U) | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT____Vcellout__u_attest_sw_binding_5__q))) 
                       >> 0x00000020U)) >> 0x00000012U));
    vlSelfRef.__VdfgRegularize_he50b618e_0_1028[0x00000013U] 
        = ((0x00003fffU & vlSelfRef.__VdfgRegularize_he50b618e_0_1028[0x00000013U]) 
           | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT____Vcellout__u_attest_sw_binding_7__q 
              << 0x0000000eU));
    vlSelfRef.__VdfgRegularize_he50b618e_0_1028[0x00000014U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT____Vcellout__u_attest_sw_binding_7__q 
           >> 0x00000012U);
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__gen_fsm_scramble_enabled__DOT__u_checker_fsm__DOT__u_compare__DOT__matches_d 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__gen_fsm_scramble_enabled__DOT__u_checker_fsm__DOT__u_compare__DOT__matches_q) 
           & ((((0U == (0x0000001fU & ((IData)(0x00000100U) 
                                       + (0x000000ffU 
                                          & ((0x1fU 
                                              | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__gen_fsm_scramble_enabled__DOT__u_checker_fsm__DOT__u_compare__DOT__u_prim_count_addr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                                                 << 5U)) 
                                             - (IData)(0x1fU))))))
                 ? 0U : (vlSelfRef.__VdfgRegularize_he50b618e_0_1036[
                         (((IData)(0x0000011fU) + (0x000000ffU 
                                                   & ((0x1fU 
                                                       | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__gen_fsm_scramble_enabled__DOT__u_checker_fsm__DOT__u_compare__DOT__u_prim_count_addr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                                                          << 5U)) 
                                                      - (IData)(0x1fU)))) 
                          >> 5U)] << ((IData)(0x00000020U) 
                                      - (0x0000001fU 
                                         & ((IData)(0x00000100U) 
                                            + (0x000000ffU 
                                               & ((0x1fU 
                                                   | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__gen_fsm_scramble_enabled__DOT__u_checker_fsm__DOT__u_compare__DOT__u_prim_count_addr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                                                      << 5U)) 
                                                  - (IData)(0x1fU)))))))) 
               | (vlSelfRef.__VdfgRegularize_he50b618e_0_1036[
                  (((IData)(0x00000100U) + (0x000000ffU 
                                            & ((0x1fU 
                                                | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__gen_fsm_scramble_enabled__DOT__u_checker_fsm__DOT__u_compare__DOT__u_prim_count_addr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                                                   << 5U)) 
                                               - (IData)(0x1fU)))) 
                   >> 5U)] >> (0x0000001fU & ((IData)(0x00000100U) 
                                              + (0x000000ffU 
                                                 & ((0x1fU 
                                                     | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__gen_fsm_scramble_enabled__DOT__u_checker_fsm__DOT__u_compare__DOT__u_prim_count_addr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                                                        << 5U)) 
                                                    - (IData)(0x1fU))))))) 
              == (((0U == (0x0000001fU & ((0x1fU | 
                                           ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__gen_fsm_scramble_enabled__DOT__u_checker_fsm__DOT__u_compare__DOT__u_prim_count_addr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                                            << 5U)) 
                                          - (IData)(0x1fU))))
                    ? 0U : (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__exp_digest_q[
                            (((IData)(0x0000001fU) 
                              + (0x000000ffU & ((0x1fU 
                                                 | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__gen_fsm_scramble_enabled__DOT__u_checker_fsm__DOT__u_compare__DOT__u_prim_count_addr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                                                    << 5U)) 
                                                - (IData)(0x1fU)))) 
                             >> 5U)] << ((IData)(0x00000020U) 
                                         - (0x0000001fU 
                                            & ((0x1fU 
                                                | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__gen_fsm_scramble_enabled__DOT__u_checker_fsm__DOT__u_compare__DOT__u_prim_count_addr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                                                   << 5U)) 
                                               - (IData)(0x1fU)))))) 
                  | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__exp_digest_q[
                     (7U & (((0x1fU | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__gen_fsm_scramble_enabled__DOT__u_checker_fsm__DOT__u_compare__DOT__u_prim_count_addr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                                       << 5U)) - (IData)(0x1fU)) 
                            >> 5U))] >> (0x0000001fU 
                                         & ((0x1fU 
                                             | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__gen_fsm_scramble_enabled__DOT__u_checker_fsm__DOT__u_compare__DOT__u_prim_count_addr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                                                << 5U)) 
                                            - (IData)(0x1fU)))))));
    __Vtemp_924[0U] = vlSelfRef.__VdfgRegularize_he50b618e_0_1036[8U];
    __Vtemp_924[1U] = vlSelfRef.__VdfgRegularize_he50b618e_0_1036[9U];
    __Vtemp_924[2U] = vlSelfRef.__VdfgRegularize_he50b618e_0_1036[0x0000000aU];
    __Vtemp_924[3U] = vlSelfRef.__VdfgRegularize_he50b618e_0_1036[0x0000000bU];
    __Vtemp_924[4U] = vlSelfRef.__VdfgRegularize_he50b618e_0_1036[0x0000000cU];
    __Vtemp_924[5U] = vlSelfRef.__VdfgRegularize_he50b618e_0_1036[0x0000000dU];
    __Vtemp_924[6U] = vlSelfRef.__VdfgRegularize_he50b618e_0_1036[0x0000000eU];
    __Vtemp_924[7U] = vlSelfRef.__VdfgRegularize_he50b618e_0_1036[0x0000000fU];
    VL_CONCAT_WWI(257,256,1, vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__rom_ctrl_keymgr_data, __Vtemp_924, 
                  ([&]() {
                vlSelfRef.__Vfunc_mubi4_test_true_loose__3321__val 
                    = (0x0000000fU & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__gen_fsm_scramble_enabled__DOT__u_checker_fsm__DOT__u_state_regs__DOT__state_raw));
                vlSelfRef.__Vfunc_mubi4_test_true_loose__3321__Vfuncout 
                    = (9U != (IData)(vlSelfRef.__Vfunc_mubi4_test_true_loose__3321__val));
            }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_loose__3321__Vfuncout)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__es_data_reg_rd_en 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__es_enable_fo__BRA__17__KET__) 
           & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__efuse_es_sw_reg_en) 
              & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__entropy_data_reg_en_pfe)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_enable_delay__DOT__fifo_timer_d 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__es_enable_fo__BRA__0__KET__)
            ? 0x0000000fU : (0x0000000fU & VL_SHIFTL_III(4,4,32, (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_enable_delay__DOT__fifo_timer_q), 1U)));
    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_usbdev_aon_wake__DOT__wake_detect_active_q) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_usbdev_aon_wake__DOT__wake_detect_active_d = 1U;
        if (((3U == (3U & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_wake_control_cdc__DOT__dst_we_o))))) 
             & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_wake_control_cdc__DOT__src_q) 
                >> 1U))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_usbdev_aon_wake__DOT__wake_detect_active_d = 0U;
        }
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_usbdev_aon_wake__DOT__wake_detect_active_d = 0U;
        if (((3U == (3U & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_wake_control_cdc__DOT__dst_we_o))))) 
             & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_wake_control_cdc__DOT__src_q))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_usbdev_aon_wake__DOT__wake_detect_active_d = 1U;
        }
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_upload__DOT__sck_sram_wdata[2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_upload__DOT____Vcellout__u_payload_buffer__sram_wdata_o;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_upload__DOT__u_arbiter__DOT__req_packed[2U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_upload__DOT____Vcellout__u_payload_buffer__sram_wmask_o;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_upload__DOT__u_arbiter__DOT__req_packed[2U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_upload__DOT____Vcellout__u_payload_buffer__sram_wdata_o;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_upload__DOT__u_arbiter__DOT__req_packed[2U][2U] 
        = (0x000007ffU & (0x00000400U | (0x000003ffU 
                                         & ((IData)(0x0380U) 
                                            + (0x0000003fU 
                                               & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_upload__DOT__u_payload_buffer__DOT__fifoptr) 
                                                  >> 2U))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_upload__DOT__sck_sram_wdata[1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_upload__DOT__u_addrfifo__DOT__wdata_i;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_upload__DOT__u_arbiter__DOT__req_packed[1U][0U] = 0xffffffffU;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_upload__DOT__u_arbiter__DOT__req_packed[1U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_upload__DOT__u_addrfifo__DOT__wdata_i;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_upload__DOT__u_arbiter__DOT__req_packed[1U][2U] 
        = (0x000007ffU & (0x00000400U | (0x000003ffU 
                                         & ((IData)(0x03d0U) 
                                            + (0x0000000fU 
                                               & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_upload__DOT__u_addrfifo__DOT__w_wptr_q))))));
    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__usbdev_impl__DOT__current_setup) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__usbdev_impl__DOT__av_rdata 
            = (0x0000001fU & ((0x13U >= (0x0000001fU 
                                         & ((IData)(5U) 
                                            * (3U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__usbdev_avsetupfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)))))
                               ? (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__usbdev_avsetupfifo__DOT__gen_normal_fifo__DOT__storage 
                                  >> (0x0000001fU & 
                                      ((IData)(5U) 
                                       * (3U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__usbdev_avsetupfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)))))
                               : 0U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__usbdev_impl__DOT__rx_wready 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__usbdev_rxfifo__DOT__wready_o;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__usbdev_impl__DOT__av_rvalid 
            = (1U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__usbdev_avsetupfifo__DOT__gen_normal_fifo__DOT__fifo_empty)));
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__usbdev_impl__DOT__av_rdata 
            = (0x0000001fU & ((0x27U >= (0x0000003fU 
                                         & ((IData)(5U) 
                                            * (7U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__usbdev_avoutfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)))))
                               ? (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__usbdev_avoutfifo__DOT__gen_normal_fifo__DOT__storage 
                                          >> (0x0000003fU 
                                              & ((IData)(5U) 
                                                 * 
                                                 (7U 
                                                  & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__usbdev_avoutfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))))))
                               : 0U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__usbdev_impl__DOT__rx_wready 
            = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__usbdev_rxfifo__DOT__wready_o) 
               & (7U > (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_usbstat_rx_depth__DOT__d)));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__usbdev_impl__DOT__av_rvalid 
            = (1U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__usbdev_avoutfifo__DOT__gen_normal_fifo__DOT__fifo_empty)));
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__0__KET____DOT__u_dec__DOT__data_o 
        = (((QData)((IData)(((((((((2U & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__0__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                           [0x79U] 
                                           ^ (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[1U] 
                                              >> 0x0000001fU)) 
                                          << 1U)) | 
                                   (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__0__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                          [0xceU] ^ 
                                          (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[1U] 
                                           >> 0x0000001eU)))) 
                                  << 6U) | (((2U & 
                                              ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__0__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                [0xb5U] 
                                                ^ (
                                                   vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[1U] 
                                                   >> 0x0000001dU)) 
                                               << 1U)) 
                                             | (1U 
                                                & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__0__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                   [0xb3U] 
                                                   ^ 
                                                   (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[1U] 
                                                    >> 0x0000001cU)))) 
                                            << 4U)) 
                                | ((((2U & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__0__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                             [0xcbU] 
                                             ^ (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[1U] 
                                                >> 0x0000001bU)) 
                                            << 1U)) 
                                     | (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__0__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                              [0x3eU] 
                                              ^ (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[1U] 
                                                 >> 0x0000001aU)))) 
                                    << 2U) | ((2U & 
                                               ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__0__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                 [0xd6U] 
                                                 ^ 
                                                 (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[1U] 
                                                  >> 0x00000019U)) 
                                                << 1U)) 
                                              | (1U 
                                                 & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__0__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                    [0x6dU] 
                                                    ^ 
                                                    (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[1U] 
                                                     >> 0x00000018U)))))) 
                               << 0x00000018U) | ((
                                                   ((((2U 
                                                       & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__0__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                           [0xe0U] 
                                                           ^ 
                                                           (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[1U] 
                                                            >> 0x00000017U)) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__0__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                            [0xd0U] 
                                                            ^ 
                                                            (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[1U] 
                                                             >> 0x00000016U)))) 
                                                     << 6U) 
                                                    | (((2U 
                                                         & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__0__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                             [0xb0U] 
                                                             ^ 
                                                             (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[1U] 
                                                              >> 0x00000015U)) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__0__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                              [0x70U] 
                                                              ^ 
                                                              (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[1U] 
                                                               >> 0x00000014U)))) 
                                                       << 4U)) 
                                                   | ((((2U 
                                                         & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__0__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                             [0xc8U] 
                                                             ^ 
                                                             (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[1U] 
                                                              >> 0x00000013U)) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__0__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                              [0xa8U] 
                                                              ^ 
                                                              (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[1U] 
                                                               >> 0x00000012U)))) 
                                                       << 2U) 
                                                      | ((2U 
                                                          & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__0__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                              [0x68U] 
                                                              ^ 
                                                              (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[1U] 
                                                               >> 0x00000011U)) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__0__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                               [0x98U] 
                                                               ^ 
                                                               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[1U] 
                                                                >> 0x00000010U)))))) 
                                                  << 0x00000010U)) 
                             | (((((((2U & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__0__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                             [0x58U] 
                                             ^ (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[1U] 
                                                >> 0x0000000fU)) 
                                            << 1U)) 
                                     | (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__0__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                              [0x38U] 
                                              ^ (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[1U] 
                                                 >> 0x0000000eU)))) 
                                    << 6U) | (((2U 
                                                & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__0__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                    [0xc4U] 
                                                    ^ 
                                                    (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[1U] 
                                                     >> 0x0000000dU)) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__0__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                     [0xa4U] 
                                                     ^ 
                                                     (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[1U] 
                                                      >> 0x0000000cU)))) 
                                              << 4U)) 
                                  | ((((2U & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__0__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                               [0x64U] 
                                               ^ (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[1U] 
                                                  >> 0x0000000bU)) 
                                              << 1U)) 
                                       | (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__0__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                [0x94U] 
                                                ^ (
                                                   vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[1U] 
                                                   >> 0x0000000aU)))) 
                                      << 2U) | ((2U 
                                                 & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__0__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                     [0x54U] 
                                                     ^ 
                                                     (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[1U] 
                                                      >> 9U)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__0__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                      [0x34U] 
                                                      ^ 
                                                      (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[1U] 
                                                       >> 8U)))))) 
                                 << 8U) | (((((2U & 
                                               ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__0__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                 [0x8cU] 
                                                 ^ 
                                                 (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[1U] 
                                                  >> 7U)) 
                                                << 1U)) 
                                              | (1U 
                                                 & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__0__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                    [0x4cU] 
                                                    ^ 
                                                    (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[1U] 
                                                     >> 6U)))) 
                                             << 6U) 
                                            | (((2U 
                                                 & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__0__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                     [0x2cU] 
                                                     ^ 
                                                     (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[1U] 
                                                      >> 5U)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__0__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                      [0x1cU] 
                                                      ^ 
                                                      (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[1U] 
                                                       >> 4U)))) 
                                               << 4U)) 
                                           | ((((2U 
                                                 & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__0__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                     [0xc2U] 
                                                     ^ 
                                                     (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[1U] 
                                                      >> 3U)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__0__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                      [0xa2U] 
                                                      ^ 
                                                      (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[1U] 
                                                       >> 2U)))) 
                                               << 2U) 
                                              | ((2U 
                                                  & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__0__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                      [0x62U] 
                                                      ^ 
                                                      (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[1U] 
                                                       >> 1U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__0__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                       [0x92U] 
                                                       ^ 
                                                       vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[1U]))))))))) 
            << 0x00000020U) | (QData)((IData)((((((
                                                   (((2U 
                                                      & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__0__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                          [0x52U] 
                                                          ^ 
                                                          (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[0U] 
                                                           >> 0x0000001fU)) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__0__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                           [0x32U] 
                                                           ^ 
                                                           (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[0U] 
                                                            >> 0x0000001eU)))) 
                                                    << 6U) 
                                                   | (((2U 
                                                        & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__0__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                            [0x8aU] 
                                                            ^ 
                                                            (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[0U] 
                                                             >> 0x0000001dU)) 
                                                           << 1U)) 
                                                       | (1U 
                                                          & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__0__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                             [0x4aU] 
                                                             ^ 
                                                             (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[0U] 
                                                              >> 0x0000001cU)))) 
                                                      << 4U)) 
                                                  | ((((2U 
                                                        & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__0__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                            [0x2aU] 
                                                            ^ 
                                                            (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[0U] 
                                                             >> 0x0000001bU)) 
                                                           << 1U)) 
                                                       | (1U 
                                                          & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__0__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                             [0x1aU] 
                                                             ^ 
                                                             (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[0U] 
                                                              >> 0x0000001aU)))) 
                                                      << 2U) 
                                                     | ((2U 
                                                         & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__0__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                             [0x86U] 
                                                             ^ 
                                                             (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[0U] 
                                                              >> 0x00000019U)) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__0__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                              [0x46U] 
                                                              ^ 
                                                              (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[0U] 
                                                               >> 0x00000018U)))))) 
                                                 << 0x00000018U) 
                                                | ((((((2U 
                                                        & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__0__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                            [0x26U] 
                                                            ^ 
                                                            (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[0U] 
                                                             >> 0x00000017U)) 
                                                           << 1U)) 
                                                       | (1U 
                                                          & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__0__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                             [0x16U] 
                                                             ^ 
                                                             (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[0U] 
                                                              >> 0x00000016U)))) 
                                                      << 6U) 
                                                     | (((2U 
                                                          & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__0__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                              [0x0eU] 
                                                              ^ 
                                                              (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[0U] 
                                                               >> 0x00000015U)) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__0__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                               [0xc1U] 
                                                               ^ 
                                                               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[0U] 
                                                                >> 0x00000014U)))) 
                                                        << 4U)) 
                                                    | ((((2U 
                                                          & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__0__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                              [0xa1U] 
                                                              ^ 
                                                              (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[0U] 
                                                               >> 0x00000013U)) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__0__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                               [0x61U] 
                                                               ^ 
                                                               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[0U] 
                                                                >> 0x00000012U)))) 
                                                        << 2U) 
                                                       | ((2U 
                                                           & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__0__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                               [0x91U] 
                                                               ^ 
                                                               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[0U] 
                                                                >> 0x00000011U)) 
                                                              << 1U)) 
                                                          | (1U 
                                                             & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__0__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                                [0x51U] 
                                                                ^ 
                                                                (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[0U] 
                                                                 >> 0x00000010U)))))) 
                                                   << 0x00000010U)) 
                                               | (((((((2U 
                                                        & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__0__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                            [0x31U] 
                                                            ^ 
                                                            (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[0U] 
                                                             >> 0x0000000fU)) 
                                                           << 1U)) 
                                                       | (1U 
                                                          & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__0__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                             [0x89U] 
                                                             ^ 
                                                             (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[0U] 
                                                              >> 0x0000000eU)))) 
                                                      << 6U) 
                                                     | (((2U 
                                                          & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__0__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                              [0x49U] 
                                                              ^ 
                                                              (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[0U] 
                                                               >> 0x0000000dU)) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__0__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                               [0x29U] 
                                                               ^ 
                                                               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[0U] 
                                                                >> 0x0000000cU)))) 
                                                        << 4U)) 
                                                    | ((((2U 
                                                          & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__0__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                              [0x19U] 
                                                              ^ 
                                                              (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[0U] 
                                                               >> 0x0000000bU)) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__0__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                               [0x85U] 
                                                               ^ 
                                                               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[0U] 
                                                                >> 0x0000000aU)))) 
                                                        << 2U) 
                                                       | ((2U 
                                                           & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__0__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                               [0x45U] 
                                                               ^ 
                                                               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[0U] 
                                                                >> 9U)) 
                                                              << 1U)) 
                                                          | (1U 
                                                             & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__0__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                                [0x25U] 
                                                                ^ 
                                                                (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[0U] 
                                                                 >> 8U)))))) 
                                                   << 8U) 
                                                  | (((((2U 
                                                         & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__0__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                             [0x15U] 
                                                             ^ 
                                                             (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[0U] 
                                                              >> 7U)) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__0__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                              [0x0dU] 
                                                              ^ 
                                                              (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[0U] 
                                                               >> 6U)))) 
                                                       << 6U) 
                                                      | (((2U 
                                                           & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__0__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                               [0x83U] 
                                                               ^ 
                                                               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[0U] 
                                                                >> 5U)) 
                                                              << 1U)) 
                                                          | (1U 
                                                             & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__0__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                                [0x43U] 
                                                                ^ 
                                                                (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[0U] 
                                                                 >> 4U)))) 
                                                         << 4U)) 
                                                     | ((((2U 
                                                           & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__0__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                               [0x23U] 
                                                               ^ 
                                                               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[0U] 
                                                                >> 3U)) 
                                                              << 1U)) 
                                                          | (1U 
                                                             & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__0__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                                [0x13U] 
                                                                ^ 
                                                                (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[0U] 
                                                                 >> 2U)))) 
                                                         << 2U) 
                                                        | ((2U 
                                                            & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__0__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                                [0x0bU] 
                                                                ^ 
                                                                (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[0U] 
                                                                 >> 1U)) 
                                                               << 1U)) 
                                                           | (1U 
                                                              & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__0__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                                 [7U] 
                                                                 ^ 
                                                                 vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[0U]))))))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__1__KET____DOT__u_dec__DOT__data_o 
        = (((QData)((IData)(((((((((2U & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__1__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                           [0x79U] 
                                           ^ (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[3U] 
                                              >> 0x0000001fU)) 
                                          << 1U)) | 
                                   (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__1__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                          [0xceU] ^ 
                                          (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[3U] 
                                           >> 0x0000001eU)))) 
                                  << 6U) | (((2U & 
                                              ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__1__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                [0xb5U] 
                                                ^ (
                                                   vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[3U] 
                                                   >> 0x0000001dU)) 
                                               << 1U)) 
                                             | (1U 
                                                & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__1__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                   [0xb3U] 
                                                   ^ 
                                                   (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[3U] 
                                                    >> 0x0000001cU)))) 
                                            << 4U)) 
                                | ((((2U & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__1__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                             [0xcbU] 
                                             ^ (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[3U] 
                                                >> 0x0000001bU)) 
                                            << 1U)) 
                                     | (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__1__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                              [0x3eU] 
                                              ^ (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[3U] 
                                                 >> 0x0000001aU)))) 
                                    << 2U) | ((2U & 
                                               ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__1__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                 [0xd6U] 
                                                 ^ 
                                                 (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[3U] 
                                                  >> 0x00000019U)) 
                                                << 1U)) 
                                              | (1U 
                                                 & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__1__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                    [0x6dU] 
                                                    ^ 
                                                    (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[3U] 
                                                     >> 0x00000018U)))))) 
                               << 0x00000018U) | ((
                                                   ((((2U 
                                                       & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__1__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                           [0xe0U] 
                                                           ^ 
                                                           (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[3U] 
                                                            >> 0x00000017U)) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__1__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                            [0xd0U] 
                                                            ^ 
                                                            (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[3U] 
                                                             >> 0x00000016U)))) 
                                                     << 6U) 
                                                    | (((2U 
                                                         & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__1__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                             [0xb0U] 
                                                             ^ 
                                                             (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[3U] 
                                                              >> 0x00000015U)) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__1__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                              [0x70U] 
                                                              ^ 
                                                              (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[3U] 
                                                               >> 0x00000014U)))) 
                                                       << 4U)) 
                                                   | ((((2U 
                                                         & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__1__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                             [0xc8U] 
                                                             ^ 
                                                             (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[3U] 
                                                              >> 0x00000013U)) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__1__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                              [0xa8U] 
                                                              ^ 
                                                              (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[3U] 
                                                               >> 0x00000012U)))) 
                                                       << 2U) 
                                                      | ((2U 
                                                          & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__1__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                              [0x68U] 
                                                              ^ 
                                                              (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[3U] 
                                                               >> 0x00000011U)) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__1__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                               [0x98U] 
                                                               ^ 
                                                               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[3U] 
                                                                >> 0x00000010U)))))) 
                                                  << 0x00000010U)) 
                             | (((((((2U & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__1__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                             [0x58U] 
                                             ^ (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[3U] 
                                                >> 0x0000000fU)) 
                                            << 1U)) 
                                     | (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__1__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                              [0x38U] 
                                              ^ (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[3U] 
                                                 >> 0x0000000eU)))) 
                                    << 6U) | (((2U 
                                                & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__1__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                    [0xc4U] 
                                                    ^ 
                                                    (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[3U] 
                                                     >> 0x0000000dU)) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__1__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                     [0xa4U] 
                                                     ^ 
                                                     (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[3U] 
                                                      >> 0x0000000cU)))) 
                                              << 4U)) 
                                  | ((((2U & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__1__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                               [0x64U] 
                                               ^ (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[3U] 
                                                  >> 0x0000000bU)) 
                                              << 1U)) 
                                       | (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__1__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                [0x94U] 
                                                ^ (
                                                   vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[3U] 
                                                   >> 0x0000000aU)))) 
                                      << 2U) | ((2U 
                                                 & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__1__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                     [0x54U] 
                                                     ^ 
                                                     (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[3U] 
                                                      >> 9U)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__1__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                      [0x34U] 
                                                      ^ 
                                                      (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[3U] 
                                                       >> 8U)))))) 
                                 << 8U) | (((((2U & 
                                               ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__1__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                 [0x8cU] 
                                                 ^ 
                                                 (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[3U] 
                                                  >> 7U)) 
                                                << 1U)) 
                                              | (1U 
                                                 & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__1__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                    [0x4cU] 
                                                    ^ 
                                                    (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[3U] 
                                                     >> 6U)))) 
                                             << 6U) 
                                            | (((2U 
                                                 & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__1__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                     [0x2cU] 
                                                     ^ 
                                                     (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[3U] 
                                                      >> 5U)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__1__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                      [0x1cU] 
                                                      ^ 
                                                      (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[3U] 
                                                       >> 4U)))) 
                                               << 4U)) 
                                           | ((((2U 
                                                 & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__1__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                     [0xc2U] 
                                                     ^ 
                                                     (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[3U] 
                                                      >> 3U)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__1__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                      [0xa2U] 
                                                      ^ 
                                                      (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[3U] 
                                                       >> 2U)))) 
                                               << 2U) 
                                              | ((2U 
                                                  & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__1__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                      [0x62U] 
                                                      ^ 
                                                      (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[3U] 
                                                       >> 1U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__1__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                       [0x92U] 
                                                       ^ 
                                                       vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[3U]))))))))) 
            << 0x00000020U) | (QData)((IData)((((((
                                                   (((2U 
                                                      & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__1__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                          [0x52U] 
                                                          ^ 
                                                          (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[2U] 
                                                           >> 0x0000001fU)) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__1__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                           [0x32U] 
                                                           ^ 
                                                           (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[2U] 
                                                            >> 0x0000001eU)))) 
                                                    << 6U) 
                                                   | (((2U 
                                                        & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__1__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                            [0x8aU] 
                                                            ^ 
                                                            (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[2U] 
                                                             >> 0x0000001dU)) 
                                                           << 1U)) 
                                                       | (1U 
                                                          & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__1__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                             [0x4aU] 
                                                             ^ 
                                                             (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[2U] 
                                                              >> 0x0000001cU)))) 
                                                      << 4U)) 
                                                  | ((((2U 
                                                        & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__1__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                            [0x2aU] 
                                                            ^ 
                                                            (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[2U] 
                                                             >> 0x0000001bU)) 
                                                           << 1U)) 
                                                       | (1U 
                                                          & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__1__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                             [0x1aU] 
                                                             ^ 
                                                             (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[2U] 
                                                              >> 0x0000001aU)))) 
                                                      << 2U) 
                                                     | ((2U 
                                                         & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__1__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                             [0x86U] 
                                                             ^ 
                                                             (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[2U] 
                                                              >> 0x00000019U)) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__1__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                              [0x46U] 
                                                              ^ 
                                                              (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[2U] 
                                                               >> 0x00000018U)))))) 
                                                 << 0x00000018U) 
                                                | ((((((2U 
                                                        & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__1__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                            [0x26U] 
                                                            ^ 
                                                            (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[2U] 
                                                             >> 0x00000017U)) 
                                                           << 1U)) 
                                                       | (1U 
                                                          & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__1__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                             [0x16U] 
                                                             ^ 
                                                             (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[2U] 
                                                              >> 0x00000016U)))) 
                                                      << 6U) 
                                                     | (((2U 
                                                          & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__1__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                              [0x0eU] 
                                                              ^ 
                                                              (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[2U] 
                                                               >> 0x00000015U)) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__1__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                               [0xc1U] 
                                                               ^ 
                                                               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[2U] 
                                                                >> 0x00000014U)))) 
                                                        << 4U)) 
                                                    | ((((2U 
                                                          & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__1__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                              [0xa1U] 
                                                              ^ 
                                                              (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[2U] 
                                                               >> 0x00000013U)) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__1__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                               [0x61U] 
                                                               ^ 
                                                               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[2U] 
                                                                >> 0x00000012U)))) 
                                                        << 2U) 
                                                       | ((2U 
                                                           & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__1__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                               [0x91U] 
                                                               ^ 
                                                               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[2U] 
                                                                >> 0x00000011U)) 
                                                              << 1U)) 
                                                          | (1U 
                                                             & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__1__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                                [0x51U] 
                                                                ^ 
                                                                (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[2U] 
                                                                 >> 0x00000010U)))))) 
                                                   << 0x00000010U)) 
                                               | (((((((2U 
                                                        & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__1__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                            [0x31U] 
                                                            ^ 
                                                            (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[2U] 
                                                             >> 0x0000000fU)) 
                                                           << 1U)) 
                                                       | (1U 
                                                          & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__1__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                             [0x89U] 
                                                             ^ 
                                                             (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[2U] 
                                                              >> 0x0000000eU)))) 
                                                      << 6U) 
                                                     | (((2U 
                                                          & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__1__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                              [0x49U] 
                                                              ^ 
                                                              (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[2U] 
                                                               >> 0x0000000dU)) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__1__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                               [0x29U] 
                                                               ^ 
                                                               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[2U] 
                                                                >> 0x0000000cU)))) 
                                                        << 4U)) 
                                                    | ((((2U 
                                                          & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__1__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                              [0x19U] 
                                                              ^ 
                                                              (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[2U] 
                                                               >> 0x0000000bU)) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__1__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                               [0x85U] 
                                                               ^ 
                                                               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[2U] 
                                                                >> 0x0000000aU)))) 
                                                        << 2U) 
                                                       | ((2U 
                                                           & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__1__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                               [0x45U] 
                                                               ^ 
                                                               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[2U] 
                                                                >> 9U)) 
                                                              << 1U)) 
                                                          | (1U 
                                                             & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__1__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                                [0x25U] 
                                                                ^ 
                                                                (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[2U] 
                                                                 >> 8U)))))) 
                                                   << 8U) 
                                                  | (((((2U 
                                                         & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__1__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                             [0x15U] 
                                                             ^ 
                                                             (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[2U] 
                                                              >> 7U)) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__1__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                              [0x0dU] 
                                                              ^ 
                                                              (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[2U] 
                                                               >> 6U)))) 
                                                       << 6U) 
                                                      | (((2U 
                                                           & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__1__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                               [0x83U] 
                                                               ^ 
                                                               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[2U] 
                                                                >> 5U)) 
                                                              << 1U)) 
                                                          | (1U 
                                                             & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__1__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                                [0x43U] 
                                                                ^ 
                                                                (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[2U] 
                                                                 >> 4U)))) 
                                                         << 4U)) 
                                                     | ((((2U 
                                                           & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__1__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                               [0x23U] 
                                                               ^ 
                                                               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[2U] 
                                                                >> 3U)) 
                                                              << 1U)) 
                                                          | (1U 
                                                             & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__1__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                                [0x13U] 
                                                                ^ 
                                                                (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[2U] 
                                                                 >> 2U)))) 
                                                         << 2U) 
                                                        | ((2U 
                                                            & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__1__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                                [0x0bU] 
                                                                ^ 
                                                                (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[2U] 
                                                                 >> 1U)) 
                                                               << 1U)) 
                                                           | (1U 
                                                              & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__1__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                                 [7U] 
                                                                 ^ 
                                                                 vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[2U]))))))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__2__KET____DOT__u_dec__DOT__data_o 
        = (((QData)((IData)(((((((((2U & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__2__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                           [0x79U] 
                                           ^ (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[5U] 
                                              >> 0x0000001fU)) 
                                          << 1U)) | 
                                   (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__2__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                          [0xceU] ^ 
                                          (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[5U] 
                                           >> 0x0000001eU)))) 
                                  << 6U) | (((2U & 
                                              ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__2__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                [0xb5U] 
                                                ^ (
                                                   vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[5U] 
                                                   >> 0x0000001dU)) 
                                               << 1U)) 
                                             | (1U 
                                                & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__2__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                   [0xb3U] 
                                                   ^ 
                                                   (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[5U] 
                                                    >> 0x0000001cU)))) 
                                            << 4U)) 
                                | ((((2U & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__2__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                             [0xcbU] 
                                             ^ (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[5U] 
                                                >> 0x0000001bU)) 
                                            << 1U)) 
                                     | (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__2__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                              [0x3eU] 
                                              ^ (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[5U] 
                                                 >> 0x0000001aU)))) 
                                    << 2U) | ((2U & 
                                               ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__2__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                 [0xd6U] 
                                                 ^ 
                                                 (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[5U] 
                                                  >> 0x00000019U)) 
                                                << 1U)) 
                                              | (1U 
                                                 & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__2__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                    [0x6dU] 
                                                    ^ 
                                                    (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[5U] 
                                                     >> 0x00000018U)))))) 
                               << 0x00000018U) | ((
                                                   ((((2U 
                                                       & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__2__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                           [0xe0U] 
                                                           ^ 
                                                           (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[5U] 
                                                            >> 0x00000017U)) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__2__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                            [0xd0U] 
                                                            ^ 
                                                            (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[5U] 
                                                             >> 0x00000016U)))) 
                                                     << 6U) 
                                                    | (((2U 
                                                         & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__2__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                             [0xb0U] 
                                                             ^ 
                                                             (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[5U] 
                                                              >> 0x00000015U)) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__2__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                              [0x70U] 
                                                              ^ 
                                                              (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[5U] 
                                                               >> 0x00000014U)))) 
                                                       << 4U)) 
                                                   | ((((2U 
                                                         & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__2__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                             [0xc8U] 
                                                             ^ 
                                                             (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[5U] 
                                                              >> 0x00000013U)) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__2__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                              [0xa8U] 
                                                              ^ 
                                                              (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[5U] 
                                                               >> 0x00000012U)))) 
                                                       << 2U) 
                                                      | ((2U 
                                                          & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__2__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                              [0x68U] 
                                                              ^ 
                                                              (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[5U] 
                                                               >> 0x00000011U)) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__2__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                               [0x98U] 
                                                               ^ 
                                                               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[5U] 
                                                                >> 0x00000010U)))))) 
                                                  << 0x00000010U)) 
                             | (((((((2U & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__2__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                             [0x58U] 
                                             ^ (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[5U] 
                                                >> 0x0000000fU)) 
                                            << 1U)) 
                                     | (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__2__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                              [0x38U] 
                                              ^ (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[5U] 
                                                 >> 0x0000000eU)))) 
                                    << 6U) | (((2U 
                                                & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__2__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                    [0xc4U] 
                                                    ^ 
                                                    (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[5U] 
                                                     >> 0x0000000dU)) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__2__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                     [0xa4U] 
                                                     ^ 
                                                     (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[5U] 
                                                      >> 0x0000000cU)))) 
                                              << 4U)) 
                                  | ((((2U & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__2__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                               [0x64U] 
                                               ^ (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[5U] 
                                                  >> 0x0000000bU)) 
                                              << 1U)) 
                                       | (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__2__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                [0x94U] 
                                                ^ (
                                                   vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[5U] 
                                                   >> 0x0000000aU)))) 
                                      << 2U) | ((2U 
                                                 & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__2__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                     [0x54U] 
                                                     ^ 
                                                     (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[5U] 
                                                      >> 9U)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__2__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                      [0x34U] 
                                                      ^ 
                                                      (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[5U] 
                                                       >> 8U)))))) 
                                 << 8U) | (((((2U & 
                                               ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__2__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                 [0x8cU] 
                                                 ^ 
                                                 (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[5U] 
                                                  >> 7U)) 
                                                << 1U)) 
                                              | (1U 
                                                 & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__2__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                    [0x4cU] 
                                                    ^ 
                                                    (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[5U] 
                                                     >> 6U)))) 
                                             << 6U) 
                                            | (((2U 
                                                 & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__2__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                     [0x2cU] 
                                                     ^ 
                                                     (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[5U] 
                                                      >> 5U)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__2__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                      [0x1cU] 
                                                      ^ 
                                                      (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[5U] 
                                                       >> 4U)))) 
                                               << 4U)) 
                                           | ((((2U 
                                                 & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__2__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                     [0xc2U] 
                                                     ^ 
                                                     (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[5U] 
                                                      >> 3U)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__2__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                      [0xa2U] 
                                                      ^ 
                                                      (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[5U] 
                                                       >> 2U)))) 
                                               << 2U) 
                                              | ((2U 
                                                  & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__2__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                      [0x62U] 
                                                      ^ 
                                                      (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[5U] 
                                                       >> 1U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__2__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                       [0x92U] 
                                                       ^ 
                                                       vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[5U]))))))))) 
            << 0x00000020U) | (QData)((IData)((((((
                                                   (((2U 
                                                      & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__2__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                          [0x52U] 
                                                          ^ 
                                                          (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[4U] 
                                                           >> 0x0000001fU)) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__2__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                           [0x32U] 
                                                           ^ 
                                                           (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[4U] 
                                                            >> 0x0000001eU)))) 
                                                    << 6U) 
                                                   | (((2U 
                                                        & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__2__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                            [0x8aU] 
                                                            ^ 
                                                            (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[4U] 
                                                             >> 0x0000001dU)) 
                                                           << 1U)) 
                                                       | (1U 
                                                          & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__2__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                             [0x4aU] 
                                                             ^ 
                                                             (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[4U] 
                                                              >> 0x0000001cU)))) 
                                                      << 4U)) 
                                                  | ((((2U 
                                                        & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__2__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                            [0x2aU] 
                                                            ^ 
                                                            (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[4U] 
                                                             >> 0x0000001bU)) 
                                                           << 1U)) 
                                                       | (1U 
                                                          & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__2__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                             [0x1aU] 
                                                             ^ 
                                                             (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[4U] 
                                                              >> 0x0000001aU)))) 
                                                      << 2U) 
                                                     | ((2U 
                                                         & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__2__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                             [0x86U] 
                                                             ^ 
                                                             (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[4U] 
                                                              >> 0x00000019U)) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__2__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                              [0x46U] 
                                                              ^ 
                                                              (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[4U] 
                                                               >> 0x00000018U)))))) 
                                                 << 0x00000018U) 
                                                | ((((((2U 
                                                        & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__2__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                            [0x26U] 
                                                            ^ 
                                                            (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[4U] 
                                                             >> 0x00000017U)) 
                                                           << 1U)) 
                                                       | (1U 
                                                          & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__2__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                             [0x16U] 
                                                             ^ 
                                                             (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[4U] 
                                                              >> 0x00000016U)))) 
                                                      << 6U) 
                                                     | (((2U 
                                                          & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__2__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                              [0x0eU] 
                                                              ^ 
                                                              (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[4U] 
                                                               >> 0x00000015U)) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__2__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                               [0xc1U] 
                                                               ^ 
                                                               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[4U] 
                                                                >> 0x00000014U)))) 
                                                        << 4U)) 
                                                    | ((((2U 
                                                          & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__2__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                              [0xa1U] 
                                                              ^ 
                                                              (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[4U] 
                                                               >> 0x00000013U)) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__2__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                               [0x61U] 
                                                               ^ 
                                                               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[4U] 
                                                                >> 0x00000012U)))) 
                                                        << 2U) 
                                                       | ((2U 
                                                           & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__2__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                               [0x91U] 
                                                               ^ 
                                                               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[4U] 
                                                                >> 0x00000011U)) 
                                                              << 1U)) 
                                                          | (1U 
                                                             & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__2__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                                [0x51U] 
                                                                ^ 
                                                                (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[4U] 
                                                                 >> 0x00000010U)))))) 
                                                   << 0x00000010U)) 
                                               | (((((((2U 
                                                        & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__2__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                            [0x31U] 
                                                            ^ 
                                                            (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[4U] 
                                                             >> 0x0000000fU)) 
                                                           << 1U)) 
                                                       | (1U 
                                                          & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__2__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                             [0x89U] 
                                                             ^ 
                                                             (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[4U] 
                                                              >> 0x0000000eU)))) 
                                                      << 6U) 
                                                     | (((2U 
                                                          & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__2__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                              [0x49U] 
                                                              ^ 
                                                              (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[4U] 
                                                               >> 0x0000000dU)) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__2__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                               [0x29U] 
                                                               ^ 
                                                               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[4U] 
                                                                >> 0x0000000cU)))) 
                                                        << 4U)) 
                                                    | ((((2U 
                                                          & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__2__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                              [0x19U] 
                                                              ^ 
                                                              (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[4U] 
                                                               >> 0x0000000bU)) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__2__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                               [0x85U] 
                                                               ^ 
                                                               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[4U] 
                                                                >> 0x0000000aU)))) 
                                                        << 2U) 
                                                       | ((2U 
                                                           & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__2__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                               [0x45U] 
                                                               ^ 
                                                               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[4U] 
                                                                >> 9U)) 
                                                              << 1U)) 
                                                          | (1U 
                                                             & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__2__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                                [0x25U] 
                                                                ^ 
                                                                (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[4U] 
                                                                 >> 8U)))))) 
                                                   << 8U) 
                                                  | (((((2U 
                                                         & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__2__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                             [0x15U] 
                                                             ^ 
                                                             (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[4U] 
                                                              >> 7U)) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__2__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                              [0x0dU] 
                                                              ^ 
                                                              (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[4U] 
                                                               >> 6U)))) 
                                                       << 6U) 
                                                      | (((2U 
                                                           & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__2__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                               [0x83U] 
                                                               ^ 
                                                               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[4U] 
                                                                >> 5U)) 
                                                              << 1U)) 
                                                          | (1U 
                                                             & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__2__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                                [0x43U] 
                                                                ^ 
                                                                (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[4U] 
                                                                 >> 4U)))) 
                                                         << 4U)) 
                                                     | ((((2U 
                                                           & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__2__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                               [0x23U] 
                                                               ^ 
                                                               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[4U] 
                                                                >> 3U)) 
                                                              << 1U)) 
                                                          | (1U 
                                                             & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__2__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                                [0x13U] 
                                                                ^ 
                                                                (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[4U] 
                                                                 >> 2U)))) 
                                                         << 2U) 
                                                        | ((2U 
                                                            & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__2__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                                [0x0bU] 
                                                                ^ 
                                                                (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[4U] 
                                                                 >> 1U)) 
                                                               << 1U)) 
                                                           | (1U 
                                                              & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__2__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                                 [7U] 
                                                                 ^ 
                                                                 vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[4U]))))))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__3__KET____DOT__u_dec__DOT__data_o 
        = (((QData)((IData)(((((((((2U & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__3__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                           [0x79U] 
                                           ^ (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[7U] 
                                              >> 0x0000001fU)) 
                                          << 1U)) | 
                                   (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__3__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                          [0xceU] ^ 
                                          (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[7U] 
                                           >> 0x0000001eU)))) 
                                  << 6U) | (((2U & 
                                              ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__3__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                [0xb5U] 
                                                ^ (
                                                   vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[7U] 
                                                   >> 0x0000001dU)) 
                                               << 1U)) 
                                             | (1U 
                                                & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__3__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                   [0xb3U] 
                                                   ^ 
                                                   (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[7U] 
                                                    >> 0x0000001cU)))) 
                                            << 4U)) 
                                | ((((2U & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__3__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                             [0xcbU] 
                                             ^ (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[7U] 
                                                >> 0x0000001bU)) 
                                            << 1U)) 
                                     | (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__3__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                              [0x3eU] 
                                              ^ (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[7U] 
                                                 >> 0x0000001aU)))) 
                                    << 2U) | ((2U & 
                                               ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__3__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                 [0xd6U] 
                                                 ^ 
                                                 (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[7U] 
                                                  >> 0x00000019U)) 
                                                << 1U)) 
                                              | (1U 
                                                 & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__3__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                    [0x6dU] 
                                                    ^ 
                                                    (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[7U] 
                                                     >> 0x00000018U)))))) 
                               << 0x00000018U) | ((
                                                   ((((2U 
                                                       & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__3__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                           [0xe0U] 
                                                           ^ 
                                                           (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[7U] 
                                                            >> 0x00000017U)) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__3__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                            [0xd0U] 
                                                            ^ 
                                                            (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[7U] 
                                                             >> 0x00000016U)))) 
                                                     << 6U) 
                                                    | (((2U 
                                                         & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__3__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                             [0xb0U] 
                                                             ^ 
                                                             (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[7U] 
                                                              >> 0x00000015U)) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__3__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                              [0x70U] 
                                                              ^ 
                                                              (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[7U] 
                                                               >> 0x00000014U)))) 
                                                       << 4U)) 
                                                   | ((((2U 
                                                         & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__3__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                             [0xc8U] 
                                                             ^ 
                                                             (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[7U] 
                                                              >> 0x00000013U)) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__3__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                              [0xa8U] 
                                                              ^ 
                                                              (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[7U] 
                                                               >> 0x00000012U)))) 
                                                       << 2U) 
                                                      | ((2U 
                                                          & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__3__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                              [0x68U] 
                                                              ^ 
                                                              (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[7U] 
                                                               >> 0x00000011U)) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__3__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                               [0x98U] 
                                                               ^ 
                                                               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[7U] 
                                                                >> 0x00000010U)))))) 
                                                  << 0x00000010U)) 
                             | (((((((2U & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__3__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                             [0x58U] 
                                             ^ (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[7U] 
                                                >> 0x0000000fU)) 
                                            << 1U)) 
                                     | (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__3__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                              [0x38U] 
                                              ^ (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[7U] 
                                                 >> 0x0000000eU)))) 
                                    << 6U) | (((2U 
                                                & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__3__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                    [0xc4U] 
                                                    ^ 
                                                    (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[7U] 
                                                     >> 0x0000000dU)) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__3__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                     [0xa4U] 
                                                     ^ 
                                                     (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[7U] 
                                                      >> 0x0000000cU)))) 
                                              << 4U)) 
                                  | ((((2U & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__3__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                               [0x64U] 
                                               ^ (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[7U] 
                                                  >> 0x0000000bU)) 
                                              << 1U)) 
                                       | (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__3__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                [0x94U] 
                                                ^ (
                                                   vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[7U] 
                                                   >> 0x0000000aU)))) 
                                      << 2U) | ((2U 
                                                 & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__3__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                     [0x54U] 
                                                     ^ 
                                                     (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[7U] 
                                                      >> 9U)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__3__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                      [0x34U] 
                                                      ^ 
                                                      (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[7U] 
                                                       >> 8U)))))) 
                                 << 8U) | (((((2U & 
                                               ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__3__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                 [0x8cU] 
                                                 ^ 
                                                 (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[7U] 
                                                  >> 7U)) 
                                                << 1U)) 
                                              | (1U 
                                                 & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__3__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                    [0x4cU] 
                                                    ^ 
                                                    (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[7U] 
                                                     >> 6U)))) 
                                             << 6U) 
                                            | (((2U 
                                                 & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__3__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                     [0x2cU] 
                                                     ^ 
                                                     (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[7U] 
                                                      >> 5U)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__3__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                      [0x1cU] 
                                                      ^ 
                                                      (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[7U] 
                                                       >> 4U)))) 
                                               << 4U)) 
                                           | ((((2U 
                                                 & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__3__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                     [0xc2U] 
                                                     ^ 
                                                     (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[7U] 
                                                      >> 3U)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__3__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                      [0xa2U] 
                                                      ^ 
                                                      (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[7U] 
                                                       >> 2U)))) 
                                               << 2U) 
                                              | ((2U 
                                                  & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__3__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                      [0x62U] 
                                                      ^ 
                                                      (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[7U] 
                                                       >> 1U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__3__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                       [0x92U] 
                                                       ^ 
                                                       vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[7U]))))))))) 
            << 0x00000020U) | (QData)((IData)((((((
                                                   (((2U 
                                                      & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__3__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                          [0x52U] 
                                                          ^ 
                                                          (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[6U] 
                                                           >> 0x0000001fU)) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__3__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                           [0x32U] 
                                                           ^ 
                                                           (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[6U] 
                                                            >> 0x0000001eU)))) 
                                                    << 6U) 
                                                   | (((2U 
                                                        & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__3__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                            [0x8aU] 
                                                            ^ 
                                                            (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[6U] 
                                                             >> 0x0000001dU)) 
                                                           << 1U)) 
                                                       | (1U 
                                                          & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__3__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                             [0x4aU] 
                                                             ^ 
                                                             (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[6U] 
                                                              >> 0x0000001cU)))) 
                                                      << 4U)) 
                                                  | ((((2U 
                                                        & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__3__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                            [0x2aU] 
                                                            ^ 
                                                            (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[6U] 
                                                             >> 0x0000001bU)) 
                                                           << 1U)) 
                                                       | (1U 
                                                          & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__3__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                             [0x1aU] 
                                                             ^ 
                                                             (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[6U] 
                                                              >> 0x0000001aU)))) 
                                                      << 2U) 
                                                     | ((2U 
                                                         & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__3__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                             [0x86U] 
                                                             ^ 
                                                             (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[6U] 
                                                              >> 0x00000019U)) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__3__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                              [0x46U] 
                                                              ^ 
                                                              (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[6U] 
                                                               >> 0x00000018U)))))) 
                                                 << 0x00000018U) 
                                                | ((((((2U 
                                                        & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__3__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                            [0x26U] 
                                                            ^ 
                                                            (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[6U] 
                                                             >> 0x00000017U)) 
                                                           << 1U)) 
                                                       | (1U 
                                                          & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__3__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                             [0x16U] 
                                                             ^ 
                                                             (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[6U] 
                                                              >> 0x00000016U)))) 
                                                      << 6U) 
                                                     | (((2U 
                                                          & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__3__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                              [0x0eU] 
                                                              ^ 
                                                              (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[6U] 
                                                               >> 0x00000015U)) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__3__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                               [0xc1U] 
                                                               ^ 
                                                               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[6U] 
                                                                >> 0x00000014U)))) 
                                                        << 4U)) 
                                                    | ((((2U 
                                                          & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__3__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                              [0xa1U] 
                                                              ^ 
                                                              (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[6U] 
                                                               >> 0x00000013U)) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__3__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                               [0x61U] 
                                                               ^ 
                                                               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[6U] 
                                                                >> 0x00000012U)))) 
                                                        << 2U) 
                                                       | ((2U 
                                                           & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__3__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                               [0x91U] 
                                                               ^ 
                                                               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[6U] 
                                                                >> 0x00000011U)) 
                                                              << 1U)) 
                                                          | (1U 
                                                             & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__3__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                                [0x51U] 
                                                                ^ 
                                                                (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[6U] 
                                                                 >> 0x00000010U)))))) 
                                                   << 0x00000010U)) 
                                               | (((((((2U 
                                                        & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__3__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                            [0x31U] 
                                                            ^ 
                                                            (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[6U] 
                                                             >> 0x0000000fU)) 
                                                           << 1U)) 
                                                       | (1U 
                                                          & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__3__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                             [0x89U] 
                                                             ^ 
                                                             (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[6U] 
                                                              >> 0x0000000eU)))) 
                                                      << 6U) 
                                                     | (((2U 
                                                          & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__3__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                              [0x49U] 
                                                              ^ 
                                                              (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[6U] 
                                                               >> 0x0000000dU)) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__3__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                               [0x29U] 
                                                               ^ 
                                                               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[6U] 
                                                                >> 0x0000000cU)))) 
                                                        << 4U)) 
                                                    | ((((2U 
                                                          & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__3__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                              [0x19U] 
                                                              ^ 
                                                              (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[6U] 
                                                               >> 0x0000000bU)) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__3__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                               [0x85U] 
                                                               ^ 
                                                               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[6U] 
                                                                >> 0x0000000aU)))) 
                                                        << 2U) 
                                                       | ((2U 
                                                           & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__3__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                               [0x45U] 
                                                               ^ 
                                                               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[6U] 
                                                                >> 9U)) 
                                                              << 1U)) 
                                                          | (1U 
                                                             & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__3__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                                [0x25U] 
                                                                ^ 
                                                                (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[6U] 
                                                                 >> 8U)))))) 
                                                   << 8U) 
                                                  | (((((2U 
                                                         & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__3__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                             [0x15U] 
                                                             ^ 
                                                             (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[6U] 
                                                              >> 7U)) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__3__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                              [0x0dU] 
                                                              ^ 
                                                              (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[6U] 
                                                               >> 6U)))) 
                                                       << 6U) 
                                                      | (((2U 
                                                           & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__3__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                               [0x83U] 
                                                               ^ 
                                                               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[6U] 
                                                                >> 5U)) 
                                                              << 1U)) 
                                                          | (1U 
                                                             & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__3__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                                [0x43U] 
                                                                ^ 
                                                                (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[6U] 
                                                                 >> 4U)))) 
                                                         << 4U)) 
                                                     | ((((2U 
                                                           & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__3__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                               [0x23U] 
                                                               ^ 
                                                               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[6U] 
                                                                >> 3U)) 
                                                              << 1U)) 
                                                          | (1U 
                                                             & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__3__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                                [0x13U] 
                                                                ^ 
                                                                (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[6U] 
                                                                 >> 2U)))) 
                                                         << 2U) 
                                                        | ((2U 
                                                            & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__3__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                                [0x0bU] 
                                                                ^ 
                                                                (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[6U] 
                                                                 >> 1U)) 
                                                               << 1U)) 
                                                           | (1U 
                                                              & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__3__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                                 [7U] 
                                                                 ^ 
                                                                 vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__key_state_q[6U]))))))))));
}
