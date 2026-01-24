// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim___024root___act_comb__TOP__37(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___act_comb__TOP__37\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vfunc_mubi8_and_lo__155__Vfuncout;
    __Vfunc_mubi8_and_lo__155__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_mubi8_and_lo__155__a;
    __Vfunc_mubi8_and_lo__155__a = 0;
    CData/*7:0*/ __Vfunc_mubi8_and_lo__155__b;
    __Vfunc_mubi8_and_lo__155__b = 0;
    CData/*7:0*/ __Vfunc_mubi8_and__156__Vfuncout;
    __Vfunc_mubi8_and__156__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_mubi8_and__156__a;
    __Vfunc_mubi8_and__156__a = 0;
    CData/*7:0*/ __Vfunc_mubi8_and__156__b;
    __Vfunc_mubi8_and__156__b = 0;
    CData/*7:0*/ __Vfunc_mubi8_and__156__a_in;
    __Vfunc_mubi8_and__156__a_in = 0;
    CData/*7:0*/ __Vfunc_mubi8_and__156__b_in;
    __Vfunc_mubi8_and__156__b_in = 0;
    CData/*7:0*/ __Vfunc_mubi8_and_lo__157__Vfuncout;
    __Vfunc_mubi8_and_lo__157__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_mubi8_and_lo__157__a;
    __Vfunc_mubi8_and_lo__157__a = 0;
    CData/*7:0*/ __Vfunc_mubi8_and_lo__157__b;
    __Vfunc_mubi8_and_lo__157__b = 0;
    CData/*7:0*/ __Vfunc_mubi8_and__158__Vfuncout;
    __Vfunc_mubi8_and__158__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_mubi8_and__158__a;
    __Vfunc_mubi8_and__158__a = 0;
    CData/*7:0*/ __Vfunc_mubi8_and__158__b;
    __Vfunc_mubi8_and__158__b = 0;
    CData/*7:0*/ __Vfunc_mubi8_and__158__a_in;
    __Vfunc_mubi8_and__158__a_in = 0;
    CData/*7:0*/ __Vfunc_mubi8_and__158__b_in;
    __Vfunc_mubi8_and__158__b_in = 0;
    CData/*7:0*/ __Vfunc_mubi8_and_lo__159__Vfuncout;
    __Vfunc_mubi8_and_lo__159__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_mubi8_and_lo__159__a;
    __Vfunc_mubi8_and_lo__159__a = 0;
    CData/*7:0*/ __Vfunc_mubi8_and_lo__159__b;
    __Vfunc_mubi8_and_lo__159__b = 0;
    CData/*7:0*/ __Vfunc_mubi8_and__160__Vfuncout;
    __Vfunc_mubi8_and__160__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_mubi8_and__160__a;
    __Vfunc_mubi8_and__160__a = 0;
    CData/*7:0*/ __Vfunc_mubi8_and__160__b;
    __Vfunc_mubi8_and__160__b = 0;
    CData/*7:0*/ __Vfunc_mubi8_and__160__a_in;
    __Vfunc_mubi8_and__160__a_in = 0;
    CData/*7:0*/ __Vfunc_mubi8_and__160__b_in;
    __Vfunc_mubi8_and__160__b_in = 0;
    // Body
    __Vfunc_mubi8_and_lo__157__b = (0x000000ffU & (
                                                   vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_access_pre[1U] 
                                                   >> 8U));
    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__2__KET____DOT__gen_unbuffered__DOT__u_part_unbuf__init_done_o) {
        __Vfunc_mubi8_and_lo__157__a = 0x69U;
        __Vfunc_mubi8_and_lo__155__a = 0x69U;
    } else {
        __Vfunc_mubi8_and_lo__157__a = 0x96U;
        __Vfunc_mubi8_and_lo__155__a = 0x96U;
    }
    __Vfunc_mubi8_and__158__b = __Vfunc_mubi8_and_lo__157__b;
    __Vfunc_mubi8_and__158__a = __Vfunc_mubi8_and_lo__157__a;
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__Vfunc_mubi8_and__158__out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11707190342961780587ull);
    __Vfunc_mubi8_and__158__a_in = __Vfunc_mubi8_and__158__a;
    __Vfunc_mubi8_and__158__b_in = __Vfunc_mubi8_and__158__b;
    vlSelfRef.__Vfunc_mubi8_and__158__out = ((0xfcU 
                                              & (IData)(vlSelfRef.__Vfunc_mubi8_and__158__out)) 
                                             | ((2U 
                                                 & ((IData)(__Vfunc_mubi8_and__158__a_in) 
                                                    | (IData)(__Vfunc_mubi8_and__158__b_in))) 
                                                | (1U 
                                                   & ((IData)(__Vfunc_mubi8_and__158__a_in) 
                                                      & (IData)(__Vfunc_mubi8_and__158__b_in)))));
    vlSelfRef.__Vfunc_mubi8_and__158__out = ((0xf3U 
                                              & (IData)(vlSelfRef.__Vfunc_mubi8_and__158__out)) 
                                             | (((2U 
                                                  & (((IData)(__Vfunc_mubi8_and__158__a_in) 
                                                      & (IData)(__Vfunc_mubi8_and__158__b_in)) 
                                                     >> 2U)) 
                                                 | (1U 
                                                    & (((IData)(__Vfunc_mubi8_and__158__a_in) 
                                                        | (IData)(__Vfunc_mubi8_and__158__b_in)) 
                                                       >> 2U))) 
                                                << 2U));
    vlSelfRef.__Vfunc_mubi8_and__158__out = ((0xcfU 
                                              & (IData)(vlSelfRef.__Vfunc_mubi8_and__158__out)) 
                                             | (((2U 
                                                  & (((IData)(__Vfunc_mubi8_and__158__a_in) 
                                                      & (IData)(__Vfunc_mubi8_and__158__b_in)) 
                                                     >> 4U)) 
                                                 | (1U 
                                                    & (((IData)(__Vfunc_mubi8_and__158__a_in) 
                                                        | (IData)(__Vfunc_mubi8_and__158__b_in)) 
                                                       >> 4U))) 
                                                << 4U));
    vlSelfRef.__Vfunc_mubi8_and__158__out = ((0x3fU 
                                              & (IData)(vlSelfRef.__Vfunc_mubi8_and__158__out)) 
                                             | (((2U 
                                                  & (((IData)(__Vfunc_mubi8_and__158__a_in) 
                                                      | (IData)(__Vfunc_mubi8_and__158__b_in)) 
                                                     >> 6U)) 
                                                 | (1U 
                                                    & (((IData)(__Vfunc_mubi8_and__158__a_in) 
                                                        & (IData)(__Vfunc_mubi8_and__158__b_in)) 
                                                       >> 6U))) 
                                                << 6U));
    __Vfunc_mubi8_and__158__Vfuncout = vlSelfRef.__Vfunc_mubi8_and__158__out;
    __Vfunc_mubi8_and_lo__157__Vfuncout = __Vfunc_mubi8_and__158__Vfuncout;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__2__KET____DOT__gen_unbuffered__DOT__u_part_unbuf__DOT____Vcellinp__u_prim_mubi8_sender_read_lock_pre__mubi_i 
        = __Vfunc_mubi8_and_lo__157__Vfuncout;
    __Vfunc_mubi8_and_lo__155__b = (0x000000ffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_access_pre[1U]);
    __Vfunc_mubi8_and__156__b = __Vfunc_mubi8_and_lo__155__b;
    __Vfunc_mubi8_and__156__a = __Vfunc_mubi8_and_lo__155__a;
    vlSelf->__Vfunc_mubi8_and__156__out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17151618360738947279ull);
    __Vfunc_mubi8_and__156__a_in = __Vfunc_mubi8_and__156__a;
    __Vfunc_mubi8_and__156__b_in = __Vfunc_mubi8_and__156__b;
    vlSelfRef.__Vfunc_mubi8_and__156__out = ((0xfcU 
                                              & (IData)(vlSelfRef.__Vfunc_mubi8_and__156__out)) 
                                             | ((2U 
                                                 & ((IData)(__Vfunc_mubi8_and__156__a_in) 
                                                    | (IData)(__Vfunc_mubi8_and__156__b_in))) 
                                                | (1U 
                                                   & ((IData)(__Vfunc_mubi8_and__156__a_in) 
                                                      & (IData)(__Vfunc_mubi8_and__156__b_in)))));
    vlSelfRef.__Vfunc_mubi8_and__156__out = ((0xf3U 
                                              & (IData)(vlSelfRef.__Vfunc_mubi8_and__156__out)) 
                                             | (((2U 
                                                  & (((IData)(__Vfunc_mubi8_and__156__a_in) 
                                                      & (IData)(__Vfunc_mubi8_and__156__b_in)) 
                                                     >> 2U)) 
                                                 | (1U 
                                                    & (((IData)(__Vfunc_mubi8_and__156__a_in) 
                                                        | (IData)(__Vfunc_mubi8_and__156__b_in)) 
                                                       >> 2U))) 
                                                << 2U));
    vlSelfRef.__Vfunc_mubi8_and__156__out = ((0xcfU 
                                              & (IData)(vlSelfRef.__Vfunc_mubi8_and__156__out)) 
                                             | (((2U 
                                                  & (((IData)(__Vfunc_mubi8_and__156__a_in) 
                                                      & (IData)(__Vfunc_mubi8_and__156__b_in)) 
                                                     >> 4U)) 
                                                 | (1U 
                                                    & (((IData)(__Vfunc_mubi8_and__156__a_in) 
                                                        | (IData)(__Vfunc_mubi8_and__156__b_in)) 
                                                       >> 4U))) 
                                                << 4U));
    vlSelfRef.__Vfunc_mubi8_and__156__out = ((0x3fU 
                                              & (IData)(vlSelfRef.__Vfunc_mubi8_and__156__out)) 
                                             | (((2U 
                                                  & (((IData)(__Vfunc_mubi8_and__156__a_in) 
                                                      | (IData)(__Vfunc_mubi8_and__156__b_in)) 
                                                     >> 6U)) 
                                                 | (1U 
                                                    & (((IData)(__Vfunc_mubi8_and__156__a_in) 
                                                        & (IData)(__Vfunc_mubi8_and__156__b_in)) 
                                                       >> 6U))) 
                                                << 6U));
    __Vfunc_mubi8_and__156__Vfuncout = vlSelfRef.__Vfunc_mubi8_and__156__out;
    __Vfunc_mubi8_and_lo__155__Vfuncout = __Vfunc_mubi8_and__156__Vfuncout;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__2__KET____DOT__gen_unbuffered__DOT__u_part_unbuf__DOT____Vcellinp__u_prim_mubi8_sender_write_lock_pre__mubi_i 
        = __Vfunc_mubi8_and_lo__155__Vfuncout;
    __Vfunc_mubi8_and_lo__159__b = ((0ULL == vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__2__KET____DOT__gen_unbuffered__DOT__u_part_unbuf__DOT__gen_ecc_reg__DOT__u_otp_ctrl_ecc_reg__DOT__data_q)
                                     ? 0x69U : 0x96U);
    __Vfunc_mubi8_and_lo__159__a = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__2__KET____DOT__gen_unbuffered__DOT__u_part_unbuf__DOT____Vcellinp__u_prim_mubi8_sender_write_lock_pre__mubi_i;
    __Vfunc_mubi8_and__160__b = __Vfunc_mubi8_and_lo__159__b;
    __Vfunc_mubi8_and__160__a = __Vfunc_mubi8_and_lo__159__a;
    vlSelf->__Vfunc_mubi8_and__160__out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16876060408186257220ull);
    __Vfunc_mubi8_and__160__a_in = __Vfunc_mubi8_and__160__a;
    __Vfunc_mubi8_and__160__b_in = __Vfunc_mubi8_and__160__b;
    vlSelfRef.__Vfunc_mubi8_and__160__out = ((0xfcU 
                                              & (IData)(vlSelfRef.__Vfunc_mubi8_and__160__out)) 
                                             | ((2U 
                                                 & ((IData)(__Vfunc_mubi8_and__160__a_in) 
                                                    | (IData)(__Vfunc_mubi8_and__160__b_in))) 
                                                | (1U 
                                                   & ((IData)(__Vfunc_mubi8_and__160__a_in) 
                                                      & (IData)(__Vfunc_mubi8_and__160__b_in)))));
    vlSelfRef.__Vfunc_mubi8_and__160__out = ((0xf3U 
                                              & (IData)(vlSelfRef.__Vfunc_mubi8_and__160__out)) 
                                             | (((2U 
                                                  & (((IData)(__Vfunc_mubi8_and__160__a_in) 
                                                      & (IData)(__Vfunc_mubi8_and__160__b_in)) 
                                                     >> 2U)) 
                                                 | (1U 
                                                    & (((IData)(__Vfunc_mubi8_and__160__a_in) 
                                                        | (IData)(__Vfunc_mubi8_and__160__b_in)) 
                                                       >> 2U))) 
                                                << 2U));
    vlSelfRef.__Vfunc_mubi8_and__160__out = ((0xcfU 
                                              & (IData)(vlSelfRef.__Vfunc_mubi8_and__160__out)) 
                                             | (((2U 
                                                  & (((IData)(__Vfunc_mubi8_and__160__a_in) 
                                                      & (IData)(__Vfunc_mubi8_and__160__b_in)) 
                                                     >> 4U)) 
                                                 | (1U 
                                                    & (((IData)(__Vfunc_mubi8_and__160__a_in) 
                                                        | (IData)(__Vfunc_mubi8_and__160__b_in)) 
                                                       >> 4U))) 
                                                << 4U));
    vlSelfRef.__Vfunc_mubi8_and__160__out = ((0x3fU 
                                              & (IData)(vlSelfRef.__Vfunc_mubi8_and__160__out)) 
                                             | (((2U 
                                                  & (((IData)(__Vfunc_mubi8_and__160__a_in) 
                                                      | (IData)(__Vfunc_mubi8_and__160__b_in)) 
                                                     >> 6U)) 
                                                 | (1U 
                                                    & (((IData)(__Vfunc_mubi8_and__160__a_in) 
                                                        & (IData)(__Vfunc_mubi8_and__160__b_in)) 
                                                       >> 6U))) 
                                                << 6U));
    __Vfunc_mubi8_and__160__Vfuncout = vlSelfRef.__Vfunc_mubi8_and__160__out;
    __Vfunc_mubi8_and_lo__159__Vfuncout = __Vfunc_mubi8_and__160__Vfuncout;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__2__KET____DOT__gen_unbuffered__DOT__u_part_unbuf__DOT____Vcellinp__gen_digest_write_lock__DOT__u_prim_mubi8_sender_write_lock__mubi_i 
        = __Vfunc_mubi8_and_lo__159__Vfuncout;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__2__KET____DOT__gen_unbuffered__DOT__u_part_unbuf__access_o 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__2__KET____DOT__gen_unbuffered__DOT__u_part_unbuf__DOT____Vcellinp__u_prim_mubi8_sender_read_lock_pre__mubi_i) 
            << 8U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__2__KET____DOT__gen_unbuffered__DOT__u_part_unbuf__DOT____Vcellinp__gen_digest_write_lock__DOT__u_prim_mubi8_sender_write_lock__mubi_i));
}

void Vsim___024root___act_comb__TOP__38(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___act_comb__TOP__38\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vfunc_mubi8_and_lo__147__Vfuncout;
    __Vfunc_mubi8_and_lo__147__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_mubi8_and_lo__147__a;
    __Vfunc_mubi8_and_lo__147__a = 0;
    CData/*7:0*/ __Vfunc_mubi8_and_lo__147__b;
    __Vfunc_mubi8_and_lo__147__b = 0;
    CData/*7:0*/ __Vfunc_mubi8_and__148__Vfuncout;
    __Vfunc_mubi8_and__148__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_mubi8_and__148__a;
    __Vfunc_mubi8_and__148__a = 0;
    CData/*7:0*/ __Vfunc_mubi8_and__148__b;
    __Vfunc_mubi8_and__148__b = 0;
    CData/*7:0*/ __Vfunc_mubi8_and__148__a_in;
    __Vfunc_mubi8_and__148__a_in = 0;
    CData/*7:0*/ __Vfunc_mubi8_and__148__b_in;
    __Vfunc_mubi8_and__148__b_in = 0;
    CData/*7:0*/ __Vfunc_mubi8_and_lo__149__Vfuncout;
    __Vfunc_mubi8_and_lo__149__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_mubi8_and_lo__149__a;
    __Vfunc_mubi8_and_lo__149__a = 0;
    CData/*7:0*/ __Vfunc_mubi8_and_lo__149__b;
    __Vfunc_mubi8_and_lo__149__b = 0;
    CData/*7:0*/ __Vfunc_mubi8_and__150__Vfuncout;
    __Vfunc_mubi8_and__150__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_mubi8_and__150__a;
    __Vfunc_mubi8_and__150__a = 0;
    CData/*7:0*/ __Vfunc_mubi8_and__150__b;
    __Vfunc_mubi8_and__150__b = 0;
    CData/*7:0*/ __Vfunc_mubi8_and__150__a_in;
    __Vfunc_mubi8_and__150__a_in = 0;
    CData/*7:0*/ __Vfunc_mubi8_and__150__b_in;
    __Vfunc_mubi8_and__150__b_in = 0;
    CData/*7:0*/ __Vfunc_mubi8_and_lo__151__Vfuncout;
    __Vfunc_mubi8_and_lo__151__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_mubi8_and_lo__151__a;
    __Vfunc_mubi8_and_lo__151__a = 0;
    CData/*7:0*/ __Vfunc_mubi8_and_lo__151__b;
    __Vfunc_mubi8_and_lo__151__b = 0;
    CData/*7:0*/ __Vfunc_mubi8_and__152__Vfuncout;
    __Vfunc_mubi8_and__152__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_mubi8_and__152__a;
    __Vfunc_mubi8_and__152__a = 0;
    CData/*7:0*/ __Vfunc_mubi8_and__152__b;
    __Vfunc_mubi8_and__152__b = 0;
    CData/*7:0*/ __Vfunc_mubi8_and__152__a_in;
    __Vfunc_mubi8_and__152__a_in = 0;
    CData/*7:0*/ __Vfunc_mubi8_and__152__b_in;
    __Vfunc_mubi8_and__152__b_in = 0;
    // Body
    __Vfunc_mubi8_and_lo__149__b = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_access_pre[0U] 
                                    >> 0x00000018U);
    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__1__KET____DOT__gen_unbuffered__DOT__u_part_unbuf__init_done_o) {
        __Vfunc_mubi8_and_lo__149__a = 0x69U;
        __Vfunc_mubi8_and_lo__147__a = 0x69U;
    } else {
        __Vfunc_mubi8_and_lo__149__a = 0x96U;
        __Vfunc_mubi8_and_lo__147__a = 0x96U;
    }
    __Vfunc_mubi8_and__150__b = __Vfunc_mubi8_and_lo__149__b;
    __Vfunc_mubi8_and__150__a = __Vfunc_mubi8_and_lo__149__a;
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__Vfunc_mubi8_and__150__out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13649172459868309524ull);
    __Vfunc_mubi8_and__150__a_in = __Vfunc_mubi8_and__150__a;
    __Vfunc_mubi8_and__150__b_in = __Vfunc_mubi8_and__150__b;
    vlSelfRef.__Vfunc_mubi8_and__150__out = ((0xfcU 
                                              & (IData)(vlSelfRef.__Vfunc_mubi8_and__150__out)) 
                                             | ((2U 
                                                 & ((IData)(__Vfunc_mubi8_and__150__a_in) 
                                                    | (IData)(__Vfunc_mubi8_and__150__b_in))) 
                                                | (1U 
                                                   & ((IData)(__Vfunc_mubi8_and__150__a_in) 
                                                      & (IData)(__Vfunc_mubi8_and__150__b_in)))));
    vlSelfRef.__Vfunc_mubi8_and__150__out = ((0xf3U 
                                              & (IData)(vlSelfRef.__Vfunc_mubi8_and__150__out)) 
                                             | (((2U 
                                                  & (((IData)(__Vfunc_mubi8_and__150__a_in) 
                                                      & (IData)(__Vfunc_mubi8_and__150__b_in)) 
                                                     >> 2U)) 
                                                 | (1U 
                                                    & (((IData)(__Vfunc_mubi8_and__150__a_in) 
                                                        | (IData)(__Vfunc_mubi8_and__150__b_in)) 
                                                       >> 2U))) 
                                                << 2U));
    vlSelfRef.__Vfunc_mubi8_and__150__out = ((0xcfU 
                                              & (IData)(vlSelfRef.__Vfunc_mubi8_and__150__out)) 
                                             | (((2U 
                                                  & (((IData)(__Vfunc_mubi8_and__150__a_in) 
                                                      & (IData)(__Vfunc_mubi8_and__150__b_in)) 
                                                     >> 4U)) 
                                                 | (1U 
                                                    & (((IData)(__Vfunc_mubi8_and__150__a_in) 
                                                        | (IData)(__Vfunc_mubi8_and__150__b_in)) 
                                                       >> 4U))) 
                                                << 4U));
    vlSelfRef.__Vfunc_mubi8_and__150__out = ((0x3fU 
                                              & (IData)(vlSelfRef.__Vfunc_mubi8_and__150__out)) 
                                             | (((2U 
                                                  & (((IData)(__Vfunc_mubi8_and__150__a_in) 
                                                      | (IData)(__Vfunc_mubi8_and__150__b_in)) 
                                                     >> 6U)) 
                                                 | (1U 
                                                    & (((IData)(__Vfunc_mubi8_and__150__a_in) 
                                                        & (IData)(__Vfunc_mubi8_and__150__b_in)) 
                                                       >> 6U))) 
                                                << 6U));
    __Vfunc_mubi8_and__150__Vfuncout = vlSelfRef.__Vfunc_mubi8_and__150__out;
    __Vfunc_mubi8_and_lo__149__Vfuncout = __Vfunc_mubi8_and__150__Vfuncout;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__1__KET____DOT__gen_unbuffered__DOT__u_part_unbuf__DOT____Vcellinp__u_prim_mubi8_sender_read_lock_pre__mubi_i 
        = __Vfunc_mubi8_and_lo__149__Vfuncout;
    __Vfunc_mubi8_and_lo__147__b = (0x000000ffU & (
                                                   vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_access_pre[0U] 
                                                   >> 0x00000010U));
    __Vfunc_mubi8_and__148__b = __Vfunc_mubi8_and_lo__147__b;
    __Vfunc_mubi8_and__148__a = __Vfunc_mubi8_and_lo__147__a;
    vlSelf->__Vfunc_mubi8_and__148__out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13680968933626939571ull);
    __Vfunc_mubi8_and__148__a_in = __Vfunc_mubi8_and__148__a;
    __Vfunc_mubi8_and__148__b_in = __Vfunc_mubi8_and__148__b;
    vlSelfRef.__Vfunc_mubi8_and__148__out = ((0xfcU 
                                              & (IData)(vlSelfRef.__Vfunc_mubi8_and__148__out)) 
                                             | ((2U 
                                                 & ((IData)(__Vfunc_mubi8_and__148__a_in) 
                                                    | (IData)(__Vfunc_mubi8_and__148__b_in))) 
                                                | (1U 
                                                   & ((IData)(__Vfunc_mubi8_and__148__a_in) 
                                                      & (IData)(__Vfunc_mubi8_and__148__b_in)))));
    vlSelfRef.__Vfunc_mubi8_and__148__out = ((0xf3U 
                                              & (IData)(vlSelfRef.__Vfunc_mubi8_and__148__out)) 
                                             | (((2U 
                                                  & (((IData)(__Vfunc_mubi8_and__148__a_in) 
                                                      & (IData)(__Vfunc_mubi8_and__148__b_in)) 
                                                     >> 2U)) 
                                                 | (1U 
                                                    & (((IData)(__Vfunc_mubi8_and__148__a_in) 
                                                        | (IData)(__Vfunc_mubi8_and__148__b_in)) 
                                                       >> 2U))) 
                                                << 2U));
    vlSelfRef.__Vfunc_mubi8_and__148__out = ((0xcfU 
                                              & (IData)(vlSelfRef.__Vfunc_mubi8_and__148__out)) 
                                             | (((2U 
                                                  & (((IData)(__Vfunc_mubi8_and__148__a_in) 
                                                      & (IData)(__Vfunc_mubi8_and__148__b_in)) 
                                                     >> 4U)) 
                                                 | (1U 
                                                    & (((IData)(__Vfunc_mubi8_and__148__a_in) 
                                                        | (IData)(__Vfunc_mubi8_and__148__b_in)) 
                                                       >> 4U))) 
                                                << 4U));
    vlSelfRef.__Vfunc_mubi8_and__148__out = ((0x3fU 
                                              & (IData)(vlSelfRef.__Vfunc_mubi8_and__148__out)) 
                                             | (((2U 
                                                  & (((IData)(__Vfunc_mubi8_and__148__a_in) 
                                                      | (IData)(__Vfunc_mubi8_and__148__b_in)) 
                                                     >> 6U)) 
                                                 | (1U 
                                                    & (((IData)(__Vfunc_mubi8_and__148__a_in) 
                                                        & (IData)(__Vfunc_mubi8_and__148__b_in)) 
                                                       >> 6U))) 
                                                << 6U));
    __Vfunc_mubi8_and__148__Vfuncout = vlSelfRef.__Vfunc_mubi8_and__148__out;
    __Vfunc_mubi8_and_lo__147__Vfuncout = __Vfunc_mubi8_and__148__Vfuncout;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__1__KET____DOT__gen_unbuffered__DOT__u_part_unbuf__DOT____Vcellinp__u_prim_mubi8_sender_write_lock_pre__mubi_i 
        = __Vfunc_mubi8_and_lo__147__Vfuncout;
    __Vfunc_mubi8_and_lo__151__b = ((0ULL == vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__1__KET____DOT__gen_unbuffered__DOT__u_part_unbuf__DOT__gen_ecc_reg__DOT__u_otp_ctrl_ecc_reg__DOT__data_q)
                                     ? 0x69U : 0x96U);
    __Vfunc_mubi8_and_lo__151__a = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__1__KET____DOT__gen_unbuffered__DOT__u_part_unbuf__DOT____Vcellinp__u_prim_mubi8_sender_write_lock_pre__mubi_i;
    __Vfunc_mubi8_and__152__b = __Vfunc_mubi8_and_lo__151__b;
    __Vfunc_mubi8_and__152__a = __Vfunc_mubi8_and_lo__151__a;
    vlSelf->__Vfunc_mubi8_and__152__out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17155947336000690420ull);
    __Vfunc_mubi8_and__152__a_in = __Vfunc_mubi8_and__152__a;
    __Vfunc_mubi8_and__152__b_in = __Vfunc_mubi8_and__152__b;
    vlSelfRef.__Vfunc_mubi8_and__152__out = ((0xfcU 
                                              & (IData)(vlSelfRef.__Vfunc_mubi8_and__152__out)) 
                                             | ((2U 
                                                 & ((IData)(__Vfunc_mubi8_and__152__a_in) 
                                                    | (IData)(__Vfunc_mubi8_and__152__b_in))) 
                                                | (1U 
                                                   & ((IData)(__Vfunc_mubi8_and__152__a_in) 
                                                      & (IData)(__Vfunc_mubi8_and__152__b_in)))));
    vlSelfRef.__Vfunc_mubi8_and__152__out = ((0xf3U 
                                              & (IData)(vlSelfRef.__Vfunc_mubi8_and__152__out)) 
                                             | (((2U 
                                                  & (((IData)(__Vfunc_mubi8_and__152__a_in) 
                                                      & (IData)(__Vfunc_mubi8_and__152__b_in)) 
                                                     >> 2U)) 
                                                 | (1U 
                                                    & (((IData)(__Vfunc_mubi8_and__152__a_in) 
                                                        | (IData)(__Vfunc_mubi8_and__152__b_in)) 
                                                       >> 2U))) 
                                                << 2U));
    vlSelfRef.__Vfunc_mubi8_and__152__out = ((0xcfU 
                                              & (IData)(vlSelfRef.__Vfunc_mubi8_and__152__out)) 
                                             | (((2U 
                                                  & (((IData)(__Vfunc_mubi8_and__152__a_in) 
                                                      & (IData)(__Vfunc_mubi8_and__152__b_in)) 
                                                     >> 4U)) 
                                                 | (1U 
                                                    & (((IData)(__Vfunc_mubi8_and__152__a_in) 
                                                        | (IData)(__Vfunc_mubi8_and__152__b_in)) 
                                                       >> 4U))) 
                                                << 4U));
    vlSelfRef.__Vfunc_mubi8_and__152__out = ((0x3fU 
                                              & (IData)(vlSelfRef.__Vfunc_mubi8_and__152__out)) 
                                             | (((2U 
                                                  & (((IData)(__Vfunc_mubi8_and__152__a_in) 
                                                      | (IData)(__Vfunc_mubi8_and__152__b_in)) 
                                                     >> 6U)) 
                                                 | (1U 
                                                    & (((IData)(__Vfunc_mubi8_and__152__a_in) 
                                                        & (IData)(__Vfunc_mubi8_and__152__b_in)) 
                                                       >> 6U))) 
                                                << 6U));
    __Vfunc_mubi8_and__152__Vfuncout = vlSelfRef.__Vfunc_mubi8_and__152__out;
    __Vfunc_mubi8_and_lo__151__Vfuncout = __Vfunc_mubi8_and__152__Vfuncout;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__1__KET____DOT__gen_unbuffered__DOT__u_part_unbuf__DOT____Vcellinp__gen_digest_write_lock__DOT__u_prim_mubi8_sender_write_lock__mubi_i 
        = __Vfunc_mubi8_and_lo__151__Vfuncout;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__1__KET____DOT__gen_unbuffered__DOT__u_part_unbuf__access_o 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__1__KET____DOT__gen_unbuffered__DOT__u_part_unbuf__DOT____Vcellinp__u_prim_mubi8_sender_read_lock_pre__mubi_i) 
            << 8U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__1__KET____DOT__gen_unbuffered__DOT__u_part_unbuf__DOT____Vcellinp__gen_digest_write_lock__DOT__u_prim_mubi8_sender_write_lock__mubi_i));
}

void Vsim___024root___act_comb__TOP__39(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___act_comb__TOP__39\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vfunc_mubi8_and_lo__139__Vfuncout;
    __Vfunc_mubi8_and_lo__139__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_mubi8_and_lo__139__a;
    __Vfunc_mubi8_and_lo__139__a = 0;
    CData/*7:0*/ __Vfunc_mubi8_and_lo__139__b;
    __Vfunc_mubi8_and_lo__139__b = 0;
    CData/*7:0*/ __Vfunc_mubi8_and__140__Vfuncout;
    __Vfunc_mubi8_and__140__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_mubi8_and__140__a;
    __Vfunc_mubi8_and__140__a = 0;
    CData/*7:0*/ __Vfunc_mubi8_and__140__b;
    __Vfunc_mubi8_and__140__b = 0;
    CData/*7:0*/ __Vfunc_mubi8_and__140__a_in;
    __Vfunc_mubi8_and__140__a_in = 0;
    CData/*7:0*/ __Vfunc_mubi8_and__140__b_in;
    __Vfunc_mubi8_and__140__b_in = 0;
    CData/*7:0*/ __Vfunc_mubi8_and_lo__141__Vfuncout;
    __Vfunc_mubi8_and_lo__141__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_mubi8_and_lo__141__a;
    __Vfunc_mubi8_and_lo__141__a = 0;
    CData/*7:0*/ __Vfunc_mubi8_and_lo__141__b;
    __Vfunc_mubi8_and_lo__141__b = 0;
    CData/*7:0*/ __Vfunc_mubi8_and__142__Vfuncout;
    __Vfunc_mubi8_and__142__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_mubi8_and__142__a;
    __Vfunc_mubi8_and__142__a = 0;
    CData/*7:0*/ __Vfunc_mubi8_and__142__b;
    __Vfunc_mubi8_and__142__b = 0;
    CData/*7:0*/ __Vfunc_mubi8_and__142__a_in;
    __Vfunc_mubi8_and__142__a_in = 0;
    CData/*7:0*/ __Vfunc_mubi8_and__142__b_in;
    __Vfunc_mubi8_and__142__b_in = 0;
    CData/*7:0*/ __Vfunc_mubi8_and_lo__143__Vfuncout;
    __Vfunc_mubi8_and_lo__143__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_mubi8_and_lo__143__a;
    __Vfunc_mubi8_and_lo__143__a = 0;
    CData/*7:0*/ __Vfunc_mubi8_and_lo__143__b;
    __Vfunc_mubi8_and_lo__143__b = 0;
    CData/*7:0*/ __Vfunc_mubi8_and__144__Vfuncout;
    __Vfunc_mubi8_and__144__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_mubi8_and__144__a;
    __Vfunc_mubi8_and__144__a = 0;
    CData/*7:0*/ __Vfunc_mubi8_and__144__b;
    __Vfunc_mubi8_and__144__b = 0;
    CData/*7:0*/ __Vfunc_mubi8_and__144__a_in;
    __Vfunc_mubi8_and__144__a_in = 0;
    CData/*7:0*/ __Vfunc_mubi8_and__144__b_in;
    __Vfunc_mubi8_and__144__b_in = 0;
    // Body
    __Vfunc_mubi8_and_lo__141__b = (0x000000ffU & (
                                                   vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_access_pre[0U] 
                                                   >> 8U));
    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__0__KET____DOT__gen_unbuffered__DOT__u_part_unbuf__init_done_o) {
        __Vfunc_mubi8_and_lo__141__a = 0x69U;
        __Vfunc_mubi8_and_lo__139__a = 0x69U;
    } else {
        __Vfunc_mubi8_and_lo__141__a = 0x96U;
        __Vfunc_mubi8_and_lo__139__a = 0x96U;
    }
    __Vfunc_mubi8_and__142__b = __Vfunc_mubi8_and_lo__141__b;
    __Vfunc_mubi8_and__142__a = __Vfunc_mubi8_and_lo__141__a;
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__Vfunc_mubi8_and__142__out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13599321283925776853ull);
    __Vfunc_mubi8_and__142__a_in = __Vfunc_mubi8_and__142__a;
    __Vfunc_mubi8_and__142__b_in = __Vfunc_mubi8_and__142__b;
    vlSelfRef.__Vfunc_mubi8_and__142__out = ((0xfcU 
                                              & (IData)(vlSelfRef.__Vfunc_mubi8_and__142__out)) 
                                             | ((2U 
                                                 & ((IData)(__Vfunc_mubi8_and__142__a_in) 
                                                    | (IData)(__Vfunc_mubi8_and__142__b_in))) 
                                                | (1U 
                                                   & ((IData)(__Vfunc_mubi8_and__142__a_in) 
                                                      & (IData)(__Vfunc_mubi8_and__142__b_in)))));
    vlSelfRef.__Vfunc_mubi8_and__142__out = ((0xf3U 
                                              & (IData)(vlSelfRef.__Vfunc_mubi8_and__142__out)) 
                                             | (((2U 
                                                  & (((IData)(__Vfunc_mubi8_and__142__a_in) 
                                                      & (IData)(__Vfunc_mubi8_and__142__b_in)) 
                                                     >> 2U)) 
                                                 | (1U 
                                                    & (((IData)(__Vfunc_mubi8_and__142__a_in) 
                                                        | (IData)(__Vfunc_mubi8_and__142__b_in)) 
                                                       >> 2U))) 
                                                << 2U));
    vlSelfRef.__Vfunc_mubi8_and__142__out = ((0xcfU 
                                              & (IData)(vlSelfRef.__Vfunc_mubi8_and__142__out)) 
                                             | (((2U 
                                                  & (((IData)(__Vfunc_mubi8_and__142__a_in) 
                                                      & (IData)(__Vfunc_mubi8_and__142__b_in)) 
                                                     >> 4U)) 
                                                 | (1U 
                                                    & (((IData)(__Vfunc_mubi8_and__142__a_in) 
                                                        | (IData)(__Vfunc_mubi8_and__142__b_in)) 
                                                       >> 4U))) 
                                                << 4U));
    vlSelfRef.__Vfunc_mubi8_and__142__out = ((0x3fU 
                                              & (IData)(vlSelfRef.__Vfunc_mubi8_and__142__out)) 
                                             | (((2U 
                                                  & (((IData)(__Vfunc_mubi8_and__142__a_in) 
                                                      | (IData)(__Vfunc_mubi8_and__142__b_in)) 
                                                     >> 6U)) 
                                                 | (1U 
                                                    & (((IData)(__Vfunc_mubi8_and__142__a_in) 
                                                        & (IData)(__Vfunc_mubi8_and__142__b_in)) 
                                                       >> 6U))) 
                                                << 6U));
    __Vfunc_mubi8_and__142__Vfuncout = vlSelfRef.__Vfunc_mubi8_and__142__out;
    __Vfunc_mubi8_and_lo__141__Vfuncout = __Vfunc_mubi8_and__142__Vfuncout;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__0__KET____DOT__gen_unbuffered__DOT__u_part_unbuf__DOT____Vcellinp__u_prim_mubi8_sender_read_lock_pre__mubi_i 
        = __Vfunc_mubi8_and_lo__141__Vfuncout;
    __Vfunc_mubi8_and_lo__139__b = (0x000000ffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_access_pre[0U]);
    __Vfunc_mubi8_and__140__b = __Vfunc_mubi8_and_lo__139__b;
    __Vfunc_mubi8_and__140__a = __Vfunc_mubi8_and_lo__139__a;
    vlSelf->__Vfunc_mubi8_and__140__out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2678751665203233955ull);
    __Vfunc_mubi8_and__140__a_in = __Vfunc_mubi8_and__140__a;
    __Vfunc_mubi8_and__140__b_in = __Vfunc_mubi8_and__140__b;
    vlSelfRef.__Vfunc_mubi8_and__140__out = ((0xfcU 
                                              & (IData)(vlSelfRef.__Vfunc_mubi8_and__140__out)) 
                                             | ((2U 
                                                 & ((IData)(__Vfunc_mubi8_and__140__a_in) 
                                                    | (IData)(__Vfunc_mubi8_and__140__b_in))) 
                                                | (1U 
                                                   & ((IData)(__Vfunc_mubi8_and__140__a_in) 
                                                      & (IData)(__Vfunc_mubi8_and__140__b_in)))));
    vlSelfRef.__Vfunc_mubi8_and__140__out = ((0xf3U 
                                              & (IData)(vlSelfRef.__Vfunc_mubi8_and__140__out)) 
                                             | (((2U 
                                                  & (((IData)(__Vfunc_mubi8_and__140__a_in) 
                                                      & (IData)(__Vfunc_mubi8_and__140__b_in)) 
                                                     >> 2U)) 
                                                 | (1U 
                                                    & (((IData)(__Vfunc_mubi8_and__140__a_in) 
                                                        | (IData)(__Vfunc_mubi8_and__140__b_in)) 
                                                       >> 2U))) 
                                                << 2U));
    vlSelfRef.__Vfunc_mubi8_and__140__out = ((0xcfU 
                                              & (IData)(vlSelfRef.__Vfunc_mubi8_and__140__out)) 
                                             | (((2U 
                                                  & (((IData)(__Vfunc_mubi8_and__140__a_in) 
                                                      & (IData)(__Vfunc_mubi8_and__140__b_in)) 
                                                     >> 4U)) 
                                                 | (1U 
                                                    & (((IData)(__Vfunc_mubi8_and__140__a_in) 
                                                        | (IData)(__Vfunc_mubi8_and__140__b_in)) 
                                                       >> 4U))) 
                                                << 4U));
    vlSelfRef.__Vfunc_mubi8_and__140__out = ((0x3fU 
                                              & (IData)(vlSelfRef.__Vfunc_mubi8_and__140__out)) 
                                             | (((2U 
                                                  & (((IData)(__Vfunc_mubi8_and__140__a_in) 
                                                      | (IData)(__Vfunc_mubi8_and__140__b_in)) 
                                                     >> 6U)) 
                                                 | (1U 
                                                    & (((IData)(__Vfunc_mubi8_and__140__a_in) 
                                                        & (IData)(__Vfunc_mubi8_and__140__b_in)) 
                                                       >> 6U))) 
                                                << 6U));
    __Vfunc_mubi8_and__140__Vfuncout = vlSelfRef.__Vfunc_mubi8_and__140__out;
    __Vfunc_mubi8_and_lo__139__Vfuncout = __Vfunc_mubi8_and__140__Vfuncout;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__0__KET____DOT__gen_unbuffered__DOT__u_part_unbuf__DOT____Vcellinp__u_prim_mubi8_sender_write_lock_pre__mubi_i 
        = __Vfunc_mubi8_and_lo__139__Vfuncout;
    __Vfunc_mubi8_and_lo__143__b = ((0ULL == vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__0__KET____DOT__gen_unbuffered__DOT__u_part_unbuf__DOT__gen_ecc_reg__DOT__u_otp_ctrl_ecc_reg__DOT__data_q)
                                     ? 0x69U : 0x96U);
    __Vfunc_mubi8_and_lo__143__a = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__0__KET____DOT__gen_unbuffered__DOT__u_part_unbuf__DOT____Vcellinp__u_prim_mubi8_sender_write_lock_pre__mubi_i;
    __Vfunc_mubi8_and__144__b = __Vfunc_mubi8_and_lo__143__b;
    __Vfunc_mubi8_and__144__a = __Vfunc_mubi8_and_lo__143__a;
    vlSelf->__Vfunc_mubi8_and__144__out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16368530745350505422ull);
    __Vfunc_mubi8_and__144__a_in = __Vfunc_mubi8_and__144__a;
    __Vfunc_mubi8_and__144__b_in = __Vfunc_mubi8_and__144__b;
    vlSelfRef.__Vfunc_mubi8_and__144__out = ((0xfcU 
                                              & (IData)(vlSelfRef.__Vfunc_mubi8_and__144__out)) 
                                             | ((2U 
                                                 & ((IData)(__Vfunc_mubi8_and__144__a_in) 
                                                    | (IData)(__Vfunc_mubi8_and__144__b_in))) 
                                                | (1U 
                                                   & ((IData)(__Vfunc_mubi8_and__144__a_in) 
                                                      & (IData)(__Vfunc_mubi8_and__144__b_in)))));
    vlSelfRef.__Vfunc_mubi8_and__144__out = ((0xf3U 
                                              & (IData)(vlSelfRef.__Vfunc_mubi8_and__144__out)) 
                                             | (((2U 
                                                  & (((IData)(__Vfunc_mubi8_and__144__a_in) 
                                                      & (IData)(__Vfunc_mubi8_and__144__b_in)) 
                                                     >> 2U)) 
                                                 | (1U 
                                                    & (((IData)(__Vfunc_mubi8_and__144__a_in) 
                                                        | (IData)(__Vfunc_mubi8_and__144__b_in)) 
                                                       >> 2U))) 
                                                << 2U));
    vlSelfRef.__Vfunc_mubi8_and__144__out = ((0xcfU 
                                              & (IData)(vlSelfRef.__Vfunc_mubi8_and__144__out)) 
                                             | (((2U 
                                                  & (((IData)(__Vfunc_mubi8_and__144__a_in) 
                                                      & (IData)(__Vfunc_mubi8_and__144__b_in)) 
                                                     >> 4U)) 
                                                 | (1U 
                                                    & (((IData)(__Vfunc_mubi8_and__144__a_in) 
                                                        | (IData)(__Vfunc_mubi8_and__144__b_in)) 
                                                       >> 4U))) 
                                                << 4U));
    vlSelfRef.__Vfunc_mubi8_and__144__out = ((0x3fU 
                                              & (IData)(vlSelfRef.__Vfunc_mubi8_and__144__out)) 
                                             | (((2U 
                                                  & (((IData)(__Vfunc_mubi8_and__144__a_in) 
                                                      | (IData)(__Vfunc_mubi8_and__144__b_in)) 
                                                     >> 6U)) 
                                                 | (1U 
                                                    & (((IData)(__Vfunc_mubi8_and__144__a_in) 
                                                        & (IData)(__Vfunc_mubi8_and__144__b_in)) 
                                                       >> 6U))) 
                                                << 6U));
    __Vfunc_mubi8_and__144__Vfuncout = vlSelfRef.__Vfunc_mubi8_and__144__out;
    __Vfunc_mubi8_and_lo__143__Vfuncout = __Vfunc_mubi8_and__144__Vfuncout;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__0__KET____DOT__gen_unbuffered__DOT__u_part_unbuf__DOT____Vcellinp__gen_digest_write_lock__DOT__u_prim_mubi8_sender_write_lock__mubi_i 
        = __Vfunc_mubi8_and_lo__143__Vfuncout;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__0__KET____DOT__gen_unbuffered__DOT__u_part_unbuf__access_o 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__0__KET____DOT__gen_unbuffered__DOT__u_part_unbuf__DOT____Vcellinp__u_prim_mubi8_sender_read_lock_pre__mubi_i) 
            << 8U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__0__KET____DOT__gen_unbuffered__DOT__u_part_unbuf__DOT____Vcellinp__gen_digest_write_lock__DOT__u_prim_mubi8_sender_write_lock__mubi_i));
}

void Vsim___024root___act_comb__TOP__40(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___act_comb__TOP__40\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vfunc_mubi8_and_lo__171__Vfuncout;
    __Vfunc_mubi8_and_lo__171__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_mubi8_and_lo__171__a;
    __Vfunc_mubi8_and_lo__171__a = 0;
    CData/*7:0*/ __Vfunc_mubi8_and_lo__171__b;
    __Vfunc_mubi8_and_lo__171__b = 0;
    CData/*7:0*/ __Vfunc_mubi8_and__172__Vfuncout;
    __Vfunc_mubi8_and__172__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_mubi8_and__172__a;
    __Vfunc_mubi8_and__172__a = 0;
    CData/*7:0*/ __Vfunc_mubi8_and__172__b;
    __Vfunc_mubi8_and__172__b = 0;
    CData/*7:0*/ __Vfunc_mubi8_and__172__a_in;
    __Vfunc_mubi8_and__172__a_in = 0;
    CData/*7:0*/ __Vfunc_mubi8_and__172__b_in;
    __Vfunc_mubi8_and__172__b_in = 0;
    CData/*7:0*/ __Vfunc_mubi8_and_lo__173__Vfuncout;
    __Vfunc_mubi8_and_lo__173__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_mubi8_and_lo__173__a;
    __Vfunc_mubi8_and_lo__173__a = 0;
    CData/*7:0*/ __Vfunc_mubi8_and_lo__173__b;
    __Vfunc_mubi8_and_lo__173__b = 0;
    CData/*7:0*/ __Vfunc_mubi8_and__174__Vfuncout;
    __Vfunc_mubi8_and__174__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_mubi8_and__174__a;
    __Vfunc_mubi8_and__174__a = 0;
    CData/*7:0*/ __Vfunc_mubi8_and__174__b;
    __Vfunc_mubi8_and__174__b = 0;
    CData/*7:0*/ __Vfunc_mubi8_and__174__a_in;
    __Vfunc_mubi8_and__174__a_in = 0;
    CData/*7:0*/ __Vfunc_mubi8_and__174__b_in;
    __Vfunc_mubi8_and__174__b_in = 0;
    CData/*7:0*/ __Vfunc_mubi8_and_lo__175__Vfuncout;
    __Vfunc_mubi8_and_lo__175__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_mubi8_and_lo__175__a;
    __Vfunc_mubi8_and_lo__175__a = 0;
    CData/*7:0*/ __Vfunc_mubi8_and_lo__175__b;
    __Vfunc_mubi8_and_lo__175__b = 0;
    CData/*7:0*/ __Vfunc_mubi8_and__176__Vfuncout;
    __Vfunc_mubi8_and__176__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_mubi8_and__176__a;
    __Vfunc_mubi8_and__176__a = 0;
    CData/*7:0*/ __Vfunc_mubi8_and__176__b;
    __Vfunc_mubi8_and__176__b = 0;
    CData/*7:0*/ __Vfunc_mubi8_and__176__a_in;
    __Vfunc_mubi8_and__176__a_in = 0;
    CData/*7:0*/ __Vfunc_mubi8_and__176__b_in;
    __Vfunc_mubi8_and__176__b_in = 0;
    // Body
    __Vfunc_mubi8_and_lo__173__b = (0x000000ffU & (
                                                   vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_access_pre[2U] 
                                                   >> 8U));
    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__4__KET____DOT__gen_unbuffered__DOT__u_part_unbuf__init_done_o) {
        __Vfunc_mubi8_and_lo__173__a = 0x69U;
        __Vfunc_mubi8_and_lo__171__a = 0x69U;
    } else {
        __Vfunc_mubi8_and_lo__173__a = 0x96U;
        __Vfunc_mubi8_and_lo__171__a = 0x96U;
    }
    __Vfunc_mubi8_and__174__b = __Vfunc_mubi8_and_lo__173__b;
    __Vfunc_mubi8_and__174__a = __Vfunc_mubi8_and_lo__173__a;
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__Vfunc_mubi8_and__174__out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14827157781507664568ull);
    __Vfunc_mubi8_and__174__a_in = __Vfunc_mubi8_and__174__a;
    __Vfunc_mubi8_and__174__b_in = __Vfunc_mubi8_and__174__b;
    vlSelfRef.__Vfunc_mubi8_and__174__out = ((0xfcU 
                                              & (IData)(vlSelfRef.__Vfunc_mubi8_and__174__out)) 
                                             | ((2U 
                                                 & ((IData)(__Vfunc_mubi8_and__174__a_in) 
                                                    | (IData)(__Vfunc_mubi8_and__174__b_in))) 
                                                | (1U 
                                                   & ((IData)(__Vfunc_mubi8_and__174__a_in) 
                                                      & (IData)(__Vfunc_mubi8_and__174__b_in)))));
    vlSelfRef.__Vfunc_mubi8_and__174__out = ((0xf3U 
                                              & (IData)(vlSelfRef.__Vfunc_mubi8_and__174__out)) 
                                             | (((2U 
                                                  & (((IData)(__Vfunc_mubi8_and__174__a_in) 
                                                      & (IData)(__Vfunc_mubi8_and__174__b_in)) 
                                                     >> 2U)) 
                                                 | (1U 
                                                    & (((IData)(__Vfunc_mubi8_and__174__a_in) 
                                                        | (IData)(__Vfunc_mubi8_and__174__b_in)) 
                                                       >> 2U))) 
                                                << 2U));
    vlSelfRef.__Vfunc_mubi8_and__174__out = ((0xcfU 
                                              & (IData)(vlSelfRef.__Vfunc_mubi8_and__174__out)) 
                                             | (((2U 
                                                  & (((IData)(__Vfunc_mubi8_and__174__a_in) 
                                                      & (IData)(__Vfunc_mubi8_and__174__b_in)) 
                                                     >> 4U)) 
                                                 | (1U 
                                                    & (((IData)(__Vfunc_mubi8_and__174__a_in) 
                                                        | (IData)(__Vfunc_mubi8_and__174__b_in)) 
                                                       >> 4U))) 
                                                << 4U));
    vlSelfRef.__Vfunc_mubi8_and__174__out = ((0x3fU 
                                              & (IData)(vlSelfRef.__Vfunc_mubi8_and__174__out)) 
                                             | (((2U 
                                                  & (((IData)(__Vfunc_mubi8_and__174__a_in) 
                                                      | (IData)(__Vfunc_mubi8_and__174__b_in)) 
                                                     >> 6U)) 
                                                 | (1U 
                                                    & (((IData)(__Vfunc_mubi8_and__174__a_in) 
                                                        & (IData)(__Vfunc_mubi8_and__174__b_in)) 
                                                       >> 6U))) 
                                                << 6U));
    __Vfunc_mubi8_and__174__Vfuncout = vlSelfRef.__Vfunc_mubi8_and__174__out;
    __Vfunc_mubi8_and_lo__173__Vfuncout = __Vfunc_mubi8_and__174__Vfuncout;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__4__KET____DOT__gen_unbuffered__DOT__u_part_unbuf__DOT____Vcellinp__u_prim_mubi8_sender_read_lock_pre__mubi_i 
        = __Vfunc_mubi8_and_lo__173__Vfuncout;
    __Vfunc_mubi8_and_lo__171__b = (0x000000ffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_access_pre[2U]);
    __Vfunc_mubi8_and__172__b = __Vfunc_mubi8_and_lo__171__b;
    __Vfunc_mubi8_and__172__a = __Vfunc_mubi8_and_lo__171__a;
    vlSelf->__Vfunc_mubi8_and__172__out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7857901529361949004ull);
    __Vfunc_mubi8_and__172__a_in = __Vfunc_mubi8_and__172__a;
    __Vfunc_mubi8_and__172__b_in = __Vfunc_mubi8_and__172__b;
    vlSelfRef.__Vfunc_mubi8_and__172__out = ((0xfcU 
                                              & (IData)(vlSelfRef.__Vfunc_mubi8_and__172__out)) 
                                             | ((2U 
                                                 & ((IData)(__Vfunc_mubi8_and__172__a_in) 
                                                    | (IData)(__Vfunc_mubi8_and__172__b_in))) 
                                                | (1U 
                                                   & ((IData)(__Vfunc_mubi8_and__172__a_in) 
                                                      & (IData)(__Vfunc_mubi8_and__172__b_in)))));
    vlSelfRef.__Vfunc_mubi8_and__172__out = ((0xf3U 
                                              & (IData)(vlSelfRef.__Vfunc_mubi8_and__172__out)) 
                                             | (((2U 
                                                  & (((IData)(__Vfunc_mubi8_and__172__a_in) 
                                                      & (IData)(__Vfunc_mubi8_and__172__b_in)) 
                                                     >> 2U)) 
                                                 | (1U 
                                                    & (((IData)(__Vfunc_mubi8_and__172__a_in) 
                                                        | (IData)(__Vfunc_mubi8_and__172__b_in)) 
                                                       >> 2U))) 
                                                << 2U));
    vlSelfRef.__Vfunc_mubi8_and__172__out = ((0xcfU 
                                              & (IData)(vlSelfRef.__Vfunc_mubi8_and__172__out)) 
                                             | (((2U 
                                                  & (((IData)(__Vfunc_mubi8_and__172__a_in) 
                                                      & (IData)(__Vfunc_mubi8_and__172__b_in)) 
                                                     >> 4U)) 
                                                 | (1U 
                                                    & (((IData)(__Vfunc_mubi8_and__172__a_in) 
                                                        | (IData)(__Vfunc_mubi8_and__172__b_in)) 
                                                       >> 4U))) 
                                                << 4U));
    vlSelfRef.__Vfunc_mubi8_and__172__out = ((0x3fU 
                                              & (IData)(vlSelfRef.__Vfunc_mubi8_and__172__out)) 
                                             | (((2U 
                                                  & (((IData)(__Vfunc_mubi8_and__172__a_in) 
                                                      | (IData)(__Vfunc_mubi8_and__172__b_in)) 
                                                     >> 6U)) 
                                                 | (1U 
                                                    & (((IData)(__Vfunc_mubi8_and__172__a_in) 
                                                        & (IData)(__Vfunc_mubi8_and__172__b_in)) 
                                                       >> 6U))) 
                                                << 6U));
    __Vfunc_mubi8_and__172__Vfuncout = vlSelfRef.__Vfunc_mubi8_and__172__out;
    __Vfunc_mubi8_and_lo__171__Vfuncout = __Vfunc_mubi8_and__172__Vfuncout;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__4__KET____DOT__gen_unbuffered__DOT__u_part_unbuf__DOT____Vcellinp__u_prim_mubi8_sender_write_lock_pre__mubi_i 
        = __Vfunc_mubi8_and_lo__171__Vfuncout;
    __Vfunc_mubi8_and_lo__175__b = ((0ULL == vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__4__KET____DOT__gen_unbuffered__DOT__u_part_unbuf__DOT__gen_ecc_reg__DOT__u_otp_ctrl_ecc_reg__DOT__data_q)
                                     ? 0x69U : 0x96U);
    __Vfunc_mubi8_and_lo__175__a = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__4__KET____DOT__gen_unbuffered__DOT__u_part_unbuf__DOT____Vcellinp__u_prim_mubi8_sender_write_lock_pre__mubi_i;
    __Vfunc_mubi8_and__176__b = __Vfunc_mubi8_and_lo__175__b;
    __Vfunc_mubi8_and__176__a = __Vfunc_mubi8_and_lo__175__a;
    vlSelf->__Vfunc_mubi8_and__176__out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4266899397314482966ull);
    __Vfunc_mubi8_and__176__a_in = __Vfunc_mubi8_and__176__a;
    __Vfunc_mubi8_and__176__b_in = __Vfunc_mubi8_and__176__b;
    vlSelfRef.__Vfunc_mubi8_and__176__out = ((0xfcU 
                                              & (IData)(vlSelfRef.__Vfunc_mubi8_and__176__out)) 
                                             | ((2U 
                                                 & ((IData)(__Vfunc_mubi8_and__176__a_in) 
                                                    | (IData)(__Vfunc_mubi8_and__176__b_in))) 
                                                | (1U 
                                                   & ((IData)(__Vfunc_mubi8_and__176__a_in) 
                                                      & (IData)(__Vfunc_mubi8_and__176__b_in)))));
    vlSelfRef.__Vfunc_mubi8_and__176__out = ((0xf3U 
                                              & (IData)(vlSelfRef.__Vfunc_mubi8_and__176__out)) 
                                             | (((2U 
                                                  & (((IData)(__Vfunc_mubi8_and__176__a_in) 
                                                      & (IData)(__Vfunc_mubi8_and__176__b_in)) 
                                                     >> 2U)) 
                                                 | (1U 
                                                    & (((IData)(__Vfunc_mubi8_and__176__a_in) 
                                                        | (IData)(__Vfunc_mubi8_and__176__b_in)) 
                                                       >> 2U))) 
                                                << 2U));
    vlSelfRef.__Vfunc_mubi8_and__176__out = ((0xcfU 
                                              & (IData)(vlSelfRef.__Vfunc_mubi8_and__176__out)) 
                                             | (((2U 
                                                  & (((IData)(__Vfunc_mubi8_and__176__a_in) 
                                                      & (IData)(__Vfunc_mubi8_and__176__b_in)) 
                                                     >> 4U)) 
                                                 | (1U 
                                                    & (((IData)(__Vfunc_mubi8_and__176__a_in) 
                                                        | (IData)(__Vfunc_mubi8_and__176__b_in)) 
                                                       >> 4U))) 
                                                << 4U));
    vlSelfRef.__Vfunc_mubi8_and__176__out = ((0x3fU 
                                              & (IData)(vlSelfRef.__Vfunc_mubi8_and__176__out)) 
                                             | (((2U 
                                                  & (((IData)(__Vfunc_mubi8_and__176__a_in) 
                                                      | (IData)(__Vfunc_mubi8_and__176__b_in)) 
                                                     >> 6U)) 
                                                 | (1U 
                                                    & (((IData)(__Vfunc_mubi8_and__176__a_in) 
                                                        & (IData)(__Vfunc_mubi8_and__176__b_in)) 
                                                       >> 6U))) 
                                                << 6U));
    __Vfunc_mubi8_and__176__Vfuncout = vlSelfRef.__Vfunc_mubi8_and__176__out;
    __Vfunc_mubi8_and_lo__175__Vfuncout = __Vfunc_mubi8_and__176__Vfuncout;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__4__KET____DOT__gen_unbuffered__DOT__u_part_unbuf__DOT____Vcellinp__gen_digest_write_lock__DOT__u_prim_mubi8_sender_write_lock__mubi_i 
        = __Vfunc_mubi8_and_lo__175__Vfuncout;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__4__KET____DOT__gen_unbuffered__DOT__u_part_unbuf__access_o 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__4__KET____DOT__gen_unbuffered__DOT__u_part_unbuf__DOT____Vcellinp__u_prim_mubi8_sender_read_lock_pre__mubi_i) 
            << 8U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__gen_partitions__BRA__4__KET____DOT__gen_unbuffered__DOT__u_part_unbuf__DOT____Vcellinp__gen_digest_write_lock__DOT__u_prim_mubi8_sender_write_lock__mubi_i));
}

void Vsim___024root___act_comb__TOP__41(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___act_comb__TOP__41\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_intr__DOT__aon_reqs 
        = ((((((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_ulp__DOT__pwrb_det_pulse) 
                 | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_ulp__DOT__ac_present_det_pulse) 
                    | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_ulp__DOT__lid_open_det_pulse))) 
                << 4U) | ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_com_out_ctl_3_interrupt_3__q) 
                            & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_combo__DOT__gen_combo_trigger__BRA__3__KET____DOT__combo_det_pulse)) 
                           << 3U) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_com_out_ctl_2_interrupt_2__q) 
                                      & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_combo__DOT__gen_combo_trigger__BRA__2__KET____DOT__combo_det_pulse)) 
                                     << 2U))) | ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_com_out_ctl_1_interrupt_1__q) 
                                                   & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_combo__DOT__gen_combo_trigger__BRA__1__KET____DOT__combo_det_pulse)) 
                                                  << 1U) 
                                                 | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_com_out_ctl_0_interrupt_0__q) 
                                                    & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_combo__DOT__gen_combo_trigger__BRA__0__KET____DOT__combo_det_pulse)))) 
             << 0x0000000eU) | (((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT____Vcellout__gen_keyfsm__BRA__6__KET____DOT__u_sysrst_ctrl_detect_h2l__event_detected_pulse_o) 
                                   << 4U) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT____Vcellout__gen_keyfsm__BRA__5__KET____DOT__u_sysrst_ctrl_detect_h2l__event_detected_pulse_o) 
                                              << 3U) 
                                             | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT____Vcellout__gen_keyfsm__BRA__4__KET____DOT__u_sysrst_ctrl_detect_h2l__event_detected_pulse_o) 
                                                << 2U))) 
                                 | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT____Vcellout__gen_keyfsm__BRA__3__KET____DOT__u_sysrst_ctrl_detect_h2l__event_detected_pulse_o) 
                                     << 1U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT____Vcellout__gen_keyfsm__BRA__2__KET____DOT__u_sysrst_ctrl_detect_h2l__event_detected_pulse_o))) 
                                << 9U)) | ((((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT____Vcellout__gen_keyfsm__BRA__1__KET____DOT__u_sysrst_ctrl_detect_h2l__event_detected_pulse_o) 
                                               << 4U) 
                                              | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT____Vcellout__gen_keyfsm__BRA__0__KET____DOT__u_sysrst_ctrl_detect_h2l__event_detected_pulse_o) 
                                                  << 3U) 
                                                 | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT____Vcellout__gen_keyfsm__BRA__6__KET____DOT__u_sysrst_ctrl_detect_l2h__event_detected_pulse_o) 
                                                    << 2U))) 
                                             | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT____Vcellout__gen_keyfsm__BRA__5__KET____DOT__u_sysrst_ctrl_detect_l2h__event_detected_pulse_o) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT____Vcellout__gen_keyfsm__BRA__4__KET____DOT__u_sysrst_ctrl_detect_l2h__event_detected_pulse_o))) 
                                            << 4U) 
                                           | ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT____Vcellout__gen_keyfsm__BRA__3__KET____DOT__u_sysrst_ctrl_detect_l2h__event_detected_pulse_o) 
                                                << 3U) 
                                               | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT____Vcellout__gen_keyfsm__BRA__2__KET____DOT__u_sysrst_ctrl_detect_l2h__event_detected_pulse_o) 
                                                  << 2U)) 
                                              | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT____Vcellout__gen_keyfsm__BRA__1__KET____DOT__u_sysrst_ctrl_detect_l2h__event_detected_pulse_o) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT____Vcellout__gen_keyfsm__BRA__0__KET____DOT__u_sysrst_ctrl_detect_l2h__event_detected_pulse_o)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_wkup_status__DOT__wr_data 
        = ((~ ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_wkup_status_cdc__DOT__dst_we_o) 
               & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_wkup_status_cdc__DOT__src_q))) 
           & ((0U != vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_intr__DOT__aon_reqs) 
              | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_wkup_status__q)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_wkup_status_cdc__DOT__dst_update_i 
        = ((0U != vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_intr__DOT__aon_reqs) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_wkup_status_cdc__DOT__dst_we_o));
    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_wkup_status_cdc__DOT__dst_update_i) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_wkup_status_cdc__DOT__dst_ds_i 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_wkup_status__DOT__wr_data;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_wkup_status_cdc__DOT__u_arb__DOT__dst_update 
            = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_wkup_status_cdc__DOT__dst_qs) 
               != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_wkup_status_cdc__DOT__dst_ds_i));
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_wkup_status_cdc__DOT__dst_ds_i 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_wkup_status__q;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_wkup_status_cdc__DOT__u_arb__DOT__dst_update = 0U;
    }
    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_wkup_status_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__state_q) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_wkup_status_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__state_d = 1U;
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_wkup_status_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__dst_update_ack) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_wkup_status_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__state_d = 0U;
        }
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_wkup_status_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__state_d = 0U;
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_wkup_status_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__dst_req) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_wkup_status_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__state_d = 1U;
        } else if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_wkup_status_cdc__DOT__u_arb__DOT__dst_update) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_wkup_status_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__state_d = 1U;
        } else if (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_wkup_status_cdc__DOT__dst_qs) 
                    != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_wkup_status__q))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_wkup_status_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__state_d = 1U;
        }
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_wkup_status_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__dst_lat_d = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_wkup_status_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__dst_lat_q = 0U;
    if ((1U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_wkup_status_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__state_q)))) {
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_wkup_status_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__dst_req) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_wkup_status_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__dst_lat_d = 1U;
        } else if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_wkup_status_cdc__DOT__u_arb__DOT__dst_update) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_wkup_status_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__dst_lat_d = 1U;
        }
        if ((1U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_wkup_status_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__dst_req)))) {
            if ((1U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_wkup_status_cdc__DOT__u_arb__DOT__dst_update)))) {
                if (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_wkup_status_cdc__DOT__dst_qs) 
                     != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_wkup_status__q))) {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_wkup_status_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__dst_lat_q = 1U;
                }
            }
        }
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_wkup_status_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__dst_update_req 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_wkup_status_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__state_q) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_wkup_status_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__dst_lat_d) 
              | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT__u_wkup_status_cdc__DOT__u_arb__DOT__gen_wr_req__DOT__dst_lat_q)));
}

void Vsim___024root___act_comb__TOP__42(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___act_comb__TOP__42\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_adapter_eflash__DOT__we_o 
        = ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[3U] 
            >> 0x0000000cU) & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_101));
}

void Vsim___024root___act_comb__TOP__43(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___act_comb__TOP__43\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_to_prog_fifo__DOT__u_reqfifo__DOT__wvalid_i 
        = ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_prog_tl_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[3U] 
            >> 0x0000000cU) & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_to_prog_fifo__DOT____VdfgRegularize_h10d5dfb6_0_0));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_to_prog_fifo__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__full_d 
        = (1U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_to_prog_fifo__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__full_q)
                  ? (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_to_prog_fifo__DOT__u_reqfifo__DOT__rready_i))
                  : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_to_prog_fifo__DOT__u_reqfifo__DOT__wvalid_i)));
}

void Vsim___024root___act_comb__TOP__44(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___act_comb__TOP__44\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_to_prog_fifo__DOT__we_o 
        = ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_prog_tl_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[3U] 
            >> 0x0000000cU) & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_98));
}

void Vsim___024root___act_comb__TOP__45(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___act_comb__TOP__45\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*63:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT____VdfgExtracted_h435ad752__1;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT____VdfgExtracted_h435ad752__1 = 0;
    QData/*63:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT____VdfgExtracted_h99e0c7c1__1;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT____VdfgExtracted_h99e0c7c1__1 = 0;
    QData/*63:0*/ __Vfunc_sbox4_64bit__539__Vfuncout;
    __Vfunc_sbox4_64bit__539__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_sbox4_64bit__539__state_in;
    __Vfunc_sbox4_64bit__539__state_in = 0;
    CData/*7:0*/ __Vfunc_sbox4_8bit__540__Vfuncout;
    __Vfunc_sbox4_8bit__540__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_sbox4_8bit__540__state_in;
    __Vfunc_sbox4_8bit__540__state_in = 0;
    QData/*63:0*/ __Vfunc_prince_mult_prime_64bit__541__Vfuncout;
    __Vfunc_prince_mult_prime_64bit__541__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_prince_mult_prime_64bit__541__state_in;
    __Vfunc_prince_mult_prime_64bit__541__state_in = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__542__Vfuncout;
    __Vfunc_prince_nibble_red16__542__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__542__vect;
    __Vfunc_prince_nibble_red16__542__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__543__Vfuncout;
    __Vfunc_prince_nibble_red16__543__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__543__vect;
    __Vfunc_prince_nibble_red16__543__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__544__Vfuncout;
    __Vfunc_prince_nibble_red16__544__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__544__vect;
    __Vfunc_prince_nibble_red16__544__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__545__Vfuncout;
    __Vfunc_prince_nibble_red16__545__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__545__vect;
    __Vfunc_prince_nibble_red16__545__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__546__Vfuncout;
    __Vfunc_prince_nibble_red16__546__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__546__vect;
    __Vfunc_prince_nibble_red16__546__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__547__Vfuncout;
    __Vfunc_prince_nibble_red16__547__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__547__vect;
    __Vfunc_prince_nibble_red16__547__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__548__Vfuncout;
    __Vfunc_prince_nibble_red16__548__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__548__vect;
    __Vfunc_prince_nibble_red16__548__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__549__Vfuncout;
    __Vfunc_prince_nibble_red16__549__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__549__vect;
    __Vfunc_prince_nibble_red16__549__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__550__Vfuncout;
    __Vfunc_prince_nibble_red16__550__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__550__vect;
    __Vfunc_prince_nibble_red16__550__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__551__Vfuncout;
    __Vfunc_prince_nibble_red16__551__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__551__vect;
    __Vfunc_prince_nibble_red16__551__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__552__Vfuncout;
    __Vfunc_prince_nibble_red16__552__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__552__vect;
    __Vfunc_prince_nibble_red16__552__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__553__Vfuncout;
    __Vfunc_prince_nibble_red16__553__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__553__vect;
    __Vfunc_prince_nibble_red16__553__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__554__Vfuncout;
    __Vfunc_prince_nibble_red16__554__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__554__vect;
    __Vfunc_prince_nibble_red16__554__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__555__Vfuncout;
    __Vfunc_prince_nibble_red16__555__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__555__vect;
    __Vfunc_prince_nibble_red16__555__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__556__Vfuncout;
    __Vfunc_prince_nibble_red16__556__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__556__vect;
    __Vfunc_prince_nibble_red16__556__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__557__Vfuncout;
    __Vfunc_prince_nibble_red16__557__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__557__vect;
    __Vfunc_prince_nibble_red16__557__vect = 0;
    QData/*63:0*/ __Vfunc_prince_shiftrows_64bit__558__Vfuncout;
    __Vfunc_prince_shiftrows_64bit__558__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_prince_shiftrows_64bit__558__state_in;
    __Vfunc_prince_shiftrows_64bit__558__state_in = 0;
    QData/*63:0*/ __Vfunc_prince_mult_prime_64bit__559__Vfuncout;
    __Vfunc_prince_mult_prime_64bit__559__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_prince_mult_prime_64bit__559__state_in;
    __Vfunc_prince_mult_prime_64bit__559__state_in = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__560__Vfuncout;
    __Vfunc_prince_nibble_red16__560__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__560__vect;
    __Vfunc_prince_nibble_red16__560__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__561__Vfuncout;
    __Vfunc_prince_nibble_red16__561__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__561__vect;
    __Vfunc_prince_nibble_red16__561__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__562__Vfuncout;
    __Vfunc_prince_nibble_red16__562__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__562__vect;
    __Vfunc_prince_nibble_red16__562__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__563__Vfuncout;
    __Vfunc_prince_nibble_red16__563__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__563__vect;
    __Vfunc_prince_nibble_red16__563__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__564__Vfuncout;
    __Vfunc_prince_nibble_red16__564__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__564__vect;
    __Vfunc_prince_nibble_red16__564__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__565__Vfuncout;
    __Vfunc_prince_nibble_red16__565__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__565__vect;
    __Vfunc_prince_nibble_red16__565__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__566__Vfuncout;
    __Vfunc_prince_nibble_red16__566__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__566__vect;
    __Vfunc_prince_nibble_red16__566__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__567__Vfuncout;
    __Vfunc_prince_nibble_red16__567__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__567__vect;
    __Vfunc_prince_nibble_red16__567__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__568__Vfuncout;
    __Vfunc_prince_nibble_red16__568__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__568__vect;
    __Vfunc_prince_nibble_red16__568__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__569__Vfuncout;
    __Vfunc_prince_nibble_red16__569__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__569__vect;
    __Vfunc_prince_nibble_red16__569__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__570__Vfuncout;
    __Vfunc_prince_nibble_red16__570__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__570__vect;
    __Vfunc_prince_nibble_red16__570__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__571__Vfuncout;
    __Vfunc_prince_nibble_red16__571__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__571__vect;
    __Vfunc_prince_nibble_red16__571__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__572__Vfuncout;
    __Vfunc_prince_nibble_red16__572__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__572__vect;
    __Vfunc_prince_nibble_red16__572__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__573__Vfuncout;
    __Vfunc_prince_nibble_red16__573__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__573__vect;
    __Vfunc_prince_nibble_red16__573__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__574__Vfuncout;
    __Vfunc_prince_nibble_red16__574__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__574__vect;
    __Vfunc_prince_nibble_red16__574__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__575__Vfuncout;
    __Vfunc_prince_nibble_red16__575__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__575__vect;
    __Vfunc_prince_nibble_red16__575__vect = 0;
    QData/*63:0*/ __Vfunc_prince_shiftrows_64bit__576__Vfuncout;
    __Vfunc_prince_shiftrows_64bit__576__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_prince_shiftrows_64bit__576__state_in;
    __Vfunc_prince_shiftrows_64bit__576__state_in = 0;
    QData/*63:0*/ __Vfunc_prince_mult_prime_64bit__577__Vfuncout;
    __Vfunc_prince_mult_prime_64bit__577__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_prince_mult_prime_64bit__577__state_in;
    __Vfunc_prince_mult_prime_64bit__577__state_in = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__578__Vfuncout;
    __Vfunc_prince_nibble_red16__578__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__578__vect;
    __Vfunc_prince_nibble_red16__578__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__579__Vfuncout;
    __Vfunc_prince_nibble_red16__579__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__579__vect;
    __Vfunc_prince_nibble_red16__579__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__580__Vfuncout;
    __Vfunc_prince_nibble_red16__580__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__580__vect;
    __Vfunc_prince_nibble_red16__580__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__581__Vfuncout;
    __Vfunc_prince_nibble_red16__581__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__581__vect;
    __Vfunc_prince_nibble_red16__581__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__582__Vfuncout;
    __Vfunc_prince_nibble_red16__582__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__582__vect;
    __Vfunc_prince_nibble_red16__582__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__583__Vfuncout;
    __Vfunc_prince_nibble_red16__583__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__583__vect;
    __Vfunc_prince_nibble_red16__583__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__584__Vfuncout;
    __Vfunc_prince_nibble_red16__584__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__584__vect;
    __Vfunc_prince_nibble_red16__584__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__585__Vfuncout;
    __Vfunc_prince_nibble_red16__585__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__585__vect;
    __Vfunc_prince_nibble_red16__585__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__586__Vfuncout;
    __Vfunc_prince_nibble_red16__586__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__586__vect;
    __Vfunc_prince_nibble_red16__586__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__587__Vfuncout;
    __Vfunc_prince_nibble_red16__587__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__587__vect;
    __Vfunc_prince_nibble_red16__587__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__588__Vfuncout;
    __Vfunc_prince_nibble_red16__588__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__588__vect;
    __Vfunc_prince_nibble_red16__588__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__589__Vfuncout;
    __Vfunc_prince_nibble_red16__589__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__589__vect;
    __Vfunc_prince_nibble_red16__589__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__590__Vfuncout;
    __Vfunc_prince_nibble_red16__590__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__590__vect;
    __Vfunc_prince_nibble_red16__590__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__591__Vfuncout;
    __Vfunc_prince_nibble_red16__591__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__591__vect;
    __Vfunc_prince_nibble_red16__591__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__592__Vfuncout;
    __Vfunc_prince_nibble_red16__592__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__592__vect;
    __Vfunc_prince_nibble_red16__592__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__593__Vfuncout;
    __Vfunc_prince_nibble_red16__593__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__593__vect;
    __Vfunc_prince_nibble_red16__593__vect = 0;
    QData/*63:0*/ __Vfunc_prince_shiftrows_64bit__594__Vfuncout;
    __Vfunc_prince_shiftrows_64bit__594__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_prince_shiftrows_64bit__594__state_in;
    __Vfunc_prince_shiftrows_64bit__594__state_in = 0;
    QData/*63:0*/ __Vfunc_sbox4_64bit__671__Vfuncout;
    __Vfunc_sbox4_64bit__671__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_sbox4_64bit__671__state_in;
    __Vfunc_sbox4_64bit__671__state_in = 0;
    CData/*7:0*/ __Vfunc_sbox4_8bit__672__Vfuncout;
    __Vfunc_sbox4_8bit__672__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_sbox4_8bit__672__state_in;
    __Vfunc_sbox4_8bit__672__state_in = 0;
    QData/*63:0*/ __Vfunc_sbox4_64bit__673__Vfuncout;
    __Vfunc_sbox4_64bit__673__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_sbox4_64bit__673__state_in;
    __Vfunc_sbox4_64bit__673__state_in = 0;
    CData/*7:0*/ __Vfunc_sbox4_8bit__674__Vfuncout;
    __Vfunc_sbox4_8bit__674__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_sbox4_8bit__674__state_in;
    __Vfunc_sbox4_8bit__674__state_in = 0;
    QData/*63:0*/ __Vfunc_sbox4_64bit__675__Vfuncout;
    __Vfunc_sbox4_64bit__675__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_sbox4_64bit__675__state_in;
    __Vfunc_sbox4_64bit__675__state_in = 0;
    CData/*7:0*/ __Vfunc_sbox4_8bit__676__Vfuncout;
    __Vfunc_sbox4_8bit__676__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_sbox4_8bit__676__state_in;
    __Vfunc_sbox4_8bit__676__state_in = 0;
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_45;
    __VdfgRegularize_h6e95ff9d_0_45 = 0;
    CData/*2:0*/ __VdfgRegularize_h6e95ff9d_0_46;
    __VdfgRegularize_h6e95ff9d_0_46 = 0;
    CData/*3:0*/ __VdfgRegularize_h6e95ff9d_0_47;
    __VdfgRegularize_h6e95ff9d_0_47 = 0;
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_50;
    __VdfgRegularize_h6e95ff9d_0_50 = 0;
    CData/*2:0*/ __VdfgRegularize_h6e95ff9d_0_51;
    __VdfgRegularize_h6e95ff9d_0_51 = 0;
    CData/*3:0*/ __VdfgRegularize_h6e95ff9d_0_52;
    __VdfgRegularize_h6e95ff9d_0_52 = 0;
    VlWide<4>/*127:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = (IData)((((QData)((IData)(((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__wr_phase)
                                                ? vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_tlul_data_integ_enc__DOT__u_data_gen__DOT__data_i
                                                : 0U))) 
                              << 0x00000018U) | (QData)((IData)(
                                                                ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__wr_phase)
                                                                    ? 
                                                                   ((0x007fff80U 
                                                                     & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo__DOT__gen_singleton_fifo__DOT__storage[0U]) 
                                                                    | (((((2U 
                                                                           & (VL_REDXOR_32(
                                                                                (0x98505586U 
                                                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_tlul_data_integ_enc__DOT__u_data_gen__DOT__data_i)) 
                                                                              << 1U)) 
                                                                          | (1U 
                                                                             & (~ 
                                                                                VL_REDXOR_32(
                                                                                (0x2dcc624cU 
                                                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_tlul_data_integ_enc__DOT__u_data_gen__DOT__data_i))))) 
                                                                         << 5U) 
                                                                        | (((2U 
                                                                             & (VL_REDXOR_32(
                                                                                (0xc2c1323bU 
                                                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_tlul_data_integ_enc__DOT__u_data_gen__DOT__data_i)) 
                                                                                << 1U)) 
                                                                            | (1U 
                                                                               & (~ 
                                                                                VL_REDXOR_32(
                                                                                (0x31234ed1U 
                                                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_tlul_data_integ_enc__DOT__u_data_gen__DOT__data_i))))) 
                                                                           << 3U)) 
                                                                       | ((4U 
                                                                           & (VL_REDXOR_32(
                                                                                (0x413d89aaU 
                                                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_tlul_data_integ_enc__DOT__u_data_gen__DOT__data_i)) 
                                                                              << 2U)) 
                                                                          | ((2U 
                                                                              & ((~ 
                                                                                VL_REDXOR_32(
                                                                                (0xdeba8050U 
                                                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_tlul_data_integ_enc__DOT__u_data_gen__DOT__data_i))) 
                                                                                << 1U)) 
                                                                             | (1U 
                                                                                & VL_REDXOR_32(
                                                                                (0x2606bd25U 
                                                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_tlul_data_integ_enc__DOT__u_data_gen__DOT__data_i)))))))
                                                                    : 0U) 
                                                                  << 1U) 
                                                                 | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_lc_gate.__VdfgRegularize_h6e95ff9d_0_1717))))));
    __Vtemp_1[1U] = (((IData)((((QData)((IData)((0x00010000U 
                                                 | ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__wr_phase)
                                                       ? 0U
                                                       : 4U) 
                                                     << 0x0000000dU) 
                                                    | ((0x00001c00U 
                                                        & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo__DOT__gen_singleton_fifo__DOT__storage[3U] 
                                                           << 5U)) 
                                                       | ((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1716)
                                                             ? 2U
                                                             : 
                                                            (3U 
                                                             & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo__DOT__gen_singleton_fifo__DOT__storage[3U] 
                                                                >> 3U))) 
                                                           << 8U) 
                                                          | (0x000000ffU 
                                                             & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo__DOT__gen_singleton_fifo__DOT__storage[3U] 
                                                                 << 5U) 
                                                                | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo__DOT__gen_singleton_fifo__DOT__storage[2U] 
                                                                   >> 0x0000001bU))))))))) 
                                << 0x00000024U) | (
                                                   ((QData)((IData)(
                                                                    ((0xfffffffcU 
                                                                      & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo__DOT__gen_singleton_fifo__DOT__storage[2U] 
                                                                          << 5U) 
                                                                         | (0x0000001cU 
                                                                            & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo__DOT__gen_singleton_fifo__DOT__storage[1U] 
                                                                               >> 0x0000001bU)))) 
                                                                     | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1716)
                                                                         ? 0U
                                                                         : 
                                                                        (3U 
                                                                         & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo__DOT__gen_singleton_fifo__DOT__storage[1U] 
                                                                            >> 0x0000001bU)))))) 
                                                    << 4U) 
                                                   | (QData)((IData)(
                                                                     ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1716)
                                                                       ? 0x0000000fU
                                                                       : 
                                                                      (0x0000000fU 
                                                                       & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo__DOT__gen_singleton_fifo__DOT__storage[1U] 
                                                                          >> 0x00000017U)))))))) 
                      << 0x00000018U) | (IData)(((((QData)((IData)(
                                                                   ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__wr_phase)
                                                                     ? vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_tlul_data_integ_enc__DOT__u_data_gen__DOT__data_i
                                                                     : 0U))) 
                                                   << 0x00000018U) 
                                                  | (QData)((IData)(
                                                                    ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__wr_phase)
                                                                        ? 
                                                                       ((0x007fff80U 
                                                                         & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo__DOT__gen_singleton_fifo__DOT__storage[0U]) 
                                                                        | (((((2U 
                                                                               & (VL_REDXOR_32(
                                                                                (0x98505586U 
                                                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_tlul_data_integ_enc__DOT__u_data_gen__DOT__data_i)) 
                                                                                << 1U)) 
                                                                              | (1U 
                                                                                & (~ 
                                                                                VL_REDXOR_32(
                                                                                (0x2dcc624cU 
                                                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_tlul_data_integ_enc__DOT__u_data_gen__DOT__data_i))))) 
                                                                             << 5U) 
                                                                            | (((2U 
                                                                                & (VL_REDXOR_32(
                                                                                (0xc2c1323bU 
                                                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_tlul_data_integ_enc__DOT__u_data_gen__DOT__data_i)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (~ 
                                                                                VL_REDXOR_32(
                                                                                (0x31234ed1U 
                                                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_tlul_data_integ_enc__DOT__u_data_gen__DOT__data_i))))) 
                                                                               << 3U)) 
                                                                           | ((4U 
                                                                               & (VL_REDXOR_32(
                                                                                (0x413d89aaU 
                                                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_tlul_data_integ_enc__DOT__u_data_gen__DOT__data_i)) 
                                                                                << 2U)) 
                                                                              | ((2U 
                                                                                & ((~ 
                                                                                VL_REDXOR_32(
                                                                                (0xdeba8050U 
                                                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_tlul_data_integ_enc__DOT__u_data_gen__DOT__data_i))) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & VL_REDXOR_32(
                                                                                (0x2606bd25U 
                                                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_tlul_data_integ_enc__DOT__u_data_gen__DOT__data_i)))))))
                                                                        : 0U) 
                                                                      << 1U) 
                                                                     | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_lc_gate.__VdfgRegularize_h6e95ff9d_0_1717))))) 
                                                 >> 0x00000020U)));
    __Vtemp_1[2U] = (((IData)((((QData)((IData)((0x00010000U 
                                                 | ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__wr_phase)
                                                       ? 0U
                                                       : 4U) 
                                                     << 0x0000000dU) 
                                                    | ((0x00001c00U 
                                                        & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo__DOT__gen_singleton_fifo__DOT__storage[3U] 
                                                           << 5U)) 
                                                       | ((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1716)
                                                             ? 2U
                                                             : 
                                                            (3U 
                                                             & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo__DOT__gen_singleton_fifo__DOT__storage[3U] 
                                                                >> 3U))) 
                                                           << 8U) 
                                                          | (0x000000ffU 
                                                             & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo__DOT__gen_singleton_fifo__DOT__storage[3U] 
                                                                 << 5U) 
                                                                | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo__DOT__gen_singleton_fifo__DOT__storage[2U] 
                                                                   >> 0x0000001bU))))))))) 
                                << 0x00000024U) | (
                                                   ((QData)((IData)(
                                                                    ((0xfffffffcU 
                                                                      & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo__DOT__gen_singleton_fifo__DOT__storage[2U] 
                                                                          << 5U) 
                                                                         | (0x0000001cU 
                                                                            & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo__DOT__gen_singleton_fifo__DOT__storage[1U] 
                                                                               >> 0x0000001bU)))) 
                                                                     | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1716)
                                                                         ? 0U
                                                                         : 
                                                                        (3U 
                                                                         & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo__DOT__gen_singleton_fifo__DOT__storage[1U] 
                                                                            >> 0x0000001bU)))))) 
                                                    << 4U) 
                                                   | (QData)((IData)(
                                                                     ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1716)
                                                                       ? 0x0000000fU
                                                                       : 
                                                                      (0x0000000fU 
                                                                       & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo__DOT__gen_singleton_fifo__DOT__storage[1U] 
                                                                          >> 0x00000017U)))))))) 
                      >> 8U) | ((IData)(((((QData)((IData)(
                                                           (0x00010000U 
                                                            | ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__wr_phase)
                                                                  ? 0U
                                                                  : 4U) 
                                                                << 0x0000000dU) 
                                                               | ((0x00001c00U 
                                                                   & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo__DOT__gen_singleton_fifo__DOT__storage[3U] 
                                                                      << 5U)) 
                                                                  | ((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1716)
                                                                        ? 2U
                                                                        : 
                                                                       (3U 
                                                                        & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo__DOT__gen_singleton_fifo__DOT__storage[3U] 
                                                                           >> 3U))) 
                                                                      << 8U) 
                                                                     | (0x000000ffU 
                                                                        & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo__DOT__gen_singleton_fifo__DOT__storage[3U] 
                                                                            << 5U) 
                                                                           | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo__DOT__gen_singleton_fifo__DOT__storage[2U] 
                                                                              >> 0x0000001bU))))))))) 
                                           << 0x00000024U) 
                                          | (((QData)((IData)(
                                                              ((0xfffffffcU 
                                                                & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo__DOT__gen_singleton_fifo__DOT__storage[2U] 
                                                                    << 5U) 
                                                                   | (0x0000001cU 
                                                                      & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo__DOT__gen_singleton_fifo__DOT__storage[1U] 
                                                                         >> 0x0000001bU)))) 
                                                               | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1716)
                                                                   ? 0U
                                                                   : 
                                                                  (3U 
                                                                   & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo__DOT__gen_singleton_fifo__DOT__storage[1U] 
                                                                      >> 0x0000001bU)))))) 
                                              << 4U) 
                                             | (QData)((IData)(
                                                               ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1716)
                                                                 ? 0x0000000fU
                                                                 : 
                                                                (0x0000000fU 
                                                                 & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo__DOT__gen_singleton_fifo__DOT__storage[1U] 
                                                                    >> 0x00000017U))))))) 
                                         >> 0x00000020U)) 
                                << 0x00000018U));
    __Vtemp_1[3U] = ((IData)(((((QData)((IData)((0x00010000U 
                                                 | ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__wr_phase)
                                                       ? 0U
                                                       : 4U) 
                                                     << 0x0000000dU) 
                                                    | ((0x00001c00U 
                                                        & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo__DOT__gen_singleton_fifo__DOT__storage[3U] 
                                                           << 5U)) 
                                                       | ((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1716)
                                                             ? 2U
                                                             : 
                                                            (3U 
                                                             & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo__DOT__gen_singleton_fifo__DOT__storage[3U] 
                                                                >> 3U))) 
                                                           << 8U) 
                                                          | (0x000000ffU 
                                                             & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo__DOT__gen_singleton_fifo__DOT__storage[3U] 
                                                                 << 5U) 
                                                                | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo__DOT__gen_singleton_fifo__DOT__storage[2U] 
                                                                   >> 0x0000001bU))))))))) 
                                << 0x00000024U) | (
                                                   ((QData)((IData)(
                                                                    ((0xfffffffcU 
                                                                      & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo__DOT__gen_singleton_fifo__DOT__storage[2U] 
                                                                          << 5U) 
                                                                         | (0x0000001cU 
                                                                            & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo__DOT__gen_singleton_fifo__DOT__storage[1U] 
                                                                               >> 0x0000001bU)))) 
                                                                     | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1716)
                                                                         ? 0U
                                                                         : 
                                                                        (3U 
                                                                         & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo__DOT__gen_singleton_fifo__DOT__storage[1U] 
                                                                            >> 0x0000001bU)))))) 
                                                    << 4U) 
                                                   | (QData)((IData)(
                                                                     ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1716)
                                                                       ? 0x0000000fU
                                                                       : 
                                                                      (0x0000000fU 
                                                                       & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo__DOT__gen_singleton_fifo__DOT__storage[1U] 
                                                                          >> 0x00000017U))))))) 
                              >> 0x00000020U)) >> 8U);
    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__compound_txn_in_progress_o) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__tl_sram_o[0U] 
            = __Vtemp_1[0U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__tl_sram_o[1U] 
            = __Vtemp_1[1U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__tl_sram_o[2U] 
            = __Vtemp_1[2U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__tl_sram_o[3U] 
            = __Vtemp_1[3U];
    } else if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__rd_phase) {
        if ((1U & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__error_i)) 
                   | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__stall_host)))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__tl_sram_o[0U] 
                = (IData)((0x0f00000000000000ULL | 
                           (0x00ffffffffffffffULL & 
                            (((QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_lc_gate.__VdfgRegularize_h6e95ff9d_0_40[1U])) 
                              << 0x00000020U) | (QData)((IData)(
                                                                vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_lc_gate.__VdfgRegularize_h6e95ff9d_0_40[0U]))))));
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__tl_sram_o[1U] 
                = (((IData)((0x000000ffffffffffULL 
                             & (((QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_lc_gate.__VdfgRegularize_h6e95ff9d_0_41[3U])) 
                                 << 0x00000024U) | 
                                (((QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_lc_gate.__VdfgRegularize_h6e95ff9d_0_41[2U])) 
                                  << 4U) | ((QData)((IData)(
                                                            vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_lc_gate.__VdfgRegularize_h6e95ff9d_0_41[1U])) 
                                            >> 0x0000001cU))))) 
                    << 0x0000001cU) | (IData)(((0x0f00000000000000ULL 
                                                | (0x00ffffffffffffffULL 
                                                   & (((QData)((IData)(
                                                                       vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_lc_gate.__VdfgRegularize_h6e95ff9d_0_40[1U])) 
                                                       << 0x00000020U) 
                                                      | (QData)((IData)(
                                                                        vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_lc_gate.__VdfgRegularize_h6e95ff9d_0_40[0U]))))) 
                                               >> 0x00000020U)));
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__tl_sram_o[2U] 
                = (((IData)((0x000000ffffffffffULL 
                             & (((QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_lc_gate.__VdfgRegularize_h6e95ff9d_0_41[3U])) 
                                 << 0x00000024U) | 
                                (((QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_lc_gate.__VdfgRegularize_h6e95ff9d_0_41[2U])) 
                                  << 4U) | ((QData)((IData)(
                                                            vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_lc_gate.__VdfgRegularize_h6e95ff9d_0_41[1U])) 
                                            >> 0x0000001cU))))) 
                    >> 4U) | ((IData)(((0x000000ffffffffffULL 
                                        & (((QData)((IData)(
                                                            vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_lc_gate.__VdfgRegularize_h6e95ff9d_0_41[3U])) 
                                            << 0x00000024U) 
                                           | (((QData)((IData)(
                                                               vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_lc_gate.__VdfgRegularize_h6e95ff9d_0_41[2U])) 
                                               << 4U) 
                                              | ((QData)((IData)(
                                                                 vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_lc_gate.__VdfgRegularize_h6e95ff9d_0_41[1U])) 
                                                 >> 0x0000001cU)))) 
                                       >> 0x00000020U)) 
                              << 0x0000001cU));
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__tl_sram_o[3U] 
                = ((0xfffffff0U & (0x00000820U | ((
                                                   ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__stall_host)) 
                                                    & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[3U] 
                                                       >> 0x0000000cU)) 
                                                   << 0x0000000cU) 
                                                  | (0x000001c0U 
                                                     & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[3U])))) 
                   | ((IData)(((0x000000ffffffffffULL 
                                & (((QData)((IData)(
                                                    vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_lc_gate.__VdfgRegularize_h6e95ff9d_0_41[3U])) 
                                    << 0x00000024U) 
                                   | (((QData)((IData)(
                                                       vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_lc_gate.__VdfgRegularize_h6e95ff9d_0_41[2U])) 
                                       << 4U) | ((QData)((IData)(
                                                                 vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_lc_gate.__VdfgRegularize_h6e95ff9d_0_41[1U])) 
                                                 >> 0x0000001cU)))) 
                               >> 0x00000020U)) >> 4U));
        } else {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__tl_sram_o[0U] 
                = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_lc_gate.__VdfgRegularize_h6e95ff9d_0_41[0U];
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__tl_sram_o[1U] 
                = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_lc_gate.__VdfgRegularize_h6e95ff9d_0_41[1U];
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__tl_sram_o[2U] 
                = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_lc_gate.__VdfgRegularize_h6e95ff9d_0_41[2U];
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__tl_sram_o[3U] 
                = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_lc_gate.__VdfgRegularize_h6e95ff9d_0_41[3U];
        }
    } else if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__wait_phase) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__tl_sram_o[0U] 
            = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_lc_gate.__VdfgRegularize_h6e95ff9d_0_40[0U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__tl_sram_o[1U] 
            = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_lc_gate.__VdfgRegularize_h6e95ff9d_0_40[1U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__tl_sram_o[2U] 
            = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_lc_gate.__VdfgRegularize_h6e95ff9d_0_40[2U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__tl_sram_o[3U] 
            = (0x00000fffU & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_lc_gate.__VdfgRegularize_h6e95ff9d_0_40[3U]);
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__tl_sram_o[0U] 
            = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_lc_gate.__VdfgRegularize_h6e95ff9d_0_40[0U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__tl_sram_o[1U] 
            = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_lc_gate.__VdfgRegularize_h6e95ff9d_0_40[1U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__tl_sram_o[2U] 
            = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_lc_gate.__VdfgRegularize_h6e95ff9d_0_40[2U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__tl_sram_o[3U] 
            = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_lc_gate.__VdfgRegularize_h6e95ff9d_0_40[3U];
    }
    if ((0x00001000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__tl_sram_o[3U])) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__unnamedblk1__DOT__i = 4U;
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__we_o 
        = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__tl_sram_o[3U] 
            >> 0x0000000cU) & ((0U == (7U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__tl_sram_o[3U] 
                                             >> 9U))) 
                               | (1U == (7U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__tl_sram_o[3U] 
                                               >> 9U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__data_i 
        = (0x000003ffU & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_count__DOT__incr_en_i)
                           ? (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)
                           : ((0x00001000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__tl_sram_o[3U])
                               ? ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__tl_sram_o[2U] 
                                   << 2U) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__tl_sram_o[1U] 
                                             >> 0x0000001eU))
                               : 0U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_reqfifo__DOT__wvalid_i 
        = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__tl_sram_o[3U] 
            >> 0x0000000cU) & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT____VdfgRegularize_hba58573d_0_0));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_reqfifo__DOT__rready_i 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__d_valid) 
           & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__tl_sram_o[0U]);
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__write_i 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__we_o) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_count__DOT__incr_en_i));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_lo__BRA__63__03a0__KET__ 
        = (((0xfffffffffffffc00ULL & (((QData)((IData)(
                                                       vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__nonce_q[1U])) 
                                       << 0x0000002aU) 
                                      | ((QData)((IData)(
                                                         vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__nonce_q[0U])) 
                                         << 0x0000000aU))) 
            | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__data_i))) 
           ^ (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__k0 
              ^ (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__key_q[1U])) 
                  << 0x00000020U) | (QData)((IData)(
                                                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__key_q[0U])))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_43 = (0x000003ffU 
                                                 & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__data_i) 
                                                    ^ 
                                                    ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__nonce_q[1U] 
                                                      << 0x0000000aU) 
                                                     | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__nonce_q[1U] 
                                                        >> 0x00000016U))));
    __Vfunc_sbox4_64bit__539__state_in = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_lo__BRA__63__03a0__KET__;
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__Vfunc_sbox4_64bit__539__state_out = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 4113188872332091018ull);
    __Vfunc_sbox4_8bit__540__state_in = (0x000000ffU 
                                         & (IData)(__Vfunc_sbox4_64bit__539__state_in));
    vlSelf->__Vfunc_sbox4_8bit__540__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3772870350716117870ull);
    vlSelfRef.__Vfunc_sbox4_8bit__540__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__540__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__540__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__540__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__540__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__540__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__540__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__540__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__539__state_out = 
        ((0xffffffffffffff00ULL & vlSelfRef.__Vfunc_sbox4_64bit__539__state_out) 
         | (IData)((IData)(__Vfunc_sbox4_8bit__540__Vfuncout)));
    __Vfunc_sbox4_8bit__540__state_in = (0x000000ffU 
                                         & (IData)(
                                                   (__Vfunc_sbox4_64bit__539__state_in 
                                                    >> 8U)));
    vlSelf->__Vfunc_sbox4_8bit__540__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3772870350716117870ull);
    vlSelfRef.__Vfunc_sbox4_8bit__540__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__540__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__540__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__540__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__540__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__540__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__540__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__540__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__539__state_out = 
        ((0xffffffffffff00ffULL & vlSelfRef.__Vfunc_sbox4_64bit__539__state_out) 
         | ((QData)((IData)(__Vfunc_sbox4_8bit__540__Vfuncout)) 
            << 8U));
    __Vfunc_sbox4_8bit__540__state_in = (0x000000ffU 
                                         & (IData)(
                                                   (__Vfunc_sbox4_64bit__539__state_in 
                                                    >> 0x10U)));
    vlSelf->__Vfunc_sbox4_8bit__540__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3772870350716117870ull);
    vlSelfRef.__Vfunc_sbox4_8bit__540__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__540__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__540__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__540__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__540__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__540__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__540__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__540__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__539__state_out = 
        ((0xffffffffff00ffffULL & vlSelfRef.__Vfunc_sbox4_64bit__539__state_out) 
         | ((QData)((IData)(__Vfunc_sbox4_8bit__540__Vfuncout)) 
            << 0x00000010U));
    __Vfunc_sbox4_8bit__540__state_in = (0x000000ffU 
                                         & (IData)(
                                                   (__Vfunc_sbox4_64bit__539__state_in 
                                                    >> 0x18U)));
    vlSelf->__Vfunc_sbox4_8bit__540__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3772870350716117870ull);
    vlSelfRef.__Vfunc_sbox4_8bit__540__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__540__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__540__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__540__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__540__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__540__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__540__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__540__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__539__state_out = 
        ((0xffffffff00ffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__539__state_out) 
         | ((QData)((IData)(__Vfunc_sbox4_8bit__540__Vfuncout)) 
            << 0x00000018U));
    __Vfunc_sbox4_8bit__540__state_in = (0x000000ffU 
                                         & (IData)(
                                                   (__Vfunc_sbox4_64bit__539__state_in 
                                                    >> 0x20U)));
    vlSelf->__Vfunc_sbox4_8bit__540__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3772870350716117870ull);
    vlSelfRef.__Vfunc_sbox4_8bit__540__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__540__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__540__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__540__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__540__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__540__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__540__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__540__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__539__state_out = 
        ((0xffffff00ffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__539__state_out) 
         | ((QData)((IData)(__Vfunc_sbox4_8bit__540__Vfuncout)) 
            << 0x00000020U));
    __Vfunc_sbox4_8bit__540__state_in = (0x000000ffU 
                                         & (IData)(
                                                   (__Vfunc_sbox4_64bit__539__state_in 
                                                    >> 0x28U)));
    vlSelf->__Vfunc_sbox4_8bit__540__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3772870350716117870ull);
    vlSelfRef.__Vfunc_sbox4_8bit__540__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__540__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__540__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__540__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__540__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__540__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__540__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__540__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__539__state_out = 
        ((0xffff00ffffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__539__state_out) 
         | ((QData)((IData)(__Vfunc_sbox4_8bit__540__Vfuncout)) 
            << 0x00000028U));
    __Vfunc_sbox4_8bit__540__state_in = (0x000000ffU 
                                         & (IData)(
                                                   (__Vfunc_sbox4_64bit__539__state_in 
                                                    >> 0x30U)));
    vlSelf->__Vfunc_sbox4_8bit__540__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3772870350716117870ull);
    vlSelfRef.__Vfunc_sbox4_8bit__540__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__540__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__540__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__540__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__540__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__540__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__540__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__540__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__539__state_out = 
        ((0xff00ffffffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__539__state_out) 
         | ((QData)((IData)(__Vfunc_sbox4_8bit__540__Vfuncout)) 
            << 0x00000030U));
    __Vfunc_sbox4_8bit__540__state_in = (0x000000ffU 
                                         & (IData)(
                                                   (__Vfunc_sbox4_64bit__539__state_in 
                                                    >> 0x38U)));
    vlSelf->__Vfunc_sbox4_8bit__540__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3772870350716117870ull);
    vlSelfRef.__Vfunc_sbox4_8bit__540__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__540__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__540__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__540__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__540__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__540__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__540__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__540__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__539__state_out = 
        ((0x00ffffffffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__539__state_out) 
         | ((QData)((IData)(__Vfunc_sbox4_8bit__540__Vfuncout)) 
            << 0x00000038U));
    __Vfunc_sbox4_64bit__539__Vfuncout = vlSelfRef.__Vfunc_sbox4_64bit__539__state_out;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_fwd_pass__BRA__1__KET____DOT__data_state_round 
        = __Vfunc_sbox4_64bit__539__Vfuncout;
    __Vfunc_prince_mult_prime_64bit__541__state_in 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_fwd_pass__BRA__1__KET____DOT__data_state_round;
    vlSelf->__Vfunc_prince_mult_prime_64bit__541__state_out = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 17359363704086559447ull);
    __Vfunc_prince_nibble_red16__542__vect = (0xe7bdU 
                                              & (IData)(__Vfunc_prince_mult_prime_64bit__541__state_in));
    __Vfunc_prince_nibble_red16__542__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__542__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__542__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__542__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__542__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__541__state_out 
        = ((0xfffffffffffffff0ULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__541__state_out) 
           | (IData)((IData)(__Vfunc_prince_nibble_red16__542__Vfuncout)));
    __Vfunc_prince_nibble_red16__543__vect = (0xde7bU 
                                              & (IData)(__Vfunc_prince_mult_prime_64bit__541__state_in));
    __Vfunc_prince_nibble_red16__543__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__543__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__543__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__543__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__543__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__541__state_out 
        = ((0xffffffffffffff0fULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__541__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__543__Vfuncout)) 
              << 4U));
    __Vfunc_prince_nibble_red16__544__vect = (0xbde7U 
                                              & (IData)(__Vfunc_prince_mult_prime_64bit__541__state_in));
    __Vfunc_prince_nibble_red16__544__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__544__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__544__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__544__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__544__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__541__state_out 
        = ((0xfffffffffffff0ffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__541__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__544__Vfuncout)) 
              << 8U));
    __Vfunc_prince_nibble_red16__545__vect = (0x7bdeU 
                                              & (IData)(__Vfunc_prince_mult_prime_64bit__541__state_in));
    __Vfunc_prince_nibble_red16__545__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__545__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__545__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__545__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__545__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__541__state_out 
        = ((0xffffffffffff0fffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__541__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__545__Vfuncout)) 
              << 0x0000000cU));
    __Vfunc_prince_nibble_red16__546__vect = (0x7bdeU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__541__state_in 
                                                         >> 0x10U)));
    __Vfunc_prince_nibble_red16__546__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__546__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__546__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__546__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__546__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__541__state_out 
        = ((0xfffffffffff0ffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__541__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__546__Vfuncout)) 
              << 0x00000010U));
    __Vfunc_prince_nibble_red16__547__vect = (0xe7bdU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__541__state_in 
                                                         >> 0x10U)));
    __Vfunc_prince_nibble_red16__547__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__547__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__547__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__547__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__547__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__541__state_out 
        = ((0xffffffffff0fffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__541__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__547__Vfuncout)) 
              << 0x00000014U));
    __Vfunc_prince_nibble_red16__548__vect = (0xde7bU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__541__state_in 
                                                         >> 0x10U)));
    __Vfunc_prince_nibble_red16__548__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__548__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__548__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__548__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__548__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__541__state_out 
        = ((0xfffffffff0ffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__541__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__548__Vfuncout)) 
              << 0x00000018U));
    __Vfunc_prince_nibble_red16__549__vect = (0xbde7U 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__541__state_in 
                                                         >> 0x10U)));
    __Vfunc_prince_nibble_red16__549__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__549__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__549__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__549__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__549__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__541__state_out 
        = ((0xffffffff0fffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__541__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__549__Vfuncout)) 
              << 0x0000001cU));
    __Vfunc_prince_nibble_red16__550__vect = (0x7bdeU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__541__state_in 
                                                         >> 0x20U)));
    __Vfunc_prince_nibble_red16__550__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__550__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__550__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__550__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__550__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__541__state_out 
        = ((0xfffffff0ffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__541__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__550__Vfuncout)) 
              << 0x00000020U));
    __Vfunc_prince_nibble_red16__551__vect = (0xe7bdU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__541__state_in 
                                                         >> 0x20U)));
    __Vfunc_prince_nibble_red16__551__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__551__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__551__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__551__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__551__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__541__state_out 
        = ((0xffffff0fffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__541__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__551__Vfuncout)) 
              << 0x00000024U));
    __Vfunc_prince_nibble_red16__552__vect = (0xde7bU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__541__state_in 
                                                         >> 0x20U)));
    __Vfunc_prince_nibble_red16__552__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__552__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__552__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__552__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__552__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__541__state_out 
        = ((0xfffff0ffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__541__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__552__Vfuncout)) 
              << 0x00000028U));
    __Vfunc_prince_nibble_red16__553__vect = (0xbde7U 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__541__state_in 
                                                         >> 0x20U)));
    __Vfunc_prince_nibble_red16__553__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__553__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__553__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__553__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__553__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__541__state_out 
        = ((0xffff0fffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__541__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__553__Vfuncout)) 
              << 0x0000002cU));
    __Vfunc_prince_nibble_red16__554__vect = (0xe7bdU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__541__state_in 
                                                         >> 0x30U)));
    __Vfunc_prince_nibble_red16__554__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__554__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__554__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__554__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__554__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__541__state_out 
        = ((0xfff0ffffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__541__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__554__Vfuncout)) 
              << 0x00000030U));
    __Vfunc_prince_nibble_red16__555__vect = (0xde7bU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__541__state_in 
                                                         >> 0x30U)));
    __Vfunc_prince_nibble_red16__555__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__555__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__555__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__555__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__555__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__541__state_out 
        = ((0xff0fffffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__541__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__555__Vfuncout)) 
              << 0x00000034U));
    __Vfunc_prince_nibble_red16__556__vect = (0xbde7U 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__541__state_in 
                                                         >> 0x30U)));
    __Vfunc_prince_nibble_red16__556__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__556__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__556__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__556__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__556__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__541__state_out 
        = ((0xf0ffffffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__541__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__556__Vfuncout)) 
              << 0x00000038U));
    __Vfunc_prince_nibble_red16__557__vect = (0x7bdeU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__541__state_in 
                                                         >> 0x30U)));
    __Vfunc_prince_nibble_red16__557__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__557__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__557__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__557__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__557__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__541__state_out 
        = ((0x0fffffffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__541__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__557__Vfuncout)) 
              << 0x0000003cU));
    __Vfunc_prince_mult_prime_64bit__541__Vfuncout 
        = vlSelfRef.__Vfunc_prince_mult_prime_64bit__541__state_out;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_fwd_pass__BRA__1__KET____DOT__data_state_round 
        = __Vfunc_prince_mult_prime_64bit__541__Vfuncout;
    __Vfunc_prince_shiftrows_64bit__558__state_in = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_fwd_pass__BRA__1__KET____DOT__data_state_round;
    vlSelf->__Vfunc_prince_shiftrows_64bit__558__state_out = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 817215069992456418ull);
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__558__state_out 
        = ((0xfffffffffffff000ULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__558__state_out) 
           | (IData)((IData)(((0x00000f00U & ((IData)(
                                                      (__Vfunc_prince_shiftrows_64bit__558__state_in 
                                                       >> 0x38U)) 
                                              << 8U)) 
                              | ((0x000000f0U & ((IData)(
                                                         (__Vfunc_prince_shiftrows_64bit__558__state_in 
                                                          >> 0x24U)) 
                                                 << 4U)) 
                                 | (0x0000000fU & (IData)(
                                                          (__Vfunc_prince_shiftrows_64bit__558__state_in 
                                                           >> 0x10U))))))));
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__558__state_out 
        = ((0xffffffffff000fffULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__558__state_out) 
           | ((QData)((IData)(((0x00000f00U & ((IData)(
                                                       (__Vfunc_prince_shiftrows_64bit__558__state_in 
                                                        >> 0x34U)) 
                                               << 8U)) 
                               | ((0x000000f0U & ((IData)(
                                                          (__Vfunc_prince_shiftrows_64bit__558__state_in 
                                                           >> 0x20U)) 
                                                  << 4U)) 
                                  | (0x0000000fU & (IData)(
                                                           (__Vfunc_prince_shiftrows_64bit__558__state_in 
                                                            >> 0x0cU))))))) 
              << 0x0000000cU));
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__558__state_out 
        = ((0xfffffff000ffffffULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__558__state_out) 
           | ((QData)((IData)(((0x00000f00U & ((IData)(
                                                       (__Vfunc_prince_shiftrows_64bit__558__state_in 
                                                        >> 0x30U)) 
                                               << 8U)) 
                               | ((0x000000f0U & ((IData)(
                                                          (__Vfunc_prince_shiftrows_64bit__558__state_in 
                                                           >> 0x1cU)) 
                                                  << 4U)) 
                                  | (0x0000000fU & (IData)(
                                                           (__Vfunc_prince_shiftrows_64bit__558__state_in 
                                                            >> 8U))))))) 
              << 0x00000018U));
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__558__state_out 
        = ((0xffff000fffffffffULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__558__state_out) 
           | ((QData)((IData)(((0x00000f00U & ((IData)(
                                                       (__Vfunc_prince_shiftrows_64bit__558__state_in 
                                                        >> 0x2cU)) 
                                               << 8U)) 
                               | ((0x000000f0U & ((IData)(
                                                          (__Vfunc_prince_shiftrows_64bit__558__state_in 
                                                           >> 0x18U)) 
                                                  << 4U)) 
                                  | (0x0000000fU & (IData)(
                                                           (__Vfunc_prince_shiftrows_64bit__558__state_in 
                                                            >> 4U))))))) 
              << 0x00000024U));
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__558__state_out 
        = ((0xf000ffffffffffffULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__558__state_out) 
           | ((QData)((IData)(((0x00000f00U & ((IData)(
                                                       (__Vfunc_prince_shiftrows_64bit__558__state_in 
                                                        >> 0x28U)) 
                                               << 8U)) 
                               | ((0x000000f0U & ((IData)(
                                                          (__Vfunc_prince_shiftrows_64bit__558__state_in 
                                                           >> 0x14U)) 
                                                  << 4U)) 
                                  | (0x0000000fU & (IData)(__Vfunc_prince_shiftrows_64bit__558__state_in)))))) 
              << 0x00000030U));
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__558__state_out 
        = ((0x0fffffffffffffffULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__558__state_out) 
           | ((QData)((IData)((0x0000000fU & (IData)(
                                                     (__Vfunc_prince_shiftrows_64bit__558__state_in 
                                                      >> 0x3cU))))) 
              << 0x0000003cU));
    __Vfunc_prince_shiftrows_64bit__558__Vfuncout = vlSelfRef.__Vfunc_prince_shiftrows_64bit__558__state_out;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_fwd_pass__BRA__1__KET____DOT__data_state_round 
        = __Vfunc_prince_shiftrows_64bit__558__Vfuncout;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1665 = (
                                                   (((4U 
                                                      & ((IData)(
                                                                 (0x21748fe3da09b65cULL 
                                                                  >> 
                                                                  ((IData)(1U) 
                                                                   + 
                                                                   (0x0000003fU 
                                                                    & VL_SHIFTL_III(6,6,32, 
                                                                                (0x0000000fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_43) 
                                                                                >> 4U)), 2U))))) 
                                                         << 2U)) 
                                                     | ((2U 
                                                         & ((IData)(
                                                                    (0x21748fe3da09b65cULL 
                                                                     >> 
                                                                     ((IData)(2U) 
                                                                      + 
                                                                      (0x0000003fU 
                                                                       & VL_SHIFTL_III(6,6,32, 
                                                                                (0x0000000fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_43) 
                                                                                >> 4U)), 2U))))) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & (IData)(
                                                                     (0x21748fe3da09b65cULL 
                                                                      >> 
                                                                      ((IData)(3U) 
                                                                       + 
                                                                       (0x0000003fU 
                                                                        & VL_SHIFTL_III(6,6,32, 
                                                                                (0x0000000fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_43) 
                                                                                >> 4U)), 2U)))))))) 
                                                    << 2U) 
                                                   | ((2U 
                                                       & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_43) 
                                                          >> 7U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_43) 
                                                            >> 9U))));
    __VdfgRegularize_h6e95ff9d_0_45 = ((2U & ((IData)(
                                                      (0x21748fe3da09b65cULL 
                                                       >> 
                                                       ((IData)(3U) 
                                                        + 
                                                        (0x0000003fU 
                                                         & VL_SHIFTL_III(6,6,32, 
                                                                         (0x0000000fU 
                                                                          & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_43) 
                                                                             >> 4U)), 2U))))) 
                                              << 1U)) 
                                       | (1U & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_43) 
                                                >> 9U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_lo__BRA__127__03a64__KET__ 
        = (0x13198a2e03707344ULL ^ (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_fwd_pass__BRA__1__KET____DOT__data_state_round 
                                    ^ (((QData)((IData)(
                                                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__key_q[3U])) 
                                        << 0x00000020U) 
                                       | (QData)((IData)(
                                                         vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__key_q[2U])))));
    __VdfgRegularize_h6e95ff9d_0_46 = ((4U & ((IData)(
                                                      (0x21748fe3da09b65cULL 
                                                       >> 
                                                       ((IData)(1U) 
                                                        + 
                                                        (0x0000003fU 
                                                         & VL_SHIFTL_III(6,6,32, 
                                                                         (0x0000000fU 
                                                                          & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_43) 
                                                                             >> 4U)), 2U))))) 
                                              << 2U)) 
                                       | (IData)(__VdfgRegularize_h6e95ff9d_0_45));
    __Vfunc_sbox4_64bit__671__state_in = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_lo__BRA__127__03a64__KET__;
    vlSelf->__Vfunc_sbox4_64bit__671__state_out = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 2159622474635055256ull);
    __Vfunc_sbox4_8bit__672__state_in = (0x000000ffU 
                                         & (IData)(__Vfunc_sbox4_64bit__671__state_in));
    vlSelf->__Vfunc_sbox4_8bit__672__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5964118268987791254ull);
    vlSelfRef.__Vfunc_sbox4_8bit__672__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__672__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__672__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__672__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__672__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__672__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__672__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__672__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__671__state_out = 
        ((0xffffffffffffff00ULL & vlSelfRef.__Vfunc_sbox4_64bit__671__state_out) 
         | (IData)((IData)(__Vfunc_sbox4_8bit__672__Vfuncout)));
    __Vfunc_sbox4_8bit__672__state_in = (0x000000ffU 
                                         & (IData)(
                                                   (__Vfunc_sbox4_64bit__671__state_in 
                                                    >> 8U)));
    vlSelf->__Vfunc_sbox4_8bit__672__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5964118268987791254ull);
    vlSelfRef.__Vfunc_sbox4_8bit__672__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__672__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__672__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__672__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__672__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__672__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__672__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__672__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__671__state_out = 
        ((0xffffffffffff00ffULL & vlSelfRef.__Vfunc_sbox4_64bit__671__state_out) 
         | ((QData)((IData)(__Vfunc_sbox4_8bit__672__Vfuncout)) 
            << 8U));
    __Vfunc_sbox4_8bit__672__state_in = (0x000000ffU 
                                         & (IData)(
                                                   (__Vfunc_sbox4_64bit__671__state_in 
                                                    >> 0x10U)));
    vlSelf->__Vfunc_sbox4_8bit__672__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5964118268987791254ull);
    vlSelfRef.__Vfunc_sbox4_8bit__672__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__672__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__672__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__672__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__672__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__672__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__672__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__672__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__671__state_out = 
        ((0xffffffffff00ffffULL & vlSelfRef.__Vfunc_sbox4_64bit__671__state_out) 
         | ((QData)((IData)(__Vfunc_sbox4_8bit__672__Vfuncout)) 
            << 0x00000010U));
    __Vfunc_sbox4_8bit__672__state_in = (0x000000ffU 
                                         & (IData)(
                                                   (__Vfunc_sbox4_64bit__671__state_in 
                                                    >> 0x18U)));
    vlSelf->__Vfunc_sbox4_8bit__672__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5964118268987791254ull);
    vlSelfRef.__Vfunc_sbox4_8bit__672__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__672__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__672__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__672__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__672__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__672__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__672__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__672__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__671__state_out = 
        ((0xffffffff00ffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__671__state_out) 
         | ((QData)((IData)(__Vfunc_sbox4_8bit__672__Vfuncout)) 
            << 0x00000018U));
    __Vfunc_sbox4_8bit__672__state_in = (0x000000ffU 
                                         & (IData)(
                                                   (__Vfunc_sbox4_64bit__671__state_in 
                                                    >> 0x20U)));
    vlSelf->__Vfunc_sbox4_8bit__672__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5964118268987791254ull);
    vlSelfRef.__Vfunc_sbox4_8bit__672__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__672__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__672__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__672__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__672__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__672__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__672__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__672__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__671__state_out = 
        ((0xffffff00ffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__671__state_out) 
         | ((QData)((IData)(__Vfunc_sbox4_8bit__672__Vfuncout)) 
            << 0x00000020U));
    __Vfunc_sbox4_8bit__672__state_in = (0x000000ffU 
                                         & (IData)(
                                                   (__Vfunc_sbox4_64bit__671__state_in 
                                                    >> 0x28U)));
    vlSelf->__Vfunc_sbox4_8bit__672__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5964118268987791254ull);
    vlSelfRef.__Vfunc_sbox4_8bit__672__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__672__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__672__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__672__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__672__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__672__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__672__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__672__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__671__state_out = 
        ((0xffff00ffffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__671__state_out) 
         | ((QData)((IData)(__Vfunc_sbox4_8bit__672__Vfuncout)) 
            << 0x00000028U));
    __Vfunc_sbox4_8bit__672__state_in = (0x000000ffU 
                                         & (IData)(
                                                   (__Vfunc_sbox4_64bit__671__state_in 
                                                    >> 0x30U)));
    vlSelf->__Vfunc_sbox4_8bit__672__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5964118268987791254ull);
    vlSelfRef.__Vfunc_sbox4_8bit__672__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__672__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__672__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__672__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__672__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__672__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__672__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__672__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__671__state_out = 
        ((0xff00ffffffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__671__state_out) 
         | ((QData)((IData)(__Vfunc_sbox4_8bit__672__Vfuncout)) 
            << 0x00000030U));
    __Vfunc_sbox4_8bit__672__state_in = (0x000000ffU 
                                         & (IData)(
                                                   (__Vfunc_sbox4_64bit__671__state_in 
                                                    >> 0x38U)));
    vlSelf->__Vfunc_sbox4_8bit__672__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5964118268987791254ull);
    vlSelfRef.__Vfunc_sbox4_8bit__672__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__672__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__672__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__672__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__672__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__672__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__672__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__672__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__671__state_out = 
        ((0x00ffffffffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__671__state_out) 
         | ((QData)((IData)(__Vfunc_sbox4_8bit__672__Vfuncout)) 
            << 0x00000038U));
    __Vfunc_sbox4_64bit__671__Vfuncout = vlSelfRef.__Vfunc_sbox4_64bit__671__state_out;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT____VdfgExtracted_h435ad752__1 
        = __Vfunc_sbox4_64bit__671__Vfuncout;
    __VdfgRegularize_h6e95ff9d_0_47 = ((8U & ((IData)(
                                                      (0x21748fe3da09b65cULL 
                                                       >> 
                                                       ((IData)(3U) 
                                                        + 
                                                        (0x0000003fU 
                                                         & VL_SHIFTL_III(6,6,32, 
                                                                         (0x0000000fU 
                                                                          & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_43)), 2U))))) 
                                              << 3U)) 
                                       | (IData)(__VdfgRegularize_h6e95ff9d_0_46));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_fwd_pass__BRA__2__KET____DOT__data_state_round 
        = chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT____VdfgExtracted_h435ad752__1;
    __Vfunc_prince_mult_prime_64bit__559__state_in 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_fwd_pass__BRA__2__KET____DOT__data_state_round;
    vlSelf->__Vfunc_prince_mult_prime_64bit__559__state_out = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 3183378302314537778ull);
    __Vfunc_prince_nibble_red16__560__vect = (0xe7bdU 
                                              & (IData)(__Vfunc_prince_mult_prime_64bit__559__state_in));
    __Vfunc_prince_nibble_red16__560__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__560__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__560__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__560__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__560__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__559__state_out 
        = ((0xfffffffffffffff0ULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__559__state_out) 
           | (IData)((IData)(__Vfunc_prince_nibble_red16__560__Vfuncout)));
    __Vfunc_prince_nibble_red16__561__vect = (0xde7bU 
                                              & (IData)(__Vfunc_prince_mult_prime_64bit__559__state_in));
    __Vfunc_prince_nibble_red16__561__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__561__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__561__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__561__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__561__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__559__state_out 
        = ((0xffffffffffffff0fULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__559__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__561__Vfuncout)) 
              << 4U));
    __Vfunc_prince_nibble_red16__562__vect = (0xbde7U 
                                              & (IData)(__Vfunc_prince_mult_prime_64bit__559__state_in));
    __Vfunc_prince_nibble_red16__562__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__562__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__562__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__562__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__562__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__559__state_out 
        = ((0xfffffffffffff0ffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__559__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__562__Vfuncout)) 
              << 8U));
    __Vfunc_prince_nibble_red16__563__vect = (0x7bdeU 
                                              & (IData)(__Vfunc_prince_mult_prime_64bit__559__state_in));
    __Vfunc_prince_nibble_red16__563__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__563__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__563__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__563__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__563__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__559__state_out 
        = ((0xffffffffffff0fffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__559__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__563__Vfuncout)) 
              << 0x0000000cU));
    __Vfunc_prince_nibble_red16__564__vect = (0x7bdeU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__559__state_in 
                                                         >> 0x10U)));
    __Vfunc_prince_nibble_red16__564__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__564__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__564__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__564__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__564__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__559__state_out 
        = ((0xfffffffffff0ffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__559__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__564__Vfuncout)) 
              << 0x00000010U));
    __Vfunc_prince_nibble_red16__565__vect = (0xe7bdU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__559__state_in 
                                                         >> 0x10U)));
    __Vfunc_prince_nibble_red16__565__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__565__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__565__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__565__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__565__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__559__state_out 
        = ((0xffffffffff0fffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__559__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__565__Vfuncout)) 
              << 0x00000014U));
    __Vfunc_prince_nibble_red16__566__vect = (0xde7bU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__559__state_in 
                                                         >> 0x10U)));
    __Vfunc_prince_nibble_red16__566__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__566__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__566__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__566__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__566__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__559__state_out 
        = ((0xfffffffff0ffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__559__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__566__Vfuncout)) 
              << 0x00000018U));
    __Vfunc_prince_nibble_red16__567__vect = (0xbde7U 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__559__state_in 
                                                         >> 0x10U)));
    __Vfunc_prince_nibble_red16__567__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__567__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__567__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__567__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__567__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__559__state_out 
        = ((0xffffffff0fffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__559__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__567__Vfuncout)) 
              << 0x0000001cU));
    __Vfunc_prince_nibble_red16__568__vect = (0x7bdeU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__559__state_in 
                                                         >> 0x20U)));
    __Vfunc_prince_nibble_red16__568__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__568__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__568__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__568__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__568__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__559__state_out 
        = ((0xfffffff0ffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__559__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__568__Vfuncout)) 
              << 0x00000020U));
    __Vfunc_prince_nibble_red16__569__vect = (0xe7bdU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__559__state_in 
                                                         >> 0x20U)));
    __Vfunc_prince_nibble_red16__569__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__569__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__569__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__569__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__569__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__559__state_out 
        = ((0xffffff0fffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__559__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__569__Vfuncout)) 
              << 0x00000024U));
    __Vfunc_prince_nibble_red16__570__vect = (0xde7bU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__559__state_in 
                                                         >> 0x20U)));
    __Vfunc_prince_nibble_red16__570__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__570__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__570__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__570__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__570__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__559__state_out 
        = ((0xfffff0ffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__559__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__570__Vfuncout)) 
              << 0x00000028U));
    __Vfunc_prince_nibble_red16__571__vect = (0xbde7U 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__559__state_in 
                                                         >> 0x20U)));
    __Vfunc_prince_nibble_red16__571__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__571__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__571__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__571__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__571__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__559__state_out 
        = ((0xffff0fffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__559__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__571__Vfuncout)) 
              << 0x0000002cU));
    __Vfunc_prince_nibble_red16__572__vect = (0xe7bdU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__559__state_in 
                                                         >> 0x30U)));
    __Vfunc_prince_nibble_red16__572__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__572__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__572__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__572__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__572__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__559__state_out 
        = ((0xfff0ffffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__559__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__572__Vfuncout)) 
              << 0x00000030U));
    __Vfunc_prince_nibble_red16__573__vect = (0xde7bU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__559__state_in 
                                                         >> 0x30U)));
    __Vfunc_prince_nibble_red16__573__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__573__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__573__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__573__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__573__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__559__state_out 
        = ((0xff0fffffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__559__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__573__Vfuncout)) 
              << 0x00000034U));
    __Vfunc_prince_nibble_red16__574__vect = (0xbde7U 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__559__state_in 
                                                         >> 0x30U)));
    __Vfunc_prince_nibble_red16__574__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__574__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__574__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__574__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__574__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__559__state_out 
        = ((0xf0ffffffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__559__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__574__Vfuncout)) 
              << 0x00000038U));
    __Vfunc_prince_nibble_red16__575__vect = (0x7bdeU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__559__state_in 
                                                         >> 0x30U)));
    __Vfunc_prince_nibble_red16__575__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__575__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__575__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__575__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__575__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__559__state_out 
        = ((0x0fffffffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__559__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__575__Vfuncout)) 
              << 0x0000003cU));
    __Vfunc_prince_mult_prime_64bit__559__Vfuncout 
        = vlSelfRef.__Vfunc_prince_mult_prime_64bit__559__state_out;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_fwd_pass__BRA__2__KET____DOT__data_state_round 
        = __Vfunc_prince_mult_prime_64bit__559__Vfuncout;
    __Vfunc_prince_shiftrows_64bit__576__state_in = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_fwd_pass__BRA__2__KET____DOT__data_state_round;
    vlSelf->__Vfunc_prince_shiftrows_64bit__576__state_out = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 10732929326028919351ull);
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__576__state_out 
        = ((0xfffffffffffff000ULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__576__state_out) 
           | (IData)((IData)(((0x00000f00U & ((IData)(
                                                      (__Vfunc_prince_shiftrows_64bit__576__state_in 
                                                       >> 0x38U)) 
                                              << 8U)) 
                              | ((0x000000f0U & ((IData)(
                                                         (__Vfunc_prince_shiftrows_64bit__576__state_in 
                                                          >> 0x24U)) 
                                                 << 4U)) 
                                 | (0x0000000fU & (IData)(
                                                          (__Vfunc_prince_shiftrows_64bit__576__state_in 
                                                           >> 0x10U))))))));
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__576__state_out 
        = ((0xffffffffff000fffULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__576__state_out) 
           | ((QData)((IData)(((0x00000f00U & ((IData)(
                                                       (__Vfunc_prince_shiftrows_64bit__576__state_in 
                                                        >> 0x34U)) 
                                               << 8U)) 
                               | ((0x000000f0U & ((IData)(
                                                          (__Vfunc_prince_shiftrows_64bit__576__state_in 
                                                           >> 0x20U)) 
                                                  << 4U)) 
                                  | (0x0000000fU & (IData)(
                                                           (__Vfunc_prince_shiftrows_64bit__576__state_in 
                                                            >> 0x0cU))))))) 
              << 0x0000000cU));
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__576__state_out 
        = ((0xfffffff000ffffffULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__576__state_out) 
           | ((QData)((IData)(((0x00000f00U & ((IData)(
                                                       (__Vfunc_prince_shiftrows_64bit__576__state_in 
                                                        >> 0x30U)) 
                                               << 8U)) 
                               | ((0x000000f0U & ((IData)(
                                                          (__Vfunc_prince_shiftrows_64bit__576__state_in 
                                                           >> 0x1cU)) 
                                                  << 4U)) 
                                  | (0x0000000fU & (IData)(
                                                           (__Vfunc_prince_shiftrows_64bit__576__state_in 
                                                            >> 8U))))))) 
              << 0x00000018U));
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__576__state_out 
        = ((0xffff000fffffffffULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__576__state_out) 
           | ((QData)((IData)(((0x00000f00U & ((IData)(
                                                       (__Vfunc_prince_shiftrows_64bit__576__state_in 
                                                        >> 0x2cU)) 
                                               << 8U)) 
                               | ((0x000000f0U & ((IData)(
                                                          (__Vfunc_prince_shiftrows_64bit__576__state_in 
                                                           >> 0x18U)) 
                                                  << 4U)) 
                                  | (0x0000000fU & (IData)(
                                                           (__Vfunc_prince_shiftrows_64bit__576__state_in 
                                                            >> 4U))))))) 
              << 0x00000024U));
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__576__state_out 
        = ((0xf000ffffffffffffULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__576__state_out) 
           | ((QData)((IData)(((0x00000f00U & ((IData)(
                                                       (__Vfunc_prince_shiftrows_64bit__576__state_in 
                                                        >> 0x28U)) 
                                               << 8U)) 
                               | ((0x000000f0U & ((IData)(
                                                          (__Vfunc_prince_shiftrows_64bit__576__state_in 
                                                           >> 0x14U)) 
                                                  << 4U)) 
                                  | (0x0000000fU & (IData)(__Vfunc_prince_shiftrows_64bit__576__state_in)))))) 
              << 0x00000030U));
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__576__state_out 
        = ((0x0fffffffffffffffULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__576__state_out) 
           | ((QData)((IData)((0x0000000fU & (IData)(
                                                     (__Vfunc_prince_shiftrows_64bit__576__state_in 
                                                      >> 0x3cU))))) 
              << 0x0000003cU));
    __Vfunc_prince_shiftrows_64bit__576__Vfuncout = vlSelfRef.__Vfunc_prince_shiftrows_64bit__576__state_out;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_fwd_pass__BRA__2__KET____DOT__data_state_round 
        = __Vfunc_prince_shiftrows_64bit__576__Vfuncout;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_sbox 
        = (((((4U & ((IData)((0x21748fe3da09b65cULL 
                              >> (0x0000003fU & VL_SHIFTL_III(6,6,32, 
                                                              (0x0000000fU 
                                                               & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_43)), 2U)))) 
                     << 2U)) | ((2U & ((IData)((0x21748fe3da09b65cULL 
                                                >> 
                                                ((IData)(2U) 
                                                 + 
                                                 (0x0000003fU 
                                                  & VL_SHIFTL_III(6,6,32, 
                                                                  (0x0000000fU 
                                                                   & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_43)), 2U))))) 
                                       << 1U)) | (1U 
                                                  & (IData)(
                                                            (0x21748fe3da09b65cULL 
                                                             >> 
                                                             (0x0000003fU 
                                                              & VL_SHIFTL_III(6,6,32, 
                                                                              (0x0000000fU 
                                                                               & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_43) 
                                                                                >> 4U)), 2U))))))) 
             << 7U) | (((2U & ((IData)((0x21748fe3da09b65cULL 
                                        >> ((IData)(2U) 
                                            + (0x0000003fU 
                                               & VL_SHIFTL_III(6,6,32, 
                                                               (0x0000000fU 
                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_43) 
                                                                   >> 4U)), 2U))))) 
                               << 1U)) | (1U & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_43) 
                                                >> 8U))) 
                       << 5U)) | ((0x00000010U & ((IData)(
                                                          (0x21748fe3da09b65cULL 
                                                           >> 
                                                           ((IData)(1U) 
                                                            + 
                                                            (0x0000003fU 
                                                             & VL_SHIFTL_III(6,6,32, 
                                                                             (0x0000000fU 
                                                                              & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_43)), 2U))))) 
                                                  << 4U)) 
                                  | (IData)(__VdfgRegularize_h6e95ff9d_0_47)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_lo__BRA__191__03a128__KET__ 
        = (0xa4093822299f31d0ULL ^ (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_fwd_pass__BRA__2__KET____DOT__data_state_round 
                                    ^ (((QData)((IData)(
                                                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__key_q[1U])) 
                                        << 0x00000020U) 
                                       | (QData)((IData)(
                                                         vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__key_q[0U])))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_48 = (0x000003ffU 
                                                 & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_sbox) 
                                                    ^ 
                                                    ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__nonce_q[1U] 
                                                      << 0x0000000aU) 
                                                     | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__nonce_q[1U] 
                                                        >> 0x00000016U))));
    __Vfunc_sbox4_64bit__673__state_in = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_lo__BRA__191__03a128__KET__;
    vlSelf->__Vfunc_sbox4_64bit__673__state_out = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 15790696381323616352ull);
    __Vfunc_sbox4_8bit__674__state_in = (0x000000ffU 
                                         & (IData)(__Vfunc_sbox4_64bit__673__state_in));
    vlSelf->__Vfunc_sbox4_8bit__674__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10065765702458752874ull);
    vlSelfRef.__Vfunc_sbox4_8bit__674__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__674__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__674__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__674__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__674__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__674__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__674__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__674__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__673__state_out = 
        ((0xffffffffffffff00ULL & vlSelfRef.__Vfunc_sbox4_64bit__673__state_out) 
         | (IData)((IData)(__Vfunc_sbox4_8bit__674__Vfuncout)));
    __Vfunc_sbox4_8bit__674__state_in = (0x000000ffU 
                                         & (IData)(
                                                   (__Vfunc_sbox4_64bit__673__state_in 
                                                    >> 8U)));
    vlSelf->__Vfunc_sbox4_8bit__674__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10065765702458752874ull);
    vlSelfRef.__Vfunc_sbox4_8bit__674__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__674__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__674__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__674__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__674__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__674__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__674__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__674__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__673__state_out = 
        ((0xffffffffffff00ffULL & vlSelfRef.__Vfunc_sbox4_64bit__673__state_out) 
         | ((QData)((IData)(__Vfunc_sbox4_8bit__674__Vfuncout)) 
            << 8U));
    __Vfunc_sbox4_8bit__674__state_in = (0x000000ffU 
                                         & (IData)(
                                                   (__Vfunc_sbox4_64bit__673__state_in 
                                                    >> 0x10U)));
    vlSelf->__Vfunc_sbox4_8bit__674__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10065765702458752874ull);
    vlSelfRef.__Vfunc_sbox4_8bit__674__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__674__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__674__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__674__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__674__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__674__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__674__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__674__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__673__state_out = 
        ((0xffffffffff00ffffULL & vlSelfRef.__Vfunc_sbox4_64bit__673__state_out) 
         | ((QData)((IData)(__Vfunc_sbox4_8bit__674__Vfuncout)) 
            << 0x00000010U));
    __Vfunc_sbox4_8bit__674__state_in = (0x000000ffU 
                                         & (IData)(
                                                   (__Vfunc_sbox4_64bit__673__state_in 
                                                    >> 0x18U)));
    vlSelf->__Vfunc_sbox4_8bit__674__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10065765702458752874ull);
    vlSelfRef.__Vfunc_sbox4_8bit__674__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__674__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__674__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__674__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__674__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__674__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__674__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__674__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__673__state_out = 
        ((0xffffffff00ffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__673__state_out) 
         | ((QData)((IData)(__Vfunc_sbox4_8bit__674__Vfuncout)) 
            << 0x00000018U));
    __Vfunc_sbox4_8bit__674__state_in = (0x000000ffU 
                                         & (IData)(
                                                   (__Vfunc_sbox4_64bit__673__state_in 
                                                    >> 0x20U)));
    vlSelf->__Vfunc_sbox4_8bit__674__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10065765702458752874ull);
    vlSelfRef.__Vfunc_sbox4_8bit__674__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__674__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__674__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__674__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__674__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__674__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__674__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__674__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__673__state_out = 
        ((0xffffff00ffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__673__state_out) 
         | ((QData)((IData)(__Vfunc_sbox4_8bit__674__Vfuncout)) 
            << 0x00000020U));
    __Vfunc_sbox4_8bit__674__state_in = (0x000000ffU 
                                         & (IData)(
                                                   (__Vfunc_sbox4_64bit__673__state_in 
                                                    >> 0x28U)));
    vlSelf->__Vfunc_sbox4_8bit__674__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10065765702458752874ull);
    vlSelfRef.__Vfunc_sbox4_8bit__674__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__674__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__674__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__674__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__674__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__674__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__674__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__674__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__673__state_out = 
        ((0xffff00ffffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__673__state_out) 
         | ((QData)((IData)(__Vfunc_sbox4_8bit__674__Vfuncout)) 
            << 0x00000028U));
    __Vfunc_sbox4_8bit__674__state_in = (0x000000ffU 
                                         & (IData)(
                                                   (__Vfunc_sbox4_64bit__673__state_in 
                                                    >> 0x30U)));
    vlSelf->__Vfunc_sbox4_8bit__674__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10065765702458752874ull);
    vlSelfRef.__Vfunc_sbox4_8bit__674__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__674__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__674__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__674__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__674__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__674__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__674__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__674__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__673__state_out = 
        ((0xff00ffffffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__673__state_out) 
         | ((QData)((IData)(__Vfunc_sbox4_8bit__674__Vfuncout)) 
            << 0x00000030U));
    __Vfunc_sbox4_8bit__674__state_in = (0x000000ffU 
                                         & (IData)(
                                                   (__Vfunc_sbox4_64bit__673__state_in 
                                                    >> 0x38U)));
    vlSelf->__Vfunc_sbox4_8bit__674__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10065765702458752874ull);
    vlSelfRef.__Vfunc_sbox4_8bit__674__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__674__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__674__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__674__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__674__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__674__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__674__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__674__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__673__state_out = 
        ((0x00ffffffffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__673__state_out) 
         | ((QData)((IData)(__Vfunc_sbox4_8bit__674__Vfuncout)) 
            << 0x00000038U));
    __Vfunc_sbox4_64bit__673__Vfuncout = vlSelfRef.__Vfunc_sbox4_64bit__673__state_out;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT____VdfgExtracted_h99e0c7c1__1 
        = __Vfunc_sbox4_64bit__673__Vfuncout;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1666 = (
                                                   (((4U 
                                                      & ((IData)(
                                                                 (0x21748fe3da09b65cULL 
                                                                  >> 
                                                                  ((IData)(1U) 
                                                                   + 
                                                                   (0x0000003fU 
                                                                    & VL_SHIFTL_III(6,6,32, 
                                                                                (0x0000000fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_48) 
                                                                                >> 4U)), 2U))))) 
                                                         << 2U)) 
                                                     | ((2U 
                                                         & ((IData)(
                                                                    (0x21748fe3da09b65cULL 
                                                                     >> 
                                                                     ((IData)(2U) 
                                                                      + 
                                                                      (0x0000003fU 
                                                                       & VL_SHIFTL_III(6,6,32, 
                                                                                (0x0000000fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_48) 
                                                                                >> 4U)), 2U))))) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & (IData)(
                                                                     (0x21748fe3da09b65cULL 
                                                                      >> 
                                                                      ((IData)(3U) 
                                                                       + 
                                                                       (0x0000003fU 
                                                                        & VL_SHIFTL_III(6,6,32, 
                                                                                (0x0000000fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_48) 
                                                                                >> 4U)), 2U)))))))) 
                                                    << 2U) 
                                                   | ((2U 
                                                       & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_48) 
                                                          >> 7U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_48) 
                                                            >> 9U))));
    __VdfgRegularize_h6e95ff9d_0_50 = ((2U & ((IData)(
                                                      (0x21748fe3da09b65cULL 
                                                       >> 
                                                       ((IData)(3U) 
                                                        + 
                                                        (0x0000003fU 
                                                         & VL_SHIFTL_III(6,6,32, 
                                                                         (0x0000000fU 
                                                                          & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_48) 
                                                                             >> 4U)), 2U))))) 
                                              << 1U)) 
                                       | (1U & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_48) 
                                                >> 9U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_fwd_pass__BRA__3__KET____DOT__data_state_round 
        = chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT____VdfgExtracted_h99e0c7c1__1;
    __Vfunc_prince_mult_prime_64bit__577__state_in 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_fwd_pass__BRA__3__KET____DOT__data_state_round;
    vlSelf->__Vfunc_prince_mult_prime_64bit__577__state_out = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 11766528133414702243ull);
    __Vfunc_prince_nibble_red16__578__vect = (0xe7bdU 
                                              & (IData)(__Vfunc_prince_mult_prime_64bit__577__state_in));
    __Vfunc_prince_nibble_red16__578__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__578__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__578__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__578__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__578__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__577__state_out 
        = ((0xfffffffffffffff0ULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__577__state_out) 
           | (IData)((IData)(__Vfunc_prince_nibble_red16__578__Vfuncout)));
    __Vfunc_prince_nibble_red16__579__vect = (0xde7bU 
                                              & (IData)(__Vfunc_prince_mult_prime_64bit__577__state_in));
    __Vfunc_prince_nibble_red16__579__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__579__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__579__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__579__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__579__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__577__state_out 
        = ((0xffffffffffffff0fULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__577__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__579__Vfuncout)) 
              << 4U));
    __Vfunc_prince_nibble_red16__580__vect = (0xbde7U 
                                              & (IData)(__Vfunc_prince_mult_prime_64bit__577__state_in));
    __Vfunc_prince_nibble_red16__580__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__580__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__580__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__580__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__580__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__577__state_out 
        = ((0xfffffffffffff0ffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__577__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__580__Vfuncout)) 
              << 8U));
    __Vfunc_prince_nibble_red16__581__vect = (0x7bdeU 
                                              & (IData)(__Vfunc_prince_mult_prime_64bit__577__state_in));
    __Vfunc_prince_nibble_red16__581__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__581__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__581__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__581__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__581__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__577__state_out 
        = ((0xffffffffffff0fffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__577__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__581__Vfuncout)) 
              << 0x0000000cU));
    __Vfunc_prince_nibble_red16__582__vect = (0x7bdeU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__577__state_in 
                                                         >> 0x10U)));
    __Vfunc_prince_nibble_red16__582__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__582__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__582__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__582__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__582__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__577__state_out 
        = ((0xfffffffffff0ffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__577__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__582__Vfuncout)) 
              << 0x00000010U));
    __Vfunc_prince_nibble_red16__583__vect = (0xe7bdU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__577__state_in 
                                                         >> 0x10U)));
    __Vfunc_prince_nibble_red16__583__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__583__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__583__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__583__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__583__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__577__state_out 
        = ((0xffffffffff0fffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__577__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__583__Vfuncout)) 
              << 0x00000014U));
    __Vfunc_prince_nibble_red16__584__vect = (0xde7bU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__577__state_in 
                                                         >> 0x10U)));
    __Vfunc_prince_nibble_red16__584__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__584__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__584__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__584__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__584__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__577__state_out 
        = ((0xfffffffff0ffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__577__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__584__Vfuncout)) 
              << 0x00000018U));
    __Vfunc_prince_nibble_red16__585__vect = (0xbde7U 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__577__state_in 
                                                         >> 0x10U)));
    __Vfunc_prince_nibble_red16__585__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__585__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__585__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__585__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__585__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__577__state_out 
        = ((0xffffffff0fffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__577__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__585__Vfuncout)) 
              << 0x0000001cU));
    __Vfunc_prince_nibble_red16__586__vect = (0x7bdeU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__577__state_in 
                                                         >> 0x20U)));
    __Vfunc_prince_nibble_red16__586__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__586__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__586__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__586__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__586__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__577__state_out 
        = ((0xfffffff0ffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__577__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__586__Vfuncout)) 
              << 0x00000020U));
    __Vfunc_prince_nibble_red16__587__vect = (0xe7bdU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__577__state_in 
                                                         >> 0x20U)));
    __Vfunc_prince_nibble_red16__587__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__587__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__587__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__587__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__587__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__577__state_out 
        = ((0xffffff0fffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__577__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__587__Vfuncout)) 
              << 0x00000024U));
    __Vfunc_prince_nibble_red16__588__vect = (0xde7bU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__577__state_in 
                                                         >> 0x20U)));
    __Vfunc_prince_nibble_red16__588__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__588__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__588__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__588__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__588__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__577__state_out 
        = ((0xfffff0ffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__577__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__588__Vfuncout)) 
              << 0x00000028U));
    __Vfunc_prince_nibble_red16__589__vect = (0xbde7U 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__577__state_in 
                                                         >> 0x20U)));
    __Vfunc_prince_nibble_red16__589__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__589__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__589__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__589__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__589__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__577__state_out 
        = ((0xffff0fffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__577__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__589__Vfuncout)) 
              << 0x0000002cU));
    __Vfunc_prince_nibble_red16__590__vect = (0xe7bdU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__577__state_in 
                                                         >> 0x30U)));
    __Vfunc_prince_nibble_red16__590__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__590__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__590__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__590__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__590__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__577__state_out 
        = ((0xfff0ffffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__577__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__590__Vfuncout)) 
              << 0x00000030U));
    __Vfunc_prince_nibble_red16__591__vect = (0xde7bU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__577__state_in 
                                                         >> 0x30U)));
    __Vfunc_prince_nibble_red16__591__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__591__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__591__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__591__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__591__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__577__state_out 
        = ((0xff0fffffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__577__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__591__Vfuncout)) 
              << 0x00000034U));
    __Vfunc_prince_nibble_red16__592__vect = (0xbde7U 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__577__state_in 
                                                         >> 0x30U)));
    __Vfunc_prince_nibble_red16__592__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__592__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__592__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__592__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__592__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__577__state_out 
        = ((0xf0ffffffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__577__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__592__Vfuncout)) 
              << 0x00000038U));
    __Vfunc_prince_nibble_red16__593__vect = (0x7bdeU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__577__state_in 
                                                         >> 0x30U)));
    __Vfunc_prince_nibble_red16__593__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__593__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__593__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__593__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__593__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__577__state_out 
        = ((0x0fffffffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__577__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__593__Vfuncout)) 
              << 0x0000003cU));
    __Vfunc_prince_mult_prime_64bit__577__Vfuncout 
        = vlSelfRef.__Vfunc_prince_mult_prime_64bit__577__state_out;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_fwd_pass__BRA__3__KET____DOT__data_state_round 
        = __Vfunc_prince_mult_prime_64bit__577__Vfuncout;
    __Vfunc_prince_shiftrows_64bit__594__state_in = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_fwd_pass__BRA__3__KET____DOT__data_state_round;
    vlSelf->__Vfunc_prince_shiftrows_64bit__594__state_out = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 17789318362591811009ull);
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__594__state_out 
        = ((0xfffffffffffff000ULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__594__state_out) 
           | (IData)((IData)(((0x00000f00U & ((IData)(
                                                      (__Vfunc_prince_shiftrows_64bit__594__state_in 
                                                       >> 0x38U)) 
                                              << 8U)) 
                              | ((0x000000f0U & ((IData)(
                                                         (__Vfunc_prince_shiftrows_64bit__594__state_in 
                                                          >> 0x24U)) 
                                                 << 4U)) 
                                 | (0x0000000fU & (IData)(
                                                          (__Vfunc_prince_shiftrows_64bit__594__state_in 
                                                           >> 0x10U))))))));
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__594__state_out 
        = ((0xffffffffff000fffULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__594__state_out) 
           | ((QData)((IData)(((0x00000f00U & ((IData)(
                                                       (__Vfunc_prince_shiftrows_64bit__594__state_in 
                                                        >> 0x34U)) 
                                               << 8U)) 
                               | ((0x000000f0U & ((IData)(
                                                          (__Vfunc_prince_shiftrows_64bit__594__state_in 
                                                           >> 0x20U)) 
                                                  << 4U)) 
                                  | (0x0000000fU & (IData)(
                                                           (__Vfunc_prince_shiftrows_64bit__594__state_in 
                                                            >> 0x0cU))))))) 
              << 0x0000000cU));
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__594__state_out 
        = ((0xfffffff000ffffffULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__594__state_out) 
           | ((QData)((IData)(((0x00000f00U & ((IData)(
                                                       (__Vfunc_prince_shiftrows_64bit__594__state_in 
                                                        >> 0x30U)) 
                                               << 8U)) 
                               | ((0x000000f0U & ((IData)(
                                                          (__Vfunc_prince_shiftrows_64bit__594__state_in 
                                                           >> 0x1cU)) 
                                                  << 4U)) 
                                  | (0x0000000fU & (IData)(
                                                           (__Vfunc_prince_shiftrows_64bit__594__state_in 
                                                            >> 8U))))))) 
              << 0x00000018U));
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__594__state_out 
        = ((0xffff000fffffffffULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__594__state_out) 
           | ((QData)((IData)(((0x00000f00U & ((IData)(
                                                       (__Vfunc_prince_shiftrows_64bit__594__state_in 
                                                        >> 0x2cU)) 
                                               << 8U)) 
                               | ((0x000000f0U & ((IData)(
                                                          (__Vfunc_prince_shiftrows_64bit__594__state_in 
                                                           >> 0x18U)) 
                                                  << 4U)) 
                                  | (0x0000000fU & (IData)(
                                                           (__Vfunc_prince_shiftrows_64bit__594__state_in 
                                                            >> 4U))))))) 
              << 0x00000024U));
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__594__state_out 
        = ((0xf000ffffffffffffULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__594__state_out) 
           | ((QData)((IData)(((0x00000f00U & ((IData)(
                                                       (__Vfunc_prince_shiftrows_64bit__594__state_in 
                                                        >> 0x28U)) 
                                               << 8U)) 
                               | ((0x000000f0U & ((IData)(
                                                          (__Vfunc_prince_shiftrows_64bit__594__state_in 
                                                           >> 0x14U)) 
                                                  << 4U)) 
                                  | (0x0000000fU & (IData)(__Vfunc_prince_shiftrows_64bit__594__state_in)))))) 
              << 0x00000030U));
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__594__state_out 
        = ((0x0fffffffffffffffULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__594__state_out) 
           | ((QData)((IData)((0x0000000fU & (IData)(
                                                     (__Vfunc_prince_shiftrows_64bit__594__state_in 
                                                      >> 0x3cU))))) 
              << 0x0000003cU));
    __Vfunc_prince_shiftrows_64bit__594__Vfuncout = vlSelfRef.__Vfunc_prince_shiftrows_64bit__594__state_out;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_fwd_pass__BRA__3__KET____DOT__data_state_round 
        = __Vfunc_prince_shiftrows_64bit__594__Vfuncout;
    __VdfgRegularize_h6e95ff9d_0_51 = ((4U & ((IData)(
                                                      (0x21748fe3da09b65cULL 
                                                       >> 
                                                       ((IData)(1U) 
                                                        + 
                                                        (0x0000003fU 
                                                         & VL_SHIFTL_III(6,6,32, 
                                                                         (0x0000000fU 
                                                                          & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_48) 
                                                                             >> 4U)), 2U))))) 
                                              << 2U)) 
                                       | (IData)(__VdfgRegularize_h6e95ff9d_0_50));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_lo__BRA__255__03a192__KET__ 
        = (0x082efa98ec4e6c89ULL ^ (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_fwd_pass__BRA__3__KET____DOT__data_state_round 
                                    ^ (((QData)((IData)(
                                                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__key_q[3U])) 
                                        << 0x00000020U) 
                                       | (QData)((IData)(
                                                         vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__key_q[2U])))));
    __VdfgRegularize_h6e95ff9d_0_52 = ((8U & ((IData)(
                                                      (0x21748fe3da09b65cULL 
                                                       >> 
                                                       ((IData)(3U) 
                                                        + 
                                                        (0x0000003fU 
                                                         & VL_SHIFTL_III(6,6,32, 
                                                                         (0x0000000fU 
                                                                          & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_48)), 2U))))) 
                                              << 3U)) 
                                       | (IData)(__VdfgRegularize_h6e95ff9d_0_51));
    __Vfunc_sbox4_64bit__675__state_in = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_lo__BRA__255__03a192__KET__;
    vlSelf->__Vfunc_sbox4_64bit__675__state_out = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 6186643723134476382ull);
    __Vfunc_sbox4_8bit__676__state_in = (0x000000ffU 
                                         & (IData)(__Vfunc_sbox4_64bit__675__state_in));
    vlSelf->__Vfunc_sbox4_8bit__676__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1040937831383985175ull);
    vlSelfRef.__Vfunc_sbox4_8bit__676__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__676__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__676__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__676__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__676__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__676__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__676__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__676__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__675__state_out = 
        ((0xffffffffffffff00ULL & vlSelfRef.__Vfunc_sbox4_64bit__675__state_out) 
         | (IData)((IData)(__Vfunc_sbox4_8bit__676__Vfuncout)));
    __Vfunc_sbox4_8bit__676__state_in = (0x000000ffU 
                                         & (IData)(
                                                   (__Vfunc_sbox4_64bit__675__state_in 
                                                    >> 8U)));
    vlSelf->__Vfunc_sbox4_8bit__676__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1040937831383985175ull);
    vlSelfRef.__Vfunc_sbox4_8bit__676__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__676__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__676__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__676__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__676__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__676__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__676__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__676__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__675__state_out = 
        ((0xffffffffffff00ffULL & vlSelfRef.__Vfunc_sbox4_64bit__675__state_out) 
         | ((QData)((IData)(__Vfunc_sbox4_8bit__676__Vfuncout)) 
            << 8U));
    __Vfunc_sbox4_8bit__676__state_in = (0x000000ffU 
                                         & (IData)(
                                                   (__Vfunc_sbox4_64bit__675__state_in 
                                                    >> 0x10U)));
    vlSelf->__Vfunc_sbox4_8bit__676__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1040937831383985175ull);
    vlSelfRef.__Vfunc_sbox4_8bit__676__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__676__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__676__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__676__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__676__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__676__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__676__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__676__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__675__state_out = 
        ((0xffffffffff00ffffULL & vlSelfRef.__Vfunc_sbox4_64bit__675__state_out) 
         | ((QData)((IData)(__Vfunc_sbox4_8bit__676__Vfuncout)) 
            << 0x00000010U));
    __Vfunc_sbox4_8bit__676__state_in = (0x000000ffU 
                                         & (IData)(
                                                   (__Vfunc_sbox4_64bit__675__state_in 
                                                    >> 0x18U)));
    vlSelf->__Vfunc_sbox4_8bit__676__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1040937831383985175ull);
    vlSelfRef.__Vfunc_sbox4_8bit__676__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__676__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__676__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__676__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__676__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__676__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__676__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__676__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__675__state_out = 
        ((0xffffffff00ffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__675__state_out) 
         | ((QData)((IData)(__Vfunc_sbox4_8bit__676__Vfuncout)) 
            << 0x00000018U));
    __Vfunc_sbox4_8bit__676__state_in = (0x000000ffU 
                                         & (IData)(
                                                   (__Vfunc_sbox4_64bit__675__state_in 
                                                    >> 0x20U)));
    vlSelf->__Vfunc_sbox4_8bit__676__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1040937831383985175ull);
    vlSelfRef.__Vfunc_sbox4_8bit__676__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__676__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__676__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__676__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__676__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__676__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__676__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__676__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__675__state_out = 
        ((0xffffff00ffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__675__state_out) 
         | ((QData)((IData)(__Vfunc_sbox4_8bit__676__Vfuncout)) 
            << 0x00000020U));
    __Vfunc_sbox4_8bit__676__state_in = (0x000000ffU 
                                         & (IData)(
                                                   (__Vfunc_sbox4_64bit__675__state_in 
                                                    >> 0x28U)));
    vlSelf->__Vfunc_sbox4_8bit__676__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1040937831383985175ull);
    vlSelfRef.__Vfunc_sbox4_8bit__676__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__676__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__676__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__676__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__676__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__676__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__676__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__676__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__675__state_out = 
        ((0xffff00ffffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__675__state_out) 
         | ((QData)((IData)(__Vfunc_sbox4_8bit__676__Vfuncout)) 
            << 0x00000028U));
    __Vfunc_sbox4_8bit__676__state_in = (0x000000ffU 
                                         & (IData)(
                                                   (__Vfunc_sbox4_64bit__675__state_in 
                                                    >> 0x30U)));
    vlSelf->__Vfunc_sbox4_8bit__676__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1040937831383985175ull);
    vlSelfRef.__Vfunc_sbox4_8bit__676__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__676__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__676__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__676__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__676__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__676__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__676__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__676__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__675__state_out = 
        ((0xff00ffffffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__675__state_out) 
         | ((QData)((IData)(__Vfunc_sbox4_8bit__676__Vfuncout)) 
            << 0x00000030U));
    __Vfunc_sbox4_8bit__676__state_in = (0x000000ffU 
                                         & (IData)(
                                                   (__Vfunc_sbox4_64bit__675__state_in 
                                                    >> 0x38U)));
    vlSelf->__Vfunc_sbox4_8bit__676__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1040937831383985175ull);
    vlSelfRef.__Vfunc_sbox4_8bit__676__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__676__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__676__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__676__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__676__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__676__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__676__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__676__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__675__state_out = 
        ((0x00ffffffffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__675__state_out) 
         | ((QData)((IData)(__Vfunc_sbox4_8bit__676__Vfuncout)) 
            << 0x00000038U));
    __Vfunc_sbox4_64bit__675__Vfuncout = vlSelfRef.__Vfunc_sbox4_64bit__675__state_out;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT____VdfgExtracted_h36ab3cd7__1 
        = __Vfunc_sbox4_64bit__675__Vfuncout;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_sbox 
        = (((((4U & ((IData)((0x21748fe3da09b65cULL 
                              >> (0x0000003fU & VL_SHIFTL_III(6,6,32, 
                                                              (0x0000000fU 
                                                               & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_48)), 2U)))) 
                     << 2U)) | ((2U & ((IData)((0x21748fe3da09b65cULL 
                                                >> 
                                                ((IData)(2U) 
                                                 + 
                                                 (0x0000003fU 
                                                  & VL_SHIFTL_III(6,6,32, 
                                                                  (0x0000000fU 
                                                                   & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_48)), 2U))))) 
                                       << 1U)) | (1U 
                                                  & (IData)(
                                                            (0x21748fe3da09b65cULL 
                                                             >> 
                                                             (0x0000003fU 
                                                              & VL_SHIFTL_III(6,6,32, 
                                                                              (0x0000000fU 
                                                                               & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_48) 
                                                                                >> 4U)), 2U))))))) 
             << 7U) | (((2U & ((IData)((0x21748fe3da09b65cULL 
                                        >> ((IData)(2U) 
                                            + (0x0000003fU 
                                               & VL_SHIFTL_III(6,6,32, 
                                                               (0x0000000fU 
                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_48) 
                                                                   >> 4U)), 2U))))) 
                               << 1U)) | (1U & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_48) 
                                                >> 8U))) 
                       << 5U)) | ((0x00000010U & ((IData)(
                                                          (0x21748fe3da09b65cULL 
                                                           >> 
                                                           ((IData)(1U) 
                                                            + 
                                                            (0x0000003fU 
                                                             & VL_SHIFTL_III(6,6,32, 
                                                                             (0x0000000fU 
                                                                              & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_48)), 2U))))) 
                                                  << 4U)) 
                                  | (IData)(__VdfgRegularize_h6e95ff9d_0_52)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__data_o 
        = (0x000003ffU & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_prim_ram_1p_scr__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_sbox) 
                          ^ ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__nonce_q[1U] 
                              << 0x0000000aU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__nonce_q[1U] 
                                                 >> 0x00000016U))));
}

void Vsim___024root___act_comb__TOP__46(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___act_comb__TOP__46\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*63:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_prim_ram_1p_scr__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT____VdfgExtracted_h435ad752__2;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_prim_ram_1p_scr__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT____VdfgExtracted_h435ad752__2 = 0;
    QData/*63:0*/ __Vfunc_sbox4_64bit__3058__Vfuncout;
    __Vfunc_sbox4_64bit__3058__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_sbox4_64bit__3058__state_in;
    __Vfunc_sbox4_64bit__3058__state_in = 0;
    CData/*7:0*/ __Vfunc_sbox4_8bit__3059__Vfuncout;
    __Vfunc_sbox4_8bit__3059__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_sbox4_8bit__3059__state_in;
    __Vfunc_sbox4_8bit__3059__state_in = 0;
    QData/*63:0*/ __Vfunc_prince_mult_prime_64bit__3060__Vfuncout;
    __Vfunc_prince_mult_prime_64bit__3060__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_prince_mult_prime_64bit__3060__state_in;
    __Vfunc_prince_mult_prime_64bit__3060__state_in = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__3061__Vfuncout;
    __Vfunc_prince_nibble_red16__3061__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__3061__vect;
    __Vfunc_prince_nibble_red16__3061__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__3062__Vfuncout;
    __Vfunc_prince_nibble_red16__3062__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__3062__vect;
    __Vfunc_prince_nibble_red16__3062__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__3063__Vfuncout;
    __Vfunc_prince_nibble_red16__3063__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__3063__vect;
    __Vfunc_prince_nibble_red16__3063__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__3064__Vfuncout;
    __Vfunc_prince_nibble_red16__3064__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__3064__vect;
    __Vfunc_prince_nibble_red16__3064__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__3065__Vfuncout;
    __Vfunc_prince_nibble_red16__3065__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__3065__vect;
    __Vfunc_prince_nibble_red16__3065__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__3066__Vfuncout;
    __Vfunc_prince_nibble_red16__3066__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__3066__vect;
    __Vfunc_prince_nibble_red16__3066__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__3067__Vfuncout;
    __Vfunc_prince_nibble_red16__3067__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__3067__vect;
    __Vfunc_prince_nibble_red16__3067__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__3068__Vfuncout;
    __Vfunc_prince_nibble_red16__3068__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__3068__vect;
    __Vfunc_prince_nibble_red16__3068__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__3069__Vfuncout;
    __Vfunc_prince_nibble_red16__3069__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__3069__vect;
    __Vfunc_prince_nibble_red16__3069__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__3070__Vfuncout;
    __Vfunc_prince_nibble_red16__3070__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__3070__vect;
    __Vfunc_prince_nibble_red16__3070__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__3071__Vfuncout;
    __Vfunc_prince_nibble_red16__3071__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__3071__vect;
    __Vfunc_prince_nibble_red16__3071__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__3072__Vfuncout;
    __Vfunc_prince_nibble_red16__3072__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__3072__vect;
    __Vfunc_prince_nibble_red16__3072__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__3073__Vfuncout;
    __Vfunc_prince_nibble_red16__3073__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__3073__vect;
    __Vfunc_prince_nibble_red16__3073__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__3074__Vfuncout;
    __Vfunc_prince_nibble_red16__3074__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__3074__vect;
    __Vfunc_prince_nibble_red16__3074__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__3075__Vfuncout;
    __Vfunc_prince_nibble_red16__3075__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__3075__vect;
    __Vfunc_prince_nibble_red16__3075__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__3076__Vfuncout;
    __Vfunc_prince_nibble_red16__3076__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__3076__vect;
    __Vfunc_prince_nibble_red16__3076__vect = 0;
    QData/*63:0*/ __Vfunc_prince_shiftrows_64bit__3077__Vfuncout;
    __Vfunc_prince_shiftrows_64bit__3077__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_prince_shiftrows_64bit__3077__state_in;
    __Vfunc_prince_shiftrows_64bit__3077__state_in = 0;
    QData/*63:0*/ __Vfunc_prince_mult_prime_64bit__3078__Vfuncout;
    __Vfunc_prince_mult_prime_64bit__3078__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_prince_mult_prime_64bit__3078__state_in;
    __Vfunc_prince_mult_prime_64bit__3078__state_in = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__3079__Vfuncout;
    __Vfunc_prince_nibble_red16__3079__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__3079__vect;
    __Vfunc_prince_nibble_red16__3079__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__3080__Vfuncout;
    __Vfunc_prince_nibble_red16__3080__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__3080__vect;
    __Vfunc_prince_nibble_red16__3080__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__3081__Vfuncout;
    __Vfunc_prince_nibble_red16__3081__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__3081__vect;
    __Vfunc_prince_nibble_red16__3081__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__3082__Vfuncout;
    __Vfunc_prince_nibble_red16__3082__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__3082__vect;
    __Vfunc_prince_nibble_red16__3082__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__3083__Vfuncout;
    __Vfunc_prince_nibble_red16__3083__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__3083__vect;
    __Vfunc_prince_nibble_red16__3083__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__3084__Vfuncout;
    __Vfunc_prince_nibble_red16__3084__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__3084__vect;
    __Vfunc_prince_nibble_red16__3084__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__3085__Vfuncout;
    __Vfunc_prince_nibble_red16__3085__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__3085__vect;
    __Vfunc_prince_nibble_red16__3085__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__3086__Vfuncout;
    __Vfunc_prince_nibble_red16__3086__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__3086__vect;
    __Vfunc_prince_nibble_red16__3086__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__3087__Vfuncout;
    __Vfunc_prince_nibble_red16__3087__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__3087__vect;
    __Vfunc_prince_nibble_red16__3087__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__3088__Vfuncout;
    __Vfunc_prince_nibble_red16__3088__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__3088__vect;
    __Vfunc_prince_nibble_red16__3088__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__3089__Vfuncout;
    __Vfunc_prince_nibble_red16__3089__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__3089__vect;
    __Vfunc_prince_nibble_red16__3089__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__3090__Vfuncout;
    __Vfunc_prince_nibble_red16__3090__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__3090__vect;
    __Vfunc_prince_nibble_red16__3090__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__3091__Vfuncout;
    __Vfunc_prince_nibble_red16__3091__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__3091__vect;
    __Vfunc_prince_nibble_red16__3091__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__3092__Vfuncout;
    __Vfunc_prince_nibble_red16__3092__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__3092__vect;
    __Vfunc_prince_nibble_red16__3092__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__3093__Vfuncout;
    __Vfunc_prince_nibble_red16__3093__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__3093__vect;
    __Vfunc_prince_nibble_red16__3093__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__3094__Vfuncout;
    __Vfunc_prince_nibble_red16__3094__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__3094__vect;
    __Vfunc_prince_nibble_red16__3094__vect = 0;
    QData/*63:0*/ __Vfunc_prince_shiftrows_64bit__3095__Vfuncout;
    __Vfunc_prince_shiftrows_64bit__3095__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_prince_shiftrows_64bit__3095__state_in;
    __Vfunc_prince_shiftrows_64bit__3095__state_in = 0;
    QData/*63:0*/ __Vfunc_sbox4_64bit__3153__Vfuncout;
    __Vfunc_sbox4_64bit__3153__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_sbox4_64bit__3153__state_in;
    __Vfunc_sbox4_64bit__3153__state_in = 0;
    CData/*7:0*/ __Vfunc_sbox4_8bit__3154__Vfuncout;
    __Vfunc_sbox4_8bit__3154__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_sbox4_8bit__3154__state_in;
    __Vfunc_sbox4_8bit__3154__state_in = 0;
    QData/*63:0*/ __Vfunc_sbox4_64bit__3155__Vfuncout;
    __Vfunc_sbox4_64bit__3155__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_sbox4_64bit__3155__state_in;
    __Vfunc_sbox4_64bit__3155__state_in = 0;
    CData/*7:0*/ __Vfunc_sbox4_8bit__3156__Vfuncout;
    __Vfunc_sbox4_8bit__3156__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_sbox4_8bit__3156__state_in;
    __Vfunc_sbox4_8bit__3156__state_in = 0;
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_227;
    __VdfgRegularize_h6e95ff9d_0_227 = 0;
    CData/*2:0*/ __VdfgRegularize_h6e95ff9d_0_228;
    __VdfgRegularize_h6e95ff9d_0_228 = 0;
    CData/*3:0*/ __VdfgRegularize_h6e95ff9d_0_229;
    __VdfgRegularize_h6e95ff9d_0_229 = 0;
    CData/*4:0*/ __VdfgRegularize_h6e95ff9d_0_230;
    __VdfgRegularize_h6e95ff9d_0_230 = 0;
    CData/*5:0*/ __VdfgRegularize_h6e95ff9d_0_231;
    __VdfgRegularize_h6e95ff9d_0_231 = 0;
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_235;
    __VdfgRegularize_h6e95ff9d_0_235 = 0;
    CData/*2:0*/ __VdfgRegularize_h6e95ff9d_0_236;
    __VdfgRegularize_h6e95ff9d_0_236 = 0;
    CData/*3:0*/ __VdfgRegularize_h6e95ff9d_0_237;
    __VdfgRegularize_h6e95ff9d_0_237 = 0;
    CData/*4:0*/ __VdfgRegularize_h6e95ff9d_0_238;
    __VdfgRegularize_h6e95ff9d_0_238 = 0;
    CData/*5:0*/ __VdfgRegularize_h6e95ff9d_0_239;
    __VdfgRegularize_h6e95ff9d_0_239 = 0;
    VlWide<4>/*127:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = (IData)((((QData)((IData)(((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__wr_phase)
                                                ? vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_tlul_data_integ_enc__DOT__u_data_gen__DOT__data_i
                                                : 0U))) 
                              << 0x00000018U) | (QData)((IData)(
                                                                ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__wr_phase)
                                                                    ? 
                                                                   ((0x007fff80U 
                                                                     & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo__DOT__gen_singleton_fifo__DOT__storage[0U]) 
                                                                    | (((((2U 
                                                                           & (VL_REDXOR_32(
                                                                                (0x98505586U 
                                                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_tlul_data_integ_enc__DOT__u_data_gen__DOT__data_i)) 
                                                                              << 1U)) 
                                                                          | (1U 
                                                                             & (~ 
                                                                                VL_REDXOR_32(
                                                                                (0x2dcc624cU 
                                                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_tlul_data_integ_enc__DOT__u_data_gen__DOT__data_i))))) 
                                                                         << 5U) 
                                                                        | (((2U 
                                                                             & (VL_REDXOR_32(
                                                                                (0xc2c1323bU 
                                                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_tlul_data_integ_enc__DOT__u_data_gen__DOT__data_i)) 
                                                                                << 1U)) 
                                                                            | (1U 
                                                                               & (~ 
                                                                                VL_REDXOR_32(
                                                                                (0x31234ed1U 
                                                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_tlul_data_integ_enc__DOT__u_data_gen__DOT__data_i))))) 
                                                                           << 3U)) 
                                                                       | ((4U 
                                                                           & (VL_REDXOR_32(
                                                                                (0x413d89aaU 
                                                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_tlul_data_integ_enc__DOT__u_data_gen__DOT__data_i)) 
                                                                              << 2U)) 
                                                                          | ((2U 
                                                                              & ((~ 
                                                                                VL_REDXOR_32(
                                                                                (0xdeba8050U 
                                                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_tlul_data_integ_enc__DOT__u_data_gen__DOT__data_i))) 
                                                                                << 1U)) 
                                                                             | (1U 
                                                                                & VL_REDXOR_32(
                                                                                (0x2606bd25U 
                                                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_tlul_data_integ_enc__DOT__u_data_gen__DOT__data_i)))))))
                                                                    : 0U) 
                                                                  << 1U) 
                                                                 | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_lc_gate.__VdfgRegularize_h6e95ff9d_0_1699))))));
    __Vtemp_1[1U] = (((IData)((((QData)((IData)((0x00010000U 
                                                 | ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__wr_phase)
                                                       ? 0U
                                                       : 4U) 
                                                     << 0x0000000dU) 
                                                    | ((0x00001c00U 
                                                        & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo__DOT__gen_singleton_fifo__DOT__storage[3U] 
                                                           << 5U)) 
                                                       | ((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1698)
                                                             ? 2U
                                                             : 
                                                            (3U 
                                                             & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo__DOT__gen_singleton_fifo__DOT__storage[3U] 
                                                                >> 3U))) 
                                                           << 8U) 
                                                          | (0x000000ffU 
                                                             & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo__DOT__gen_singleton_fifo__DOT__storage[3U] 
                                                                 << 5U) 
                                                                | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo__DOT__gen_singleton_fifo__DOT__storage[2U] 
                                                                   >> 0x0000001bU))))))))) 
                                << 0x00000024U) | (
                                                   ((QData)((IData)(
                                                                    ((0xfffffffcU 
                                                                      & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo__DOT__gen_singleton_fifo__DOT__storage[2U] 
                                                                          << 5U) 
                                                                         | (0x0000001cU 
                                                                            & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo__DOT__gen_singleton_fifo__DOT__storage[1U] 
                                                                               >> 0x0000001bU)))) 
                                                                     | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1698)
                                                                         ? 0U
                                                                         : 
                                                                        (3U 
                                                                         & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo__DOT__gen_singleton_fifo__DOT__storage[1U] 
                                                                            >> 0x0000001bU)))))) 
                                                    << 4U) 
                                                   | (QData)((IData)(
                                                                     ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1698)
                                                                       ? 0x0000000fU
                                                                       : 
                                                                      (0x0000000fU 
                                                                       & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo__DOT__gen_singleton_fifo__DOT__storage[1U] 
                                                                          >> 0x00000017U)))))))) 
                      << 0x00000018U) | (IData)(((((QData)((IData)(
                                                                   ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__wr_phase)
                                                                     ? vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_tlul_data_integ_enc__DOT__u_data_gen__DOT__data_i
                                                                     : 0U))) 
                                                   << 0x00000018U) 
                                                  | (QData)((IData)(
                                                                    ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__wr_phase)
                                                                        ? 
                                                                       ((0x007fff80U 
                                                                         & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo__DOT__gen_singleton_fifo__DOT__storage[0U]) 
                                                                        | (((((2U 
                                                                               & (VL_REDXOR_32(
                                                                                (0x98505586U 
                                                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_tlul_data_integ_enc__DOT__u_data_gen__DOT__data_i)) 
                                                                                << 1U)) 
                                                                              | (1U 
                                                                                & (~ 
                                                                                VL_REDXOR_32(
                                                                                (0x2dcc624cU 
                                                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_tlul_data_integ_enc__DOT__u_data_gen__DOT__data_i))))) 
                                                                             << 5U) 
                                                                            | (((2U 
                                                                                & (VL_REDXOR_32(
                                                                                (0xc2c1323bU 
                                                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_tlul_data_integ_enc__DOT__u_data_gen__DOT__data_i)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (~ 
                                                                                VL_REDXOR_32(
                                                                                (0x31234ed1U 
                                                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_tlul_data_integ_enc__DOT__u_data_gen__DOT__data_i))))) 
                                                                               << 3U)) 
                                                                           | ((4U 
                                                                               & (VL_REDXOR_32(
                                                                                (0x413d89aaU 
                                                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_tlul_data_integ_enc__DOT__u_data_gen__DOT__data_i)) 
                                                                                << 2U)) 
                                                                              | ((2U 
                                                                                & ((~ 
                                                                                VL_REDXOR_32(
                                                                                (0xdeba8050U 
                                                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_tlul_data_integ_enc__DOT__u_data_gen__DOT__data_i))) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & VL_REDXOR_32(
                                                                                (0x2606bd25U 
                                                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_tlul_data_integ_enc__DOT__u_data_gen__DOT__data_i)))))))
                                                                        : 0U) 
                                                                      << 1U) 
                                                                     | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_lc_gate.__VdfgRegularize_h6e95ff9d_0_1699))))) 
                                                 >> 0x00000020U)));
    __Vtemp_1[2U] = (((IData)((((QData)((IData)((0x00010000U 
                                                 | ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__wr_phase)
                                                       ? 0U
                                                       : 4U) 
                                                     << 0x0000000dU) 
                                                    | ((0x00001c00U 
                                                        & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo__DOT__gen_singleton_fifo__DOT__storage[3U] 
                                                           << 5U)) 
                                                       | ((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1698)
                                                             ? 2U
                                                             : 
                                                            (3U 
                                                             & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo__DOT__gen_singleton_fifo__DOT__storage[3U] 
                                                                >> 3U))) 
                                                           << 8U) 
                                                          | (0x000000ffU 
                                                             & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo__DOT__gen_singleton_fifo__DOT__storage[3U] 
                                                                 << 5U) 
                                                                | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo__DOT__gen_singleton_fifo__DOT__storage[2U] 
                                                                   >> 0x0000001bU))))))))) 
                                << 0x00000024U) | (
                                                   ((QData)((IData)(
                                                                    ((0xfffffffcU 
                                                                      & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo__DOT__gen_singleton_fifo__DOT__storage[2U] 
                                                                          << 5U) 
                                                                         | (0x0000001cU 
                                                                            & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo__DOT__gen_singleton_fifo__DOT__storage[1U] 
                                                                               >> 0x0000001bU)))) 
                                                                     | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1698)
                                                                         ? 0U
                                                                         : 
                                                                        (3U 
                                                                         & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo__DOT__gen_singleton_fifo__DOT__storage[1U] 
                                                                            >> 0x0000001bU)))))) 
                                                    << 4U) 
                                                   | (QData)((IData)(
                                                                     ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1698)
                                                                       ? 0x0000000fU
                                                                       : 
                                                                      (0x0000000fU 
                                                                       & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo__DOT__gen_singleton_fifo__DOT__storage[1U] 
                                                                          >> 0x00000017U)))))))) 
                      >> 8U) | ((IData)(((((QData)((IData)(
                                                           (0x00010000U 
                                                            | ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__wr_phase)
                                                                  ? 0U
                                                                  : 4U) 
                                                                << 0x0000000dU) 
                                                               | ((0x00001c00U 
                                                                   & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo__DOT__gen_singleton_fifo__DOT__storage[3U] 
                                                                      << 5U)) 
                                                                  | ((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1698)
                                                                        ? 2U
                                                                        : 
                                                                       (3U 
                                                                        & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo__DOT__gen_singleton_fifo__DOT__storage[3U] 
                                                                           >> 3U))) 
                                                                      << 8U) 
                                                                     | (0x000000ffU 
                                                                        & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo__DOT__gen_singleton_fifo__DOT__storage[3U] 
                                                                            << 5U) 
                                                                           | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo__DOT__gen_singleton_fifo__DOT__storage[2U] 
                                                                              >> 0x0000001bU))))))))) 
                                           << 0x00000024U) 
                                          | (((QData)((IData)(
                                                              ((0xfffffffcU 
                                                                & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo__DOT__gen_singleton_fifo__DOT__storage[2U] 
                                                                    << 5U) 
                                                                   | (0x0000001cU 
                                                                      & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo__DOT__gen_singleton_fifo__DOT__storage[1U] 
                                                                         >> 0x0000001bU)))) 
                                                               | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1698)
                                                                   ? 0U
                                                                   : 
                                                                  (3U 
                                                                   & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo__DOT__gen_singleton_fifo__DOT__storage[1U] 
                                                                      >> 0x0000001bU)))))) 
                                              << 4U) 
                                             | (QData)((IData)(
                                                               ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1698)
                                                                 ? 0x0000000fU
                                                                 : 
                                                                (0x0000000fU 
                                                                 & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo__DOT__gen_singleton_fifo__DOT__storage[1U] 
                                                                    >> 0x00000017U))))))) 
                                         >> 0x00000020U)) 
                                << 0x00000018U));
    __Vtemp_1[3U] = ((IData)(((((QData)((IData)((0x00010000U 
                                                 | ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__wr_phase)
                                                       ? 0U
                                                       : 4U) 
                                                     << 0x0000000dU) 
                                                    | ((0x00001c00U 
                                                        & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo__DOT__gen_singleton_fifo__DOT__storage[3U] 
                                                           << 5U)) 
                                                       | ((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1698)
                                                             ? 2U
                                                             : 
                                                            (3U 
                                                             & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo__DOT__gen_singleton_fifo__DOT__storage[3U] 
                                                                >> 3U))) 
                                                           << 8U) 
                                                          | (0x000000ffU 
                                                             & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo__DOT__gen_singleton_fifo__DOT__storage[3U] 
                                                                 << 5U) 
                                                                | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo__DOT__gen_singleton_fifo__DOT__storage[2U] 
                                                                   >> 0x0000001bU))))))))) 
                                << 0x00000024U) | (
                                                   ((QData)((IData)(
                                                                    ((0xfffffffcU 
                                                                      & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo__DOT__gen_singleton_fifo__DOT__storage[2U] 
                                                                          << 5U) 
                                                                         | (0x0000001cU 
                                                                            & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo__DOT__gen_singleton_fifo__DOT__storage[1U] 
                                                                               >> 0x0000001bU)))) 
                                                                     | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1698)
                                                                         ? 0U
                                                                         : 
                                                                        (3U 
                                                                         & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo__DOT__gen_singleton_fifo__DOT__storage[1U] 
                                                                            >> 0x0000001bU)))))) 
                                                    << 4U) 
                                                   | (QData)((IData)(
                                                                     ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1698)
                                                                       ? 0x0000000fU
                                                                       : 
                                                                      (0x0000000fU 
                                                                       & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo__DOT__gen_singleton_fifo__DOT__storage[1U] 
                                                                          >> 0x00000017U))))))) 
                              >> 0x00000020U)) >> 8U);
    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__compound_txn_in_progress_o) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__tl_sram_o[0U] 
            = __Vtemp_1[0U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__tl_sram_o[1U] 
            = __Vtemp_1[1U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__tl_sram_o[2U] 
            = __Vtemp_1[2U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__tl_sram_o[3U] 
            = __Vtemp_1[3U];
    } else if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__rd_phase) {
        if ((1U & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__error_i)) 
                   | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__stall_host)))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__tl_sram_o[0U] 
                = (IData)((0x0f00000000000000ULL | 
                           (0x00ffffffffffffffULL & 
                            (((QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_lc_gate.__VdfgRegularize_h6e95ff9d_0_221[1U])) 
                              << 0x00000020U) | (QData)((IData)(
                                                                vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_lc_gate.__VdfgRegularize_h6e95ff9d_0_221[0U]))))));
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__tl_sram_o[1U] 
                = (((IData)((0x000000ffffffffffULL 
                             & (((QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_lc_gate.__VdfgRegularize_h6e95ff9d_0_222[3U])) 
                                 << 0x00000024U) | 
                                (((QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_lc_gate.__VdfgRegularize_h6e95ff9d_0_222[2U])) 
                                  << 4U) | ((QData)((IData)(
                                                            vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_lc_gate.__VdfgRegularize_h6e95ff9d_0_222[1U])) 
                                            >> 0x0000001cU))))) 
                    << 0x0000001cU) | (IData)(((0x0f00000000000000ULL 
                                                | (0x00ffffffffffffffULL 
                                                   & (((QData)((IData)(
                                                                       vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_lc_gate.__VdfgRegularize_h6e95ff9d_0_221[1U])) 
                                                       << 0x00000020U) 
                                                      | (QData)((IData)(
                                                                        vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_lc_gate.__VdfgRegularize_h6e95ff9d_0_221[0U]))))) 
                                               >> 0x00000020U)));
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__tl_sram_o[2U] 
                = (((IData)((0x000000ffffffffffULL 
                             & (((QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_lc_gate.__VdfgRegularize_h6e95ff9d_0_222[3U])) 
                                 << 0x00000024U) | 
                                (((QData)((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_lc_gate.__VdfgRegularize_h6e95ff9d_0_222[2U])) 
                                  << 4U) | ((QData)((IData)(
                                                            vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_lc_gate.__VdfgRegularize_h6e95ff9d_0_222[1U])) 
                                            >> 0x0000001cU))))) 
                    >> 4U) | ((IData)(((0x000000ffffffffffULL 
                                        & (((QData)((IData)(
                                                            vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_lc_gate.__VdfgRegularize_h6e95ff9d_0_222[3U])) 
                                            << 0x00000024U) 
                                           | (((QData)((IData)(
                                                               vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_lc_gate.__VdfgRegularize_h6e95ff9d_0_222[2U])) 
                                               << 4U) 
                                              | ((QData)((IData)(
                                                                 vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_lc_gate.__VdfgRegularize_h6e95ff9d_0_222[1U])) 
                                                 >> 0x0000001cU)))) 
                                       >> 0x00000020U)) 
                              << 0x0000001cU));
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__tl_sram_o[3U] 
                = ((0xfffffff0U & (0x00000820U | ((
                                                   ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__stall_host)) 
                                                    & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[3U] 
                                                       >> 0x0000000cU)) 
                                                   << 0x0000000cU) 
                                                  | (0x000001c0U 
                                                     & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[3U])))) 
                   | ((IData)(((0x000000ffffffffffULL 
                                & (((QData)((IData)(
                                                    vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_lc_gate.__VdfgRegularize_h6e95ff9d_0_222[3U])) 
                                    << 0x00000024U) 
                                   | (((QData)((IData)(
                                                       vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_lc_gate.__VdfgRegularize_h6e95ff9d_0_222[2U])) 
                                       << 4U) | ((QData)((IData)(
                                                                 vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_lc_gate.__VdfgRegularize_h6e95ff9d_0_222[1U])) 
                                                 >> 0x0000001cU)))) 
                               >> 0x00000020U)) >> 4U));
        } else {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__tl_sram_o[0U] 
                = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_lc_gate.__VdfgRegularize_h6e95ff9d_0_222[0U];
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__tl_sram_o[1U] 
                = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_lc_gate.__VdfgRegularize_h6e95ff9d_0_222[1U];
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__tl_sram_o[2U] 
                = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_lc_gate.__VdfgRegularize_h6e95ff9d_0_222[2U];
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__tl_sram_o[3U] 
                = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_lc_gate.__VdfgRegularize_h6e95ff9d_0_222[3U];
        }
    } else if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__wait_phase) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__tl_sram_o[0U] 
            = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_lc_gate.__VdfgRegularize_h6e95ff9d_0_221[0U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__tl_sram_o[1U] 
            = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_lc_gate.__VdfgRegularize_h6e95ff9d_0_221[1U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__tl_sram_o[2U] 
            = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_lc_gate.__VdfgRegularize_h6e95ff9d_0_221[2U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__tl_sram_o[3U] 
            = (0x00000fffU & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_lc_gate.__VdfgRegularize_h6e95ff9d_0_221[3U]);
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__tl_sram_o[0U] 
            = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_lc_gate.__VdfgRegularize_h6e95ff9d_0_221[0U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__tl_sram_o[1U] 
            = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_lc_gate.__VdfgRegularize_h6e95ff9d_0_221[1U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__tl_sram_o[2U] 
            = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_lc_gate.__VdfgRegularize_h6e95ff9d_0_221[2U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__tl_sram_o[3U] 
            = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_lc_gate.__VdfgRegularize_h6e95ff9d_0_221[3U];
    }
    if ((0x00001000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__tl_sram_o[3U])) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__unnamedblk1__DOT__i = 4U;
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__we_o 
        = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__tl_sram_o[3U] 
            >> 0x0000000cU) & ((0U == (7U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__tl_sram_o[3U] 
                                             >> 9U))) 
                               | (1U == (7U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__tl_sram_o[3U] 
                                               >> 9U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_prim_ram_1p_scr__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__data_i 
        = (0x00007fffU & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_prim_count__DOT__incr_en_i)
                           ? (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_prim_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)
                           : ((0x00001000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__tl_sram_o[3U])
                               ? ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__tl_sram_o[2U] 
                                   << 2U) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__tl_sram_o[1U] 
                                             >> 0x0000001eU))
                               : 0U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_reqfifo__DOT__wvalid_i 
        = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__tl_sram_o[3U] 
            >> 0x0000000cU) & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT____VdfgRegularize_h36b947a7_0_0));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_reqfifo__DOT__rready_i 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__d_valid) 
           & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__tl_sram_o[0U]);
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_prim_ram_1p_scr__DOT__write_i 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__we_o) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_prim_count__DOT__incr_en_i));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_prim_ram_1p_scr__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_lo__BRA__63__03a0__KET__ 
        = (((0xffffffffffff8000ULL & (((QData)((IData)(
                                                       vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__nonce_q[1U])) 
                                       << 0x0000002fU) 
                                      | ((QData)((IData)(
                                                         vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__nonce_q[0U])) 
                                         << 0x0000000fU))) 
            | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_prim_ram_1p_scr__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__data_i))) 
           ^ (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_prim_ram_1p_scr__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__k0 
              ^ (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__key_q[1U])) 
                  << 0x00000020U) | (QData)((IData)(
                                                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__key_q[0U])))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_224 = (0x00007fffU 
                                                  & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_prim_ram_1p_scr__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__data_i) 
                                                     ^ 
                                                     ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__nonce_q[1U] 
                                                       << 0x0000000fU) 
                                                      | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__nonce_q[1U] 
                                                         >> 0x00000011U))));
    __Vfunc_sbox4_64bit__3058__state_in = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_prim_ram_1p_scr__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_lo__BRA__63__03a0__KET__;
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__Vfunc_sbox4_64bit__3058__state_out = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 15469891666826654266ull);
    __Vfunc_sbox4_8bit__3059__state_in = (0x000000ffU 
                                          & (IData)(__Vfunc_sbox4_64bit__3058__state_in));
    vlSelf->__Vfunc_sbox4_8bit__3059__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16802427210678640061ull);
    vlSelfRef.__Vfunc_sbox4_8bit__3059__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__3059__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__3059__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__3059__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__3059__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__3059__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__3059__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__3059__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__3058__state_out 
        = ((0xffffffffffffff00ULL & vlSelfRef.__Vfunc_sbox4_64bit__3058__state_out) 
           | (IData)((IData)(__Vfunc_sbox4_8bit__3059__Vfuncout)));
    __Vfunc_sbox4_8bit__3059__state_in = (0x000000ffU 
                                          & (IData)(
                                                    (__Vfunc_sbox4_64bit__3058__state_in 
                                                     >> 8U)));
    vlSelf->__Vfunc_sbox4_8bit__3059__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16802427210678640061ull);
    vlSelfRef.__Vfunc_sbox4_8bit__3059__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__3059__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__3059__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__3059__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__3059__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__3059__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__3059__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__3059__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__3058__state_out 
        = ((0xffffffffffff00ffULL & vlSelfRef.__Vfunc_sbox4_64bit__3058__state_out) 
           | ((QData)((IData)(__Vfunc_sbox4_8bit__3059__Vfuncout)) 
              << 8U));
    __Vfunc_sbox4_8bit__3059__state_in = (0x000000ffU 
                                          & (IData)(
                                                    (__Vfunc_sbox4_64bit__3058__state_in 
                                                     >> 0x10U)));
    vlSelf->__Vfunc_sbox4_8bit__3059__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16802427210678640061ull);
    vlSelfRef.__Vfunc_sbox4_8bit__3059__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__3059__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__3059__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__3059__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__3059__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__3059__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__3059__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__3059__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__3058__state_out 
        = ((0xffffffffff00ffffULL & vlSelfRef.__Vfunc_sbox4_64bit__3058__state_out) 
           | ((QData)((IData)(__Vfunc_sbox4_8bit__3059__Vfuncout)) 
              << 0x00000010U));
    __Vfunc_sbox4_8bit__3059__state_in = (0x000000ffU 
                                          & (IData)(
                                                    (__Vfunc_sbox4_64bit__3058__state_in 
                                                     >> 0x18U)));
    vlSelf->__Vfunc_sbox4_8bit__3059__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16802427210678640061ull);
    vlSelfRef.__Vfunc_sbox4_8bit__3059__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__3059__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__3059__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__3059__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__3059__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__3059__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__3059__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__3059__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__3058__state_out 
        = ((0xffffffff00ffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__3058__state_out) 
           | ((QData)((IData)(__Vfunc_sbox4_8bit__3059__Vfuncout)) 
              << 0x00000018U));
    __Vfunc_sbox4_8bit__3059__state_in = (0x000000ffU 
                                          & (IData)(
                                                    (__Vfunc_sbox4_64bit__3058__state_in 
                                                     >> 0x20U)));
    vlSelf->__Vfunc_sbox4_8bit__3059__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16802427210678640061ull);
    vlSelfRef.__Vfunc_sbox4_8bit__3059__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__3059__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__3059__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__3059__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__3059__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__3059__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__3059__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__3059__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__3058__state_out 
        = ((0xffffff00ffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__3058__state_out) 
           | ((QData)((IData)(__Vfunc_sbox4_8bit__3059__Vfuncout)) 
              << 0x00000020U));
    __Vfunc_sbox4_8bit__3059__state_in = (0x000000ffU 
                                          & (IData)(
                                                    (__Vfunc_sbox4_64bit__3058__state_in 
                                                     >> 0x28U)));
    vlSelf->__Vfunc_sbox4_8bit__3059__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16802427210678640061ull);
    vlSelfRef.__Vfunc_sbox4_8bit__3059__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__3059__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__3059__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__3059__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__3059__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__3059__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__3059__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__3059__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__3058__state_out 
        = ((0xffff00ffffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__3058__state_out) 
           | ((QData)((IData)(__Vfunc_sbox4_8bit__3059__Vfuncout)) 
              << 0x00000028U));
    __Vfunc_sbox4_8bit__3059__state_in = (0x000000ffU 
                                          & (IData)(
                                                    (__Vfunc_sbox4_64bit__3058__state_in 
                                                     >> 0x30U)));
    vlSelf->__Vfunc_sbox4_8bit__3059__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16802427210678640061ull);
    vlSelfRef.__Vfunc_sbox4_8bit__3059__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__3059__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__3059__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__3059__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__3059__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__3059__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__3059__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__3059__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__3058__state_out 
        = ((0xff00ffffffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__3058__state_out) 
           | ((QData)((IData)(__Vfunc_sbox4_8bit__3059__Vfuncout)) 
              << 0x00000030U));
    __Vfunc_sbox4_8bit__3059__state_in = (0x000000ffU 
                                          & (IData)(
                                                    (__Vfunc_sbox4_64bit__3058__state_in 
                                                     >> 0x38U)));
    vlSelf->__Vfunc_sbox4_8bit__3059__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16802427210678640061ull);
    vlSelfRef.__Vfunc_sbox4_8bit__3059__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__3059__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__3059__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__3059__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__3059__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__3059__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__3059__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__3059__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__3058__state_out 
        = ((0x00ffffffffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__3058__state_out) 
           | ((QData)((IData)(__Vfunc_sbox4_8bit__3059__Vfuncout)) 
              << 0x00000038U));
    __Vfunc_sbox4_64bit__3058__Vfuncout = vlSelfRef.__Vfunc_sbox4_64bit__3058__state_out;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_prim_ram_1p_scr__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_fwd_pass__BRA__1__KET____DOT__data_state_round 
        = __Vfunc_sbox4_64bit__3058__Vfuncout;
    __Vfunc_prince_mult_prime_64bit__3060__state_in 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_prim_ram_1p_scr__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_fwd_pass__BRA__1__KET____DOT__data_state_round;
    vlSelf->__Vfunc_prince_mult_prime_64bit__3060__state_out = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 8441708916777170946ull);
    __Vfunc_prince_nibble_red16__3061__vect = (0xe7bdU 
                                               & (IData)(__Vfunc_prince_mult_prime_64bit__3060__state_in));
    __Vfunc_prince_nibble_red16__3061__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__3061__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__3061__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__3061__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__3061__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__3060__state_out 
        = ((0xfffffffffffffff0ULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__3060__state_out) 
           | (IData)((IData)(__Vfunc_prince_nibble_red16__3061__Vfuncout)));
    __Vfunc_prince_nibble_red16__3062__vect = (0xde7bU 
                                               & (IData)(__Vfunc_prince_mult_prime_64bit__3060__state_in));
    __Vfunc_prince_nibble_red16__3062__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__3062__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__3062__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__3062__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__3062__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__3060__state_out 
        = ((0xffffffffffffff0fULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__3060__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__3062__Vfuncout)) 
              << 4U));
    __Vfunc_prince_nibble_red16__3063__vect = (0xbde7U 
                                               & (IData)(__Vfunc_prince_mult_prime_64bit__3060__state_in));
    __Vfunc_prince_nibble_red16__3063__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__3063__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__3063__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__3063__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__3063__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__3060__state_out 
        = ((0xfffffffffffff0ffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__3060__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__3063__Vfuncout)) 
              << 8U));
    __Vfunc_prince_nibble_red16__3064__vect = (0x7bdeU 
                                               & (IData)(__Vfunc_prince_mult_prime_64bit__3060__state_in));
    __Vfunc_prince_nibble_red16__3064__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__3064__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__3064__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__3064__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__3064__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__3060__state_out 
        = ((0xffffffffffff0fffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__3060__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__3064__Vfuncout)) 
              << 0x0000000cU));
    __Vfunc_prince_nibble_red16__3065__vect = (0x7bdeU 
                                               & (IData)(
                                                         (__Vfunc_prince_mult_prime_64bit__3060__state_in 
                                                          >> 0x10U)));
    __Vfunc_prince_nibble_red16__3065__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__3065__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__3065__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__3065__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__3065__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__3060__state_out 
        = ((0xfffffffffff0ffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__3060__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__3065__Vfuncout)) 
              << 0x00000010U));
    __Vfunc_prince_nibble_red16__3066__vect = (0xe7bdU 
                                               & (IData)(
                                                         (__Vfunc_prince_mult_prime_64bit__3060__state_in 
                                                          >> 0x10U)));
    __Vfunc_prince_nibble_red16__3066__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__3066__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__3066__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__3066__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__3066__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__3060__state_out 
        = ((0xffffffffff0fffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__3060__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__3066__Vfuncout)) 
              << 0x00000014U));
    __Vfunc_prince_nibble_red16__3067__vect = (0xde7bU 
                                               & (IData)(
                                                         (__Vfunc_prince_mult_prime_64bit__3060__state_in 
                                                          >> 0x10U)));
    __Vfunc_prince_nibble_red16__3067__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__3067__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__3067__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__3067__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__3067__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__3060__state_out 
        = ((0xfffffffff0ffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__3060__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__3067__Vfuncout)) 
              << 0x00000018U));
    __Vfunc_prince_nibble_red16__3068__vect = (0xbde7U 
                                               & (IData)(
                                                         (__Vfunc_prince_mult_prime_64bit__3060__state_in 
                                                          >> 0x10U)));
    __Vfunc_prince_nibble_red16__3068__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__3068__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__3068__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__3068__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__3068__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__3060__state_out 
        = ((0xffffffff0fffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__3060__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__3068__Vfuncout)) 
              << 0x0000001cU));
    __Vfunc_prince_nibble_red16__3069__vect = (0x7bdeU 
                                               & (IData)(
                                                         (__Vfunc_prince_mult_prime_64bit__3060__state_in 
                                                          >> 0x20U)));
    __Vfunc_prince_nibble_red16__3069__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__3069__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__3069__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__3069__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__3069__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__3060__state_out 
        = ((0xfffffff0ffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__3060__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__3069__Vfuncout)) 
              << 0x00000020U));
    __Vfunc_prince_nibble_red16__3070__vect = (0xe7bdU 
                                               & (IData)(
                                                         (__Vfunc_prince_mult_prime_64bit__3060__state_in 
                                                          >> 0x20U)));
    __Vfunc_prince_nibble_red16__3070__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__3070__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__3070__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__3070__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__3070__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__3060__state_out 
        = ((0xffffff0fffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__3060__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__3070__Vfuncout)) 
              << 0x00000024U));
    __Vfunc_prince_nibble_red16__3071__vect = (0xde7bU 
                                               & (IData)(
                                                         (__Vfunc_prince_mult_prime_64bit__3060__state_in 
                                                          >> 0x20U)));
    __Vfunc_prince_nibble_red16__3071__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__3071__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__3071__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__3071__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__3071__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__3060__state_out 
        = ((0xfffff0ffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__3060__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__3071__Vfuncout)) 
              << 0x00000028U));
    __Vfunc_prince_nibble_red16__3072__vect = (0xbde7U 
                                               & (IData)(
                                                         (__Vfunc_prince_mult_prime_64bit__3060__state_in 
                                                          >> 0x20U)));
    __Vfunc_prince_nibble_red16__3072__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__3072__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__3072__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__3072__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__3072__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__3060__state_out 
        = ((0xffff0fffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__3060__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__3072__Vfuncout)) 
              << 0x0000002cU));
    __Vfunc_prince_nibble_red16__3073__vect = (0xe7bdU 
                                               & (IData)(
                                                         (__Vfunc_prince_mult_prime_64bit__3060__state_in 
                                                          >> 0x30U)));
    __Vfunc_prince_nibble_red16__3073__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__3073__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__3073__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__3073__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__3073__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__3060__state_out 
        = ((0xfff0ffffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__3060__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__3073__Vfuncout)) 
              << 0x00000030U));
    __Vfunc_prince_nibble_red16__3074__vect = (0xde7bU 
                                               & (IData)(
                                                         (__Vfunc_prince_mult_prime_64bit__3060__state_in 
                                                          >> 0x30U)));
    __Vfunc_prince_nibble_red16__3074__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__3074__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__3074__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__3074__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__3074__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__3060__state_out 
        = ((0xff0fffffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__3060__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__3074__Vfuncout)) 
              << 0x00000034U));
    __Vfunc_prince_nibble_red16__3075__vect = (0xbde7U 
                                               & (IData)(
                                                         (__Vfunc_prince_mult_prime_64bit__3060__state_in 
                                                          >> 0x30U)));
    __Vfunc_prince_nibble_red16__3075__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__3075__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__3075__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__3075__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__3075__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__3060__state_out 
        = ((0xf0ffffffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__3060__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__3075__Vfuncout)) 
              << 0x00000038U));
    __Vfunc_prince_nibble_red16__3076__vect = (0x7bdeU 
                                               & (IData)(
                                                         (__Vfunc_prince_mult_prime_64bit__3060__state_in 
                                                          >> 0x30U)));
    __Vfunc_prince_nibble_red16__3076__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__3076__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__3076__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__3076__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__3076__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__3060__state_out 
        = ((0x0fffffffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__3060__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__3076__Vfuncout)) 
              << 0x0000003cU));
    __Vfunc_prince_mult_prime_64bit__3060__Vfuncout 
        = vlSelfRef.__Vfunc_prince_mult_prime_64bit__3060__state_out;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_prim_ram_1p_scr__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_fwd_pass__BRA__1__KET____DOT__data_state_round 
        = __Vfunc_prince_mult_prime_64bit__3060__Vfuncout;
    __Vfunc_prince_shiftrows_64bit__3077__state_in 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_prim_ram_1p_scr__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_fwd_pass__BRA__1__KET____DOT__data_state_round;
    vlSelf->__Vfunc_prince_shiftrows_64bit__3077__state_out = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 11226346435555637644ull);
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__3077__state_out 
        = ((0xfffffffffffff000ULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__3077__state_out) 
           | (IData)((IData)(((0x00000f00U & ((IData)(
                                                      (__Vfunc_prince_shiftrows_64bit__3077__state_in 
                                                       >> 0x38U)) 
                                              << 8U)) 
                              | ((0x000000f0U & ((IData)(
                                                         (__Vfunc_prince_shiftrows_64bit__3077__state_in 
                                                          >> 0x24U)) 
                                                 << 4U)) 
                                 | (0x0000000fU & (IData)(
                                                          (__Vfunc_prince_shiftrows_64bit__3077__state_in 
                                                           >> 0x10U))))))));
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__3077__state_out 
        = ((0xffffffffff000fffULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__3077__state_out) 
           | ((QData)((IData)(((0x00000f00U & ((IData)(
                                                       (__Vfunc_prince_shiftrows_64bit__3077__state_in 
                                                        >> 0x34U)) 
                                               << 8U)) 
                               | ((0x000000f0U & ((IData)(
                                                          (__Vfunc_prince_shiftrows_64bit__3077__state_in 
                                                           >> 0x20U)) 
                                                  << 4U)) 
                                  | (0x0000000fU & (IData)(
                                                           (__Vfunc_prince_shiftrows_64bit__3077__state_in 
                                                            >> 0x0cU))))))) 
              << 0x0000000cU));
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__3077__state_out 
        = ((0xfffffff000ffffffULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__3077__state_out) 
           | ((QData)((IData)(((0x00000f00U & ((IData)(
                                                       (__Vfunc_prince_shiftrows_64bit__3077__state_in 
                                                        >> 0x30U)) 
                                               << 8U)) 
                               | ((0x000000f0U & ((IData)(
                                                          (__Vfunc_prince_shiftrows_64bit__3077__state_in 
                                                           >> 0x1cU)) 
                                                  << 4U)) 
                                  | (0x0000000fU & (IData)(
                                                           (__Vfunc_prince_shiftrows_64bit__3077__state_in 
                                                            >> 8U))))))) 
              << 0x00000018U));
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__3077__state_out 
        = ((0xffff000fffffffffULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__3077__state_out) 
           | ((QData)((IData)(((0x00000f00U & ((IData)(
                                                       (__Vfunc_prince_shiftrows_64bit__3077__state_in 
                                                        >> 0x2cU)) 
                                               << 8U)) 
                               | ((0x000000f0U & ((IData)(
                                                          (__Vfunc_prince_shiftrows_64bit__3077__state_in 
                                                           >> 0x18U)) 
                                                  << 4U)) 
                                  | (0x0000000fU & (IData)(
                                                           (__Vfunc_prince_shiftrows_64bit__3077__state_in 
                                                            >> 4U))))))) 
              << 0x00000024U));
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__3077__state_out 
        = ((0xf000ffffffffffffULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__3077__state_out) 
           | ((QData)((IData)(((0x00000f00U & ((IData)(
                                                       (__Vfunc_prince_shiftrows_64bit__3077__state_in 
                                                        >> 0x28U)) 
                                               << 8U)) 
                               | ((0x000000f0U & ((IData)(
                                                          (__Vfunc_prince_shiftrows_64bit__3077__state_in 
                                                           >> 0x14U)) 
                                                  << 4U)) 
                                  | (0x0000000fU & (IData)(__Vfunc_prince_shiftrows_64bit__3077__state_in)))))) 
              << 0x00000030U));
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__3077__state_out 
        = ((0x0fffffffffffffffULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__3077__state_out) 
           | ((QData)((IData)((0x0000000fU & (IData)(
                                                     (__Vfunc_prince_shiftrows_64bit__3077__state_in 
                                                      >> 0x3cU))))) 
              << 0x0000003cU));
    __Vfunc_prince_shiftrows_64bit__3077__Vfuncout 
        = vlSelfRef.__Vfunc_prince_shiftrows_64bit__3077__state_out;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_prim_ram_1p_scr__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_fwd_pass__BRA__1__KET____DOT__data_state_round 
        = __Vfunc_prince_shiftrows_64bit__3077__Vfuncout;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1556 = (
                                                   ((((2U 
                                                       & ((IData)(
                                                                  (0x21748fe3da09b65cULL 
                                                                   >> 
                                                                   (0x0000003fU 
                                                                    & VL_SHIFTL_III(6,6,32, 
                                                                                (0x0000000fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_224) 
                                                                                >> 8U)), 2U)))) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & (IData)(
                                                                   (0x21748fe3da09b65cULL 
                                                                    >> 
                                                                    ((IData)(1U) 
                                                                     + 
                                                                     (0x0000003fU 
                                                                      & VL_SHIFTL_III(6,6,32, 
                                                                                (0x0000000fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_224) 
                                                                                >> 8U)), 2U))))))) 
                                                     << 5U) 
                                                    | (((2U 
                                                         & ((IData)(
                                                                    (0x21748fe3da09b65cULL 
                                                                     >> 
                                                                     ((IData)(2U) 
                                                                      + 
                                                                      (0x0000003fU 
                                                                       & VL_SHIFTL_III(6,6,32, 
                                                                                (0x0000000fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_224) 
                                                                                >> 8U)), 2U))))) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & (IData)(
                                                                     (0x21748fe3da09b65cULL 
                                                                      >> 
                                                                      ((IData)(3U) 
                                                                       + 
                                                                       (0x0000003fU 
                                                                        & VL_SHIFTL_III(6,6,32, 
                                                                                (0x0000000fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_224) 
                                                                                >> 8U)), 2U))))))) 
                                                       << 3U)) 
                                                   | ((4U 
                                                       & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_224) 
                                                          >> 0x0000000aU)) 
                                                      | ((2U 
                                                          & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_224) 
                                                             >> 0x0000000cU)) 
                                                         | (1U 
                                                            & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_224) 
                                                               >> 0x0000000eU)))));
    __VdfgRegularize_h6e95ff9d_0_227 = ((2U & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_224) 
                                               >> 0x0000000bU)) 
                                        | (1U & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_224) 
                                                 >> 0x0000000eU)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_prim_ram_1p_scr__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_lo__BRA__127__03a64__KET__ 
        = (0x13198a2e03707344ULL ^ (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_prim_ram_1p_scr__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_fwd_pass__BRA__1__KET____DOT__data_state_round 
                                    ^ (((QData)((IData)(
                                                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__key_q[3U])) 
                                        << 0x00000020U) 
                                       | (QData)((IData)(
                                                         vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__key_q[2U])))));
    __VdfgRegularize_h6e95ff9d_0_228 = ((4U & ((IData)(
                                                       (0x21748fe3da09b65cULL 
                                                        >> 
                                                        ((IData)(2U) 
                                                         + 
                                                         (0x0000003fU 
                                                          & VL_SHIFTL_III(6,6,32, 
                                                                          (0x0000000fU 
                                                                           & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_224) 
                                                                              >> 8U)), 2U))))) 
                                               << 2U)) 
                                        | (IData)(__VdfgRegularize_h6e95ff9d_0_227));
    __Vfunc_sbox4_64bit__3153__state_in = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_prim_ram_1p_scr__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_lo__BRA__127__03a64__KET__;
    vlSelf->__Vfunc_sbox4_64bit__3153__state_out = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 17389167200325493918ull);
    __Vfunc_sbox4_8bit__3154__state_in = (0x000000ffU 
                                          & (IData)(__Vfunc_sbox4_64bit__3153__state_in));
    vlSelf->__Vfunc_sbox4_8bit__3154__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15007600456980877895ull);
    vlSelfRef.__Vfunc_sbox4_8bit__3154__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__3154__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__3154__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__3154__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__3154__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__3154__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__3154__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__3154__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__3153__state_out 
        = ((0xffffffffffffff00ULL & vlSelfRef.__Vfunc_sbox4_64bit__3153__state_out) 
           | (IData)((IData)(__Vfunc_sbox4_8bit__3154__Vfuncout)));
    __Vfunc_sbox4_8bit__3154__state_in = (0x000000ffU 
                                          & (IData)(
                                                    (__Vfunc_sbox4_64bit__3153__state_in 
                                                     >> 8U)));
    vlSelf->__Vfunc_sbox4_8bit__3154__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15007600456980877895ull);
    vlSelfRef.__Vfunc_sbox4_8bit__3154__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__3154__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__3154__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__3154__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__3154__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__3154__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__3154__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__3154__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__3153__state_out 
        = ((0xffffffffffff00ffULL & vlSelfRef.__Vfunc_sbox4_64bit__3153__state_out) 
           | ((QData)((IData)(__Vfunc_sbox4_8bit__3154__Vfuncout)) 
              << 8U));
    __Vfunc_sbox4_8bit__3154__state_in = (0x000000ffU 
                                          & (IData)(
                                                    (__Vfunc_sbox4_64bit__3153__state_in 
                                                     >> 0x10U)));
    vlSelf->__Vfunc_sbox4_8bit__3154__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15007600456980877895ull);
    vlSelfRef.__Vfunc_sbox4_8bit__3154__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__3154__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__3154__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__3154__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__3154__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__3154__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__3154__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__3154__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__3153__state_out 
        = ((0xffffffffff00ffffULL & vlSelfRef.__Vfunc_sbox4_64bit__3153__state_out) 
           | ((QData)((IData)(__Vfunc_sbox4_8bit__3154__Vfuncout)) 
              << 0x00000010U));
    __Vfunc_sbox4_8bit__3154__state_in = (0x000000ffU 
                                          & (IData)(
                                                    (__Vfunc_sbox4_64bit__3153__state_in 
                                                     >> 0x18U)));
    vlSelf->__Vfunc_sbox4_8bit__3154__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15007600456980877895ull);
    vlSelfRef.__Vfunc_sbox4_8bit__3154__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__3154__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__3154__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__3154__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__3154__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__3154__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__3154__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__3154__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__3153__state_out 
        = ((0xffffffff00ffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__3153__state_out) 
           | ((QData)((IData)(__Vfunc_sbox4_8bit__3154__Vfuncout)) 
              << 0x00000018U));
    __Vfunc_sbox4_8bit__3154__state_in = (0x000000ffU 
                                          & (IData)(
                                                    (__Vfunc_sbox4_64bit__3153__state_in 
                                                     >> 0x20U)));
    vlSelf->__Vfunc_sbox4_8bit__3154__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15007600456980877895ull);
    vlSelfRef.__Vfunc_sbox4_8bit__3154__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__3154__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__3154__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__3154__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__3154__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__3154__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__3154__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__3154__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__3153__state_out 
        = ((0xffffff00ffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__3153__state_out) 
           | ((QData)((IData)(__Vfunc_sbox4_8bit__3154__Vfuncout)) 
              << 0x00000020U));
    __Vfunc_sbox4_8bit__3154__state_in = (0x000000ffU 
                                          & (IData)(
                                                    (__Vfunc_sbox4_64bit__3153__state_in 
                                                     >> 0x28U)));
    vlSelf->__Vfunc_sbox4_8bit__3154__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15007600456980877895ull);
    vlSelfRef.__Vfunc_sbox4_8bit__3154__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__3154__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__3154__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__3154__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__3154__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__3154__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__3154__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__3154__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__3153__state_out 
        = ((0xffff00ffffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__3153__state_out) 
           | ((QData)((IData)(__Vfunc_sbox4_8bit__3154__Vfuncout)) 
              << 0x00000028U));
    __Vfunc_sbox4_8bit__3154__state_in = (0x000000ffU 
                                          & (IData)(
                                                    (__Vfunc_sbox4_64bit__3153__state_in 
                                                     >> 0x30U)));
    vlSelf->__Vfunc_sbox4_8bit__3154__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15007600456980877895ull);
    vlSelfRef.__Vfunc_sbox4_8bit__3154__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__3154__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__3154__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__3154__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__3154__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__3154__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__3154__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__3154__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__3153__state_out 
        = ((0xff00ffffffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__3153__state_out) 
           | ((QData)((IData)(__Vfunc_sbox4_8bit__3154__Vfuncout)) 
              << 0x00000030U));
    __Vfunc_sbox4_8bit__3154__state_in = (0x000000ffU 
                                          & (IData)(
                                                    (__Vfunc_sbox4_64bit__3153__state_in 
                                                     >> 0x38U)));
    vlSelf->__Vfunc_sbox4_8bit__3154__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15007600456980877895ull);
    vlSelfRef.__Vfunc_sbox4_8bit__3154__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__3154__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__3154__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__3154__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__3154__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__3154__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__3154__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__3154__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__3153__state_out 
        = ((0x00ffffffffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__3153__state_out) 
           | ((QData)((IData)(__Vfunc_sbox4_8bit__3154__Vfuncout)) 
              << 0x00000038U));
    __Vfunc_sbox4_64bit__3153__Vfuncout = vlSelfRef.__Vfunc_sbox4_64bit__3153__state_out;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_prim_ram_1p_scr__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT____VdfgExtracted_h435ad752__2 
        = __Vfunc_sbox4_64bit__3153__Vfuncout;
    __VdfgRegularize_h6e95ff9d_0_229 = ((8U & ((IData)(
                                                       (0x21748fe3da09b65cULL 
                                                        >> 
                                                        (0x0000003fU 
                                                         & VL_SHIFTL_III(6,6,32, 
                                                                         (0x0000000fU 
                                                                          & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_224) 
                                                                             >> 8U)), 2U)))) 
                                               << 3U)) 
                                        | (IData)(__VdfgRegularize_h6e95ff9d_0_228));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_prim_ram_1p_scr__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_fwd_pass__BRA__2__KET____DOT__data_state_round 
        = chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_prim_ram_1p_scr__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT____VdfgExtracted_h435ad752__2;
    __Vfunc_prince_mult_prime_64bit__3078__state_in 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_prim_ram_1p_scr__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_fwd_pass__BRA__2__KET____DOT__data_state_round;
    vlSelf->__Vfunc_prince_mult_prime_64bit__3078__state_out = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 5236130507572905536ull);
    __Vfunc_prince_nibble_red16__3079__vect = (0xe7bdU 
                                               & (IData)(__Vfunc_prince_mult_prime_64bit__3078__state_in));
    __Vfunc_prince_nibble_red16__3079__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__3079__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__3079__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__3079__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__3079__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__3078__state_out 
        = ((0xfffffffffffffff0ULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__3078__state_out) 
           | (IData)((IData)(__Vfunc_prince_nibble_red16__3079__Vfuncout)));
    __Vfunc_prince_nibble_red16__3080__vect = (0xde7bU 
                                               & (IData)(__Vfunc_prince_mult_prime_64bit__3078__state_in));
    __Vfunc_prince_nibble_red16__3080__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__3080__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__3080__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__3080__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__3080__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__3078__state_out 
        = ((0xffffffffffffff0fULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__3078__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__3080__Vfuncout)) 
              << 4U));
    __Vfunc_prince_nibble_red16__3081__vect = (0xbde7U 
                                               & (IData)(__Vfunc_prince_mult_prime_64bit__3078__state_in));
    __Vfunc_prince_nibble_red16__3081__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__3081__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__3081__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__3081__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__3081__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__3078__state_out 
        = ((0xfffffffffffff0ffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__3078__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__3081__Vfuncout)) 
              << 8U));
    __Vfunc_prince_nibble_red16__3082__vect = (0x7bdeU 
                                               & (IData)(__Vfunc_prince_mult_prime_64bit__3078__state_in));
    __Vfunc_prince_nibble_red16__3082__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__3082__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__3082__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__3082__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__3082__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__3078__state_out 
        = ((0xffffffffffff0fffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__3078__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__3082__Vfuncout)) 
              << 0x0000000cU));
    __Vfunc_prince_nibble_red16__3083__vect = (0x7bdeU 
                                               & (IData)(
                                                         (__Vfunc_prince_mult_prime_64bit__3078__state_in 
                                                          >> 0x10U)));
    __Vfunc_prince_nibble_red16__3083__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__3083__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__3083__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__3083__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__3083__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__3078__state_out 
        = ((0xfffffffffff0ffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__3078__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__3083__Vfuncout)) 
              << 0x00000010U));
    __Vfunc_prince_nibble_red16__3084__vect = (0xe7bdU 
                                               & (IData)(
                                                         (__Vfunc_prince_mult_prime_64bit__3078__state_in 
                                                          >> 0x10U)));
    __Vfunc_prince_nibble_red16__3084__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__3084__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__3084__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__3084__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__3084__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__3078__state_out 
        = ((0xffffffffff0fffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__3078__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__3084__Vfuncout)) 
              << 0x00000014U));
    __Vfunc_prince_nibble_red16__3085__vect = (0xde7bU 
                                               & (IData)(
                                                         (__Vfunc_prince_mult_prime_64bit__3078__state_in 
                                                          >> 0x10U)));
    __Vfunc_prince_nibble_red16__3085__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__3085__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__3085__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__3085__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__3085__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__3078__state_out 
        = ((0xfffffffff0ffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__3078__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__3085__Vfuncout)) 
              << 0x00000018U));
    __Vfunc_prince_nibble_red16__3086__vect = (0xbde7U 
                                               & (IData)(
                                                         (__Vfunc_prince_mult_prime_64bit__3078__state_in 
                                                          >> 0x10U)));
    __Vfunc_prince_nibble_red16__3086__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__3086__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__3086__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__3086__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__3086__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__3078__state_out 
        = ((0xffffffff0fffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__3078__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__3086__Vfuncout)) 
              << 0x0000001cU));
    __Vfunc_prince_nibble_red16__3087__vect = (0x7bdeU 
                                               & (IData)(
                                                         (__Vfunc_prince_mult_prime_64bit__3078__state_in 
                                                          >> 0x20U)));
    __Vfunc_prince_nibble_red16__3087__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__3087__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__3087__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__3087__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__3087__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__3078__state_out 
        = ((0xfffffff0ffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__3078__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__3087__Vfuncout)) 
              << 0x00000020U));
    __Vfunc_prince_nibble_red16__3088__vect = (0xe7bdU 
                                               & (IData)(
                                                         (__Vfunc_prince_mult_prime_64bit__3078__state_in 
                                                          >> 0x20U)));
    __Vfunc_prince_nibble_red16__3088__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__3088__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__3088__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__3088__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__3088__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__3078__state_out 
        = ((0xffffff0fffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__3078__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__3088__Vfuncout)) 
              << 0x00000024U));
    __Vfunc_prince_nibble_red16__3089__vect = (0xde7bU 
                                               & (IData)(
                                                         (__Vfunc_prince_mult_prime_64bit__3078__state_in 
                                                          >> 0x20U)));
    __Vfunc_prince_nibble_red16__3089__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__3089__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__3089__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__3089__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__3089__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__3078__state_out 
        = ((0xfffff0ffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__3078__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__3089__Vfuncout)) 
              << 0x00000028U));
    __Vfunc_prince_nibble_red16__3090__vect = (0xbde7U 
                                               & (IData)(
                                                         (__Vfunc_prince_mult_prime_64bit__3078__state_in 
                                                          >> 0x20U)));
    __Vfunc_prince_nibble_red16__3090__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__3090__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__3090__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__3090__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__3090__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__3078__state_out 
        = ((0xffff0fffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__3078__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__3090__Vfuncout)) 
              << 0x0000002cU));
    __Vfunc_prince_nibble_red16__3091__vect = (0xe7bdU 
                                               & (IData)(
                                                         (__Vfunc_prince_mult_prime_64bit__3078__state_in 
                                                          >> 0x30U)));
    __Vfunc_prince_nibble_red16__3091__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__3091__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__3091__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__3091__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__3091__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__3078__state_out 
        = ((0xfff0ffffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__3078__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__3091__Vfuncout)) 
              << 0x00000030U));
    __Vfunc_prince_nibble_red16__3092__vect = (0xde7bU 
                                               & (IData)(
                                                         (__Vfunc_prince_mult_prime_64bit__3078__state_in 
                                                          >> 0x30U)));
    __Vfunc_prince_nibble_red16__3092__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__3092__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__3092__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__3092__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__3092__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__3078__state_out 
        = ((0xff0fffffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__3078__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__3092__Vfuncout)) 
              << 0x00000034U));
    __Vfunc_prince_nibble_red16__3093__vect = (0xbde7U 
                                               & (IData)(
                                                         (__Vfunc_prince_mult_prime_64bit__3078__state_in 
                                                          >> 0x30U)));
    __Vfunc_prince_nibble_red16__3093__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__3093__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__3093__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__3093__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__3093__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__3078__state_out 
        = ((0xf0ffffffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__3078__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__3093__Vfuncout)) 
              << 0x00000038U));
    __Vfunc_prince_nibble_red16__3094__vect = (0x7bdeU 
                                               & (IData)(
                                                         (__Vfunc_prince_mult_prime_64bit__3078__state_in 
                                                          >> 0x30U)));
    __Vfunc_prince_nibble_red16__3094__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__3094__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__3094__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__3094__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__3094__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__3078__state_out 
        = ((0x0fffffffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__3078__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__3094__Vfuncout)) 
              << 0x0000003cU));
    __Vfunc_prince_mult_prime_64bit__3078__Vfuncout 
        = vlSelfRef.__Vfunc_prince_mult_prime_64bit__3078__state_out;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_prim_ram_1p_scr__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_fwd_pass__BRA__2__KET____DOT__data_state_round 
        = __Vfunc_prince_mult_prime_64bit__3078__Vfuncout;
    __Vfunc_prince_shiftrows_64bit__3095__state_in 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_prim_ram_1p_scr__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_fwd_pass__BRA__2__KET____DOT__data_state_round;
    vlSelf->__Vfunc_prince_shiftrows_64bit__3095__state_out = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 14091493830851385498ull);
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__3095__state_out 
        = ((0xfffffffffffff000ULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__3095__state_out) 
           | (IData)((IData)(((0x00000f00U & ((IData)(
                                                      (__Vfunc_prince_shiftrows_64bit__3095__state_in 
                                                       >> 0x38U)) 
                                              << 8U)) 
                              | ((0x000000f0U & ((IData)(
                                                         (__Vfunc_prince_shiftrows_64bit__3095__state_in 
                                                          >> 0x24U)) 
                                                 << 4U)) 
                                 | (0x0000000fU & (IData)(
                                                          (__Vfunc_prince_shiftrows_64bit__3095__state_in 
                                                           >> 0x10U))))))));
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__3095__state_out 
        = ((0xffffffffff000fffULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__3095__state_out) 
           | ((QData)((IData)(((0x00000f00U & ((IData)(
                                                       (__Vfunc_prince_shiftrows_64bit__3095__state_in 
                                                        >> 0x34U)) 
                                               << 8U)) 
                               | ((0x000000f0U & ((IData)(
                                                          (__Vfunc_prince_shiftrows_64bit__3095__state_in 
                                                           >> 0x20U)) 
                                                  << 4U)) 
                                  | (0x0000000fU & (IData)(
                                                           (__Vfunc_prince_shiftrows_64bit__3095__state_in 
                                                            >> 0x0cU))))))) 
              << 0x0000000cU));
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__3095__state_out 
        = ((0xfffffff000ffffffULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__3095__state_out) 
           | ((QData)((IData)(((0x00000f00U & ((IData)(
                                                       (__Vfunc_prince_shiftrows_64bit__3095__state_in 
                                                        >> 0x30U)) 
                                               << 8U)) 
                               | ((0x000000f0U & ((IData)(
                                                          (__Vfunc_prince_shiftrows_64bit__3095__state_in 
                                                           >> 0x1cU)) 
                                                  << 4U)) 
                                  | (0x0000000fU & (IData)(
                                                           (__Vfunc_prince_shiftrows_64bit__3095__state_in 
                                                            >> 8U))))))) 
              << 0x00000018U));
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__3095__state_out 
        = ((0xffff000fffffffffULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__3095__state_out) 
           | ((QData)((IData)(((0x00000f00U & ((IData)(
                                                       (__Vfunc_prince_shiftrows_64bit__3095__state_in 
                                                        >> 0x2cU)) 
                                               << 8U)) 
                               | ((0x000000f0U & ((IData)(
                                                          (__Vfunc_prince_shiftrows_64bit__3095__state_in 
                                                           >> 0x18U)) 
                                                  << 4U)) 
                                  | (0x0000000fU & (IData)(
                                                           (__Vfunc_prince_shiftrows_64bit__3095__state_in 
                                                            >> 4U))))))) 
              << 0x00000024U));
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__3095__state_out 
        = ((0xf000ffffffffffffULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__3095__state_out) 
           | ((QData)((IData)(((0x00000f00U & ((IData)(
                                                       (__Vfunc_prince_shiftrows_64bit__3095__state_in 
                                                        >> 0x28U)) 
                                               << 8U)) 
                               | ((0x000000f0U & ((IData)(
                                                          (__Vfunc_prince_shiftrows_64bit__3095__state_in 
                                                           >> 0x14U)) 
                                                  << 4U)) 
                                  | (0x0000000fU & (IData)(__Vfunc_prince_shiftrows_64bit__3095__state_in)))))) 
              << 0x00000030U));
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__3095__state_out 
        = ((0x0fffffffffffffffULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__3095__state_out) 
           | ((QData)((IData)((0x0000000fU & (IData)(
                                                     (__Vfunc_prince_shiftrows_64bit__3095__state_in 
                                                      >> 0x3cU))))) 
              << 0x0000003cU));
    __Vfunc_prince_shiftrows_64bit__3095__Vfuncout 
        = vlSelfRef.__Vfunc_prince_shiftrows_64bit__3095__state_out;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_prim_ram_1p_scr__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_fwd_pass__BRA__2__KET____DOT__data_state_round 
        = __Vfunc_prince_shiftrows_64bit__3095__Vfuncout;
    __VdfgRegularize_h6e95ff9d_0_230 = ((0x00000010U 
                                         & ((IData)(
                                                    (0x21748fe3da09b65cULL 
                                                     >> 
                                                     ((IData)(2U) 
                                                      + 
                                                      (0x0000003fU 
                                                       & VL_SHIFTL_III(6,6,32, 
                                                                       (0x0000000fU 
                                                                        & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_224) 
                                                                           >> 4U)), 2U))))) 
                                            << 4U)) 
                                        | (IData)(__VdfgRegularize_h6e95ff9d_0_229));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_prim_ram_1p_scr__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_lo__BRA__191__03a128__KET__ 
        = (0xa4093822299f31d0ULL ^ (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_prim_ram_1p_scr__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_fwd_pass__BRA__2__KET____DOT__data_state_round 
                                    ^ (((QData)((IData)(
                                                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__key_q[1U])) 
                                        << 0x00000020U) 
                                       | (QData)((IData)(
                                                         vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__key_q[0U])))));
    __VdfgRegularize_h6e95ff9d_0_231 = ((0x00000020U 
                                         & ((IData)(
                                                    (0x21748fe3da09b65cULL 
                                                     >> 
                                                     (0x0000003fU 
                                                      & VL_SHIFTL_III(6,6,32, 
                                                                      (0x0000000fU 
                                                                       & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_224) 
                                                                          >> 4U)), 2U)))) 
                                            << 5U)) 
                                        | (IData)(__VdfgRegularize_h6e95ff9d_0_230));
    __Vfunc_sbox4_64bit__3155__state_in = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_prim_ram_1p_scr__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_lo__BRA__191__03a128__KET__;
    vlSelf->__Vfunc_sbox4_64bit__3155__state_out = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 15811729984948470613ull);
    __Vfunc_sbox4_8bit__3156__state_in = (0x000000ffU 
                                          & (IData)(__Vfunc_sbox4_64bit__3155__state_in));
    vlSelf->__Vfunc_sbox4_8bit__3156__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 18355153952653931522ull);
    vlSelfRef.__Vfunc_sbox4_8bit__3156__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__3156__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__3156__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__3156__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__3156__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__3156__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__3156__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__3156__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__3155__state_out 
        = ((0xffffffffffffff00ULL & vlSelfRef.__Vfunc_sbox4_64bit__3155__state_out) 
           | (IData)((IData)(__Vfunc_sbox4_8bit__3156__Vfuncout)));
    __Vfunc_sbox4_8bit__3156__state_in = (0x000000ffU 
                                          & (IData)(
                                                    (__Vfunc_sbox4_64bit__3155__state_in 
                                                     >> 8U)));
    vlSelf->__Vfunc_sbox4_8bit__3156__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 18355153952653931522ull);
    vlSelfRef.__Vfunc_sbox4_8bit__3156__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__3156__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__3156__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__3156__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__3156__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__3156__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__3156__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__3156__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__3155__state_out 
        = ((0xffffffffffff00ffULL & vlSelfRef.__Vfunc_sbox4_64bit__3155__state_out) 
           | ((QData)((IData)(__Vfunc_sbox4_8bit__3156__Vfuncout)) 
              << 8U));
    __Vfunc_sbox4_8bit__3156__state_in = (0x000000ffU 
                                          & (IData)(
                                                    (__Vfunc_sbox4_64bit__3155__state_in 
                                                     >> 0x10U)));
    vlSelf->__Vfunc_sbox4_8bit__3156__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 18355153952653931522ull);
    vlSelfRef.__Vfunc_sbox4_8bit__3156__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__3156__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__3156__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__3156__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__3156__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__3156__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__3156__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__3156__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__3155__state_out 
        = ((0xffffffffff00ffffULL & vlSelfRef.__Vfunc_sbox4_64bit__3155__state_out) 
           | ((QData)((IData)(__Vfunc_sbox4_8bit__3156__Vfuncout)) 
              << 0x00000010U));
    __Vfunc_sbox4_8bit__3156__state_in = (0x000000ffU 
                                          & (IData)(
                                                    (__Vfunc_sbox4_64bit__3155__state_in 
                                                     >> 0x18U)));
    vlSelf->__Vfunc_sbox4_8bit__3156__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 18355153952653931522ull);
    vlSelfRef.__Vfunc_sbox4_8bit__3156__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__3156__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__3156__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__3156__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__3156__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__3156__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__3156__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__3156__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__3155__state_out 
        = ((0xffffffff00ffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__3155__state_out) 
           | ((QData)((IData)(__Vfunc_sbox4_8bit__3156__Vfuncout)) 
              << 0x00000018U));
    __Vfunc_sbox4_8bit__3156__state_in = (0x000000ffU 
                                          & (IData)(
                                                    (__Vfunc_sbox4_64bit__3155__state_in 
                                                     >> 0x20U)));
    vlSelf->__Vfunc_sbox4_8bit__3156__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 18355153952653931522ull);
    vlSelfRef.__Vfunc_sbox4_8bit__3156__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__3156__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__3156__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__3156__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__3156__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__3156__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__3156__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__3156__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__3155__state_out 
        = ((0xffffff00ffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__3155__state_out) 
           | ((QData)((IData)(__Vfunc_sbox4_8bit__3156__Vfuncout)) 
              << 0x00000020U));
    __Vfunc_sbox4_8bit__3156__state_in = (0x000000ffU 
                                          & (IData)(
                                                    (__Vfunc_sbox4_64bit__3155__state_in 
                                                     >> 0x28U)));
    vlSelf->__Vfunc_sbox4_8bit__3156__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 18355153952653931522ull);
    vlSelfRef.__Vfunc_sbox4_8bit__3156__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__3156__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__3156__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__3156__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__3156__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__3156__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__3156__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__3156__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__3155__state_out 
        = ((0xffff00ffffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__3155__state_out) 
           | ((QData)((IData)(__Vfunc_sbox4_8bit__3156__Vfuncout)) 
              << 0x00000028U));
    __Vfunc_sbox4_8bit__3156__state_in = (0x000000ffU 
                                          & (IData)(
                                                    (__Vfunc_sbox4_64bit__3155__state_in 
                                                     >> 0x30U)));
    vlSelf->__Vfunc_sbox4_8bit__3156__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 18355153952653931522ull);
    vlSelfRef.__Vfunc_sbox4_8bit__3156__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__3156__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__3156__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__3156__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__3156__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__3156__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__3156__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__3156__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__3155__state_out 
        = ((0xff00ffffffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__3155__state_out) 
           | ((QData)((IData)(__Vfunc_sbox4_8bit__3156__Vfuncout)) 
              << 0x00000030U));
    __Vfunc_sbox4_8bit__3156__state_in = (0x000000ffU 
                                          & (IData)(
                                                    (__Vfunc_sbox4_64bit__3155__state_in 
                                                     >> 0x38U)));
    vlSelf->__Vfunc_sbox4_8bit__3156__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 18355153952653931522ull);
    vlSelfRef.__Vfunc_sbox4_8bit__3156__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__3156__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__3156__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__3156__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__3156__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__3156__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__3156__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__3156__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__3155__state_out 
        = ((0x00ffffffffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__3155__state_out) 
           | ((QData)((IData)(__Vfunc_sbox4_8bit__3156__Vfuncout)) 
              << 0x00000038U));
    __Vfunc_sbox4_64bit__3155__Vfuncout = vlSelfRef.__Vfunc_sbox4_64bit__3155__state_out;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_prim_ram_1p_scr__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT____VdfgExtracted_h99e0c7c1__2 
        = __Vfunc_sbox4_64bit__3155__Vfuncout;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_prim_ram_1p_scr__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_sbox 
        = (((((((2U & ((IData)((0x21748fe3da09b65cULL 
                                >> (0x0000003fU & VL_SHIFTL_III(6,6,32, 
                                                                (0x0000000fU 
                                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_224)), 2U)))) 
                       << 1U)) | (1U & (IData)((0x21748fe3da09b65cULL 
                                                >> 
                                                ((IData)(1U) 
                                                 + 
                                                 (0x0000003fU 
                                                  & VL_SHIFTL_III(6,6,32, 
                                                                  (0x0000000fU 
                                                                   & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_224)), 2U))))))) 
               << 6U) | (((2U & ((IData)((0x21748fe3da09b65cULL 
                                          >> ((IData)(3U) 
                                              + (0x0000003fU 
                                                 & VL_SHIFTL_III(6,6,32, 
                                                                 (0x0000000fU 
                                                                  & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_224)), 2U))))) 
                                 << 1U)) | (1U & (IData)(
                                                         (0x21748fe3da09b65cULL 
                                                          >> 
                                                          ((IData)(1U) 
                                                           + 
                                                           (0x0000003fU 
                                                            & VL_SHIFTL_III(6,6,32, 
                                                                            (0x0000000fU 
                                                                             & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_224) 
                                                                                >> 4U)), 2U))))))) 
                         << 4U)) | ((((2U & ((IData)(
                                                     (0x21748fe3da09b65cULL 
                                                      >> 
                                                      ((IData)(3U) 
                                                       + 
                                                       (0x0000003fU 
                                                        & VL_SHIFTL_III(6,6,32, 
                                                                        (0x0000000fU 
                                                                         & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_224) 
                                                                            >> 4U)), 2U))))) 
                                             << 1U)) 
                                      | (1U & (IData)(
                                                      (0x21748fe3da09b65cULL 
                                                       >> 
                                                       ((IData)(1U) 
                                                        + 
                                                        (0x0000003fU 
                                                         & VL_SHIFTL_III(6,6,32, 
                                                                         (0x0000000fU 
                                                                          & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_224) 
                                                                             >> 8U)), 2U))))))) 
                                     << 2U) | ((2U 
                                                & ((IData)(
                                                           (0x21748fe3da09b65cULL 
                                                            >> 
                                                            ((IData)(3U) 
                                                             + 
                                                             (0x0000003fU 
                                                              & VL_SHIFTL_III(6,6,32, 
                                                                              (0x0000000fU 
                                                                               & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_224) 
                                                                                >> 8U)), 2U))))) 
                                                   << 1U)) 
                                               | (1U 
                                                  & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_224) 
                                                     >> 0x0000000dU))))) 
            << 7U) | ((0x00000040U & ((IData)((0x21748fe3da09b65cULL 
                                               >> ((IData)(2U) 
                                                   + 
                                                   (0x0000003fU 
                                                    & VL_SHIFTL_III(6,6,32, 
                                                                    (0x0000000fU 
                                                                     & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_224)), 2U))))) 
                                      << 6U)) | (IData)(__VdfgRegularize_h6e95ff9d_0_231)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_232 = (0x00007fffU 
                                                  & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_prim_ram_1p_scr__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_sbox) 
                                                     ^ 
                                                     ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__nonce_q[1U] 
                                                       << 0x0000000fU) 
                                                      | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__nonce_q[1U] 
                                                         >> 0x00000011U))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1557 = (
                                                   ((((2U 
                                                       & ((IData)(
                                                                  (0x21748fe3da09b65cULL 
                                                                   >> 
                                                                   (0x0000003fU 
                                                                    & VL_SHIFTL_III(6,6,32, 
                                                                                (0x0000000fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_232) 
                                                                                >> 8U)), 2U)))) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & (IData)(
                                                                   (0x21748fe3da09b65cULL 
                                                                    >> 
                                                                    ((IData)(1U) 
                                                                     + 
                                                                     (0x0000003fU 
                                                                      & VL_SHIFTL_III(6,6,32, 
                                                                                (0x0000000fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_232) 
                                                                                >> 8U)), 2U))))))) 
                                                     << 5U) 
                                                    | (((2U 
                                                         & ((IData)(
                                                                    (0x21748fe3da09b65cULL 
                                                                     >> 
                                                                     ((IData)(2U) 
                                                                      + 
                                                                      (0x0000003fU 
                                                                       & VL_SHIFTL_III(6,6,32, 
                                                                                (0x0000000fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_232) 
                                                                                >> 8U)), 2U))))) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & (IData)(
                                                                     (0x21748fe3da09b65cULL 
                                                                      >> 
                                                                      ((IData)(3U) 
                                                                       + 
                                                                       (0x0000003fU 
                                                                        & VL_SHIFTL_III(6,6,32, 
                                                                                (0x0000000fU 
                                                                                & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_232) 
                                                                                >> 8U)), 2U))))))) 
                                                       << 3U)) 
                                                   | ((4U 
                                                       & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_232) 
                                                          >> 0x0000000aU)) 
                                                      | ((2U 
                                                          & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_232) 
                                                             >> 0x0000000cU)) 
                                                         | (1U 
                                                            & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_232) 
                                                               >> 0x0000000eU)))));
    __VdfgRegularize_h6e95ff9d_0_235 = ((2U & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_232) 
                                               >> 0x0000000bU)) 
                                        | (1U & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_232) 
                                                 >> 0x0000000eU)));
    __VdfgRegularize_h6e95ff9d_0_236 = ((4U & ((IData)(
                                                       (0x21748fe3da09b65cULL 
                                                        >> 
                                                        ((IData)(2U) 
                                                         + 
                                                         (0x0000003fU 
                                                          & VL_SHIFTL_III(6,6,32, 
                                                                          (0x0000000fU 
                                                                           & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_232) 
                                                                              >> 8U)), 2U))))) 
                                               << 2U)) 
                                        | (IData)(__VdfgRegularize_h6e95ff9d_0_235));
    __VdfgRegularize_h6e95ff9d_0_237 = ((8U & ((IData)(
                                                       (0x21748fe3da09b65cULL 
                                                        >> 
                                                        (0x0000003fU 
                                                         & VL_SHIFTL_III(6,6,32, 
                                                                         (0x0000000fU 
                                                                          & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_232) 
                                                                             >> 8U)), 2U)))) 
                                               << 3U)) 
                                        | (IData)(__VdfgRegularize_h6e95ff9d_0_236));
    __VdfgRegularize_h6e95ff9d_0_238 = ((0x00000010U 
                                         & ((IData)(
                                                    (0x21748fe3da09b65cULL 
                                                     >> 
                                                     ((IData)(2U) 
                                                      + 
                                                      (0x0000003fU 
                                                       & VL_SHIFTL_III(6,6,32, 
                                                                       (0x0000000fU 
                                                                        & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_232) 
                                                                           >> 4U)), 2U))))) 
                                            << 4U)) 
                                        | (IData)(__VdfgRegularize_h6e95ff9d_0_237));
    __VdfgRegularize_h6e95ff9d_0_239 = ((0x00000020U 
                                         & ((IData)(
                                                    (0x21748fe3da09b65cULL 
                                                     >> 
                                                     (0x0000003fU 
                                                      & VL_SHIFTL_III(6,6,32, 
                                                                      (0x0000000fU 
                                                                       & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_232) 
                                                                          >> 4U)), 2U)))) 
                                            << 5U)) 
                                        | (IData)(__VdfgRegularize_h6e95ff9d_0_238));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_prim_ram_1p_scr__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_sbox 
        = (((((((2U & ((IData)((0x21748fe3da09b65cULL 
                                >> (0x0000003fU & VL_SHIFTL_III(6,6,32, 
                                                                (0x0000000fU 
                                                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_232)), 2U)))) 
                       << 1U)) | (1U & (IData)((0x21748fe3da09b65cULL 
                                                >> 
                                                ((IData)(1U) 
                                                 + 
                                                 (0x0000003fU 
                                                  & VL_SHIFTL_III(6,6,32, 
                                                                  (0x0000000fU 
                                                                   & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_232)), 2U))))))) 
               << 6U) | (((2U & ((IData)((0x21748fe3da09b65cULL 
                                          >> ((IData)(3U) 
                                              + (0x0000003fU 
                                                 & VL_SHIFTL_III(6,6,32, 
                                                                 (0x0000000fU 
                                                                  & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_232)), 2U))))) 
                                 << 1U)) | (1U & (IData)(
                                                         (0x21748fe3da09b65cULL 
                                                          >> 
                                                          ((IData)(1U) 
                                                           + 
                                                           (0x0000003fU 
                                                            & VL_SHIFTL_III(6,6,32, 
                                                                            (0x0000000fU 
                                                                             & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_232) 
                                                                                >> 4U)), 2U))))))) 
                         << 4U)) | ((((2U & ((IData)(
                                                     (0x21748fe3da09b65cULL 
                                                      >> 
                                                      ((IData)(3U) 
                                                       + 
                                                       (0x0000003fU 
                                                        & VL_SHIFTL_III(6,6,32, 
                                                                        (0x0000000fU 
                                                                         & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_232) 
                                                                            >> 4U)), 2U))))) 
                                             << 1U)) 
                                      | (1U & (IData)(
                                                      (0x21748fe3da09b65cULL 
                                                       >> 
                                                       ((IData)(1U) 
                                                        + 
                                                        (0x0000003fU 
                                                         & VL_SHIFTL_III(6,6,32, 
                                                                         (0x0000000fU 
                                                                          & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_232) 
                                                                             >> 8U)), 2U))))))) 
                                     << 2U) | ((2U 
                                                & ((IData)(
                                                           (0x21748fe3da09b65cULL 
                                                            >> 
                                                            ((IData)(3U) 
                                                             + 
                                                             (0x0000003fU 
                                                              & VL_SHIFTL_III(6,6,32, 
                                                                              (0x0000000fU 
                                                                               & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_232) 
                                                                                >> 8U)), 2U))))) 
                                                   << 1U)) 
                                               | (1U 
                                                  & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_232) 
                                                     >> 0x0000000dU))))) 
            << 7U) | ((0x00000040U & ((IData)((0x21748fe3da09b65cULL 
                                               >> ((IData)(2U) 
                                                   + 
                                                   (0x0000003fU 
                                                    & VL_SHIFTL_III(6,6,32, 
                                                                    (0x0000000fU 
                                                                     & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_232)), 2U))))) 
                                      << 6U)) | (IData)(__VdfgRegularize_h6e95ff9d_0_239)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_prim_ram_1p_scr__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__data_o 
        = (0x00007fffU & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_prim_ram_1p_scr__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_sbox) 
                          ^ ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__nonce_q[1U] 
                              << 0x0000000fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__nonce_q[1U] 
                                                 >> 0x00000011U))));
}

void Vsim___024root___act_comb__TOP__47(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___act_comb__TOP__47\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vlvbound_h7ab1dfa5__0;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vlvbound_h7ab1dfa5__0 = 0;
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__fatal_macro_error_d 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__fatal_macro_error_q;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__fatal_check_error_d 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__fatal_check_error_q;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__fatal_bus_integ_error_d 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__fatal_bus_integ_error_q) 
           | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_tlul_lc_gate.err_o) 
              | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_tlul_adapter_sram__DOT__intg_error_q) 
                 | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__err_q) 
                    | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_chk.err_o) 
                       | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_o))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__lc_escalate_en 
        = (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_prim_lc_sync_escalate_en__DOT__lc_en)) 
            << 0x0000003cU) | (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_prim_lc_sync_escalate_en__DOT__lc_en)) 
                                << 0x00000038U) | (
                                                   ((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_prim_lc_sync_escalate_en__DOT__lc_en)) 
                                                    << 0x00000034U) 
                                                   | (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_prim_lc_sync_escalate_en__DOT__lc_en)) 
                                                       << 0x00000030U) 
                                                      | (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_prim_lc_sync_escalate_en__DOT__lc_en)) 
                                                          << 0x0000002cU) 
                                                         | (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_prim_lc_sync_escalate_en__DOT__lc_en)) 
                                                             << 0x00000028U) 
                                                            | (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_prim_lc_sync_escalate_en__DOT__lc_en)) 
                                                                << 0x00000024U) 
                                                               | (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_prim_lc_sync_escalate_en__DOT__lc_en)) 
                                                                   << 0x00000020U) 
                                                                  | (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_prim_lc_sync_escalate_en__DOT__lc_en)) 
                                                                      << 0x0000001cU) 
                                                                     | (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_prim_lc_sync_escalate_en__DOT__lc_en)) 
                                                                         << 0x00000018U) 
                                                                        | (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_prim_lc_sync_escalate_en__DOT__lc_en)) 
                                                                            << 0x00000014U) 
                                                                           | (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_prim_lc_sync_escalate_en__DOT__lc_en)) 
                                                                               << 0x00000010U) 
                                                                              | (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_prim_lc_sync_escalate_en__DOT__lc_en)) 
                                                                                << 0x0000000cU) 
                                                                                | (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_prim_lc_sync_escalate_en__DOT__lc_en)) 
                                                                                << 8U) 
                                                                                | (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_prim_lc_sync_escalate_en__DOT__lc_en)) 
                                                                                << 4U) 
                                                                                | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_prim_lc_sync_escalate_en__DOT__lc_en)))))))))))))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__p_errors_alerts__DOT__unnamedblk4__DOT__k = 0x0000000bU;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__p_errors_alerts__DOT__unnamedblk5__DOT__k = 0x0000000dU;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vlvbound_h7ab1dfa5__0 
        = (0U != (7U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_error)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__p_errors_alerts__DOT__unnamedblk6__DOT__k = 0x0000000dU;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__lc_escalate_en_any = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__fatal_macro_error_d 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__fatal_macro_error_d) 
           | (1U == (7U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_error))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_errors_reduced 
        = ((0x0fffU & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_errors_reduced)) 
           | ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vlvbound_h7ab1dfa5__0) 
              << 0x0000000cU));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__fatal_check_error_d 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__fatal_check_error_d) 
           | ((6U == (7U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_error))) 
              | (7U == (7U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_error)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__fatal_macro_error_d 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__fatal_macro_error_d) 
           | (1U == (7U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_error 
                                   >> 3U)))));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vlvbound_h7ab1dfa5__0 
        = (0U != (7U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_error 
                                >> 3U))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__fatal_check_error_d 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__fatal_check_error_d) 
           | ((6U == (7U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_error 
                                    >> 3U)))) | (7U 
                                                 == 
                                                 (7U 
                                                  & (IData)(
                                                            (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_error 
                                                             >> 3U))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__fatal_macro_error_d 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__fatal_macro_error_d) 
           | (3U == (7U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_error 
                                   >> 3U)))));
    if (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__fatal_macro_error_q) 
         | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__fatal_check_error_q))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__lc_escalate_en 
            = (5ULL | (0xfffffffffffffff0ULL & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__lc_escalate_en));
    }
    if (([&]() {
                vlSelfRef.__Vfunc_lc_tx_test_true_strict__70__val 
                    = (0x0000000fU & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__lc_escalate_en));
                vlSelfRef.__Vfunc_lc_tx_test_true_strict__70__Vfuncout 
                    = (5U == (IData)(vlSelfRef.__Vfunc_lc_tx_test_true_strict__70__val));
            }(), (IData)(vlSelfRef.__Vfunc_lc_tx_test_true_strict__70__Vfuncout))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__lc_escalate_en_any = 1U;
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_errors_reduced 
        = ((0x17ffU & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_errors_reduced)) 
           | ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vlvbound_h7ab1dfa5__0) 
              << 0x0000000bU));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__fatal_check_error_d 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__fatal_check_error_d) 
           | ((6U == (7U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_error 
                                    >> 6U)))) | (7U 
                                                 == 
                                                 (7U 
                                                  & (IData)(
                                                            (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_error 
                                                             >> 6U))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__fatal_macro_error_d 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__fatal_macro_error_d) 
           | (1U == (7U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_error 
                                   >> 6U)))));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vlvbound_h7ab1dfa5__0 
        = (0U != (7U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_error 
                                >> 6U))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__fatal_check_error_d 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__fatal_check_error_d) 
           | ((6U == (7U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_error 
                                    >> 9U)))) | (7U 
                                                 == 
                                                 (7U 
                                                  & (IData)(
                                                            (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_error 
                                                             >> 9U))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__fatal_macro_error_d 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__fatal_macro_error_d) 
           | (3U == (7U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_error 
                                   >> 6U)))));
    if (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__fatal_macro_error_q) 
         | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__fatal_check_error_q))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__lc_escalate_en 
            = (0x0000000000000050ULL | (0xffffffffffffff0fULL 
                                        & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__lc_escalate_en));
    }
    if (([&]() {
                vlSelfRef.__Vfunc_lc_tx_test_true_strict__70__val 
                    = (0x0000000fU & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__lc_escalate_en 
                                              >> 4U)));
                vlSelfRef.__Vfunc_lc_tx_test_true_strict__70__Vfuncout 
                    = (5U == (IData)(vlSelfRef.__Vfunc_lc_tx_test_true_strict__70__val));
            }(), (IData)(vlSelfRef.__Vfunc_lc_tx_test_true_strict__70__Vfuncout))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__lc_escalate_en_any = 1U;
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_errors_reduced 
        = ((0x1bffU & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_errors_reduced)) 
           | ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vlvbound_h7ab1dfa5__0) 
              << 0x0000000aU));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__fatal_check_error_d 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__fatal_check_error_d) 
           | ((6U == (7U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_error 
                                    >> 0x0cU)))) | 
              (7U == (7U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_error 
                                    >> 0x0cU))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__fatal_macro_error_d 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__fatal_macro_error_d) 
           | (1U == (7U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_error 
                                   >> 9U)))));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vlvbound_h7ab1dfa5__0 
        = (0U != (7U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_error 
                                >> 9U))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__fatal_check_error_d 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__fatal_check_error_d) 
           | ((6U == (7U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_error 
                                    >> 0x0fU)))) | 
              (7U == (7U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_error 
                                    >> 0x0fU))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__fatal_macro_error_d 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__fatal_macro_error_d) 
           | (3U == (7U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_error 
                                   >> 9U)))));
    if (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__fatal_macro_error_q) 
         | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__fatal_check_error_q))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__lc_escalate_en 
            = (0x0000000000000500ULL | (0xfffffffffffff0ffULL 
                                        & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__lc_escalate_en));
    }
    if (([&]() {
                vlSelfRef.__Vfunc_lc_tx_test_true_strict__70__val 
                    = (0x0000000fU & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__lc_escalate_en 
                                              >> 8U)));
                vlSelfRef.__Vfunc_lc_tx_test_true_strict__70__Vfuncout 
                    = (5U == (IData)(vlSelfRef.__Vfunc_lc_tx_test_true_strict__70__val));
            }(), (IData)(vlSelfRef.__Vfunc_lc_tx_test_true_strict__70__Vfuncout))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__lc_escalate_en_any = 1U;
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_errors_reduced 
        = ((0x1dffU & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_errors_reduced)) 
           | ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vlvbound_h7ab1dfa5__0) 
              << 9U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__fatal_check_error_d 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__fatal_check_error_d) 
           | ((6U == (7U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_error 
                                    >> 0x12U)))) | 
              (7U == (7U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_error 
                                    >> 0x12U))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__fatal_macro_error_d 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__fatal_macro_error_d) 
           | (1U == (7U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_error 
                                   >> 0x0cU)))));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vlvbound_h7ab1dfa5__0 
        = (0U != (7U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_error 
                                >> 0x0cU))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__fatal_check_error_d 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__fatal_check_error_d) 
           | ((6U == (7U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_error 
                                    >> 0x15U)))) | 
              (7U == (7U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_error 
                                    >> 0x15U))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__fatal_macro_error_d 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__fatal_macro_error_d) 
           | (3U == (7U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_error 
                                   >> 0x0cU)))));
    if (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__fatal_macro_error_q) 
         | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__fatal_check_error_q))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__lc_escalate_en 
            = (0x0000000000005000ULL | (0xffffffffffff0fffULL 
                                        & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__lc_escalate_en));
    }
    if (([&]() {
                vlSelfRef.__Vfunc_lc_tx_test_true_strict__70__val 
                    = (0x0000000fU & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__lc_escalate_en 
                                              >> 0x0cU)));
                vlSelfRef.__Vfunc_lc_tx_test_true_strict__70__Vfuncout 
                    = (5U == (IData)(vlSelfRef.__Vfunc_lc_tx_test_true_strict__70__val));
            }(), (IData)(vlSelfRef.__Vfunc_lc_tx_test_true_strict__70__Vfuncout))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__lc_escalate_en_any = 1U;
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_errors_reduced 
        = ((0x1effU & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_errors_reduced)) 
           | ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vlvbound_h7ab1dfa5__0) 
              << 8U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__fatal_check_error_d 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__fatal_check_error_d) 
           | ((6U == (7U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_error 
                                    >> 0x18U)))) | 
              (7U == (7U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_error 
                                    >> 0x18U))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__fatal_macro_error_d 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__fatal_macro_error_d) 
           | (1U == (7U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_error 
                                   >> 0x0fU)))));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vlvbound_h7ab1dfa5__0 
        = (0U != (7U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_error 
                                >> 0x0fU))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__fatal_check_error_d 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__fatal_check_error_d) 
           | ((6U == (7U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_error 
                                    >> 0x1bU)))) | 
              (7U == (7U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_error 
                                    >> 0x1bU))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__fatal_macro_error_d 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__fatal_macro_error_d) 
           | (3U == (7U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_error 
                                   >> 0x0fU)))));
    if (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__fatal_macro_error_q) 
         | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__fatal_check_error_q))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__lc_escalate_en 
            = (0x0000000000050000ULL | (0xfffffffffff0ffffULL 
                                        & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__lc_escalate_en));
    }
    if (([&]() {
                vlSelfRef.__Vfunc_lc_tx_test_true_strict__70__val 
                    = (0x0000000fU & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__lc_escalate_en 
                                              >> 0x10U)));
                vlSelfRef.__Vfunc_lc_tx_test_true_strict__70__Vfuncout 
                    = (5U == (IData)(vlSelfRef.__Vfunc_lc_tx_test_true_strict__70__val));
            }(), (IData)(vlSelfRef.__Vfunc_lc_tx_test_true_strict__70__Vfuncout))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__lc_escalate_en_any = 1U;
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_errors_reduced 
        = ((0x1f7fU & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_errors_reduced)) 
           | ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vlvbound_h7ab1dfa5__0) 
              << 7U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__fatal_check_error_d 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__fatal_check_error_d) 
           | ((6U == (7U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_error 
                                    >> 0x1eU)))) | 
              (7U == (7U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_error 
                                    >> 0x1eU))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__fatal_macro_error_d 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__fatal_macro_error_d) 
           | (1U == (7U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_error 
                                   >> 0x12U)))));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vlvbound_h7ab1dfa5__0 
        = (0U != (7U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_error 
                                >> 0x12U))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__fatal_check_error_d 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__fatal_check_error_d) 
           | ((6U == (7U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_error 
                                    >> 0x21U)))) | 
              (7U == (7U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_error 
                                    >> 0x21U))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__fatal_macro_error_d 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__fatal_macro_error_d) 
           | (3U == (7U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_error 
                                   >> 0x12U)))));
    if (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__fatal_macro_error_q) 
         | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__fatal_check_error_q))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__lc_escalate_en 
            = (0x0000000000500000ULL | (0xffffffffff0fffffULL 
                                        & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__lc_escalate_en));
    }
    if (([&]() {
                vlSelfRef.__Vfunc_lc_tx_test_true_strict__70__val 
                    = (0x0000000fU & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__lc_escalate_en 
                                              >> 0x14U)));
                vlSelfRef.__Vfunc_lc_tx_test_true_strict__70__Vfuncout 
                    = (5U == (IData)(vlSelfRef.__Vfunc_lc_tx_test_true_strict__70__val));
            }(), (IData)(vlSelfRef.__Vfunc_lc_tx_test_true_strict__70__Vfuncout))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__lc_escalate_en_any = 1U;
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_errors_reduced 
        = ((0x1fbfU & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_errors_reduced)) 
           | ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vlvbound_h7ab1dfa5__0) 
              << 6U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__fatal_check_error_d 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__fatal_check_error_d) 
           | ((6U == (7U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_error 
                                    >> 0x24U)))) | 
              (7U == (7U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_error 
                                    >> 0x24U))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__fatal_macro_error_d 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__fatal_macro_error_d) 
           | (1U == (7U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_error 
                                   >> 0x15U)))));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vlvbound_h7ab1dfa5__0 
        = (0U != (7U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_error 
                                >> 0x15U))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__fatal_check_error_d 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__fatal_check_error_d) 
           | ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__chk_timeout_q) 
                | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__lfsr_fsm_err)) 
               | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__scrmbl_fsm_err)) 
              | (0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_fsm_err))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__fatal_macro_error_d 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__fatal_macro_error_d) 
           | (3U == (7U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_error 
                                   >> 0x15U)))));
    if (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__fatal_macro_error_q) 
         | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__fatal_check_error_q))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__lc_escalate_en 
            = (0x0000000005000000ULL | (0xfffffffff0ffffffULL 
                                        & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__lc_escalate_en));
    }
    if (([&]() {
                vlSelfRef.__Vfunc_lc_tx_test_true_strict__70__val 
                    = (0x0000000fU & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__lc_escalate_en 
                                              >> 0x18U)));
                vlSelfRef.__Vfunc_lc_tx_test_true_strict__70__Vfuncout 
                    = (5U == (IData)(vlSelfRef.__Vfunc_lc_tx_test_true_strict__70__val));
            }(), (IData)(vlSelfRef.__Vfunc_lc_tx_test_true_strict__70__Vfuncout))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__lc_escalate_en_any = 1U;
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_errors_reduced 
        = ((0x1fdfU & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_errors_reduced)) 
           | ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vlvbound_h7ab1dfa5__0) 
              << 5U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__fatal_macro_error_d 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__fatal_macro_error_d) 
           | (1U == (7U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_error 
                                   >> 0x18U)))));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vlvbound_h7ab1dfa5__0 
        = (0U != (7U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_error 
                                >> 0x18U))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__fatal_macro_error_d 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__fatal_macro_error_d) 
           | (3U == (7U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_error 
                                   >> 0x18U)))));
    if (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__fatal_macro_error_q) 
         | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__fatal_check_error_q))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__lc_escalate_en 
            = (0x0000000050000000ULL | (0xffffffff0fffffffULL 
                                        & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__lc_escalate_en));
    }
    if (([&]() {
                vlSelfRef.__Vfunc_lc_tx_test_true_strict__70__val 
                    = (0x0000000fU & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__lc_escalate_en 
                                              >> 0x1cU)));
                vlSelfRef.__Vfunc_lc_tx_test_true_strict__70__Vfuncout 
                    = (5U == (IData)(vlSelfRef.__Vfunc_lc_tx_test_true_strict__70__val));
            }(), (IData)(vlSelfRef.__Vfunc_lc_tx_test_true_strict__70__Vfuncout))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__lc_escalate_en_any = 1U;
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_errors_reduced 
        = ((0x1fefU & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_errors_reduced)) 
           | ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vlvbound_h7ab1dfa5__0) 
              << 4U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__fatal_macro_error_d 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__fatal_macro_error_d) 
           | (1U == (7U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_error 
                                   >> 0x1bU)))));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vlvbound_h7ab1dfa5__0 
        = (0U != (7U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_error 
                                >> 0x1bU))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__fatal_macro_error_d 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__fatal_macro_error_d) 
           | (3U == (7U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_error 
                                   >> 0x1bU)))));
    if (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__fatal_macro_error_q) 
         | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__fatal_check_error_q))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__lc_escalate_en 
            = (0x0000000500000000ULL | (0xfffffff0ffffffffULL 
                                        & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__lc_escalate_en));
    }
    if (([&]() {
                vlSelfRef.__Vfunc_lc_tx_test_true_strict__70__val 
                    = (0x0000000fU & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__lc_escalate_en 
                                              >> 0x20U)));
                vlSelfRef.__Vfunc_lc_tx_test_true_strict__70__Vfuncout 
                    = (5U == (IData)(vlSelfRef.__Vfunc_lc_tx_test_true_strict__70__val));
            }(), (IData)(vlSelfRef.__Vfunc_lc_tx_test_true_strict__70__Vfuncout))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__lc_escalate_en_any = 1U;
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_errors_reduced 
        = ((0x1ff7U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_errors_reduced)) 
           | ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vlvbound_h7ab1dfa5__0) 
              << 3U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__fatal_macro_error_d 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__fatal_macro_error_d) 
           | (1U == (7U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_error 
                                   >> 0x1eU)))));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vlvbound_h7ab1dfa5__0 
        = (0U != (7U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_error 
                                >> 0x1eU))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__fatal_macro_error_d 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__fatal_macro_error_d) 
           | (3U == (7U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_error 
                                   >> 0x1eU)))));
    if (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__fatal_macro_error_q) 
         | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__fatal_check_error_q))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__lc_escalate_en 
            = (0x0000005000000000ULL | (0xffffff0fffffffffULL 
                                        & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__lc_escalate_en));
    }
    if (([&]() {
                vlSelfRef.__Vfunc_lc_tx_test_true_strict__70__val 
                    = (0x0000000fU & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__lc_escalate_en 
                                              >> 0x24U)));
                vlSelfRef.__Vfunc_lc_tx_test_true_strict__70__Vfuncout 
                    = (5U == (IData)(vlSelfRef.__Vfunc_lc_tx_test_true_strict__70__val));
            }(), (IData)(vlSelfRef.__Vfunc_lc_tx_test_true_strict__70__Vfuncout))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__lc_escalate_en_any = 1U;
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_errors_reduced 
        = ((0x1ffbU & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_errors_reduced)) 
           | ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vlvbound_h7ab1dfa5__0) 
              << 2U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__fatal_macro_error_d 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__fatal_macro_error_d) 
           | ((1U == (7U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_error 
                                    >> 0x21U)))) | 
              (3U == (7U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_error 
                                    >> 0x21U))))));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vlvbound_h7ab1dfa5__0 
        = (0U != (7U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_error 
                                >> 0x21U))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__fatal_macro_error_d 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__fatal_macro_error_d) 
           | ((1U == (7U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_error 
                                    >> 0x24U)))) | 
              (3U == (7U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_error 
                                    >> 0x24U))))));
    if (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__fatal_macro_error_q) 
         | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__fatal_check_error_q))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__lc_escalate_en 
            = (0x0000050000000000ULL | (0xfffff0ffffffffffULL 
                                        & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__lc_escalate_en));
    }
    if (([&]() {
                vlSelfRef.__Vfunc_lc_tx_test_true_strict__70__val 
                    = (0x0000000fU & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__lc_escalate_en 
                                              >> 0x28U)));
                vlSelfRef.__Vfunc_lc_tx_test_true_strict__70__Vfuncout 
                    = (5U == (IData)(vlSelfRef.__Vfunc_lc_tx_test_true_strict__70__val));
            }(), (IData)(vlSelfRef.__Vfunc_lc_tx_test_true_strict__70__Vfuncout))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__lc_escalate_en_any = 1U;
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_errors_reduced 
        = ((0x1ffdU & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_errors_reduced)) 
           | ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vlvbound_h7ab1dfa5__0) 
              << 1U));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vlvbound_h7ab1dfa5__0 
        = (0U != (7U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_error 
                                >> 0x24U))));
    if (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__fatal_macro_error_q) 
         | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__fatal_check_error_q))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__lc_escalate_en 
            = (0x0000500000000000ULL | (0xffff0fffffffffffULL 
                                        & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__lc_escalate_en));
    }
    if (([&]() {
                vlSelfRef.__Vfunc_lc_tx_test_true_strict__70__val 
                    = (0x0000000fU & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__lc_escalate_en 
                                              >> 0x2cU)));
                vlSelfRef.__Vfunc_lc_tx_test_true_strict__70__Vfuncout 
                    = (5U == (IData)(vlSelfRef.__Vfunc_lc_tx_test_true_strict__70__val));
            }(), (IData)(vlSelfRef.__Vfunc_lc_tx_test_true_strict__70__Vfuncout))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__lc_escalate_en_any = 1U;
    }
    if (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__fatal_macro_error_q) 
         | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__fatal_check_error_q))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__lc_escalate_en 
            = (0x0005000000000000ULL | (0xfff0ffffffffffffULL 
                                        & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__lc_escalate_en));
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_errors_reduced 
        = ((0x1ffeU & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_errors_reduced)) 
           | (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vlvbound_h7ab1dfa5__0));
    if (([&]() {
                vlSelfRef.__Vfunc_lc_tx_test_true_strict__70__val 
                    = (0x0000000fU & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__lc_escalate_en 
                                              >> 0x30U)));
                vlSelfRef.__Vfunc_lc_tx_test_true_strict__70__Vfuncout 
                    = (5U == (IData)(vlSelfRef.__Vfunc_lc_tx_test_true_strict__70__val));
            }(), (IData)(vlSelfRef.__Vfunc_lc_tx_test_true_strict__70__Vfuncout))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__lc_escalate_en_any = 1U;
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__interrupt_triggers_d 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_errors_reduced) 
            << 4U) | ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_lfsr_timer__DOT__chk_timeout_q) 
                        << 3U) | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__lfsr_fsm_err) 
                                  << 2U)) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__scrmbl_fsm_err) 
                                              << 1U) 
                                             | (0U 
                                                != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_fsm_err)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_intr_error__DOT__hw2reg_intr_state_de_o 
        = (((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_check_timeout__DOT__wd 
             >> 1U) & (3U == (3U & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_intr_test_otp_error__DOT__we)))))) 
           | (0U != ((~ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__interrupt_triggers_q) 
                     & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__interrupt_triggers_d)));
}

void Vsim___024root___act_comb__TOP__48(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___act_comb__TOP__48\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vlvbound_h6b3cad7a__0;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vlvbound_h6b3cad7a__0 = 0;
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_scrmbl_req_ready = 0U;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vlvbound_h6b3cad7a__0 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__scrmbl_arb_req_ready;
    if ((0x0dU >= (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_scrmbl_mtx__DOT__idx_o))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_scrmbl_req_ready 
            = (((~ ((IData)(1U) << (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_scrmbl_mtx__DOT__idx_o))) 
                & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_scrmbl_req_ready)) 
               | (0x3fffU & ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vlvbound_h6b3cad7a__0) 
                             << (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_scrmbl_mtx__DOT__idx_o))));
    }
}

void Vsim___024root___act_comb__TOP__49(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___act_comb__TOP__49\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vlvbound_he01b966b__0;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vlvbound_he01b966b__0 = 0;
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_scrmbl_mtx_gnt = 0U;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vlvbound_he01b966b__0 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_scrmbl_mtx__DOT__valid_o;
    if ((0x0dU >= (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_scrmbl_mtx__DOT__idx_o))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_scrmbl_mtx_gnt 
            = (((~ ((IData)(1U) << (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_scrmbl_mtx__DOT__idx_o))) 
                & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_scrmbl_mtx_gnt)) 
               | (0x3fffU & ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vlvbound_he01b966b__0) 
                             << (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_scrmbl_mtx__DOT__idx_o))));
    }
}

void Vsim___024root___act_comb__TOP__50(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___act_comb__TOP__50\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__data_in_prev_sel = 4U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__data_in_prev_we = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__state_in_sel = 4U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__add_state_in_sel = 3U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__add_state_out_sel = 0x0eU;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__ctr_incr = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__cipher_in_valid = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__cipher_out_ready = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__cipher_out_done = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__cipher_crypt_out_buf = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__cipher_dec_key_gen_out_buf = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__cipher_prng_reseed_out_buf = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__cipher_key_clear_out_buf = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__cipher_data_out_clear_out_buf = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__key_init_sel 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_sideload__DOT__committed_q)
            ? 0x18U : 0x0eU);
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__key_init_we = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__iv_sel = 0x1dU;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__iv_we = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__ctrl_we = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__alert = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__prng_data_req = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__prng_reseed_req = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__start_we = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__key_iv_data_in_clear_we = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__data_out_clear_we = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__prng_reseed_we = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__idle = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__idle_we = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__stall = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__stall_we = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__data_in_load = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__data_in_we = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__data_out_we = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__key_init_clear = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__key_init_load = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__key_init_arm = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__iv_clear = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__iv_load = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__iv_arm = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__block_ctr_decr = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__aes_ctrl_ns 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__start_core = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__prng_reseed_done_d 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__prng_reseed_done_q) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__seed_en_i));
    if ((0x00000020U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
        if ((0x00000010U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
            if ((8U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
                if ((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
                    if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__aes_ctrl_ns = 0x17U;
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__alert = 1U;
                    } else if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
                        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_ctr) {
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__iv_sel = 0x3eU;
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__iv_we 
                                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__ctr_we_i;
                        } else {
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__iv_sel = 0x1dU;
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__iv_we = 0U;
                        }
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__prng_data_req = 1U;
                        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__prd_clearing_upd_ack) {
                            if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__crypt_q_raw))) {
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__aes_ctrl_ns = 0x24U;
                            } else if (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT____Vcellout__u_trigger_key_iv_data_in_clear__q) 
                                        | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT____Vcellout__u_trigger_data_out_clear__q))) {
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__cipher_key_clear_out_buf 
                                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT____Vcellout__u_trigger_key_iv_data_in_clear__q;
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__cipher_data_out_clear_out_buf 
                                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT____Vcellout__u_trigger_data_out_clear__q;
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__cipher_in_valid = 1U;
                                if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__in_ready) {
                                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__aes_ctrl_ns = 0x3aU;
                                }
                            } else {
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__aes_ctrl_ns = 9U;
                            }
                        }
                    } else {
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__aes_ctrl_ns = 0x17U;
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__alert = 1U;
                    }
                } else if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__aes_ctrl_ns = 0x17U;
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__alert = 1U;
                    } else {
                        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT____Vcellout__u_trigger_key_iv_data_in_clear__q) {
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__key_init_sel = 1U;
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__key_init_we = 0xffffU;
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__key_init_clear = 1U;
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__iv_sel = 0x25U;
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__iv_we = 0xffU;
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__iv_clear = 1U;
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__data_in_we = 1U;
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__data_in_prev_sel = 4U;
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__data_in_prev_we = 1U;
                        }
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__aes_ctrl_ns = 0x0eU;
                    }
                } else {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__aes_ctrl_ns = 0x17U;
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__alert = 1U;
                }
            } else {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__aes_ctrl_ns = 0x17U;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__alert = 1U;
            }
        } else if ((8U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__aes_ctrl_ns = 0x17U;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__alert = 1U;
        } else if ((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
            if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__aes_ctrl_ns = 0x17U;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__alert = 1U;
            } else if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__aes_ctrl_ns = 0x17U;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__alert = 1U;
            } else if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__dec_key_gen_q_raw))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__cipher_out_ready = 1U;
                if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__cipher_out_valid_i) {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__block_ctr_decr = 1U;
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__aes_ctrl_ns = 9U;
                }
            } else {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__cipher_out_done 
                    = (((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__finish) 
                          & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__cipher_out_valid_i)) 
                         & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__mux_sel_err))) 
                        & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__sp_enc_err))) 
                       & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT____VdfgRegularize_hdf41bb1a_0_0));
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__cipher_out_ready 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__finish;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__stall 
                    = ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__finish)) 
                       & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__cipher_out_valid_i));
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__stall_we = 1U;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__add_state_out_sel 
                    = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_cbc_dec)
                        ? 0x18U : ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_cfb_enc)
                                    ? 1U : ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_cfb_dec)
                                             ? 1U : 
                                            ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_ofb)
                                              ? 1U : 
                                             ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_ctr)
                                               ? 1U
                                               : 0x0eU)))));
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__iv_sel 
                    = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_cbc_enc)
                        ? 0x30U : ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_cbc_dec)
                                    ? 3U : ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_cfb_enc)
                                             ? 0x30U
                                             : ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_cfb_dec)
                                                 ? 3U
                                                 : 
                                                ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_ofb)
                                                  ? 8U
                                                  : 
                                                 ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_ctr)
                                                   ? 0x3eU
                                                   : 0x1dU))))));
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__iv_we 
                    = (0x000000ffU & ((((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_cbc_enc) 
                                          | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_cbc_dec)) 
                                         | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_cfb_enc)) 
                                        | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_cfb_dec)) 
                                       | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_ofb))
                                       ? (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__cipher_out_done)))
                                       : ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_ctr)
                                           ? (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__ctr_we_i)
                                           : 0U)));
                if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__cipher_out_done) {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__iv_arm 
                        = ((((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_cbc_enc) 
                               | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_cbc_dec)) 
                              | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_cfb_enc)) 
                             | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_cfb_dec)) 
                            | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_ofb)) 
                           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_ctr));
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__block_ctr_decr = 1U;
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__data_out_we = 1U;
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__aes_ctrl_ns = 9U;
                } else {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__iv_arm = 0U;
                }
            }
        } else if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
            if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__key_init_load 
                    = (1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__dec_key_gen_q_raw));
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__key_init_arm 
                    = (1U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__dec_key_gen_q_raw)));
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__iv_load 
                    = ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__dec_key_gen_q_raw)) 
                       & ((((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_cbc_enc) 
                              | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_cbc_dec)) 
                             | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_cfb_enc)) 
                            | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_cfb_dec)) 
                           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_ofb)) 
                          | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_ctr)));
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__data_in_load 
                    = (1U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__dec_key_gen_q_raw)));
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__ctr_incr 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_ctr;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__aes_ctrl_ns 
                    = ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__dec_key_gen_q_raw))
                        ? 0x24U : 0x3dU);
            } else {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__aes_ctrl_ns = 0x17U;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__alert = 1U;
            }
        } else {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__aes_ctrl_ns = 0x17U;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__alert = 1U;
        }
    } else if ((0x00000010U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
        if ((8U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__aes_ctrl_ns = 0x17U;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__alert = 1U;
        } else if ((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
            if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
                if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__alert = 1U;
                } else {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__aes_ctrl_ns = 0x17U;
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__alert = 1U;
                }
            } else {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__aes_ctrl_ns = 0x17U;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__alert = 1U;
            }
        } else if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__aes_ctrl_ns = 0x17U;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__alert = 1U;
        } else if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__aes_ctrl_ns = 0x17U;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__alert = 1U;
        } else {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__cipher_out_ready 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__prng_reseed_done_q;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__prng_reseed_req 
                = (1U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__prng_reseed_done_q)));
            if (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__cipher_out_ready) 
                 & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__cipher_out_valid_i))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__prng_reseed_we = 1U;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__prng_reseed_done_d = 0U;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__aes_ctrl_ns = 9U;
            }
        }
    } else if ((8U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
        if ((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
            if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
                if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__aes_ctrl_ns = 0x17U;
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__alert = 1U;
                } else {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__cipher_out_ready = 1U;
                    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__cipher_out_valid_i) {
                        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__key_clear_q) {
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__key_iv_data_in_clear_we = 1U;
                        }
                        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__data_out_clear_q) {
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__data_out_we 
                                = (((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__mux_sel_err)) 
                                    & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__sp_enc_err))) 
                                   & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT____VdfgRegularize_hdf41bb1a_0_0));
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__data_out_clear_we = 1U;
                        }
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__aes_ctrl_ns = 9U;
                    }
                }
            } else {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__aes_ctrl_ns = 0x17U;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__alert = 1U;
            }
        } else if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__aes_ctrl_ns = 0x17U;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__alert = 1U;
        } else if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__start_core 
                = ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__start) 
                     | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT____Vcellout__u_trigger_key_iv_data_in_clear__q)) 
                    | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT____Vcellout__u_trigger_data_out_clear__q)) 
                   | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT____Vcellout__u_trigger_prng_reseed__q));
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__idle 
                = (1U & (~ ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__start_core) 
                            | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__prng_reseed_o) 
                               & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__prng_reseed_we_o)))));
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__idle_we = 1U;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__start_we 
                = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT____Vcellout__u_trigger_start__q) 
                   & ((0x20U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_mode__DOT__committed_q)) 
                      | (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_manual_operation__DOT__committed_q))));
            if ((1U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__start_core)))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__ctrl_we 
                    = ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__ctrl_err_storage)) 
                       & (0x0000003fU == (0x0000003fU 
                                          & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_ctrl_shadowed_key_len__DOT__we))))));
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__key_init_we 
                    = (0x0000ffffU & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_sideload__DOT__committed_q)
                                       ? (- (IData)(
                                                    ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__key_sideload_valid_i) 
                                                     & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_sideload__DOT__committed_q) 
                                                        & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__phase_o)) 
                                                           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__ctrl_we_q))))))
                                       : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_prim_buf_key_init_qe__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i)));
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__iv_we 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__iv_qe;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__key_init_clear 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__ctrl_we;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__iv_clear 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__ctrl_we;
            }
            if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT____Vcellout__u_trigger_prng_reseed__q) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__cipher_prng_reseed_out_buf = 1U;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__cipher_in_valid = 1U;
                if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__in_ready) {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__prng_reseed_done_d = 0U;
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__aes_ctrl_ns = 0x10U;
                }
            } else if (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT____Vcellout__u_trigger_key_iv_data_in_clear__q) 
                        | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT____Vcellout__u_trigger_data_out_clear__q))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__aes_ctrl_ns = 0x3dU;
            } else if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__start) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__cipher_dec_key_gen_out_buf 
                    = ((2U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_prim_buf_op__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i)) 
                       & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_key_init__DOT__new_q));
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__cipher_crypt_out_buf = 1U;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__cipher_prng_reseed_out_buf 
                    = (0U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__gen_block_ctr__DOT__block_ctr_q));
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__data_in_prev_sel 
                    = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_cbc_dec)
                        ? 3U : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT____VdfgExtracted_h8ba8d610__0));
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__data_in_prev_we 
                    = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_cbc_dec) 
                       | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_cfb_enc) 
                          | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_cfb_dec) 
                             | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_ofb) 
                                | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_ctr)))));
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__state_in_sel 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT____VdfgExtracted_h8ba8d610__0;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__add_state_in_sel 
                    = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_cbc_enc)
                        ? 4U : ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_cfb_enc)
                                 ? 4U : ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_cfb_dec)
                                          ? 4U : ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_ofb)
                                                   ? 4U
                                                   : 
                                                  ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_ctr)
                                                    ? 4U
                                                    : 3U)))));
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__cipher_in_valid = 1U;
                if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__in_ready) {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__start_we 
                        = (1U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__cipher_dec_key_gen_out_buf)));
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__aes_ctrl_ns = 0x23U;
                }
            }
        } else {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__aes_ctrl_ns = 0x17U;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__alert = 1U;
        }
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__aes_ctrl_ns = 0x17U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__alert = 1U;
    }
    if ((1U & ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__mux_sel_err) 
                 | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__sp_enc_err)) 
                | (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT____VdfgRegularize_hdf41bb1a_0_0))) 
               | ([&]() {
                        vlSelfRef.__Vfunc_lc_tx_test_true_loose__1432__val 
                            = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_prim_lc_sync.__PVT__lc_en;
                        vlSelfRef.__Vfunc_lc_tx_test_true_loose__1432__Vfuncout 
                            = (0x0aU != (IData)(vlSelfRef.__Vfunc_lc_tx_test_true_loose__1432__val));
                    }(), (IData)(vlSelfRef.__Vfunc_lc_tx_test_true_loose__1432__Vfuncout))))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__aes_ctrl_ns = 0x17U;
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__gen_block_ctr__DOT__block_ctr_d 
        = (0x00001fffU & (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__ctrl_we_q) 
                           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__block_ctr_decr) 
                              & ((0U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__gen_block_ctr__DOT__block_ctr_q)) 
                                 | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__prng_reseed_q))))
                           ? (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__gen_block_ctr__DOT__block_ctr_set_val)
                           : ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__gen_block_ctr__DOT__block_ctr_q) 
                              - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__block_ctr_decr))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_key_init__DOT____VdfgRegularize_hef06aaff_0_0 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__key_init_clear) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__key_init_load));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_iv__DOT____VdfgRegularize_heb2658fe_0_0 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__iv_clear) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__iv_load));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_ctr_fsm_i__DOT__u_aes_ctr_fsm__DOT__ctr_slice_idx_d 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_ctr_fsm_i__DOT__u_aes_ctr_fsm__DOT__ctr_slice_idx_q;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_ctr_fsm_i__DOT__u_aes_ctr_fsm__DOT__ctr_carry_d 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_ctr_fsm_i__DOT__u_aes_ctr_fsm__DOT__ctr_carry_q;
    if ((0x0eU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_ctr_fsm_i__DOT__u_aes_ctr_fsm__DOT__u_state_regs__DOT__state_raw))) {
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__ctr_incr) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_ctr_fsm_i__DOT__u_aes_ctr_fsm__DOT__ctr_slice_idx_d = 0U;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_ctr_fsm_i__DOT__u_aes_ctr_fsm__DOT__ctr_carry_d = 1U;
        }
    } else if ((0x18U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_ctr_fsm_i__DOT__u_aes_ctr_fsm__DOT__u_state_regs__DOT__state_raw))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_ctr_fsm_i__DOT__u_aes_ctr_fsm__DOT__ctr_slice_idx_d 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_ctr_fsm_i__DOT__u_aes_ctr_fsm__DOT__ctr_slice_idx_q)));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_ctr_fsm_i__DOT__u_aes_ctr_fsm__DOT__ctr_carry_d 
            = (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_ctr_fsm_i__DOT__u_aes_ctr_fsm__DOT__ctr_value 
                     >> 0x00000010U));
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__prng_reseed_we_o 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__prng_reseed_o)
            ? (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_ctrl_aux_shadowed_key_touch_forces_reseed.__PVT__committed_q)
            : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__prng_reseed_we));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT____VdfgRegularize_h201f8c2c_0_8 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__data_in_load) 
           | ((0x0000000fU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_prim_buf_data_in_qe__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i)) 
              | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__ctrl_we_q)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__output_valid_o 
        = ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__data_out_clear_we)) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__data_out_we));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__output_valid_we_o 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__data_out_we) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__data_out_read) 
              | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__ctrl_we_q) 
                 | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__data_out_clear_we))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_iv__DOT____VdfgRegularize_heb2658fe_0_1 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_iv__DOT__armed_q) 
           & (0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__iv_we)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__output_lost_we_o 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__ctrl_we) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__data_out_we));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__output_lost_o 
        = ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__ctrl_we)) 
           & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT____Vcellout__u_status_output_lost__q) 
              | ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__data_out_read)) 
                 & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__output_valid_q))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_key_init__DOT____VdfgRegularize_hef06aaff_0_1 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_key_init__DOT__armed_q) 
           & (0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__key_init_we)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1483 = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__prng_reseed_done_q) 
                                                   & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__cipher_out_ready));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1487 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1486) 
                                                   & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__cipher_out_ready));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__crypt 
        = (1U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__crypt_q_raw) 
                 | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__cipher_crypt_out_buf)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1662 = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__cipher_crypt_out_buf) 
                                                   | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__cipher_dec_key_gen_out_buf));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__data_in_new 
        = ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT____VdfgRegularize_h201f8c2c_0_8)) 
           & (0x0000000fU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT____VdfgRegularize_h201f8c2c_0_5)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_iv__DOT__armed_d 
        = ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_iv__DOT____VdfgRegularize_heb2658fe_0_0)) 
           & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_iv__DOT____VdfgRegularize_heb2658fe_0_1)) 
              & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__iv_arm) 
                 | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_iv__DOT__armed_q))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_iv__DOT____VdfgRegularize_heb2658fe_0_2 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_iv__DOT____VdfgRegularize_heb2658fe_0_1)
            ? (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__iv_we)
            : ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__iv_we) 
               | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_iv__DOT__we_q)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_key_init__DOT__armed_d 
        = ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_key_init__DOT____VdfgRegularize_hef06aaff_0_0)) 
           & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_key_init__DOT____VdfgRegularize_hef06aaff_0_1)) 
              & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__key_init_arm) 
                 | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_key_init__DOT__armed_q))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_key_init__DOT____VdfgRegularize_hef06aaff_0_2 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_key_init__DOT____VdfgRegularize_hef06aaff_0_1)
            ? (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__key_init_we)
            : ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__key_init_we) 
               | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_key_init__DOT__we_q)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_ctr 
        = ((0x10U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_mode__DOT__committed_q)) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__crypt));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_ofb 
        = ((8U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_mode__DOT__committed_q)) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__crypt));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT____VdfgRegularize_h201f8c2c_0_10 
        = ((1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_operation__DOT__committed_q)) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__crypt));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT____VdfgRegularize_h201f8c2c_0_9 
        = ((2U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_operation__DOT__committed_q)) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__crypt));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__start 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT____VdfgRegularize_h201f8c2c_0_4) 
           & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_manual_operation__DOT__committed_q)
               ? (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT____Vcellout__u_trigger_start__q)
               : (((1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_mode__DOT__committed_q)) 
                   | (((2U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_mode__DOT__committed_q)) 
                       & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_iv__DOT__new_q)) 
                      | (((4U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_mode__DOT__committed_q)) 
                          & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_iv__DOT__new_q)) 
                         | (((8U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_mode__DOT__committed_q)) 
                             & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_iv__DOT__new_q)) 
                            | ((0x10U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_mode__DOT__committed_q)) 
                               & ((0x0eU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_ctr_fsm_i__DOT__u_aes_ctr_fsm__DOT__u_state_regs__DOT__state_raw)) 
                                  & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_iv__DOT__new_q))))))) 
                  & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_key_init__DOT__clean_q) 
                     & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__data_in_new) 
                        & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_345))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__input_ready_we_o 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__data_in_new) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__data_in_load) 
              | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__data_in_we) 
                 | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__ctrl_we_q))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_iv__DOT__all_written 
        = ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_iv__DOT____VdfgRegularize_heb2658fe_0_0)) 
           & (0x000000ffU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_iv__DOT____VdfgRegularize_heb2658fe_0_2)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_key_init__DOT__all_written 
        = ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_key_init__DOT____VdfgRegularize_hef06aaff_0_0)) 
           & (0x0000ffffU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_key_init__DOT____VdfgRegularize_hef06aaff_0_2)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_iv__DOT__new_d 
        = ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_iv__DOT____VdfgRegularize_heb2658fe_0_0)) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_iv__DOT__all_written));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_iv__DOT__clean_d 
        = ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__iv_clear)) 
           & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_iv__DOT__all_written) 
              | ((~ ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_iv__DOT____VdfgRegularize_heb2658fe_0_0)) 
                     & (0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_iv__DOT____VdfgRegularize_heb2658fe_0_2)))) 
                 & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_iv__DOT__clean_q))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_key_init__DOT__clean_d 
        = ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__key_init_clear)) 
           & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_key_init__DOT__all_written) 
              | ((~ ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_key_init__DOT____VdfgRegularize_hef06aaff_0_0)) 
                     & (0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_key_init__DOT____VdfgRegularize_hef06aaff_0_2)))) 
                 & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_key_init__DOT__clean_q))));
}

void Vsim___024root___act_comb__TOP__51(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___act_comb__TOP__51\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__data_in_prev_sel = 4U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__data_in_prev_we = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__state_in_sel = 4U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__add_state_in_sel = 3U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__add_state_out_sel = 0x0eU;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__ctr_incr = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__cipher_in_valid = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__cipher_out_ready = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__cipher_out_done = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__cipher_crypt_out_buf = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__cipher_dec_key_gen_out_buf = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__cipher_prng_reseed_out_buf = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__cipher_key_clear_out_buf = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__cipher_data_out_clear_out_buf = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__key_init_sel 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_sideload__DOT__committed_q)
            ? 0x18U : 0x0eU);
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__key_init_we = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__iv_sel = 0x1dU;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__iv_we = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__ctrl_we = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__alert = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__prng_data_req = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__prng_reseed_req = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__start_we = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__key_iv_data_in_clear_we = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__data_out_clear_we = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__prng_reseed_we = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__idle = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__idle_we = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__stall = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__stall_we = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__data_in_load = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__data_in_we = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__data_out_we = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__key_init_clear = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__key_init_load = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__key_init_arm = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__iv_clear = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__iv_load = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__iv_arm = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__block_ctr_decr = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__aes_ctrl_ns 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__start_core = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__prng_reseed_done_d 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__prng_reseed_done_q) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__seed_en_i));
    if ((0x00000020U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
        if ((0x00000010U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
            if ((8U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
                if ((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
                    if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__aes_ctrl_ns = 0x17U;
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__alert = 1U;
                    } else if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
                        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_ctr) {
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__iv_sel = 0x3eU;
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__iv_we 
                                = (0x000000ffU & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT____VdfgRegularize_h1362fd3d_0_0) 
                                                  >> 8U));
                        } else {
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__iv_sel = 0x1dU;
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__iv_we = 0U;
                        }
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__prng_data_req = 1U;
                        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__prd_clearing_upd_ack) {
                            if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__crypt_q_raw))) {
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__aes_ctrl_ns = 0x24U;
                            } else if (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT____Vcellout__u_trigger_key_iv_data_in_clear__q) 
                                        | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT____Vcellout__u_trigger_data_out_clear__q))) {
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__cipher_key_clear_out_buf 
                                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT____Vcellout__u_trigger_key_iv_data_in_clear__q;
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__cipher_data_out_clear_out_buf 
                                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT____Vcellout__u_trigger_data_out_clear__q;
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__cipher_in_valid = 1U;
                                if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__in_ready) {
                                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__aes_ctrl_ns = 0x3aU;
                                }
                            } else {
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__aes_ctrl_ns = 9U;
                            }
                        }
                    } else {
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__aes_ctrl_ns = 0x17U;
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__alert = 1U;
                    }
                } else if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__aes_ctrl_ns = 0x17U;
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__alert = 1U;
                    } else {
                        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT____Vcellout__u_trigger_key_iv_data_in_clear__q) {
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__key_init_sel = 1U;
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__key_init_we = 0xffffU;
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__key_init_clear = 1U;
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__iv_sel = 0x25U;
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__iv_we = 0xffU;
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__iv_clear = 1U;
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__data_in_we = 1U;
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__data_in_prev_sel = 4U;
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__data_in_prev_we = 1U;
                        }
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__aes_ctrl_ns = 0x0eU;
                    }
                } else {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__aes_ctrl_ns = 0x17U;
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__alert = 1U;
                }
            } else {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__aes_ctrl_ns = 0x17U;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__alert = 1U;
            }
        } else if ((8U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__aes_ctrl_ns = 0x17U;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__alert = 1U;
        } else if ((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
            if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__aes_ctrl_ns = 0x17U;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__alert = 1U;
            } else if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__aes_ctrl_ns = 0x17U;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__alert = 1U;
            } else if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__dec_key_gen_q_raw))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__cipher_out_ready = 1U;
                if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__cipher_out_valid_i) {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__block_ctr_decr = 1U;
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__aes_ctrl_ns = 9U;
                }
            } else {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__cipher_out_done 
                    = (((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__finish) 
                          & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__cipher_out_valid_i)) 
                         & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__mux_sel_err))) 
                        & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__sp_enc_err))) 
                       & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT____VdfgRegularize_hdf41bb1a_0_0));
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__cipher_out_ready 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__finish;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__stall 
                    = ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__finish)) 
                       & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__cipher_out_valid_i));
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__stall_we = 1U;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__add_state_out_sel 
                    = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_cbc_dec)
                        ? 0x18U : ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_cfb_enc)
                                    ? 1U : ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_cfb_dec)
                                             ? 1U : 
                                            ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_ofb)
                                              ? 1U : 
                                             ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_ctr)
                                               ? 1U
                                               : 0x0eU)))));
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__iv_sel 
                    = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_cbc_enc)
                        ? 0x30U : ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_cbc_dec)
                                    ? 3U : ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_cfb_enc)
                                             ? 0x30U
                                             : ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_cfb_dec)
                                                 ? 3U
                                                 : 
                                                ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_ofb)
                                                  ? 8U
                                                  : 
                                                 ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_ctr)
                                                   ? 0x3eU
                                                   : 0x1dU))))));
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__iv_we 
                    = (0x000000ffU & ((((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_cbc_enc) 
                                          | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_cbc_dec)) 
                                         | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_cfb_enc)) 
                                        | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_cfb_dec)) 
                                       | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_ofb))
                                       ? (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__cipher_out_done)))
                                       : ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_ctr)
                                           ? ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT____VdfgRegularize_h1362fd3d_0_0) 
                                              >> 8U)
                                           : 0U)));
                if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__cipher_out_done) {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__iv_arm 
                        = ((((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_cbc_enc) 
                               | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_cbc_dec)) 
                              | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_cfb_enc)) 
                             | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_cfb_dec)) 
                            | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_ofb)) 
                           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_ctr));
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__block_ctr_decr = 1U;
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__data_out_we = 1U;
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__aes_ctrl_ns = 9U;
                } else {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__iv_arm = 0U;
                }
            }
        } else if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
            if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__key_init_load 
                    = (1U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__dec_key_gen_q_raw) 
                             >> 1U));
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__key_init_arm 
                    = (1U & (~ ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__dec_key_gen_q_raw) 
                                >> 1U)));
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__iv_load 
                    = ((~ ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__dec_key_gen_q_raw) 
                           >> 1U)) & ((((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_cbc_enc) 
                                          | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_cbc_dec)) 
                                         | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_cfb_enc)) 
                                        | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_cfb_dec)) 
                                       | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_ofb)) 
                                      | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_ctr)));
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__data_in_load 
                    = (1U & (~ ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__dec_key_gen_q_raw) 
                                >> 1U)));
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__ctr_incr 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_ctr;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__aes_ctrl_ns 
                    = ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__dec_key_gen_q_raw))
                        ? 0x24U : 0x3dU);
            } else {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__aes_ctrl_ns = 0x17U;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__alert = 1U;
            }
        } else {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__aes_ctrl_ns = 0x17U;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__alert = 1U;
        }
    } else if ((0x00000010U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
        if ((8U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__aes_ctrl_ns = 0x17U;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__alert = 1U;
        } else if ((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
            if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
                if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__alert = 1U;
                } else {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__aes_ctrl_ns = 0x17U;
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__alert = 1U;
                }
            } else {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__aes_ctrl_ns = 0x17U;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__alert = 1U;
            }
        } else if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__aes_ctrl_ns = 0x17U;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__alert = 1U;
        } else if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__aes_ctrl_ns = 0x17U;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__alert = 1U;
        } else {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__cipher_out_ready 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__prng_reseed_done_q;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__prng_reseed_req 
                = (1U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__prng_reseed_done_q)));
            if (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__cipher_out_ready) 
                 & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__cipher_out_valid_i))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__prng_reseed_we = 1U;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__prng_reseed_done_d = 0U;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__aes_ctrl_ns = 9U;
            }
        }
    } else if ((8U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
        if ((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
            if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
                if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__aes_ctrl_ns = 0x17U;
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__alert = 1U;
                } else {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__cipher_out_ready = 1U;
                    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__cipher_out_valid_i) {
                        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__key_clear_q) {
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__key_iv_data_in_clear_we = 1U;
                        }
                        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__data_out_clear_q) {
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__data_out_we 
                                = (((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__mux_sel_err)) 
                                    & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__sp_enc_err))) 
                                   & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT____VdfgRegularize_hdf41bb1a_0_0));
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__data_out_clear_we = 1U;
                        }
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__aes_ctrl_ns = 9U;
                    }
                }
            } else {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__aes_ctrl_ns = 0x17U;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__alert = 1U;
            }
        } else if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__aes_ctrl_ns = 0x17U;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__alert = 1U;
        } else if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__start_core 
                = ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__start) 
                     | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT____Vcellout__u_trigger_key_iv_data_in_clear__q)) 
                    | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT____Vcellout__u_trigger_data_out_clear__q)) 
                   | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT____Vcellout__u_trigger_prng_reseed__q));
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__idle 
                = (1U & (~ ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__start_core) 
                            | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__prng_reseed_o) 
                               & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__prng_reseed_we_o)))));
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__idle_we = 1U;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__start_we 
                = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT____Vcellout__u_trigger_start__q) 
                   & ((0x20U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_mode__DOT__committed_q)) 
                      | (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_manual_operation__DOT__committed_q))));
            if ((1U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__start_core)))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__ctrl_we 
                    = ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__ctrl_err_storage)) 
                       & (0x0000003fU == (0x0000003fU 
                                          & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_ctrl_shadowed_key_len__DOT__we))))));
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__key_init_we 
                    = (0x0000ffffU & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_sideload__DOT__committed_q)
                                       ? (- (IData)(
                                                    ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__key_sideload_valid_i) 
                                                     & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_sideload__DOT__committed_q) 
                                                        & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__phase_o)) 
                                                           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__ctrl_we_q))))))
                                       : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_prim_buf_key_init_qe__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i)));
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__iv_we 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__iv_qe;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__key_init_clear 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__ctrl_we;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__iv_clear 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__ctrl_we;
            }
            if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT____Vcellout__u_trigger_prng_reseed__q) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__cipher_prng_reseed_out_buf = 1U;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__cipher_in_valid = 1U;
                if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__in_ready) {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__prng_reseed_done_d = 0U;
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__aes_ctrl_ns = 0x10U;
                }
            } else if (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT____Vcellout__u_trigger_key_iv_data_in_clear__q) 
                        | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT____Vcellout__u_trigger_data_out_clear__q))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__aes_ctrl_ns = 0x3dU;
            } else if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__start) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__cipher_dec_key_gen_out_buf 
                    = ((2U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_prim_buf_op__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i)) 
                       & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_key_init__DOT__new_q));
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__cipher_crypt_out_buf = 1U;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__cipher_prng_reseed_out_buf 
                    = (0U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__gen_block_ctr__DOT__block_ctr_q));
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__data_in_prev_sel 
                    = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_cbc_dec)
                        ? 3U : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT____VdfgExtracted_h8ba8d610__0));
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__data_in_prev_we 
                    = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_cbc_dec) 
                       | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_cfb_enc) 
                          | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_cfb_dec) 
                             | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_ofb) 
                                | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_ctr)))));
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__state_in_sel 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT____VdfgExtracted_h8ba8d610__0;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__add_state_in_sel 
                    = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_cbc_enc)
                        ? 4U : ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_cfb_enc)
                                 ? 4U : ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_cfb_dec)
                                          ? 4U : ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_ofb)
                                                   ? 4U
                                                   : 
                                                  ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_ctr)
                                                    ? 4U
                                                    : 3U)))));
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__cipher_in_valid = 1U;
                if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__in_ready) {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__start_we 
                        = (1U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__cipher_dec_key_gen_out_buf)));
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__aes_ctrl_ns = 0x23U;
                }
            }
        } else {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__aes_ctrl_ns = 0x17U;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__alert = 1U;
        }
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__aes_ctrl_ns = 0x17U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__alert = 1U;
    }
    if ((1U & ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__mux_sel_err) 
                 | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__sp_enc_err)) 
                | (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT____VdfgRegularize_hdf41bb1a_0_0))) 
               | ([&]() {
                        vlSelfRef.__Vfunc_lc_tx_test_true_loose__1433__val 
                            = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_prim_lc_sync.__PVT__lc_en;
                        vlSelfRef.__Vfunc_lc_tx_test_true_loose__1433__Vfuncout 
                            = (0x0aU != (IData)(vlSelfRef.__Vfunc_lc_tx_test_true_loose__1433__val));
                    }(), (IData)(vlSelfRef.__Vfunc_lc_tx_test_true_loose__1433__Vfuncout))))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__aes_ctrl_ns = 0x17U;
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__gen_block_ctr__DOT__block_ctr_d 
        = (0x00001fffU & (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__ctrl_we_q) 
                           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__block_ctr_decr) 
                              & ((0U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__gen_block_ctr__DOT__block_ctr_q)) 
                                 | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__prng_reseed_q))))
                           ? (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__gen_block_ctr__DOT__block_ctr_set_val)
                           : ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__gen_block_ctr__DOT__block_ctr_q) 
                              - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__block_ctr_decr))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_key_init__DOT____VdfgRegularize_hef06aaff_0_0 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__key_init_clear) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__key_init_load));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_iv__DOT____VdfgRegularize_heb2658fe_0_0 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__iv_clear) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__iv_load));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_ctr_fsm_i__DOT__u_aes_ctr_fsm__DOT__ctr_slice_idx_d 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_ctr_fsm_i__DOT__u_aes_ctr_fsm__DOT__ctr_slice_idx_q;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_ctr_fsm_i__DOT__u_aes_ctr_fsm__DOT__ctr_carry_d 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_ctr_fsm_i__DOT__u_aes_ctr_fsm__DOT__ctr_carry_q;
    if ((0x0eU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_ctr_fsm_i__DOT__u_aes_ctr_fsm__DOT__u_state_regs__DOT__state_raw))) {
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__ctr_incr) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_ctr_fsm_i__DOT__u_aes_ctr_fsm__DOT__ctr_slice_idx_d = 0U;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_ctr_fsm_i__DOT__u_aes_ctr_fsm__DOT__ctr_carry_d = 1U;
        }
    } else if ((0x18U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_ctr_fsm_i__DOT__u_aes_ctr_fsm__DOT__u_state_regs__DOT__state_raw))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_ctr_fsm_i__DOT__u_aes_ctr_fsm__DOT__ctr_slice_idx_d 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_ctr_fsm_i__DOT__u_aes_ctr_fsm__DOT__ctr_slice_idx_q)));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_ctr_fsm_i__DOT__u_aes_ctr_fsm__DOT__ctr_carry_d 
            = (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_ctr_fsm_i__DOT__u_aes_ctr_fsm__DOT__ctr_value 
                     >> 0x00000010U));
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__prng_reseed_we_o 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__prng_reseed_o)
            ? (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_ctrl_aux_shadowed_key_touch_forces_reseed.__PVT__committed_q)
            : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__prng_reseed_we));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT____VdfgRegularize_h201f8c2c_0_8 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__data_in_load) 
           | ((0x0000000fU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_prim_buf_data_in_qe__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i)) 
              | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__ctrl_we_q)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__output_valid_o 
        = ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__data_out_clear_we)) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__data_out_we));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__output_valid_we_o 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__data_out_we) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__data_out_read) 
              | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__ctrl_we_q) 
                 | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__data_out_clear_we))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_iv__DOT____VdfgRegularize_heb2658fe_0_1 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_iv__DOT__armed_q) 
           & (0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__iv_we)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__output_lost_we_o 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__ctrl_we) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__data_out_we));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__output_lost_o 
        = ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__ctrl_we)) 
           & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT____Vcellout__u_status_output_lost__q) 
              | ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__data_out_read)) 
                 & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__output_valid_q))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_key_init__DOT____VdfgRegularize_hef06aaff_0_1 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_key_init__DOT__armed_q) 
           & (0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__key_init_we)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1506 = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__prng_reseed_done_q) 
                                                   & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__cipher_out_ready));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1509 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1508) 
                                                   & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__cipher_out_ready));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__crypt 
        = (1U & (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__crypt_q_raw) 
                  >> 1U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__cipher_crypt_out_buf)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1646 = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__cipher_crypt_out_buf) 
                                                   | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__cipher_dec_key_gen_out_buf));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__data_in_new 
        = ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT____VdfgRegularize_h201f8c2c_0_8)) 
           & (0x0000000fU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT____VdfgRegularize_h201f8c2c_0_5)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_iv__DOT__armed_d 
        = ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_iv__DOT____VdfgRegularize_heb2658fe_0_0)) 
           & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_iv__DOT____VdfgRegularize_heb2658fe_0_1)) 
              & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__iv_arm) 
                 | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_iv__DOT__armed_q))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_iv__DOT____VdfgRegularize_heb2658fe_0_2 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_iv__DOT____VdfgRegularize_heb2658fe_0_1)
            ? (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__iv_we)
            : ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__iv_we) 
               | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_iv__DOT__we_q)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_key_init__DOT__armed_d 
        = ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_key_init__DOT____VdfgRegularize_hef06aaff_0_0)) 
           & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_key_init__DOT____VdfgRegularize_hef06aaff_0_1)) 
              & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__key_init_arm) 
                 | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_key_init__DOT__armed_q))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_key_init__DOT____VdfgRegularize_hef06aaff_0_2 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_key_init__DOT____VdfgRegularize_hef06aaff_0_1)
            ? (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__key_init_we)
            : ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__key_init_we) 
               | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_key_init__DOT__we_q)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_ctr 
        = ((0x10U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_mode__DOT__committed_q)) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__crypt));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_ofb 
        = ((8U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_mode__DOT__committed_q)) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__crypt));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT____VdfgRegularize_h201f8c2c_0_10 
        = ((1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_operation__DOT__committed_q)) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__crypt));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT____VdfgRegularize_h201f8c2c_0_9 
        = ((2U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_operation__DOT__committed_q)) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__crypt));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__start 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT____VdfgRegularize_h201f8c2c_0_4) 
           & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_manual_operation__DOT__committed_q)
               ? (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT____Vcellout__u_trigger_start__q)
               : (((1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_mode__DOT__committed_q)) 
                   | (((2U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_mode__DOT__committed_q)) 
                       & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_iv__DOT__new_q)) 
                      | (((4U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_mode__DOT__committed_q)) 
                          & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_iv__DOT__new_q)) 
                         | (((8U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_mode__DOT__committed_q)) 
                             & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_iv__DOT__new_q)) 
                            | ((0x10U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_mode__DOT__committed_q)) 
                               & ((0x0eU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_ctr_fsm_i__DOT__u_aes_ctr_fsm__DOT__u_state_regs__DOT__state_raw)) 
                                  & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_iv__DOT__new_q))))))) 
                  & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_key_init__DOT__clean_q) 
                     & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__data_in_new) 
                        & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_345))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__input_ready_we_o 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__data_in_new) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__data_in_load) 
              | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__data_in_we) 
                 | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__ctrl_we_q))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_iv__DOT__all_written 
        = ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_iv__DOT____VdfgRegularize_heb2658fe_0_0)) 
           & (0x000000ffU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_iv__DOT____VdfgRegularize_heb2658fe_0_2)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_key_init__DOT__all_written 
        = ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_key_init__DOT____VdfgRegularize_hef06aaff_0_0)) 
           & (0x0000ffffU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_key_init__DOT____VdfgRegularize_hef06aaff_0_2)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_iv__DOT__new_d 
        = ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_iv__DOT____VdfgRegularize_heb2658fe_0_0)) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_iv__DOT__all_written));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_iv__DOT__clean_d 
        = ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__iv_clear)) 
           & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_iv__DOT__all_written) 
              | ((~ ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_iv__DOT____VdfgRegularize_heb2658fe_0_0)) 
                     & (0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_iv__DOT____VdfgRegularize_heb2658fe_0_2)))) 
                 & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_iv__DOT__clean_q))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_key_init__DOT__clean_d 
        = ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__key_init_clear)) 
           & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_key_init__DOT__all_written) 
              | ((~ ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_key_init__DOT____VdfgRegularize_hef06aaff_0_0)) 
                     & (0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_key_init__DOT____VdfgRegularize_hef06aaff_0_2)))) 
                 & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_key_init__DOT__clean_q))));
}

void Vsim___024root___act_comb__TOP__52(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___act_comb__TOP__52\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__data_in_prev_sel = 4U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__data_in_prev_we = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__state_in_sel = 4U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__add_state_in_sel = 3U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__add_state_out_sel = 0x0eU;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__ctr_incr = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__cipher_in_valid = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__cipher_out_ready = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__cipher_out_done = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__cipher_crypt_out_buf = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__cipher_dec_key_gen_out_buf = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__cipher_prng_reseed_out_buf = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__cipher_key_clear_out_buf = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__cipher_data_out_clear_out_buf = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__key_init_sel 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_sideload__DOT__committed_q)
            ? 0x18U : 0x0eU);
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__key_init_we = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__iv_sel = 0x1dU;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__iv_we = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__ctrl_we = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__alert = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__prng_data_req = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__prng_reseed_req = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__start_we = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__key_iv_data_in_clear_we = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__data_out_clear_we = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__prng_reseed_we = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__idle = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__idle_we = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__stall = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__stall_we = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__data_in_load = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__data_in_we = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__data_out_we = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__key_init_clear = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__key_init_load = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__key_init_arm = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__iv_clear = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__iv_load = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__iv_arm = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__block_ctr_decr = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__aes_ctrl_ns 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__start_core = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__prng_reseed_done_d 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__prng_reseed_done_q) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__seed_en_i));
    if ((0x00000020U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
        if ((0x00000010U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
            if ((8U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
                if ((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
                    if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__aes_ctrl_ns = 0x17U;
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__alert = 1U;
                    } else if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
                        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_ctr) {
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__iv_sel = 0x3eU;
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__iv_we 
                                = (0x000000ffU & (~ 
                                                  (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__int_ctr_we 
                                                   >> 0x00000010U)));
                        } else {
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__iv_sel = 0x1dU;
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__iv_we = 0U;
                        }
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__prng_data_req = 1U;
                        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__prd_clearing_upd_ack) {
                            if ((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__crypt_q_raw))) {
                                if (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT____Vcellout__u_trigger_key_iv_data_in_clear__q) 
                                     | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT____Vcellout__u_trigger_data_out_clear__q))) {
                                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__cipher_key_clear_out_buf 
                                        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT____Vcellout__u_trigger_key_iv_data_in_clear__q;
                                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__cipher_data_out_clear_out_buf 
                                        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT____Vcellout__u_trigger_data_out_clear__q;
                                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__cipher_in_valid = 1U;
                                    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_cipher_control_fsm_i__DOT__in_ready) {
                                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__aes_ctrl_ns = 0x3aU;
                                    }
                                } else {
                                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__aes_ctrl_ns = 9U;
                                }
                            } else {
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__aes_ctrl_ns = 0x24U;
                            }
                        }
                    } else {
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__aes_ctrl_ns = 0x17U;
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__alert = 1U;
                    }
                } else if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__aes_ctrl_ns = 0x17U;
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__alert = 1U;
                    } else {
                        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT____Vcellout__u_trigger_key_iv_data_in_clear__q) {
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__key_init_sel = 1U;
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__key_init_we = 0xffffU;
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__key_init_clear = 1U;
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__iv_sel = 0x25U;
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__iv_we = 0xffU;
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__iv_clear = 1U;
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__data_in_we = 1U;
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__data_in_prev_sel = 4U;
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__data_in_prev_we = 1U;
                        }
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__aes_ctrl_ns = 0x0eU;
                    }
                } else {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__aes_ctrl_ns = 0x17U;
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__alert = 1U;
                }
            } else {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__aes_ctrl_ns = 0x17U;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__alert = 1U;
            }
        } else if ((8U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__aes_ctrl_ns = 0x17U;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__alert = 1U;
        } else if ((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
            if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__aes_ctrl_ns = 0x17U;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__alert = 1U;
            } else if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__aes_ctrl_ns = 0x17U;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__alert = 1U;
            } else if ((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__dec_key_gen_q_raw))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__cipher_out_done 
                    = (((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__finish) 
                          & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT____Vcellinp__u_aes_control_fsm__cipher_out_valid_i)) 
                         & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__mux_sel_err))) 
                        & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__sp_enc_err))) 
                       & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT____VdfgRegularize_hdf41bb1a_0_0));
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__cipher_out_ready 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__finish;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__stall 
                    = ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__finish)) 
                       & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT____Vcellinp__u_aes_control_fsm__cipher_out_valid_i));
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__stall_we = 1U;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__add_state_out_sel 
                    = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_cbc_dec)
                        ? 0x18U : ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_cfb_enc)
                                    ? 1U : ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_cfb_dec)
                                             ? 1U : 
                                            ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_ofb)
                                              ? 1U : 
                                             ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_ctr)
                                               ? 1U
                                               : 0x0eU)))));
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__iv_sel 
                    = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_cbc_enc)
                        ? 0x30U : ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_cbc_dec)
                                    ? 3U : ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_cfb_enc)
                                             ? 0x30U
                                             : ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_cfb_dec)
                                                 ? 3U
                                                 : 
                                                ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_ofb)
                                                  ? 8U
                                                  : 
                                                 ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_ctr)
                                                   ? 0x3eU
                                                   : 0x1dU))))));
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__iv_we 
                    = (0x000000ffU & ((((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_cbc_enc) 
                                          | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_cbc_dec)) 
                                         | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_cfb_enc)) 
                                        | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_cfb_dec)) 
                                       | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_ofb))
                                       ? (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__cipher_out_done)))
                                       : ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_ctr)
                                           ? (~ (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__int_ctr_we 
                                                 >> 0x00000010U))
                                           : 0U)));
                if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__cipher_out_done) {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__iv_arm 
                        = ((((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_cbc_enc) 
                               | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_cbc_dec)) 
                              | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_cfb_enc)) 
                             | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_cfb_dec)) 
                            | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_ofb)) 
                           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_ctr));
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__block_ctr_decr = 1U;
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__data_out_we = 1U;
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__aes_ctrl_ns = 9U;
                } else {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__iv_arm = 0U;
                }
            } else {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__cipher_out_ready = 1U;
                if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT____Vcellinp__u_aes_control_fsm__cipher_out_valid_i) {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__block_ctr_decr = 1U;
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__aes_ctrl_ns = 9U;
                }
            }
        } else if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
            if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__key_init_load 
                    = (1U & (~ ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__dec_key_gen_q_raw) 
                                >> 2U)));
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__key_init_arm 
                    = (1U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__dec_key_gen_q_raw) 
                             >> 2U));
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__iv_load 
                    = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__dec_key_gen_q_raw) 
                        >> 2U) & ((((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_cbc_enc) 
                                      | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_cbc_dec)) 
                                     | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_cfb_enc)) 
                                    | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_cfb_dec)) 
                                   | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_ofb)) 
                                  | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_ctr)));
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__data_in_load 
                    = (1U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__dec_key_gen_q_raw) 
                             >> 2U));
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__ctr_incr 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_ctr;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__aes_ctrl_ns 
                    = ((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__dec_key_gen_q_raw))
                        ? 0x3dU : 0x24U);
            } else {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__aes_ctrl_ns = 0x17U;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__alert = 1U;
            }
        } else {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__aes_ctrl_ns = 0x17U;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__alert = 1U;
        }
    } else if ((0x00000010U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
        if ((8U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__aes_ctrl_ns = 0x17U;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__alert = 1U;
        } else if ((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
            if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
                if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__alert = 1U;
                } else {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__aes_ctrl_ns = 0x17U;
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__alert = 1U;
                }
            } else {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__aes_ctrl_ns = 0x17U;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__alert = 1U;
            }
        } else if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__aes_ctrl_ns = 0x17U;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__alert = 1U;
        } else if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__aes_ctrl_ns = 0x17U;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__alert = 1U;
        } else {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__cipher_out_ready 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__prng_reseed_done_q;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__prng_reseed_req 
                = (1U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__prng_reseed_done_q)));
            if (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__cipher_out_ready) 
                 & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT____Vcellinp__u_aes_control_fsm__cipher_out_valid_i))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__prng_reseed_we = 1U;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__prng_reseed_done_d = 0U;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__aes_ctrl_ns = 9U;
            }
        }
    } else if ((8U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
        if ((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
            if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
                if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__aes_ctrl_ns = 0x17U;
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__alert = 1U;
                } else {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__cipher_out_ready = 1U;
                    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT____Vcellinp__u_aes_control_fsm__cipher_out_valid_i) {
                        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__key_clear_q) {
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__key_iv_data_in_clear_we = 1U;
                        }
                        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__data_out_clear_q) {
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__data_out_we 
                                = (((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__mux_sel_err)) 
                                    & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__sp_enc_err))) 
                                   & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT____VdfgRegularize_hdf41bb1a_0_0));
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__data_out_clear_we = 1U;
                        }
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__aes_ctrl_ns = 9U;
                    }
                }
            } else {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__aes_ctrl_ns = 0x17U;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__alert = 1U;
            }
        } else if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__aes_ctrl_ns = 0x17U;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__alert = 1U;
        } else if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_state_regs__DOT__state_raw))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__start_core 
                = ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__start) 
                     | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT____Vcellout__u_trigger_key_iv_data_in_clear__q)) 
                    | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT____Vcellout__u_trigger_data_out_clear__q)) 
                   | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT____Vcellout__u_trigger_prng_reseed__q));
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__idle 
                = (1U & (~ ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__start_core) 
                            | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__prng_reseed_o) 
                               & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__prng_reseed_we_o)))));
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__idle_we = 1U;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__start_we 
                = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT____Vcellout__u_trigger_start__q) 
                   & ((0x20U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_mode__DOT__committed_q)) 
                      | (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_manual_operation__DOT__committed_q))));
            if ((1U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__start_core)))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__ctrl_we 
                    = ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__ctrl_err_storage)) 
                       & (0x0000003fU == (0x0000003fU 
                                          & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_ctrl_shadowed_key_len__DOT__we))))));
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__key_init_we 
                    = (0x0000ffffU & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_sideload__DOT__committed_q)
                                       ? (- (IData)(
                                                    ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__key_sideload_valid_i) 
                                                     & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_sideload__DOT__committed_q) 
                                                        & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__phase_o)) 
                                                           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__ctrl_we_q))))))
                                       : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_prim_buf_key_init_qe__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i)));
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__iv_we 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__iv_qe;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__key_init_clear 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__ctrl_we;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__iv_clear 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__ctrl_we;
            }
            if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT____Vcellout__u_trigger_prng_reseed__q) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__cipher_prng_reseed_out_buf = 1U;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__cipher_in_valid = 1U;
                if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_cipher_control_fsm_i__DOT__in_ready) {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__prng_reseed_done_d = 0U;
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__aes_ctrl_ns = 0x10U;
                }
            } else if (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT____Vcellout__u_trigger_key_iv_data_in_clear__q) 
                        | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT____Vcellout__u_trigger_data_out_clear__q))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__aes_ctrl_ns = 0x3dU;
            } else if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__start) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__cipher_dec_key_gen_out_buf 
                    = ((2U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_prim_buf_op__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i)) 
                       & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_key_init__DOT__new_q));
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__cipher_crypt_out_buf = 1U;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__cipher_prng_reseed_out_buf 
                    = (0U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__gen_block_ctr__DOT__block_ctr_q));
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__data_in_prev_sel 
                    = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_cbc_dec)
                        ? 3U : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT____VdfgExtracted_h8ba8d610__0));
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__data_in_prev_we 
                    = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_cbc_dec) 
                       | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_cfb_enc) 
                          | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_cfb_dec) 
                             | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_ofb) 
                                | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_ctr)))));
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__state_in_sel 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT____VdfgExtracted_h8ba8d610__0;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__add_state_in_sel 
                    = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_cbc_enc)
                        ? 4U : ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_cfb_enc)
                                 ? 4U : ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_cfb_dec)
                                          ? 4U : ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_ofb)
                                                   ? 4U
                                                   : 
                                                  ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_ctr)
                                                    ? 4U
                                                    : 3U)))));
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__cipher_in_valid = 1U;
                if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_cipher_control_fsm_i__DOT__in_ready) {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__start_we 
                        = (1U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__cipher_dec_key_gen_out_buf)));
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__aes_ctrl_ns = 0x23U;
                }
            }
        } else {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__aes_ctrl_ns = 0x17U;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__alert = 1U;
        }
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__aes_ctrl_ns = 0x17U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__alert = 1U;
    }
    if ((1U & ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__mux_sel_err) 
                 | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__sp_enc_err)) 
                | (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT____VdfgRegularize_hdf41bb1a_0_0))) 
               | ([&]() {
                        vlSelfRef.__Vfunc_lc_tx_test_true_loose__1434__val 
                            = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_prim_lc_sync.__PVT__lc_en;
                        vlSelfRef.__Vfunc_lc_tx_test_true_loose__1434__Vfuncout 
                            = (0x0aU != (IData)(vlSelfRef.__Vfunc_lc_tx_test_true_loose__1434__val));
                    }(), (IData)(vlSelfRef.__Vfunc_lc_tx_test_true_loose__1434__Vfuncout))))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__aes_ctrl_ns = 0x17U;
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__gen_block_ctr__DOT__block_ctr_d 
        = (0x00001fffU & (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__ctrl_we_q) 
                           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__block_ctr_decr) 
                              & ((0U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__gen_block_ctr__DOT__block_ctr_q)) 
                                 | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__prng_reseed_q))))
                           ? (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__gen_block_ctr__DOT__block_ctr_set_val)
                           : ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__gen_block_ctr__DOT__block_ctr_q) 
                              - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__block_ctr_decr))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_key_init__DOT____VdfgRegularize_hef06aaff_0_0 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__key_init_clear) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__key_init_load));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_iv__DOT____VdfgRegularize_heb2658fe_0_0 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__iv_clear) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__iv_load));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_ctr_fsm_i__DOT__u_aes_ctr_fsm__DOT__ctr_slice_idx_d 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_ctr_fsm_i__DOT__u_aes_ctr_fsm__DOT__ctr_slice_idx_q;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_ctr_fsm_i__DOT__u_aes_ctr_fsm__DOT__ctr_carry_d 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_ctr_fsm_i__DOT__u_aes_ctr_fsm__DOT__ctr_carry_q;
    if ((0x0eU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_ctr_fsm_i__DOT__u_aes_ctr_fsm__DOT__u_state_regs__DOT__state_raw))) {
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__ctr_incr) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_ctr_fsm_i__DOT__u_aes_ctr_fsm__DOT__ctr_slice_idx_d = 0U;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_ctr_fsm_i__DOT__u_aes_ctr_fsm__DOT__ctr_carry_d = 1U;
        }
    } else if ((0x18U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_ctr_fsm_i__DOT__u_aes_ctr_fsm__DOT__u_state_regs__DOT__state_raw))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_ctr_fsm_i__DOT__u_aes_ctr_fsm__DOT__ctr_slice_idx_d 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_ctr_fsm_i__DOT__u_aes_ctr_fsm__DOT__ctr_slice_idx_q)));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_ctr_fsm_i__DOT__u_aes_ctr_fsm__DOT__ctr_carry_d 
            = (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_ctr_fsm_i__DOT__u_aes_ctr_fsm__DOT__ctr_value 
                     >> 0x00000010U));
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__prng_reseed_we_o 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__prng_reseed_o)
            ? (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_ctrl_aux_shadowed_key_touch_forces_reseed.__PVT__committed_q)
            : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__prng_reseed_we));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT____VdfgRegularize_h201f8c2c_0_8 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__data_in_load) 
           | ((0x0000000fU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_prim_buf_data_in_qe__DOT__u_secure_anchor_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i)) 
              | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__ctrl_we_q)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__output_valid_o 
        = ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__data_out_clear_we)) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__data_out_we));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__output_valid_we_o 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__data_out_we) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__data_out_read) 
              | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__ctrl_we_q) 
                 | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__data_out_clear_we))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_iv__DOT____VdfgRegularize_heb2658fe_0_1 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_iv__DOT__armed_q) 
           & (0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__iv_we)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__output_lost_we_o 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__ctrl_we) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__data_out_we));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__output_lost_o 
        = ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__ctrl_we)) 
           & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT____Vcellout__u_status_output_lost__q) 
              | ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__data_out_read)) 
                 & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__output_valid_q))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_key_init__DOT____VdfgRegularize_hef06aaff_0_1 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_key_init__DOT__armed_q) 
           & (0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__key_init_we)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1515 = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_cipher_control_fsm_i__DOT__u_aes_cipher_control_fsm__DOT__prng_reseed_done_q) 
                                                   & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__cipher_out_ready));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1518 = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1517) 
                                                   & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__cipher_out_ready));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__crypt 
        = (1U & ((~ ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__crypt_q_raw) 
                     >> 2U)) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__cipher_crypt_out_buf)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1631 = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__cipher_crypt_out_buf) 
                                                   | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__cipher_dec_key_gen_out_buf));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__data_in_new 
        = ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT____VdfgRegularize_h201f8c2c_0_8)) 
           & (0x0000000fU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT____VdfgRegularize_h201f8c2c_0_5)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_iv__DOT__armed_d 
        = ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_iv__DOT____VdfgRegularize_heb2658fe_0_0)) 
           & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_iv__DOT____VdfgRegularize_heb2658fe_0_1)) 
              & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__iv_arm) 
                 | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_iv__DOT__armed_q))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_iv__DOT____VdfgRegularize_heb2658fe_0_2 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_iv__DOT____VdfgRegularize_heb2658fe_0_1)
            ? (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__iv_we)
            : ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__iv_we) 
               | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_iv__DOT__we_q)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_key_init__DOT__armed_d 
        = ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_key_init__DOT____VdfgRegularize_hef06aaff_0_0)) 
           & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_key_init__DOT____VdfgRegularize_hef06aaff_0_1)) 
              & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__key_init_arm) 
                 | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_key_init__DOT__armed_q))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_key_init__DOT____VdfgRegularize_hef06aaff_0_2 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_key_init__DOT____VdfgRegularize_hef06aaff_0_1)
            ? (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__key_init_we)
            : ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__key_init_we) 
               | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_key_init__DOT__we_q)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_ctr 
        = ((0x10U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_mode__DOT__committed_q)) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__crypt));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_ofb 
        = ((8U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_mode__DOT__committed_q)) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__crypt));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT____VdfgRegularize_h201f8c2c_0_10 
        = ((1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_operation__DOT__committed_q)) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__crypt));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT____VdfgRegularize_h201f8c2c_0_9 
        = ((2U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_operation__DOT__committed_q)) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__crypt));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__start 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT____VdfgRegularize_h201f8c2c_0_4) 
           & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_manual_operation__DOT__committed_q)
               ? (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT____Vcellout__u_trigger_start__q)
               : (((1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_mode__DOT__committed_q)) 
                   | (((2U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_mode__DOT__committed_q)) 
                       & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_iv__DOT__new_q)) 
                      | (((4U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_mode__DOT__committed_q)) 
                          & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_iv__DOT__new_q)) 
                         | (((8U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_mode__DOT__committed_q)) 
                             & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_iv__DOT__new_q)) 
                            | ((0x10U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_mode__DOT__committed_q)) 
                               & ((0x0eU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_ctr__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_ctr_fsm_i__DOT__u_aes_ctr_fsm__DOT__u_state_regs__DOT__state_raw)) 
                                  & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_iv__DOT__new_q))))))) 
                  & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_key_init__DOT__clean_q) 
                     & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__data_in_new) 
                        & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_345))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__input_ready_we_o 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__data_in_new) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__data_in_load) 
              | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__data_in_we) 
                 | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__ctrl_we_q))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_iv__DOT__all_written 
        = ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_iv__DOT____VdfgRegularize_heb2658fe_0_0)) 
           & (0x000000ffU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_iv__DOT____VdfgRegularize_heb2658fe_0_2)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_key_init__DOT__all_written 
        = ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_key_init__DOT____VdfgRegularize_hef06aaff_0_0)) 
           & (0x0000ffffU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_key_init__DOT____VdfgRegularize_hef06aaff_0_2)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_iv__DOT__new_d 
        = ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_iv__DOT____VdfgRegularize_heb2658fe_0_0)) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_iv__DOT__all_written));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_iv__DOT__clean_d 
        = ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__iv_clear)) 
           & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_iv__DOT__all_written) 
              | ((~ ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_iv__DOT____VdfgRegularize_heb2658fe_0_0)) 
                     & (0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_iv__DOT____VdfgRegularize_heb2658fe_0_2)))) 
                 & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_iv__DOT__clean_q))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_key_init__DOT__clean_d 
        = ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__key_init_clear)) 
           & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_key_init__DOT__all_written) 
              | ((~ ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_key_init__DOT____VdfgRegularize_hef06aaff_0_0)) 
                     & (0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_key_init__DOT____VdfgRegularize_hef06aaff_0_2)))) 
                 & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_key_init__DOT__clean_q))));
}
