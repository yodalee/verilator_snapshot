// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

void Vsim___024root___act_sequent__TOP__13(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___act_sequent__TOP__13\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*63:0*/ __Vfunc_perm_64bit__122__Vfuncout;
    __Vfunc_perm_64bit__122__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_perm_64bit__122__state_in;
    __Vfunc_perm_64bit__122__state_in = 0;
    QData/*63:0*/ __Vfunc_sbox4_64bit__123__Vfuncout;
    __Vfunc_sbox4_64bit__123__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_sbox4_64bit__123__state_in;
    __Vfunc_sbox4_64bit__123__state_in = 0;
    CData/*7:0*/ __Vfunc_sbox4_8bit__124__Vfuncout;
    __Vfunc_sbox4_8bit__124__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_sbox4_8bit__124__state_in;
    __Vfunc_sbox4_8bit__124__state_in = 0;
    VlWide<4>/*127:0*/ __Vfunc_present_inv_update_key128__125__Vfuncout;
    VL_ZERO_W(128, __Vfunc_present_inv_update_key128__125__Vfuncout);
    VlWide<4>/*127:0*/ __Vfunc_present_inv_update_key128__125__key_in;
    VL_ZERO_W(128, __Vfunc_present_inv_update_key128__125__key_in);
    CData/*4:0*/ __Vfunc_present_inv_update_key128__125__round_idx;
    __Vfunc_present_inv_update_key128__125__round_idx = 0;
    VlWide<4>/*127:0*/ __Vfunc_present_inv_update_key128__125__key_out;
    VL_ZERO_W(128, __Vfunc_present_inv_update_key128__125__key_out);
    CData/*31:0*/ __Vtemp_1;
    VlWide<4>/*127:0*/ __Vtemp_4;
    // Body
    __Vfunc_present_inv_update_key128__125__round_idx 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_scrmbl__DOT__idx_state_q;
    __Vfunc_present_inv_update_key128__125__key_in[0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_scrmbl__DOT__u_prim_present_dec__DOT__round_key[0U];
    __Vfunc_present_inv_update_key128__125__key_in[1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_scrmbl__DOT__u_prim_present_dec__DOT__round_key[1U];
    __Vfunc_present_inv_update_key128__125__key_in[2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_scrmbl__DOT__u_prim_present_dec__DOT__round_key[2U];
    __Vfunc_present_inv_update_key128__125__key_in[3U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_scrmbl__DOT__u_prim_present_dec__DOT__round_key[3U];
    __Vfunc_present_inv_update_key128__125__key_out[0U] 
        = __Vfunc_present_inv_update_key128__125__key_in[0U];
    __Vfunc_present_inv_update_key128__125__key_out[1U] 
        = __Vfunc_present_inv_update_key128__125__key_in[1U];
    __Vfunc_present_inv_update_key128__125__key_out[2U] 
        = __Vfunc_present_inv_update_key128__125__key_in[2U];
    __Vfunc_present_inv_update_key128__125__key_out[3U] 
        = __Vfunc_present_inv_update_key128__125__key_in[3U];
    __Vtemp_1 = (0x0000001fU & (((__Vfunc_present_inv_update_key128__125__key_out[2U] 
                                  << 2U) | (__Vfunc_present_inv_update_key128__125__key_out[1U] 
                                            >> 0x0000001eU)) 
                                ^ (IData)(__Vfunc_present_inv_update_key128__125__round_idx)));
    __Vfunc_present_inv_update_key128__125__key_out[1U] 
        = ((0x3fffffffU & __Vfunc_present_inv_update_key128__125__key_out[1U]) 
           | ((((__Vfunc_present_inv_update_key128__125__key_out[2U] 
                 << 2U) | (__Vfunc_present_inv_update_key128__125__key_out[1U] 
                           >> 0x0000001eU)) ^ (IData)(__Vfunc_present_inv_update_key128__125__round_idx)) 
              << 0x0000001eU));
    __Vfunc_present_inv_update_key128__125__key_out[2U] 
        = ((0xfffffff8U & __Vfunc_present_inv_update_key128__125__key_out[2U]) 
           | (__Vtemp_1 >> 2U));
    __Vfunc_present_inv_update_key128__125__key_out[3U] 
        = ((0xf0ffffffU & __Vfunc_present_inv_update_key128__125__key_out[3U]) 
           | (0x0f000000U & ((IData)((0xa970364bd21c8fe5ULL 
                                      >> (0x0000003fU 
                                          & VL_SHIFTL_III(6,32,32, 
                                                          (0x0000000fU 
                                                           & (__Vfunc_present_inv_update_key128__125__key_out[3U] 
                                                              >> 0x00000018U)), 2U)))) 
                             << 0x00000018U)));
    __Vfunc_present_inv_update_key128__125__key_out[3U] 
        = ((0x0fffffffU & __Vfunc_present_inv_update_key128__125__key_out[3U]) 
           | ((IData)((0xa970364bd21c8fe5ULL >> (0x0000003fU 
                                                 & VL_SHIFTL_III(6,32,32, 
                                                                 (__Vfunc_present_inv_update_key128__125__key_out[3U] 
                                                                  >> 0x0000001cU), 2U)))) 
              << 0x0000001cU));
    __Vtemp_4[1U] = ((__Vfunc_present_inv_update_key128__125__key_out[3U] 
                      << 3U) | (__Vfunc_present_inv_update_key128__125__key_out[2U] 
                                >> 0x0000001dU));
    __Vtemp_4[2U] = (((IData)((0x1fffffffffffffffULL 
                               & (((QData)((IData)(
                                                   __Vfunc_present_inv_update_key128__125__key_out[1U])) 
                                   << 0x00000020U) 
                                  | (QData)((IData)(
                                                    __Vfunc_present_inv_update_key128__125__key_out[0U]))))) 
                      << 3U) | (__Vfunc_present_inv_update_key128__125__key_out[3U] 
                                >> 0x0000001dU));
    __Vtemp_4[3U] = (((IData)((0x1fffffffffffffffULL 
                               & (((QData)((IData)(
                                                   __Vfunc_present_inv_update_key128__125__key_out[1U])) 
                                   << 0x00000020U) 
                                  | (QData)((IData)(
                                                    __Vfunc_present_inv_update_key128__125__key_out[0U]))))) 
                      >> 0x0000001dU) | ((IData)(((0x1fffffffffffffffULL 
                                                   & (((QData)((IData)(
                                                                       __Vfunc_present_inv_update_key128__125__key_out[1U])) 
                                                       << 0x00000020U) 
                                                      | (QData)((IData)(
                                                                        __Vfunc_present_inv_update_key128__125__key_out[0U])))) 
                                                  >> 0x00000020U)) 
                                         << 3U));
    __Vfunc_present_inv_update_key128__125__key_out[0U] 
        = ((__Vfunc_present_inv_update_key128__125__key_out[2U] 
            << 3U) | (__Vfunc_present_inv_update_key128__125__key_out[1U] 
                      >> 0x0000001dU));
    __Vfunc_present_inv_update_key128__125__key_out[1U] 
        = __Vtemp_4[1U];
    __Vfunc_present_inv_update_key128__125__key_out[2U] 
        = __Vtemp_4[2U];
    __Vfunc_present_inv_update_key128__125__key_out[3U] 
        = __Vtemp_4[3U];
    __Vfunc_present_inv_update_key128__125__Vfuncout[0U] 
        = __Vfunc_present_inv_update_key128__125__key_out[0U];
    __Vfunc_present_inv_update_key128__125__Vfuncout[1U] 
        = __Vfunc_present_inv_update_key128__125__key_out[1U];
    __Vfunc_present_inv_update_key128__125__Vfuncout[2U] 
        = __Vfunc_present_inv_update_key128__125__key_out[2U];
    __Vfunc_present_inv_update_key128__125__Vfuncout[3U] 
        = __Vfunc_present_inv_update_key128__125__key_out[3U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_scrmbl__DOT__u_prim_present_dec__DOT__round_key[4U] 
        = __Vfunc_present_inv_update_key128__125__Vfuncout[0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_scrmbl__DOT__u_prim_present_dec__DOT__round_key[5U] 
        = __Vfunc_present_inv_update_key128__125__Vfuncout[1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_scrmbl__DOT__u_prim_present_dec__DOT__round_key[6U] 
        = __Vfunc_present_inv_update_key128__125__Vfuncout[2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_scrmbl__DOT__u_prim_present_dec__DOT__round_key[7U] 
        = __Vfunc_present_inv_update_key128__125__Vfuncout[3U];
    __Vfunc_perm_64bit__122__state_in = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_scrmbl__DOT__data_state_q 
                                         ^ (((QData)((IData)(
                                                             vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_scrmbl__DOT__u_prim_present_dec__DOT__round_key[3U])) 
                                             << 0x00000020U) 
                                            | (QData)((IData)(
                                                              vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_scrmbl__DOT__u_prim_present_dec__DOT__round_key[2U]))));
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__Vfunc_perm_64bit__122__state_out = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 15457852723142372150ull);
    vlSelfRef.__Vfunc_perm_64bit__122__state_out = 
        ((0xfffffffffffffffeULL & vlSelfRef.__Vfunc_perm_64bit__122__state_out) 
         | (IData)((IData)((1U & (IData)(__Vfunc_perm_64bit__122__state_in)))));
    vlSelfRef.__Vfunc_perm_64bit__122__state_out = 
        ((0xffffffffffffffefULL & vlSelfRef.__Vfunc_perm_64bit__122__state_out) 
         | ((QData)((IData)((1U & (IData)((__Vfunc_perm_64bit__122__state_in 
                                           >> 1U))))) 
            << 4U));
    vlSelfRef.__Vfunc_perm_64bit__122__state_out = 
        ((0xfffffffffffffeffULL & vlSelfRef.__Vfunc_perm_64bit__122__state_out) 
         | ((QData)((IData)((1U & (IData)((__Vfunc_perm_64bit__122__state_in 
                                           >> 2U))))) 
            << 8U));
    vlSelfRef.__Vfunc_perm_64bit__122__state_out = 
        ((0xffffffffffffefffULL & vlSelfRef.__Vfunc_perm_64bit__122__state_out) 
         | ((QData)((IData)((1U & (IData)((__Vfunc_perm_64bit__122__state_in 
                                           >> 3U))))) 
            << 0x0000000cU));
    vlSelfRef.__Vfunc_perm_64bit__122__state_out = 
        ((0xfffffffffffeffffULL & vlSelfRef.__Vfunc_perm_64bit__122__state_out) 
         | ((QData)((IData)((1U & (IData)((__Vfunc_perm_64bit__122__state_in 
                                           >> 4U))))) 
            << 0x00000010U));
    vlSelfRef.__Vfunc_perm_64bit__122__state_out = 
        ((0xffffffffffefffffULL & vlSelfRef.__Vfunc_perm_64bit__122__state_out) 
         | ((QData)((IData)((1U & (IData)((__Vfunc_perm_64bit__122__state_in 
                                           >> 5U))))) 
            << 0x00000014U));
    vlSelfRef.__Vfunc_perm_64bit__122__state_out = 
        ((0xfffffffffeffffffULL & vlSelfRef.__Vfunc_perm_64bit__122__state_out) 
         | ((QData)((IData)((1U & (IData)((__Vfunc_perm_64bit__122__state_in 
                                           >> 6U))))) 
            << 0x00000018U));
    vlSelfRef.__Vfunc_perm_64bit__122__state_out = 
        ((0xffffffffefffffffULL & vlSelfRef.__Vfunc_perm_64bit__122__state_out) 
         | ((QData)((IData)((1U & (IData)((__Vfunc_perm_64bit__122__state_in 
                                           >> 7U))))) 
            << 0x0000001cU));
    vlSelfRef.__Vfunc_perm_64bit__122__state_out = 
        ((0xfffffffeffffffffULL & vlSelfRef.__Vfunc_perm_64bit__122__state_out) 
         | ((QData)((IData)((1U & (IData)((__Vfunc_perm_64bit__122__state_in 
                                           >> 8U))))) 
            << 0x00000020U));
    vlSelfRef.__Vfunc_perm_64bit__122__state_out = 
        ((0xffffffefffffffffULL & vlSelfRef.__Vfunc_perm_64bit__122__state_out) 
         | ((QData)((IData)((1U & (IData)((__Vfunc_perm_64bit__122__state_in 
                                           >> 9U))))) 
            << 0x00000024U));
    vlSelfRef.__Vfunc_perm_64bit__122__state_out = 
        ((0xfffffeffffffffffULL & vlSelfRef.__Vfunc_perm_64bit__122__state_out) 
         | ((QData)((IData)((1U & (IData)((__Vfunc_perm_64bit__122__state_in 
                                           >> 0x0aU))))) 
            << 0x00000028U));
    vlSelfRef.__Vfunc_perm_64bit__122__state_out = 
        ((0xffffefffffffffffULL & vlSelfRef.__Vfunc_perm_64bit__122__state_out) 
         | ((QData)((IData)((1U & (IData)((__Vfunc_perm_64bit__122__state_in 
                                           >> 0x0bU))))) 
            << 0x0000002cU));
    vlSelfRef.__Vfunc_perm_64bit__122__state_out = 
        ((0xfffeffffffffffffULL & vlSelfRef.__Vfunc_perm_64bit__122__state_out) 
         | ((QData)((IData)((1U & (IData)((__Vfunc_perm_64bit__122__state_in 
                                           >> 0x0cU))))) 
            << 0x00000030U));
    vlSelfRef.__Vfunc_perm_64bit__122__state_out = 
        ((0xffefffffffffffffULL & vlSelfRef.__Vfunc_perm_64bit__122__state_out) 
         | ((QData)((IData)((1U & (IData)((__Vfunc_perm_64bit__122__state_in 
                                           >> 0x0dU))))) 
            << 0x00000034U));
    vlSelfRef.__Vfunc_perm_64bit__122__state_out = 
        ((0xfeffffffffffffffULL & vlSelfRef.__Vfunc_perm_64bit__122__state_out) 
         | ((QData)((IData)((1U & (IData)((__Vfunc_perm_64bit__122__state_in 
                                           >> 0x0eU))))) 
            << 0x00000038U));
    vlSelfRef.__Vfunc_perm_64bit__122__state_out = 
        ((0xefffffffffffffffULL & vlSelfRef.__Vfunc_perm_64bit__122__state_out) 
         | ((QData)((IData)((1U & (IData)((__Vfunc_perm_64bit__122__state_in 
                                           >> 0x0fU))))) 
            << 0x0000003cU));
    vlSelfRef.__Vfunc_perm_64bit__122__state_out = 
        ((0xfffffffffffffffdULL & vlSelfRef.__Vfunc_perm_64bit__122__state_out) 
         | ((QData)((IData)((1U & (IData)((__Vfunc_perm_64bit__122__state_in 
                                           >> 0x10U))))) 
            << 1U));
    vlSelfRef.__Vfunc_perm_64bit__122__state_out = 
        ((0xffffffffffffffdfULL & vlSelfRef.__Vfunc_perm_64bit__122__state_out) 
         | ((QData)((IData)((1U & (IData)((__Vfunc_perm_64bit__122__state_in 
                                           >> 0x11U))))) 
            << 5U));
    vlSelfRef.__Vfunc_perm_64bit__122__state_out = 
        ((0xfffffffffffffdffULL & vlSelfRef.__Vfunc_perm_64bit__122__state_out) 
         | ((QData)((IData)((1U & (IData)((__Vfunc_perm_64bit__122__state_in 
                                           >> 0x12U))))) 
            << 9U));
    vlSelfRef.__Vfunc_perm_64bit__122__state_out = 
        ((0xffffffffffffdfffULL & vlSelfRef.__Vfunc_perm_64bit__122__state_out) 
         | ((QData)((IData)((1U & (IData)((__Vfunc_perm_64bit__122__state_in 
                                           >> 0x13U))))) 
            << 0x0000000dU));
    vlSelfRef.__Vfunc_perm_64bit__122__state_out = 
        ((0xfffffffffffdffffULL & vlSelfRef.__Vfunc_perm_64bit__122__state_out) 
         | ((QData)((IData)((1U & (IData)((__Vfunc_perm_64bit__122__state_in 
                                           >> 0x14U))))) 
            << 0x00000011U));
    vlSelfRef.__Vfunc_perm_64bit__122__state_out = 
        ((0xffffffffffdfffffULL & vlSelfRef.__Vfunc_perm_64bit__122__state_out) 
         | ((QData)((IData)((1U & (IData)((__Vfunc_perm_64bit__122__state_in 
                                           >> 0x15U))))) 
            << 0x00000015U));
    vlSelfRef.__Vfunc_perm_64bit__122__state_out = 
        ((0xfffffffffdffffffULL & vlSelfRef.__Vfunc_perm_64bit__122__state_out) 
         | ((QData)((IData)((1U & (IData)((__Vfunc_perm_64bit__122__state_in 
                                           >> 0x16U))))) 
            << 0x00000019U));
    vlSelfRef.__Vfunc_perm_64bit__122__state_out = 
        ((0xffffffffdfffffffULL & vlSelfRef.__Vfunc_perm_64bit__122__state_out) 
         | ((QData)((IData)((1U & (IData)((__Vfunc_perm_64bit__122__state_in 
                                           >> 0x17U))))) 
            << 0x0000001dU));
    vlSelfRef.__Vfunc_perm_64bit__122__state_out = 
        ((0xfffffffdffffffffULL & vlSelfRef.__Vfunc_perm_64bit__122__state_out) 
         | ((QData)((IData)((1U & (IData)((__Vfunc_perm_64bit__122__state_in 
                                           >> 0x18U))))) 
            << 0x00000021U));
    vlSelfRef.__Vfunc_perm_64bit__122__state_out = 
        ((0xffffffdfffffffffULL & vlSelfRef.__Vfunc_perm_64bit__122__state_out) 
         | ((QData)((IData)((1U & (IData)((__Vfunc_perm_64bit__122__state_in 
                                           >> 0x19U))))) 
            << 0x00000025U));
    vlSelfRef.__Vfunc_perm_64bit__122__state_out = 
        ((0xfffffdffffffffffULL & vlSelfRef.__Vfunc_perm_64bit__122__state_out) 
         | ((QData)((IData)((1U & (IData)((__Vfunc_perm_64bit__122__state_in 
                                           >> 0x1aU))))) 
            << 0x00000029U));
    vlSelfRef.__Vfunc_perm_64bit__122__state_out = 
        ((0xffffdfffffffffffULL & vlSelfRef.__Vfunc_perm_64bit__122__state_out) 
         | ((QData)((IData)((1U & (IData)((__Vfunc_perm_64bit__122__state_in 
                                           >> 0x1bU))))) 
            << 0x0000002dU));
    vlSelfRef.__Vfunc_perm_64bit__122__state_out = 
        ((0xfffdffffffffffffULL & vlSelfRef.__Vfunc_perm_64bit__122__state_out) 
         | ((QData)((IData)((1U & (IData)((__Vfunc_perm_64bit__122__state_in 
                                           >> 0x1cU))))) 
            << 0x00000031U));
    vlSelfRef.__Vfunc_perm_64bit__122__state_out = 
        ((0xffdfffffffffffffULL & vlSelfRef.__Vfunc_perm_64bit__122__state_out) 
         | ((QData)((IData)((1U & (IData)((__Vfunc_perm_64bit__122__state_in 
                                           >> 0x1dU))))) 
            << 0x00000035U));
    vlSelfRef.__Vfunc_perm_64bit__122__state_out = 
        ((0xfdffffffffffffffULL & vlSelfRef.__Vfunc_perm_64bit__122__state_out) 
         | ((QData)((IData)((1U & (IData)((__Vfunc_perm_64bit__122__state_in 
                                           >> 0x1eU))))) 
            << 0x00000039U));
    vlSelfRef.__Vfunc_perm_64bit__122__state_out = 
        ((0xdfffffffffffffffULL & vlSelfRef.__Vfunc_perm_64bit__122__state_out) 
         | ((QData)((IData)((1U & (IData)((__Vfunc_perm_64bit__122__state_in 
                                           >> 0x1fU))))) 
            << 0x0000003dU));
    vlSelfRef.__Vfunc_perm_64bit__122__state_out = 
        ((0xfffffffffffffffbULL & vlSelfRef.__Vfunc_perm_64bit__122__state_out) 
         | ((QData)((IData)((1U & (IData)((__Vfunc_perm_64bit__122__state_in 
                                           >> 0x20U))))) 
            << 2U));
    vlSelfRef.__Vfunc_perm_64bit__122__state_out = 
        ((0xffffffffffffffbfULL & vlSelfRef.__Vfunc_perm_64bit__122__state_out) 
         | ((QData)((IData)((1U & (IData)((__Vfunc_perm_64bit__122__state_in 
                                           >> 0x21U))))) 
            << 6U));
    vlSelfRef.__Vfunc_perm_64bit__122__state_out = 
        ((0xfffffffffffffbffULL & vlSelfRef.__Vfunc_perm_64bit__122__state_out) 
         | ((QData)((IData)((1U & (IData)((__Vfunc_perm_64bit__122__state_in 
                                           >> 0x22U))))) 
            << 0x0000000aU));
    vlSelfRef.__Vfunc_perm_64bit__122__state_out = 
        ((0xffffffffffffbfffULL & vlSelfRef.__Vfunc_perm_64bit__122__state_out) 
         | ((QData)((IData)((1U & (IData)((__Vfunc_perm_64bit__122__state_in 
                                           >> 0x23U))))) 
            << 0x0000000eU));
    vlSelfRef.__Vfunc_perm_64bit__122__state_out = 
        ((0xfffffffffffbffffULL & vlSelfRef.__Vfunc_perm_64bit__122__state_out) 
         | ((QData)((IData)((1U & (IData)((__Vfunc_perm_64bit__122__state_in 
                                           >> 0x24U))))) 
            << 0x00000012U));
    vlSelfRef.__Vfunc_perm_64bit__122__state_out = 
        ((0xffffffffffbfffffULL & vlSelfRef.__Vfunc_perm_64bit__122__state_out) 
         | ((QData)((IData)((1U & (IData)((__Vfunc_perm_64bit__122__state_in 
                                           >> 0x25U))))) 
            << 0x00000016U));
    vlSelfRef.__Vfunc_perm_64bit__122__state_out = 
        ((0xfffffffffbffffffULL & vlSelfRef.__Vfunc_perm_64bit__122__state_out) 
         | ((QData)((IData)((1U & (IData)((__Vfunc_perm_64bit__122__state_in 
                                           >> 0x26U))))) 
            << 0x0000001aU));
    vlSelfRef.__Vfunc_perm_64bit__122__state_out = 
        ((0xffffffffbfffffffULL & vlSelfRef.__Vfunc_perm_64bit__122__state_out) 
         | ((QData)((IData)((1U & (IData)((__Vfunc_perm_64bit__122__state_in 
                                           >> 0x27U))))) 
            << 0x0000001eU));
    vlSelfRef.__Vfunc_perm_64bit__122__state_out = 
        ((0xfffffffbffffffffULL & vlSelfRef.__Vfunc_perm_64bit__122__state_out) 
         | ((QData)((IData)((1U & (IData)((__Vfunc_perm_64bit__122__state_in 
                                           >> 0x28U))))) 
            << 0x00000022U));
    vlSelfRef.__Vfunc_perm_64bit__122__state_out = 
        ((0xffffffbfffffffffULL & vlSelfRef.__Vfunc_perm_64bit__122__state_out) 
         | ((QData)((IData)((1U & (IData)((__Vfunc_perm_64bit__122__state_in 
                                           >> 0x29U))))) 
            << 0x00000026U));
    vlSelfRef.__Vfunc_perm_64bit__122__state_out = 
        ((0xfffffbffffffffffULL & vlSelfRef.__Vfunc_perm_64bit__122__state_out) 
         | ((QData)((IData)((1U & (IData)((__Vfunc_perm_64bit__122__state_in 
                                           >> 0x2aU))))) 
            << 0x0000002aU));
    vlSelfRef.__Vfunc_perm_64bit__122__state_out = 
        ((0xffffbfffffffffffULL & vlSelfRef.__Vfunc_perm_64bit__122__state_out) 
         | ((QData)((IData)((1U & (IData)((__Vfunc_perm_64bit__122__state_in 
                                           >> 0x2bU))))) 
            << 0x0000002eU));
    vlSelfRef.__Vfunc_perm_64bit__122__state_out = 
        ((0xfffbffffffffffffULL & vlSelfRef.__Vfunc_perm_64bit__122__state_out) 
         | ((QData)((IData)((1U & (IData)((__Vfunc_perm_64bit__122__state_in 
                                           >> 0x2cU))))) 
            << 0x00000032U));
    vlSelfRef.__Vfunc_perm_64bit__122__state_out = 
        ((0xffbfffffffffffffULL & vlSelfRef.__Vfunc_perm_64bit__122__state_out) 
         | ((QData)((IData)((1U & (IData)((__Vfunc_perm_64bit__122__state_in 
                                           >> 0x2dU))))) 
            << 0x00000036U));
    vlSelfRef.__Vfunc_perm_64bit__122__state_out = 
        ((0xfbffffffffffffffULL & vlSelfRef.__Vfunc_perm_64bit__122__state_out) 
         | ((QData)((IData)((1U & (IData)((__Vfunc_perm_64bit__122__state_in 
                                           >> 0x2eU))))) 
            << 0x0000003aU));
    vlSelfRef.__Vfunc_perm_64bit__122__state_out = 
        ((0xbfffffffffffffffULL & vlSelfRef.__Vfunc_perm_64bit__122__state_out) 
         | ((QData)((IData)((1U & (IData)((__Vfunc_perm_64bit__122__state_in 
                                           >> 0x2fU))))) 
            << 0x0000003eU));
    vlSelfRef.__Vfunc_perm_64bit__122__state_out = 
        ((0xfffffffffffffff7ULL & vlSelfRef.__Vfunc_perm_64bit__122__state_out) 
         | ((QData)((IData)((1U & (IData)((__Vfunc_perm_64bit__122__state_in 
                                           >> 0x30U))))) 
            << 3U));
    vlSelfRef.__Vfunc_perm_64bit__122__state_out = 
        ((0xffffffffffffff7fULL & vlSelfRef.__Vfunc_perm_64bit__122__state_out) 
         | ((QData)((IData)((1U & (IData)((__Vfunc_perm_64bit__122__state_in 
                                           >> 0x31U))))) 
            << 7U));
    vlSelfRef.__Vfunc_perm_64bit__122__state_out = 
        ((0xfffffffffffff7ffULL & vlSelfRef.__Vfunc_perm_64bit__122__state_out) 
         | ((QData)((IData)((1U & (IData)((__Vfunc_perm_64bit__122__state_in 
                                           >> 0x32U))))) 
            << 0x0000000bU));
    vlSelfRef.__Vfunc_perm_64bit__122__state_out = 
        ((0xffffffffffff7fffULL & vlSelfRef.__Vfunc_perm_64bit__122__state_out) 
         | ((QData)((IData)((1U & (IData)((__Vfunc_perm_64bit__122__state_in 
                                           >> 0x33U))))) 
            << 0x0000000fU));
    vlSelfRef.__Vfunc_perm_64bit__122__state_out = 
        ((0xfffffffffff7ffffULL & vlSelfRef.__Vfunc_perm_64bit__122__state_out) 
         | ((QData)((IData)((1U & (IData)((__Vfunc_perm_64bit__122__state_in 
                                           >> 0x34U))))) 
            << 0x00000013U));
    vlSelfRef.__Vfunc_perm_64bit__122__state_out = 
        ((0xffffffffff7fffffULL & vlSelfRef.__Vfunc_perm_64bit__122__state_out) 
         | ((QData)((IData)((1U & (IData)((__Vfunc_perm_64bit__122__state_in 
                                           >> 0x35U))))) 
            << 0x00000017U));
    vlSelfRef.__Vfunc_perm_64bit__122__state_out = 
        ((0xfffffffff7ffffffULL & vlSelfRef.__Vfunc_perm_64bit__122__state_out) 
         | ((QData)((IData)((1U & (IData)((__Vfunc_perm_64bit__122__state_in 
                                           >> 0x36U))))) 
            << 0x0000001bU));
    vlSelfRef.__Vfunc_perm_64bit__122__state_out = 
        ((0xffffffff7fffffffULL & vlSelfRef.__Vfunc_perm_64bit__122__state_out) 
         | ((QData)((IData)((1U & (IData)((__Vfunc_perm_64bit__122__state_in 
                                           >> 0x37U))))) 
            << 0x0000001fU));
    vlSelfRef.__Vfunc_perm_64bit__122__state_out = 
        ((0xfffffff7ffffffffULL & vlSelfRef.__Vfunc_perm_64bit__122__state_out) 
         | ((QData)((IData)((1U & (IData)((__Vfunc_perm_64bit__122__state_in 
                                           >> 0x38U))))) 
            << 0x00000023U));
    vlSelfRef.__Vfunc_perm_64bit__122__state_out = 
        ((0xffffff7fffffffffULL & vlSelfRef.__Vfunc_perm_64bit__122__state_out) 
         | ((QData)((IData)((1U & (IData)((__Vfunc_perm_64bit__122__state_in 
                                           >> 0x39U))))) 
            << 0x00000027U));
    vlSelfRef.__Vfunc_perm_64bit__122__state_out = 
        ((0xfffff7ffffffffffULL & vlSelfRef.__Vfunc_perm_64bit__122__state_out) 
         | ((QData)((IData)((1U & (IData)((__Vfunc_perm_64bit__122__state_in 
                                           >> 0x3aU))))) 
            << 0x0000002bU));
    vlSelfRef.__Vfunc_perm_64bit__122__state_out = 
        ((0xffff7fffffffffffULL & vlSelfRef.__Vfunc_perm_64bit__122__state_out) 
         | ((QData)((IData)((1U & (IData)((__Vfunc_perm_64bit__122__state_in 
                                           >> 0x3bU))))) 
            << 0x0000002fU));
    vlSelfRef.__Vfunc_perm_64bit__122__state_out = 
        ((0xfff7ffffffffffffULL & vlSelfRef.__Vfunc_perm_64bit__122__state_out) 
         | ((QData)((IData)((1U & (IData)((__Vfunc_perm_64bit__122__state_in 
                                           >> 0x3cU))))) 
            << 0x00000033U));
    vlSelfRef.__Vfunc_perm_64bit__122__state_out = 
        ((0xff7fffffffffffffULL & vlSelfRef.__Vfunc_perm_64bit__122__state_out) 
         | ((QData)((IData)((1U & (IData)((__Vfunc_perm_64bit__122__state_in 
                                           >> 0x3dU))))) 
            << 0x00000037U));
    vlSelfRef.__Vfunc_perm_64bit__122__state_out = 
        ((0xf7ffffffffffffffULL & vlSelfRef.__Vfunc_perm_64bit__122__state_out) 
         | ((QData)((IData)((1U & (IData)((__Vfunc_perm_64bit__122__state_in 
                                           >> 0x3eU))))) 
            << 0x0000003bU));
    vlSelfRef.__Vfunc_perm_64bit__122__state_out = 
        ((0x7fffffffffffffffULL & vlSelfRef.__Vfunc_perm_64bit__122__state_out) 
         | ((QData)((IData)((1U & (IData)((__Vfunc_perm_64bit__122__state_in 
                                           >> 0x3fU))))) 
            << 0x0000003fU));
    __Vfunc_perm_64bit__122__Vfuncout = vlSelfRef.__Vfunc_perm_64bit__122__state_out;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_scrmbl__DOT__u_prim_present_dec__DOT__gen_round__BRA__0__KET____DOT__data_state_sbox 
        = __Vfunc_perm_64bit__122__Vfuncout;
    __Vfunc_sbox4_64bit__123__state_in = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_scrmbl__DOT__u_prim_present_dec__DOT__gen_round__BRA__0__KET____DOT__data_state_sbox;
    vlSelf->__Vfunc_sbox4_64bit__123__state_out = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 11895445264058658252ull);
    __Vfunc_sbox4_8bit__124__state_in = (0x000000ffU 
                                         & (IData)(__Vfunc_sbox4_64bit__123__state_in));
    vlSelf->__Vfunc_sbox4_8bit__124__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9966663890535987487ull);
    vlSelfRef.__Vfunc_sbox4_8bit__124__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__124__state_out)) 
         | (0x0000000fU & (IData)((0xa970364bd21c8fe5ULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__124__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__124__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__124__state_out)) 
         | (0x000000f0U & ((IData)((0xa970364bd21c8fe5ULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__124__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__124__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__124__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__123__state_out = 
        ((0xffffffffffffff00ULL & vlSelfRef.__Vfunc_sbox4_64bit__123__state_out) 
         | (IData)((IData)(__Vfunc_sbox4_8bit__124__Vfuncout)));
    __Vfunc_sbox4_8bit__124__state_in = (0x000000ffU 
                                         & (IData)(
                                                   (__Vfunc_sbox4_64bit__123__state_in 
                                                    >> 8U)));
    vlSelf->__Vfunc_sbox4_8bit__124__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9966663890535987487ull);
    vlSelfRef.__Vfunc_sbox4_8bit__124__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__124__state_out)) 
         | (0x0000000fU & (IData)((0xa970364bd21c8fe5ULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__124__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__124__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__124__state_out)) 
         | (0x000000f0U & ((IData)((0xa970364bd21c8fe5ULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__124__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__124__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__124__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__123__state_out = 
        ((0xffffffffffff00ffULL & vlSelfRef.__Vfunc_sbox4_64bit__123__state_out) 
         | ((QData)((IData)(__Vfunc_sbox4_8bit__124__Vfuncout)) 
            << 8U));
    __Vfunc_sbox4_8bit__124__state_in = (0x000000ffU 
                                         & (IData)(
                                                   (__Vfunc_sbox4_64bit__123__state_in 
                                                    >> 0x10U)));
    vlSelf->__Vfunc_sbox4_8bit__124__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9966663890535987487ull);
    vlSelfRef.__Vfunc_sbox4_8bit__124__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__124__state_out)) 
         | (0x0000000fU & (IData)((0xa970364bd21c8fe5ULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__124__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__124__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__124__state_out)) 
         | (0x000000f0U & ((IData)((0xa970364bd21c8fe5ULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__124__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__124__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__124__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__123__state_out = 
        ((0xffffffffff00ffffULL & vlSelfRef.__Vfunc_sbox4_64bit__123__state_out) 
         | ((QData)((IData)(__Vfunc_sbox4_8bit__124__Vfuncout)) 
            << 0x00000010U));
    __Vfunc_sbox4_8bit__124__state_in = (0x000000ffU 
                                         & (IData)(
                                                   (__Vfunc_sbox4_64bit__123__state_in 
                                                    >> 0x18U)));
    vlSelf->__Vfunc_sbox4_8bit__124__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9966663890535987487ull);
    vlSelfRef.__Vfunc_sbox4_8bit__124__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__124__state_out)) 
         | (0x0000000fU & (IData)((0xa970364bd21c8fe5ULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__124__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__124__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__124__state_out)) 
         | (0x000000f0U & ((IData)((0xa970364bd21c8fe5ULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__124__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__124__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__124__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__123__state_out = 
        ((0xffffffff00ffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__123__state_out) 
         | ((QData)((IData)(__Vfunc_sbox4_8bit__124__Vfuncout)) 
            << 0x00000018U));
    __Vfunc_sbox4_8bit__124__state_in = (0x000000ffU 
                                         & (IData)(
                                                   (__Vfunc_sbox4_64bit__123__state_in 
                                                    >> 0x20U)));
    vlSelf->__Vfunc_sbox4_8bit__124__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9966663890535987487ull);
    vlSelfRef.__Vfunc_sbox4_8bit__124__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__124__state_out)) 
         | (0x0000000fU & (IData)((0xa970364bd21c8fe5ULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__124__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__124__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__124__state_out)) 
         | (0x000000f0U & ((IData)((0xa970364bd21c8fe5ULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__124__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__124__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__124__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__123__state_out = 
        ((0xffffff00ffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__123__state_out) 
         | ((QData)((IData)(__Vfunc_sbox4_8bit__124__Vfuncout)) 
            << 0x00000020U));
    __Vfunc_sbox4_8bit__124__state_in = (0x000000ffU 
                                         & (IData)(
                                                   (__Vfunc_sbox4_64bit__123__state_in 
                                                    >> 0x28U)));
    vlSelf->__Vfunc_sbox4_8bit__124__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9966663890535987487ull);
    vlSelfRef.__Vfunc_sbox4_8bit__124__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__124__state_out)) 
         | (0x0000000fU & (IData)((0xa970364bd21c8fe5ULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__124__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__124__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__124__state_out)) 
         | (0x000000f0U & ((IData)((0xa970364bd21c8fe5ULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__124__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__124__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__124__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__123__state_out = 
        ((0xffff00ffffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__123__state_out) 
         | ((QData)((IData)(__Vfunc_sbox4_8bit__124__Vfuncout)) 
            << 0x00000028U));
    __Vfunc_sbox4_8bit__124__state_in = (0x000000ffU 
                                         & (IData)(
                                                   (__Vfunc_sbox4_64bit__123__state_in 
                                                    >> 0x30U)));
    vlSelf->__Vfunc_sbox4_8bit__124__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9966663890535987487ull);
    vlSelfRef.__Vfunc_sbox4_8bit__124__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__124__state_out)) 
         | (0x0000000fU & (IData)((0xa970364bd21c8fe5ULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__124__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__124__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__124__state_out)) 
         | (0x000000f0U & ((IData)((0xa970364bd21c8fe5ULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__124__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__124__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__124__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__123__state_out = 
        ((0xff00ffffffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__123__state_out) 
         | ((QData)((IData)(__Vfunc_sbox4_8bit__124__Vfuncout)) 
            << 0x00000030U));
    __Vfunc_sbox4_8bit__124__state_in = (0x000000ffU 
                                         & (IData)(
                                                   (__Vfunc_sbox4_64bit__123__state_in 
                                                    >> 0x38U)));
    vlSelf->__Vfunc_sbox4_8bit__124__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9966663890535987487ull);
    vlSelfRef.__Vfunc_sbox4_8bit__124__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__124__state_out)) 
         | (0x0000000fU & (IData)((0xa970364bd21c8fe5ULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__124__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__124__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__124__state_out)) 
         | (0x000000f0U & ((IData)((0xa970364bd21c8fe5ULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__124__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__124__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__124__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__123__state_out = 
        ((0x00ffffffffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__123__state_out) 
         | ((QData)((IData)(__Vfunc_sbox4_8bit__124__Vfuncout)) 
            << 0x00000038U));
    __Vfunc_sbox4_64bit__123__Vfuncout = vlSelfRef.__Vfunc_sbox4_64bit__123__state_out;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_scrmbl__DOT__u_prim_present_dec__DOT__data_state__BRA__127__03a64__KET__ 
        = __Vfunc_sbox4_64bit__123__Vfuncout;
}

void Vsim___024root___act_sequent__TOP__14(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___act_sequent__TOP__14\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__clk_i)))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_clk_ast_ext_gating__DOT__gen_generic__DOT__u_impl_generic__DOT__en_latch 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__sw_clk_byp_en;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_io_root_ctrl__DOT__u_cg__DOT__i_cg__DOT__gen_generic__DOT__u_impl_generic__DOT__en_latch 
            = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_io_root_ctrl__DOT__u_cg__DOT__i_sync.q_o) 
               | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_io_root_ctrl__DOT____Vcellinp__u_cg__test_en_i));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_usb_root_ctrl__DOT__u_cg__DOT__i_cg__DOT__gen_generic__DOT__u_impl_generic__DOT__en_latch 
            = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_usb_root_ctrl__DOT__u_cg__DOT__i_sync.q_o) 
               | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_usb_root_ctrl__DOT____Vcellinp__u_cg__test_en_i));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_main_root_ctrl__DOT__u_cg__DOT__i_cg__DOT__gen_generic__DOT__u_impl_generic__DOT__en_latch 
            = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_main_root_ctrl__DOT__u_cg__DOT__i_sync.q_o) 
               | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_main_root_ctrl__DOT____Vcellinp__u_cg__test_en_i));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_clk_ext_usb_ckgt__DOT__gen_generic__DOT__u_impl_generic__DOT__en_latch 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_clk_ext_usb_ckgt__DOT__gen_generic__DOT__u_impl_generic__DOT__en_i;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_clk_ext_io_ckgt__DOT__gen_generic__DOT__u_impl_generic__DOT__en_latch 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_clk_ext_io_ckgt__DOT__gen_generic__DOT__u_impl_generic__DOT__en_i;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_peri_cg__DOT__gen_generic__DOT__u_impl_generic__DOT__en_latch 
            = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_peri_cg__DOT__gen_generic__DOT__u_impl_generic__DOT__en_i) 
               | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT____Vcellinp__u_clk_io_peri_cg__test_en_i));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_usb_peri_cg__DOT__gen_generic__DOT__u_impl_generic__DOT__en_latch 
            = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_usb_peri_cg__DOT__gen_generic__DOT__u_impl_generic__DOT__en_i) 
               | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT____Vcellinp__u_clk_usb_peri_cg__test_en_i));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_usb_clk__DOT__u_usb_osc__DOT__u_clk_ckgt__DOT__gen_generic__DOT__u_impl_generic__DOT__en_latch 
            = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_usb_clk__DOT__u_usb_osc__DOT__en_osc_re) 
               | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_usb_clk__DOT__u_usb_osc__DOT__en_osc_fe));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_sys_clk__DOT__u_sys_osc__DOT__u_clk_ckgt__DOT__gen_generic__DOT__u_impl_generic__DOT__en_latch 
            = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_sys_clk__DOT__u_sys_osc__DOT__en_osc_re) 
               | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_sys_clk__DOT__u_sys_osc__DOT__en_osc_fe));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_io_clk__DOT__u_io_osc__DOT__u_clk_ckgt__DOT__gen_generic__DOT__u_impl_generic__DOT__en_latch 
            = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_io_clk__DOT__u_io_osc__DOT__en_osc_re) 
               | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_io_clk__DOT__u_io_osc__DOT__en_osc_fe));
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__clk_ext_usb 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__clk_i) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_clk_ext_usb_ckgt__DOT__gen_generic__DOT__u_impl_generic__DOT__en_latch));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__clk_ext_io 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__clk_i) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_clk_ext_io_ckgt__DOT__gen_generic__DOT__u_impl_generic__DOT__en_latch));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT____Vcellout__u_clk_usb_peri_cg__clk_o 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__clk_i) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_usb_peri_cg__DOT__gen_generic__DOT__u_impl_generic__DOT__en_latch));
    if ((1U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__clk_ext_usb)))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_clk_src_usb_sel__DOT__u_clk_byp_ckgt__DOT__gen_generic__DOT__u_impl_generic__DOT__en_latch 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_clk_src_usb_sel__DOT__u_clk_byp_ckgt__DOT__gen_generic__DOT__u_impl_generic__DOT__en_i;
    }
    if ((1U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__clk_ext_io)))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_clk_src_io_sel__DOT__u_clk_byp_ckgt__DOT__gen_generic__DOT__u_impl_generic__DOT__en_latch 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_io_clk_byp_en__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i;
    }
}

void Vsim___024root___act_sequent__TOP__15(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___act_sequent__TOP__15\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_io_div2_root_ctrl__DOT__u_scanmode_sync.clk_i)))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_io_div2_root_ctrl__DOT__u_cg__DOT__i_cg__DOT__gen_generic__DOT__u_impl_generic__DOT__en_latch 
            = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_io_div2_root_ctrl__DOT__u_cg__DOT__i_sync.q_o) 
               | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_io_div2_root_ctrl__DOT____Vcellinp__u_cg__test_en_i));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_cg__DOT__gen_generic__DOT__u_impl_generic__DOT__en_latch 
            = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_cg__DOT__gen_generic__DOT__u_impl_generic__DOT__en_i) 
               | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT____Vcellinp__u_clk_io_div2_peri_cg__test_en_i));
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_deep_sleep_sync.clk_i)))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_clk_ext_sys_ckgt__DOT__gen_generic__DOT__u_impl_generic__DOT__en_latch 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_clk_ext_sys_ckgt__DOT__gen_generic__DOT__u_impl_generic__DOT__en_i;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_sw_test_status_if.clk_i)))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_main_kmac_trans__DOT__u_cg__DOT__gen_generic__DOT__u_impl_generic__DOT__en_latch 
            = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_main_kmac_trans__DOT__u_cg__DOT__gen_generic__DOT__u_impl_generic__DOT__en_i) 
               | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_main_kmac_trans__DOT____Vcellinp__u_cg__test_en_i));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__core_clock_gate_i__DOT__gen_generic__DOT__u_impl_generic__DOT__en_latch 
            = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__core_clock_gate_i__DOT__gen_generic__DOT__u_impl_generic__DOT__en_i) 
               | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT____Vcellinp__u_core__test_en_i));
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_usb_clk__DOT__u_no_scan_val_sync.clk_i)))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_clk_src_usb_sel__DOT__u_clk_osc_ckgt__DOT__gen_generic__DOT__u_impl_generic__DOT__en_latch 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_clk_src_usb_sel__DOT__u_clk_osc_ckgt__DOT__gen_generic__DOT__u_impl_generic__DOT__en_i;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_sys_clk__DOT__u_no_scan_val_sync.clk_i)))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_clk_src_sys_sel__DOT__u_clk_osc_ckgt__DOT__gen_generic__DOT__u_impl_generic__DOT__en_latch 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_clk_src_sys_sel__DOT__u_clk_osc_ckgt__DOT__gen_generic__DOT__u_impl_generic__DOT__en_i;
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_io_clk__DOT__u_no_scan_val_sync.clk_i)))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_clk_src_io_sel__DOT__u_clk_osc_ckgt__DOT__gen_generic__DOT__u_impl_generic__DOT__en_latch 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_io_clk_osc_en__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i;
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__clk_ext_sys 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_deep_sleep_sync.clk_i) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_clk_ext_sys_ckgt__DOT__gen_generic__DOT__u_impl_generic__DOT__en_latch));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_clk_src_sys_sel__DOT__u_clk_osc_ckgt__DOT__gen_generic__DOT__u_impl_generic__DOT__clk_o 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_sys_clk__DOT__u_no_scan_val_sync.clk_i) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_clk_src_sys_sel__DOT__u_clk_osc_ckgt__DOT__gen_generic__DOT__u_impl_generic__DOT__en_latch));
    if ((1U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__clk_ext_sys)))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_clk_src_sys_sel__DOT__u_clk_byp_ckgt__DOT__gen_generic__DOT__u_impl_generic__DOT__en_latch 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_clk_src_sys_sel__DOT__u_clk_byp_ckgt__DOT__gen_generic__DOT__u_impl_generic__DOT__en_i;
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_clk_src_sys_sel__DOT__u_clk_byp_ckgt__DOT__gen_generic__DOT__u_impl_generic__DOT__clk_o 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__clk_ext_sys) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_ast_clks_byp__DOT__u_clk_src_sys_sel__DOT__u_clk_byp_ckgt__DOT__gen_generic__DOT__u_impl_generic__DOT__en_latch));
}

void Vsim___024root___act_sequent__TOP__16(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___act_sequent__TOP__16\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__dap__DOT__i_dmi_jtag_tap__DOT__tck_n 
        = (1U & (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__ack_sync.clk_i) 
                  & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__testmode)) 
                 | ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__testmode)) 
                    & (~ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_jtag_gating__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__u_prim_sync_reqack__DOT__gen_rz_hs_protocol__DOT__ack_sync.clk_i)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__clk_csb 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__gen_async__DOT__i_sync_p.clk_i) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT____Vcellinp__u_clk_csb_mux__sel_i));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__clk_spi_out_buf 
        = (1U & (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__gen_async__DOT__i_sync_p.clk_i) 
                  & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT____Vcellinp__u_clk_spi_out_mux__sel_i)) 
                 | ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT____Vcellinp__u_clk_spi_out_mux__sel_i)) 
                    & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT____Vcellinp__u_clk_spi__scanmode_i)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__unused_sigs 
        = (1U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT____Vcellout__u_clk_usb_peri_cg__clk_o) 
                 ^ ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__gen_async__DOT__i_sync_p.rst_ni) 
                    ^ (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_no_scan_io_div4_div__DOT__gen_generic__DOT__u_impl_generic__DOT__clk_int) 
                        ^ ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_aon_div__DOT__gen_generic__DOT__u_impl_generic__DOT__clk_int) 
                           ^ ((IData)(vlSelfRef.chip_sim_tb__DOT__clk_i) 
                              ^ ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_io_div2_root_ctrl__DOT__u_scanmode_sync.clk_i) 
                                 ^ ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_aon_div__DOT__gen_generic__DOT__u_impl_generic__DOT__clk_int) 
                                    ^ (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_sw_test_status_if.clk_i) 
                                        & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_main_aes_trans.__PVT__u_cg__DOT__gen_generic__DOT__u_impl_generic__DOT__en_latch)) 
                                       ^ (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_sw_test_status_if.clk_i) 
                                           & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_main_hmac_trans.__PVT__u_cg__DOT__gen_generic__DOT__u_impl_generic__DOT__en_latch)) 
                                          ^ (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_sw_test_status_if.clk_i) 
                                              & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_main_kmac_trans__DOT__u_cg__DOT__gen_generic__DOT__u_impl_generic__DOT__en_latch)) 
                                             ^ (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_sw_test_status_if.clk_i) 
                                                 & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_main_otbn_trans.__PVT__u_cg__DOT__gen_generic__DOT__u_impl_generic__DOT__en_latch)) 
                                                ^ ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.clk_i) 
                                                   ^ 
                                                   (1U 
                                                    & (((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__gen_async__DOT__i_sync_p.clk_i) 
                                                        ^ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT____Vcellout__u_clk_usb_peri_cg__clk_o)) 
                                                       ^ 
                                                       ((((((IData)(vlSelfRef.chip_sim_tb__DOT__clk_i) 
                                                            & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_usb_root_ctrl__DOT__u_cg__DOT__i_cg__DOT__gen_generic__DOT__u_impl_generic__DOT__en_latch)) 
                                                           ^ 
                                                           ((IData)(vlSelfRef.chip_sim_tb__DOT__clk_i) 
                                                            & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_io_root_ctrl__DOT__u_cg__DOT__i_cg__DOT__gen_generic__DOT__u_impl_generic__DOT__en_latch))) 
                                                          ^ 
                                                          ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_io_div2_root_ctrl__DOT__u_scanmode_sync.clk_i) 
                                                           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_io_div2_root_ctrl__DOT__u_cg__DOT__i_cg__DOT__gen_generic__DOT__u_impl_generic__DOT__en_latch))) 
                                                         ^ 
                                                         ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div4_peri_cg__DOT__gen_generic__DOT__u_impl_generic__DOT__en_latch) 
                                                          & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_no_scan_io_div4_div__DOT__gen_generic__DOT__u_impl_generic__DOT__clk_int))) 
                                                        ^ 
                                                        ((IData)(vlSelfRef.chip_sim_tb__DOT__clk_i) 
                                                         & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_peri_cg__DOT__gen_generic__DOT__u_impl_generic__DOT__en_latch))))))))))))))) 
                       ^ (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT____Vcellout__gen_rst_por_aon__BRA__1__KET____DOT__gen_rst_por_domain__DOT__u_por_domain_mux__clk_o) 
                           ^ ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_lc_src__DOT____Vcellinp__u_aon_rst__rst_ni) 
                              ^ ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_main_root_ctrl__DOT__u_scanmode_sync.rst_ni) 
                                 ^ ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_io_root_ctrl__DOT__u_scanmode_sync.rst_ni) 
                                    ^ ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_io_div2_root_ctrl__DOT__u_scanmode_sync.rst_ni) 
                                       ^ ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_io_div4_root_ctrl__DOT__u_scanmode_sync.rst_ni) 
                                          ^ ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_usb_root_ctrl__DOT__u_scanmode_sync.rst_ni) 
                                             ^ ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT__u_ctrl_aux_shadowed_force_masks.rst_shadowed_ni) 
                                                ^ ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rstmgr_aon__DOT__u_daon_lc_shadowed.leaf_rst_o) 
                                                   ^ 
                                                   ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_entropy_src__DOT__u_entropy_src_core__DOT__u_entropy_src_adaptp_ht__DOT__gen_cntrs__BRA__0__KET____DOT__u_prim_count_test_cnt.rst_ni) 
                                                    ^ 
                                                    ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_main_aes_trans__u_scanmode_sync.rst_ni) 
                                                     ^ 
                                                     ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_adc_ctrl_core__DOT__u_adc_ctrl_intr__DOT__u_match_sync__gen_nrz_hs_protocol__DOT__ack_sync.rst_ni) 
                                                      ^ 
                                                      ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_37__DOT__reqfifo__DOT__sync_wptr.rst_ni) 
                                                       ^ 
                                                       ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_io_step_down_req_sync.rst_ni) 
                                                        ^ 
                                                        ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_39__DOT__reqfifo__DOT__sync_wptr.rst_ni) 
                                                         ^ 
                                                         ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_sw_en_sync.rst_ni) 
                                                          ^ 
                                                          ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_reg_wrap__DOT__u_reg__DOT__u_alert_class_shadowed_0.rst_shadowed_ni) 
                                                           ^ 
                                                           ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT____Vcellinp__u_clkmgr_aon__rst_shadowed_ni) 
                                                            ^ 
                                                            ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_alert_handler__DOT__u_alert_handler_lpg_ctrl__DOT__gen_alert_map__BRA__0__KET____DOT__u_prim_mubi4_sync_lpg_en.rst_ni) 
                                                             ^ 
                                                             ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_io_div2_peri_scanmode_sync.rst_ni) 
                                                              ^ 
                                                              ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_41__DOT__reqfifo__DOT__sync_wptr.rst_ni) 
                                                               ^ 
                                                               ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_clkmgr_aon__DOT__u_clk_usb_peri_sw_en_sync.rst_ni) 
                                                                ^ 
                                                                ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_dm__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__gen_async__DOT__i_sync_p.rst_ni) 
                                                                 ^ 
                                                                 ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_pinmux_strap_sampling__DOT__u_por_scanmode_sync.rst_ni) 
                                                                  ^ 
                                                                  ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__gen_async__DOT__i_sync_p.rst_ni) 
                                                                   ^ 
                                                                   ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host0__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__gen_async__DOT__i_sync_p.rst_ni) 
                                                                    ^ 
                                                                    ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_host1__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__gen_async__DOT__i_sync_p.rst_ni) 
                                                                     ^ 
                                                                     ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__gen_async__DOT__i_sync_p.rst_ni) 
                                                                      ^ 
                                                                      ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_usbdev__DOT__u_reg__DOT__u_wake_control_cdc__DOT__u_src_to_dst_req__DOT__prim_flop_2sync.rst_ni) 
                                                                       ^ 
                                                                       ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c0__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__gen_async__DOT__i_sync_p.rst_ni) 
                                                                        ^ 
                                                                        ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c1__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__gen_async__DOT__i_sync_p.rst_ni) 
                                                                         ^ (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c2__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__u_decode_ack__gen_async__DOT__i_sync_p.rst_ni)))))))))))))))))))))))))))))))) 
                          ^ ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__intg_err) 
                             ^ ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pwrmgr_aon__DOT__u_slow_fsm__DOT__pwr_clamp_env_q) 
                                ^ ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_rst_vcmpp_aon_dasrt.q_o) 
                                   ^ ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_pinmux_strap_sampling__DOT__dft_strap_valid_q) 
                                      ^ (VL_REDXOR_2(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_pinmux_strap_sampling__DOT__dft_strap_q) 
                                         ^ (VL_REDXOR_4(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_lc_ctrl_signal_decode__DOT__u_prim_lc_sender_dft_en__DOT__lc_en_out) 
                                            ^ (((((
                                                   (((((((((((((((((((((((((((((((((VL_REDXOR_32(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_reg__DOT____Vcellout__u_rega0__q) 
                                                                                ^ 
                                                                                VL_REDXOR_32(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_reg__DOT____Vcellout__u_rega1__q)) 
                                                                                ^ 
                                                                                VL_REDXOR_32(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_reg__DOT____Vcellout__u_rega2__q)) 
                                                                                ^ 
                                                                                VL_REDXOR_32(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_reg__DOT____Vcellout__u_rega3__q)) 
                                                                                ^ 
                                                                                VL_REDXOR_32(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_reg__DOT____Vcellout__u_rega4__q)) 
                                                                                ^ 
                                                                                VL_REDXOR_32(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_reg__DOT____Vcellout__u_rega5__q)) 
                                                                               ^ 
                                                                               VL_REDXOR_32(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_reg__DOT____Vcellout__u_rega6__q)) 
                                                                              ^ 
                                                                              VL_REDXOR_32(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_reg__DOT____Vcellout__u_rega7__q)) 
                                                                             ^ 
                                                                             VL_REDXOR_32(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_reg__DOT____Vcellout__u_rega8__q)) 
                                                                            ^ 
                                                                            VL_REDXOR_32(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_reg__DOT____Vcellout__u_rega9__q)) 
                                                                           ^ 
                                                                           VL_REDXOR_32(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_reg__DOT____Vcellout__u_rega10__q)) 
                                                                          ^ 
                                                                          VL_REDXOR_32(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_reg__DOT____Vcellout__u_rega11__q)) 
                                                                         ^ 
                                                                         VL_REDXOR_32(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_reg__DOT____Vcellout__u_rega12__q)) 
                                                                        ^ 
                                                                        VL_REDXOR_32(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_reg__DOT____Vcellout__u_rega13__q)) 
                                                                       ^ 
                                                                       VL_REDXOR_32(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_reg__DOT____Vcellout__u_rega14__q)) 
                                                                      ^ 
                                                                      VL_REDXOR_32(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_reg__DOT____Vcellout__u_rega15__q)) 
                                                                     ^ 
                                                                     VL_REDXOR_32(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_reg__DOT____Vcellout__u_rega16__q)) 
                                                                    ^ 
                                                                    VL_REDXOR_32(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_reg__DOT____Vcellout__u_rega17__q)) 
                                                                   ^ 
                                                                   VL_REDXOR_32(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_reg__DOT____Vcellout__u_rega18__q)) 
                                                                  ^ 
                                                                  VL_REDXOR_32(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_reg__DOT____Vcellout__u_rega19__q)) 
                                                                 ^ 
                                                                 VL_REDXOR_32(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_reg__DOT____Vcellout__u_rega20__q)) 
                                                                ^ 
                                                                VL_REDXOR_32(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_reg__DOT____Vcellout__u_rega21__q)) 
                                                               ^ 
                                                               VL_REDXOR_32(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_reg__DOT____Vcellout__u_rega22__q)) 
                                                              ^ 
                                                              VL_REDXOR_32(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_reg__DOT____Vcellout__u_rega23__q)) 
                                                             ^ 
                                                             VL_REDXOR_32(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_reg__DOT____Vcellout__u_rega24__q)) 
                                                            ^ 
                                                            VL_REDXOR_32(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_reg__DOT____Vcellout__u_rega25__q)) 
                                                           ^ 
                                                           VL_REDXOR_32(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_reg__DOT____Vcellout__u_rega26__q)) 
                                                          ^ 
                                                          VL_REDXOR_32(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_reg__DOT____Vcellout__u_rega27__q)) 
                                                         ^ 
                                                         VL_REDXOR_32(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_reg__DOT____Vcellout__u_rega28__q)) 
                                                        ^ 
                                                        VL_REDXOR_32(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_reg__DOT____Vcellout__u_rega29__q)) 
                                                       ^ 
                                                       VL_REDXOR_32(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_reg__DOT____Vcellout__u_rega30__q)) 
                                                      ^ 
                                                      VL_REDXOR_32(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_reg__DOT____Vcellout__u_rega31__q)) 
                                                     ^ 
                                                     VL_REDXOR_32(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_reg__DOT____Vcellout__u_rega32__q)) 
                                                    ^ 
                                                    VL_REDXOR_32(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_reg__DOT____Vcellout__u_rega33__q)) 
                                                   ^ 
                                                   VL_REDXOR_32(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_reg__DOT____Vcellout__u_rega34__q)) 
                                                  ^ 
                                                  VL_REDXOR_32(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_reg__DOT____Vcellout__u_rega35__q)) 
                                                 ^ 
                                                 VL_REDXOR_32(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_reg__DOT____Vcellout__u_rega36__q)) 
                                                ^ VL_REDXOR_32(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__u_ast__DOT__u_reg__DOT____Vcellout__u_rega37__q)) 
                                               ^ VL_REDXOR_32(
                                                              ((((vlSelfRef.__VdfgRegularize_he50b618e_0_849[0U] 
                                                                  ^ 
                                                                  vlSelfRef.__VdfgRegularize_he50b618e_0_849[1U]) 
                                                                 ^ 
                                                                 vlSelfRef.__VdfgRegularize_he50b618e_0_849[2U]) 
                                                                ^ 
                                                                vlSelfRef.__VdfgRegularize_he50b618e_0_849[3U]) 
                                                               ^ 
                                                               vlSelfRef.__VdfgRegularize_he50b618e_0_849[4U]))))))))))))));
}

void Vsim___024root___act_sequent__TOP__17(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___act_sequent__TOP__17\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*63:0*/ __Vfunc_sbox4_64bit__118__Vfuncout;
    __Vfunc_sbox4_64bit__118__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_sbox4_64bit__118__state_in;
    __Vfunc_sbox4_64bit__118__state_in = 0;
    CData/*7:0*/ __Vfunc_sbox4_8bit__119__Vfuncout;
    __Vfunc_sbox4_8bit__119__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_sbox4_8bit__119__state_in;
    __Vfunc_sbox4_8bit__119__state_in = 0;
    QData/*63:0*/ __Vfunc_perm_64bit__120__Vfuncout;
    __Vfunc_perm_64bit__120__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_perm_64bit__120__state_in;
    __Vfunc_perm_64bit__120__state_in = 0;
    VlWide<4>/*127:0*/ __Vfunc_present_update_key128__121__Vfuncout;
    VL_ZERO_W(128, __Vfunc_present_update_key128__121__Vfuncout);
    VlWide<4>/*127:0*/ __Vfunc_present_update_key128__121__key_in;
    VL_ZERO_W(128, __Vfunc_present_update_key128__121__key_in);
    CData/*4:0*/ __Vfunc_present_update_key128__121__round_idx;
    __Vfunc_present_update_key128__121__round_idx = 0;
    VlWide<4>/*127:0*/ __Vfunc_present_update_key128__121__key_out;
    VL_ZERO_W(128, __Vfunc_present_update_key128__121__key_out);
    CData/*31:0*/ __Vtemp_6;
    // Body
    __Vfunc_present_update_key128__121__round_idx = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_scrmbl__DOT__idx_state_q;
    __Vfunc_present_update_key128__121__key_in[0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_scrmbl__DOT__u_prim_present_enc__DOT__round_key[0U];
    __Vfunc_present_update_key128__121__key_in[1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_scrmbl__DOT__u_prim_present_enc__DOT__round_key[1U];
    __Vfunc_present_update_key128__121__key_in[2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_scrmbl__DOT__u_prim_present_enc__DOT__round_key[2U];
    __Vfunc_present_update_key128__121__key_in[3U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_scrmbl__DOT__u_prim_present_enc__DOT__round_key[3U];
    __Vfunc_present_update_key128__121__key_out[0U] 
        = (IData)((0x1fffffffffffffffULL & (((QData)((IData)(
                                                             __Vfunc_present_update_key128__121__key_in[3U])) 
                                             << 0x0000001dU) 
                                            | ((QData)((IData)(
                                                               __Vfunc_present_update_key128__121__key_in[2U])) 
                                               >> 3U))));
    __Vfunc_present_update_key128__121__key_out[1U] 
        = ((__Vfunc_present_update_key128__121__key_in[0U] 
            << 0x0000001dU) | (IData)(((0x1fffffffffffffffULL 
                                        & (((QData)((IData)(
                                                            __Vfunc_present_update_key128__121__key_in[3U])) 
                                            << 0x0000001dU) 
                                           | ((QData)((IData)(
                                                              __Vfunc_present_update_key128__121__key_in[2U])) 
                                              >> 3U))) 
                                       >> 0x00000020U)));
    __Vfunc_present_update_key128__121__key_out[2U] 
        = ((__Vfunc_present_update_key128__121__key_in[0U] 
            >> 3U) | (__Vfunc_present_update_key128__121__key_in[1U] 
                      << 0x0000001dU));
    __Vfunc_present_update_key128__121__key_out[3U] 
        = ((__Vfunc_present_update_key128__121__key_in[1U] 
            >> 3U) | (__Vfunc_present_update_key128__121__key_in[2U] 
                      << 0x0000001dU));
    __Vfunc_present_update_key128__121__key_out[3U] 
        = ((0x0fffffffU & __Vfunc_present_update_key128__121__key_out[3U]) 
           | ((IData)((0x21748fe3da09b65cULL >> (0x0000003fU 
                                                 & VL_SHIFTL_III(6,32,32, 
                                                                 (__Vfunc_present_update_key128__121__key_out[3U] 
                                                                  >> 0x0000001cU), 2U)))) 
              << 0x0000001cU));
    __Vfunc_present_update_key128__121__key_out[3U] 
        = ((0xf0ffffffU & __Vfunc_present_update_key128__121__key_out[3U]) 
           | (0x0f000000U & ((IData)((0x21748fe3da09b65cULL 
                                      >> (0x0000003fU 
                                          & VL_SHIFTL_III(6,32,32, 
                                                          (0x0000000fU 
                                                           & (__Vfunc_present_update_key128__121__key_out[3U] 
                                                              >> 0x00000018U)), 2U)))) 
                             << 0x00000018U)));
    __Vtemp_6 = (0x0000001fU & (((__Vfunc_present_update_key128__121__key_out[2U] 
                                  << 2U) | (__Vfunc_present_update_key128__121__key_out[1U] 
                                            >> 0x0000001eU)) 
                                ^ (IData)(__Vfunc_present_update_key128__121__round_idx)));
    __Vfunc_present_update_key128__121__key_out[1U] 
        = ((0x3fffffffU & __Vfunc_present_update_key128__121__key_out[1U]) 
           | ((((__Vfunc_present_update_key128__121__key_out[2U] 
                 << 2U) | (__Vfunc_present_update_key128__121__key_out[1U] 
                           >> 0x0000001eU)) ^ (IData)(__Vfunc_present_update_key128__121__round_idx)) 
              << 0x0000001eU));
    __Vfunc_present_update_key128__121__key_out[2U] 
        = ((0xfffffff8U & __Vfunc_present_update_key128__121__key_out[2U]) 
           | (__Vtemp_6 >> 2U));
    __Vfunc_present_update_key128__121__Vfuncout[0U] 
        = __Vfunc_present_update_key128__121__key_out[0U];
    __Vfunc_present_update_key128__121__Vfuncout[1U] 
        = __Vfunc_present_update_key128__121__key_out[1U];
    __Vfunc_present_update_key128__121__Vfuncout[2U] 
        = __Vfunc_present_update_key128__121__key_out[2U];
    __Vfunc_present_update_key128__121__Vfuncout[3U] 
        = __Vfunc_present_update_key128__121__key_out[3U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_scrmbl__DOT__u_prim_present_enc__DOT__round_key[4U] 
        = __Vfunc_present_update_key128__121__Vfuncout[0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_scrmbl__DOT__u_prim_present_enc__DOT__round_key[5U] 
        = __Vfunc_present_update_key128__121__Vfuncout[1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_scrmbl__DOT__u_prim_present_enc__DOT__round_key[6U] 
        = __Vfunc_present_update_key128__121__Vfuncout[2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_scrmbl__DOT__u_prim_present_enc__DOT__round_key[7U] 
        = __Vfunc_present_update_key128__121__Vfuncout[3U];
    __Vfunc_sbox4_64bit__118__state_in = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_scrmbl__DOT__data_state_q 
                                          ^ (((QData)((IData)(
                                                              vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_scrmbl__DOT__u_prim_present_enc__DOT__round_key[3U])) 
                                              << 0x00000020U) 
                                             | (QData)((IData)(
                                                               vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_scrmbl__DOT__u_prim_present_enc__DOT__round_key[2U]))));
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__Vfunc_sbox4_64bit__118__state_out = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 3136337986568011184ull);
    __Vfunc_sbox4_8bit__119__state_in = (0x000000ffU 
                                         & (IData)(__Vfunc_sbox4_64bit__118__state_in));
    vlSelf->__Vfunc_sbox4_8bit__119__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2748779310705124378ull);
    vlSelfRef.__Vfunc_sbox4_8bit__119__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__119__state_out)) 
         | (0x0000000fU & (IData)((0x21748fe3da09b65cULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__119__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__119__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__119__state_out)) 
         | (0x000000f0U & ((IData)((0x21748fe3da09b65cULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__119__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__119__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__119__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__118__state_out = 
        ((0xffffffffffffff00ULL & vlSelfRef.__Vfunc_sbox4_64bit__118__state_out) 
         | (IData)((IData)(__Vfunc_sbox4_8bit__119__Vfuncout)));
    __Vfunc_sbox4_8bit__119__state_in = (0x000000ffU 
                                         & (IData)(
                                                   (__Vfunc_sbox4_64bit__118__state_in 
                                                    >> 8U)));
    vlSelf->__Vfunc_sbox4_8bit__119__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2748779310705124378ull);
    vlSelfRef.__Vfunc_sbox4_8bit__119__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__119__state_out)) 
         | (0x0000000fU & (IData)((0x21748fe3da09b65cULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__119__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__119__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__119__state_out)) 
         | (0x000000f0U & ((IData)((0x21748fe3da09b65cULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__119__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__119__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__119__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__118__state_out = 
        ((0xffffffffffff00ffULL & vlSelfRef.__Vfunc_sbox4_64bit__118__state_out) 
         | ((QData)((IData)(__Vfunc_sbox4_8bit__119__Vfuncout)) 
            << 8U));
    __Vfunc_sbox4_8bit__119__state_in = (0x000000ffU 
                                         & (IData)(
                                                   (__Vfunc_sbox4_64bit__118__state_in 
                                                    >> 0x10U)));
    vlSelf->__Vfunc_sbox4_8bit__119__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2748779310705124378ull);
    vlSelfRef.__Vfunc_sbox4_8bit__119__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__119__state_out)) 
         | (0x0000000fU & (IData)((0x21748fe3da09b65cULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__119__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__119__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__119__state_out)) 
         | (0x000000f0U & ((IData)((0x21748fe3da09b65cULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__119__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__119__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__119__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__118__state_out = 
        ((0xffffffffff00ffffULL & vlSelfRef.__Vfunc_sbox4_64bit__118__state_out) 
         | ((QData)((IData)(__Vfunc_sbox4_8bit__119__Vfuncout)) 
            << 0x00000010U));
    __Vfunc_sbox4_8bit__119__state_in = (0x000000ffU 
                                         & (IData)(
                                                   (__Vfunc_sbox4_64bit__118__state_in 
                                                    >> 0x18U)));
    vlSelf->__Vfunc_sbox4_8bit__119__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2748779310705124378ull);
    vlSelfRef.__Vfunc_sbox4_8bit__119__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__119__state_out)) 
         | (0x0000000fU & (IData)((0x21748fe3da09b65cULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__119__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__119__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__119__state_out)) 
         | (0x000000f0U & ((IData)((0x21748fe3da09b65cULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__119__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__119__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__119__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__118__state_out = 
        ((0xffffffff00ffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__118__state_out) 
         | ((QData)((IData)(__Vfunc_sbox4_8bit__119__Vfuncout)) 
            << 0x00000018U));
    __Vfunc_sbox4_8bit__119__state_in = (0x000000ffU 
                                         & (IData)(
                                                   (__Vfunc_sbox4_64bit__118__state_in 
                                                    >> 0x20U)));
    vlSelf->__Vfunc_sbox4_8bit__119__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2748779310705124378ull);
    vlSelfRef.__Vfunc_sbox4_8bit__119__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__119__state_out)) 
         | (0x0000000fU & (IData)((0x21748fe3da09b65cULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__119__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__119__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__119__state_out)) 
         | (0x000000f0U & ((IData)((0x21748fe3da09b65cULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__119__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__119__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__119__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__118__state_out = 
        ((0xffffff00ffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__118__state_out) 
         | ((QData)((IData)(__Vfunc_sbox4_8bit__119__Vfuncout)) 
            << 0x00000020U));
    __Vfunc_sbox4_8bit__119__state_in = (0x000000ffU 
                                         & (IData)(
                                                   (__Vfunc_sbox4_64bit__118__state_in 
                                                    >> 0x28U)));
    vlSelf->__Vfunc_sbox4_8bit__119__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2748779310705124378ull);
    vlSelfRef.__Vfunc_sbox4_8bit__119__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__119__state_out)) 
         | (0x0000000fU & (IData)((0x21748fe3da09b65cULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__119__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__119__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__119__state_out)) 
         | (0x000000f0U & ((IData)((0x21748fe3da09b65cULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__119__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__119__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__119__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__118__state_out = 
        ((0xffff00ffffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__118__state_out) 
         | ((QData)((IData)(__Vfunc_sbox4_8bit__119__Vfuncout)) 
            << 0x00000028U));
    __Vfunc_sbox4_8bit__119__state_in = (0x000000ffU 
                                         & (IData)(
                                                   (__Vfunc_sbox4_64bit__118__state_in 
                                                    >> 0x30U)));
    vlSelf->__Vfunc_sbox4_8bit__119__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2748779310705124378ull);
    vlSelfRef.__Vfunc_sbox4_8bit__119__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__119__state_out)) 
         | (0x0000000fU & (IData)((0x21748fe3da09b65cULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__119__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__119__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__119__state_out)) 
         | (0x000000f0U & ((IData)((0x21748fe3da09b65cULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__119__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__119__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__119__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__118__state_out = 
        ((0xff00ffffffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__118__state_out) 
         | ((QData)((IData)(__Vfunc_sbox4_8bit__119__Vfuncout)) 
            << 0x00000030U));
    __Vfunc_sbox4_8bit__119__state_in = (0x000000ffU 
                                         & (IData)(
                                                   (__Vfunc_sbox4_64bit__118__state_in 
                                                    >> 0x38U)));
    vlSelf->__Vfunc_sbox4_8bit__119__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2748779310705124378ull);
    vlSelfRef.__Vfunc_sbox4_8bit__119__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__119__state_out)) 
         | (0x0000000fU & (IData)((0x21748fe3da09b65cULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__119__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__119__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__119__state_out)) 
         | (0x000000f0U & ((IData)((0x21748fe3da09b65cULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__119__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__119__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__119__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__118__state_out = 
        ((0x00ffffffffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__118__state_out) 
         | ((QData)((IData)(__Vfunc_sbox4_8bit__119__Vfuncout)) 
            << 0x00000038U));
    __Vfunc_sbox4_64bit__118__Vfuncout = vlSelfRef.__Vfunc_sbox4_64bit__118__state_out;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_scrmbl__DOT__u_prim_present_enc__DOT__gen_round__BRA__0__KET____DOT__data_state_sbox 
        = __Vfunc_sbox4_64bit__118__Vfuncout;
    __Vfunc_perm_64bit__120__state_in = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_scrmbl__DOT__u_prim_present_enc__DOT__gen_round__BRA__0__KET____DOT__data_state_sbox;
    vlSelf->__Vfunc_perm_64bit__120__state_out = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 14932898225439004230ull);
    vlSelfRef.__Vfunc_perm_64bit__120__state_out = 
        ((0xfffffffffffffffeULL & vlSelfRef.__Vfunc_perm_64bit__120__state_out) 
         | (IData)((IData)((1U & (IData)(__Vfunc_perm_64bit__120__state_in)))));
    vlSelfRef.__Vfunc_perm_64bit__120__state_out = 
        ((0xfffffffffffeffffULL & vlSelfRef.__Vfunc_perm_64bit__120__state_out) 
         | ((QData)((IData)((1U & (IData)((__Vfunc_perm_64bit__120__state_in 
                                           >> 1U))))) 
            << 0x00000010U));
    vlSelfRef.__Vfunc_perm_64bit__120__state_out = 
        ((0xfffffffeffffffffULL & vlSelfRef.__Vfunc_perm_64bit__120__state_out) 
         | ((QData)((IData)((1U & (IData)((__Vfunc_perm_64bit__120__state_in 
                                           >> 2U))))) 
            << 0x00000020U));
    vlSelfRef.__Vfunc_perm_64bit__120__state_out = 
        ((0xfffeffffffffffffULL & vlSelfRef.__Vfunc_perm_64bit__120__state_out) 
         | ((QData)((IData)((1U & (IData)((__Vfunc_perm_64bit__120__state_in 
                                           >> 3U))))) 
            << 0x00000030U));
    vlSelfRef.__Vfunc_perm_64bit__120__state_out = 
        ((0xfffffffffffffffdULL & vlSelfRef.__Vfunc_perm_64bit__120__state_out) 
         | ((QData)((IData)((1U & (IData)((__Vfunc_perm_64bit__120__state_in 
                                           >> 4U))))) 
            << 1U));
    vlSelfRef.__Vfunc_perm_64bit__120__state_out = 
        ((0xfffffffffffdffffULL & vlSelfRef.__Vfunc_perm_64bit__120__state_out) 
         | ((QData)((IData)((1U & (IData)((__Vfunc_perm_64bit__120__state_in 
                                           >> 5U))))) 
            << 0x00000011U));
    vlSelfRef.__Vfunc_perm_64bit__120__state_out = 
        ((0xfffffffdffffffffULL & vlSelfRef.__Vfunc_perm_64bit__120__state_out) 
         | ((QData)((IData)((1U & (IData)((__Vfunc_perm_64bit__120__state_in 
                                           >> 6U))))) 
            << 0x00000021U));
    vlSelfRef.__Vfunc_perm_64bit__120__state_out = 
        ((0xfffdffffffffffffULL & vlSelfRef.__Vfunc_perm_64bit__120__state_out) 
         | ((QData)((IData)((1U & (IData)((__Vfunc_perm_64bit__120__state_in 
                                           >> 7U))))) 
            << 0x00000031U));
    vlSelfRef.__Vfunc_perm_64bit__120__state_out = 
        ((0xfffffffffffffffbULL & vlSelfRef.__Vfunc_perm_64bit__120__state_out) 
         | ((QData)((IData)((1U & (IData)((__Vfunc_perm_64bit__120__state_in 
                                           >> 8U))))) 
            << 2U));
    vlSelfRef.__Vfunc_perm_64bit__120__state_out = 
        ((0xfffffffffffbffffULL & vlSelfRef.__Vfunc_perm_64bit__120__state_out) 
         | ((QData)((IData)((1U & (IData)((__Vfunc_perm_64bit__120__state_in 
                                           >> 9U))))) 
            << 0x00000012U));
    vlSelfRef.__Vfunc_perm_64bit__120__state_out = 
        ((0xfffffffbffffffffULL & vlSelfRef.__Vfunc_perm_64bit__120__state_out) 
         | ((QData)((IData)((1U & (IData)((__Vfunc_perm_64bit__120__state_in 
                                           >> 0x0aU))))) 
            << 0x00000022U));
    vlSelfRef.__Vfunc_perm_64bit__120__state_out = 
        ((0xfffbffffffffffffULL & vlSelfRef.__Vfunc_perm_64bit__120__state_out) 
         | ((QData)((IData)((1U & (IData)((__Vfunc_perm_64bit__120__state_in 
                                           >> 0x0bU))))) 
            << 0x00000032U));
    vlSelfRef.__Vfunc_perm_64bit__120__state_out = 
        ((0xfffffffffffffff7ULL & vlSelfRef.__Vfunc_perm_64bit__120__state_out) 
         | ((QData)((IData)((1U & (IData)((__Vfunc_perm_64bit__120__state_in 
                                           >> 0x0cU))))) 
            << 3U));
    vlSelfRef.__Vfunc_perm_64bit__120__state_out = 
        ((0xfffffffffff7ffffULL & vlSelfRef.__Vfunc_perm_64bit__120__state_out) 
         | ((QData)((IData)((1U & (IData)((__Vfunc_perm_64bit__120__state_in 
                                           >> 0x0dU))))) 
            << 0x00000013U));
    vlSelfRef.__Vfunc_perm_64bit__120__state_out = 
        ((0xfffffff7ffffffffULL & vlSelfRef.__Vfunc_perm_64bit__120__state_out) 
         | ((QData)((IData)((1U & (IData)((__Vfunc_perm_64bit__120__state_in 
                                           >> 0x0eU))))) 
            << 0x00000023U));
    vlSelfRef.__Vfunc_perm_64bit__120__state_out = 
        ((0xfff7ffffffffffffULL & vlSelfRef.__Vfunc_perm_64bit__120__state_out) 
         | ((QData)((IData)((1U & (IData)((__Vfunc_perm_64bit__120__state_in 
                                           >> 0x0fU))))) 
            << 0x00000033U));
    vlSelfRef.__Vfunc_perm_64bit__120__state_out = 
        ((0xffffffffffffffefULL & vlSelfRef.__Vfunc_perm_64bit__120__state_out) 
         | ((QData)((IData)((1U & (IData)((__Vfunc_perm_64bit__120__state_in 
                                           >> 0x10U))))) 
            << 4U));
    vlSelfRef.__Vfunc_perm_64bit__120__state_out = 
        ((0xffffffffffefffffULL & vlSelfRef.__Vfunc_perm_64bit__120__state_out) 
         | ((QData)((IData)((1U & (IData)((__Vfunc_perm_64bit__120__state_in 
                                           >> 0x11U))))) 
            << 0x00000014U));
    vlSelfRef.__Vfunc_perm_64bit__120__state_out = 
        ((0xffffffefffffffffULL & vlSelfRef.__Vfunc_perm_64bit__120__state_out) 
         | ((QData)((IData)((1U & (IData)((__Vfunc_perm_64bit__120__state_in 
                                           >> 0x12U))))) 
            << 0x00000024U));
    vlSelfRef.__Vfunc_perm_64bit__120__state_out = 
        ((0xffefffffffffffffULL & vlSelfRef.__Vfunc_perm_64bit__120__state_out) 
         | ((QData)((IData)((1U & (IData)((__Vfunc_perm_64bit__120__state_in 
                                           >> 0x13U))))) 
            << 0x00000034U));
    vlSelfRef.__Vfunc_perm_64bit__120__state_out = 
        ((0xffffffffffffffdfULL & vlSelfRef.__Vfunc_perm_64bit__120__state_out) 
         | ((QData)((IData)((1U & (IData)((__Vfunc_perm_64bit__120__state_in 
                                           >> 0x14U))))) 
            << 5U));
    vlSelfRef.__Vfunc_perm_64bit__120__state_out = 
        ((0xffffffffffdfffffULL & vlSelfRef.__Vfunc_perm_64bit__120__state_out) 
         | ((QData)((IData)((1U & (IData)((__Vfunc_perm_64bit__120__state_in 
                                           >> 0x15U))))) 
            << 0x00000015U));
    vlSelfRef.__Vfunc_perm_64bit__120__state_out = 
        ((0xffffffdfffffffffULL & vlSelfRef.__Vfunc_perm_64bit__120__state_out) 
         | ((QData)((IData)((1U & (IData)((__Vfunc_perm_64bit__120__state_in 
                                           >> 0x16U))))) 
            << 0x00000025U));
    vlSelfRef.__Vfunc_perm_64bit__120__state_out = 
        ((0xffdfffffffffffffULL & vlSelfRef.__Vfunc_perm_64bit__120__state_out) 
         | ((QData)((IData)((1U & (IData)((__Vfunc_perm_64bit__120__state_in 
                                           >> 0x17U))))) 
            << 0x00000035U));
    vlSelfRef.__Vfunc_perm_64bit__120__state_out = 
        ((0xffffffffffffffbfULL & vlSelfRef.__Vfunc_perm_64bit__120__state_out) 
         | ((QData)((IData)((1U & (IData)((__Vfunc_perm_64bit__120__state_in 
                                           >> 0x18U))))) 
            << 6U));
    vlSelfRef.__Vfunc_perm_64bit__120__state_out = 
        ((0xffffffffffbfffffULL & vlSelfRef.__Vfunc_perm_64bit__120__state_out) 
         | ((QData)((IData)((1U & (IData)((__Vfunc_perm_64bit__120__state_in 
                                           >> 0x19U))))) 
            << 0x00000016U));
    vlSelfRef.__Vfunc_perm_64bit__120__state_out = 
        ((0xffffffbfffffffffULL & vlSelfRef.__Vfunc_perm_64bit__120__state_out) 
         | ((QData)((IData)((1U & (IData)((__Vfunc_perm_64bit__120__state_in 
                                           >> 0x1aU))))) 
            << 0x00000026U));
    vlSelfRef.__Vfunc_perm_64bit__120__state_out = 
        ((0xffbfffffffffffffULL & vlSelfRef.__Vfunc_perm_64bit__120__state_out) 
         | ((QData)((IData)((1U & (IData)((__Vfunc_perm_64bit__120__state_in 
                                           >> 0x1bU))))) 
            << 0x00000036U));
    vlSelfRef.__Vfunc_perm_64bit__120__state_out = 
        ((0xffffffffffffff7fULL & vlSelfRef.__Vfunc_perm_64bit__120__state_out) 
         | ((QData)((IData)((1U & (IData)((__Vfunc_perm_64bit__120__state_in 
                                           >> 0x1cU))))) 
            << 7U));
    vlSelfRef.__Vfunc_perm_64bit__120__state_out = 
        ((0xffffffffff7fffffULL & vlSelfRef.__Vfunc_perm_64bit__120__state_out) 
         | ((QData)((IData)((1U & (IData)((__Vfunc_perm_64bit__120__state_in 
                                           >> 0x1dU))))) 
            << 0x00000017U));
    vlSelfRef.__Vfunc_perm_64bit__120__state_out = 
        ((0xffffff7fffffffffULL & vlSelfRef.__Vfunc_perm_64bit__120__state_out) 
         | ((QData)((IData)((1U & (IData)((__Vfunc_perm_64bit__120__state_in 
                                           >> 0x1eU))))) 
            << 0x00000027U));
    vlSelfRef.__Vfunc_perm_64bit__120__state_out = 
        ((0xff7fffffffffffffULL & vlSelfRef.__Vfunc_perm_64bit__120__state_out) 
         | ((QData)((IData)((1U & (IData)((__Vfunc_perm_64bit__120__state_in 
                                           >> 0x1fU))))) 
            << 0x00000037U));
    vlSelfRef.__Vfunc_perm_64bit__120__state_out = 
        ((0xfffffffffffffeffULL & vlSelfRef.__Vfunc_perm_64bit__120__state_out) 
         | ((QData)((IData)((1U & (IData)((__Vfunc_perm_64bit__120__state_in 
                                           >> 0x20U))))) 
            << 8U));
    vlSelfRef.__Vfunc_perm_64bit__120__state_out = 
        ((0xfffffffffeffffffULL & vlSelfRef.__Vfunc_perm_64bit__120__state_out) 
         | ((QData)((IData)((1U & (IData)((__Vfunc_perm_64bit__120__state_in 
                                           >> 0x21U))))) 
            << 0x00000018U));
    vlSelfRef.__Vfunc_perm_64bit__120__state_out = 
        ((0xfffffeffffffffffULL & vlSelfRef.__Vfunc_perm_64bit__120__state_out) 
         | ((QData)((IData)((1U & (IData)((__Vfunc_perm_64bit__120__state_in 
                                           >> 0x22U))))) 
            << 0x00000028U));
    vlSelfRef.__Vfunc_perm_64bit__120__state_out = 
        ((0xfeffffffffffffffULL & vlSelfRef.__Vfunc_perm_64bit__120__state_out) 
         | ((QData)((IData)((1U & (IData)((__Vfunc_perm_64bit__120__state_in 
                                           >> 0x23U))))) 
            << 0x00000038U));
    vlSelfRef.__Vfunc_perm_64bit__120__state_out = 
        ((0xfffffffffffffdffULL & vlSelfRef.__Vfunc_perm_64bit__120__state_out) 
         | ((QData)((IData)((1U & (IData)((__Vfunc_perm_64bit__120__state_in 
                                           >> 0x24U))))) 
            << 9U));
    vlSelfRef.__Vfunc_perm_64bit__120__state_out = 
        ((0xfffffffffdffffffULL & vlSelfRef.__Vfunc_perm_64bit__120__state_out) 
         | ((QData)((IData)((1U & (IData)((__Vfunc_perm_64bit__120__state_in 
                                           >> 0x25U))))) 
            << 0x00000019U));
    vlSelfRef.__Vfunc_perm_64bit__120__state_out = 
        ((0xfffffdffffffffffULL & vlSelfRef.__Vfunc_perm_64bit__120__state_out) 
         | ((QData)((IData)((1U & (IData)((__Vfunc_perm_64bit__120__state_in 
                                           >> 0x26U))))) 
            << 0x00000029U));
    vlSelfRef.__Vfunc_perm_64bit__120__state_out = 
        ((0xfdffffffffffffffULL & vlSelfRef.__Vfunc_perm_64bit__120__state_out) 
         | ((QData)((IData)((1U & (IData)((__Vfunc_perm_64bit__120__state_in 
                                           >> 0x27U))))) 
            << 0x00000039U));
    vlSelfRef.__Vfunc_perm_64bit__120__state_out = 
        ((0xfffffffffffffbffULL & vlSelfRef.__Vfunc_perm_64bit__120__state_out) 
         | ((QData)((IData)((1U & (IData)((__Vfunc_perm_64bit__120__state_in 
                                           >> 0x28U))))) 
            << 0x0000000aU));
    vlSelfRef.__Vfunc_perm_64bit__120__state_out = 
        ((0xfffffffffbffffffULL & vlSelfRef.__Vfunc_perm_64bit__120__state_out) 
         | ((QData)((IData)((1U & (IData)((__Vfunc_perm_64bit__120__state_in 
                                           >> 0x29U))))) 
            << 0x0000001aU));
    vlSelfRef.__Vfunc_perm_64bit__120__state_out = 
        ((0xfffffbffffffffffULL & vlSelfRef.__Vfunc_perm_64bit__120__state_out) 
         | ((QData)((IData)((1U & (IData)((__Vfunc_perm_64bit__120__state_in 
                                           >> 0x2aU))))) 
            << 0x0000002aU));
    vlSelfRef.__Vfunc_perm_64bit__120__state_out = 
        ((0xfbffffffffffffffULL & vlSelfRef.__Vfunc_perm_64bit__120__state_out) 
         | ((QData)((IData)((1U & (IData)((__Vfunc_perm_64bit__120__state_in 
                                           >> 0x2bU))))) 
            << 0x0000003aU));
    vlSelfRef.__Vfunc_perm_64bit__120__state_out = 
        ((0xfffffffffffff7ffULL & vlSelfRef.__Vfunc_perm_64bit__120__state_out) 
         | ((QData)((IData)((1U & (IData)((__Vfunc_perm_64bit__120__state_in 
                                           >> 0x2cU))))) 
            << 0x0000000bU));
    vlSelfRef.__Vfunc_perm_64bit__120__state_out = 
        ((0xfffffffff7ffffffULL & vlSelfRef.__Vfunc_perm_64bit__120__state_out) 
         | ((QData)((IData)((1U & (IData)((__Vfunc_perm_64bit__120__state_in 
                                           >> 0x2dU))))) 
            << 0x0000001bU));
    vlSelfRef.__Vfunc_perm_64bit__120__state_out = 
        ((0xfffff7ffffffffffULL & vlSelfRef.__Vfunc_perm_64bit__120__state_out) 
         | ((QData)((IData)((1U & (IData)((__Vfunc_perm_64bit__120__state_in 
                                           >> 0x2eU))))) 
            << 0x0000002bU));
    vlSelfRef.__Vfunc_perm_64bit__120__state_out = 
        ((0xf7ffffffffffffffULL & vlSelfRef.__Vfunc_perm_64bit__120__state_out) 
         | ((QData)((IData)((1U & (IData)((__Vfunc_perm_64bit__120__state_in 
                                           >> 0x2fU))))) 
            << 0x0000003bU));
    vlSelfRef.__Vfunc_perm_64bit__120__state_out = 
        ((0xffffffffffffefffULL & vlSelfRef.__Vfunc_perm_64bit__120__state_out) 
         | ((QData)((IData)((1U & (IData)((__Vfunc_perm_64bit__120__state_in 
                                           >> 0x30U))))) 
            << 0x0000000cU));
    vlSelfRef.__Vfunc_perm_64bit__120__state_out = 
        ((0xffffffffefffffffULL & vlSelfRef.__Vfunc_perm_64bit__120__state_out) 
         | ((QData)((IData)((1U & (IData)((__Vfunc_perm_64bit__120__state_in 
                                           >> 0x31U))))) 
            << 0x0000001cU));
    vlSelfRef.__Vfunc_perm_64bit__120__state_out = 
        ((0xffffefffffffffffULL & vlSelfRef.__Vfunc_perm_64bit__120__state_out) 
         | ((QData)((IData)((1U & (IData)((__Vfunc_perm_64bit__120__state_in 
                                           >> 0x32U))))) 
            << 0x0000002cU));
    vlSelfRef.__Vfunc_perm_64bit__120__state_out = 
        ((0xefffffffffffffffULL & vlSelfRef.__Vfunc_perm_64bit__120__state_out) 
         | ((QData)((IData)((1U & (IData)((__Vfunc_perm_64bit__120__state_in 
                                           >> 0x33U))))) 
            << 0x0000003cU));
    vlSelfRef.__Vfunc_perm_64bit__120__state_out = 
        ((0xffffffffffffdfffULL & vlSelfRef.__Vfunc_perm_64bit__120__state_out) 
         | ((QData)((IData)((1U & (IData)((__Vfunc_perm_64bit__120__state_in 
                                           >> 0x34U))))) 
            << 0x0000000dU));
    vlSelfRef.__Vfunc_perm_64bit__120__state_out = 
        ((0xffffffffdfffffffULL & vlSelfRef.__Vfunc_perm_64bit__120__state_out) 
         | ((QData)((IData)((1U & (IData)((__Vfunc_perm_64bit__120__state_in 
                                           >> 0x35U))))) 
            << 0x0000001dU));
    vlSelfRef.__Vfunc_perm_64bit__120__state_out = 
        ((0xffffdfffffffffffULL & vlSelfRef.__Vfunc_perm_64bit__120__state_out) 
         | ((QData)((IData)((1U & (IData)((__Vfunc_perm_64bit__120__state_in 
                                           >> 0x36U))))) 
            << 0x0000002dU));
    vlSelfRef.__Vfunc_perm_64bit__120__state_out = 
        ((0xdfffffffffffffffULL & vlSelfRef.__Vfunc_perm_64bit__120__state_out) 
         | ((QData)((IData)((1U & (IData)((__Vfunc_perm_64bit__120__state_in 
                                           >> 0x37U))))) 
            << 0x0000003dU));
    vlSelfRef.__Vfunc_perm_64bit__120__state_out = 
        ((0xffffffffffffbfffULL & vlSelfRef.__Vfunc_perm_64bit__120__state_out) 
         | ((QData)((IData)((1U & (IData)((__Vfunc_perm_64bit__120__state_in 
                                           >> 0x38U))))) 
            << 0x0000000eU));
    vlSelfRef.__Vfunc_perm_64bit__120__state_out = 
        ((0xffffffffbfffffffULL & vlSelfRef.__Vfunc_perm_64bit__120__state_out) 
         | ((QData)((IData)((1U & (IData)((__Vfunc_perm_64bit__120__state_in 
                                           >> 0x39U))))) 
            << 0x0000001eU));
    vlSelfRef.__Vfunc_perm_64bit__120__state_out = 
        ((0xffffbfffffffffffULL & vlSelfRef.__Vfunc_perm_64bit__120__state_out) 
         | ((QData)((IData)((1U & (IData)((__Vfunc_perm_64bit__120__state_in 
                                           >> 0x3aU))))) 
            << 0x0000002eU));
    vlSelfRef.__Vfunc_perm_64bit__120__state_out = 
        ((0xbfffffffffffffffULL & vlSelfRef.__Vfunc_perm_64bit__120__state_out) 
         | ((QData)((IData)((1U & (IData)((__Vfunc_perm_64bit__120__state_in 
                                           >> 0x3bU))))) 
            << 0x0000003eU));
    vlSelfRef.__Vfunc_perm_64bit__120__state_out = 
        ((0xffffffffffff7fffULL & vlSelfRef.__Vfunc_perm_64bit__120__state_out) 
         | ((QData)((IData)((1U & (IData)((__Vfunc_perm_64bit__120__state_in 
                                           >> 0x3cU))))) 
            << 0x0000000fU));
    vlSelfRef.__Vfunc_perm_64bit__120__state_out = 
        ((0xffffffff7fffffffULL & vlSelfRef.__Vfunc_perm_64bit__120__state_out) 
         | ((QData)((IData)((1U & (IData)((__Vfunc_perm_64bit__120__state_in 
                                           >> 0x3dU))))) 
            << 0x0000001fU));
    vlSelfRef.__Vfunc_perm_64bit__120__state_out = 
        ((0xffff7fffffffffffULL & vlSelfRef.__Vfunc_perm_64bit__120__state_out) 
         | ((QData)((IData)((1U & (IData)((__Vfunc_perm_64bit__120__state_in 
                                           >> 0x3eU))))) 
            << 0x0000002fU));
    vlSelfRef.__Vfunc_perm_64bit__120__state_out = 
        ((0x7fffffffffffffffULL & vlSelfRef.__Vfunc_perm_64bit__120__state_out) 
         | ((QData)((IData)((1U & (IData)((__Vfunc_perm_64bit__120__state_in 
                                           >> 0x3fU))))) 
            << 0x0000003fU));
    __Vfunc_perm_64bit__120__Vfuncout = vlSelfRef.__Vfunc_perm_64bit__120__state_out;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_scrmbl__DOT__u_prim_present_enc__DOT__data_state__BRA__127__03a64__KET__ 
        = __Vfunc_perm_64bit__120__Vfuncout;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_scrmbl__DOT__u_prim_present_enc__DOT__data_o 
        = ((0U == (0x0000001fU & ((IData)(1U) + (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_scrmbl__DOT__idx_state_q))))
            ? (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_scrmbl__DOT__u_prim_present_enc__DOT__data_state__BRA__127__03a64__KET__ 
               ^ (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_scrmbl__DOT__u_prim_present_enc__DOT__round_key[7U])) 
                   << 0x00000020U) | (QData)((IData)(
                                                     vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_scrmbl__DOT__u_prim_present_enc__DOT__round_key[6U]))))
            : vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_scrmbl__DOT__u_prim_present_enc__DOT__data_state__BRA__127__03a64__KET__);
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_scrmbl__DOT__enc_data_out_xor 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_scrmbl__DOT__digest_state_q 
           ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_scrmbl__DOT__u_prim_present_enc__DOT__data_o);
}

extern const VlUnpacked<CData/*1:0*/, 64> Vsim__ConstPool__TABLE_h135e4a04_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vsim__ConstPool__TABLE_hbe54c5ba_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vsim__ConstPool__TABLE_hd2e29309_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vsim__ConstPool__TABLE_h69d5aff5_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vsim__ConstPool__TABLE_h3c6387a4_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vsim__ConstPool__TABLE_hff2f9542_0;

void Vsim___024root___act_sequent__TOP__18(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___act_sequent__TOP__18\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*15:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__0__KET____DOT__u_sysrst_ctrl_detect_l2h__DOT__thresh;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__0__KET____DOT__u_sysrst_ctrl_detect_l2h__DOT__thresh = 0;
    CData/*5:0*/ __Vtableidx29;
    __Vtableidx29 = 0;
    // Body
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__0__KET____DOT__u_sysrst_ctrl_detect_l2h__DOT__thresh 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__0__KET____DOT__u_sysrst_ctrl_detect_l2h__DOT__thresh_sel)
            ? 0U : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_key_intr_debounce_ctl__q));
    __Vtableidx29 = ((((4U & (((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__0__KET____DOT__u_sysrst_ctrl_detect_l2h__DOT__gen_trigger_event_edge__DOT__trigger_active_q)) 
                               & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT____Vcellout__u_prim_flop_2sync_input__q_o)) 
                              << 2U)) | ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__0__KET____DOT__u_sysrst_ctrl_detect_l2h__DOT__cnt_q) 
                                           >= (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__0__KET____DOT__u_sysrst_ctrl_detect_l2h__DOT__thresh)) 
                                          << 1U) | 
                                         (1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT____Vcellout__u_prim_flop_2sync_input__q_o)))) 
                      << 3U) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_key_intr_ctl_flash_wp_l_l2h__q) 
                                 << 2U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__0__KET____DOT__u_sysrst_ctrl_detect_l2h__DOT__state_q)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__0__KET____DOT__u_sysrst_ctrl_detect_l2h__DOT__state_d 
        = Vsim__ConstPool__TABLE_h135e4a04_0[__Vtableidx29];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__0__KET____DOT__u_sysrst_ctrl_detect_l2h__DOT__cnt_clr 
        = Vsim__ConstPool__TABLE_hbe54c5ba_0[__Vtableidx29];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__0__KET____DOT__u_sysrst_ctrl_detect_l2h__DOT__cnt_en 
        = Vsim__ConstPool__TABLE_hd2e29309_0[__Vtableidx29];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__0__KET____DOT__u_sysrst_ctrl_detect_l2h__DOT__event_detected_o 
        = Vsim__ConstPool__TABLE_h69d5aff5_0[__Vtableidx29];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT____Vcellout__gen_keyfsm__BRA__0__KET____DOT__u_sysrst_ctrl_detect_l2h__event_detected_pulse_o 
        = Vsim__ConstPool__TABLE_h3c6387a4_0[__Vtableidx29];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__0__KET____DOT__u_sysrst_ctrl_detect_l2h__DOT__thresh_sel 
        = Vsim__ConstPool__TABLE_hff2f9542_0[__Vtableidx29];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__0__KET____DOT__u_sysrst_ctrl_detect_l2h__DOT__cnt_d 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__0__KET____DOT__u_sysrst_ctrl_detect_l2h__DOT__cnt_clr)
            ? 0U : (0x0000ffffU & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__0__KET____DOT__u_sysrst_ctrl_detect_l2h__DOT__cnt_q) 
                                   + (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__0__KET____DOT__u_sysrst_ctrl_detect_l2h__DOT__cnt_en))));
}

void Vsim___024root___act_sequent__TOP__19(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___act_sequent__TOP__19\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*15:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__0__KET____DOT__u_sysrst_ctrl_detect_h2l__DOT__thresh;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__0__KET____DOT__u_sysrst_ctrl_detect_h2l__DOT__thresh = 0;
    CData/*5:0*/ __Vtableidx30;
    __Vtableidx30 = 0;
    // Body
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__0__KET____DOT__u_sysrst_ctrl_detect_h2l__DOT__thresh 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__0__KET____DOT__u_sysrst_ctrl_detect_h2l__DOT__thresh_sel)
            ? 0U : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_key_intr_debounce_ctl__q));
    __Vtableidx30 = ((((4U & (((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT____Vcellout__u_prim_flop_2sync_input__q_o)) 
                               & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__0__KET____DOT__u_sysrst_ctrl_detect_h2l__DOT__gen_trigger_event_edge__DOT__trigger_active_q))) 
                              << 2U)) | ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__0__KET____DOT__u_sysrst_ctrl_detect_h2l__DOT__cnt_q) 
                                           >= (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__0__KET____DOT__u_sysrst_ctrl_detect_h2l__DOT__thresh)) 
                                          << 1U) | 
                                         (1U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT____Vcellout__u_prim_flop_2sync_input__q_o))))) 
                      << 3U) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_key_intr_ctl_flash_wp_l_h2l__q) 
                                 << 2U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__0__KET____DOT__u_sysrst_ctrl_detect_h2l__DOT__state_q)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__0__KET____DOT__u_sysrst_ctrl_detect_h2l__DOT__state_d 
        = Vsim__ConstPool__TABLE_h135e4a04_0[__Vtableidx30];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__0__KET____DOT__u_sysrst_ctrl_detect_h2l__DOT__cnt_clr 
        = Vsim__ConstPool__TABLE_hbe54c5ba_0[__Vtableidx30];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__0__KET____DOT__u_sysrst_ctrl_detect_h2l__DOT__cnt_en 
        = Vsim__ConstPool__TABLE_hd2e29309_0[__Vtableidx30];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__0__KET____DOT__u_sysrst_ctrl_detect_h2l__DOT__event_detected_o 
        = Vsim__ConstPool__TABLE_h69d5aff5_0[__Vtableidx30];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT____Vcellout__gen_keyfsm__BRA__0__KET____DOT__u_sysrst_ctrl_detect_h2l__event_detected_pulse_o 
        = Vsim__ConstPool__TABLE_h3c6387a4_0[__Vtableidx30];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__0__KET____DOT__u_sysrst_ctrl_detect_h2l__DOT__thresh_sel 
        = Vsim__ConstPool__TABLE_hff2f9542_0[__Vtableidx30];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__0__KET____DOT__u_sysrst_ctrl_detect_h2l__DOT__cnt_d 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__0__KET____DOT__u_sysrst_ctrl_detect_h2l__DOT__cnt_clr)
            ? 0U : (0x0000ffffU & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__0__KET____DOT__u_sysrst_ctrl_detect_h2l__DOT__cnt_q) 
                                   + (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__0__KET____DOT__u_sysrst_ctrl_detect_h2l__DOT__cnt_en))));
}

void Vsim___024root___act_sequent__TOP__20(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___act_sequent__TOP__20\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*15:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__1__KET____DOT__u_sysrst_ctrl_detect_l2h__DOT__thresh;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__1__KET____DOT__u_sysrst_ctrl_detect_l2h__DOT__thresh = 0;
    CData/*5:0*/ __Vtableidx31;
    __Vtableidx31 = 0;
    // Body
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__1__KET____DOT__u_sysrst_ctrl_detect_l2h__DOT__thresh 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__1__KET____DOT__u_sysrst_ctrl_detect_l2h__DOT__thresh_sel)
            ? 0U : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_key_intr_debounce_ctl__q));
    __Vtableidx31 = ((((4U & (((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__1__KET____DOT__u_sysrst_ctrl_detect_l2h__DOT__gen_trigger_event_edge__DOT__trigger_active_q)) 
                               << 2U) & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT____Vcellout__u_prim_flop_2sync_input__q_o) 
                                         << 1U))) | 
                       ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__1__KET____DOT__u_sysrst_ctrl_detect_l2h__DOT__cnt_q) 
                          >= (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__1__KET____DOT__u_sysrst_ctrl_detect_l2h__DOT__thresh)) 
                         << 1U) | (1U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT____Vcellout__u_prim_flop_2sync_input__q_o) 
                                         >> 1U)))) 
                      << 3U) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_key_intr_ctl_ec_rst_l_l2h__q) 
                                 << 2U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__1__KET____DOT__u_sysrst_ctrl_detect_l2h__DOT__state_q)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__1__KET____DOT__u_sysrst_ctrl_detect_l2h__DOT__state_d 
        = Vsim__ConstPool__TABLE_h135e4a04_0[__Vtableidx31];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__1__KET____DOT__u_sysrst_ctrl_detect_l2h__DOT__cnt_clr 
        = Vsim__ConstPool__TABLE_hbe54c5ba_0[__Vtableidx31];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__1__KET____DOT__u_sysrst_ctrl_detect_l2h__DOT__cnt_en 
        = Vsim__ConstPool__TABLE_hd2e29309_0[__Vtableidx31];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__1__KET____DOT__u_sysrst_ctrl_detect_l2h__DOT__event_detected_o 
        = Vsim__ConstPool__TABLE_h69d5aff5_0[__Vtableidx31];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT____Vcellout__gen_keyfsm__BRA__1__KET____DOT__u_sysrst_ctrl_detect_l2h__event_detected_pulse_o 
        = Vsim__ConstPool__TABLE_h3c6387a4_0[__Vtableidx31];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__1__KET____DOT__u_sysrst_ctrl_detect_l2h__DOT__thresh_sel 
        = Vsim__ConstPool__TABLE_hff2f9542_0[__Vtableidx31];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__1__KET____DOT__u_sysrst_ctrl_detect_l2h__DOT__cnt_d 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__1__KET____DOT__u_sysrst_ctrl_detect_l2h__DOT__cnt_clr)
            ? 0U : (0x0000ffffU & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__1__KET____DOT__u_sysrst_ctrl_detect_l2h__DOT__cnt_q) 
                                   + (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__1__KET____DOT__u_sysrst_ctrl_detect_l2h__DOT__cnt_en))));
}

void Vsim___024root___act_sequent__TOP__21(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___act_sequent__TOP__21\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*15:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__1__KET____DOT__u_sysrst_ctrl_detect_h2l__DOT__thresh;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__1__KET____DOT__u_sysrst_ctrl_detect_h2l__DOT__thresh = 0;
    CData/*5:0*/ __Vtableidx32;
    __Vtableidx32 = 0;
    // Body
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__1__KET____DOT__u_sysrst_ctrl_detect_h2l__DOT__thresh 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__1__KET____DOT__u_sysrst_ctrl_detect_h2l__DOT__thresh_sel)
            ? 0U : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_key_intr_debounce_ctl__q));
    __Vtableidx32 = ((((4U & (((~ ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT____Vcellout__u_prim_flop_2sync_input__q_o) 
                                   >> 1U)) & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__1__KET____DOT__u_sysrst_ctrl_detect_h2l__DOT__gen_trigger_event_edge__DOT__trigger_active_q))) 
                              << 2U)) | ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__1__KET____DOT__u_sysrst_ctrl_detect_h2l__DOT__cnt_q) 
                                           >= (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__1__KET____DOT__u_sysrst_ctrl_detect_h2l__DOT__thresh)) 
                                          << 1U) | 
                                         (1U & (~ ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT____Vcellout__u_prim_flop_2sync_input__q_o) 
                                                   >> 1U))))) 
                      << 3U) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_key_intr_ctl_ec_rst_l_h2l__q) 
                                 << 2U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__1__KET____DOT__u_sysrst_ctrl_detect_h2l__DOT__state_q)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__1__KET____DOT__u_sysrst_ctrl_detect_h2l__DOT__state_d 
        = Vsim__ConstPool__TABLE_h135e4a04_0[__Vtableidx32];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__1__KET____DOT__u_sysrst_ctrl_detect_h2l__DOT__cnt_clr 
        = Vsim__ConstPool__TABLE_hbe54c5ba_0[__Vtableidx32];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__1__KET____DOT__u_sysrst_ctrl_detect_h2l__DOT__cnt_en 
        = Vsim__ConstPool__TABLE_hd2e29309_0[__Vtableidx32];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__1__KET____DOT__u_sysrst_ctrl_detect_h2l__DOT__event_detected_o 
        = Vsim__ConstPool__TABLE_h69d5aff5_0[__Vtableidx32];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT____Vcellout__gen_keyfsm__BRA__1__KET____DOT__u_sysrst_ctrl_detect_h2l__event_detected_pulse_o 
        = Vsim__ConstPool__TABLE_h3c6387a4_0[__Vtableidx32];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__1__KET____DOT__u_sysrst_ctrl_detect_h2l__DOT__thresh_sel 
        = Vsim__ConstPool__TABLE_hff2f9542_0[__Vtableidx32];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__1__KET____DOT__u_sysrst_ctrl_detect_h2l__DOT__cnt_d 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__1__KET____DOT__u_sysrst_ctrl_detect_h2l__DOT__cnt_clr)
            ? 0U : (0x0000ffffU & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__1__KET____DOT__u_sysrst_ctrl_detect_h2l__DOT__cnt_q) 
                                   + (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__1__KET____DOT__u_sysrst_ctrl_detect_h2l__DOT__cnt_en))));
}

void Vsim___024root___act_sequent__TOP__22(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___act_sequent__TOP__22\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*15:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__2__KET____DOT__u_sysrst_ctrl_detect_l2h__DOT__thresh;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__2__KET____DOT__u_sysrst_ctrl_detect_l2h__DOT__thresh = 0;
    CData/*5:0*/ __Vtableidx33;
    __Vtableidx33 = 0;
    // Body
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__2__KET____DOT__u_sysrst_ctrl_detect_l2h__DOT__thresh 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__2__KET____DOT__u_sysrst_ctrl_detect_l2h__DOT__thresh_sel)
            ? 0U : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_key_intr_debounce_ctl__q));
    __Vtableidx33 = ((((4U & (((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__2__KET____DOT__u_sysrst_ctrl_detect_l2h__DOT__gen_trigger_event_edge__DOT__trigger_active_q)) 
                               << 2U) & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT____Vcellout__u_prim_flop_2sync_input__q_o) 
                                         >> 1U))) | 
                       ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__2__KET____DOT__u_sysrst_ctrl_detect_l2h__DOT__cnt_q) 
                          >= (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__2__KET____DOT__u_sysrst_ctrl_detect_l2h__DOT__thresh)) 
                         << 1U) | (1U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT____Vcellout__u_prim_flop_2sync_input__q_o) 
                                         >> 3U)))) 
                      << 3U) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_key_intr_ctl_ac_present_l2h__q) 
                                 << 2U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__2__KET____DOT__u_sysrst_ctrl_detect_l2h__DOT__state_q)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__2__KET____DOT__u_sysrst_ctrl_detect_l2h__DOT__state_d 
        = Vsim__ConstPool__TABLE_h135e4a04_0[__Vtableidx33];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__2__KET____DOT__u_sysrst_ctrl_detect_l2h__DOT__cnt_clr 
        = Vsim__ConstPool__TABLE_hbe54c5ba_0[__Vtableidx33];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__2__KET____DOT__u_sysrst_ctrl_detect_l2h__DOT__cnt_en 
        = Vsim__ConstPool__TABLE_hd2e29309_0[__Vtableidx33];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__2__KET____DOT__u_sysrst_ctrl_detect_l2h__DOT__event_detected_o 
        = Vsim__ConstPool__TABLE_h69d5aff5_0[__Vtableidx33];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT____Vcellout__gen_keyfsm__BRA__2__KET____DOT__u_sysrst_ctrl_detect_l2h__event_detected_pulse_o 
        = Vsim__ConstPool__TABLE_h3c6387a4_0[__Vtableidx33];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__2__KET____DOT__u_sysrst_ctrl_detect_l2h__DOT__thresh_sel 
        = Vsim__ConstPool__TABLE_hff2f9542_0[__Vtableidx33];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__2__KET____DOT__u_sysrst_ctrl_detect_l2h__DOT__cnt_d 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__2__KET____DOT__u_sysrst_ctrl_detect_l2h__DOT__cnt_clr)
            ? 0U : (0x0000ffffU & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__2__KET____DOT__u_sysrst_ctrl_detect_l2h__DOT__cnt_q) 
                                   + (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__2__KET____DOT__u_sysrst_ctrl_detect_l2h__DOT__cnt_en))));
}

void Vsim___024root___act_sequent__TOP__23(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___act_sequent__TOP__23\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*15:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__2__KET____DOT__u_sysrst_ctrl_detect_h2l__DOT__thresh;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__2__KET____DOT__u_sysrst_ctrl_detect_h2l__DOT__thresh = 0;
    CData/*5:0*/ __Vtableidx34;
    __Vtableidx34 = 0;
    // Body
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__2__KET____DOT__u_sysrst_ctrl_detect_h2l__DOT__thresh 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__2__KET____DOT__u_sysrst_ctrl_detect_h2l__DOT__thresh_sel)
            ? 0U : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_key_intr_debounce_ctl__q));
    __Vtableidx34 = ((((4U & (((~ ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT____Vcellout__u_prim_flop_2sync_input__q_o) 
                                   >> 3U)) & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__2__KET____DOT__u_sysrst_ctrl_detect_h2l__DOT__gen_trigger_event_edge__DOT__trigger_active_q))) 
                              << 2U)) | ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__2__KET____DOT__u_sysrst_ctrl_detect_h2l__DOT__cnt_q) 
                                           >= (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__2__KET____DOT__u_sysrst_ctrl_detect_h2l__DOT__thresh)) 
                                          << 1U) | 
                                         (1U & (~ ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT____Vcellout__u_prim_flop_2sync_input__q_o) 
                                                   >> 3U))))) 
                      << 3U) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_key_intr_ctl_ac_present_h2l__q) 
                                 << 2U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__2__KET____DOT__u_sysrst_ctrl_detect_h2l__DOT__state_q)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__2__KET____DOT__u_sysrst_ctrl_detect_h2l__DOT__state_d 
        = Vsim__ConstPool__TABLE_h135e4a04_0[__Vtableidx34];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__2__KET____DOT__u_sysrst_ctrl_detect_h2l__DOT__cnt_clr 
        = Vsim__ConstPool__TABLE_hbe54c5ba_0[__Vtableidx34];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__2__KET____DOT__u_sysrst_ctrl_detect_h2l__DOT__cnt_en 
        = Vsim__ConstPool__TABLE_hd2e29309_0[__Vtableidx34];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__2__KET____DOT__u_sysrst_ctrl_detect_h2l__DOT__event_detected_o 
        = Vsim__ConstPool__TABLE_h69d5aff5_0[__Vtableidx34];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT____Vcellout__gen_keyfsm__BRA__2__KET____DOT__u_sysrst_ctrl_detect_h2l__event_detected_pulse_o 
        = Vsim__ConstPool__TABLE_h3c6387a4_0[__Vtableidx34];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__2__KET____DOT__u_sysrst_ctrl_detect_h2l__DOT__thresh_sel 
        = Vsim__ConstPool__TABLE_hff2f9542_0[__Vtableidx34];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__2__KET____DOT__u_sysrst_ctrl_detect_h2l__DOT__cnt_d 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__2__KET____DOT__u_sysrst_ctrl_detect_h2l__DOT__cnt_clr)
            ? 0U : (0x0000ffffU & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__2__KET____DOT__u_sysrst_ctrl_detect_h2l__DOT__cnt_q) 
                                   + (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__2__KET____DOT__u_sysrst_ctrl_detect_h2l__DOT__cnt_en))));
}

void Vsim___024root___act_sequent__TOP__24(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___act_sequent__TOP__24\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*15:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__3__KET____DOT__u_sysrst_ctrl_detect_l2h__DOT__thresh;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__3__KET____DOT__u_sysrst_ctrl_detect_l2h__DOT__thresh = 0;
    CData/*5:0*/ __Vtableidx35;
    __Vtableidx35 = 0;
    // Body
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__3__KET____DOT__u_sysrst_ctrl_detect_l2h__DOT__thresh 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__3__KET____DOT__u_sysrst_ctrl_detect_l2h__DOT__thresh_sel)
            ? 0U : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_key_intr_debounce_ctl__q));
    __Vtableidx35 = ((((4U & (((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__3__KET____DOT__u_sysrst_ctrl_detect_l2h__DOT__gen_trigger_event_edge__DOT__trigger_active_q)) 
                               << 2U) & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT____Vcellout__u_prim_flop_2sync_input__q_o) 
                                         >> 2U))) | 
                       ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__3__KET____DOT__u_sysrst_ctrl_detect_l2h__DOT__cnt_q) 
                          >= (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__3__KET____DOT__u_sysrst_ctrl_detect_l2h__DOT__thresh)) 
                         << 1U) | (1U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT____Vcellout__u_prim_flop_2sync_input__q_o) 
                                         >> 4U)))) 
                      << 3U) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_key_intr_ctl_key2_in_l2h__q) 
                                 << 2U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__3__KET____DOT__u_sysrst_ctrl_detect_l2h__DOT__state_q)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__3__KET____DOT__u_sysrst_ctrl_detect_l2h__DOT__state_d 
        = Vsim__ConstPool__TABLE_h135e4a04_0[__Vtableidx35];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__3__KET____DOT__u_sysrst_ctrl_detect_l2h__DOT__cnt_clr 
        = Vsim__ConstPool__TABLE_hbe54c5ba_0[__Vtableidx35];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__3__KET____DOT__u_sysrst_ctrl_detect_l2h__DOT__cnt_en 
        = Vsim__ConstPool__TABLE_hd2e29309_0[__Vtableidx35];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__3__KET____DOT__u_sysrst_ctrl_detect_l2h__DOT__event_detected_o 
        = Vsim__ConstPool__TABLE_h69d5aff5_0[__Vtableidx35];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT____Vcellout__gen_keyfsm__BRA__3__KET____DOT__u_sysrst_ctrl_detect_l2h__event_detected_pulse_o 
        = Vsim__ConstPool__TABLE_h3c6387a4_0[__Vtableidx35];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__3__KET____DOT__u_sysrst_ctrl_detect_l2h__DOT__thresh_sel 
        = Vsim__ConstPool__TABLE_hff2f9542_0[__Vtableidx35];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__3__KET____DOT__u_sysrst_ctrl_detect_l2h__DOT__cnt_d 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__3__KET____DOT__u_sysrst_ctrl_detect_l2h__DOT__cnt_clr)
            ? 0U : (0x0000ffffU & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__3__KET____DOT__u_sysrst_ctrl_detect_l2h__DOT__cnt_q) 
                                   + (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__3__KET____DOT__u_sysrst_ctrl_detect_l2h__DOT__cnt_en))));
}

void Vsim___024root___act_sequent__TOP__25(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___act_sequent__TOP__25\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*15:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__3__KET____DOT__u_sysrst_ctrl_detect_h2l__DOT__thresh;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__3__KET____DOT__u_sysrst_ctrl_detect_h2l__DOT__thresh = 0;
    CData/*5:0*/ __Vtableidx36;
    __Vtableidx36 = 0;
    // Body
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__3__KET____DOT__u_sysrst_ctrl_detect_h2l__DOT__thresh 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__3__KET____DOT__u_sysrst_ctrl_detect_h2l__DOT__thresh_sel)
            ? 0U : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_key_intr_debounce_ctl__q));
    __Vtableidx36 = ((((4U & (((~ ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT____Vcellout__u_prim_flop_2sync_input__q_o) 
                                   >> 4U)) & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__3__KET____DOT__u_sysrst_ctrl_detect_h2l__DOT__gen_trigger_event_edge__DOT__trigger_active_q))) 
                              << 2U)) | ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__3__KET____DOT__u_sysrst_ctrl_detect_h2l__DOT__cnt_q) 
                                           >= (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__3__KET____DOT__u_sysrst_ctrl_detect_h2l__DOT__thresh)) 
                                          << 1U) | 
                                         (1U & (~ ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT____Vcellout__u_prim_flop_2sync_input__q_o) 
                                                   >> 4U))))) 
                      << 3U) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_key_intr_ctl_key2_in_h2l__q) 
                                 << 2U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__3__KET____DOT__u_sysrst_ctrl_detect_h2l__DOT__state_q)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__3__KET____DOT__u_sysrst_ctrl_detect_h2l__DOT__state_d 
        = Vsim__ConstPool__TABLE_h135e4a04_0[__Vtableidx36];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__3__KET____DOT__u_sysrst_ctrl_detect_h2l__DOT__cnt_clr 
        = Vsim__ConstPool__TABLE_hbe54c5ba_0[__Vtableidx36];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__3__KET____DOT__u_sysrst_ctrl_detect_h2l__DOT__cnt_en 
        = Vsim__ConstPool__TABLE_hd2e29309_0[__Vtableidx36];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__3__KET____DOT__u_sysrst_ctrl_detect_h2l__DOT__event_detected_o 
        = Vsim__ConstPool__TABLE_h69d5aff5_0[__Vtableidx36];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT____Vcellout__gen_keyfsm__BRA__3__KET____DOT__u_sysrst_ctrl_detect_h2l__event_detected_pulse_o 
        = Vsim__ConstPool__TABLE_h3c6387a4_0[__Vtableidx36];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__3__KET____DOT__u_sysrst_ctrl_detect_h2l__DOT__thresh_sel 
        = Vsim__ConstPool__TABLE_hff2f9542_0[__Vtableidx36];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__3__KET____DOT__u_sysrst_ctrl_detect_h2l__DOT__cnt_d 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__3__KET____DOT__u_sysrst_ctrl_detect_h2l__DOT__cnt_clr)
            ? 0U : (0x0000ffffU & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__3__KET____DOT__u_sysrst_ctrl_detect_h2l__DOT__cnt_q) 
                                   + (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__3__KET____DOT__u_sysrst_ctrl_detect_h2l__DOT__cnt_en))));
}

void Vsim___024root___act_sequent__TOP__26(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___act_sequent__TOP__26\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*15:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__4__KET____DOT__u_sysrst_ctrl_detect_l2h__DOT__thresh;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__4__KET____DOT__u_sysrst_ctrl_detect_l2h__DOT__thresh = 0;
    CData/*5:0*/ __Vtableidx37;
    __Vtableidx37 = 0;
    // Body
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__4__KET____DOT__u_sysrst_ctrl_detect_l2h__DOT__thresh 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__4__KET____DOT__u_sysrst_ctrl_detect_l2h__DOT__thresh_sel)
            ? 0U : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_key_intr_debounce_ctl__q));
    __Vtableidx37 = ((((4U & (((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__4__KET____DOT__u_sysrst_ctrl_detect_l2h__DOT__gen_trigger_event_edge__DOT__trigger_active_q)) 
                               << 2U) & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT____Vcellout__u_prim_flop_2sync_input__q_o) 
                                         >> 3U))) | 
                       ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__4__KET____DOT__u_sysrst_ctrl_detect_l2h__DOT__cnt_q) 
                          >= (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__4__KET____DOT__u_sysrst_ctrl_detect_l2h__DOT__thresh)) 
                         << 1U) | (1U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT____Vcellout__u_prim_flop_2sync_input__q_o) 
                                         >> 5U)))) 
                      << 3U) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_key_intr_ctl_key1_in_l2h__q) 
                                 << 2U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__4__KET____DOT__u_sysrst_ctrl_detect_l2h__DOT__state_q)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__4__KET____DOT__u_sysrst_ctrl_detect_l2h__DOT__state_d 
        = Vsim__ConstPool__TABLE_h135e4a04_0[__Vtableidx37];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__4__KET____DOT__u_sysrst_ctrl_detect_l2h__DOT__cnt_clr 
        = Vsim__ConstPool__TABLE_hbe54c5ba_0[__Vtableidx37];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__4__KET____DOT__u_sysrst_ctrl_detect_l2h__DOT__cnt_en 
        = Vsim__ConstPool__TABLE_hd2e29309_0[__Vtableidx37];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__4__KET____DOT__u_sysrst_ctrl_detect_l2h__DOT__event_detected_o 
        = Vsim__ConstPool__TABLE_h69d5aff5_0[__Vtableidx37];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT____Vcellout__gen_keyfsm__BRA__4__KET____DOT__u_sysrst_ctrl_detect_l2h__event_detected_pulse_o 
        = Vsim__ConstPool__TABLE_h3c6387a4_0[__Vtableidx37];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__4__KET____DOT__u_sysrst_ctrl_detect_l2h__DOT__thresh_sel 
        = Vsim__ConstPool__TABLE_hff2f9542_0[__Vtableidx37];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__4__KET____DOT__u_sysrst_ctrl_detect_l2h__DOT__cnt_d 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__4__KET____DOT__u_sysrst_ctrl_detect_l2h__DOT__cnt_clr)
            ? 0U : (0x0000ffffU & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__4__KET____DOT__u_sysrst_ctrl_detect_l2h__DOT__cnt_q) 
                                   + (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__4__KET____DOT__u_sysrst_ctrl_detect_l2h__DOT__cnt_en))));
}

void Vsim___024root___act_sequent__TOP__27(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___act_sequent__TOP__27\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*15:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__4__KET____DOT__u_sysrst_ctrl_detect_h2l__DOT__thresh;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__4__KET____DOT__u_sysrst_ctrl_detect_h2l__DOT__thresh = 0;
    CData/*5:0*/ __Vtableidx38;
    __Vtableidx38 = 0;
    // Body
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__4__KET____DOT__u_sysrst_ctrl_detect_h2l__DOT__thresh 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__4__KET____DOT__u_sysrst_ctrl_detect_h2l__DOT__thresh_sel)
            ? 0U : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_key_intr_debounce_ctl__q));
    __Vtableidx38 = ((((4U & (((~ ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT____Vcellout__u_prim_flop_2sync_input__q_o) 
                                   >> 5U)) & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__4__KET____DOT__u_sysrst_ctrl_detect_h2l__DOT__gen_trigger_event_edge__DOT__trigger_active_q))) 
                              << 2U)) | ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__4__KET____DOT__u_sysrst_ctrl_detect_h2l__DOT__cnt_q) 
                                           >= (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__4__KET____DOT__u_sysrst_ctrl_detect_h2l__DOT__thresh)) 
                                          << 1U) | 
                                         (1U & (~ ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT____Vcellout__u_prim_flop_2sync_input__q_o) 
                                                   >> 5U))))) 
                      << 3U) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_key_intr_ctl_key1_in_h2l__q) 
                                 << 2U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__4__KET____DOT__u_sysrst_ctrl_detect_h2l__DOT__state_q)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__4__KET____DOT__u_sysrst_ctrl_detect_h2l__DOT__state_d 
        = Vsim__ConstPool__TABLE_h135e4a04_0[__Vtableidx38];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__4__KET____DOT__u_sysrst_ctrl_detect_h2l__DOT__cnt_clr 
        = Vsim__ConstPool__TABLE_hbe54c5ba_0[__Vtableidx38];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__4__KET____DOT__u_sysrst_ctrl_detect_h2l__DOT__cnt_en 
        = Vsim__ConstPool__TABLE_hd2e29309_0[__Vtableidx38];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__4__KET____DOT__u_sysrst_ctrl_detect_h2l__DOT__event_detected_o 
        = Vsim__ConstPool__TABLE_h69d5aff5_0[__Vtableidx38];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT____Vcellout__gen_keyfsm__BRA__4__KET____DOT__u_sysrst_ctrl_detect_h2l__event_detected_pulse_o 
        = Vsim__ConstPool__TABLE_h3c6387a4_0[__Vtableidx38];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__4__KET____DOT__u_sysrst_ctrl_detect_h2l__DOT__thresh_sel 
        = Vsim__ConstPool__TABLE_hff2f9542_0[__Vtableidx38];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__4__KET____DOT__u_sysrst_ctrl_detect_h2l__DOT__cnt_d 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__4__KET____DOT__u_sysrst_ctrl_detect_h2l__DOT__cnt_clr)
            ? 0U : (0x0000ffffU & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__4__KET____DOT__u_sysrst_ctrl_detect_h2l__DOT__cnt_q) 
                                   + (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__4__KET____DOT__u_sysrst_ctrl_detect_h2l__DOT__cnt_en))));
}

void Vsim___024root___act_sequent__TOP__28(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___act_sequent__TOP__28\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*15:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__5__KET____DOT__u_sysrst_ctrl_detect_l2h__DOT__thresh;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__5__KET____DOT__u_sysrst_ctrl_detect_l2h__DOT__thresh = 0;
    CData/*5:0*/ __Vtableidx39;
    __Vtableidx39 = 0;
    // Body
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__5__KET____DOT__u_sysrst_ctrl_detect_l2h__DOT__thresh 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__5__KET____DOT__u_sysrst_ctrl_detect_l2h__DOT__thresh_sel)
            ? 0U : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_key_intr_debounce_ctl__q));
    __Vtableidx39 = ((((4U & (((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__5__KET____DOT__u_sysrst_ctrl_detect_l2h__DOT__gen_trigger_event_edge__DOT__trigger_active_q)) 
                               << 2U) & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT____Vcellout__u_prim_flop_2sync_input__q_o) 
                                         >> 4U))) | 
                       ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__5__KET____DOT__u_sysrst_ctrl_detect_l2h__DOT__cnt_q) 
                          >= (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__5__KET____DOT__u_sysrst_ctrl_detect_l2h__DOT__thresh)) 
                         << 1U) | (1U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT____Vcellout__u_prim_flop_2sync_input__q_o) 
                                         >> 6U)))) 
                      << 3U) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_key_intr_ctl_key0_in_l2h__q) 
                                 << 2U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__5__KET____DOT__u_sysrst_ctrl_detect_l2h__DOT__state_q)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__5__KET____DOT__u_sysrst_ctrl_detect_l2h__DOT__state_d 
        = Vsim__ConstPool__TABLE_h135e4a04_0[__Vtableidx39];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__5__KET____DOT__u_sysrst_ctrl_detect_l2h__DOT__cnt_clr 
        = Vsim__ConstPool__TABLE_hbe54c5ba_0[__Vtableidx39];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__5__KET____DOT__u_sysrst_ctrl_detect_l2h__DOT__cnt_en 
        = Vsim__ConstPool__TABLE_hd2e29309_0[__Vtableidx39];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__5__KET____DOT__u_sysrst_ctrl_detect_l2h__DOT__event_detected_o 
        = Vsim__ConstPool__TABLE_h69d5aff5_0[__Vtableidx39];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT____Vcellout__gen_keyfsm__BRA__5__KET____DOT__u_sysrst_ctrl_detect_l2h__event_detected_pulse_o 
        = Vsim__ConstPool__TABLE_h3c6387a4_0[__Vtableidx39];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__5__KET____DOT__u_sysrst_ctrl_detect_l2h__DOT__thresh_sel 
        = Vsim__ConstPool__TABLE_hff2f9542_0[__Vtableidx39];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__5__KET____DOT__u_sysrst_ctrl_detect_l2h__DOT__cnt_d 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__5__KET____DOT__u_sysrst_ctrl_detect_l2h__DOT__cnt_clr)
            ? 0U : (0x0000ffffU & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__5__KET____DOT__u_sysrst_ctrl_detect_l2h__DOT__cnt_q) 
                                   + (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__5__KET____DOT__u_sysrst_ctrl_detect_l2h__DOT__cnt_en))));
}

void Vsim___024root___act_sequent__TOP__29(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___act_sequent__TOP__29\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*15:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__5__KET____DOT__u_sysrst_ctrl_detect_h2l__DOT__thresh;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__5__KET____DOT__u_sysrst_ctrl_detect_h2l__DOT__thresh = 0;
    CData/*5:0*/ __Vtableidx40;
    __Vtableidx40 = 0;
    // Body
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__5__KET____DOT__u_sysrst_ctrl_detect_h2l__DOT__thresh 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__5__KET____DOT__u_sysrst_ctrl_detect_h2l__DOT__thresh_sel)
            ? 0U : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_key_intr_debounce_ctl__q));
    __Vtableidx40 = ((((4U & (((~ ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT____Vcellout__u_prim_flop_2sync_input__q_o) 
                                   >> 6U)) & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__5__KET____DOT__u_sysrst_ctrl_detect_h2l__DOT__gen_trigger_event_edge__DOT__trigger_active_q))) 
                              << 2U)) | ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__5__KET____DOT__u_sysrst_ctrl_detect_h2l__DOT__cnt_q) 
                                           >= (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__5__KET____DOT__u_sysrst_ctrl_detect_h2l__DOT__thresh)) 
                                          << 1U) | 
                                         (1U & (~ ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT____Vcellout__u_prim_flop_2sync_input__q_o) 
                                                   >> 6U))))) 
                      << 3U) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_key_intr_ctl_key0_in_h2l__q) 
                                 << 2U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__5__KET____DOT__u_sysrst_ctrl_detect_h2l__DOT__state_q)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__5__KET____DOT__u_sysrst_ctrl_detect_h2l__DOT__state_d 
        = Vsim__ConstPool__TABLE_h135e4a04_0[__Vtableidx40];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__5__KET____DOT__u_sysrst_ctrl_detect_h2l__DOT__cnt_clr 
        = Vsim__ConstPool__TABLE_hbe54c5ba_0[__Vtableidx40];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__5__KET____DOT__u_sysrst_ctrl_detect_h2l__DOT__cnt_en 
        = Vsim__ConstPool__TABLE_hd2e29309_0[__Vtableidx40];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__5__KET____DOT__u_sysrst_ctrl_detect_h2l__DOT__event_detected_o 
        = Vsim__ConstPool__TABLE_h69d5aff5_0[__Vtableidx40];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT____Vcellout__gen_keyfsm__BRA__5__KET____DOT__u_sysrst_ctrl_detect_h2l__event_detected_pulse_o 
        = Vsim__ConstPool__TABLE_h3c6387a4_0[__Vtableidx40];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__5__KET____DOT__u_sysrst_ctrl_detect_h2l__DOT__thresh_sel 
        = Vsim__ConstPool__TABLE_hff2f9542_0[__Vtableidx40];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__5__KET____DOT__u_sysrst_ctrl_detect_h2l__DOT__cnt_d 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__5__KET____DOT__u_sysrst_ctrl_detect_h2l__DOT__cnt_clr)
            ? 0U : (0x0000ffffU & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__5__KET____DOT__u_sysrst_ctrl_detect_h2l__DOT__cnt_q) 
                                   + (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__5__KET____DOT__u_sysrst_ctrl_detect_h2l__DOT__cnt_en))));
}

void Vsim___024root___act_sequent__TOP__30(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___act_sequent__TOP__30\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*15:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__6__KET____DOT__u_sysrst_ctrl_detect_l2h__DOT__thresh;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__6__KET____DOT__u_sysrst_ctrl_detect_l2h__DOT__thresh = 0;
    CData/*5:0*/ __Vtableidx41;
    __Vtableidx41 = 0;
    // Body
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__6__KET____DOT__u_sysrst_ctrl_detect_l2h__DOT__thresh 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__6__KET____DOT__u_sysrst_ctrl_detect_l2h__DOT__thresh_sel)
            ? 0U : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_key_intr_debounce_ctl__q));
    __Vtableidx41 = (((((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__6__KET____DOT__u_sysrst_ctrl_detect_l2h__DOT__gen_trigger_event_edge__DOT__trigger_active_q)) 
                        & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT____Vcellout__u_prim_flop_2sync_input__q_o) 
                           >> 7U)) << 5U) | ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__6__KET____DOT__u_sysrst_ctrl_detect_l2h__DOT__cnt_q) 
                                               >= (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__6__KET____DOT__u_sysrst_ctrl_detect_l2h__DOT__thresh)) 
                                              << 4U) 
                                             | (8U 
                                                & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT____Vcellout__u_prim_flop_2sync_input__q_o) 
                                                   >> 4U)))) 
                     | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_key_intr_ctl_pwrb_in_l2h__q) 
                         << 2U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__6__KET____DOT__u_sysrst_ctrl_detect_l2h__DOT__state_q)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__6__KET____DOT__u_sysrst_ctrl_detect_l2h__DOT__state_d 
        = Vsim__ConstPool__TABLE_h135e4a04_0[__Vtableidx41];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__6__KET____DOT__u_sysrst_ctrl_detect_l2h__DOT__cnt_clr 
        = Vsim__ConstPool__TABLE_hbe54c5ba_0[__Vtableidx41];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__6__KET____DOT__u_sysrst_ctrl_detect_l2h__DOT__cnt_en 
        = Vsim__ConstPool__TABLE_hd2e29309_0[__Vtableidx41];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__6__KET____DOT__u_sysrst_ctrl_detect_l2h__DOT__event_detected_o 
        = Vsim__ConstPool__TABLE_h69d5aff5_0[__Vtableidx41];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT____Vcellout__gen_keyfsm__BRA__6__KET____DOT__u_sysrst_ctrl_detect_l2h__event_detected_pulse_o 
        = Vsim__ConstPool__TABLE_h3c6387a4_0[__Vtableidx41];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__6__KET____DOT__u_sysrst_ctrl_detect_l2h__DOT__thresh_sel 
        = Vsim__ConstPool__TABLE_hff2f9542_0[__Vtableidx41];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__6__KET____DOT__u_sysrst_ctrl_detect_l2h__DOT__cnt_d 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__6__KET____DOT__u_sysrst_ctrl_detect_l2h__DOT__cnt_clr)
            ? 0U : (0x0000ffffU & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__6__KET____DOT__u_sysrst_ctrl_detect_l2h__DOT__cnt_q) 
                                   + (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__6__KET____DOT__u_sysrst_ctrl_detect_l2h__DOT__cnt_en))));
}

void Vsim___024root___act_sequent__TOP__31(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___act_sequent__TOP__31\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*15:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__6__KET____DOT__u_sysrst_ctrl_detect_h2l__DOT__thresh;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__6__KET____DOT__u_sysrst_ctrl_detect_h2l__DOT__thresh = 0;
    CData/*5:0*/ __Vtableidx42;
    __Vtableidx42 = 0;
    // Body
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__6__KET____DOT__u_sysrst_ctrl_detect_h2l__DOT__thresh 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__6__KET____DOT__u_sysrst_ctrl_detect_h2l__DOT__thresh_sel)
            ? 0U : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_key_intr_debounce_ctl__q));
    __Vtableidx42 = ((((4U & (((~ ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT____Vcellout__u_prim_flop_2sync_input__q_o) 
                                   >> 7U)) & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__6__KET____DOT__u_sysrst_ctrl_detect_h2l__DOT__gen_trigger_event_edge__DOT__trigger_active_q))) 
                              << 2U)) | ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__6__KET____DOT__u_sysrst_ctrl_detect_h2l__DOT__cnt_q) 
                                           >= (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__6__KET____DOT__u_sysrst_ctrl_detect_h2l__DOT__thresh)) 
                                          << 1U) | 
                                         (1U & (~ ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT____Vcellout__u_prim_flop_2sync_input__q_o) 
                                                   >> 7U))))) 
                      << 3U) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_key_intr_ctl_pwrb_in_h2l__q) 
                                 << 2U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__6__KET____DOT__u_sysrst_ctrl_detect_h2l__DOT__state_q)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__6__KET____DOT__u_sysrst_ctrl_detect_h2l__DOT__state_d 
        = Vsim__ConstPool__TABLE_h135e4a04_0[__Vtableidx42];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__6__KET____DOT__u_sysrst_ctrl_detect_h2l__DOT__cnt_clr 
        = Vsim__ConstPool__TABLE_hbe54c5ba_0[__Vtableidx42];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__6__KET____DOT__u_sysrst_ctrl_detect_h2l__DOT__cnt_en 
        = Vsim__ConstPool__TABLE_hd2e29309_0[__Vtableidx42];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__6__KET____DOT__u_sysrst_ctrl_detect_h2l__DOT__event_detected_o 
        = Vsim__ConstPool__TABLE_h69d5aff5_0[__Vtableidx42];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT____Vcellout__gen_keyfsm__BRA__6__KET____DOT__u_sysrst_ctrl_detect_h2l__event_detected_pulse_o 
        = Vsim__ConstPool__TABLE_h3c6387a4_0[__Vtableidx42];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__6__KET____DOT__u_sysrst_ctrl_detect_h2l__DOT__thresh_sel 
        = Vsim__ConstPool__TABLE_hff2f9542_0[__Vtableidx42];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__6__KET____DOT__u_sysrst_ctrl_detect_h2l__DOT__cnt_d 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__6__KET____DOT__u_sysrst_ctrl_detect_h2l__DOT__cnt_clr)
            ? 0U : (0x0000ffffU & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__6__KET____DOT__u_sysrst_ctrl_detect_h2l__DOT__cnt_q) 
                                   + (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_keyintr__DOT__gen_keyfsm__BRA__6__KET____DOT__u_sysrst_ctrl_detect_h2l__DOT__cnt_en))));
}

void Vsim___024root___act_sequent__TOP__32(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___act_sequent__TOP__32\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_combo__DOT__gen_combo_trigger__BRA__0__KET____DOT__u_sysrst_ctrl_detect__DOT__thresh 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_combo__DOT__gen_combo_trigger__BRA__0__KET____DOT__u_sysrst_ctrl_detect__DOT__thresh_sel)
            ? vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_com_det_ctl_0__q
            : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_key_intr_debounce_ctl__q));
}

void Vsim___024root___act_sequent__TOP__33(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___act_sequent__TOP__33\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_combo__DOT__gen_combo_trigger__BRA__1__KET____DOT__u_sysrst_ctrl_detect__DOT__thresh 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_combo__DOT__gen_combo_trigger__BRA__1__KET____DOT__u_sysrst_ctrl_detect__DOT__thresh_sel)
            ? vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_com_det_ctl_1__q
            : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_key_intr_debounce_ctl__q));
}

void Vsim___024root___act_sequent__TOP__34(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___act_sequent__TOP__34\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_combo__DOT__gen_combo_trigger__BRA__2__KET____DOT__u_sysrst_ctrl_detect__DOT__thresh 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_combo__DOT__gen_combo_trigger__BRA__2__KET____DOT__u_sysrst_ctrl_detect__DOT__thresh_sel)
            ? vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_com_det_ctl_2__q
            : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_key_intr_debounce_ctl__q));
}

void Vsim___024root___act_sequent__TOP__35(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___act_sequent__TOP__35\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_combo__DOT__gen_combo_trigger__BRA__3__KET____DOT__u_sysrst_ctrl_detect__DOT__thresh 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_combo__DOT__gen_combo_trigger__BRA__3__KET____DOT__u_sysrst_ctrl_detect__DOT__thresh_sel)
            ? vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_com_det_ctl_3__q
            : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_key_intr_debounce_ctl__q));
}

void Vsim___024root___act_sequent__TOP__36(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___act_sequent__TOP__36\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_combo__DOT__gen_combo_trigger__BRA__0__KET____DOT__u_sysrst_ctrl_detect_pre__DOT__thresh;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_combo__DOT__gen_combo_trigger__BRA__0__KET____DOT__u_sysrst_ctrl_detect_pre__DOT__thresh = 0;
    CData/*5:0*/ __Vtableidx43;
    __Vtableidx43 = 0;
    // Body
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_combo__DOT__gen_combo_trigger__BRA__0__KET____DOT__u_sysrst_ctrl_detect_pre__DOT__thresh 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_combo__DOT__gen_combo_trigger__BRA__0__KET____DOT__u_sysrst_ctrl_detect_pre__DOT__thresh_sel)
            ? vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_com_pre_det_ctl_0__q
            : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_key_intr_debounce_ctl__q));
    __Vtableidx43 = ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_combo__DOT__gen_combo_trigger__BRA__0__KET____DOT__u_sysrst_ctrl_detect_pre__DOT__trigger_i) 
                       << 5U) | (((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_combo__DOT__gen_combo_trigger__BRA__0__KET____DOT__u_sysrst_ctrl_detect_pre__DOT__cnt_q 
                                   >= chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_combo__DOT__gen_combo_trigger__BRA__0__KET____DOT__u_sysrst_ctrl_detect_pre__DOT__thresh) 
                                  << 4U) | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_combo__DOT__gen_combo_trigger__BRA__0__KET____DOT__u_sysrst_ctrl_detect_pre__DOT__trigger_i) 
                                            << 3U))) 
                     | (((0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_combo__DOT__gen_combo_trigger__BRA__0__KET____DOT__cfg_in_pre)) 
                         << 2U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_combo__DOT__gen_combo_trigger__BRA__0__KET____DOT__u_sysrst_ctrl_detect_pre__DOT__state_q)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_combo__DOT__gen_combo_trigger__BRA__0__KET____DOT__u_sysrst_ctrl_detect_pre__DOT__state_d 
        = Vsim__ConstPool__TABLE_h135e4a04_0[__Vtableidx43];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_combo__DOT__gen_combo_trigger__BRA__0__KET____DOT__u_sysrst_ctrl_detect_pre__DOT__cnt_clr 
        = Vsim__ConstPool__TABLE_hbe54c5ba_0[__Vtableidx43];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_combo__DOT__gen_combo_trigger__BRA__0__KET____DOT__u_sysrst_ctrl_detect_pre__DOT__cnt_en 
        = Vsim__ConstPool__TABLE_hd2e29309_0[__Vtableidx43];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_combo__DOT__gen_combo_trigger__BRA__0__KET____DOT__precond_valid 
        = Vsim__ConstPool__TABLE_h69d5aff5_0[__Vtableidx43];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_combo__DOT__gen_combo_trigger__BRA__0__KET____DOT__u_sysrst_ctrl_detect_pre__DOT__event_detected_pulse_o 
        = Vsim__ConstPool__TABLE_h3c6387a4_0[__Vtableidx43];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_combo__DOT__gen_combo_trigger__BRA__0__KET____DOT__u_sysrst_ctrl_detect_pre__DOT__thresh_sel 
        = Vsim__ConstPool__TABLE_hff2f9542_0[__Vtableidx43];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_combo__DOT__gen_combo_trigger__BRA__0__KET____DOT__u_sysrst_ctrl_detect_pre__DOT__cnt_d 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_combo__DOT__gen_combo_trigger__BRA__0__KET____DOT__u_sysrst_ctrl_detect_pre__DOT__cnt_clr)
            ? 0U : (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_combo__DOT__gen_combo_trigger__BRA__0__KET____DOT__u_sysrst_ctrl_detect_pre__DOT__cnt_q 
                    + (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_combo__DOT__gen_combo_trigger__BRA__0__KET____DOT__u_sysrst_ctrl_detect_pre__DOT__cnt_en)));
}

void Vsim___024root___act_sequent__TOP__37(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___act_sequent__TOP__37\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_combo__DOT__gen_combo_trigger__BRA__1__KET____DOT__u_sysrst_ctrl_detect_pre__DOT__thresh;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_combo__DOT__gen_combo_trigger__BRA__1__KET____DOT__u_sysrst_ctrl_detect_pre__DOT__thresh = 0;
    CData/*5:0*/ __Vtableidx45;
    __Vtableidx45 = 0;
    // Body
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_combo__DOT__gen_combo_trigger__BRA__1__KET____DOT__u_sysrst_ctrl_detect_pre__DOT__thresh 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_combo__DOT__gen_combo_trigger__BRA__1__KET____DOT__u_sysrst_ctrl_detect_pre__DOT__thresh_sel)
            ? vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_com_pre_det_ctl_1__q
            : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_key_intr_debounce_ctl__q));
    __Vtableidx45 = ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_combo__DOT__gen_combo_trigger__BRA__1__KET____DOT__u_sysrst_ctrl_detect_pre__DOT__trigger_i) 
                       << 5U) | (((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_combo__DOT__gen_combo_trigger__BRA__1__KET____DOT__u_sysrst_ctrl_detect_pre__DOT__cnt_q 
                                   >= chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_combo__DOT__gen_combo_trigger__BRA__1__KET____DOT__u_sysrst_ctrl_detect_pre__DOT__thresh) 
                                  << 4U) | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_combo__DOT__gen_combo_trigger__BRA__1__KET____DOT__u_sysrst_ctrl_detect_pre__DOT__trigger_i) 
                                            << 3U))) 
                     | (((0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_combo__DOT__gen_combo_trigger__BRA__1__KET____DOT__cfg_in_pre)) 
                         << 2U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_combo__DOT__gen_combo_trigger__BRA__1__KET____DOT__u_sysrst_ctrl_detect_pre__DOT__state_q)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_combo__DOT__gen_combo_trigger__BRA__1__KET____DOT__u_sysrst_ctrl_detect_pre__DOT__state_d 
        = Vsim__ConstPool__TABLE_h135e4a04_0[__Vtableidx45];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_combo__DOT__gen_combo_trigger__BRA__1__KET____DOT__u_sysrst_ctrl_detect_pre__DOT__cnt_clr 
        = Vsim__ConstPool__TABLE_hbe54c5ba_0[__Vtableidx45];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_combo__DOT__gen_combo_trigger__BRA__1__KET____DOT__u_sysrst_ctrl_detect_pre__DOT__cnt_en 
        = Vsim__ConstPool__TABLE_hd2e29309_0[__Vtableidx45];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_combo__DOT__gen_combo_trigger__BRA__1__KET____DOT__precond_valid 
        = Vsim__ConstPool__TABLE_h69d5aff5_0[__Vtableidx45];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_combo__DOT__gen_combo_trigger__BRA__1__KET____DOT__u_sysrst_ctrl_detect_pre__DOT__event_detected_pulse_o 
        = Vsim__ConstPool__TABLE_h3c6387a4_0[__Vtableidx45];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_combo__DOT__gen_combo_trigger__BRA__1__KET____DOT__u_sysrst_ctrl_detect_pre__DOT__thresh_sel 
        = Vsim__ConstPool__TABLE_hff2f9542_0[__Vtableidx45];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_combo__DOT__gen_combo_trigger__BRA__1__KET____DOT__u_sysrst_ctrl_detect_pre__DOT__cnt_d 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_combo__DOT__gen_combo_trigger__BRA__1__KET____DOT__u_sysrst_ctrl_detect_pre__DOT__cnt_clr)
            ? 0U : (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_combo__DOT__gen_combo_trigger__BRA__1__KET____DOT__u_sysrst_ctrl_detect_pre__DOT__cnt_q 
                    + (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_combo__DOT__gen_combo_trigger__BRA__1__KET____DOT__u_sysrst_ctrl_detect_pre__DOT__cnt_en)));
}

void Vsim___024root___act_sequent__TOP__38(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___act_sequent__TOP__38\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_combo__DOT__gen_combo_trigger__BRA__2__KET____DOT__u_sysrst_ctrl_detect_pre__DOT__thresh;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_combo__DOT__gen_combo_trigger__BRA__2__KET____DOT__u_sysrst_ctrl_detect_pre__DOT__thresh = 0;
    CData/*5:0*/ __Vtableidx47;
    __Vtableidx47 = 0;
    // Body
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_combo__DOT__gen_combo_trigger__BRA__2__KET____DOT__u_sysrst_ctrl_detect_pre__DOT__thresh 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_combo__DOT__gen_combo_trigger__BRA__2__KET____DOT__u_sysrst_ctrl_detect_pre__DOT__thresh_sel)
            ? vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_com_pre_det_ctl_2__q
            : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_key_intr_debounce_ctl__q));
    __Vtableidx47 = ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_combo__DOT__gen_combo_trigger__BRA__2__KET____DOT__u_sysrst_ctrl_detect_pre__DOT__trigger_i) 
                       << 5U) | (((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_combo__DOT__gen_combo_trigger__BRA__2__KET____DOT__u_sysrst_ctrl_detect_pre__DOT__cnt_q 
                                   >= chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_combo__DOT__gen_combo_trigger__BRA__2__KET____DOT__u_sysrst_ctrl_detect_pre__DOT__thresh) 
                                  << 4U) | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_combo__DOT__gen_combo_trigger__BRA__2__KET____DOT__u_sysrst_ctrl_detect_pre__DOT__trigger_i) 
                                            << 3U))) 
                     | (((0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_combo__DOT__gen_combo_trigger__BRA__2__KET____DOT__cfg_in_pre)) 
                         << 2U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_combo__DOT__gen_combo_trigger__BRA__2__KET____DOT__u_sysrst_ctrl_detect_pre__DOT__state_q)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_combo__DOT__gen_combo_trigger__BRA__2__KET____DOT__u_sysrst_ctrl_detect_pre__DOT__state_d 
        = Vsim__ConstPool__TABLE_h135e4a04_0[__Vtableidx47];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_combo__DOT__gen_combo_trigger__BRA__2__KET____DOT__u_sysrst_ctrl_detect_pre__DOT__cnt_clr 
        = Vsim__ConstPool__TABLE_hbe54c5ba_0[__Vtableidx47];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_combo__DOT__gen_combo_trigger__BRA__2__KET____DOT__u_sysrst_ctrl_detect_pre__DOT__cnt_en 
        = Vsim__ConstPool__TABLE_hd2e29309_0[__Vtableidx47];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_combo__DOT__gen_combo_trigger__BRA__2__KET____DOT__precond_valid 
        = Vsim__ConstPool__TABLE_h69d5aff5_0[__Vtableidx47];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_combo__DOT__gen_combo_trigger__BRA__2__KET____DOT__u_sysrst_ctrl_detect_pre__DOT__event_detected_pulse_o 
        = Vsim__ConstPool__TABLE_h3c6387a4_0[__Vtableidx47];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_combo__DOT__gen_combo_trigger__BRA__2__KET____DOT__u_sysrst_ctrl_detect_pre__DOT__thresh_sel 
        = Vsim__ConstPool__TABLE_hff2f9542_0[__Vtableidx47];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_combo__DOT__gen_combo_trigger__BRA__2__KET____DOT__u_sysrst_ctrl_detect_pre__DOT__cnt_d 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_combo__DOT__gen_combo_trigger__BRA__2__KET____DOT__u_sysrst_ctrl_detect_pre__DOT__cnt_clr)
            ? 0U : (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_combo__DOT__gen_combo_trigger__BRA__2__KET____DOT__u_sysrst_ctrl_detect_pre__DOT__cnt_q 
                    + (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_combo__DOT__gen_combo_trigger__BRA__2__KET____DOT__u_sysrst_ctrl_detect_pre__DOT__cnt_en)));
}

void Vsim___024root___act_sequent__TOP__39(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___act_sequent__TOP__39\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_combo__DOT__gen_combo_trigger__BRA__3__KET____DOT__u_sysrst_ctrl_detect_pre__DOT__thresh;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_combo__DOT__gen_combo_trigger__BRA__3__KET____DOT__u_sysrst_ctrl_detect_pre__DOT__thresh = 0;
    CData/*5:0*/ __Vtableidx49;
    __Vtableidx49 = 0;
    // Body
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_combo__DOT__gen_combo_trigger__BRA__3__KET____DOT__u_sysrst_ctrl_detect_pre__DOT__thresh 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_combo__DOT__gen_combo_trigger__BRA__3__KET____DOT__u_sysrst_ctrl_detect_pre__DOT__thresh_sel)
            ? vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_com_pre_det_ctl_3__q
            : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_key_intr_debounce_ctl__q));
    __Vtableidx49 = ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_combo__DOT__gen_combo_trigger__BRA__3__KET____DOT__u_sysrst_ctrl_detect_pre__DOT__trigger_i) 
                       << 5U) | (((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_combo__DOT__gen_combo_trigger__BRA__3__KET____DOT__u_sysrst_ctrl_detect_pre__DOT__cnt_q 
                                   >= chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_combo__DOT__gen_combo_trigger__BRA__3__KET____DOT__u_sysrst_ctrl_detect_pre__DOT__thresh) 
                                  << 4U) | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_combo__DOT__gen_combo_trigger__BRA__3__KET____DOT__u_sysrst_ctrl_detect_pre__DOT__trigger_i) 
                                            << 3U))) 
                     | (((0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_combo__DOT__gen_combo_trigger__BRA__3__KET____DOT__cfg_in_pre)) 
                         << 2U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_combo__DOT__gen_combo_trigger__BRA__3__KET____DOT__u_sysrst_ctrl_detect_pre__DOT__state_q)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_combo__DOT__gen_combo_trigger__BRA__3__KET____DOT__u_sysrst_ctrl_detect_pre__DOT__state_d 
        = Vsim__ConstPool__TABLE_h135e4a04_0[__Vtableidx49];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_combo__DOT__gen_combo_trigger__BRA__3__KET____DOT__u_sysrst_ctrl_detect_pre__DOT__cnt_clr 
        = Vsim__ConstPool__TABLE_hbe54c5ba_0[__Vtableidx49];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_combo__DOT__gen_combo_trigger__BRA__3__KET____DOT__u_sysrst_ctrl_detect_pre__DOT__cnt_en 
        = Vsim__ConstPool__TABLE_hd2e29309_0[__Vtableidx49];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_combo__DOT__gen_combo_trigger__BRA__3__KET____DOT__precond_valid 
        = Vsim__ConstPool__TABLE_h69d5aff5_0[__Vtableidx49];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_combo__DOT__gen_combo_trigger__BRA__3__KET____DOT__u_sysrst_ctrl_detect_pre__DOT__event_detected_pulse_o 
        = Vsim__ConstPool__TABLE_h3c6387a4_0[__Vtableidx49];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_combo__DOT__gen_combo_trigger__BRA__3__KET____DOT__u_sysrst_ctrl_detect_pre__DOT__thresh_sel 
        = Vsim__ConstPool__TABLE_hff2f9542_0[__Vtableidx49];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_combo__DOT__gen_combo_trigger__BRA__3__KET____DOT__u_sysrst_ctrl_detect_pre__DOT__cnt_d 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_combo__DOT__gen_combo_trigger__BRA__3__KET____DOT__u_sysrst_ctrl_detect_pre__DOT__cnt_clr)
            ? 0U : (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_combo__DOT__gen_combo_trigger__BRA__3__KET____DOT__u_sysrst_ctrl_detect_pre__DOT__cnt_q 
                    + (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_combo__DOT__gen_combo_trigger__BRA__3__KET____DOT__u_sysrst_ctrl_detect_pre__DOT__cnt_en)));
}

void Vsim___024root___act_sequent__TOP__40(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___act_sequent__TOP__40\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vfunc_mubi4_to_lc_inv__681__Vfuncout;
    __Vfunc_mubi4_to_lc_inv__681__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_to_lc_inv__681__val;
    __Vfunc_mubi4_to_lc_inv__681__val = 0;
    CData/*3:0*/ __Vfunc_mubi4_and_hi__692__Vfuncout;
    __Vfunc_mubi4_and_hi__692__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_and_hi__692__a;
    __Vfunc_mubi4_and_hi__692__a = 0;
    CData/*3:0*/ __Vfunc_mubi4_and_hi__692__b;
    __Vfunc_mubi4_and_hi__692__b = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__693__Vfuncout;
    __Vfunc_mubi4_and__693__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__693__a;
    __Vfunc_mubi4_and__693__a = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__693__b;
    __Vfunc_mubi4_and__693__b = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__693__a_in;
    __Vfunc_mubi4_and__693__a_in = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__693__b_in;
    __Vfunc_mubi4_and__693__b_in = 0;
    CData/*3:0*/ __Vfunc_mubi4_to_lc_inv__694__Vfuncout;
    __Vfunc_mubi4_to_lc_inv__694__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_to_lc_inv__694__val;
    __Vfunc_mubi4_to_lc_inv__694__val = 0;
    // Body
    __Vfunc_mubi4_to_lc_inv__694__val = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__flash_disable_pre_buf;
    __Vfunc_mubi4_to_lc_inv__694__Vfuncout = (0x0cU 
                                              ^ (IData)(__Vfunc_mubi4_to_lc_inv__694__val));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__host_enable 
        = __Vfunc_mubi4_to_lc_inv__694__Vfuncout;
    __Vfunc_mubi4_to_lc_inv__681__val = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__flash_disable_pre_buf;
    __Vfunc_mubi4_to_lc_inv__681__Vfuncout = (0x0cU 
                                              ^ (IData)(__Vfunc_mubi4_to_lc_inv__681__val));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT____Vcellinp__u_prog_tl_gate__lc_en_i 
        = __Vfunc_mubi4_to_lc_inv__681__Vfuncout;
    __Vfunc_mubi4_and_hi__692__b = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT____Vcellinp__u_exec_en_buf__in_i;
    __Vfunc_mubi4_and_hi__692__a = (0x0000000fU & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__flash_disable_pre_buf)));
    __Vfunc_mubi4_and__693__b = __Vfunc_mubi4_and_hi__692__b;
    __Vfunc_mubi4_and__693__a = __Vfunc_mubi4_and_hi__692__a;
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__Vfunc_mubi4_and__693__out = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 268722799298027071ull);
    __Vfunc_mubi4_and__693__a_in = __Vfunc_mubi4_and__693__a;
    __Vfunc_mubi4_and__693__b_in = __Vfunc_mubi4_and__693__b;
    vlSelfRef.__Vfunc_mubi4_and__693__out = ((0x0cU 
                                              & (IData)(vlSelfRef.__Vfunc_mubi4_and__693__out)) 
                                             | ((2U 
                                                 & ((IData)(__Vfunc_mubi4_and__693__a_in) 
                                                    & (IData)(__Vfunc_mubi4_and__693__b_in))) 
                                                | (1U 
                                                   & ((IData)(__Vfunc_mubi4_and__693__a_in) 
                                                      | (IData)(__Vfunc_mubi4_and__693__b_in)))));
    vlSelfRef.__Vfunc_mubi4_and__693__out = ((3U & (IData)(vlSelfRef.__Vfunc_mubi4_and__693__out)) 
                                             | (((2U 
                                                  & (((IData)(__Vfunc_mubi4_and__693__a_in) 
                                                      | (IData)(__Vfunc_mubi4_and__693__b_in)) 
                                                     >> 2U)) 
                                                 | (1U 
                                                    & (((IData)(__Vfunc_mubi4_and__693__a_in) 
                                                        & (IData)(__Vfunc_mubi4_and__693__b_in)) 
                                                       >> 2U))) 
                                                << 2U));
    __Vfunc_mubi4_and__693__Vfuncout = vlSelfRef.__Vfunc_mubi4_and__693__out;
    __Vfunc_mubi4_and_hi__692__Vfuncout = __Vfunc_mubi4_and__693__Vfuncout;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__flash_exec_en 
        = __Vfunc_mubi4_and_hi__692__Vfuncout;
}

void Vsim___024root___act_sequent__TOP__41(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___act_sequent__TOP__41\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo_a_size__DOT__rready_i 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT____VdfgRegularize_hb672d1f3_0_2) 
           & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[0U]);
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo_a_size__DOT__gen_normal_fifo__DOT__fifo_incr_rptr 
        = ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo_a_size__DOT__gen_normal_fifo__DOT__fifo_empty)) 
           & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo_a_size__DOT__gen_normal_fifo__DOT__under_rst)) 
              & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo_a_size__DOT__rready_i)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo_a_size__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo_a_size__DOT__gen_normal_fifo__DOT__fifo_incr_rptr) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo_a_size__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q));
}

void Vsim___024root___act_sequent__TOP__42(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___act_sequent__TOP__42\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo_a_size__DOT__rready_i 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT____VdfgRegularize_hb672d1f3_0_2) 
           & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[0U]);
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo_a_size__DOT__gen_normal_fifo__DOT__fifo_incr_rptr 
        = ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo_a_size__DOT__gen_normal_fifo__DOT__fifo_empty)) 
           & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo_a_size__DOT__gen_normal_fifo__DOT__under_rst)) 
              & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo_a_size__DOT__rready_i)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo_a_size__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo_a_size__DOT__gen_normal_fifo__DOT__fifo_incr_rptr) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo_a_size__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q));
}

void Vsim___024root___act_sequent__TOP__43(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___act_sequent__TOP__43\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__u_sentmsg_count__DOT__incr_en_i 
        = ((0x1fU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_keccak__DOT__u_state_regs__DOT__state_raw)) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__keccak_valid));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__u_sentmsg_count__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
        = (0x0000003fU & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__u_sentmsg_count__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q) 
                          - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__u_sentmsg_count__DOT__incr_en_i)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__u_sentmsg_count__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
        = (0x0000003fU & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__u_sentmsg_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                          + (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__u_sentmsg_count__DOT__incr_en_i)));
}

void Vsim___024root___act_sequent__TOP__44(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___act_sequent__TOP__44\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo_a_size__DOT__wvalid_i 
        = ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[3U] 
            >> 0x0000000cU) & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT____VdfgRegularize_hb672d1f3_0_3));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo_a_size__DOT__gen_normal_fifo__DOT__fifo_incr_wptr 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo_a_size__DOT__wvalid_i) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo_a_size__DOT__wready_o));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo_a_size__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo_a_size__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo_a_size__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q));
}

void Vsim___024root___act_sequent__TOP__45(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___act_sequent__TOP__45\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo_a_size__DOT__wvalid_i 
        = ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_lc_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[3U] 
            >> 0x0000000cU) & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT____VdfgRegularize_hb672d1f3_0_3));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo_a_size__DOT__gen_normal_fifo__DOT__fifo_incr_wptr 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo_a_size__DOT__wvalid_i) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo_a_size__DOT__wready_o));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo_a_size__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo_a_size__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo_a_size__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q));
}

void Vsim___024root___act_sequent__TOP__46(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___act_sequent__TOP__46\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT____Vlvbound_hff7dab9c__0;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT____Vlvbound_hff7dab9c__0 = 0;
    CData/*7:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT____Vlvbound_h6cdffe69__0;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT____Vlvbound_h6cdffe69__0 = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT____Vlvbound_hceed6151__0;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT____Vlvbound_hceed6151__0 = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT____Vlvbound_h5d92c5ae__0;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT____Vlvbound_h5d92c5ae__0 = 0;
    IData/*31:0*/ __Vfunc_sram_strb2mask__33__Vfuncout;
    __Vfunc_sram_strb2mask__33__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_sram_strb2mask__33__strb;
    __Vfunc_sram_strb2mask__33__strb = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_1733;
    __VdfgRegularize_h6e95ff9d_0_1733 = 0;
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__u_addr_latch_pulse__DOT__q_posedge_pulse_o 
        = ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__u_addr_latch_pulse__DOT__q_sync_q)) 
           & (0U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__addr_cnt_d)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__main_st_d 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__main_st;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__load_dummycnt = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__addr_cnt_set = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__addr_inc = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__sram_req = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__addr_shift_en = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__p2s_valid_inclk = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__fifo_pop = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__bitcnt_update = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__bitcnt_dec = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT____Vcellout__u_readcmd__io_mode_o = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__readbuf_start = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__readbuf_update = 0U;
    if ((8U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__main_st))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__main_st_d = 0U;
    } else if ((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__main_st))) {
        if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__main_st))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__main_st_d = 0U;
        } else if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__main_st))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__main_st_d = 5U;
        } else {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__bitcnt_dec = 1U;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__p2s_valid_inclk = 1U;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT____Vcellout__u_readcmd__io_mode_o 
                = ((2U == (0x0000000fU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_cmdparse__DOT__cmd_info_q 
                                          >> 6U))) ? 0U
                    : ((3U == (0x0000000fU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_cmdparse__DOT__cmd_info_q 
                                              >> 6U)))
                        ? 1U : ((0x0fU == (0x0000000fU 
                                           & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_cmdparse__DOT__cmd_info_q 
                                              >> 6U)))
                                 ? 2U : 0U)));
            if ((1U & (~ VL_ONEHOT_I((((0x0fU == (0x0000000fU 
                                                  & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_cmdparse__DOT__cmd_info_q 
                                                     >> 6U))) 
                                       << 2U) | (((3U 
                                                   == 
                                                   (0x0000000fU 
                                                    & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_cmdparse__DOT__cmd_info_q 
                                                       >> 6U))) 
                                                  << 1U) 
                                                 | (2U 
                                                    == 
                                                    (0x0000000fU 
                                                     & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_cmdparse__DOT__cmd_info_q 
                                                        >> 6U))))))))) {
                if ((0U != (((0x0fU == (0x0000000fU 
                                        & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_cmdparse__DOT__cmd_info_q 
                                           >> 6U))) 
                             << 2U) | (((3U == (0x0000000fU 
                                                & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_cmdparse__DOT__cmd_info_q 
                                                   >> 6U))) 
                                        << 1U) | (2U 
                                                  == 
                                                  (0x0000000fU 
                                                   & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_cmdparse__DOT__cmd_info_q 
                                                      >> 6U))))))) {
                    if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                        VL_WRITEF_NX("[%0t] %%Error: spi_readcmd.sv:685: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_spi_device.u_readcmd: unique case, but multiple matches found for '4'h%x'\n",0,
                                     64,VL_TIME_UNITED_Q(1),
                                     -12,vlSymsp->name(),
                                     4,(0x0000000fU 
                                        & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_cmdparse__DOT__cmd_info_q 
                                           >> 6U)));
                        Verilated::runFlushCallbacks();
                        VL_STOP_MT("verilogSourceFiles/spi_readcmd.sv", 685, "");
                    }
                }
            }
            if ((0U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__bitcnt))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__addr_inc = 1U;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__readbuf_update = 1U;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__bitcnt_update = 1U;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__fifo_pop = 1U;
            }
        }
    } else if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__main_st))) {
        if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__main_st))) {
            if ((1U & (~ (0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__dummycnt))))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__main_st_d = 4U;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__readbuf_start = 1U;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__readbuf_update = 1U;
            }
        } else if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_status__DOT__u_stage_to_commit__DOT__gen_generic__DOT__u_impl_generic__DOT__en_i) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__main_st_d = 3U;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__load_dummycnt = 1U;
        }
    } else if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__main_st))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__addr_shift_en = 1U;
        if ((2U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__addr_cnt_d))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__sram_req = 1U;
        }
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__u_addr_latch_pulse__DOT__q_posedge_pulse_o) {
            if ((1U & (~ VL_ONEHOT_I((((2U == (2U & 
                                               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_cmdparse__DOT__cmd_info_q 
                                                >> 0x0000000dU))) 
                                       << 2U) | (((1U 
                                                   == 
                                                   (3U 
                                                    & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_cmdparse__DOT__cmd_info_q 
                                                       >> 0x0000000dU))) 
                                                  << 1U) 
                                                 | (0U 
                                                    == 
                                                    (3U 
                                                     & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_cmdparse__DOT__cmd_info_q 
                                                        >> 0x0000000dU))))))))) {
                if ((0U != (((2U == (2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_cmdparse__DOT__cmd_info_q 
                                           >> 0x0000000dU))) 
                             << 2U) | (((1U == (3U 
                                                & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_cmdparse__DOT__cmd_info_q 
                                                   >> 0x0000000dU))) 
                                        << 1U) | (0U 
                                                  == 
                                                  (3U 
                                                   & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_cmdparse__DOT__cmd_info_q 
                                                      >> 0x0000000dU))))))) {
                    if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                        VL_WRITEF_NX("[%0t] %%Error: spi_readcmd.sv:632: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_spi_device.u_readcmd: unique case, but multiple matches found for '2'h%x'\n",0,
                                     64,VL_TIME_UNITED_Q(1),
                                     -12,vlSymsp->name(),
                                     2,(3U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_cmdparse__DOT__cmd_info_q 
                                              >> 0x0000000dU)));
                        Verilated::runFlushCallbacks();
                        VL_STOP_MT("verilogSourceFiles/spi_readcmd.sv", 632, "");
                    }
                }
            }
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__bitcnt_update = 1U;
            if ((0U == (3U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_cmdparse__DOT__cmd_info_q 
                              >> 0x0000000dU)))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__main_st_d = 4U;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__readbuf_start = 1U;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__readbuf_update = 1U;
            } else if ((1U == (3U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_cmdparse__DOT__cmd_info_q 
                                     >> 0x0000000dU)))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__main_st_d = 3U;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__load_dummycnt = 1U;
            } else {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__main_st_d 
                    = ((2U == (2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_cmdparse__DOT__cmd_info_q 
                                     >> 0x0000000dU)))
                        ? 2U : 5U);
            }
        }
    } else if (((1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_cmdparse__DOT__sel_dp)) 
                | (4U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_cmdparse__DOT__sel_dp)))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__main_st_d = 1U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__addr_cnt_set = 1U;
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__u_readsram__DOT__u_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr 
        = (((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__u_readsram__DOT__u_fifo__DOT__gen_normal_fifo__DOT__under_rst)) 
            & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__fifo_pop)) 
           & (~ ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__u_readsram__DOT__fifo_wvalid)) 
                 & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__u_readsram__DOT__u_fifo__DOT__gen_normal_fifo__DOT__fifo_empty))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__u_readsram__DOT__sram_req = 0U;
    if ((0U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__u_readsram__DOT__st_q))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__u_readsram__DOT__st_d 
            = ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__sram_req) 
                 | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__u_readsram__DOT__sram_latched)) 
                & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__u_addr_latch_pulse__DOT__q_posedge_pulse_o))
                ? 1U : 0U);
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__sram_req) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__u_readsram__DOT__sram_req = 1U;
        }
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__u_readsram__DOT__st_d 
            = ((1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__u_readsram__DOT__st_q))
                ? (((3U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__u_readsram__DOT__strb)) 
                    & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__u_readsram__DOT__u_fifo__DOT__wready_o))
                    ? 2U : 1U) : ((2U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__u_readsram__DOT__st_q))
                                   ? ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__u_readsram__DOT__u_sram_fifo__DOT__gen_singleton_fifo__DOT__full_q)
                                       ? 2U : 1U) : 0U));
        if ((1U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__u_readsram__DOT__st_q))) {
            if ((2U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__u_readsram__DOT__st_q))) {
                if ((1U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__u_readsram__DOT__u_sram_fifo__DOT__gen_singleton_fifo__DOT__full_q)))) {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__u_readsram__DOT__sram_req = 1U;
                }
            }
        }
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__addr_cnt_d 
        = (0x0000001fU & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__addr_cnt_set)
                           ? ((3U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__cmdinfo_addr_mode))
                               ? 0x1fU : 0x17U) : (
                                                   (0U 
                                                    == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__addr_cnt_q))
                                                    ? (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__addr_cnt_q)
                                                    : 
                                                   ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__addr_cnt_q) 
                                                    - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__addr_shift_en)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__sub_iomode[1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT____Vcellout__u_readcmd__io_mode_o;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__u_readsram__DOT__u_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__u_readsram__DOT__u_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__u_readsram__DOT__u_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__addr_latch_en = 0U;
    if ((2U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__addr_cnt_d))) {
        if ((1U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__addr_cnt_d))) {
            if (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__addr_shift_en) 
                 & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_status__DOT__u_stage_to_commit__DOT__gen_generic__DOT__u_impl_generic__DOT__en_i))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__addr_latch_en = 1U;
            } else if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__addr_inc) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__addr_latch_en = 1U;
            }
        }
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__addr_d 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__addr_q;
    if ((2U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__addr_cnt_d))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__addr_d 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__addr_q 
                << 8U) | (0x000000fcU & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_cmdparse__DOT__data_i) 
                                         << 2U)));
    } else if ((1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__addr_cnt_d))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__addr_d 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__addr_q 
                << 8U) | (0x000000feU & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_cmdparse__DOT__data_i) 
                                         << 1U)));
    } else if (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__addr_shift_en) 
                & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_status__DOT__u_stage_to_commit__DOT__gen_generic__DOT__u_impl_generic__DOT__en_i))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__addr_d 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__addr_q 
                << 8U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_cmdparse__DOT__data_i));
    } else if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__addr_inc) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__addr_d 
            = ((IData)(1U) + vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__addr_q);
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__io_mode = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__p2s_valid = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__p2s_data = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__sub_p2s_sent[0U] = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__sub_p2s_sent[1U] = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__sub_p2s_sent[2U] = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__sub_p2s_sent[3U] = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__sub_p2s_sent[4U] = 0U;
    if (((1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT____Vcellout__u_control_mode__q)) 
         || (2U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT____Vcellout__u_control_mode__q)))) {
        if ((0U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_cmdparse__DOT__sel_dp))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__io_mode 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__sub_iomode
                [0U];
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__sub_p2s_sent[0U] 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_p2s__DOT__data_sent_o;
        } else if (((1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_cmdparse__DOT__sel_dp)) 
                    || (4U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_cmdparse__DOT__sel_dp)))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__io_mode 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__sub_iomode
                [1U];
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__p2s_valid 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__sub_p2s_valid
                [1U];
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__p2s_data 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__sub_p2s_data
                [1U];
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__sub_p2s_sent[1U] 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_p2s__DOT__data_sent_o;
        } else if ((2U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_cmdparse__DOT__sel_dp))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__io_mode 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__sub_iomode
                [2U];
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__p2s_valid 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__sub_p2s_valid
                [2U];
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__p2s_data 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__sub_p2s_data
                [2U];
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__sub_p2s_sent[2U] 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_p2s__DOT__data_sent_o;
        } else if ((8U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_cmdparse__DOT__sel_dp))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__io_mode 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__sub_iomode
                [3U];
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__p2s_valid 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__sub_p2s_valid
                [3U];
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__p2s_data 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__sub_p2s_data
                [3U];
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__sub_p2s_sent[3U] 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_p2s__DOT__data_sent_o;
        } else if ((0x0010U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_cmdparse__DOT__sel_dp))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__io_mode 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__sub_iomode
                [4U];
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__p2s_valid 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__sub_p2s_valid
                [4U];
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__p2s_data 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__sub_p2s_data
                [4U];
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__sub_p2s_sent[4U] 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_p2s__DOT__data_sent_o;
        } else {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__io_mode 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__sub_iomode
                [0U];
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__sub_p2s_sent[0U] 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_p2s__DOT__data_sent_o;
        }
        if ((1U & (~ VL_ONEHOT_I(((((0x0010U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_cmdparse__DOT__sel_dp)) 
                                    << 5U) | (((8U 
                                                == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_cmdparse__DOT__sel_dp)) 
                                               << 4U) 
                                              | ((2U 
                                                  == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_cmdparse__DOT__sel_dp)) 
                                                 << 3U))) 
                                  | (((4U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_cmdparse__DOT__sel_dp)) 
                                      << 2U) | (((1U 
                                                  == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_cmdparse__DOT__sel_dp)) 
                                                 << 1U) 
                                                | (0U 
                                                   == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_cmdparse__DOT__sel_dp))))))))) {
            if ((0U != ((((0x0010U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_cmdparse__DOT__sel_dp)) 
                          << 5U) | (((8U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_cmdparse__DOT__sel_dp)) 
                                     << 4U) | ((2U 
                                                == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_cmdparse__DOT__sel_dp)) 
                                               << 3U))) 
                        | (((4U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_cmdparse__DOT__sel_dp)) 
                            << 2U) | (((1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_cmdparse__DOT__sel_dp)) 
                                       << 1U) | (0U 
                                                 == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_cmdparse__DOT__sel_dp))))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: spi_device.sv:932: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_spi_device: unique case, but multiple matches found for '10'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 10,(IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_cmdparse__DOT__sel_dp));
                    Verilated::runFlushCallbacks();
                    VL_STOP_MT("verilogSourceFiles/spi_device.sv", 932, "");
                }
            }
        }
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__io_mode = 0U;
    }
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT____Vcellout__u_control_mode__q)) 
                               << 1U) | (1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT____Vcellout__u_control_mode__q))))))) {
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT____VdfgExtracted_h0826671a__0) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: spi_device.sv:930: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_spi_device: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),2,
                             (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT____Vcellout__u_control_mode__q));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/spi_device.sv", 930, "");
            }
        }
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__u_readbuffer__DOT__flip 
        = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__addr_d 
            >> 0x0000000aU) == vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__u_readbuffer__DOT__next_buffer_addr);
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__u_readbuffer__DOT__watermark_cross 
        = (((0x000003ffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__addr_d) 
            >= (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT____Vcellout__u_read_threshold__q)) 
           & (0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT____Vcellout__u_read_threshold__q)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__u_readbuffer__DOT__mailbox_hit_i 
        = ((0xfffffc00U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__addr_d) 
           == (0xfffffc00U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT____Vcellout__u_mailbox_addr__q));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__u_readsram__DOT__next_address 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__u_readsram__DOT__addr_sel)
            ? (((IData)(1U) + (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__addr_d 
                               >> 2U)) << 2U) : vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__addr_d);
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_jedec__DOT__next_byte = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_jedec__DOT__st_d 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_jedec__DOT__st_q;
    if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_jedec__DOT__st_q))) {
        if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_jedec__DOT__st_q))) {
            if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__sub_p2s_sent
                [3U]) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_jedec__DOT__next_byte = 1U;
            }
        }
        if ((1U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_jedec__DOT__st_q)))) {
            if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__sub_p2s_sent
                [3U]) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_jedec__DOT__st_d = 3U;
            }
        }
    } else if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_jedec__DOT__st_q))) {
        if (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_jedec__DOT__cc_count) 
             == (0x000000ffU & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_jedec__DOT__jedec 
                                        >> 0x00000020U))))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_jedec__DOT__st_d = 2U;
        }
    } else if ((8U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_cmdparse__DOT__sel_dp))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_jedec__DOT__st_d 
            = ((0U != (0x000000ffU & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_jedec__DOT__jedec 
                                              >> 0x00000020U))))
                ? 1U : 2U);
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_p2s__DOT__out_shift_d 
        = ((0U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_p2s__DOT__cnt))
            ? (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__p2s_data)
            : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_p2s__DOT__out_shift));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__internal_sd = 0U;
    if ((0U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__io_mode_outclk))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_read_en_pipe_stg1__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
            = (0x0000000fU & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__p2s_valid) 
                              << 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__internal_sd 
            = ((0x0dU & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__internal_sd)) 
               | (2U & (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT____Vcellout__u_cfg_tx_order__q)
                          ? ((0U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_p2s__DOT__cnt))
                              ? (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__p2s_data)
                              : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_p2s__DOT__out_shift))
                          : ((0U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_p2s__DOT__cnt))
                              ? ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__p2s_data) 
                                 >> 7U) : ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_p2s__DOT__out_shift) 
                                           >> 7U))) 
                        << 1U)));
    } else if ((1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__io_mode_outclk))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_read_en_pipe_stg1__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
            = (0x0000000fU & (3U & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__p2s_valid)))));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__internal_sd 
            = ((0x0cU & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__internal_sd)) 
               | (3U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT____Vcellout__u_cfg_tx_order__q)
                         ? ((0U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_p2s__DOT__cnt))
                             ? (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__p2s_data)
                             : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_p2s__DOT__out_shift))
                         : ((0U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_p2s__DOT__cnt))
                             ? ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__p2s_data) 
                                >> 6U) : ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_p2s__DOT__out_shift) 
                                          >> 6U)))));
    } else if ((2U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__io_mode_outclk))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_read_en_pipe_stg1__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
            = (0x0000000fU & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__p2s_valid))));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__internal_sd 
            = (0x0000000fU & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT____Vcellout__u_cfg_tx_order__q)
                               ? ((0U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_p2s__DOT__cnt))
                                   ? (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__p2s_data)
                                   : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_p2s__DOT__out_shift))
                               : ((0U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_p2s__DOT__cnt))
                                   ? ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__p2s_data) 
                                      >> 4U) : ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_p2s__DOT__out_shift) 
                                                >> 4U))));
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_read_en_pipe_stg1__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
            = (0x0000000fU & 0U);
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__internal_sd = 0U;
    }
    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__u_readbuffer__DOT__st_q) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__u_readbuffer__DOT__st_d = 1U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__u_readbuffer__DOT__active = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__u_readbuffer__DOT__st_d = 1U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__u_readbuffer__DOT__active 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__readbuf_update;
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__u_readbuffer__DOT__st_d = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__u_readbuffer__DOT__active = 0U;
        if (((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__readbuf_start) 
               & (1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT____Vcellout__u_control_mode__q))) 
              & (4U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_cmdparse__DOT__sel_dp))) 
             & (~ ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT____Vcellout__u_cfg_mailbox_en__q) 
                   & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__u_readbuffer__DOT__mailbox_hit_i))))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__u_readbuffer__DOT__st_d = 1U;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__u_readbuffer__DOT__active = 1U;
        }
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__sub_sram_l2m[1U] 
        = (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__u_readsram__DOT__sram_req)) 
            << 0x0000002fU) | ((QData)((IData)(((4U 
                                                 == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_cmdparse__DOT__sel_dp))
                                                 ? 
                                                (0x00000300U 
                                                 | (0x0000003fU 
                                                    & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__u_readsram__DOT__next_address 
                                                       >> 2U)))
                                                 : 
                                                (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT____Vcellout__u_cfg_mailbox_en__q) 
                                                  & ((0xfffffc00U 
                                                      & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__u_readsram__DOT__next_address) 
                                                     == 
                                                     (0xfffffc00U 
                                                      & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT____Vcellout__u_mailbox_addr__q)))
                                                  ? 
                                                 (0x00000200U 
                                                  | (0x000000ffU 
                                                     & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__u_readsram__DOT__next_address 
                                                        >> 2U)))
                                                  : 
                                                 (0x000001ffU 
                                                  & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__u_readsram__DOT__next_address 
                                                     >> 2U)))))) 
                               << 0x00000024U));
    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_cmdparse__DOT__cmd_read_pipeline_sel_o) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__internal_sd_en_out 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__internal_sd_en_stg2;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__internal_sd_out 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__internal_sd_stg2_q;
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__internal_sd_en_out 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_read_en_pipe_stg1__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__internal_sd_out 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__internal_sd;
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__read_watermark = 0U;
    if (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__u_readbuffer__DOT__active) 
         & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__u_readbuffer__DOT__watermark_cross))) {
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__u_readbuffer__DOT__watermark_crossed) {
            if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__u_readbuffer__DOT__flip) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__read_watermark = 1U;
            }
        } else {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_readcmd__DOT__read_watermark = 1U;
        }
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__flash_sram_l2m 
        = (((1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_cmdparse__DOT__sel_dp)) 
            || (4U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_cmdparse__DOT__sel_dp)))
            ? vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__sub_sram_l2m
           [1U] : ((0x0010U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_cmdparse__DOT__sel_dp))
                    ? vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__sub_sram_l2m
                   [4U] : ((0x0010U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_cmdparse__DOT__cmd_only_sel_dp))
                            ? vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__sub_sram_l2m
                           [4U] : 0ULL)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__cio_spi_device_sd_d2p 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__internal_sd_out;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__cio_spi_device_sd_en_d2p 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__internal_sd_en_out;
    if (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT____Vcellout__u_tpm_cfg_en__q) 
         & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_sys_tpm_csb_sync__DOT__gen_generic__DOT__u_impl_generic__DOT__u_sync_1__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i)))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__cio_spi_device_sd_d2p 
            = (2U & (((0x000000ffU & ((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__isck_data_sel))
                                       ? ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__isck_data_sel))
                                           ? 0U : (
                                                   (1U 
                                                    & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__isck_data_sel))
                                                    ? 0U
                                                    : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__isck_sel_rdata)))
                                       : ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__isck_data_sel))
                                           ? ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__isck_data_sel))
                                               ? (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__isck_hw_reg_word 
                                                  >> 
                                                  (0x0000001fU 
                                                   & VL_SHIFTL_III(5,5,32, 
                                                                   (3U 
                                                                    & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__isck_fifoaddr)), 3U)))
                                               : 0xffU)
                                           : ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__isck_data_sel))
                                               ? 1U
                                               : 0U)))) 
                      >> (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__isck_p2s_bitcnt)) 
                     << 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__cio_spi_device_sd_en_d2p 
            = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spi_tpm__DOT__isck_p2s_valid) 
               << 1U);
    } else {
        if ((1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT____Vcellout__u_control_mode__q))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__cio_spi_device_sd_d2p 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__internal_sd_out;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__cio_spi_device_sd_en_d2p 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__internal_sd_en_out;
        } else if ((2U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT____Vcellout__u_control_mode__q))) {
            if (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_cmdparse__DOT__cmd_read_pipeline_sel_o)
                  ? (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__intercept_en_stg2)
                  : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__intercept_en))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__cio_spi_device_sd_d2p 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__internal_sd_out;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__cio_spi_device_sd_en_d2p 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__internal_sd_en_out;
            } else {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__cio_spi_device_sd_d2p 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__passthrough_sd;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__cio_spi_device_sd_en_d2p 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__passthrough_sd_en;
            }
        } else {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__cio_spi_device_sd_d2p 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__internal_sd;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__cio_spi_device_sd_en_d2p 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_read_en_pipe_stg1__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i;
        }
        if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT____Vcellout__u_control_mode__q)) 
                                   << 1U) | (1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT____Vcellout__u_control_mode__q))))))) {
            if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT____VdfgExtracted_h0826671a__0) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: spi_device.sv:1080: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_spi_device.spi_out_flash_passthrough: unique case, but multiple matches found for '2'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 2,(IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT____Vcellout__u_control_mode__q));
                    Verilated::runFlushCallbacks();
                    VL_STOP_MT("verilogSourceFiles/spi_device.sv", 1080, "");
                }
            }
        }
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__mem_b_l2m 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_cmdparse__DOT__module_active)
            ? vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__flash_sram_l2m
            : ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_reg__DOT____Vcellout__u_tpm_cfg_en__q)
                ? vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__tpm_sram_l2m
                : 0ULL));
    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_status_en_7__q) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__cio_spi_device_sdo_d2p_o 
            = (1U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__dio_out_retreg_q) 
                     >> 7U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__cio_spi_device_sdo_en_d2p_o 
            = (1U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__dio_oe_retreg_q) 
                     >> 7U));
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__cio_spi_device_sdo_d2p_o 
            = (1U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__cio_spi_device_sd_d2p) 
                     >> 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__cio_spi_device_sdo_en_d2p_o 
            = (1U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__cio_spi_device_sd_en_d2p) 
                     >> 1U));
    }
    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_status_en_9__q) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_351 
            = (1U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__dio_out_retreg_q) 
                     >> 9U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_352 
            = (1U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__dio_oe_retreg_q) 
                     >> 9U));
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_351 
            = (1U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__cio_spi_device_sd_d2p) 
                     >> 3U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_352 
            = (1U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__cio_spi_device_sd_en_d2p) 
                     >> 3U));
    }
    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_status_en_8__q) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_346 
            = (1U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__dio_out_retreg_q) 
                     >> 8U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_347 
            = (1U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__dio_oe_retreg_q) 
                     >> 8U));
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_346 
            = (1U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__cio_spi_device_sd_d2p) 
                     >> 2U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_347 
            = (1U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__cio_spi_device_sd_en_d2p) 
                     >> 2U));
    }
    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_status_en_6__q) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_336 
            = (1U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__dio_out_retreg_q) 
                     >> 6U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_337 
            = (1U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__dio_oe_retreg_q) 
                     >> 6U));
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_336 
            = (1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__cio_spi_device_sd_d2p));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_337 
            = (1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__cio_spi_device_sd_en_d2p));
    }
    __Vfunc_sram_strb2mask__33__strb = (0x0000000fU 
                                        & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__mem_b_l2m));
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__Vfunc_sram_strb2mask__33__result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17878770160641367455ull);
    vlSelfRef.__Vfunc_sram_strb2mask__33__result = 
        ((0xffff0000U & vlSelfRef.__Vfunc_sram_strb2mask__33__result) 
         | ((((2U & (IData)(__Vfunc_sram_strb2mask__33__strb))
               ? 0xffU : 0U) << 8U) | ((1U & (IData)(__Vfunc_sram_strb2mask__33__strb))
                                        ? 0xffU : 0U)));
    vlSelfRef.__Vfunc_sram_strb2mask__33__result = 
        ((0x0000ffffU & vlSelfRef.__Vfunc_sram_strb2mask__33__result) 
         | ((((8U & (IData)(__Vfunc_sram_strb2mask__33__strb))
               ? 0xffU : 0U) << 0x00000018U) | (((4U 
                                                  & (IData)(__Vfunc_sram_strb2mask__33__strb))
                                                  ? 0xffU
                                                  : 0U) 
                                                << 0x00000010U)));
    __Vfunc_sram_strb2mask__33__Vfuncout = vlSelfRef.__Vfunc_sram_strb2mask__33__result;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__mem_b_wmask 
        = __Vfunc_sram_strb2mask__33__Vfuncout;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__spi2sys_wr_req 
        = (IData)((0x0000c00000000000ULL == (0x0000c00000000000ULL 
                                             & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__mem_b_l2m)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__dio_out_retreg_d 
        = ((((((((0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_mode_15__q)) 
                 & ((1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_mode_15__q)) 
                    | ((2U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_mode_15__q)) 
                       & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_381)))) 
                << 3U) | (((0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_mode_14__q)) 
                           & ((1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_mode_14__q)) 
                              | ((2U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_mode_14__q)) 
                                 & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_376)))) 
                          << 2U)) | ((((0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_mode_13__q)) 
                                       & ((1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_mode_13__q)) 
                                          | ((2U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_mode_13__q)) 
                                             & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_371)))) 
                                      << 1U) | ((0U 
                                                 != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_mode_12__q)) 
                                                & ((1U 
                                                    == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_mode_12__q)) 
                                                   | ((2U 
                                                       != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_mode_12__q)) 
                                                      & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_366)))))) 
             << 0x0000000cU) | ((((((0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_mode_11__q)) 
                                    & ((1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_mode_11__q)) 
                                       | ((2U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_mode_11__q)) 
                                          & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_361)))) 
                                   << 3U) | (((0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_mode_10__q)) 
                                              & ((1U 
                                                  == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_mode_10__q)) 
                                                 | ((2U 
                                                     != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_mode_10__q)) 
                                                    & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_356)))) 
                                             << 2U)) 
                                 | ((((0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_mode_9__q)) 
                                      & ((1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_mode_9__q)) 
                                         | ((2U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_mode_9__q)) 
                                            & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_351)))) 
                                     << 1U) | ((0U 
                                                != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_mode_8__q)) 
                                               & ((1U 
                                                   == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_mode_8__q)) 
                                                  | ((2U 
                                                      != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_mode_8__q)) 
                                                     & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_346)))))) 
                                << 8U)) | (((((((0U 
                                                 != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_mode_7__q)) 
                                                & ((1U 
                                                    == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_mode_7__q)) 
                                                   | ((2U 
                                                       != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_mode_7__q)) 
                                                      & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__cio_spi_device_sdo_d2p_o)))) 
                                               << 3U) 
                                              | (((0U 
                                                   != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_mode_6__q)) 
                                                  & ((1U 
                                                      == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_mode_6__q)) 
                                                     | ((2U 
                                                         != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_mode_6__q)) 
                                                        & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_336)))) 
                                                 << 2U)) 
                                             | ((((0U 
                                                   != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_mode_5__q)) 
                                                  & ((1U 
                                                      == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_mode_5__q)) 
                                                     | ((2U 
                                                         != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_mode_5__q)) 
                                                        & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_331)))) 
                                                 << 1U) 
                                                | ((0U 
                                                    != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_mode_4__q)) 
                                                   & ((1U 
                                                       == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_mode_4__q)) 
                                                      | ((2U 
                                                          != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_mode_4__q)) 
                                                         & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_326)))))) 
                                            << 4U) 
                                           | (((((0U 
                                                  != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_mode_3__q)) 
                                                 & ((1U 
                                                     == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_mode_3__q)) 
                                                    | ((2U 
                                                        != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_mode_3__q)) 
                                                       & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_321)))) 
                                                << 3U) 
                                               | (((0U 
                                                    != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_mode_2__q)) 
                                                   & ((1U 
                                                       == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_mode_2__q)) 
                                                      | ((2U 
                                                          != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_mode_2__q)) 
                                                         & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_316)))) 
                                                  << 2U)) 
                                              | ((((0U 
                                                    != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_mode_1__q)) 
                                                   & ((1U 
                                                       == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_mode_1__q)) 
                                                      | ((2U 
                                                          != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_mode_1__q)) 
                                                         & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__cio_usbdev_dn_d2p_o)))) 
                                                  << 1U) 
                                                 | ((0U 
                                                     != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_mode_0__q)) 
                                                    & ((1U 
                                                        == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_mode_0__q)) 
                                                       | ((2U 
                                                           != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_mode_0__q)) 
                                                          & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__cio_usbdev_dp_d2p_o))))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__dio_oe_retreg_d 
        = ((((((((0U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_mode_15__q)) 
                 | ((1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_mode_15__q)) 
                    | ((2U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_mode_15__q)) 
                       & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_382)))) 
                << 3U) | (((0U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_mode_14__q)) 
                           | ((1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_mode_14__q)) 
                              | ((2U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_mode_14__q)) 
                                 & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_377)))) 
                          << 2U)) | ((((0U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_mode_13__q)) 
                                       | ((1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_mode_13__q)) 
                                          | ((2U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_mode_13__q)) 
                                             & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_372)))) 
                                      << 1U) | ((0U 
                                                 == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_mode_12__q)) 
                                                | ((1U 
                                                    == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_mode_12__q)) 
                                                   | ((2U 
                                                       != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_mode_12__q)) 
                                                      & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_367)))))) 
             << 0x0000000cU) | ((((((0U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_mode_11__q)) 
                                    | ((1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_mode_11__q)) 
                                       | ((2U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_mode_11__q)) 
                                          & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_362)))) 
                                   << 3U) | (((0U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_mode_10__q)) 
                                              | ((1U 
                                                  == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_mode_10__q)) 
                                                 | ((2U 
                                                     != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_mode_10__q)) 
                                                    & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_357)))) 
                                             << 2U)) 
                                 | ((((0U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_mode_9__q)) 
                                      | ((1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_mode_9__q)) 
                                         | ((2U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_mode_9__q)) 
                                            & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_352)))) 
                                     << 1U) | ((0U 
                                                == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_mode_8__q)) 
                                               | ((1U 
                                                   == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_mode_8__q)) 
                                                  | ((2U 
                                                      != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_mode_8__q)) 
                                                     & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_347)))))) 
                                << 8U)) | (((((((0U 
                                                 == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_mode_7__q)) 
                                                | ((1U 
                                                    == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_mode_7__q)) 
                                                   | ((2U 
                                                       != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_mode_7__q)) 
                                                      & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__cio_spi_device_sdo_en_d2p_o)))) 
                                               << 3U) 
                                              | (((0U 
                                                   == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_mode_6__q)) 
                                                  | ((1U 
                                                      == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_mode_6__q)) 
                                                     | ((2U 
                                                         != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_mode_6__q)) 
                                                        & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_337)))) 
                                                 << 2U)) 
                                             | ((((0U 
                                                   == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_mode_5__q)) 
                                                  | ((1U 
                                                      == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_mode_5__q)) 
                                                     | ((2U 
                                                         != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_mode_5__q)) 
                                                        & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_332)))) 
                                                 << 1U) 
                                                | ((0U 
                                                    == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_mode_4__q)) 
                                                   | ((1U 
                                                       == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_mode_4__q)) 
                                                      | ((2U 
                                                          != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_mode_4__q)) 
                                                         & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_327)))))) 
                                            << 4U) 
                                           | (((((0U 
                                                  == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_mode_3__q)) 
                                                 | ((1U 
                                                     == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_mode_3__q)) 
                                                    | ((2U 
                                                        != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_mode_3__q)) 
                                                       & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_322)))) 
                                                << 3U) 
                                               | (((0U 
                                                    == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_mode_2__q)) 
                                                   | ((1U 
                                                       == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_mode_2__q)) 
                                                      | ((2U 
                                                          != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_mode_2__q)) 
                                                         & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT____VdfgRegularize_h1948612a_0_317)))) 
                                                  << 2U)) 
                                              | ((((0U 
                                                    == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_mode_1__q)) 
                                                   | ((1U 
                                                       == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_mode_1__q)) 
                                                      | ((2U 
                                                          != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_mode_1__q)) 
                                                         & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__cio_usbdev_dn_en_d2p_o)))) 
                                                  << 1U) 
                                                 | ((0U 
                                                     == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_mode_0__q)) 
                                                    | ((1U 
                                                        == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_mode_0__q)) 
                                                       | ((2U 
                                                           != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_dio_pad_sleep_mode_0__q)) 
                                                          & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__cio_usbdev_dp_en_d2p_o))))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__initialized_words_d[0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__initialized_words_q[0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__initialized_words_d[1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__initialized_words_q[1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__initialized_words_d[2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__initialized_words_q[2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__initialized_words_d[3U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__initialized_words_q[3U];
    if (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__spi2sys_wr_req) 
         & (~ (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__initialized_words_q[
               (3U & ((IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__mem_b_l2m 
                               >> 0x00000024U)) >> 5U))] 
               >> (0x0000001fU & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__mem_b_l2m 
                                          >> 0x00000024U))))))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__initialized_words_d[(3U 
                                                                                & ((IData)(
                                                                                (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__mem_b_l2m 
                                                                                >> 0x00000024U)) 
                                                                                >> 5U))] 
            = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__initialized_words_d[
               (3U & ((IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__mem_b_l2m 
                               >> 0x00000024U)) >> 5U))] 
               | ((IData)(1U) << (0x0000001fU & (IData)(
                                                        (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__mem_b_l2m 
                                                         >> 0x00000024U)))));
    }
    __VdfgRegularize_h6e95ff9d_0_1733 = ((~ (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__initialized_words_q[
                                             (3U & 
                                              ((IData)(
                                                       (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__mem_b_l2m 
                                                        >> 0x00000024U)) 
                                               >> 5U))] 
                                             >> (0x0000001fU 
                                                 & (IData)(
                                                           (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__mem_b_l2m 
                                                            >> 0x00000024U))))) 
                                         & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__spi2sys_wr_req));
    if (__VdfgRegularize_h6e95ff9d_0_1733) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT__b_wdata_i 
            = ((IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__mem_b_l2m 
                        >> 4U)) & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__mem_b_wmask);
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT__b_wmask_i = 0xffffffffU;
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT__b_wdata_i 
            = (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__mem_b_l2m 
                       >> 4U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT__b_wmask_i 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__mem_b_wmask;
    }
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT____Vlvbound_h6cdffe69__0 
        = (0x000000ffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT__b_wdata_i);
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT__b_wdata_d 
        = ((0x0000000fffffff00ULL & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT__b_wdata_d) 
           | (IData)((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT____Vlvbound_h6cdffe69__0)));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT____Vlvbound_hceed6151__0 
        = (1U & (~ VL_REDXOR_32((0x000000ffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT__b_wdata_i))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT__b_wdata_d 
        = ((0x0000000ffffffeffULL & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT__b_wdata_d) 
           | ((QData)((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT____Vlvbound_hceed6151__0)) 
              << 8U));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT____Vlvbound_h6cdffe69__0 
        = (0x000000ffU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT__b_wdata_i 
                          >> 8U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT__b_wdata_d 
        = ((0x0000000ffffe01ffULL & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT__b_wdata_d) 
           | ((QData)((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT____Vlvbound_h6cdffe69__0)) 
              << 9U));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT____Vlvbound_hceed6151__0 
        = (1U & (~ VL_REDXOR_32((0x000000ffU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT__b_wdata_i 
                                                >> 8U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT__b_wdata_d 
        = ((0x0000000ffffdffffULL & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT__b_wdata_d) 
           | ((QData)((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT____Vlvbound_hceed6151__0)) 
              << 0x00000011U));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT____Vlvbound_h6cdffe69__0 
        = (0x000000ffU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT__b_wdata_i 
                          >> 0x10U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT__b_wdata_d 
        = ((0x0000000ffc03ffffULL & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT__b_wdata_d) 
           | ((QData)((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT____Vlvbound_h6cdffe69__0)) 
              << 0x00000012U));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT____Vlvbound_hceed6151__0 
        = (1U & (~ VL_REDXOR_32((0x000000ffU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT__b_wdata_i 
                                                >> 0x10U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT__b_wdata_d 
        = ((0x0000000ffbffffffULL & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT__b_wdata_d) 
           | ((QData)((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT____Vlvbound_hceed6151__0)) 
              << 0x0000001aU));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT____Vlvbound_h6cdffe69__0 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT__b_wdata_i 
           >> 0x18U);
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT__b_wdata_d 
        = ((0x0000000807ffffffULL & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT__b_wdata_d) 
           | ((QData)((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT____Vlvbound_h6cdffe69__0)) 
              << 0x0000001bU));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT____Vlvbound_hceed6151__0 
        = (1U & (~ VL_REDXOR_32((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT__b_wdata_i 
                                 >> 0x18U))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT__b_wdata_d 
        = ((0x00000007ffffffffULL & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT__b_wdata_d) 
           | ((QData)((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT____Vlvbound_hceed6151__0)) 
              << 0x00000023U));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT____Vlvbound_hff7dab9c__0 
        = (0x000000ffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT__b_wmask_i);
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT__b_wmask_d 
        = ((0x0000000fffffff00ULL & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT__b_wmask_d) 
           | (IData)((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT____Vlvbound_hff7dab9c__0)));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT____Vlvbound_h5d92c5ae__0 
        = (0x000000ffU == (0x000000ffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT__b_wmask_i));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT__b_wmask_d 
        = ((0x0000000ffffffeffULL & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT__b_wmask_d) 
           | ((QData)((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT____Vlvbound_h5d92c5ae__0)) 
              << 8U));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT____Vlvbound_hff7dab9c__0 
        = (0x000000ffU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT__b_wmask_i 
                          >> 8U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT__b_wmask_d 
        = ((0x0000000ffffe01ffULL & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT__b_wmask_d) 
           | ((QData)((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT____Vlvbound_hff7dab9c__0)) 
              << 9U));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT____Vlvbound_h5d92c5ae__0 
        = (0x000000ffU == (0x000000ffU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT__b_wmask_i 
                                          >> 8U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT__b_wmask_d 
        = ((0x0000000ffffdffffULL & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT__b_wmask_d) 
           | ((QData)((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT____Vlvbound_h5d92c5ae__0)) 
              << 0x00000011U));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT____Vlvbound_hff7dab9c__0 
        = (0x000000ffU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT__b_wmask_i 
                          >> 0x10U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT__b_wmask_d 
        = ((0x0000000ffc03ffffULL & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT__b_wmask_d) 
           | ((QData)((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT____Vlvbound_hff7dab9c__0)) 
              << 0x00000012U));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT____Vlvbound_h5d92c5ae__0 
        = (0x000000ffU == (0x000000ffU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT__b_wmask_i 
                                          >> 0x10U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT__b_wmask_d 
        = ((0x0000000ffbffffffULL & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT__b_wmask_d) 
           | ((QData)((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT____Vlvbound_h5d92c5ae__0)) 
              << 0x0000001aU));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT____Vlvbound_hff7dab9c__0 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT__b_wmask_i 
           >> 0x18U);
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT__b_wmask_d 
        = ((0x0000000807ffffffULL & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT__b_wmask_d) 
           | ((QData)((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT____Vlvbound_hff7dab9c__0)) 
              << 0x0000001bU));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT____Vlvbound_h5d92c5ae__0 
        = (0x000000ffU == (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT__b_wmask_i 
                           >> 0x18U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT__b_wmask_d 
        = ((0x00000007ffffffffULL & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT__b_wmask_d) 
           | ((QData)((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT____Vlvbound_h5d92c5ae__0)) 
              << 0x00000023U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT__u_mem__DOT__gen_generic__DOT__u_impl_generic__DOT__b_wmask 
        = ((((0x000001ffU == (0x000001ffU & (IData)(
                                                    (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT__b_wmask_d 
                                                     >> 0x0000001bU)))) 
             << 3U) | ((0x000001ffU == (0x000001ffU 
                                        & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT__b_wmask_d 
                                                   >> 0x00000012U)))) 
                       << 2U)) | (((0x000001ffU == 
                                    (0x000001ffU & (IData)(
                                                           (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT__b_wmask_d 
                                                            >> 9U)))) 
                                   << 1U) | (0x000001ffU 
                                             == (0x000001ffU 
                                                 & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_spi_device__DOT__u_spid_dpram__DOT__gen_ram2p__DOT__u_memory_2p__DOT__b_wmask_d)))));
}

extern const VlUnpacked<CData/*1:0*/, 64> Vsim__ConstPool__TABLE_h46c9050a_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vsim__ConstPool__TABLE_h243163cb_0;

void Vsim___024root___act_sequent__TOP__47(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___act_sequent__TOP__47\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*15:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_ulp__DOT__u_sysrst_ctrl_detect_ac_present__DOT__thresh;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_ulp__DOT__u_sysrst_ctrl_detect_ac_present__DOT__thresh = 0;
    CData/*5:0*/ __Vtableidx28;
    __Vtableidx28 = 0;
    // Body
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_ulp__DOT__u_sysrst_ctrl_detect_ac_present__DOT__thresh 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_ulp__DOT__u_sysrst_ctrl_detect_ac_present__DOT__thresh_sel)
            ? 0U : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_ulp_ac_debounce_ctl__q));
    __Vtableidx28 = ((((4U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT____Vcellout__u_prim_flop_2sync_input__q_o) 
                              >> 1U)) | ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_ulp__DOT__u_sysrst_ctrl_detect_ac_present__DOT__cnt_q) 
                                           >= (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_ulp__DOT__u_sysrst_ctrl_detect_ac_present__DOT__thresh)) 
                                          << 1U) | 
                                         (1U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT____Vcellout__u_prim_flop_2sync_input__q_o) 
                                                >> 3U)))) 
                      << 3U) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_ulp_ctl__q) 
                                 << 2U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_ulp__DOT__u_sysrst_ctrl_detect_ac_present__DOT__state_q)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_ulp__DOT__u_sysrst_ctrl_detect_ac_present__DOT__state_d 
        = Vsim__ConstPool__TABLE_h46c9050a_0[__Vtableidx28];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_ulp__DOT__u_sysrst_ctrl_detect_ac_present__DOT__cnt_clr 
        = Vsim__ConstPool__TABLE_hbe54c5ba_0[__Vtableidx28];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_ulp__DOT__u_sysrst_ctrl_detect_ac_present__DOT__cnt_en 
        = Vsim__ConstPool__TABLE_hd2e29309_0[__Vtableidx28];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_ulp__DOT__ac_present_det 
        = Vsim__ConstPool__TABLE_h243163cb_0[__Vtableidx28];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_ulp__DOT__ac_present_det_pulse 
        = Vsim__ConstPool__TABLE_h3c6387a4_0[__Vtableidx28];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_ulp__DOT__u_sysrst_ctrl_detect_ac_present__DOT__thresh_sel 
        = Vsim__ConstPool__TABLE_hff2f9542_0[__Vtableidx28];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_ulp__DOT__u_sysrst_ctrl_detect_ac_present__DOT__cnt_d 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_ulp__DOT__u_sysrst_ctrl_detect_ac_present__DOT__cnt_clr)
            ? 0U : (0x0000ffffU & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_ulp__DOT__u_sysrst_ctrl_detect_ac_present__DOT__cnt_q) 
                                   + (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_ulp__DOT__u_sysrst_ctrl_detect_ac_present__DOT__cnt_en))));
}

void Vsim___024root___act_sequent__TOP__48(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___act_sequent__TOP__48\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*15:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_ulp__DOT__u_sysrst_ctrl_detect_pwrb__DOT__thresh;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_ulp__DOT__u_sysrst_ctrl_detect_pwrb__DOT__thresh = 0;
    CData/*5:0*/ __Vtableidx26;
    __Vtableidx26 = 0;
    // Body
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_ulp__DOT__u_sysrst_ctrl_detect_pwrb__DOT__thresh 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_ulp__DOT__u_sysrst_ctrl_detect_pwrb__DOT__thresh_sel)
            ? 0U : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_ulp_pwrb_debounce_ctl__q));
    __Vtableidx26 = ((((4U & (((~ ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT____Vcellout__u_prim_flop_2sync_input__q_o) 
                                   >> 7U)) & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_ulp__DOT__u_sysrst_ctrl_detect_pwrb__DOT__gen_trigger_event_edge__DOT__trigger_active_q))) 
                              << 2U)) | ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_ulp__DOT__u_sysrst_ctrl_detect_pwrb__DOT__cnt_q) 
                                           >= (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_ulp__DOT__u_sysrst_ctrl_detect_pwrb__DOT__thresh)) 
                                          << 1U) | 
                                         (1U & (~ ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT____Vcellout__u_prim_flop_2sync_input__q_o) 
                                                   >> 7U))))) 
                      << 3U) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_ulp_ctl__q) 
                                 << 2U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_ulp__DOT__u_sysrst_ctrl_detect_pwrb__DOT__state_q)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_ulp__DOT__u_sysrst_ctrl_detect_pwrb__DOT__state_d 
        = Vsim__ConstPool__TABLE_h46c9050a_0[__Vtableidx26];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_ulp__DOT__u_sysrst_ctrl_detect_pwrb__DOT__cnt_clr 
        = Vsim__ConstPool__TABLE_hbe54c5ba_0[__Vtableidx26];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_ulp__DOT__u_sysrst_ctrl_detect_pwrb__DOT__cnt_en 
        = Vsim__ConstPool__TABLE_hd2e29309_0[__Vtableidx26];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_ulp__DOT__pwrb_det 
        = Vsim__ConstPool__TABLE_h243163cb_0[__Vtableidx26];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_ulp__DOT__pwrb_det_pulse 
        = Vsim__ConstPool__TABLE_h3c6387a4_0[__Vtableidx26];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_ulp__DOT__u_sysrst_ctrl_detect_pwrb__DOT__thresh_sel 
        = Vsim__ConstPool__TABLE_hff2f9542_0[__Vtableidx26];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_ulp__DOT__u_sysrst_ctrl_detect_pwrb__DOT__cnt_d 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_ulp__DOT__u_sysrst_ctrl_detect_pwrb__DOT__cnt_clr)
            ? 0U : (0x0000ffffU & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_ulp__DOT__u_sysrst_ctrl_detect_pwrb__DOT__cnt_q) 
                                   + (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_ulp__DOT__u_sysrst_ctrl_detect_pwrb__DOT__cnt_en))));
}

void Vsim___024root___act_sequent__TOP__49(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___act_sequent__TOP__49\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*15:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_ulp__DOT__u_sysrst_ctrl_detect_lid_open__DOT__thresh;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_ulp__DOT__u_sysrst_ctrl_detect_lid_open__DOT__thresh = 0;
    CData/*5:0*/ __Vtableidx27;
    __Vtableidx27 = 0;
    // Body
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_ulp__DOT__u_sysrst_ctrl_detect_lid_open__DOT__thresh 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_ulp__DOT__u_sysrst_ctrl_detect_lid_open__DOT__thresh_sel)
            ? 0U : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_ulp_lid_debounce_ctl__q));
    __Vtableidx27 = ((((4U & (((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_ulp__DOT__u_sysrst_ctrl_detect_lid_open__DOT__gen_trigger_event_edge__DOT__trigger_active_q)) 
                               << 2U) & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT____Vcellout__u_prim_flop_2sync_input__q_o))) 
                       | ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_ulp__DOT__u_sysrst_ctrl_detect_lid_open__DOT__cnt_q) 
                            >= (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_ulp__DOT__u_sysrst_ctrl_detect_lid_open__DOT__thresh)) 
                           << 1U) | (1U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT____Vcellout__u_prim_flop_2sync_input__q_o) 
                                           >> 2U)))) 
                      << 3U) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_ulp_ctl__q) 
                                 << 2U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_ulp__DOT__u_sysrst_ctrl_detect_lid_open__DOT__state_q)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_ulp__DOT__u_sysrst_ctrl_detect_lid_open__DOT__state_d 
        = Vsim__ConstPool__TABLE_h46c9050a_0[__Vtableidx27];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_ulp__DOT__u_sysrst_ctrl_detect_lid_open__DOT__cnt_clr 
        = Vsim__ConstPool__TABLE_hbe54c5ba_0[__Vtableidx27];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_ulp__DOT__u_sysrst_ctrl_detect_lid_open__DOT__cnt_en 
        = Vsim__ConstPool__TABLE_hd2e29309_0[__Vtableidx27];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_ulp__DOT__lid_open_det 
        = Vsim__ConstPool__TABLE_h243163cb_0[__Vtableidx27];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_ulp__DOT__lid_open_det_pulse 
        = Vsim__ConstPool__TABLE_h3c6387a4_0[__Vtableidx27];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_ulp__DOT__u_sysrst_ctrl_detect_lid_open__DOT__thresh_sel 
        = Vsim__ConstPool__TABLE_hff2f9542_0[__Vtableidx27];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_ulp__DOT__u_sysrst_ctrl_detect_lid_open__DOT__cnt_d 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_ulp__DOT__u_sysrst_ctrl_detect_lid_open__DOT__cnt_clr)
            ? 0U : (0x0000ffffU & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_ulp__DOT__u_sysrst_ctrl_detect_lid_open__DOT__cnt_q) 
                                   + (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_ulp__DOT__u_sysrst_ctrl_detect_lid_open__DOT__cnt_en))));
}

void Vsim___024root___act_sequent__TOP__50(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___act_sequent__TOP__50\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*15:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_autoblock__DOT__u_sysrst_ctrl_detect__DOT__thresh;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_autoblock__DOT__u_sysrst_ctrl_detect__DOT__thresh = 0;
    CData/*5:0*/ __Vtableidx25;
    __Vtableidx25 = 0;
    // Body
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_autoblock__DOT__u_sysrst_ctrl_detect__DOT__thresh 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_autoblock__DOT__u_sysrst_ctrl_detect__DOT__thresh_sel)
            ? 0U : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_auto_block_debounce_ctl_debounce_timer__q));
    __Vtableidx25 = ((((4U & (((~ ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT____Vcellout__u_prim_flop_2sync_input__q_o) 
                                   >> 7U)) & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_autoblock__DOT__u_sysrst_ctrl_detect__DOT__gen_trigger_event_edge__DOT__trigger_active_q))) 
                              << 2U)) | ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_autoblock__DOT__u_sysrst_ctrl_detect__DOT__cnt_q) 
                                           >= (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_autoblock__DOT__u_sysrst_ctrl_detect__DOT__thresh)) 
                                          << 1U) | 
                                         (1U & (~ ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT____Vcellout__u_prim_flop_2sync_input__q_o) 
                                                   >> 7U))))) 
                      << 3U) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_auto_block_debounce_ctl_auto_block_enable__q) 
                                 << 2U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_autoblock__DOT__u_sysrst_ctrl_detect__DOT__state_q)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_autoblock__DOT__u_sysrst_ctrl_detect__DOT__state_d 
        = Vsim__ConstPool__TABLE_h135e4a04_0[__Vtableidx25];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_autoblock__DOT__u_sysrst_ctrl_detect__DOT__cnt_clr 
        = Vsim__ConstPool__TABLE_hbe54c5ba_0[__Vtableidx25];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_autoblock__DOT__u_sysrst_ctrl_detect__DOT__cnt_en 
        = Vsim__ConstPool__TABLE_hd2e29309_0[__Vtableidx25];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_autoblock__DOT__aon_ab_cond_met 
        = Vsim__ConstPool__TABLE_h69d5aff5_0[__Vtableidx25];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_autoblock__DOT__u_sysrst_ctrl_detect__DOT__event_detected_pulse_o 
        = Vsim__ConstPool__TABLE_h3c6387a4_0[__Vtableidx25];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_autoblock__DOT__u_sysrst_ctrl_detect__DOT__thresh_sel 
        = Vsim__ConstPool__TABLE_hff2f9542_0[__Vtableidx25];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_autoblock__DOT__u_sysrst_ctrl_detect__DOT__cnt_d 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_autoblock__DOT__u_sysrst_ctrl_detect__DOT__cnt_clr)
            ? 0U : (0x0000ffffU & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_autoblock__DOT__u_sysrst_ctrl_detect__DOT__cnt_q) 
                                   + (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_autoblock__DOT__u_sysrst_ctrl_detect__DOT__cnt_en))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_autoblock__DOT__key0_out_hw_o 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_auto_block_out_ctl_key0_out_sel__q) 
            & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_autoblock__DOT__aon_ab_cond_met))
            ? (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_auto_block_out_ctl_key0_out_value__q)
            : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_autoblock__DOT__key0_int_i));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_autoblock__DOT__key1_out_hw_o 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_auto_block_out_ctl_key1_out_sel__q) 
            & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_autoblock__DOT__aon_ab_cond_met))
            ? (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_auto_block_out_ctl_key1_out_value__q)
            : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_autoblock__DOT__key1_int_i));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_autoblock__DOT__key2_out_hw_o 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_auto_block_out_ctl_key2_out_sel__q) 
            & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_autoblock__DOT__aon_ab_cond_met))
            ? (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_auto_block_out_ctl_key2_out_value__q)
            : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_autoblock__DOT__key2_int_i));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_pin__DOT__key0_out_int_o 
        = ((~ ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_pin_out_ctl_key0_out__q) 
               & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_pin_out_value_key0_out__q)) 
                  & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_pin_allowed_ctl_key0_out_0__q)))) 
           & (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_pin_out_ctl_key0_out__q) 
               & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_pin_allowed_ctl_key0_out_1__q) 
                  & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_pin_out_value_key0_out__q))) 
              | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_autoblock__DOT__key0_out_hw_o)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_pin__DOT__key1_out_int_o 
        = ((~ ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_pin_out_ctl_key1_out__q) 
               & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_pin_out_value_key1_out__q)) 
                  & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_pin_allowed_ctl_key1_out_0__q)))) 
           & (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_pin_out_ctl_key1_out__q) 
               & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_pin_allowed_ctl_key1_out_1__q) 
                  & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_pin_out_value_key1_out__q))) 
              | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_autoblock__DOT__key1_out_hw_o)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_pin__DOT__key2_out_int_o 
        = ((~ ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_pin_out_ctl_key2_out__q) 
               & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_pin_out_value_key2_out__q)) 
                  & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_pin_allowed_ctl_key2_out_0__q)))) 
           & (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_pin_out_ctl_key2_out__q) 
               & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_pin_allowed_ctl_key2_out_1__q) 
                  & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_pin_out_value_key2_out__q))) 
              | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_autoblock__DOT__key2_out_hw_o)));
}

void Vsim___024root___act_sequent__TOP__51(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___act_sequent__TOP__51\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_scrmbl_mtx__DOT__valid_o 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_scrmbl_mtx__DOT__gen_normal_case__DOT__req_tree__BRA__1__KET__) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_scrmbl_mtx__DOT__gen_normal_case__DOT__req_tree__BRA__2__KET__));
}

void Vsim___024root___act_sequent__TOP__52(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___act_sequent__TOP__52\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__oh0_err 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__1__KET__) 
            & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__11__KET__)) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__1__KET__) 
              | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__11__KET__)));
}

void Vsim___024root___act_sequent__TOP__53(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___act_sequent__TOP__53\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__0__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__1__KET__) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__11__KET__));
}

void Vsim___024root___act_sequent__TOP__54(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___act_sequent__TOP__54\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_fsm_err 
        = (((((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_kdi__fsm_err_o) 
                << 3U) | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_lci__fsm_err_o) 
                          << 2U)) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__u_otp_ctrl_dai__fsm_err_o) 
                                      << 1U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__fsm_err_o))) 
             << 0x0000000aU) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__9__KET____DOT__gen_buffered__DOT__u_part_buf__fsm_err_o) 
                                 << 9U) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__8__KET____DOT__gen_buffered__DOT__u_part_buf__fsm_err_o) 
                                            << 8U) 
                                           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__fsm_err_o) 
                                              << 7U)))) 
           | ((((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__6__KET____DOT__gen_buffered__DOT__u_part_buf__fsm_err_o) 
                  << 3U) | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__5__KET____DOT__gen_buffered__DOT__u_part_buf__fsm_err_o) 
                            << 2U)) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__4__KET____DOT__gen_unbuffered__DOT__u_part_unbuf__fsm_err_o) 
                                        << 1U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__3__KET____DOT__gen_unbuffered__DOT__u_part_unbuf__fsm_err_o))) 
               << 3U) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__2__KET____DOT__gen_unbuffered__DOT__u_part_unbuf__fsm_err_o) 
                          << 2U) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__1__KET____DOT__gen_unbuffered__DOT__u_part_unbuf__fsm_err_o) 
                                     << 1U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__0__KET____DOT__gen_unbuffered__DOT__u_part_unbuf__fsm_err_o)))));
}

void Vsim___024root___act_sequent__TOP__55(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___act_sequent__TOP__55\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_scrmbl_mtx__DOT__gen_normal_case__DOT__idx_tree__BRA__19__03a16__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_scrmbl_mtx__DOT__gen_normal_case__DOT__gen_tree__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__gen_nodes__DOT__sel)
            ? ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_scrmbl_mtx__DOT__gen_normal_case__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__3__KET____DOT__gen_nodes__DOT__sel)
                ? 7U : 6U) : 5U);
}

void Vsim___024root___act_sequent__TOP__56(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___act_sequent__TOP__56\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_scrmbl_mtx__DOT__gen_normal_case__DOT__gen_tree__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel 
        = (1U & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_scrmbl_mtx__DOT__gen_normal_case__DOT__req_tree__BRA__1__KET__)) 
                 | ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_scrmbl_mtx__DOT__gen_normal_case__DOT__prio_tree__BRA__1__KET__)) 
                    & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_scrmbl_mtx__DOT__gen_normal_case__DOT__prio_tree__BRA__2__KET__))));
}

void Vsim___024root___act_sequent__TOP__57(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___act_sequent__TOP__57\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_cbc_dec 
        = ((2U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_mode__DOT__committed_q)) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT____VdfgRegularize_h201f8c2c_0_9));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_cfb_dec 
        = ((4U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_mode__DOT__committed_q)) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT____VdfgRegularize_h201f8c2c_0_9));
}

void Vsim___024root___act_sequent__TOP__58(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___act_sequent__TOP__58\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_cbc_enc 
        = ((2U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_mode__DOT__committed_q)) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT____VdfgRegularize_h201f8c2c_0_10));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_cfb_enc 
        = ((4U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_mode__DOT__committed_q)) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT____VdfgRegularize_h201f8c2c_0_10));
}

void Vsim___024root___act_sequent__TOP__59(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___act_sequent__TOP__59\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_cbc_dec 
        = ((2U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_mode__DOT__committed_q)) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT____VdfgRegularize_h201f8c2c_0_9));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_cfb_dec 
        = ((4U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_mode__DOT__committed_q)) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT____VdfgRegularize_h201f8c2c_0_9));
}

void Vsim___024root___act_sequent__TOP__60(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___act_sequent__TOP__60\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_cbc_enc 
        = ((2U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_mode__DOT__committed_q)) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT____VdfgRegularize_h201f8c2c_0_10));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_cfb_enc 
        = ((4U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_mode__DOT__committed_q)) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT____VdfgRegularize_h201f8c2c_0_10));
}

void Vsim___024root___act_sequent__TOP__61(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___act_sequent__TOP__61\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_cbc_dec 
        = ((2U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_mode__DOT__committed_q)) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT____VdfgRegularize_h201f8c2c_0_9));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_cfb_dec 
        = ((4U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_mode__DOT__committed_q)) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT____VdfgRegularize_h201f8c2c_0_9));
}

void Vsim___024root___act_sequent__TOP__62(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___act_sequent__TOP__62\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_cbc_enc 
        = ((2U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_mode__DOT__committed_q)) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT____VdfgRegularize_h201f8c2c_0_10));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_cfb_enc 
        = ((4U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_ctrl_reg_shadowed__DOT__u_ctrl_reg_shadowed_mode__DOT__committed_q)) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT____VdfgRegularize_h201f8c2c_0_10));
}

void Vsim___024root___act_sequent__TOP__63(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___act_sequent__TOP__63\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_key_init__DOT__new_d 
        = ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_key_init__DOT____VdfgRegularize_hef06aaff_0_0)) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_key_init__DOT__all_written));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__prng_reseed_o 
        = ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_key_init__DOT__new_q)) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_key_init__DOT__new_d));
}

void Vsim___024root___act_sequent__TOP__64(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___act_sequent__TOP__64\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_key_init__DOT__new_d 
        = ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_key_init__DOT____VdfgRegularize_hef06aaff_0_0)) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_key_init__DOT__all_written));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__prng_reseed_o 
        = ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_key_init__DOT__new_q)) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_key_init__DOT__new_d));
}

void Vsim___024root___act_sequent__TOP__65(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___act_sequent__TOP__65\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_key_init__DOT__new_d 
        = ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_key_init__DOT____VdfgRegularize_hef06aaff_0_0)) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_key_init__DOT__all_written));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__prng_reseed_o 
        = ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_key_init__DOT__new_q)) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__u_reg_status_key_init__DOT__new_d));
}

void Vsim___024root___act_sequent__TOP__66(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___act_sequent__TOP__66\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_arb__DOT__gen_normal_case__DOT__req_tree__BRA__1__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_arb__DOT__gen_normal_case__DOT__req_tree__BRA__3__KET__) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_arb__DOT__gen_normal_case__DOT__req_tree__BRA__4__KET__));
}

void Vsim___024root___act_sequent__TOP__67(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___act_sequent__TOP__67\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__prd_clearing_upd_ack 
        = ((~ (0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__mr_prng_reseed_req))) 
           & (0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__mr_prng_data_req)));
}

void Vsim___024root___act_sequent__TOP__68(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___act_sequent__TOP__68\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<4>/*127:0*/ __Vfunc_aes_transpose__1178__Vfuncout;
    VL_ZERO_W(128, __Vfunc_aes_transpose__1178__Vfuncout);
    VlWide<4>/*127:0*/ __Vfunc_aes_transpose__1178__in;
    VL_ZERO_W(128, __Vfunc_aes_transpose__1178__in);
    VlWide<4>/*127:0*/ __Vfunc_aes_transpose__1178__transpose;
    VL_ZERO_W(128, __Vfunc_aes_transpose__1178__transpose);
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_sel_buf_chk__BRA__1__KET____DOT__u_aes_sp2v_sig_buf_chk_i__DOT__gen_buf__DOT__u_prim_buf_sel_i__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i 
        = ((4U & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT____Vcellinp__u_aes_control_fsm__cipher_out_valid_i)) 
                  << 2U)) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__cipher_out_valid_i) 
                              << 1U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__cipher_out_valid_i)));
    if ((1U & (~ VL_ONEHOT_I((((4U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_sel_buf_chk__BRA__1__KET____DOT__u_aes_sp2v_sig_buf_chk_i__DOT__gen_buf__DOT__u_prim_buf_sel_i__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i)) 
                               << 1U) | (3U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_sel_buf_chk__BRA__1__KET____DOT__u_aes_sp2v_sig_buf_chk_i__DOT__gen_buf__DOT__u_prim_buf_sel_i__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))))))) {
        if ((0U != (((4U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_sel_buf_chk__BRA__1__KET____DOT__u_aes_sp2v_sig_buf_chk_i__DOT__gen_buf__DOT__u_prim_buf_sel_i__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i)) 
                     << 1U) | (3U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_sel_buf_chk__BRA__1__KET____DOT__u_aes_sp2v_sig_buf_chk_i__DOT__gen_buf__DOT__u_prim_buf_sel_i__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: aes_sel_buf_chk.sv:65: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_aes.u_aes_core.u_aes_control.gen_sel_buf_chk[1].u_aes_sp2v_sig_buf_chk_i.gen_mux2_sel_chk.mux2_sel_chk: unique case, but multiple matches found for '3'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),3,
                             (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_sel_buf_chk__BRA__1__KET____DOT__u_aes_sp2v_sig_buf_chk_i__DOT__gen_buf__DOT__u_prim_buf_sel_i__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/aes_sel_buf_chk.sv", 65, "");
            }
        }
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__sp2v_sig_err 
        = (((((((2U & ((~ ((3U == (7U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT____Vcellout__u_aes_ctr__ctr_we_o 
                                         >> 0x00000015U))) 
                           | (4U == (7U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT____Vcellout__u_aes_ctr__ctr_we_o 
                                           >> 0x00000015U))))) 
                       << 1U)) | (1U & (~ ((3U == (7U 
                                                   & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT____Vcellout__u_aes_ctr__ctr_we_o 
                                                      >> 0x00000012U))) 
                                           | (4U == 
                                              (7U & 
                                               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT____Vcellout__u_aes_ctr__ctr_we_o 
                                                >> 0x00000012U))))))) 
               << 5U) | (((2U & ((~ ((3U == (7U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT____Vcellout__u_aes_ctr__ctr_we_o 
                                                   >> 0x0000000fU))) 
                                     | (4U == (7U & 
                                               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT____Vcellout__u_aes_ctr__ctr_we_o 
                                                >> 0x0000000fU))))) 
                                 << 1U)) | (1U & (~ 
                                                  ((3U 
                                                    == 
                                                    (7U 
                                                     & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT____Vcellout__u_aes_ctr__ctr_we_o 
                                                        >> 0x0000000cU))) 
                                                   | (4U 
                                                      == 
                                                      (7U 
                                                       & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT____Vcellout__u_aes_ctr__ctr_we_o 
                                                          >> 0x0000000cU))))))) 
                         << 3U)) | ((4U & ((~ ((3U 
                                                == 
                                                (7U 
                                                 & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT____Vcellout__u_aes_ctr__ctr_we_o 
                                                    >> 9U))) 
                                               | (4U 
                                                  == 
                                                  (7U 
                                                   & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT____Vcellout__u_aes_ctr__ctr_we_o 
                                                      >> 9U))))) 
                                           << 2U)) 
                                    | ((2U & ((~ ((3U 
                                                   == 
                                                   (7U 
                                                    & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT____Vcellout__u_aes_ctr__ctr_we_o 
                                                       >> 6U))) 
                                                  | (4U 
                                                     == 
                                                     (7U 
                                                      & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT____Vcellout__u_aes_ctr__ctr_we_o 
                                                         >> 6U))))) 
                                              << 1U)) 
                                       | (1U & (~ (
                                                   (3U 
                                                    == 
                                                    (7U 
                                                     & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT____Vcellout__u_aes_ctr__ctr_we_o 
                                                        >> 3U))) 
                                                   | (4U 
                                                      == 
                                                      (7U 
                                                       & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT____Vcellout__u_aes_ctr__ctr_we_o 
                                                          >> 3U))))))))) 
            << 6U) | ((((4U & ((~ ((3U == (7U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT____Vcellout__u_aes_ctr__ctr_we_o)) 
                                   | (4U == (7U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT____Vcellout__u_aes_ctr__ctr_we_o)))) 
                               << 2U)) | ((2U & ((~ 
                                                  ((3U 
                                                    == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_sel_buf_chk__BRA__4__KET____DOT__u_aes_sp2v_sig_buf_chk_i__DOT__gen_buf__DOT__u_prim_buf_sel_i__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i)) 
                                                   | (4U 
                                                      == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_sel_buf_chk__BRA__4__KET____DOT__u_aes_sp2v_sig_buf_chk_i__DOT__gen_buf__DOT__u_prim_buf_sel_i__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i)))) 
                                                 << 1U)) 
                                          | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_sel_buf_chk__BRA__5__KET____DOT__u_aes_sp2v_sig_buf_chk_i__DOT__err_o))) 
                       << 3U) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__gen_sel_buf_chk__BRA__4__KET____DOT__u_aes_sp2v_sig_buf_chk_i__DOT__err_o) 
                                  << 2U) | ((2U & (
                                                   (~ 
                                                    ((3U 
                                                      == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_sel_buf_chk__BRA__1__KET____DOT__u_aes_sp2v_sig_buf_chk_i__DOT__gen_buf__DOT__u_prim_buf_sel_i__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i)) 
                                                     | (4U 
                                                        == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_sel_buf_chk__BRA__1__KET____DOT__u_aes_sp2v_sig_buf_chk_i__DOT__gen_buf__DOT__u_prim_buf_sel_i__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i)))) 
                                                   << 1U)) 
                                            | (1U & 
                                               (~ (
                                                   (3U 
                                                    == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_sel_buf_chk__BRA__0__KET____DOT__u_aes_sp2v_sig_buf_chk_i__DOT__gen_buf__DOT__u_prim_buf_sel_i__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i)) 
                                                   | (4U 
                                                      == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_sel_buf_chk__BRA__0__KET____DOT__u_aes_sp2v_sig_buf_chk_i__DOT__gen_buf__DOT__u_prim_buf_sel_i__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i)))))))));
    if ((3U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_sel_buf_chk__BRA__1__KET____DOT__u_aes_sp2v_sig_buf_chk_i__DOT__gen_buf__DOT__u_prim_buf_sel_i__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT____VdfgRegularize_h44d87689_0_1[0U] 
            = vlSelfRef.__VdfgRegularize_he50b618e_0_123[0U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT____VdfgRegularize_h44d87689_0_1[1U] 
            = vlSelfRef.__VdfgRegularize_he50b618e_0_123[1U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT____VdfgRegularize_h44d87689_0_1[2U] 
            = vlSelfRef.__VdfgRegularize_he50b618e_0_123[2U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT____VdfgRegularize_h44d87689_0_1[3U] 
            = vlSelfRef.__VdfgRegularize_he50b618e_0_123[3U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT____VdfgRegularize_h44d87689_0_2[0U] 
            = vlSelfRef.__VdfgRegularize_he50b618e_0_124[0U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT____VdfgRegularize_h44d87689_0_2[1U] 
            = vlSelfRef.__VdfgRegularize_he50b618e_0_124[1U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT____VdfgRegularize_h44d87689_0_2[2U] 
            = vlSelfRef.__VdfgRegularize_he50b618e_0_124[2U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT____VdfgRegularize_h44d87689_0_2[3U] 
            = vlSelfRef.__VdfgRegularize_he50b618e_0_124[3U];
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT____VdfgRegularize_h44d87689_0_1[0U] 
            = (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__state_o);
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT____VdfgRegularize_h44d87689_0_1[1U] 
            = (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__state_o 
                       >> 0x00000020U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT____VdfgRegularize_h44d87689_0_1[2U] 
            = (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__state_o);
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT____VdfgRegularize_h44d87689_0_1[3U] 
            = (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__state_o 
                       >> 0x00000020U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT____VdfgRegularize_h44d87689_0_2[0U] 
            = (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_122);
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT____VdfgRegularize_h44d87689_0_2[1U] 
            = (IData)((vlSelfRef.__VdfgRegularize_he50b618e_0_122 
                       >> 0x00000020U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT____VdfgRegularize_h44d87689_0_2[2U] 
            = (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_122);
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT____VdfgRegularize_h44d87689_0_2[3U] 
            = (IData)((vlSelfRef.__VdfgRegularize_he50b618e_0_122 
                       >> 0x00000020U));
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__sp_enc_err 
        = ((0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__sp2v_sig_err)) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__sp_enc_err_q));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__gen_state_out_masked__DOT__state_done_muxed[0U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT____VdfgRegularize_h44d87689_0_1[0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__gen_state_out_masked__DOT__state_done_muxed[0U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT____VdfgRegularize_h44d87689_0_1[1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__gen_state_out_masked__DOT__state_done_muxed[0U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT____VdfgRegularize_h44d87689_0_1[2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__gen_state_out_masked__DOT__state_done_muxed[0U][3U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT____VdfgRegularize_h44d87689_0_1[3U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__gen_state_out_masked__DOT__state_done_buf[0U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT____VdfgRegularize_h44d87689_0_1[0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__gen_state_out_masked__DOT__state_done_buf[0U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT____VdfgRegularize_h44d87689_0_1[1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__gen_state_out_masked__DOT__state_done_buf[0U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT____VdfgRegularize_h44d87689_0_1[2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__gen_state_out_masked__DOT__state_done_buf[0U][3U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT____VdfgRegularize_h44d87689_0_1[3U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__gen_state_out_masked__DOT__state_done_muxed[1U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT____VdfgRegularize_h44d87689_0_2[0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__gen_state_out_masked__DOT__state_done_muxed[1U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT____VdfgRegularize_h44d87689_0_2[1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__gen_state_out_masked__DOT__state_done_muxed[1U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT____VdfgRegularize_h44d87689_0_2[2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__gen_state_out_masked__DOT__state_done_muxed[1U][3U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT____VdfgRegularize_h44d87689_0_2[3U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__gen_state_out_masked__DOT__state_done_buf[1U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT____VdfgRegularize_h44d87689_0_2[0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__gen_state_out_masked__DOT__state_done_buf[1U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT____VdfgRegularize_h44d87689_0_2[1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__gen_state_out_masked__DOT__state_done_buf[1U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT____VdfgRegularize_h44d87689_0_2[2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__gen_state_out_masked__DOT__state_done_buf[1U][3U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT____VdfgRegularize_h44d87689_0_2[3U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__state_out[0U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT____VdfgRegularize_h44d87689_0_1[0U] 
           ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT____VdfgRegularize_h44d87689_0_2[0U]);
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__state_out[1U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT____VdfgRegularize_h44d87689_0_1[1U] 
           ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT____VdfgRegularize_h44d87689_0_2[1U]);
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__state_out[2U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT____VdfgRegularize_h44d87689_0_1[2U] 
           ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT____VdfgRegularize_h44d87689_0_2[2U]);
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__state_out[3U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT____VdfgRegularize_h44d87689_0_1[3U] 
           ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT____VdfgRegularize_h44d87689_0_2[3U]);
    __Vfunc_aes_transpose__1178__in[0U] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__state_out[0U];
    __Vfunc_aes_transpose__1178__in[1U] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__state_out[1U];
    __Vfunc_aes_transpose__1178__in[2U] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__state_out[2U];
    __Vfunc_aes_transpose__1178__in[3U] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__state_out[3U];
    __Vfunc_aes_transpose__1178__transpose[0U] = 0U;
    __Vfunc_aes_transpose__1178__transpose[1U] = 0U;
    __Vfunc_aes_transpose__1178__transpose[2U] = 0U;
    __Vfunc_aes_transpose__1178__transpose[3U] = 0U;
    __Vfunc_aes_transpose__1178__transpose[0U] = ((0xffffff00U 
                                                   & __Vfunc_aes_transpose__1178__transpose[0U]) 
                                                  | (0x000000ffU 
                                                     & __Vfunc_aes_transpose__1178__in[0U]));
    __Vfunc_aes_transpose__1178__transpose[1U] = ((0xffffff00U 
                                                   & __Vfunc_aes_transpose__1178__transpose[1U]) 
                                                  | (0x000000ffU 
                                                     & (__Vfunc_aes_transpose__1178__in[0U] 
                                                        >> 8U)));
    __Vfunc_aes_transpose__1178__transpose[2U] = ((0xffffff00U 
                                                   & __Vfunc_aes_transpose__1178__transpose[2U]) 
                                                  | (0x000000ffU 
                                                     & (__Vfunc_aes_transpose__1178__in[0U] 
                                                        >> 0x00000010U)));
    __Vfunc_aes_transpose__1178__transpose[3U] = ((0xffffff00U 
                                                   & __Vfunc_aes_transpose__1178__transpose[3U]) 
                                                  | (__Vfunc_aes_transpose__1178__in[0U] 
                                                     >> 0x00000018U));
    __Vfunc_aes_transpose__1178__transpose[0U] = ((0xffff00ffU 
                                                   & __Vfunc_aes_transpose__1178__transpose[0U]) 
                                                  | (0x0000ff00U 
                                                     & (__Vfunc_aes_transpose__1178__in[1U] 
                                                        << 8U)));
    __Vfunc_aes_transpose__1178__transpose[1U] = ((0xffff00ffU 
                                                   & __Vfunc_aes_transpose__1178__transpose[1U]) 
                                                  | (0x0000ff00U 
                                                     & __Vfunc_aes_transpose__1178__in[1U]));
    __Vfunc_aes_transpose__1178__transpose[2U] = ((0xffff00ffU 
                                                   & __Vfunc_aes_transpose__1178__transpose[2U]) 
                                                  | (0x0000ff00U 
                                                     & (__Vfunc_aes_transpose__1178__in[1U] 
                                                        >> 8U)));
    __Vfunc_aes_transpose__1178__transpose[3U] = ((0xffff00ffU 
                                                   & __Vfunc_aes_transpose__1178__transpose[3U]) 
                                                  | (0x0000ff00U 
                                                     & (__Vfunc_aes_transpose__1178__in[1U] 
                                                        >> 0x00000010U)));
    __Vfunc_aes_transpose__1178__transpose[0U] = ((0xff00ffffU 
                                                   & __Vfunc_aes_transpose__1178__transpose[0U]) 
                                                  | (0x00ff0000U 
                                                     & (__Vfunc_aes_transpose__1178__in[2U] 
                                                        << 0x00000010U)));
    __Vfunc_aes_transpose__1178__transpose[1U] = ((0xff00ffffU 
                                                   & __Vfunc_aes_transpose__1178__transpose[1U]) 
                                                  | (0x00ff0000U 
                                                     & (__Vfunc_aes_transpose__1178__in[2U] 
                                                        << 8U)));
    __Vfunc_aes_transpose__1178__transpose[2U] = ((0xff00ffffU 
                                                   & __Vfunc_aes_transpose__1178__transpose[2U]) 
                                                  | (0x00ff0000U 
                                                     & __Vfunc_aes_transpose__1178__in[2U]));
    __Vfunc_aes_transpose__1178__transpose[3U] = ((0xff00ffffU 
                                                   & __Vfunc_aes_transpose__1178__transpose[3U]) 
                                                  | (0x00ff0000U 
                                                     & (__Vfunc_aes_transpose__1178__in[2U] 
                                                        >> 8U)));
    __Vfunc_aes_transpose__1178__transpose[0U] = ((0x00ffffffU 
                                                   & __Vfunc_aes_transpose__1178__transpose[0U]) 
                                                  | (__Vfunc_aes_transpose__1178__in[3U] 
                                                     << 0x00000018U));
    __Vfunc_aes_transpose__1178__transpose[1U] = ((0x00ffffffU 
                                                   & __Vfunc_aes_transpose__1178__transpose[1U]) 
                                                  | (0xff000000U 
                                                     & (__Vfunc_aes_transpose__1178__in[3U] 
                                                        << 0x00000010U)));
    __Vfunc_aes_transpose__1178__transpose[2U] = ((0x00ffffffU 
                                                   & __Vfunc_aes_transpose__1178__transpose[2U]) 
                                                  | (0xff000000U 
                                                     & (__Vfunc_aes_transpose__1178__in[3U] 
                                                        << 8U)));
    __Vfunc_aes_transpose__1178__transpose[3U] = ((0x00ffffffU 
                                                   & __Vfunc_aes_transpose__1178__transpose[3U]) 
                                                  | (0xff000000U 
                                                     & __Vfunc_aes_transpose__1178__in[3U]));
    __Vfunc_aes_transpose__1178__Vfuncout[0U] = __Vfunc_aes_transpose__1178__transpose[0U];
    __Vfunc_aes_transpose__1178__Vfuncout[1U] = __Vfunc_aes_transpose__1178__transpose[1U];
    __Vfunc_aes_transpose__1178__Vfuncout[2U] = __Vfunc_aes_transpose__1178__transpose[2U];
    __Vfunc_aes_transpose__1178__Vfuncout[3U] = __Vfunc_aes_transpose__1178__transpose[3U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT____VdfgExtracted_h45051256__0[0U] 
        = __Vfunc_aes_transpose__1178__Vfuncout[0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT____VdfgExtracted_h45051256__0[1U] 
        = __Vfunc_aes_transpose__1178__Vfuncout[1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT____VdfgExtracted_h45051256__0[2U] 
        = __Vfunc_aes_transpose__1178__Vfuncout[2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT____VdfgExtracted_h45051256__0[3U] 
        = __Vfunc_aes_transpose__1178__Vfuncout[3U];
}

extern const VlUnpacked<CData/*0:0*/, 64> Vsim__ConstPool__TABLE_h6035a45b_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vsim__ConstPool__TABLE_h3018da12_0;
extern const VlUnpacked<CData/*3:0*/, 64> Vsim__ConstPool__TABLE_hd4f209cf_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vsim__ConstPool__TABLE_h820faf5f_0;
extern const VlWide<50>/*1599:0*/ Vsim__ConstPool__CONST_ha4affa7d_0;
extern const VlWide<12>/*383:0*/ Vsim__ConstPool__CONST_h997e551f_0;

void Vsim___024root___act_sequent__TOP__69(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___act_sequent__TOP__69\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_mubi4_test_true_strict__1566__Vfuncout;
    __Vfunc_mubi4_test_true_strict__1566__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_strict__1566__val;
    __Vfunc_mubi4_test_true_strict__1566__val = 0;
    CData/*5:0*/ __Vtableidx79;
    __Vtableidx79 = 0;
    // Body
    __Vtableidx79 = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__kmac_cmd;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__sha3_start 
        = Vsim__ConstPool__TABLE_h6035a45b_0[__Vtableidx79];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__sha3_run 
        = Vsim__ConstPool__TABLE_h3018da12_0[__Vtableidx79];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__sha3_done_d 
        = Vsim__ConstPool__TABLE_hd4f209cf_0[__Vtableidx79];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__reg2msgfifo_process 
        = Vsim__ConstPool__TABLE_h820faf5f_0[__Vtableidx79];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_msgfifo__DOT__u_packer__DOT__flush_st_next 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_msgfifo__DOT__u_packer__DOT__flush_st)
            ? (0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_msgfifo__DOT__u_packer__DOT__g_pos_dupcnt__DOT__u_pos__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))
            : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__reg2msgfifo_process));
    __Vfunc_mubi4_test_true_strict__1566__val = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__sha3_done_d;
    __Vfunc_mubi4_test_true_strict__1566__Vfuncout 
        = (6U == (IData)(__Vfunc_mubi4_test_true_strict__1566__val));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_msgfifo__DOT____Vcellinp__u_msgfifo__clr_i 
        = __Vfunc_mubi4_test_true_strict__1566__Vfuncout;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__kmac_st_d 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_state_regs__DOT__state_raw;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__entropy_in_keyblock = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__kmac_state_error = 0U;
    if ((0x00000020U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_state_regs__DOT__state_raw))) {
        if ((0x00000010U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_state_regs__DOT__state_raw))) {
            if ((8U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_state_regs__DOT__state_raw))) {
                if ((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_state_regs__DOT__state_raw))) {
                    if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_state_regs__DOT__state_raw))) {
                        if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_state_regs__DOT__state_raw))) {
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__kmac_st_d = 0x30U;
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__kmac_state_error = 1U;
                        } else {
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__entropy_in_keyblock = 1U;
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__kmac_st_d 
                                = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__keccak_complete)
                                    ? 0x15U : 0x3eU);
                        }
                    } else {
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__kmac_st_d = 0x30U;
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__kmac_state_error = 1U;
                    }
                } else {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__kmac_st_d = 0x30U;
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__kmac_state_error = 1U;
                }
            } else if ((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__kmac_st_d = 0x30U;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__kmac_state_error = 1U;
            } else if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__kmac_st_d = 0x30U;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__kmac_state_error = 1U;
            } else if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__kmac_st_d = 0x30U;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__kmac_state_error = 1U;
            } else {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__kmac_st_d = 0x30U;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__kmac_state_error = 1U;
            }
        } else if ((8U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_state_regs__DOT__state_raw))) {
            if ((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_state_regs__DOT__state_raw))) {
                if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__kmac_st_d = 0x30U;
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__kmac_state_error = 1U;
                } else if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__kmac_st_d 
                        = (([&]() {
                                vlSelfRef.__Vfunc_mubi4_test_true_strict__1493__val 
                                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__sha3_done_d;
                                vlSelfRef.__Vfunc_mubi4_test_true_strict__1493__Vfuncout 
                                    = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__1493__val));
                            }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__1493__Vfuncout))
                            ? 0x0bU : 0x2dU);
                } else {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__kmac_st_d = 0x30U;
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__kmac_state_error = 1U;
                }
            } else {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__kmac_st_d = 0x30U;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__kmac_state_error = 1U;
            }
        } else {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__kmac_st_d = 0x30U;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__kmac_state_error = 1U;
        }
    } else if ((0x00000010U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_state_regs__DOT__state_raw))) {
        if ((8U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_state_regs__DOT__state_raw))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__kmac_st_d = 0x30U;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__kmac_state_error = 1U;
        } else if ((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_state_regs__DOT__state_raw))) {
            if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__kmac_st_d = 0x30U;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__kmac_state_error = 1U;
            } else if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__kmac_st_d 
                    = ((([&]() {
                                vlSelfRef.__Vfunc_mubi4_test_true_strict__1494__val 
                                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__sha3_absorbed;
                                vlSelfRef.__Vfunc_mubi4_test_true_strict__1494__Vfuncout 
                                    = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__1494__val));
                            }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__1494__Vfuncout)) 
                        & ([&]() {
                                vlSelfRef.__Vfunc_mubi4_test_true_strict__1495__val 
                                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__sha3_done_d;
                                vlSelfRef.__Vfunc_mubi4_test_true_strict__1495__Vfuncout 
                                    = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__1495__val));
                            }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__1495__Vfuncout)))
                        ? 0x0bU : ((([&]() {
                                    vlSelfRef.__Vfunc_mubi4_test_true_strict__1496__val 
                                        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__sha3_absorbed;
                                    vlSelfRef.__Vfunc_mubi4_test_true_strict__1496__Vfuncout 
                                        = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__1496__val));
                                }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__1496__Vfuncout)) 
                                    & ([&]() {
                                    vlSelfRef.__Vfunc_mubi4_test_false_loose__1497__val 
                                        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__sha3_done_d;
                                    vlSelfRef.__Vfunc_mubi4_test_false_loose__1497__Vfuncout 
                                        = (6U != (IData)(vlSelfRef.__Vfunc_mubi4_test_false_loose__1497__val));
                                }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_false_loose__1497__Vfuncout)))
                                    ? 0x2dU : 0x15U));
            } else {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__kmac_st_d = 0x30U;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__kmac_state_error = 1U;
            }
        } else {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__kmac_st_d = 0x30U;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__kmac_state_error = 1U;
        }
    } else if ((8U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_state_regs__DOT__state_raw))) {
        if ((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_state_regs__DOT__state_raw))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__kmac_st_d = 0x30U;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__kmac_state_error = 1U;
        } else if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_state_regs__DOT__state_raw))) {
            if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__kmac_st_d 
                    = ((0x1dU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__kmac_cmd))
                        ? ((3U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__app_sha3_mode))
                            ? 6U : 0x15U) : 0x0bU);
            } else {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__kmac_st_d = 0x30U;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__kmac_state_error = 1U;
            }
        } else {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__kmac_st_d = 0x30U;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__kmac_state_error = 1U;
        }
    } else if ((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_state_regs__DOT__state_raw))) {
        if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_state_regs__DOT__state_raw))) {
            if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__kmac_st_d = 0x30U;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__kmac_state_error = 1U;
            } else {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__kmac_st_d 
                    = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__keccak_complete)
                        ? ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__app_kmac_en)
                            ? 0x3eU : 0x15U) : 6U);
            }
        } else {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__kmac_st_d = 0x30U;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__kmac_state_error = 1U;
        }
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__kmac_st_d = 0x30U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__kmac_state_error = 1U;
    }
    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____VdfgExtracted_h6ab4d7cd__0) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__kmac_st_d = 0x30U;
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_msgfifo__DOT__flush_st_d 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_msgfifo__DOT__flush_st;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_msgfifo__DOT__msgfifo_flush_done = 0U;
    if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_msgfifo__DOT__flush_st))) {
        if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_msgfifo__DOT__flush_st))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_msgfifo__DOT__flush_st_d 
                = (([&]() {
                        vlSelfRef.__Vfunc_mubi4_test_true_strict__1567__val 
                            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__sha3_done_d;
                        vlSelfRef.__Vfunc_mubi4_test_true_strict__1567__Vfuncout 
                            = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__1567__val));
                    }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__1567__Vfuncout))
                    ? 0U : 3U);
        } else if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_msgfifo__DOT__u_msgfifo__DOT__rvalid_o) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_msgfifo__DOT__flush_st_d = 2U;
        } else {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_msgfifo__DOT__flush_st_d = 3U;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_msgfifo__DOT__msgfifo_flush_done = 1U;
        }
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_msgfifo__DOT__flush_st_d 
            = ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_msgfifo__DOT__flush_st))
                ? ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_msgfifo__DOT__u_packer__DOT__flush_done)
                    ? 2U : 1U) : ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__reg2msgfifo_process)
                                   ? 1U : 0U));
    }
    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_msgfifo__DOT____Vcellinp__u_msgfifo__clr_i) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_msgfifo__DOT__u_msgfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_msgfifo__DOT__u_msgfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 0x0000001fU;
    } else if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_msgfifo__DOT__u_msgfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__set_i) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_msgfifo__DOT__u_msgfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
            = (0x0000001fU & (0x00000010U & ((~ ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_msgfifo__DOT__u_msgfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                                                 >> 4U)) 
                                             << 4U)));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_msgfifo__DOT__u_msgfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
            = (0x0000001fU & ((IData)(0x1fU) - (0x00000010U 
                                                & ((~ 
                                                    ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_msgfifo__DOT__u_msgfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                                                     >> 4U)) 
                                                   << 4U))));
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_msgfifo__DOT__u_msgfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
            = (0x0000001fU & (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_msgfifo__DOT__u_msgfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__incr_en_i) 
                               & (~ (0x0000001fU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_msgfifo__DOT__u_msgfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))))
                               ? (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_msgfifo__DOT__u_msgfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__incr_en_i) 
                                   & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_msgfifo__DOT__u_msgfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt) 
                                      >> 5U)) ? 0x1fU
                                   : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_msgfifo__DOT__u_msgfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt))
                               : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_msgfifo__DOT__u_msgfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_msgfifo__DOT__u_msgfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
            = (0x0000001fU & (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_msgfifo__DOT__u_msgfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__incr_en_i) 
                               & (0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_msgfifo__DOT__u_msgfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)))
                               ? (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_msgfifo__DOT__u_msgfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__incr_en_i) 
                                   & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_msgfifo__DOT__u_msgfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt) 
                                      >> 5U)) ? 0U : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_msgfifo__DOT__u_msgfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt))
                               : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_msgfifo__DOT__u_msgfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_wptr__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)));
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__u_hash_count__DOT__incr_en_i 
        = ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__entropy_in_keyblock)) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__hash_progress_q));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__msgfifo_full_seen_d 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_status_fifo_full__DOT__d) 
           | ((~ ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_msgfifo__DOT__u_msgfifo__DOT__rvalid_o) 
                  & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__msgfifo_empty_q))) 
              & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_msgfifo__DOT__msgfifo_flush_done)) 
                 & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__msgfifo_full_seen_q))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_intr_state_fifo_empty__DOT__d 
        = (1U & (((~ ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_active_o) 
                      | ((1U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__sha3_fsm)) 
                         | ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__msgfifo_full_seen_q)) 
                            | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_msgfifo__DOT__msgfifo_flush_done))))) 
                  & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_msgfifo__DOT__u_msgfifo__DOT__rvalid_o))) 
                 | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__intr_fifo_empty__DOT__g_intr_status__DOT__test_q)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_kmac_core__DOT__st_d 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_kmac_core__DOT__u_state_regs__DOT__state_raw;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_kmac_core__DOT__en_kmac_datapath = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_kmac_core__DOT__en_key_write = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_kmac_core__DOT__clr_keyidx = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_kmac_core__DOT__kmac_valid = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_kmac_core__DOT__kmac_process = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__kmac_core_state_error = 0U;
    if ((0x00000020U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_kmac_core__DOT__u_state_regs__DOT__state_raw))) {
        if ((0x00000010U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_kmac_core__DOT__u_state_regs__DOT__state_raw))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_kmac_core__DOT__st_d = 0x20U;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__kmac_core_state_error = 1U;
        } else if ((8U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_kmac_core__DOT__u_state_regs__DOT__state_raw))) {
            if ((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_kmac_core__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_kmac_core__DOT__st_d = 0x20U;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__kmac_core_state_error = 1U;
            } else if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_kmac_core__DOT__u_state_regs__DOT__state_raw))) {
                if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_kmac_core__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_kmac_core__DOT__st_d 
                        = (([&]() {
                                vlSelfRef.__Vfunc_mubi4_test_true_strict__1514__val 
                                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__sha3_done_d;
                                vlSelfRef.__Vfunc_mubi4_test_true_strict__1514__Vfuncout 
                                    = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__1514__val));
                            }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__1514__Vfuncout))
                            ? 0x18U : 0x2bU);
                } else {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_kmac_core__DOT__st_d = 0x20U;
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__kmac_core_state_error = 1U;
                }
            } else {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_kmac_core__DOT__st_d = 0x20U;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__kmac_core_state_error = 1U;
            }
        } else if ((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_kmac_core__DOT__u_state_regs__DOT__state_raw))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_kmac_core__DOT__st_d = 0x20U;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__kmac_core_state_error = 1U;
        } else if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_kmac_core__DOT__u_state_regs__DOT__state_raw))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_kmac_core__DOT__st_d = 0x20U;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__kmac_core_state_error = 1U;
        } else if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_kmac_core__DOT__u_state_regs__DOT__state_raw))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_kmac_core__DOT__st_d = 0x20U;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__kmac_core_state_error = 1U;
        } else {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_kmac_core__DOT__st_d 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_kmac_core__DOT__u_state_regs__DOT__state_raw;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__kmac_core_state_error = 1U;
        }
    } else if ((0x00000010U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_kmac_core__DOT__u_state_regs__DOT__state_raw))) {
        if ((8U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_kmac_core__DOT__u_state_regs__DOT__state_raw))) {
            if ((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_kmac_core__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_kmac_core__DOT__st_d = 0x20U;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__kmac_core_state_error = 1U;
            } else if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_kmac_core__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_kmac_core__DOT__st_d = 0x20U;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__kmac_core_state_error = 1U;
            } else if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_kmac_core__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_kmac_core__DOT__st_d = 0x20U;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__kmac_core_state_error = 1U;
            } else {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_kmac_core__DOT__st_d 
                    = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__app_kmac_en) 
                        & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__sha3_start))
                        ? 0x17U : 0x18U);
            }
        } else if ((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_kmac_core__DOT__u_state_regs__DOT__state_raw))) {
            if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_kmac_core__DOT__u_state_regs__DOT__state_raw))) {
                if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_kmac_core__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_kmac_core__DOT__en_kmac_datapath = 1U;
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_kmac_core__DOT__en_key_write = 1U;
                    if (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_kmac_core__DOT__block_addr_limit) 
                         == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_kmac_core__DOT__u_key_index_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))) {
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_kmac_core__DOT__st_d = 0x0eU;
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_kmac_core__DOT__kmac_valid = 0U;
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_kmac_core__DOT__clr_keyidx = 1U;
                    } else {
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_kmac_core__DOT__st_d = 0x17U;
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_kmac_core__DOT__kmac_valid = 1U;
                    }
                } else {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_kmac_core__DOT__st_d = 0x20U;
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__kmac_core_state_error = 1U;
                }
            } else {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_kmac_core__DOT__st_d = 0x20U;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__kmac_core_state_error = 1U;
            }
        } else {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_kmac_core__DOT__st_d = 0x20U;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__kmac_core_state_error = 1U;
        }
    } else if ((8U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_kmac_core__DOT__u_state_regs__DOT__state_raw))) {
        if ((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_kmac_core__DOT__u_state_regs__DOT__state_raw))) {
            if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_kmac_core__DOT__u_state_regs__DOT__state_raw))) {
                if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_kmac_core__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_kmac_core__DOT__st_d = 0x20U;
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__kmac_core_state_error = 1U;
                } else if (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_msgfifo__DOT__msgfifo_flush_done) 
                            | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_kmac_core__DOT__process_latched))) {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_kmac_core__DOT__st_d = 0x2bU;
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_kmac_core__DOT__kmac_process = 1U;
                } else {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_kmac_core__DOT__st_d = 0x0eU;
                }
            } else {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_kmac_core__DOT__st_d = 0x20U;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__kmac_core_state_error = 1U;
            }
        } else {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_kmac_core__DOT__st_d = 0x20U;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__kmac_core_state_error = 1U;
        }
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_kmac_core__DOT__st_d = 0x20U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__kmac_core_state_error = 1U;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_lc_tx_test_true_loose__1515__val 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__lc_escalate_en__BRA__7__03a4__KET__;
                vlSelfRef.__Vfunc_lc_tx_test_true_loose__1515__Vfuncout 
                    = (0x0aU != (IData)(vlSelfRef.__Vfunc_lc_tx_test_true_loose__1515__val));
            }(), (IData)(vlSelfRef.__Vfunc_lc_tx_test_true_loose__1515__Vfuncout))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_kmac_core__DOT__st_d = 0x20U;
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__u_hash_count__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
        = (0x000007ffU & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__u_hash_count__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q) 
                          - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__u_hash_count__DOT__incr_en_i)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__u_hash_count__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
        = (0x000007ffU & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__u_hash_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                          + (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__u_hash_count__DOT__incr_en_i)));
    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_kmac_core__DOT__en_key_write) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_kmac_core__DOT__kmac_data[0U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_kmac_core__DOT__key_sliced
            [0U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_kmac_core__DOT__kmac_data[1U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_kmac_core__DOT__key_sliced
            [1U];
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_kmac_core__DOT__kmac_data[0U] = 0ULL;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_kmac_core__DOT__kmac_data[1U] = 0ULL;
    }
    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_kmac_core__DOT__en_kmac_datapath) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__msg_strb_i 
            = (0x000000ffU & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_kmac_core__DOT__en_key_write)
                               ? 0xffU : 0U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__msg_valid_i 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_kmac_core__DOT__kmac_valid;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__msg_data[0U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_kmac_core__DOT__kmac_data
            [0U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__msg_data[1U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_kmac_core__DOT__kmac_data
            [1U];
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__msg_strb_i 
            = (0x000000ffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_msgfifo__DOT__u_msgfifo__DOT__rdata_o[0U]);
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__msg_valid_i 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_msgfifo__DOT__u_msgfifo__DOT__rvalid_o;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__msg_data[0U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__msgfifo_data
            [0U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__msg_data[1U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__msgfifo_data
            [1U];
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__process_i 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__app_kmac_en)
            ? (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_kmac_core__DOT__kmac_process)
            : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_msgfifo__DOT__msgfifo_flush_done));
    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__u_hash_count__DOT__clr_i) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__u_hash_count__DOT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 0x000003ffU;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__u_hash_count__DOT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 0U;
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__u_hash_count__DOT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
            = (0x000003ffU & (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__u_hash_count__DOT__incr_en_i) 
                               & (0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__u_hash_count__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)))
                               ? (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__u_hash_count__DOT__incr_en_i) 
                                   & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__u_hash_count__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt) 
                                      >> 0x0000000aU))
                                   ? 0U : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__u_hash_count__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt))
                               : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__u_hash_count__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__u_hash_count__DOT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
            = (0x000003ffU & (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__u_hash_count__DOT__incr_en_i) 
                               & (~ (0x000003ffU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__u_hash_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))))
                               ? (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__u_hash_count__DOT__incr_en_i) 
                                   & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__u_hash_count__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt) 
                                      >> 0x0000000aU))
                                   ? 0x03ffU : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__u_hash_count__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt))
                               : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__u_hash_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)));
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__sha3_err = 0ULL;
    if ((0x00000020U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_state_regs__DOT__state_raw))) {
        if ((1U & (~ ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_state_regs__DOT__state_raw) 
                      >> 4U)))) {
            if ((8U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_state_regs__DOT__state_raw))) {
                if ((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (~ ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_state_regs__DOT__state_raw) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_state_regs__DOT__state_raw)))) {
                            if ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__process_i) 
                                  | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__sha3_run)) 
                                 | ([&]() {
                                            vlSelfRef.__Vfunc_mubi4_test_true_loose__1523__val 
                                                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__sha3_done_d;
                                            vlSelfRef.__Vfunc_mubi4_test_true_loose__1523__Vfuncout 
                                                = (9U 
                                                   != (IData)(vlSelfRef.__Vfunc_mubi4_test_true_loose__1523__val));
                                        }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_loose__1523__Vfuncout)))) {
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__sha3_err 
                                    = (0x0000000180000000ULL 
                                       | (QData)((IData)(
                                                         (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__sha3_done_d) 
                                                           << 3U) 
                                                          | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__sha3_run) 
                                                              << 2U) 
                                                             | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__process_i) 
                                                                 << 1U) 
                                                                | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__sha3_start)))))));
                            }
                        }
                    }
                }
            } else if ((1U & (~ ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_state_regs__DOT__state_raw) 
                                 >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_state_regs__DOT__state_raw) 
                              >> 1U)))) {
                    if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_state_regs__DOT__state_raw))) {
                        if (((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__sha3_start) 
                               | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__sha3_run)) 
                              | ([&]() {
                                            vlSelfRef.__Vfunc_mubi4_test_true_loose__1524__val 
                                                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__sha3_done_d;
                                            vlSelfRef.__Vfunc_mubi4_test_true_loose__1524__Vfuncout 
                                                = (9U 
                                                   != (IData)(vlSelfRef.__Vfunc_mubi4_test_true_loose__1524__val));
                                        }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_loose__1524__Vfuncout))) 
                             | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__process_i) 
                                & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__processing)))) {
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__sha3_err 
                                = (0x0000000180000000ULL 
                                   | (QData)((IData)(
                                                     (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__sha3_done_d) 
                                                       << 3U) 
                                                      | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__sha3_run) 
                                                          << 2U) 
                                                         | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__process_i) 
                                                             << 1U) 
                                                            | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__sha3_start)))))));
                        }
                    }
                }
            }
        }
    } else if ((0x00000010U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_state_regs__DOT__state_raw))) {
        if ((1U & (~ ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_state_regs__DOT__state_raw) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_state_regs__DOT__state_raw) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_state_regs__DOT__state_raw) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_state_regs__DOT__state_raw)))) {
                        if (((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__sha3_start) 
                               | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__process_i)) 
                              | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__sha3_run)) 
                             | ([&]() {
                                        vlSelfRef.__Vfunc_mubi4_test_true_loose__1525__val 
                                            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__sha3_done_d;
                                        vlSelfRef.__Vfunc_mubi4_test_true_loose__1525__Vfuncout 
                                            = (9U != (IData)(vlSelfRef.__Vfunc_mubi4_test_true_loose__1525__val));
                                    }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_loose__1525__Vfuncout)))) {
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__sha3_err 
                                = (0x0000000180000000ULL 
                                   | (QData)((IData)(
                                                     (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__sha3_done_d) 
                                                       << 3U) 
                                                      | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__sha3_run) 
                                                          << 2U) 
                                                         | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__process_i) 
                                                             << 1U) 
                                                            | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__sha3_start)))))));
                        }
                    }
                }
            }
        }
    } else if ((8U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_state_regs__DOT__state_raw))) {
        if ((1U & (~ ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_state_regs__DOT__state_raw) 
                      >> 2U)))) {
            if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_state_regs__DOT__state_raw))) {
                if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_state_regs__DOT__state_raw))) {
                    if (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__sha3_start) 
                         | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__process_i))) {
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__sha3_err 
                            = (0x0000000180000000ULL 
                               | (QData)((IData)((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__sha3_done_d) 
                                                   << 3U) 
                                                  | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__sha3_run) 
                                                      << 2U) 
                                                     | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__process_i) 
                                                         << 1U) 
                                                        | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__sha3_start)))))));
                    }
                }
            }
        }
    } else if ((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_state_regs__DOT__state_raw))) {
        if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_state_regs__DOT__state_raw))) {
            if ((1U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_state_regs__DOT__state_raw)))) {
                if (((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__sha3_start) 
                       | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__process_i)) 
                      | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__sha3_run)) 
                     | ([&]() {
                                vlSelfRef.__Vfunc_mubi4_test_true_loose__1526__val 
                                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__sha3_done_d;
                                vlSelfRef.__Vfunc_mubi4_test_true_loose__1526__Vfuncout 
                                    = (9U != (IData)(vlSelfRef.__Vfunc_mubi4_test_true_loose__1526__val));
                            }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_loose__1526__Vfuncout)))) {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__sha3_err 
                        = (0x0000000180000000ULL | (QData)((IData)(
                                                                   (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__sha3_done_d) 
                                                                     << 3U) 
                                                                    | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__sha3_run) 
                                                                        << 2U) 
                                                                       | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__process_i) 
                                                                           << 1U) 
                                                                          | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__sha3_start)))))));
                }
            }
        }
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__st_d 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_state_regs__DOT__state_raw;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__keccak_start = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__keccak_process = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__sw_keccak_run = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__keccak_done = 9U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__squeezing = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_valid = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__mux_sel = 2U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__sha3_state_error = 0U;
    if ((0x00000020U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_state_regs__DOT__state_raw))) {
        if ((0x00000010U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_state_regs__DOT__state_raw))) {
            if ((8U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_state_regs__DOT__state_raw))) {
                if ((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__st_d = 0x3aU;
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__sha3_state_error = 1U;
                } else if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__st_d = 0x3aU;
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__sha3_state_error = 1U;
                    } else {
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__st_d = 0x3aU;
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__sha3_state_error = 1U;
                    }
                } else {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__st_d = 0x3aU;
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__sha3_state_error = 1U;
                }
            } else {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__st_d = 0x3aU;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__sha3_state_error = 1U;
            }
        } else if ((8U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_state_regs__DOT__state_raw))) {
            if ((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_state_regs__DOT__state_raw))) {
                if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__st_d = 0x3aU;
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__sha3_state_error = 1U;
                } else if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__st_d = 0x3aU;
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__sha3_state_error = 1U;
                } else if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__sha3_start) {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__st_d = 0x21U;
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__keccak_start = 1U;
                } else {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__st_d = 0x2cU;
                }
            } else {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__st_d = 0x3aU;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__sha3_state_error = 1U;
            }
        } else if ((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_state_regs__DOT__state_raw))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__st_d = 0x3aU;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__sha3_state_error = 1U;
        } else if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_state_regs__DOT__state_raw))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__st_d = 0x3aU;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__sha3_state_error = 1U;
        } else if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_state_regs__DOT__state_raw))) {
            if (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__process_i) 
                 & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__processing)))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__st_d = 0x21U;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__keccak_process = 1U;
            } else {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__st_d 
                    = (([&]() {
                            vlSelfRef.__Vfunc_mubi4_test_true_strict__1520__val 
                                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__absorbed;
                            vlSelfRef.__Vfunc_mubi4_test_true_strict__1520__Vfuncout 
                                = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__1520__val));
                        }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__1520__Vfuncout))
                        ? 0x0bU : 0x21U);
            }
        } else {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__st_d = 0x3aU;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__sha3_state_error = 1U;
        }
    } else if ((0x00000010U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_state_regs__DOT__state_raw))) {
        if ((8U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_state_regs__DOT__state_raw))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__st_d = 0x3aU;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__sha3_state_error = 1U;
        } else if ((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_state_regs__DOT__state_raw))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__st_d = 0x3aU;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__sha3_state_error = 1U;
        } else if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_state_regs__DOT__state_raw))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__st_d = 0x3aU;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__sha3_state_error = 1U;
        } else if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_state_regs__DOT__state_raw))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__st_d = 0x3aU;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__sha3_state_error = 1U;
        } else {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__st_d 
                = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__keccak_complete)
                    ? 0x0bU : 0x10U);
        }
    } else if ((8U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_state_regs__DOT__state_raw))) {
        if ((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_state_regs__DOT__state_raw))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__st_d = 0x3aU;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__sha3_state_error = 1U;
        } else if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_state_regs__DOT__state_raw))) {
            if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_valid = 1U;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__mux_sel = 5U;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__squeezing = 1U;
                if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__sha3_run) {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__st_d = 0x10U;
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__sw_keccak_run = 1U;
                } else if (([&]() {
                            vlSelfRef.__Vfunc_mubi4_test_true_strict__1521__val 
                                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__sha3_done_d;
                            vlSelfRef.__Vfunc_mubi4_test_true_strict__1521__Vfuncout 
                                = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__1521__val));
                        }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__1521__Vfuncout))) {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__st_d = 6U;
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__keccak_done 
                        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__sha3_done_d;
                } else {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__st_d = 0x0bU;
                }
            } else {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__st_d = 0x3aU;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__sha3_state_error = 1U;
            }
        } else {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__st_d = 0x3aU;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__sha3_state_error = 1U;
        }
    } else if ((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_state_regs__DOT__state_raw))) {
        if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_state_regs__DOT__state_raw))) {
            if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__st_d = 0x3aU;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__sha3_state_error = 1U;
            } else {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__st_d = 0x2cU;
            }
        } else {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__st_d = 0x3aU;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__sha3_state_error = 1U;
        }
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__st_d = 0x3aU;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__sha3_state_error = 1U;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_lc_tx_test_true_loose__1522__val 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__lc_escalate_en__BRA__11__03a8__KET__;
                vlSelfRef.__Vfunc_lc_tx_test_true_loose__1522__Vfuncout 
                    = (0x0aU != (IData)(vlSelfRef.__Vfunc_lc_tx_test_true_loose__1522__val));
            }(), (IData)(vlSelfRef.__Vfunc_lc_tx_test_true_loose__1522__Vfuncout))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__st_d = 0x3aU;
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_kmac_core__DOT__msg_data_o[0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__msg_data
        [0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_kmac_core__DOT__msg_data_o[1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__msg_data
        [1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__msg_data_masked[0U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__msg_data
           [0U] ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____VdfgRegularize_h4f2315ce_0_0);
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__msg_data_masked[1U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__msg_data
           [1U] ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____VdfgRegularize_h4f2315ce_0_0);
    if ((1U & (~ VL_ONEHOT_I((((5U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__mux_sel)) 
                               << 1U) | (2U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__mux_sel))))))) {
        if ((0U != (((5U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__mux_sel)) 
                     << 1U) | (2U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__mux_sel))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: sha3.sv:332: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_kmac.u_sha3.state_guarded_mux: unique case, but multiple matches found for '3'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),3,
                             (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__mux_sel));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/sha3.sv", 332, "");
            }
        }
    }
    if ((2U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__mux_sel))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[0U][0U] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[0U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[0U][1U] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[1U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[0U][2U] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[2U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[0U][3U] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[3U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[0U][4U] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[4U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[0U][5U] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[5U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[0U][6U] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[6U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[0U][7U] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[7U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[0U][8U] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[8U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[0U][9U] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[9U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[0U][0x0000000aU] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[0x0000000aU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[0U][0x0000000bU] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[0x0000000bU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[0U][0x0000000cU] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[0x0000000cU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[0U][0x0000000dU] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[0x0000000dU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[0U][0x0000000eU] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[0x0000000eU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[0U][0x0000000fU] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[0x0000000fU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[0U][0x00000010U] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[0x00000010U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[0U][0x00000011U] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[0x00000011U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[0U][0x00000012U] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[0x00000012U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[0U][0x00000013U] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[0x00000013U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[0U][0x00000014U] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[0x00000014U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[0U][0x00000015U] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[0x00000015U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[0U][0x00000016U] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[0x00000016U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[0U][0x00000017U] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[0x00000017U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[0U][0x00000018U] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[0x00000018U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[0U][0x00000019U] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[0x00000019U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[0U][0x0000001aU] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[0x0000001aU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[0U][0x0000001bU] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[0x0000001bU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[0U][0x0000001cU] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[0x0000001cU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[0U][0x0000001dU] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[0x0000001dU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[0U][0x0000001eU] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[0x0000001eU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[0U][0x0000001fU] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[0x0000001fU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[0U][0x00000020U] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[0x00000020U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[0U][0x00000021U] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[0x00000021U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[0U][0x00000022U] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[0x00000022U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[0U][0x00000023U] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[0x00000023U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[0U][0x00000024U] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[0x00000024U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[0U][0x00000025U] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[0x00000025U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[0U][0x00000026U] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[0x00000026U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[0U][0x00000027U] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[0x00000027U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[0U][0x00000028U] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[0x00000028U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[0U][0x00000029U] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[0x00000029U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[0U][0x0000002aU] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[0x0000002aU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[0U][0x0000002bU] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[0x0000002bU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[0U][0x0000002cU] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[0x0000002cU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[0U][0x0000002dU] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[0x0000002dU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[0U][0x0000002eU] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[0x0000002eU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[0U][0x0000002fU] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[0x0000002fU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[0U][0x00000030U] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[0x00000030U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[0U][0x00000031U] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[0x00000031U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[1U][0U] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[0U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[1U][1U] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[1U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[1U][2U] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[2U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[1U][3U] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[3U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[1U][4U] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[4U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[1U][5U] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[5U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[1U][6U] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[6U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[1U][7U] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[7U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[1U][8U] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[8U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[1U][9U] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[9U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[1U][0x0000000aU] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[0x0000000aU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[1U][0x0000000bU] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[0x0000000bU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[1U][0x0000000cU] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[0x0000000cU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[1U][0x0000000dU] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[0x0000000dU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[1U][0x0000000eU] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[0x0000000eU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[1U][0x0000000fU] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[0x0000000fU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[1U][0x00000010U] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[0x00000010U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[1U][0x00000011U] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[0x00000011U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[1U][0x00000012U] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[0x00000012U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[1U][0x00000013U] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[0x00000013U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[1U][0x00000014U] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[0x00000014U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[1U][0x00000015U] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[0x00000015U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[1U][0x00000016U] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[0x00000016U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[1U][0x00000017U] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[0x00000017U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[1U][0x00000018U] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[0x00000018U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[1U][0x00000019U] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[0x00000019U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[1U][0x0000001aU] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[0x0000001aU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[1U][0x0000001bU] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[0x0000001bU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[1U][0x0000001cU] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[0x0000001cU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[1U][0x0000001dU] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[0x0000001dU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[1U][0x0000001eU] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[0x0000001eU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[1U][0x0000001fU] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[0x0000001fU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[1U][0x00000020U] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[0x00000020U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[1U][0x00000021U] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[0x00000021U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[1U][0x00000022U] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[0x00000022U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[1U][0x00000023U] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[0x00000023U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[1U][0x00000024U] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[0x00000024U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[1U][0x00000025U] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[0x00000025U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[1U][0x00000026U] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[0x00000026U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[1U][0x00000027U] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[0x00000027U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[1U][0x00000028U] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[0x00000028U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[1U][0x00000029U] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[0x00000029U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[1U][0x0000002aU] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[0x0000002aU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[1U][0x0000002bU] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[0x0000002bU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[1U][0x0000002cU] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[0x0000002cU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[1U][0x0000002dU] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[0x0000002dU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[1U][0x0000002eU] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[0x0000002eU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[1U][0x0000002fU] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[0x0000002fU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[1U][0x00000030U] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[0x00000030U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[1U][0x00000031U] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[0x00000031U];
    } else if ((5U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__mux_sel))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[0U][0U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state
            [0U][0U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[0U][1U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state
            [0U][1U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[0U][2U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state
            [0U][2U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[0U][3U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state
            [0U][3U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[0U][4U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state
            [0U][4U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[0U][5U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state
            [0U][5U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[0U][6U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state
            [0U][6U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[0U][7U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state
            [0U][7U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[0U][8U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state
            [0U][8U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[0U][9U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state
            [0U][9U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[0U][0x0000000aU] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state
            [0U][0x0000000aU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[0U][0x0000000bU] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state
            [0U][0x0000000bU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[0U][0x0000000cU] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state
            [0U][0x0000000cU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[0U][0x0000000dU] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state
            [0U][0x0000000dU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[0U][0x0000000eU] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state
            [0U][0x0000000eU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[0U][0x0000000fU] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state
            [0U][0x0000000fU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[0U][0x00000010U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state
            [0U][0x00000010U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[0U][0x00000011U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state
            [0U][0x00000011U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[0U][0x00000012U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state
            [0U][0x00000012U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[0U][0x00000013U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state
            [0U][0x00000013U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[0U][0x00000014U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state
            [0U][0x00000014U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[0U][0x00000015U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state
            [0U][0x00000015U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[0U][0x00000016U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state
            [0U][0x00000016U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[0U][0x00000017U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state
            [0U][0x00000017U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[0U][0x00000018U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state
            [0U][0x00000018U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[0U][0x00000019U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state
            [0U][0x00000019U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[0U][0x0000001aU] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state
            [0U][0x0000001aU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[0U][0x0000001bU] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state
            [0U][0x0000001bU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[0U][0x0000001cU] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state
            [0U][0x0000001cU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[0U][0x0000001dU] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state
            [0U][0x0000001dU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[0U][0x0000001eU] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state
            [0U][0x0000001eU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[0U][0x0000001fU] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state
            [0U][0x0000001fU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[0U][0x00000020U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state
            [0U][0x00000020U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[0U][0x00000021U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state
            [0U][0x00000021U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[0U][0x00000022U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state
            [0U][0x00000022U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[0U][0x00000023U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state
            [0U][0x00000023U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[0U][0x00000024U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state
            [0U][0x00000024U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[0U][0x00000025U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state
            [0U][0x00000025U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[0U][0x00000026U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state
            [0U][0x00000026U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[0U][0x00000027U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state
            [0U][0x00000027U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[0U][0x00000028U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state
            [0U][0x00000028U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[0U][0x00000029U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state
            [0U][0x00000029U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[0U][0x0000002aU] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state
            [0U][0x0000002aU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[0U][0x0000002bU] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state
            [0U][0x0000002bU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[0U][0x0000002cU] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state
            [0U][0x0000002cU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[0U][0x0000002dU] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state
            [0U][0x0000002dU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[0U][0x0000002eU] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state
            [0U][0x0000002eU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[0U][0x0000002fU] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state
            [0U][0x0000002fU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[0U][0x00000030U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state
            [0U][0x00000030U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[0U][0x00000031U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state
            [0U][0x00000031U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[1U][0U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state
            [1U][0U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[1U][1U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state
            [1U][1U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[1U][2U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state
            [1U][2U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[1U][3U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state
            [1U][3U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[1U][4U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state
            [1U][4U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[1U][5U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state
            [1U][5U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[1U][6U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state
            [1U][6U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[1U][7U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state
            [1U][7U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[1U][8U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state
            [1U][8U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[1U][9U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state
            [1U][9U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[1U][0x0000000aU] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state
            [1U][0x0000000aU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[1U][0x0000000bU] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state
            [1U][0x0000000bU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[1U][0x0000000cU] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state
            [1U][0x0000000cU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[1U][0x0000000dU] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state
            [1U][0x0000000dU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[1U][0x0000000eU] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state
            [1U][0x0000000eU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[1U][0x0000000fU] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state
            [1U][0x0000000fU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[1U][0x00000010U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state
            [1U][0x00000010U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[1U][0x00000011U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state
            [1U][0x00000011U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[1U][0x00000012U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state
            [1U][0x00000012U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[1U][0x00000013U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state
            [1U][0x00000013U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[1U][0x00000014U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state
            [1U][0x00000014U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[1U][0x00000015U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state
            [1U][0x00000015U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[1U][0x00000016U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state
            [1U][0x00000016U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[1U][0x00000017U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state
            [1U][0x00000017U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[1U][0x00000018U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state
            [1U][0x00000018U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[1U][0x00000019U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state
            [1U][0x00000019U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[1U][0x0000001aU] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state
            [1U][0x0000001aU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[1U][0x0000001bU] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state
            [1U][0x0000001bU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[1U][0x0000001cU] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state
            [1U][0x0000001cU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[1U][0x0000001dU] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state
            [1U][0x0000001dU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[1U][0x0000001eU] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state
            [1U][0x0000001eU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[1U][0x0000001fU] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state
            [1U][0x0000001fU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[1U][0x00000020U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state
            [1U][0x00000020U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[1U][0x00000021U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state
            [1U][0x00000021U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[1U][0x00000022U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state
            [1U][0x00000022U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[1U][0x00000023U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state
            [1U][0x00000023U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[1U][0x00000024U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state
            [1U][0x00000024U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[1U][0x00000025U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state
            [1U][0x00000025U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[1U][0x00000026U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state
            [1U][0x00000026U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[1U][0x00000027U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state
            [1U][0x00000027U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[1U][0x00000028U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state
            [1U][0x00000028U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[1U][0x00000029U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state
            [1U][0x00000029U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[1U][0x0000002aU] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state
            [1U][0x0000002aU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[1U][0x0000002bU] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state
            [1U][0x0000002bU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[1U][0x0000002cU] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state
            [1U][0x0000002cU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[1U][0x0000002dU] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state
            [1U][0x0000002dU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[1U][0x0000002eU] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state
            [1U][0x0000002eU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[1U][0x0000002fU] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state
            [1U][0x0000002fU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[1U][0x00000030U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state
            [1U][0x00000030U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[1U][0x00000031U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state
            [1U][0x00000031U];
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[0U][0U] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[0U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[0U][1U] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[1U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[0U][2U] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[2U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[0U][3U] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[3U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[0U][4U] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[4U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[0U][5U] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[5U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[0U][6U] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[6U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[0U][7U] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[7U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[0U][8U] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[8U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[0U][9U] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[9U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[0U][0x0000000aU] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[0x0000000aU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[0U][0x0000000bU] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[0x0000000bU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[0U][0x0000000cU] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[0x0000000cU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[0U][0x0000000dU] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[0x0000000dU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[0U][0x0000000eU] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[0x0000000eU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[0U][0x0000000fU] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[0x0000000fU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[0U][0x00000010U] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[0x00000010U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[0U][0x00000011U] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[0x00000011U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[0U][0x00000012U] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[0x00000012U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[0U][0x00000013U] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[0x00000013U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[0U][0x00000014U] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[0x00000014U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[0U][0x00000015U] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[0x00000015U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[0U][0x00000016U] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[0x00000016U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[0U][0x00000017U] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[0x00000017U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[0U][0x00000018U] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[0x00000018U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[0U][0x00000019U] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[0x00000019U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[0U][0x0000001aU] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[0x0000001aU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[0U][0x0000001bU] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[0x0000001bU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[0U][0x0000001cU] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[0x0000001cU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[0U][0x0000001dU] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[0x0000001dU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[0U][0x0000001eU] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[0x0000001eU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[0U][0x0000001fU] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[0x0000001fU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[0U][0x00000020U] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[0x00000020U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[0U][0x00000021U] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[0x00000021U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[0U][0x00000022U] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[0x00000022U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[0U][0x00000023U] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[0x00000023U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[0U][0x00000024U] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[0x00000024U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[0U][0x00000025U] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[0x00000025U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[0U][0x00000026U] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[0x00000026U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[0U][0x00000027U] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[0x00000027U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[0U][0x00000028U] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[0x00000028U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[0U][0x00000029U] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[0x00000029U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[0U][0x0000002aU] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[0x0000002aU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[0U][0x0000002bU] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[0x0000002bU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[0U][0x0000002cU] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[0x0000002cU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[0U][0x0000002dU] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[0x0000002dU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[0U][0x0000002eU] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[0x0000002eU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[0U][0x0000002fU] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[0x0000002fU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[0U][0x00000030U] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[0x00000030U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[0U][0x00000031U] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[0x00000031U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[1U][0U] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[0U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[1U][1U] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[1U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[1U][2U] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[2U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[1U][3U] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[3U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[1U][4U] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[4U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[1U][5U] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[5U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[1U][6U] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[6U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[1U][7U] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[7U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[1U][8U] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[8U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[1U][9U] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[9U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[1U][0x0000000aU] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[0x0000000aU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[1U][0x0000000bU] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[0x0000000bU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[1U][0x0000000cU] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[0x0000000cU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[1U][0x0000000dU] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[0x0000000dU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[1U][0x0000000eU] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[0x0000000eU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[1U][0x0000000fU] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[0x0000000fU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[1U][0x00000010U] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[0x00000010U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[1U][0x00000011U] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[0x00000011U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[1U][0x00000012U] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[0x00000012U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[1U][0x00000013U] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[0x00000013U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[1U][0x00000014U] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[0x00000014U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[1U][0x00000015U] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[0x00000015U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[1U][0x00000016U] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[0x00000016U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[1U][0x00000017U] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[0x00000017U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[1U][0x00000018U] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[0x00000018U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[1U][0x00000019U] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[0x00000019U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[1U][0x0000001aU] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[0x0000001aU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[1U][0x0000001bU] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[0x0000001bU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[1U][0x0000001cU] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[0x0000001cU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[1U][0x0000001dU] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[0x0000001dU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[1U][0x0000001eU] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[0x0000001eU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[1U][0x0000001fU] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[0x0000001fU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[1U][0x00000020U] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[0x00000020U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[1U][0x00000021U] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[0x00000021U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[1U][0x00000022U] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[0x00000022U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[1U][0x00000023U] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[0x00000023U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[1U][0x00000024U] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[0x00000024U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[1U][0x00000025U] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[0x00000025U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[1U][0x00000026U] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[0x00000026U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[1U][0x00000027U] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[0x00000027U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[1U][0x00000028U] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[0x00000028U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[1U][0x00000029U] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[0x00000029U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[1U][0x0000002aU] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[0x0000002aU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[1U][0x0000002bU] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[0x0000002bU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[1U][0x0000002cU] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[0x0000002cU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[1U][0x0000002dU] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[0x0000002dU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[1U][0x0000002eU] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[0x0000002eU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[1U][0x0000002fU] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[0x0000002fU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[1U][0x00000030U] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[0x00000030U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded[1U][0x00000031U] 
            = Vsim__ConstPool__CONST_ha4affa7d_0[0x00000031U];
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__msg_data_i[0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__msg_data_masked
        [0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__msg_data_i[1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__msg_data_masked
        [1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__msg_data_i[0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__msg_data_masked
        [0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__msg_data_i[1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__msg_data_masked
        [1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state[0U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded
        [0U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state[0U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded
        [0U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state[0U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded
        [0U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state[0U][3U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded
        [0U][3U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state[0U][4U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded
        [0U][4U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state[0U][5U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded
        [0U][5U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state[0U][6U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded
        [0U][6U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state[0U][7U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded
        [0U][7U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state[0U][8U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded
        [0U][8U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state[0U][9U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded
        [0U][9U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state[0U][0x0000000aU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded
        [0U][0x0000000aU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state[0U][0x0000000bU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded
        [0U][0x0000000bU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state[0U][0x0000000cU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded
        [0U][0x0000000cU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state[0U][0x0000000dU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded
        [0U][0x0000000dU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state[0U][0x0000000eU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded
        [0U][0x0000000eU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state[0U][0x0000000fU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded
        [0U][0x0000000fU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state[0U][0x00000010U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded
        [0U][0x00000010U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state[0U][0x00000011U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded
        [0U][0x00000011U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state[0U][0x00000012U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded
        [0U][0x00000012U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state[0U][0x00000013U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded
        [0U][0x00000013U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state[0U][0x00000014U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded
        [0U][0x00000014U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state[0U][0x00000015U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded
        [0U][0x00000015U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state[0U][0x00000016U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded
        [0U][0x00000016U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state[0U][0x00000017U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded
        [0U][0x00000017U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state[0U][0x00000018U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded
        [0U][0x00000018U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state[0U][0x00000019U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded
        [0U][0x00000019U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state[0U][0x0000001aU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded
        [0U][0x0000001aU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state[0U][0x0000001bU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded
        [0U][0x0000001bU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state[0U][0x0000001cU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded
        [0U][0x0000001cU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state[0U][0x0000001dU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded
        [0U][0x0000001dU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state[0U][0x0000001eU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded
        [0U][0x0000001eU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state[0U][0x0000001fU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded
        [0U][0x0000001fU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state[0U][0x00000020U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded
        [0U][0x00000020U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state[0U][0x00000021U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded
        [0U][0x00000021U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state[0U][0x00000022U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded
        [0U][0x00000022U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state[0U][0x00000023U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded
        [0U][0x00000023U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state[0U][0x00000024U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded
        [0U][0x00000024U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state[0U][0x00000025U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded
        [0U][0x00000025U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state[0U][0x00000026U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded
        [0U][0x00000026U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state[0U][0x00000027U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded
        [0U][0x00000027U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state[0U][0x00000028U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded
        [0U][0x00000028U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state[0U][0x00000029U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded
        [0U][0x00000029U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state[0U][0x0000002aU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded
        [0U][0x0000002aU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state[0U][0x0000002bU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded
        [0U][0x0000002bU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state[0U][0x0000002cU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded
        [0U][0x0000002cU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state[0U][0x0000002dU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded
        [0U][0x0000002dU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state[0U][0x0000002eU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded
        [0U][0x0000002eU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state[0U][0x0000002fU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded
        [0U][0x0000002fU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state[0U][0x00000030U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded
        [0U][0x00000030U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state[0U][0x00000031U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded
        [0U][0x00000031U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state[1U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded
        [1U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state[1U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded
        [1U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state[1U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded
        [1U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state[1U][3U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded
        [1U][3U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state[1U][4U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded
        [1U][4U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state[1U][5U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded
        [1U][5U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state[1U][6U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded
        [1U][6U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state[1U][7U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded
        [1U][7U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state[1U][8U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded
        [1U][8U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state[1U][9U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded
        [1U][9U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state[1U][0x0000000aU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded
        [1U][0x0000000aU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state[1U][0x0000000bU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded
        [1U][0x0000000bU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state[1U][0x0000000cU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded
        [1U][0x0000000cU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state[1U][0x0000000dU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded
        [1U][0x0000000dU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state[1U][0x0000000eU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded
        [1U][0x0000000eU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state[1U][0x0000000fU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded
        [1U][0x0000000fU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state[1U][0x00000010U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded
        [1U][0x00000010U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state[1U][0x00000011U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded
        [1U][0x00000011U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state[1U][0x00000012U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded
        [1U][0x00000012U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state[1U][0x00000013U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded
        [1U][0x00000013U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state[1U][0x00000014U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded
        [1U][0x00000014U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state[1U][0x00000015U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded
        [1U][0x00000015U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state[1U][0x00000016U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded
        [1U][0x00000016U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state[1U][0x00000017U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded
        [1U][0x00000017U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state[1U][0x00000018U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded
        [1U][0x00000018U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state[1U][0x00000019U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded
        [1U][0x00000019U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state[1U][0x0000001aU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded
        [1U][0x0000001aU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state[1U][0x0000001bU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded
        [1U][0x0000001bU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state[1U][0x0000001cU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded
        [1U][0x0000001cU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state[1U][0x0000001dU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded
        [1U][0x0000001dU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state[1U][0x0000001eU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded
        [1U][0x0000001eU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state[1U][0x0000001fU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded
        [1U][0x0000001fU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state[1U][0x00000020U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded
        [1U][0x00000020U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state[1U][0x00000021U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded
        [1U][0x00000021U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state[1U][0x00000022U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded
        [1U][0x00000022U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state[1U][0x00000023U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded
        [1U][0x00000023U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state[1U][0x00000024U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded
        [1U][0x00000024U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state[1U][0x00000025U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded
        [1U][0x00000025U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state[1U][0x00000026U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded
        [1U][0x00000026U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state[1U][0x00000027U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded
        [1U][0x00000027U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state[1U][0x00000028U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded
        [1U][0x00000028U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state[1U][0x00000029U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded
        [1U][0x00000029U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state[1U][0x0000002aU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded
        [1U][0x0000002aU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state[1U][0x0000002bU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded
        [1U][0x0000002bU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state[1U][0x0000002cU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded
        [1U][0x0000002cU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state[1U][0x0000002dU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded
        [1U][0x0000002dU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state[1U][0x0000002eU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded
        [1U][0x0000002eU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state[1U][0x0000002fU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded
        [1U][0x0000002fU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state[1U][0x00000030U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded
        [1U][0x00000030U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state[1U][0x00000031U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_guarded
        [1U][0x00000031U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_o[0U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [0U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_o[0U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [0U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_o[0U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [0U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_o[0U][3U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [0U][3U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_o[0U][4U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [0U][4U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_o[0U][5U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [0U][5U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_o[0U][6U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [0U][6U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_o[0U][7U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [0U][7U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_o[0U][8U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [0U][8U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_o[0U][9U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [0U][9U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_o[0U][0x0000000aU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [0U][0x0000000aU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_o[0U][0x0000000bU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [0U][0x0000000bU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_o[0U][0x0000000cU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [0U][0x0000000cU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_o[0U][0x0000000dU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [0U][0x0000000dU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_o[0U][0x0000000eU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [0U][0x0000000eU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_o[0U][0x0000000fU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [0U][0x0000000fU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_o[0U][0x00000010U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [0U][0x00000010U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_o[0U][0x00000011U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [0U][0x00000011U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_o[0U][0x00000012U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [0U][0x00000012U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_o[0U][0x00000013U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [0U][0x00000013U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_o[0U][0x00000014U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [0U][0x00000014U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_o[0U][0x00000015U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [0U][0x00000015U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_o[0U][0x00000016U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [0U][0x00000016U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_o[0U][0x00000017U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [0U][0x00000017U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_o[0U][0x00000018U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [0U][0x00000018U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_o[0U][0x00000019U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [0U][0x00000019U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_o[0U][0x0000001aU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [0U][0x0000001aU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_o[0U][0x0000001bU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [0U][0x0000001bU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_o[0U][0x0000001cU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [0U][0x0000001cU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_o[0U][0x0000001dU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [0U][0x0000001dU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_o[0U][0x0000001eU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [0U][0x0000001eU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_o[0U][0x0000001fU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [0U][0x0000001fU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_o[0U][0x00000020U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [0U][0x00000020U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_o[0U][0x00000021U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [0U][0x00000021U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_o[0U][0x00000022U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [0U][0x00000022U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_o[0U][0x00000023U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [0U][0x00000023U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_o[0U][0x00000024U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [0U][0x00000024U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_o[0U][0x00000025U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [0U][0x00000025U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_o[0U][0x00000026U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [0U][0x00000026U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_o[0U][0x00000027U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [0U][0x00000027U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_o[0U][0x00000028U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [0U][0x00000028U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_o[0U][0x00000029U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [0U][0x00000029U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_o[0U][0x0000002aU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [0U][0x0000002aU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_o[0U][0x0000002bU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [0U][0x0000002bU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_o[0U][0x0000002cU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [0U][0x0000002cU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_o[0U][0x0000002dU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [0U][0x0000002dU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_o[0U][0x0000002eU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [0U][0x0000002eU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_o[0U][0x0000002fU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [0U][0x0000002fU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_o[0U][0x00000030U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [0U][0x00000030U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_o[0U][0x00000031U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [0U][0x00000031U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_o[1U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [1U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_o[1U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [1U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_o[1U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [1U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_o[1U][3U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [1U][3U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_o[1U][4U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [1U][4U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_o[1U][5U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [1U][5U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_o[1U][6U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [1U][6U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_o[1U][7U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [1U][7U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_o[1U][8U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [1U][8U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_o[1U][9U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [1U][9U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_o[1U][0x0000000aU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [1U][0x0000000aU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_o[1U][0x0000000bU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [1U][0x0000000bU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_o[1U][0x0000000cU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [1U][0x0000000cU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_o[1U][0x0000000dU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [1U][0x0000000dU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_o[1U][0x0000000eU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [1U][0x0000000eU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_o[1U][0x0000000fU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [1U][0x0000000fU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_o[1U][0x00000010U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [1U][0x00000010U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_o[1U][0x00000011U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [1U][0x00000011U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_o[1U][0x00000012U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [1U][0x00000012U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_o[1U][0x00000013U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [1U][0x00000013U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_o[1U][0x00000014U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [1U][0x00000014U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_o[1U][0x00000015U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [1U][0x00000015U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_o[1U][0x00000016U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [1U][0x00000016U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_o[1U][0x00000017U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [1U][0x00000017U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_o[1U][0x00000018U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [1U][0x00000018U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_o[1U][0x00000019U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [1U][0x00000019U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_o[1U][0x0000001aU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [1U][0x0000001aU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_o[1U][0x0000001bU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [1U][0x0000001bU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_o[1U][0x0000001cU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [1U][0x0000001cU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_o[1U][0x0000001dU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [1U][0x0000001dU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_o[1U][0x0000001eU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [1U][0x0000001eU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_o[1U][0x0000001fU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [1U][0x0000001fU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_o[1U][0x00000020U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [1U][0x00000020U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_o[1U][0x00000021U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [1U][0x00000021U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_o[1U][0x00000022U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [1U][0x00000022U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_o[1U][0x00000023U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [1U][0x00000023U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_o[1U][0x00000024U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [1U][0x00000024U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_o[1U][0x00000025U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [1U][0x00000025U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_o[1U][0x00000026U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [1U][0x00000026U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_o[1U][0x00000027U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [1U][0x00000027U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_o[1U][0x00000028U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [1U][0x00000028U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_o[1U][0x00000029U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [1U][0x00000029U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_o[1U][0x0000002aU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [1U][0x0000002aU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_o[1U][0x0000002bU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [1U][0x0000002bU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_o[1U][0x0000002cU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [1U][0x0000002cU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_o[1U][0x0000002dU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [1U][0x0000002dU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_o[1U][0x0000002eU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [1U][0x0000002eU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_o[1U][0x0000002fU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [1U][0x0000002fU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_o[1U][0x00000030U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [1U][0x00000030U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__state_o[1U][0x00000031U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [1U][0x00000031U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__keccak_state_i[0U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [0U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__keccak_state_i[0U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [0U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__keccak_state_i[0U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [0U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__keccak_state_i[0U][3U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [0U][3U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__keccak_state_i[0U][4U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [0U][4U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__keccak_state_i[0U][5U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [0U][5U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__keccak_state_i[0U][6U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [0U][6U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__keccak_state_i[0U][7U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [0U][7U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__keccak_state_i[0U][8U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [0U][8U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__keccak_state_i[0U][9U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [0U][9U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__keccak_state_i[0U][0x0000000aU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [0U][0x0000000aU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__keccak_state_i[0U][0x0000000bU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [0U][0x0000000bU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__keccak_state_i[0U][0x0000000cU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [0U][0x0000000cU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__keccak_state_i[0U][0x0000000dU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [0U][0x0000000dU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__keccak_state_i[0U][0x0000000eU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [0U][0x0000000eU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__keccak_state_i[0U][0x0000000fU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [0U][0x0000000fU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__keccak_state_i[0U][0x00000010U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [0U][0x00000010U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__keccak_state_i[0U][0x00000011U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [0U][0x00000011U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__keccak_state_i[0U][0x00000012U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [0U][0x00000012U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__keccak_state_i[0U][0x00000013U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [0U][0x00000013U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__keccak_state_i[0U][0x00000014U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [0U][0x00000014U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__keccak_state_i[0U][0x00000015U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [0U][0x00000015U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__keccak_state_i[0U][0x00000016U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [0U][0x00000016U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__keccak_state_i[0U][0x00000017U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [0U][0x00000017U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__keccak_state_i[0U][0x00000018U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [0U][0x00000018U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__keccak_state_i[0U][0x00000019U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [0U][0x00000019U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__keccak_state_i[0U][0x0000001aU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [0U][0x0000001aU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__keccak_state_i[0U][0x0000001bU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [0U][0x0000001bU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__keccak_state_i[0U][0x0000001cU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [0U][0x0000001cU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__keccak_state_i[0U][0x0000001dU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [0U][0x0000001dU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__keccak_state_i[0U][0x0000001eU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [0U][0x0000001eU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__keccak_state_i[0U][0x0000001fU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [0U][0x0000001fU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__keccak_state_i[0U][0x00000020U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [0U][0x00000020U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__keccak_state_i[0U][0x00000021U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [0U][0x00000021U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__keccak_state_i[0U][0x00000022U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [0U][0x00000022U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__keccak_state_i[0U][0x00000023U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [0U][0x00000023U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__keccak_state_i[0U][0x00000024U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [0U][0x00000024U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__keccak_state_i[0U][0x00000025U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [0U][0x00000025U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__keccak_state_i[0U][0x00000026U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [0U][0x00000026U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__keccak_state_i[0U][0x00000027U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [0U][0x00000027U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__keccak_state_i[0U][0x00000028U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [0U][0x00000028U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__keccak_state_i[0U][0x00000029U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [0U][0x00000029U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__keccak_state_i[0U][0x0000002aU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [0U][0x0000002aU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__keccak_state_i[0U][0x0000002bU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [0U][0x0000002bU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__keccak_state_i[0U][0x0000002cU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [0U][0x0000002cU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__keccak_state_i[0U][0x0000002dU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [0U][0x0000002dU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__keccak_state_i[0U][0x0000002eU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [0U][0x0000002eU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__keccak_state_i[0U][0x0000002fU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [0U][0x0000002fU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__keccak_state_i[0U][0x00000030U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [0U][0x00000030U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__keccak_state_i[0U][0x00000031U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [0U][0x00000031U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__keccak_state_i[1U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [1U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__keccak_state_i[1U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [1U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__keccak_state_i[1U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [1U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__keccak_state_i[1U][3U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [1U][3U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__keccak_state_i[1U][4U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [1U][4U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__keccak_state_i[1U][5U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [1U][5U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__keccak_state_i[1U][6U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [1U][6U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__keccak_state_i[1U][7U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [1U][7U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__keccak_state_i[1U][8U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [1U][8U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__keccak_state_i[1U][9U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [1U][9U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__keccak_state_i[1U][0x0000000aU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [1U][0x0000000aU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__keccak_state_i[1U][0x0000000bU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [1U][0x0000000bU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__keccak_state_i[1U][0x0000000cU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [1U][0x0000000cU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__keccak_state_i[1U][0x0000000dU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [1U][0x0000000dU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__keccak_state_i[1U][0x0000000eU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [1U][0x0000000eU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__keccak_state_i[1U][0x0000000fU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [1U][0x0000000fU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__keccak_state_i[1U][0x00000010U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [1U][0x00000010U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__keccak_state_i[1U][0x00000011U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [1U][0x00000011U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__keccak_state_i[1U][0x00000012U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [1U][0x00000012U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__keccak_state_i[1U][0x00000013U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [1U][0x00000013U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__keccak_state_i[1U][0x00000014U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [1U][0x00000014U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__keccak_state_i[1U][0x00000015U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [1U][0x00000015U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__keccak_state_i[1U][0x00000016U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [1U][0x00000016U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__keccak_state_i[1U][0x00000017U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [1U][0x00000017U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__keccak_state_i[1U][0x00000018U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [1U][0x00000018U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__keccak_state_i[1U][0x00000019U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [1U][0x00000019U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__keccak_state_i[1U][0x0000001aU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [1U][0x0000001aU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__keccak_state_i[1U][0x0000001bU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [1U][0x0000001bU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__keccak_state_i[1U][0x0000001cU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [1U][0x0000001cU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__keccak_state_i[1U][0x0000001dU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [1U][0x0000001dU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__keccak_state_i[1U][0x0000001eU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [1U][0x0000001eU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__keccak_state_i[1U][0x0000001fU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [1U][0x0000001fU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__keccak_state_i[1U][0x00000020U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [1U][0x00000020U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__keccak_state_i[1U][0x00000021U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [1U][0x00000021U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__keccak_state_i[1U][0x00000022U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [1U][0x00000022U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__keccak_state_i[1U][0x00000023U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [1U][0x00000023U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__keccak_state_i[1U][0x00000024U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [1U][0x00000024U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__keccak_state_i[1U][0x00000025U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [1U][0x00000025U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__keccak_state_i[1U][0x00000026U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [1U][0x00000026U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__keccak_state_i[1U][0x00000027U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [1U][0x00000027U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__keccak_state_i[1U][0x00000028U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [1U][0x00000028U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__keccak_state_i[1U][0x00000029U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [1U][0x00000029U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__keccak_state_i[1U][0x0000002aU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [1U][0x0000002aU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__keccak_state_i[1U][0x0000002bU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [1U][0x0000002bU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__keccak_state_i[1U][0x0000002cU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [1U][0x0000002cU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__keccak_state_i[1U][0x0000002dU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [1U][0x0000002dU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__keccak_state_i[1U][0x0000002eU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [1U][0x0000002eU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__keccak_state_i[1U][0x0000002fU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [1U][0x0000002fU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__keccak_state_i[1U][0x00000030U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [1U][0x00000030U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__keccak_state_i[1U][0x00000031U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
        [1U][0x00000031U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest_done = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest[0U][0U] 
        = Vsim__ConstPool__CONST_h997e551f_0[0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest[0U][1U] 
        = Vsim__ConstPool__CONST_h997e551f_0[1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest[0U][2U] 
        = Vsim__ConstPool__CONST_h997e551f_0[2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest[0U][3U] 
        = Vsim__ConstPool__CONST_h997e551f_0[3U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest[0U][4U] 
        = Vsim__ConstPool__CONST_h997e551f_0[4U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest[0U][5U] 
        = Vsim__ConstPool__CONST_h997e551f_0[5U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest[0U][6U] 
        = Vsim__ConstPool__CONST_h997e551f_0[6U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest[0U][7U] 
        = Vsim__ConstPool__CONST_h997e551f_0[7U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest[0U][8U] 
        = Vsim__ConstPool__CONST_h997e551f_0[8U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest[0U][9U] 
        = Vsim__ConstPool__CONST_h997e551f_0[9U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest[0U][0x0000000aU] 
        = Vsim__ConstPool__CONST_h997e551f_0[0x0000000aU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest[0U][0x0000000bU] 
        = Vsim__ConstPool__CONST_h997e551f_0[0x0000000bU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest[1U][0U] 
        = Vsim__ConstPool__CONST_h997e551f_0[0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest[1U][1U] 
        = Vsim__ConstPool__CONST_h997e551f_0[1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest[1U][2U] 
        = Vsim__ConstPool__CONST_h997e551f_0[2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest[1U][3U] 
        = Vsim__ConstPool__CONST_h997e551f_0[3U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest[1U][4U] 
        = Vsim__ConstPool__CONST_h997e551f_0[4U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest[1U][5U] 
        = Vsim__ConstPool__CONST_h997e551f_0[5U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest[1U][6U] 
        = Vsim__ConstPool__CONST_h997e551f_0[6U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest[1U][7U] 
        = Vsim__ConstPool__CONST_h997e551f_0[7U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest[1U][8U] 
        = Vsim__ConstPool__CONST_h997e551f_0[8U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest[1U][9U] 
        = Vsim__ConstPool__CONST_h997e551f_0[9U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest[1U][0x0000000aU] 
        = Vsim__ConstPool__CONST_h997e551f_0[0x0000000aU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest[1U][0x0000000bU] 
        = Vsim__ConstPool__CONST_h997e551f_0[0x0000000bU];
    if ((((0x0250U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__u_state_regs__DOT__state_raw)) 
          & ([&]() {
                        vlSelfRef.__Vfunc_mubi4_test_true_strict__1564__val 
                            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__sha3_absorbed;
                        vlSelfRef.__Vfunc_mubi4_test_true_strict__1564__Vfuncout 
                            = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__1564__val));
                    }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__1564__Vfuncout))) 
         & ([&]() {
                    vlSelfRef.__Vfunc_lc_tx_test_false_strict__1565__val 
                        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__lc_escalate_en__BRA__15__03a12__KET__;
                    vlSelfRef.__Vfunc_lc_tx_test_false_strict__1565__Vfuncout 
                        = (0x0aU == (IData)(vlSelfRef.__Vfunc_lc_tx_test_false_strict__1565__val));
                }(), (IData)(vlSelfRef.__Vfunc_lc_tx_test_false_strict__1565__Vfuncout)))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest_done = 1U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest[0U][0U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
            [0U][0U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest[0U][1U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
            [0U][1U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest[0U][2U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
            [0U][2U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest[0U][3U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
            [0U][3U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest[0U][4U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
            [0U][4U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest[0U][5U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
            [0U][5U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest[0U][6U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
            [0U][6U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest[0U][7U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
            [0U][7U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest[0U][8U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
            [0U][8U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest[0U][9U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
            [0U][9U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest[0U][0x0000000aU] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
            [0U][0x0000000aU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest[0U][0x0000000bU] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
            [0U][0x0000000bU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__unnamedblk6__DOT__i = 2U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest[1U][0U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
            [1U][0U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest[1U][1U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
            [1U][1U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest[1U][2U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
            [1U][2U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest[1U][3U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
            [1U][3U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest[1U][4U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
            [1U][4U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest[1U][5U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
            [1U][5U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest[1U][6U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
            [1U][6U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest[1U][7U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
            [1U][7U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest[1U][8U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
            [1U][8U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest[1U][9U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
            [1U][9U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest[1U][0x0000000aU] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
            [1U][0x0000000aU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest[1U][0x0000000bU] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__state
            [1U][0x0000000bU];
    }
}

extern const VlWide<8>/*255:0*/ Vsim__ConstPool__CONST_h6783a830_0;
extern const VlWide<20>/*639:0*/ Vsim__ConstPool__CONST_h7ca4bd95_0;
extern const VlWide<36>/*1151:0*/ Vsim__ConstPool__CONST_hb029ca01_0;
extern const VlWide<24>/*767:0*/ Vsim__ConstPool__CONST_h96a84c0e_0;

void Vsim___024root___act_sequent__TOP__70(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___act_sequent__TOP__70\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_h2d605572__0;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_h2d605572__0 = 0;
    VlWide<23>/*707:0*/ __Vfunc_named_broadcast_assign__74__Vfuncout;
    VL_ZERO_W(708, __Vfunc_named_broadcast_assign__74__Vfuncout);
    SData/*10:0*/ __Vfunc_named_broadcast_assign__74__part_init_done;
    __Vfunc_named_broadcast_assign__74__part_init_done = 0;
    CData/*0:0*/ __Vfunc_named_broadcast_assign__74__valid;
    __Vfunc_named_broadcast_assign__74__valid = 0;
    CData/*0:0*/ __Vfunc_named_broadcast_assign__74__unused;
    __Vfunc_named_broadcast_assign__74__unused = 0;
    CData/*3:0*/ __Vfunc_lc_tx_bool_to_lc_tx__75__Vfuncout;
    __Vfunc_lc_tx_bool_to_lc_tx__75__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_lc_tx_bool_to_lc_tx__75__val;
    __Vfunc_lc_tx_bool_to_lc_tx__75__val = 0;
    CData/*0:0*/ __Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_checks__DOT__valid_chk__2053__Vfuncout;
    __Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_checks__DOT__valid_chk__2053__Vfuncout = 0;
    VlWide<8>/*255:0*/ __Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_checks__DOT__valid_chk__2053__value;
    VL_ZERO_W(256, __Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_checks__DOT__valid_chk__2053__value);
    VlWide<144>/*4607:0*/ __Vtemp_27;
    VlWide<62>/*1983:0*/ __Vtemp_31;
    VlWide<32>/*1023:0*/ __Vtemp_33;
    VlWide<62>/*1983:0*/ __Vtemp_35;
    VlWide<62>/*1983:0*/ __Vtemp_42;
    IData/*31:0*/ __VExpandSel_WordIdx_2;
    IData/*31:0*/ __VExpandSel_LoShift_2;
    CData/*0:0*/ __VExpandSel_Aligned_2;
    IData/*31:0*/ __VExpandSel_HiShift_2;
    IData/*31:0*/ __VExpandSel_HiMask_2;
    IData/*31:0*/ __VExpandSel_WordIdx_3;
    IData/*31:0*/ __VExpandSel_LoShift_3;
    CData/*0:0*/ __VExpandSel_Aligned_3;
    IData/*31:0*/ __VExpandSel_HiShift_3;
    IData/*31:0*/ __VExpandSel_HiMask_3;
    IData/*31:0*/ __Vdeeptemp_h44c8720b__0;
    CData/*31:0*/ __Vdeeptemp_h4bcc73ac__0;
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__part_init_done_i 
        = ((((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__10__KET____DOT__gen_lifecycle__DOT__u_part_buf__init_done_o) 
               << 5U) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__9__KET____DOT__gen_buffered__DOT__u_part_buf__init_done_o) 
                          << 4U) | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__8__KET____DOT__gen_buffered__DOT__u_part_buf__init_done_o) 
                                    << 3U))) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__7__KET____DOT__gen_buffered__DOT__u_part_buf__init_done_o) 
                                                 << 2U) 
                                                | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__6__KET____DOT__gen_buffered__DOT__u_part_buf__init_done_o) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__5__KET____DOT__gen_buffered__DOT__u_part_buf__init_done_o)))) 
            << 5U) | ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__4__KET____DOT__gen_unbuffered__DOT__u_part_unbuf__init_done_o) 
                        << 4U) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__3__KET____DOT__gen_unbuffered__DOT__u_part_unbuf__init_done_o) 
                                   << 3U) | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__2__KET____DOT__gen_unbuffered__DOT__u_part_unbuf__init_done_o) 
                                             << 2U))) 
                      | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__1__KET____DOT__gen_unbuffered__DOT__u_part_unbuf__init_done_o) 
                          << 1U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vcellout__gen_partitions__BRA__0__KET____DOT__gen_unbuffered__DOT__u_part_unbuf__init_done_o))));
    VL_ASSIGN_W(16384, vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data, vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_buf_data);
    __Vfunc_named_broadcast_assign__74__part_init_done 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_dai__DOT__part_init_done_i;
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    VL_SCOPED_RAND_RESET_W(708, vlSelf->__Vfunc_named_broadcast_assign__74__otp_broadcast, __VscopeHash, 4048173846013904344ull);
    __Vfunc_named_broadcast_assign__74__unused = (1U 
                                                  & ((IData)(__Vfunc_named_broadcast_assign__74__part_init_done) 
                                                     ^ 
                                                     VL_REDXOR_32(
                                                                  (((((((((((((((vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0U] 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[1U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[2U]) 
                                                                               ^ 
                                                                               vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[3U]) 
                                                                              ^ 
                                                                              vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[4U]) 
                                                                             ^ 
                                                                             vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[5U]) 
                                                                            ^ 
                                                                            vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[6U]) 
                                                                           ^ 
                                                                           vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[7U]) 
                                                                          ^ 
                                                                          vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[8U]) 
                                                                         ^ 
                                                                         vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[9U]) 
                                                                        ^ 
                                                                        vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x0000000aU]) 
                                                                       ^ 
                                                                       vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x0000000bU]) 
                                                                      ^ 
                                                                      vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x0000000cU]) 
                                                                     ^ 
                                                                     vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x0000000dU]) 
                                                                    ^ 
                                                                    vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x0000000eU]) 
                                                                   ^ 
                                                                   vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x0000000fU]))));
    __Vfunc_named_broadcast_assign__74__unused = (1U 
                                                  & ((IData)(__Vfunc_named_broadcast_assign__74__unused) 
                                                     ^ 
                                                     (((IData)(__Vfunc_named_broadcast_assign__74__part_init_done) 
                                                       >> 1U) 
                                                      ^ 
                                                      VL_REDXOR_32(
                                                                   (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000010U] 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000011U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000012U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000013U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000014U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000015U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000016U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000017U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000018U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000019U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x0000001aU]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x0000001bU]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x0000001cU]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x0000001dU]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x0000001eU]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x0000001fU]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000020U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000021U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000022U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000023U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000024U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000025U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000026U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000027U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000028U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000029U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x0000002aU]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x0000002bU]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x0000002cU]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x0000002dU]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x0000002eU]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x0000002fU]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000030U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000031U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000032U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000033U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000034U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000035U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000036U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000037U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000038U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000039U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x0000003aU]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x0000003bU]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x0000003cU]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x0000003dU]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x0000003eU]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x0000003fU]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000040U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000041U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000042U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000043U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000044U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000045U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000046U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000047U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000048U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000049U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x0000004aU]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x0000004bU]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x0000004cU]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x0000004dU]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x0000004eU]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x0000004fU]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000050U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000051U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000052U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000053U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000054U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000055U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000056U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000057U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000058U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000059U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x0000005aU]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x0000005bU]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x0000005cU]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x0000005dU]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x0000005eU]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x0000005fU]) 
                                                                               ^ 
                                                                               vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000060U]) 
                                                                              ^ 
                                                                              vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000061U]) 
                                                                             ^ 
                                                                             vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000062U]) 
                                                                            ^ 
                                                                            vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000063U]) 
                                                                           ^ 
                                                                           vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000064U]) 
                                                                          ^ 
                                                                          vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000065U]) 
                                                                         ^ 
                                                                         vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000066U]) 
                                                                        ^ 
                                                                        vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000067U]) 
                                                                       ^ 
                                                                       vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000068U]) 
                                                                      ^ 
                                                                      vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000069U]) 
                                                                     ^ 
                                                                     vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x0000006aU]) 
                                                                    ^ 
                                                                    vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x0000006bU])))));
    __Vdeeptemp_h44c8720b__0 = ((((((((((((((((((((
                                                   (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x0000006cU] 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x0000006dU]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x0000006eU]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x0000006fU]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000070U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000071U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000072U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000073U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000074U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000075U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000076U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000077U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000078U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000079U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x0000007aU]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x0000007bU]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x0000007cU]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x0000007dU]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x0000007eU]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x0000007fU]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000080U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000081U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000082U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000083U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000084U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000085U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000086U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000087U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000088U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000089U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x0000008aU]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x0000008bU]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x0000008cU]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x0000008dU]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x0000008eU]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x0000008fU]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000090U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000091U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000092U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000093U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000094U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000095U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000096U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000097U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000098U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000099U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x0000009aU]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x0000009bU]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x0000009cU]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x0000009dU]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x0000009eU]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x0000009fU]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000000a0U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000000a1U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000000a2U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000000a3U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000000a4U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000000a5U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000000a6U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000000a7U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000000a8U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000000a9U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000000aaU]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000000abU]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000000acU]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000000adU]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000000aeU]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000000afU]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000000b0U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000000b1U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000000b2U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000000b3U]) 
                                                                               ^ 
                                                                               vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000000b4U]) 
                                                                              ^ 
                                                                              vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000000b5U]) 
                                                                             ^ 
                                                                             vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000000b6U]) 
                                                                            ^ 
                                                                            vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000000b7U]) 
                                                                           ^ 
                                                                           vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000000b8U]) 
                                                                          ^ 
                                                                          vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000000b9U]) 
                                                                         ^ 
                                                                         vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000000baU]) 
                                                                        ^ 
                                                                        vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000000bbU]) 
                                                                       ^ 
                                                                       vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000000bcU]) 
                                                                      ^ 
                                                                      vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000000bdU]) 
                                                                     ^ 
                                                                     vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000000beU]) 
                                                                    ^ 
                                                                    vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000000bfU]) 
                                                                   ^ 
                                                                   vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000000c0U]) 
                                                                  ^ 
                                                                  vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000000c1U]) 
                                                                 ^ 
                                                                 vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000000c2U]) 
                                                                ^ 
                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000000c3U]) 
                                                               ^ 
                                                               vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000000c4U]) 
                                                              ^ 
                                                              vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000000c5U]) 
                                                             ^ 
                                                             vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000000c6U]) 
                                                            ^ 
                                                            vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000000c7U]) 
                                                           ^ 
                                                           vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000000c8U]) 
                                                          ^ 
                                                          vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000000c9U]) 
                                                         ^ 
                                                         vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000000caU]) 
                                                        ^ 
                                                        vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000000cbU]) 
                                                       ^ 
                                                       vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000000ccU]) 
                                                      ^ 
                                                      vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000000cdU]) 
                                                     ^ 
                                                     vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000000ceU]) 
                                                    ^ 
                                                    vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000000cfU]) 
                                                   ^ 
                                                   vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000000d0U]) 
                                                  ^ 
                                                  vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000000d1U]) 
                                                 ^ 
                                                 vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000000d2U]) 
                                                ^ vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000000d3U]) 
                                               ^ vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000000d4U]) 
                                              ^ vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000000d5U]) 
                                             ^ vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000000d6U]) 
                                            ^ vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000000d7U]) 
                                           ^ vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000000d8U]) 
                                          ^ vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000000d9U]) 
                                         ^ vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000000daU]) 
                                        ^ vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000000dbU]) 
                                       ^ vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000000dcU]) 
                                      ^ vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000000ddU]) 
                                     ^ vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000000deU]) 
                                    ^ vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000000dfU]) 
                                   ^ vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000000e0U]) 
                                  ^ vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000000e1U]) 
                                 ^ vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000000e2U]) 
                                ^ vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000000e3U]);
    __Vfunc_named_broadcast_assign__74__unused = (1U 
                                                  & ((IData)(__Vfunc_named_broadcast_assign__74__unused) 
                                                     ^ 
                                                     (((IData)(__Vfunc_named_broadcast_assign__74__part_init_done) 
                                                       >> 2U) 
                                                      ^ 
                                                      VL_REDXOR_32(
                                                                   ((((((((((((((((((((((((((((((((((((((((((((((((((((((((((__Vdeeptemp_h44c8720b__0 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000000e4U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000000e5U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000000e6U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000000e7U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000000e8U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000000e9U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000000eaU]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000000ebU]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000000ecU]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000000edU]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000000eeU]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000000efU]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000000f0U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000000f1U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000000f2U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000000f3U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000000f4U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000000f5U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000000f6U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000000f7U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000000f8U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000000f9U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000000faU]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000000fbU]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000000fcU]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000000fdU]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000000feU]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000000ffU]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000100U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000101U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000102U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000103U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000104U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000105U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000106U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000107U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000108U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000109U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x0000010aU]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x0000010bU]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x0000010cU]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x0000010dU]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x0000010eU]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x0000010fU]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000110U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000111U]) 
                                                                               ^ 
                                                                               vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000112U]) 
                                                                              ^ 
                                                                              vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000113U]) 
                                                                             ^ 
                                                                             vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000114U]) 
                                                                            ^ 
                                                                            vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000115U]) 
                                                                           ^ 
                                                                           vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000116U]) 
                                                                          ^ 
                                                                          vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000117U]) 
                                                                         ^ 
                                                                         vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000118U]) 
                                                                        ^ 
                                                                        vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000119U]) 
                                                                       ^ 
                                                                       vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x0000011aU]) 
                                                                      ^ 
                                                                      vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x0000011bU]) 
                                                                     ^ 
                                                                     vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x0000011cU]) 
                                                                    ^ 
                                                                    vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x0000011dU])))));
    __Vdeeptemp_h4bcc73ac__0 = (((IData)(__Vfunc_named_broadcast_assign__74__part_init_done) 
                                 >> 3U) ^ VL_REDXOR_32(
                                                       (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x0000011eU] 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x0000011fU]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000120U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000121U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000122U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000123U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000124U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000125U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000126U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000127U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000128U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000129U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x0000012aU]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x0000012bU]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x0000012cU]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x0000012dU]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x0000012eU]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x0000012fU]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000130U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000131U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000132U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000133U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000134U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000135U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000136U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000137U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000138U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000139U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x0000013aU]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x0000013bU]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x0000013cU]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x0000013dU]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x0000013eU]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x0000013fU]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000140U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000141U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000142U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000143U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000144U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000145U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000146U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000147U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000148U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000149U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x0000014aU]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x0000014bU]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x0000014cU]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x0000014dU]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x0000014eU]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x0000014fU]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000150U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000151U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000152U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000153U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000154U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000155U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000156U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000157U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000158U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000159U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x0000015aU]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x0000015bU]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x0000015cU]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x0000015dU]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x0000015eU]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x0000015fU]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000160U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000161U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000162U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000163U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000164U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000165U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000166U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000167U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000168U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000169U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x0000016aU]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x0000016bU]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x0000016cU]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x0000016dU]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x0000016eU]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x0000016fU]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000170U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000171U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000172U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000173U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000174U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000175U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000176U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000177U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000178U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000179U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x0000017aU]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x0000017bU]) 
                                                                               ^ 
                                                                               vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x0000017cU]) 
                                                                              ^ 
                                                                              vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x0000017dU]) 
                                                                             ^ 
                                                                             vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x0000017eU]) 
                                                                            ^ 
                                                                            vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x0000017fU]) 
                                                                           ^ 
                                                                           vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000180U]) 
                                                                          ^ 
                                                                          vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000181U]) 
                                                                         ^ 
                                                                         vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000182U]) 
                                                                        ^ 
                                                                        vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000183U]) 
                                                                       ^ 
                                                                       vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000184U]) 
                                                                      ^ 
                                                                      vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000185U]) 
                                                                     ^ 
                                                                     vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000186U]) 
                                                                    ^ 
                                                                    vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000187U]) 
                                                                   ^ 
                                                                   vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000188U]) 
                                                                  ^ 
                                                                  vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000189U]) 
                                                                 ^ 
                                                                 vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x0000018aU]) 
                                                                ^ 
                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x0000018bU]) 
                                                               ^ 
                                                               vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x0000018cU]) 
                                                              ^ 
                                                              vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x0000018dU]) 
                                                             ^ 
                                                             vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x0000018eU]) 
                                                            ^ 
                                                            vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x0000018fU]) 
                                                           ^ 
                                                           vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000190U]) 
                                                          ^ 
                                                          vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000191U]) 
                                                         ^ 
                                                         vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000192U]) 
                                                        ^ 
                                                        vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000193U])));
    __Vfunc_named_broadcast_assign__74__unused = (1U 
                                                  & ((IData)(__Vfunc_named_broadcast_assign__74__unused) 
                                                     ^ __Vdeeptemp_h4bcc73ac__0));
    __Vfunc_named_broadcast_assign__74__unused = (1U 
                                                  & ((IData)(__Vfunc_named_broadcast_assign__74__unused) 
                                                     ^ 
                                                     (((IData)(__Vfunc_named_broadcast_assign__74__part_init_done) 
                                                       >> 4U) 
                                                      ^ 
                                                      VL_REDXOR_32(
                                                                   (((((((((vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000194U] 
                                                                            ^ 
                                                                            vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000195U]) 
                                                                           ^ 
                                                                           vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000196U]) 
                                                                          ^ 
                                                                          vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000197U]) 
                                                                         ^ 
                                                                         vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000198U]) 
                                                                        ^ 
                                                                        vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x00000199U]) 
                                                                       ^ 
                                                                       vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x0000019aU]) 
                                                                      ^ 
                                                                      vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x0000019bU]) 
                                                                     ^ 
                                                                     vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x0000019cU]) 
                                                                    ^ 
                                                                    vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x0000019dU])))));
    __Vfunc_named_broadcast_assign__74__valid = (1U 
                                                 & ((IData)(__Vfunc_named_broadcast_assign__74__part_init_done) 
                                                    >> 5U));
    vlSelfRef.__Vfunc_named_broadcast_assign__74__otp_broadcast[0U] 
        = vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x0000019eU];
    vlSelfRef.__Vfunc_named_broadcast_assign__74__otp_broadcast[1U] 
        = vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x0000019fU];
    vlSelfRef.__Vfunc_named_broadcast_assign__74__otp_broadcast[2U] 
        = vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000001a0U];
    vlSelfRef.__Vfunc_named_broadcast_assign__74__otp_broadcast[3U] 
        = vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000001a1U];
    vlSelfRef.__Vfunc_named_broadcast_assign__74__otp_broadcast[4U] 
        = vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000001a2U];
    vlSelfRef.__Vfunc_named_broadcast_assign__74__otp_broadcast[5U] 
        = vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000001a3U];
    vlSelfRef.__Vfunc_named_broadcast_assign__74__otp_broadcast[6U] 
        = vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000001a4U];
    vlSelfRef.__Vfunc_named_broadcast_assign__74__otp_broadcast[7U] 
        = vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000001a5U];
    vlSelfRef.__Vfunc_named_broadcast_assign__74__otp_broadcast[8U] 
        = vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000001a6U];
    vlSelfRef.__Vfunc_named_broadcast_assign__74__otp_broadcast[9U] 
        = vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000001a7U];
    vlSelfRef.__Vfunc_named_broadcast_assign__74__otp_broadcast[0x0000000aU] 
        = vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000001a8U];
    vlSelfRef.__Vfunc_named_broadcast_assign__74__otp_broadcast[0x0000000bU] 
        = vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000001a9U];
    vlSelfRef.__Vfunc_named_broadcast_assign__74__otp_broadcast[0x0000000cU] 
        = vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000001aaU];
    vlSelfRef.__Vfunc_named_broadcast_assign__74__otp_broadcast[0x0000000dU] 
        = vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000001abU];
    vlSelfRef.__Vfunc_named_broadcast_assign__74__otp_broadcast[0x0000000eU] 
        = vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000001acU];
    vlSelfRef.__Vfunc_named_broadcast_assign__74__otp_broadcast[0x0000000fU] 
        = vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000001adU];
    vlSelfRef.__Vfunc_named_broadcast_assign__74__otp_broadcast[0x00000010U] 
        = vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000001aeU];
    vlSelfRef.__Vfunc_named_broadcast_assign__74__otp_broadcast[0x00000011U] 
        = vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000001afU];
    __Vfunc_named_broadcast_assign__74__valid = ((IData)(__Vfunc_named_broadcast_assign__74__valid) 
                                                 & ((IData)(__Vfunc_named_broadcast_assign__74__part_init_done) 
                                                    >> 6U));
    vlSelfRef.__Vfunc_named_broadcast_assign__74__otp_broadcast[0x00000012U] 
        = vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000001b0U];
    vlSelfRef.__Vfunc_named_broadcast_assign__74__otp_broadcast[0x00000013U] 
        = vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000001b1U];
    vlSelfRef.__Vfunc_named_broadcast_assign__74__otp_broadcast[0x00000014U] 
        = vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000001b2U];
    vlSelfRef.__Vfunc_named_broadcast_assign__74__otp_broadcast[0x00000015U] 
        = vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000001b3U];
    __Vfunc_named_broadcast_assign__74__unused = (1U 
                                                  & ((IData)(__Vfunc_named_broadcast_assign__74__unused) 
                                                     ^ 
                                                     (((IData)(__Vfunc_named_broadcast_assign__74__part_init_done) 
                                                       >> 7U) 
                                                      ^ 
                                                      VL_REDXOR_32(
                                                                   (((((((((vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000001b4U] 
                                                                            ^ 
                                                                            vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000001b5U]) 
                                                                           ^ 
                                                                           vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000001b6U]) 
                                                                          ^ 
                                                                          vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000001b7U]) 
                                                                         ^ 
                                                                         vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000001b8U]) 
                                                                        ^ 
                                                                        vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000001b9U]) 
                                                                       ^ 
                                                                       vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000001baU]) 
                                                                      ^ 
                                                                      vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000001bbU]) 
                                                                     ^ 
                                                                     vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000001bcU]) 
                                                                    ^ 
                                                                    vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000001bdU])))));
    __Vfunc_named_broadcast_assign__74__unused = (1U 
                                                  & ((IData)(__Vfunc_named_broadcast_assign__74__unused) 
                                                     ^ 
                                                     (((IData)(__Vfunc_named_broadcast_assign__74__part_init_done) 
                                                       >> 8U) 
                                                      ^ 
                                                      VL_REDXOR_32(
                                                                   (((((((((((((((((((((vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000001beU] 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000001bfU]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000001c0U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000001c1U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000001c2U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000001c3U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000001c4U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000001c5U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000001c6U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000001c7U]) 
                                                                               ^ 
                                                                               vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000001c8U]) 
                                                                              ^ 
                                                                              vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000001c9U]) 
                                                                             ^ 
                                                                             vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000001caU]) 
                                                                            ^ 
                                                                            vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000001cbU]) 
                                                                           ^ 
                                                                           vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000001ccU]) 
                                                                          ^ 
                                                                          vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000001cdU]) 
                                                                         ^ 
                                                                         vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000001ceU]) 
                                                                        ^ 
                                                                        vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000001cfU]) 
                                                                       ^ 
                                                                       vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000001d0U]) 
                                                                      ^ 
                                                                      vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000001d1U]) 
                                                                     ^ 
                                                                     vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000001d2U]) 
                                                                    ^ 
                                                                    vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000001d3U])))));
    __Vfunc_named_broadcast_assign__74__unused = (1U 
                                                  & ((IData)(__Vfunc_named_broadcast_assign__74__unused) 
                                                     ^ 
                                                     (((IData)(__Vfunc_named_broadcast_assign__74__part_init_done) 
                                                       >> 9U) 
                                                      ^ 
                                                      VL_REDXOR_32(
                                                                   (((((((((((((((((((((vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000001d4U] 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000001d5U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000001d6U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000001d7U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000001d8U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000001d9U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000001daU]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000001dbU]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000001dcU]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000001ddU]) 
                                                                               ^ 
                                                                               vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000001deU]) 
                                                                              ^ 
                                                                              vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000001dfU]) 
                                                                             ^ 
                                                                             vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000001e0U]) 
                                                                            ^ 
                                                                            vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000001e1U]) 
                                                                           ^ 
                                                                           vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000001e2U]) 
                                                                          ^ 
                                                                          vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000001e3U]) 
                                                                         ^ 
                                                                         vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000001e4U]) 
                                                                        ^ 
                                                                        vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000001e5U]) 
                                                                       ^ 
                                                                       vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000001e6U]) 
                                                                      ^ 
                                                                      vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000001e7U]) 
                                                                     ^ 
                                                                     vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000001e8U]) 
                                                                    ^ 
                                                                    vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000001e9U])))));
    __Vfunc_named_broadcast_assign__74__unused = (1U 
                                                  & ((IData)(__Vfunc_named_broadcast_assign__74__unused) 
                                                     ^ 
                                                     (((IData)(__Vfunc_named_broadcast_assign__74__part_init_done) 
                                                       >> 0x0aU) 
                                                      ^ 
                                                      VL_REDXOR_32(
                                                                   (((((((((((((((((((((vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000001eaU] 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000001ebU]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000001ecU]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000001edU]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000001eeU]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000001efU]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000001f0U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000001f1U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000001f2U]) 
                                                                                ^ 
                                                                                vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000001f3U]) 
                                                                               ^ 
                                                                               vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000001f4U]) 
                                                                              ^ 
                                                                              vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000001f5U]) 
                                                                             ^ 
                                                                             vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000001f6U]) 
                                                                            ^ 
                                                                            vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000001f7U]) 
                                                                           ^ 
                                                                           vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000001f8U]) 
                                                                          ^ 
                                                                          vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000001f9U]) 
                                                                         ^ 
                                                                         vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000001faU]) 
                                                                        ^ 
                                                                        vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000001fbU]) 
                                                                       ^ 
                                                                       vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000001fcU]) 
                                                                      ^ 
                                                                      vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000001fdU]) 
                                                                     ^ 
                                                                     vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000001feU]) 
                                                                    ^ 
                                                                    vlSelfRef.__Vfunc_named_broadcast_assign__74__part_buf_data[0x000001ffU])))));
    __Vfunc_lc_tx_bool_to_lc_tx__75__val = __Vfunc_named_broadcast_assign__74__valid;
    __Vfunc_lc_tx_bool_to_lc_tx__75__Vfuncout = ((IData)(__Vfunc_lc_tx_bool_to_lc_tx__75__val)
                                                  ? 5U
                                                  : 0x0aU);
    vlSelfRef.__Vfunc_named_broadcast_assign__74__otp_broadcast[0x00000016U] 
        = (0x0000000fU & (IData)(__Vfunc_lc_tx_bool_to_lc_tx__75__Vfuncout));
    __Vfunc_named_broadcast_assign__74__Vfuncout[0U] 
        = vlSelfRef.__Vfunc_named_broadcast_assign__74__otp_broadcast[0U];
    __Vfunc_named_broadcast_assign__74__Vfuncout[1U] 
        = vlSelfRef.__Vfunc_named_broadcast_assign__74__otp_broadcast[1U];
    __Vfunc_named_broadcast_assign__74__Vfuncout[2U] 
        = vlSelfRef.__Vfunc_named_broadcast_assign__74__otp_broadcast[2U];
    __Vfunc_named_broadcast_assign__74__Vfuncout[3U] 
        = vlSelfRef.__Vfunc_named_broadcast_assign__74__otp_broadcast[3U];
    __Vfunc_named_broadcast_assign__74__Vfuncout[4U] 
        = vlSelfRef.__Vfunc_named_broadcast_assign__74__otp_broadcast[4U];
    __Vfunc_named_broadcast_assign__74__Vfuncout[5U] 
        = vlSelfRef.__Vfunc_named_broadcast_assign__74__otp_broadcast[5U];
    __Vfunc_named_broadcast_assign__74__Vfuncout[6U] 
        = vlSelfRef.__Vfunc_named_broadcast_assign__74__otp_broadcast[6U];
    __Vfunc_named_broadcast_assign__74__Vfuncout[7U] 
        = vlSelfRef.__Vfunc_named_broadcast_assign__74__otp_broadcast[7U];
    __Vfunc_named_broadcast_assign__74__Vfuncout[8U] 
        = vlSelfRef.__Vfunc_named_broadcast_assign__74__otp_broadcast[8U];
    __Vfunc_named_broadcast_assign__74__Vfuncout[9U] 
        = vlSelfRef.__Vfunc_named_broadcast_assign__74__otp_broadcast[9U];
    __Vfunc_named_broadcast_assign__74__Vfuncout[0x0000000aU] 
        = vlSelfRef.__Vfunc_named_broadcast_assign__74__otp_broadcast[0x0000000aU];
    __Vfunc_named_broadcast_assign__74__Vfuncout[0x0000000bU] 
        = vlSelfRef.__Vfunc_named_broadcast_assign__74__otp_broadcast[0x0000000bU];
    __Vfunc_named_broadcast_assign__74__Vfuncout[0x0000000cU] 
        = vlSelfRef.__Vfunc_named_broadcast_assign__74__otp_broadcast[0x0000000cU];
    __Vfunc_named_broadcast_assign__74__Vfuncout[0x0000000dU] 
        = vlSelfRef.__Vfunc_named_broadcast_assign__74__otp_broadcast[0x0000000dU];
    __Vfunc_named_broadcast_assign__74__Vfuncout[0x0000000eU] 
        = vlSelfRef.__Vfunc_named_broadcast_assign__74__otp_broadcast[0x0000000eU];
    __Vfunc_named_broadcast_assign__74__Vfuncout[0x0000000fU] 
        = vlSelfRef.__Vfunc_named_broadcast_assign__74__otp_broadcast[0x0000000fU];
    __Vfunc_named_broadcast_assign__74__Vfuncout[0x00000010U] 
        = vlSelfRef.__Vfunc_named_broadcast_assign__74__otp_broadcast[0x00000010U];
    __Vfunc_named_broadcast_assign__74__Vfuncout[0x00000011U] 
        = vlSelfRef.__Vfunc_named_broadcast_assign__74__otp_broadcast[0x00000011U];
    __Vfunc_named_broadcast_assign__74__Vfuncout[0x00000012U] 
        = vlSelfRef.__Vfunc_named_broadcast_assign__74__otp_broadcast[0x00000012U];
    __Vfunc_named_broadcast_assign__74__Vfuncout[0x00000013U] 
        = vlSelfRef.__Vfunc_named_broadcast_assign__74__otp_broadcast[0x00000013U];
    __Vfunc_named_broadcast_assign__74__Vfuncout[0x00000014U] 
        = vlSelfRef.__Vfunc_named_broadcast_assign__74__otp_broadcast[0x00000014U];
    __Vfunc_named_broadcast_assign__74__Vfuncout[0x00000015U] 
        = vlSelfRef.__Vfunc_named_broadcast_assign__74__otp_broadcast[0x00000015U];
    __Vfunc_named_broadcast_assign__74__Vfuncout[0x00000016U] 
        = vlSelfRef.__Vfunc_named_broadcast_assign__74__otp_broadcast[0x00000016U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__otp_broadcast[0U] 
        = __Vfunc_named_broadcast_assign__74__Vfuncout[0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__otp_broadcast[1U] 
        = __Vfunc_named_broadcast_assign__74__Vfuncout[1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__otp_broadcast[2U] 
        = __Vfunc_named_broadcast_assign__74__Vfuncout[2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__otp_broadcast[3U] 
        = __Vfunc_named_broadcast_assign__74__Vfuncout[3U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__otp_broadcast[4U] 
        = __Vfunc_named_broadcast_assign__74__Vfuncout[4U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__otp_broadcast[5U] 
        = __Vfunc_named_broadcast_assign__74__Vfuncout[5U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__otp_broadcast[6U] 
        = __Vfunc_named_broadcast_assign__74__Vfuncout[6U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__otp_broadcast[7U] 
        = __Vfunc_named_broadcast_assign__74__Vfuncout[7U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__otp_broadcast[8U] 
        = __Vfunc_named_broadcast_assign__74__Vfuncout[8U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__otp_broadcast[9U] 
        = __Vfunc_named_broadcast_assign__74__Vfuncout[9U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__otp_broadcast[0x0000000aU] 
        = __Vfunc_named_broadcast_assign__74__Vfuncout[0x0000000aU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__otp_broadcast[0x0000000bU] 
        = __Vfunc_named_broadcast_assign__74__Vfuncout[0x0000000bU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__otp_broadcast[0x0000000cU] 
        = __Vfunc_named_broadcast_assign__74__Vfuncout[0x0000000cU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__otp_broadcast[0x0000000dU] 
        = __Vfunc_named_broadcast_assign__74__Vfuncout[0x0000000dU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__otp_broadcast[0x0000000eU] 
        = __Vfunc_named_broadcast_assign__74__Vfuncout[0x0000000eU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__otp_broadcast[0x0000000fU] 
        = __Vfunc_named_broadcast_assign__74__Vfuncout[0x0000000fU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__otp_broadcast[0x00000010U] 
        = __Vfunc_named_broadcast_assign__74__Vfuncout[0x00000010U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__otp_broadcast[0x00000011U] 
        = __Vfunc_named_broadcast_assign__74__Vfuncout[0x00000011U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__otp_broadcast[0x00000012U] 
        = __Vfunc_named_broadcast_assign__74__Vfuncout[0x00000012U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__otp_broadcast[0x00000013U] 
        = __Vfunc_named_broadcast_assign__74__Vfuncout[0x00000013U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__otp_broadcast[0x00000014U] 
        = __Vfunc_named_broadcast_assign__74__Vfuncout[0x00000014U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__otp_broadcast[0x00000015U] 
        = __Vfunc_named_broadcast_assign__74__Vfuncout[0x00000015U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__otp_broadcast[0x00000016U] 
        = __Vfunc_named_broadcast_assign__74__Vfuncout[0x00000016U];
    __Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_checks__DOT__valid_chk__2053__value[0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__otp_broadcast[0U];
    __Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_checks__DOT__valid_chk__2053__value[1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__otp_broadcast[1U];
    __Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_checks__DOT__valid_chk__2053__value[2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__otp_broadcast[2U];
    __Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_checks__DOT__valid_chk__2053__value[3U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__otp_broadcast[3U];
    __Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_checks__DOT__valid_chk__2053__value[4U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__otp_broadcast[4U];
    __Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_checks__DOT__valid_chk__2053__value[5U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__otp_broadcast[5U];
    __Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_checks__DOT__valid_chk__2053__value[6U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__otp_broadcast[6U];
    __Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_checks__DOT__valid_chk__2053__value[7U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__otp_broadcast[7U];
    __Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_checks__DOT__valid_chk__2053__Vfuncout 
        = ((0U != (((((((__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_checks__DOT__valid_chk__2053__value[0U] 
                         | __Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_checks__DOT__valid_chk__2053__value[1U]) 
                        | __Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_checks__DOT__valid_chk__2053__value[2U]) 
                       | __Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_checks__DOT__valid_chk__2053__value[3U]) 
                      | __Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_checks__DOT__valid_chk__2053__value[4U]) 
                     | __Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_checks__DOT__valid_chk__2053__value[5U]) 
                    | __Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_checks__DOT__valid_chk__2053__value[6U]) 
                   | __Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_checks__DOT__valid_chk__2053__value[7U])) 
           & (~ (0xffffffffU == (((((((__Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_checks__DOT__valid_chk__2053__value[0U] 
                                       & __Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_checks__DOT__valid_chk__2053__value[1U]) 
                                      & __Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_checks__DOT__valid_chk__2053__value[2U]) 
                                     & __Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_checks__DOT__valid_chk__2053__value[3U]) 
                                    & __Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_checks__DOT__valid_chk__2053__value[4U]) 
                                   & __Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_checks__DOT__valid_chk__2053__value[5U]) 
                                  & __Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_checks__DOT__valid_chk__2053__value[6U]) 
                                 & __Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_checks__DOT__valid_chk__2053__value[7U]))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__devid_vld 
        = __Vfunc_chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_checks__DOT__valid_chk__2053__Vfuncout;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT__u_debug_invalid_dev_id__DOT__de 
        = ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__devid_vld)) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT____VdfgRegularize_h58989f08_0_0));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__invalid_data 
        = ((0x0000000cU & ((- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT____VdfgRegularize_h58989f08_0_3))) 
                           << 2U)) | ((2U & ((~ (3U 
                                                 == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_checks__DOT__key_chk))) 
                                             << 1U)) 
                                      | (1U & ((~ (3U 
                                                   == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_checks__DOT__key_chk))) 
                                               | (~ 
                                                  ((0x0000000cU 
                                                    | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__owner_seed_vld) 
                                                        << 1U) 
                                                       | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__creator_seed_vld) 
                                                          & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__devid_vld) 
                                                             & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__health_state_vld) 
                                                                & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__rom_digest_vld)))))) 
                                                   >> (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__stage_sel)))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT__u_debug_invalid_dev_id__DOT__qe 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT__u_debug_invalid_dev_id__DOT__de) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT__u_debug_invalid_creator_seed__DOT__we));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT__u_debug_invalid_dev_id__DOT__wr_data 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT__u_debug_invalid_dev_id__DOT__de) 
            | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT__u_debug_invalid_dev_id__DOT__q)) 
           & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT__u_debug_invalid_creator_seed__DOT__we)) 
              | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_53.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                 >> 0x0000001aU)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__inputs_invalid_d 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__inputs_invalid_q;
    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__clr_err) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__inputs_invalid_d = 0U;
    } else if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__valid) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__inputs_invalid_d 
            = ((0x0eU & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__inputs_invalid_d)) 
               | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__adv_en) 
                  & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__invalid_data) 
                     | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__inputs_invalid_q))));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__inputs_invalid_d 
            = ((0x0dU & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__inputs_invalid_d)) 
               | (0xfffffffeU & (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__id_en) 
                                  << 1U) & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__invalid_data) 
                                            | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__inputs_invalid_q)))));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__inputs_invalid_d 
            = ((0x0bU & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__inputs_invalid_d)) 
               | (0xfffffffcU & (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__gen_en) 
                                  << 2U) & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__invalid_data) 
                                            | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__inputs_invalid_q)))));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__inputs_invalid_d 
            = ((7U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__inputs_invalid_d)) 
               | (0xfffffff8U & (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__gen_en) 
                                  << 3U) & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__invalid_data) 
                                            | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__inputs_invalid_q)))));
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_i[0U] 
        = ((0xfffffe00U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_i[0U]) 
           | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__strb) 
               << 1U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__last)));
    __Vtemp_27[0U] = Vsim__ConstPool__CONST_h6783a830_0[0U];
    __Vtemp_27[1U] = Vsim__ConstPool__CONST_h6783a830_0[1U];
    __Vtemp_27[2U] = Vsim__ConstPool__CONST_h6783a830_0[2U];
    __Vtemp_27[3U] = Vsim__ConstPool__CONST_h6783a830_0[3U];
    __Vtemp_27[4U] = Vsim__ConstPool__CONST_h6783a830_0[4U];
    __Vtemp_27[5U] = Vsim__ConstPool__CONST_h6783a830_0[5U];
    __Vtemp_27[6U] = Vsim__ConstPool__CONST_h6783a830_0[6U];
    __Vtemp_27[7U] = Vsim__ConstPool__CONST_h6783a830_0[7U];
    __Vtemp_27[8U] = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__rom_ctrl_keymgr_data[1U] 
                       << 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__rom_ctrl_keymgr_data[0U] 
                                          >> 1U));
    __Vtemp_27[9U] = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__rom_ctrl_keymgr_data[2U] 
                       << 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__rom_ctrl_keymgr_data[1U] 
                                          >> 1U));
    __Vtemp_27[0x0000000aU] = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__rom_ctrl_keymgr_data[3U] 
                                << 0x0000001fU) | (
                                                   vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__rom_ctrl_keymgr_data[2U] 
                                                   >> 1U));
    __Vtemp_27[0x0000000bU] = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__rom_ctrl_keymgr_data[4U] 
                                << 0x0000001fU) | (
                                                   vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__rom_ctrl_keymgr_data[3U] 
                                                   >> 1U));
    __Vtemp_27[0x0000000cU] = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__rom_ctrl_keymgr_data[5U] 
                                << 0x0000001fU) | (
                                                   vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__rom_ctrl_keymgr_data[4U] 
                                                   >> 1U));
    __Vtemp_27[0x0000000dU] = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__rom_ctrl_keymgr_data[6U] 
                                << 0x0000001fU) | (
                                                   vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__rom_ctrl_keymgr_data[5U] 
                                                   >> 1U));
    __Vtemp_27[0x0000000eU] = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__rom_ctrl_keymgr_data[7U] 
                                << 0x0000001fU) | (
                                                   vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__rom_ctrl_keymgr_data[6U] 
                                                   >> 1U));
    __Vtemp_27[0x0000000fU] = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__rom_ctrl_keymgr_data[8U] 
                                << 0x0000001fU) | (
                                                   vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__rom_ctrl_keymgr_data[7U] 
                                                   >> 1U));
    __Vtemp_27[0x00000010U] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_lc_ctrl_signal_decode__DOT__lc_keymgr_div_q[0U];
    __Vtemp_27[0x00000011U] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_lc_ctrl_signal_decode__DOT__lc_keymgr_div_q[1U];
    __Vtemp_27[0x00000012U] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_lc_ctrl_signal_decode__DOT__lc_keymgr_div_q[2U];
    __Vtemp_27[0x00000013U] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_lc_ctrl_signal_decode__DOT__lc_keymgr_div_q[3U];
    __Vtemp_27[0x00000014U] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__otp_broadcast[0U];
    __Vtemp_27[0x00000015U] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__otp_broadcast[1U];
    __Vtemp_27[0x00000016U] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__otp_broadcast[2U];
    __Vtemp_27[0x00000017U] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__otp_broadcast[3U];
    __Vtemp_27[0x00000018U] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__otp_broadcast[4U];
    __Vtemp_27[0x00000019U] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__otp_broadcast[5U];
    __Vtemp_27[0x0000001aU] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__otp_broadcast[6U];
    __Vtemp_27[0x0000001bU] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__otp_broadcast[7U];
    __Vtemp_27[0x0000001cU] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__sw_binding[0U];
    __Vtemp_27[0x0000001dU] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__sw_binding[1U];
    __Vtemp_27[0x0000001eU] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__sw_binding[2U];
    __Vtemp_27[0x0000001fU] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__sw_binding[3U];
    __Vtemp_27[0x00000020U] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__sw_binding[4U];
    __Vtemp_27[0x00000021U] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__sw_binding[5U];
    __Vtemp_27[0x00000022U] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__sw_binding[6U];
    __Vtemp_27[0x00000023U] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__sw_binding[7U];
    __Vtemp_27[0x00000024U] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_hw_if__DOT__seeds_q[0U];
    __Vtemp_27[0x00000025U] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_hw_if__DOT__seeds_q[1U];
    __Vtemp_27[0x00000026U] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_hw_if__DOT__seeds_q[2U];
    __Vtemp_27[0x00000027U] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_hw_if__DOT__seeds_q[3U];
    __Vtemp_27[0x00000028U] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_hw_if__DOT__seeds_q[4U];
    __Vtemp_27[0x00000029U] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_hw_if__DOT__seeds_q[5U];
    __Vtemp_27[0x0000002aU] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_hw_if__DOT__seeds_q[6U];
    __Vtemp_27[0x0000002bU] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_hw_if__DOT__seeds_q[7U];
    __Vtemp_27[0x0000002cU] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__sw_binding[0U];
    __Vtemp_27[0x0000002dU] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__sw_binding[1U];
    __Vtemp_27[0x0000002eU] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__sw_binding[2U];
    __Vtemp_27[0x0000002fU] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__sw_binding[3U];
    __Vtemp_27[0x00000030U] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__sw_binding[4U];
    __Vtemp_27[0x00000031U] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__sw_binding[5U];
    __Vtemp_27[0x00000032U] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__sw_binding[6U];
    __Vtemp_27[0x00000033U] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__sw_binding[7U];
    __Vtemp_27[0x00000034U] = Vsim__ConstPool__CONST_h7ca4bd95_0[0U];
    __Vtemp_27[0x00000035U] = Vsim__ConstPool__CONST_h7ca4bd95_0[1U];
    __Vtemp_27[0x00000036U] = Vsim__ConstPool__CONST_h7ca4bd95_0[2U];
    __Vtemp_27[0x00000037U] = Vsim__ConstPool__CONST_h7ca4bd95_0[3U];
    __Vtemp_27[0x00000038U] = Vsim__ConstPool__CONST_h7ca4bd95_0[4U];
    __Vtemp_27[0x00000039U] = Vsim__ConstPool__CONST_h7ca4bd95_0[5U];
    __Vtemp_27[0x0000003aU] = Vsim__ConstPool__CONST_h7ca4bd95_0[6U];
    __Vtemp_27[0x0000003bU] = Vsim__ConstPool__CONST_h7ca4bd95_0[7U];
    __Vtemp_27[0x0000003cU] = Vsim__ConstPool__CONST_h7ca4bd95_0[8U];
    __Vtemp_27[0x0000003dU] = Vsim__ConstPool__CONST_h7ca4bd95_0[9U];
    __Vtemp_27[0x0000003eU] = Vsim__ConstPool__CONST_h7ca4bd95_0[0x0000000aU];
    __Vtemp_27[0x0000003fU] = Vsim__ConstPool__CONST_h7ca4bd95_0[0x0000000bU];
    __Vtemp_27[0x00000040U] = Vsim__ConstPool__CONST_h7ca4bd95_0[0x0000000cU];
    __Vtemp_27[0x00000041U] = Vsim__ConstPool__CONST_h7ca4bd95_0[0x0000000dU];
    __Vtemp_27[0x00000042U] = Vsim__ConstPool__CONST_h7ca4bd95_0[0x0000000eU];
    __Vtemp_27[0x00000043U] = Vsim__ConstPool__CONST_h7ca4bd95_0[0x0000000fU];
    __Vtemp_27[0x00000044U] = Vsim__ConstPool__CONST_h7ca4bd95_0[0x00000010U];
    __Vtemp_27[0x00000045U] = Vsim__ConstPool__CONST_h7ca4bd95_0[0x00000011U];
    __Vtemp_27[0x00000046U] = Vsim__ConstPool__CONST_h7ca4bd95_0[0x00000012U];
    __Vtemp_27[0x00000047U] = Vsim__ConstPool__CONST_h7ca4bd95_0[0x00000013U];
    __Vtemp_27[0x00000048U] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_hw_if__DOT__seeds_q[8U];
    __Vtemp_27[0x00000049U] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_hw_if__DOT__seeds_q[9U];
    __Vtemp_27[0x0000004aU] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_hw_if__DOT__seeds_q[0x0000000aU];
    __Vtemp_27[0x0000004bU] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_hw_if__DOT__seeds_q[0x0000000bU];
    __Vtemp_27[0x0000004cU] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_hw_if__DOT__seeds_q[0x0000000cU];
    __Vtemp_27[0x0000004dU] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_hw_if__DOT__seeds_q[0x0000000dU];
    __Vtemp_27[0x0000004eU] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_hw_if__DOT__seeds_q[0x0000000eU];
    __Vtemp_27[0x0000004fU] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_hw_if__DOT__seeds_q[0x0000000fU];
    __Vtemp_27[0x00000050U] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__sw_binding[0U];
    __Vtemp_27[0x00000051U] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__sw_binding[1U];
    __Vtemp_27[0x00000052U] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__sw_binding[2U];
    __Vtemp_27[0x00000053U] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__sw_binding[3U];
    __Vtemp_27[0x00000054U] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__sw_binding[4U];
    __Vtemp_27[0x00000055U] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__sw_binding[5U];
    __Vtemp_27[0x00000056U] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__sw_binding[6U];
    __Vtemp_27[0x00000057U] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__sw_binding[7U];
    __Vtemp_27[0x00000058U] = Vsim__ConstPool__CONST_h7ca4bd95_0[0U];
    __Vtemp_27[0x00000059U] = Vsim__ConstPool__CONST_h7ca4bd95_0[1U];
    __Vtemp_27[0x0000005aU] = Vsim__ConstPool__CONST_h7ca4bd95_0[2U];
    __Vtemp_27[0x0000005bU] = Vsim__ConstPool__CONST_h7ca4bd95_0[3U];
    __Vtemp_27[0x0000005cU] = Vsim__ConstPool__CONST_h7ca4bd95_0[4U];
    __Vtemp_27[0x0000005dU] = Vsim__ConstPool__CONST_h7ca4bd95_0[5U];
    __Vtemp_27[0x0000005eU] = Vsim__ConstPool__CONST_h7ca4bd95_0[6U];
    __Vtemp_27[0x0000005fU] = Vsim__ConstPool__CONST_h7ca4bd95_0[7U];
    __Vtemp_27[0x00000060U] = Vsim__ConstPool__CONST_h7ca4bd95_0[8U];
    __Vtemp_27[0x00000061U] = Vsim__ConstPool__CONST_h7ca4bd95_0[9U];
    __Vtemp_27[0x00000062U] = Vsim__ConstPool__CONST_h7ca4bd95_0[0x0000000aU];
    __Vtemp_27[0x00000063U] = Vsim__ConstPool__CONST_h7ca4bd95_0[0x0000000bU];
    __Vtemp_27[0x00000064U] = Vsim__ConstPool__CONST_h7ca4bd95_0[0x0000000cU];
    __Vtemp_27[0x00000065U] = Vsim__ConstPool__CONST_h7ca4bd95_0[0x0000000dU];
    __Vtemp_27[0x00000066U] = Vsim__ConstPool__CONST_h7ca4bd95_0[0x0000000eU];
    __Vtemp_27[0x00000067U] = Vsim__ConstPool__CONST_h7ca4bd95_0[0x0000000fU];
    __Vtemp_27[0x00000068U] = Vsim__ConstPool__CONST_h7ca4bd95_0[0x00000010U];
    __Vtemp_27[0x00000069U] = Vsim__ConstPool__CONST_h7ca4bd95_0[0x00000011U];
    __Vtemp_27[0x0000006aU] = Vsim__ConstPool__CONST_h7ca4bd95_0[0x00000012U];
    __Vtemp_27[0x0000006bU] = Vsim__ConstPool__CONST_h7ca4bd95_0[0x00000013U];
    __Vtemp_27[0x0000006cU] = (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__data_rand);
    __Vtemp_27[0x0000006dU] = (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__data_rand);
    __Vtemp_27[0x0000006eU] = (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__data_rand);
    __Vtemp_27[0x0000006fU] = (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__data_rand);
    __Vtemp_27[0x00000070U] = (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__data_rand);
    __Vtemp_27[0x00000071U] = (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__data_rand);
    __Vtemp_27[0x00000072U] = (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__data_rand);
    __Vtemp_27[0x00000073U] = (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__data_rand);
    __Vtemp_27[0x00000074U] = (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__data_rand);
    __Vtemp_27[0x00000075U] = (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__data_rand);
    __Vtemp_27[0x00000076U] = (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__data_rand);
    __Vtemp_27[0x00000077U] = (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__data_rand);
    __Vtemp_27[0x00000078U] = (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__data_rand);
    __Vtemp_27[0x00000079U] = (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__data_rand);
    __Vtemp_27[0x0000007aU] = (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__data_rand);
    __Vtemp_27[0x0000007bU] = (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__data_rand);
    __Vtemp_27[0x0000007cU] = (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__data_rand);
    __Vtemp_27[0x0000007dU] = (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__data_rand);
    __Vtemp_27[0x0000007eU] = (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__data_rand);
    __Vtemp_27[0x0000007fU] = (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__data_rand);
    __Vtemp_27[0x00000080U] = (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__data_rand);
    __Vtemp_27[0x00000081U] = (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__data_rand);
    __Vtemp_27[0x00000082U] = (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__data_rand);
    __Vtemp_27[0x00000083U] = (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__data_rand);
    __Vtemp_27[0x00000084U] = (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__data_rand);
    __Vtemp_27[0x00000085U] = (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__data_rand);
    __Vtemp_27[0x00000086U] = (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__data_rand);
    __Vtemp_27[0x00000087U] = (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__data_rand);
    __Vtemp_27[0x00000088U] = (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__data_rand);
    __Vtemp_27[0x00000089U] = (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__data_rand);
    __Vtemp_27[0x0000008aU] = (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__data_rand);
    __Vtemp_27[0x0000008bU] = (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__data_rand);
    __Vtemp_27[0x0000008cU] = (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__data_rand);
    __Vtemp_27[0x0000008dU] = (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__data_rand);
    __Vtemp_27[0x0000008eU] = (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__data_rand);
    __Vtemp_27[0x0000008fU] = (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__data_rand);
    __VExpandSel_WordIdx_2 = (0x000000ffU & (((IData)(0x00000480U) 
                                              * (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__stage_sel)) 
                                             >> 5U));
    __VExpandSel_LoShift_2 = (0x0000001fU & ((IData)(0x00000480U) 
                                             * (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__stage_sel)));
    __VExpandSel_Aligned_2 = (0U == __VExpandSel_LoShift_2);
    if (__VExpandSel_Aligned_2) {
        __VExpandSel_HiShift_2 = 0U;
        __VExpandSel_HiMask_2 = 0U;
    } else {
        __VExpandSel_HiShift_2 = ((IData)(0x00000020U) 
                                  - __VExpandSel_LoShift_2);
        __VExpandSel_HiMask_2 = 0xffffffffU;
    }
    if ((0x11ffU >= (0x00001fffU & ((IData)(0x00000480U) 
                                    * (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__stage_sel))))) {
        __Vtemp_31[0U] = (((__Vtemp_27[((IData)(1U) 
                                        + __VExpandSel_WordIdx_2)] 
                            << __VExpandSel_HiShift_2) 
                           & __VExpandSel_HiMask_2) 
                          | (__Vtemp_27[__VExpandSel_WordIdx_2] 
                             >> __VExpandSel_LoShift_2));
        __Vtemp_31[1U] = (((__Vtemp_27[((IData)(2U) 
                                        + __VExpandSel_WordIdx_2)] 
                            << __VExpandSel_HiShift_2) 
                           & __VExpandSel_HiMask_2) 
                          | (__Vtemp_27[((IData)(1U) 
                                         + __VExpandSel_WordIdx_2)] 
                             >> __VExpandSel_LoShift_2));
        __Vtemp_31[2U] = (((__Vtemp_27[((IData)(3U) 
                                        + __VExpandSel_WordIdx_2)] 
                            << __VExpandSel_HiShift_2) 
                           & __VExpandSel_HiMask_2) 
                          | (__Vtemp_27[((IData)(2U) 
                                         + __VExpandSel_WordIdx_2)] 
                             >> __VExpandSel_LoShift_2));
        __Vtemp_31[3U] = (((__Vtemp_27[((IData)(4U) 
                                        + __VExpandSel_WordIdx_2)] 
                            << __VExpandSel_HiShift_2) 
                           & __VExpandSel_HiMask_2) 
                          | (__Vtemp_27[((IData)(3U) 
                                         + __VExpandSel_WordIdx_2)] 
                             >> __VExpandSel_LoShift_2));
        __Vtemp_31[4U] = (((__Vtemp_27[((IData)(5U) 
                                        + __VExpandSel_WordIdx_2)] 
                            << __VExpandSel_HiShift_2) 
                           & __VExpandSel_HiMask_2) 
                          | (__Vtemp_27[((IData)(4U) 
                                         + __VExpandSel_WordIdx_2)] 
                             >> __VExpandSel_LoShift_2));
        __Vtemp_31[5U] = (((__Vtemp_27[((IData)(6U) 
                                        + __VExpandSel_WordIdx_2)] 
                            << __VExpandSel_HiShift_2) 
                           & __VExpandSel_HiMask_2) 
                          | (__Vtemp_27[((IData)(5U) 
                                         + __VExpandSel_WordIdx_2)] 
                             >> __VExpandSel_LoShift_2));
        __Vtemp_31[6U] = (((__Vtemp_27[((IData)(7U) 
                                        + __VExpandSel_WordIdx_2)] 
                            << __VExpandSel_HiShift_2) 
                           & __VExpandSel_HiMask_2) 
                          | (__Vtemp_27[((IData)(6U) 
                                         + __VExpandSel_WordIdx_2)] 
                             >> __VExpandSel_LoShift_2));
        __Vtemp_31[7U] = (((__Vtemp_27[((IData)(8U) 
                                        + __VExpandSel_WordIdx_2)] 
                            << __VExpandSel_HiShift_2) 
                           & __VExpandSel_HiMask_2) 
                          | (__Vtemp_27[((IData)(7U) 
                                         + __VExpandSel_WordIdx_2)] 
                             >> __VExpandSel_LoShift_2));
        __Vtemp_31[8U] = (((__Vtemp_27[((IData)(9U) 
                                        + __VExpandSel_WordIdx_2)] 
                            << __VExpandSel_HiShift_2) 
                           & __VExpandSel_HiMask_2) 
                          | (__Vtemp_27[((IData)(8U) 
                                         + __VExpandSel_WordIdx_2)] 
                             >> __VExpandSel_LoShift_2));
        __Vtemp_31[9U] = (((__Vtemp_27[((IData)(0x0000000aU) 
                                        + __VExpandSel_WordIdx_2)] 
                            << __VExpandSel_HiShift_2) 
                           & __VExpandSel_HiMask_2) 
                          | (__Vtemp_27[((IData)(9U) 
                                         + __VExpandSel_WordIdx_2)] 
                             >> __VExpandSel_LoShift_2));
        __Vtemp_31[0x0000000aU] = (((__Vtemp_27[((IData)(0x0000000bU) 
                                                 + __VExpandSel_WordIdx_2)] 
                                     << __VExpandSel_HiShift_2) 
                                    & __VExpandSel_HiMask_2) 
                                   | (__Vtemp_27[((IData)(0x0000000aU) 
                                                  + __VExpandSel_WordIdx_2)] 
                                      >> __VExpandSel_LoShift_2));
        __Vtemp_31[0x0000000bU] = (((__Vtemp_27[((IData)(0x0000000cU) 
                                                 + __VExpandSel_WordIdx_2)] 
                                     << __VExpandSel_HiShift_2) 
                                    & __VExpandSel_HiMask_2) 
                                   | (__Vtemp_27[((IData)(0x0000000bU) 
                                                  + __VExpandSel_WordIdx_2)] 
                                      >> __VExpandSel_LoShift_2));
        __Vtemp_31[0x0000000cU] = (((__Vtemp_27[((IData)(0x0000000dU) 
                                                 + __VExpandSel_WordIdx_2)] 
                                     << __VExpandSel_HiShift_2) 
                                    & __VExpandSel_HiMask_2) 
                                   | (__Vtemp_27[((IData)(0x0000000cU) 
                                                  + __VExpandSel_WordIdx_2)] 
                                      >> __VExpandSel_LoShift_2));
        __Vtemp_31[0x0000000dU] = (((__Vtemp_27[((IData)(0x0000000eU) 
                                                 + __VExpandSel_WordIdx_2)] 
                                     << __VExpandSel_HiShift_2) 
                                    & __VExpandSel_HiMask_2) 
                                   | (__Vtemp_27[((IData)(0x0000000dU) 
                                                  + __VExpandSel_WordIdx_2)] 
                                      >> __VExpandSel_LoShift_2));
        __Vtemp_31[0x0000000eU] = (((__Vtemp_27[((IData)(0x0000000fU) 
                                                 + __VExpandSel_WordIdx_2)] 
                                     << __VExpandSel_HiShift_2) 
                                    & __VExpandSel_HiMask_2) 
                                   | (__Vtemp_27[((IData)(0x0000000eU) 
                                                  + __VExpandSel_WordIdx_2)] 
                                      >> __VExpandSel_LoShift_2));
        __Vtemp_31[0x0000000fU] = (((__Vtemp_27[((IData)(0x00000010U) 
                                                 + __VExpandSel_WordIdx_2)] 
                                     << __VExpandSel_HiShift_2) 
                                    & __VExpandSel_HiMask_2) 
                                   | (__Vtemp_27[((IData)(0x0000000fU) 
                                                  + __VExpandSel_WordIdx_2)] 
                                      >> __VExpandSel_LoShift_2));
        __Vtemp_31[0x00000010U] = (((__Vtemp_27[((IData)(0x00000011U) 
                                                 + __VExpandSel_WordIdx_2)] 
                                     << __VExpandSel_HiShift_2) 
                                    & __VExpandSel_HiMask_2) 
                                   | (__Vtemp_27[((IData)(0x00000010U) 
                                                  + __VExpandSel_WordIdx_2)] 
                                      >> __VExpandSel_LoShift_2));
        __Vtemp_31[0x00000011U] = (((__Vtemp_27[((IData)(0x00000012U) 
                                                 + __VExpandSel_WordIdx_2)] 
                                     << __VExpandSel_HiShift_2) 
                                    & __VExpandSel_HiMask_2) 
                                   | (__Vtemp_27[((IData)(0x00000011U) 
                                                  + __VExpandSel_WordIdx_2)] 
                                      >> __VExpandSel_LoShift_2));
        __Vtemp_31[0x00000012U] = (((__Vtemp_27[((IData)(0x00000013U) 
                                                 + __VExpandSel_WordIdx_2)] 
                                     << __VExpandSel_HiShift_2) 
                                    & __VExpandSel_HiMask_2) 
                                   | (__Vtemp_27[((IData)(0x00000012U) 
                                                  + __VExpandSel_WordIdx_2)] 
                                      >> __VExpandSel_LoShift_2));
        __Vtemp_31[0x00000013U] = (((__Vtemp_27[((IData)(0x00000014U) 
                                                 + __VExpandSel_WordIdx_2)] 
                                     << __VExpandSel_HiShift_2) 
                                    & __VExpandSel_HiMask_2) 
                                   | (__Vtemp_27[((IData)(0x00000013U) 
                                                  + __VExpandSel_WordIdx_2)] 
                                      >> __VExpandSel_LoShift_2));
        __Vtemp_31[0x00000014U] = (((__Vtemp_27[((IData)(0x00000015U) 
                                                 + __VExpandSel_WordIdx_2)] 
                                     << __VExpandSel_HiShift_2) 
                                    & __VExpandSel_HiMask_2) 
                                   | (__Vtemp_27[((IData)(0x00000014U) 
                                                  + __VExpandSel_WordIdx_2)] 
                                      >> __VExpandSel_LoShift_2));
        __Vtemp_31[0x00000015U] = (((__Vtemp_27[((IData)(0x00000016U) 
                                                 + __VExpandSel_WordIdx_2)] 
                                     << __VExpandSel_HiShift_2) 
                                    & __VExpandSel_HiMask_2) 
                                   | (__Vtemp_27[((IData)(0x00000015U) 
                                                  + __VExpandSel_WordIdx_2)] 
                                      >> __VExpandSel_LoShift_2));
        __Vtemp_31[0x00000016U] = (((__Vtemp_27[((IData)(0x00000017U) 
                                                 + __VExpandSel_WordIdx_2)] 
                                     << __VExpandSel_HiShift_2) 
                                    & __VExpandSel_HiMask_2) 
                                   | (__Vtemp_27[((IData)(0x00000016U) 
                                                  + __VExpandSel_WordIdx_2)] 
                                      >> __VExpandSel_LoShift_2));
        __Vtemp_31[0x00000017U] = (((__Vtemp_27[((IData)(0x00000018U) 
                                                 + __VExpandSel_WordIdx_2)] 
                                     << __VExpandSel_HiShift_2) 
                                    & __VExpandSel_HiMask_2) 
                                   | (__Vtemp_27[((IData)(0x00000017U) 
                                                  + __VExpandSel_WordIdx_2)] 
                                      >> __VExpandSel_LoShift_2));
        __Vtemp_31[0x00000018U] = (((__Vtemp_27[((IData)(0x00000019U) 
                                                 + __VExpandSel_WordIdx_2)] 
                                     << __VExpandSel_HiShift_2) 
                                    & __VExpandSel_HiMask_2) 
                                   | (__Vtemp_27[((IData)(0x00000018U) 
                                                  + __VExpandSel_WordIdx_2)] 
                                      >> __VExpandSel_LoShift_2));
        __Vtemp_31[0x00000019U] = (((__Vtemp_27[((IData)(0x0000001aU) 
                                                 + __VExpandSel_WordIdx_2)] 
                                     << __VExpandSel_HiShift_2) 
                                    & __VExpandSel_HiMask_2) 
                                   | (__Vtemp_27[((IData)(0x00000019U) 
                                                  + __VExpandSel_WordIdx_2)] 
                                      >> __VExpandSel_LoShift_2));
        __Vtemp_31[0x0000001aU] = (((__Vtemp_27[((IData)(0x0000001bU) 
                                                 + __VExpandSel_WordIdx_2)] 
                                     << __VExpandSel_HiShift_2) 
                                    & __VExpandSel_HiMask_2) 
                                   | (__Vtemp_27[((IData)(0x0000001aU) 
                                                  + __VExpandSel_WordIdx_2)] 
                                      >> __VExpandSel_LoShift_2));
        __Vtemp_31[0x0000001bU] = (((__Vtemp_27[((IData)(0x0000001cU) 
                                                 + __VExpandSel_WordIdx_2)] 
                                     << __VExpandSel_HiShift_2) 
                                    & __VExpandSel_HiMask_2) 
                                   | (__Vtemp_27[((IData)(0x0000001bU) 
                                                  + __VExpandSel_WordIdx_2)] 
                                      >> __VExpandSel_LoShift_2));
        __Vtemp_31[0x0000001cU] = (((__Vtemp_27[((IData)(0x0000001dU) 
                                                 + __VExpandSel_WordIdx_2)] 
                                     << __VExpandSel_HiShift_2) 
                                    & __VExpandSel_HiMask_2) 
                                   | (__Vtemp_27[((IData)(0x0000001cU) 
                                                  + __VExpandSel_WordIdx_2)] 
                                      >> __VExpandSel_LoShift_2));
        __Vtemp_31[0x0000001dU] = (((__Vtemp_27[((IData)(0x0000001eU) 
                                                 + __VExpandSel_WordIdx_2)] 
                                     << __VExpandSel_HiShift_2) 
                                    & __VExpandSel_HiMask_2) 
                                   | (__Vtemp_27[((IData)(0x0000001dU) 
                                                  + __VExpandSel_WordIdx_2)] 
                                      >> __VExpandSel_LoShift_2));
        __Vtemp_31[0x0000001eU] = (((__Vtemp_27[((IData)(0x0000001fU) 
                                                 + __VExpandSel_WordIdx_2)] 
                                     << __VExpandSel_HiShift_2) 
                                    & __VExpandSel_HiMask_2) 
                                   | (__Vtemp_27[((IData)(0x0000001eU) 
                                                  + __VExpandSel_WordIdx_2)] 
                                      >> __VExpandSel_LoShift_2));
        __Vtemp_31[0x0000001fU] = (((__Vtemp_27[((IData)(0x00000020U) 
                                                 + __VExpandSel_WordIdx_2)] 
                                     << __VExpandSel_HiShift_2) 
                                    & __VExpandSel_HiMask_2) 
                                   | (__Vtemp_27[((IData)(0x0000001fU) 
                                                  + __VExpandSel_WordIdx_2)] 
                                      >> __VExpandSel_LoShift_2));
        __Vtemp_31[0x00000020U] = (((__Vtemp_27[((IData)(0x00000021U) 
                                                 + __VExpandSel_WordIdx_2)] 
                                     << __VExpandSel_HiShift_2) 
                                    & __VExpandSel_HiMask_2) 
                                   | (__Vtemp_27[((IData)(0x00000020U) 
                                                  + __VExpandSel_WordIdx_2)] 
                                      >> __VExpandSel_LoShift_2));
        __Vtemp_31[0x00000021U] = (((__Vtemp_27[((IData)(0x00000022U) 
                                                 + __VExpandSel_WordIdx_2)] 
                                     << __VExpandSel_HiShift_2) 
                                    & __VExpandSel_HiMask_2) 
                                   | (__Vtemp_27[((IData)(0x00000021U) 
                                                  + __VExpandSel_WordIdx_2)] 
                                      >> __VExpandSel_LoShift_2));
        __Vtemp_31[0x00000022U] = (((__Vtemp_27[((IData)(0x00000023U) 
                                                 + __VExpandSel_WordIdx_2)] 
                                     << __VExpandSel_HiShift_2) 
                                    & __VExpandSel_HiMask_2) 
                                   | (__Vtemp_27[((IData)(0x00000022U) 
                                                  + __VExpandSel_WordIdx_2)] 
                                      >> __VExpandSel_LoShift_2));
        __Vtemp_31[0x00000023U] = (((((0x0000006cU 
                                       <= __VExpandSel_WordIdx_2)
                                       ? 0U : __Vtemp_27[
                                      ((IData)(0x00000024U) 
                                       + __VExpandSel_WordIdx_2)]) 
                                     << __VExpandSel_HiShift_2) 
                                    & __VExpandSel_HiMask_2) 
                                   | (__Vtemp_27[((IData)(0x00000023U) 
                                                  + __VExpandSel_WordIdx_2)] 
                                      >> __VExpandSel_LoShift_2));
    } else {
        __Vtemp_31[0U] = Vsim__ConstPool__CONST_hb029ca01_0[0U];
        __Vtemp_31[1U] = Vsim__ConstPool__CONST_hb029ca01_0[1U];
        __Vtemp_31[2U] = Vsim__ConstPool__CONST_hb029ca01_0[2U];
        __Vtemp_31[3U] = Vsim__ConstPool__CONST_hb029ca01_0[3U];
        __Vtemp_31[4U] = Vsim__ConstPool__CONST_hb029ca01_0[4U];
        __Vtemp_31[5U] = Vsim__ConstPool__CONST_hb029ca01_0[5U];
        __Vtemp_31[6U] = Vsim__ConstPool__CONST_hb029ca01_0[6U];
        __Vtemp_31[7U] = Vsim__ConstPool__CONST_hb029ca01_0[7U];
        __Vtemp_31[8U] = Vsim__ConstPool__CONST_hb029ca01_0[8U];
        __Vtemp_31[9U] = Vsim__ConstPool__CONST_hb029ca01_0[9U];
        __Vtemp_31[0x0000000aU] = Vsim__ConstPool__CONST_hb029ca01_0[0x0000000aU];
        __Vtemp_31[0x0000000bU] = Vsim__ConstPool__CONST_hb029ca01_0[0x0000000bU];
        __Vtemp_31[0x0000000cU] = Vsim__ConstPool__CONST_hb029ca01_0[0x0000000cU];
        __Vtemp_31[0x0000000dU] = Vsim__ConstPool__CONST_hb029ca01_0[0x0000000dU];
        __Vtemp_31[0x0000000eU] = Vsim__ConstPool__CONST_hb029ca01_0[0x0000000eU];
        __Vtemp_31[0x0000000fU] = Vsim__ConstPool__CONST_hb029ca01_0[0x0000000fU];
        __Vtemp_31[0x00000010U] = Vsim__ConstPool__CONST_hb029ca01_0[0x00000010U];
        __Vtemp_31[0x00000011U] = Vsim__ConstPool__CONST_hb029ca01_0[0x00000011U];
        __Vtemp_31[0x00000012U] = Vsim__ConstPool__CONST_hb029ca01_0[0x00000012U];
        __Vtemp_31[0x00000013U] = Vsim__ConstPool__CONST_hb029ca01_0[0x00000013U];
        __Vtemp_31[0x00000014U] = Vsim__ConstPool__CONST_hb029ca01_0[0x00000014U];
        __Vtemp_31[0x00000015U] = Vsim__ConstPool__CONST_hb029ca01_0[0x00000015U];
        __Vtemp_31[0x00000016U] = Vsim__ConstPool__CONST_hb029ca01_0[0x00000016U];
        __Vtemp_31[0x00000017U] = Vsim__ConstPool__CONST_hb029ca01_0[0x00000017U];
        __Vtemp_31[0x00000018U] = Vsim__ConstPool__CONST_hb029ca01_0[0x00000018U];
        __Vtemp_31[0x00000019U] = Vsim__ConstPool__CONST_hb029ca01_0[0x00000019U];
        __Vtemp_31[0x0000001aU] = Vsim__ConstPool__CONST_hb029ca01_0[0x0000001aU];
        __Vtemp_31[0x0000001bU] = Vsim__ConstPool__CONST_hb029ca01_0[0x0000001bU];
        __Vtemp_31[0x0000001cU] = Vsim__ConstPool__CONST_hb029ca01_0[0x0000001cU];
        __Vtemp_31[0x0000001dU] = Vsim__ConstPool__CONST_hb029ca01_0[0x0000001dU];
        __Vtemp_31[0x0000001eU] = Vsim__ConstPool__CONST_hb029ca01_0[0x0000001eU];
        __Vtemp_31[0x0000001fU] = Vsim__ConstPool__CONST_hb029ca01_0[0x0000001fU];
        __Vtemp_31[0x00000020U] = Vsim__ConstPool__CONST_hb029ca01_0[0x00000020U];
        __Vtemp_31[0x00000021U] = Vsim__ConstPool__CONST_hb029ca01_0[0x00000021U];
        __Vtemp_31[0x00000022U] = Vsim__ConstPool__CONST_hb029ca01_0[0x00000022U];
        __Vtemp_31[0x00000023U] = Vsim__ConstPool__CONST_hb029ca01_0[0x00000023U];
    }
    __Vtemp_31[0x00000024U] = 0U;
    __Vtemp_31[0x00000025U] = 0U;
    __Vtemp_31[0x00000026U] = 0U;
    __Vtemp_31[0x00000027U] = 0U;
    __Vtemp_31[0x00000028U] = 0U;
    __Vtemp_31[0x00000029U] = 0U;
    __Vtemp_31[0x0000002aU] = 0U;
    __Vtemp_31[0x0000002bU] = 0U;
    __Vtemp_31[0x0000002cU] = 0U;
    __Vtemp_31[0x0000002dU] = 0U;
    __Vtemp_31[0x0000002eU] = 0U;
    __Vtemp_31[0x0000002fU] = 0U;
    __Vtemp_31[0x00000030U] = 0U;
    __Vtemp_31[0x00000031U] = 0U;
    __Vtemp_31[0x00000032U] = 0U;
    __Vtemp_31[0x00000033U] = 0U;
    __Vtemp_31[0x00000034U] = 0U;
    __Vtemp_31[0x00000035U] = 0U;
    __Vtemp_31[0x00000036U] = 0U;
    __Vtemp_31[0x00000037U] = 0U;
    __Vtemp_31[0x00000038U] = 0U;
    __Vtemp_31[0x00000039U] = 0U;
    __Vtemp_31[0x0000003aU] = 0U;
    __Vtemp_31[0x0000003bU] = 0U;
    __Vtemp_31[0x0000003cU] = 0U;
    __Vtemp_31[0x0000003dU] = 0U;
    __Vtemp_33[0U] = Vsim__ConstPool__CONST_h96a84c0e_0[0U];
    __Vtemp_33[1U] = Vsim__ConstPool__CONST_h96a84c0e_0[1U];
    __Vtemp_33[2U] = Vsim__ConstPool__CONST_h96a84c0e_0[2U];
    __Vtemp_33[3U] = Vsim__ConstPool__CONST_h96a84c0e_0[3U];
    __Vtemp_33[4U] = Vsim__ConstPool__CONST_h96a84c0e_0[4U];
    __Vtemp_33[5U] = Vsim__ConstPool__CONST_h96a84c0e_0[5U];
    __Vtemp_33[6U] = Vsim__ConstPool__CONST_h96a84c0e_0[6U];
    __Vtemp_33[7U] = Vsim__ConstPool__CONST_h96a84c0e_0[7U];
    __Vtemp_33[8U] = Vsim__ConstPool__CONST_h96a84c0e_0[8U];
    __Vtemp_33[9U] = Vsim__ConstPool__CONST_h96a84c0e_0[9U];
    __Vtemp_33[0x0000000aU] = Vsim__ConstPool__CONST_h96a84c0e_0[0x0000000aU];
    __Vtemp_33[0x0000000bU] = Vsim__ConstPool__CONST_h96a84c0e_0[0x0000000bU];
    __Vtemp_33[0x0000000cU] = Vsim__ConstPool__CONST_h96a84c0e_0[0x0000000cU];
    __Vtemp_33[0x0000000dU] = Vsim__ConstPool__CONST_h96a84c0e_0[0x0000000dU];
    __Vtemp_33[0x0000000eU] = Vsim__ConstPool__CONST_h96a84c0e_0[0x0000000eU];
    __Vtemp_33[0x0000000fU] = Vsim__ConstPool__CONST_h96a84c0e_0[0x0000000fU];
    __Vtemp_33[0x00000010U] = Vsim__ConstPool__CONST_h96a84c0e_0[0x00000010U];
    __Vtemp_33[0x00000011U] = Vsim__ConstPool__CONST_h96a84c0e_0[0x00000011U];
    __Vtemp_33[0x00000012U] = Vsim__ConstPool__CONST_h96a84c0e_0[0x00000012U];
    __Vtemp_33[0x00000013U] = Vsim__ConstPool__CONST_h96a84c0e_0[0x00000013U];
    __Vtemp_33[0x00000014U] = Vsim__ConstPool__CONST_h96a84c0e_0[0x00000014U];
    __Vtemp_33[0x00000015U] = Vsim__ConstPool__CONST_h96a84c0e_0[0x00000015U];
    __Vtemp_33[0x00000016U] = Vsim__ConstPool__CONST_h96a84c0e_0[0x00000016U];
    __Vtemp_33[0x00000017U] = Vsim__ConstPool__CONST_h96a84c0e_0[0x00000017U];
    __Vtemp_33[0x00000018U] = (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__data_rand);
    __Vtemp_33[0x00000019U] = (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__data_rand);
    __Vtemp_33[0x0000001aU] = (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__data_rand);
    __Vtemp_33[0x0000001bU] = (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__data_rand);
    __Vtemp_33[0x0000001cU] = (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__data_rand);
    __Vtemp_33[0x0000001dU] = (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__data_rand);
    __Vtemp_33[0x0000001eU] = (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__data_rand);
    __Vtemp_33[0x0000001fU] = (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__data_rand);
    __VExpandSel_WordIdx_3 = (0x0000001fU & (VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__stage_sel), 8U) 
                                             >> 5U));
    __VExpandSel_LoShift_3 = (0x0000001fU & VL_SHIFTL_III(10,10,32, (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__stage_sel), 8U));
    __VExpandSel_Aligned_3 = (0U == __VExpandSel_LoShift_3);
    if (__VExpandSel_Aligned_3) {
        __VExpandSel_HiShift_3 = 0U;
        __VExpandSel_HiMask_3 = 0U;
    } else {
        __VExpandSel_HiShift_3 = ((IData)(0x00000020U) 
                                  - __VExpandSel_LoShift_3);
        __VExpandSel_HiMask_3 = 0xffffffffU;
    }
    __Vtemp_35[0U] = (((__Vtemp_33[((IData)(1U) + __VExpandSel_WordIdx_3)] 
                        << __VExpandSel_HiShift_3) 
                       & __VExpandSel_HiMask_3) | (
                                                   __Vtemp_33[__VExpandSel_WordIdx_3] 
                                                   >> __VExpandSel_LoShift_3));
    __Vtemp_35[1U] = (((__Vtemp_33[((IData)(2U) + __VExpandSel_WordIdx_3)] 
                        << __VExpandSel_HiShift_3) 
                       & __VExpandSel_HiMask_3) | (
                                                   __Vtemp_33[
                                                   ((IData)(1U) 
                                                    + __VExpandSel_WordIdx_3)] 
                                                   >> __VExpandSel_LoShift_3));
    __Vtemp_35[2U] = (((__Vtemp_33[((IData)(3U) + __VExpandSel_WordIdx_3)] 
                        << __VExpandSel_HiShift_3) 
                       & __VExpandSel_HiMask_3) | (
                                                   __Vtemp_33[
                                                   ((IData)(2U) 
                                                    + __VExpandSel_WordIdx_3)] 
                                                   >> __VExpandSel_LoShift_3));
    __Vtemp_35[3U] = (((__Vtemp_33[((IData)(4U) + __VExpandSel_WordIdx_3)] 
                        << __VExpandSel_HiShift_3) 
                       & __VExpandSel_HiMask_3) | (
                                                   __Vtemp_33[
                                                   ((IData)(3U) 
                                                    + __VExpandSel_WordIdx_3)] 
                                                   >> __VExpandSel_LoShift_3));
    __Vtemp_35[4U] = (((__Vtemp_33[((IData)(5U) + __VExpandSel_WordIdx_3)] 
                        << __VExpandSel_HiShift_3) 
                       & __VExpandSel_HiMask_3) | (
                                                   __Vtemp_33[
                                                   ((IData)(4U) 
                                                    + __VExpandSel_WordIdx_3)] 
                                                   >> __VExpandSel_LoShift_3));
    __Vtemp_35[5U] = (((__Vtemp_33[((IData)(6U) + __VExpandSel_WordIdx_3)] 
                        << __VExpandSel_HiShift_3) 
                       & __VExpandSel_HiMask_3) | (
                                                   __Vtemp_33[
                                                   ((IData)(5U) 
                                                    + __VExpandSel_WordIdx_3)] 
                                                   >> __VExpandSel_LoShift_3));
    __Vtemp_35[6U] = (((__Vtemp_33[((IData)(7U) + __VExpandSel_WordIdx_3)] 
                        << __VExpandSel_HiShift_3) 
                       & __VExpandSel_HiMask_3) | (
                                                   __Vtemp_33[
                                                   ((IData)(6U) 
                                                    + __VExpandSel_WordIdx_3)] 
                                                   >> __VExpandSel_LoShift_3));
    __Vtemp_35[7U] = (((((0x00000018U <= __VExpandSel_WordIdx_3)
                          ? 0U : __Vtemp_33[((IData)(8U) 
                                             + __VExpandSel_WordIdx_3)]) 
                        << __VExpandSel_HiShift_3) 
                       & __VExpandSel_HiMask_3) | (
                                                   __Vtemp_33[
                                                   ((IData)(7U) 
                                                    + __VExpandSel_WordIdx_3)] 
                                                   >> __VExpandSel_LoShift_3));
    IData/*31:0*/ __Vilp1;
    __Vilp1 = 8U;
    while ((__Vilp1 <= 0x0000003dU)) {
        __Vtemp_35[__Vilp1] = 0U;
        __Vilp1 = ((IData)(1U) + __Vilp1);
    }
    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT____VdfgRegularize_ha40fb8ef_0_4) {
        __Vtemp_42[0U] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__output_key[0U];
        __Vtemp_42[1U] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__output_key[1U];
        __Vtemp_42[2U] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__output_key[2U];
        __Vtemp_42[3U] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__output_key[3U];
        __Vtemp_42[4U] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__output_key[4U];
        __Vtemp_42[5U] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__output_key[5U];
        __Vtemp_42[6U] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__output_key[6U];
        __Vtemp_42[7U] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__output_key[7U];
        __Vtemp_42[8U] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__dest_seed[0U];
        __Vtemp_42[9U] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__dest_seed[1U];
        __Vtemp_42[0x0000000aU] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__dest_seed[2U];
        __Vtemp_42[0x0000000bU] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__dest_seed[3U];
        __Vtemp_42[0x0000000cU] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__dest_seed[4U];
        __Vtemp_42[0x0000000dU] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__dest_seed[5U];
        __Vtemp_42[0x0000000eU] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__dest_seed[6U];
        __Vtemp_42[0x0000000fU] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__dest_seed[7U];
        __Vtemp_42[0x00000010U] = ((vlSelfRef.__VdfgRegularize_he50b618e_0_1027[5U] 
                                    << 0x00000012U) 
                                   | (vlSelfRef.__VdfgRegularize_he50b618e_0_1027[4U] 
                                      >> 0x0000000eU));
        __Vtemp_42[0x00000011U] = ((vlSelfRef.__VdfgRegularize_he50b618e_0_1027[6U] 
                                    << 0x00000012U) 
                                   | (vlSelfRef.__VdfgRegularize_he50b618e_0_1027[5U] 
                                      >> 0x0000000eU));
        __Vtemp_42[0x00000012U] = ((vlSelfRef.__VdfgRegularize_he50b618e_0_1027[7U] 
                                    << 0x00000012U) 
                                   | (vlSelfRef.__VdfgRegularize_he50b618e_0_1027[6U] 
                                      >> 0x0000000eU));
        __Vtemp_42[0x00000013U] = ((vlSelfRef.__VdfgRegularize_he50b618e_0_1027[8U] 
                                    << 0x00000012U) 
                                   | (vlSelfRef.__VdfgRegularize_he50b618e_0_1027[7U] 
                                      >> 0x0000000eU));
        __Vtemp_42[0x00000014U] = ((vlSelfRef.__VdfgRegularize_he50b618e_0_1027[9U] 
                                    << 0x00000012U) 
                                   | (vlSelfRef.__VdfgRegularize_he50b618e_0_1027[8U] 
                                      >> 0x0000000eU));
        __Vtemp_42[0x00000015U] = ((vlSelfRef.__VdfgRegularize_he50b618e_0_1027[0x0000000aU] 
                                    << 0x00000012U) 
                                   | (vlSelfRef.__VdfgRegularize_he50b618e_0_1027[9U] 
                                      >> 0x0000000eU));
        __Vtemp_42[0x00000016U] = ((vlSelfRef.__VdfgRegularize_he50b618e_0_1027[0x0000000bU] 
                                    << 0x00000012U) 
                                   | (vlSelfRef.__VdfgRegularize_he50b618e_0_1027[0x0000000aU] 
                                      >> 0x0000000eU));
        __Vtemp_42[0x00000017U] = ((vlSelfRef.__VdfgRegularize_he50b618e_0_1027[0x0000000cU] 
                                    << 0x00000012U) 
                                   | (vlSelfRef.__VdfgRegularize_he50b618e_0_1027[0x0000000bU] 
                                      >> 0x0000000eU));
        __Vtemp_42[0x00000018U] = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT____Vcellout__u_key_version__q;
    } else {
        __Vtemp_42[0U] = vlSelfRef.__VdfgRegularize_he50b618e_0_1025;
        __Vtemp_42[1U] = vlSelfRef.__VdfgRegularize_he50b618e_0_1025;
        __Vtemp_42[2U] = vlSelfRef.__VdfgRegularize_he50b618e_0_1025;
        __Vtemp_42[3U] = vlSelfRef.__VdfgRegularize_he50b618e_0_1025;
        __Vtemp_42[4U] = vlSelfRef.__VdfgRegularize_he50b618e_0_1025;
        __Vtemp_42[5U] = vlSelfRef.__VdfgRegularize_he50b618e_0_1025;
        __Vtemp_42[6U] = vlSelfRef.__VdfgRegularize_he50b618e_0_1025;
        __Vtemp_42[7U] = vlSelfRef.__VdfgRegularize_he50b618e_0_1025;
        __Vtemp_42[8U] = vlSelfRef.__VdfgRegularize_he50b618e_0_1025;
        __Vtemp_42[9U] = vlSelfRef.__VdfgRegularize_he50b618e_0_1025;
        __Vtemp_42[0x0000000aU] = vlSelfRef.__VdfgRegularize_he50b618e_0_1025;
        __Vtemp_42[0x0000000bU] = vlSelfRef.__VdfgRegularize_he50b618e_0_1025;
        __Vtemp_42[0x0000000cU] = vlSelfRef.__VdfgRegularize_he50b618e_0_1025;
        __Vtemp_42[0x0000000dU] = vlSelfRef.__VdfgRegularize_he50b618e_0_1025;
        __Vtemp_42[0x0000000eU] = vlSelfRef.__VdfgRegularize_he50b618e_0_1025;
        __Vtemp_42[0x0000000fU] = vlSelfRef.__VdfgRegularize_he50b618e_0_1025;
        __Vtemp_42[0x00000010U] = vlSelfRef.__VdfgRegularize_he50b618e_0_1025;
        __Vtemp_42[0x00000011U] = vlSelfRef.__VdfgRegularize_he50b618e_0_1025;
        __Vtemp_42[0x00000012U] = vlSelfRef.__VdfgRegularize_he50b618e_0_1025;
        __Vtemp_42[0x00000013U] = vlSelfRef.__VdfgRegularize_he50b618e_0_1025;
        __Vtemp_42[0x00000014U] = vlSelfRef.__VdfgRegularize_he50b618e_0_1025;
        __Vtemp_42[0x00000015U] = vlSelfRef.__VdfgRegularize_he50b618e_0_1025;
        __Vtemp_42[0x00000016U] = vlSelfRef.__VdfgRegularize_he50b618e_0_1025;
        __Vtemp_42[0x00000017U] = vlSelfRef.__VdfgRegularize_he50b618e_0_1025;
        __Vtemp_42[0x00000018U] = vlSelfRef.__VdfgRegularize_he50b618e_0_1025;
    }
    __Vtemp_42[0x00000019U] = 0U;
    __Vtemp_42[0x0000001aU] = 0U;
    __Vtemp_42[0x0000001bU] = 0U;
    __Vtemp_42[0x0000001cU] = 0U;
    __Vtemp_42[0x0000001dU] = 0U;
    __Vtemp_42[0x0000001eU] = 0U;
    __Vtemp_42[0x0000001fU] = 0U;
    __Vtemp_42[0x00000020U] = 0U;
    __Vtemp_42[0x00000021U] = 0U;
    __Vtemp_42[0x00000022U] = 0U;
    __Vtemp_42[0x00000023U] = 0U;
    __Vtemp_42[0x00000024U] = 0U;
    __Vtemp_42[0x00000025U] = 0U;
    __Vtemp_42[0x00000026U] = 0U;
    __Vtemp_42[0x00000027U] = 0U;
    __Vtemp_42[0x00000028U] = 0U;
    __Vtemp_42[0x00000029U] = 0U;
    __Vtemp_42[0x0000002aU] = 0U;
    __Vtemp_42[0x0000002bU] = 0U;
    __Vtemp_42[0x0000002cU] = 0U;
    __Vtemp_42[0x0000002dU] = 0U;
    __Vtemp_42[0x0000002eU] = 0U;
    __Vtemp_42[0x0000002fU] = 0U;
    __Vtemp_42[0x00000030U] = 0U;
    __Vtemp_42[0x00000031U] = 0U;
    __Vtemp_42[0x00000032U] = 0U;
    __Vtemp_42[0x00000033U] = 0U;
    __Vtemp_42[0x00000034U] = 0U;
    __Vtemp_42[0x00000035U] = 0U;
    __Vtemp_42[0x00000036U] = 0U;
    __Vtemp_42[0x00000037U] = 0U;
    __Vtemp_42[0x00000038U] = 0U;
    __Vtemp_42[0x00000039U] = 0U;
    __Vtemp_42[0x0000003aU] = 0U;
    __Vtemp_42[0x0000003bU] = 0U;
    __Vtemp_42[0x0000003cU] = 0U;
    __Vtemp_42[0x0000003dU] = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_i[0U] 
        = ((0x000001ffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_i[0U]) 
           | ((IData)((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__kmac_cmd_err) 
                        | ((0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__inputs_invalid_d)) 
                           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__kmac_fsm_err)))
                        ? (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__decoy_entropy)) 
                            << 0x00000020U) | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__decoy_entropy)))
                        : (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__adv_en) 
                            & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__valid))
                            ? ((0x07bfU >= (0x000007ffU 
                                            & VL_SHIFTL_III(11,11,32, 
                                                            (0x0000001fU 
                                                             & ((IData)(0x11U) 
                                                                - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U)))
                                ? (((QData)((IData)(
                                                    __Vtemp_31[
                                                    (((IData)(0x0000003fU) 
                                                      + 
                                                      (0x000007ffU 
                                                       & VL_SHIFTL_III(11,11,32, 
                                                                       (0x0000001fU 
                                                                        & ((IData)(0x11U) 
                                                                           - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U))) 
                                                     >> 5U)])) 
                                    << ((0U == (0x0000001fU 
                                                & VL_SHIFTL_III(11,11,32, 
                                                                (0x0000001fU 
                                                                 & ((IData)(0x11U) 
                                                                    - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U)))
                                         ? 0x00000020U
                                         : ((IData)(0x00000040U) 
                                            - (0x0000001fU 
                                               & VL_SHIFTL_III(11,11,32, 
                                                               (0x0000001fU 
                                                                & ((IData)(0x11U) 
                                                                   - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U))))) 
                                   | (((0U == (0x0000001fU 
                                               & VL_SHIFTL_III(11,11,32, 
                                                               (0x0000001fU 
                                                                & ((IData)(0x11U) 
                                                                   - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U)))
                                        ? 0ULL : ((QData)((IData)(
                                                                  __Vtemp_31[
                                                                  (((IData)(0x0000001fU) 
                                                                    + 
                                                                    (0x000007ffU 
                                                                     & VL_SHIFTL_III(11,11,32, 
                                                                                (0x0000001fU 
                                                                                & ((IData)(0x11U) 
                                                                                - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U))) 
                                                                   >> 5U)])) 
                                                  << 
                                                  ((IData)(0x00000020U) 
                                                   - 
                                                   (0x0000001fU 
                                                    & VL_SHIFTL_III(11,11,32, 
                                                                    (0x0000001fU 
                                                                     & ((IData)(0x11U) 
                                                                        - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U))))) 
                                      | ((QData)((IData)(
                                                         __Vtemp_31[
                                                         (0x0000003fU 
                                                          & (VL_SHIFTL_III(11,11,32, 
                                                                           (0x0000001fU 
                                                                            & ((IData)(0x11U) 
                                                                               - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U) 
                                                             >> 5U))])) 
                                         >> (0x0000001fU 
                                             & VL_SHIFTL_III(11,11,32, 
                                                             (0x0000001fU 
                                                              & ((IData)(0x11U) 
                                                                 - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U)))))
                                : 0ULL) : (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__id_en) 
                                            & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__valid))
                                            ? ((0x07bfU 
                                                >= 
                                                (0x000007ffU 
                                                 & VL_SHIFTL_III(11,11,32, 
                                                                 (0x0000001fU 
                                                                  & ((IData)(3U) 
                                                                     - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U)))
                                                ? (
                                                   ((QData)((IData)(
                                                                    __Vtemp_35[
                                                                    (((IData)(0x0000003fU) 
                                                                      + 
                                                                      (0x000007ffU 
                                                                       & VL_SHIFTL_III(11,11,32, 
                                                                                (0x0000001fU 
                                                                                & ((IData)(3U) 
                                                                                - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U))) 
                                                                     >> 5U)])) 
                                                    << 
                                                    ((0U 
                                                      == 
                                                      (0x0000001fU 
                                                       & VL_SHIFTL_III(11,11,32, 
                                                                       (0x0000001fU 
                                                                        & ((IData)(3U) 
                                                                           - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U)))
                                                      ? 0x00000020U
                                                      : 
                                                     ((IData)(0x00000040U) 
                                                      - 
                                                      (0x0000001fU 
                                                       & VL_SHIFTL_III(11,11,32, 
                                                                       (0x0000001fU 
                                                                        & ((IData)(3U) 
                                                                           - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U))))) 
                                                   | (((0U 
                                                        == 
                                                        (0x0000001fU 
                                                         & VL_SHIFTL_III(11,11,32, 
                                                                         (0x0000001fU 
                                                                          & ((IData)(3U) 
                                                                             - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U)))
                                                        ? 0ULL
                                                        : 
                                                       ((QData)((IData)(
                                                                        __Vtemp_35[
                                                                        (((IData)(0x0000001fU) 
                                                                          + 
                                                                          (0x000007ffU 
                                                                           & VL_SHIFTL_III(11,11,32, 
                                                                                (0x0000001fU 
                                                                                & ((IData)(3U) 
                                                                                - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U))) 
                                                                         >> 5U)])) 
                                                        << 
                                                        ((IData)(0x00000020U) 
                                                         - 
                                                         (0x0000001fU 
                                                          & VL_SHIFTL_III(11,11,32, 
                                                                          (0x0000001fU 
                                                                           & ((IData)(3U) 
                                                                              - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U))))) 
                                                      | ((QData)((IData)(
                                                                         __Vtemp_35[
                                                                         (0x0000003fU 
                                                                          & (VL_SHIFTL_III(11,11,32, 
                                                                                (0x0000001fU 
                                                                                & ((IData)(3U) 
                                                                                - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U) 
                                                                             >> 5U))])) 
                                                         >> 
                                                         (0x0000001fU 
                                                          & VL_SHIFTL_III(11,11,32, 
                                                                          (0x0000001fU 
                                                                           & ((IData)(3U) 
                                                                              - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U)))))
                                                : 0ULL)
                                            : (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__gen_en) 
                                                & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__valid))
                                                ? (
                                                   (0x07bfU 
                                                    >= 
                                                    (0x000007ffU 
                                                     & VL_SHIFTL_III(11,11,32, 
                                                                     (0x0000001fU 
                                                                      & ((IData)(0x0cU) 
                                                                         - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U)))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     __Vtemp_42[
                                                                     (((IData)(0x0000003fU) 
                                                                       + 
                                                                       (0x000007ffU 
                                                                        & VL_SHIFTL_III(11,11,32, 
                                                                                (0x0000001fU 
                                                                                & ((IData)(0x0cU) 
                                                                                - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U))) 
                                                                      >> 5U)])) 
                                                     << 
                                                     ((0U 
                                                       == 
                                                       (0x0000001fU 
                                                        & VL_SHIFTL_III(11,11,32, 
                                                                        (0x0000001fU 
                                                                         & ((IData)(0x0cU) 
                                                                            - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U)))
                                                       ? 0x00000020U
                                                       : 
                                                      ((IData)(0x00000040U) 
                                                       - 
                                                       (0x0000001fU 
                                                        & VL_SHIFTL_III(11,11,32, 
                                                                        (0x0000001fU 
                                                                         & ((IData)(0x0cU) 
                                                                            - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U))))) 
                                                    | (((0U 
                                                         == 
                                                         (0x0000001fU 
                                                          & VL_SHIFTL_III(11,11,32, 
                                                                          (0x0000001fU 
                                                                           & ((IData)(0x0cU) 
                                                                              - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U)))
                                                         ? 0ULL
                                                         : 
                                                        ((QData)((IData)(
                                                                         __Vtemp_42[
                                                                         (((IData)(0x0000001fU) 
                                                                           + 
                                                                           (0x000007ffU 
                                                                            & VL_SHIFTL_III(11,11,32, 
                                                                                (0x0000001fU 
                                                                                & ((IData)(0x0cU) 
                                                                                - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U))) 
                                                                          >> 5U)])) 
                                                         << 
                                                         ((IData)(0x00000020U) 
                                                          - 
                                                          (0x0000001fU 
                                                           & VL_SHIFTL_III(11,11,32, 
                                                                           (0x0000001fU 
                                                                            & ((IData)(0x0cU) 
                                                                               - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U))))) 
                                                       | ((QData)((IData)(
                                                                          __Vtemp_42[
                                                                          (0x0000003fU 
                                                                           & (VL_SHIFTL_III(11,11,32, 
                                                                                (0x0000001fU 
                                                                                & ((IData)(0x0cU) 
                                                                                - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U) 
                                                                              >> 5U))])) 
                                                          >> 
                                                          (0x0000001fU 
                                                           & VL_SHIFTL_III(11,11,32, 
                                                                           (0x0000001fU 
                                                                            & ((IData)(0x0cU) 
                                                                               - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U)))))
                                                    : 0ULL)
                                                : (
                                                   ((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__decoy_entropy)) 
                                                    << 0x00000020U) 
                                                   | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__decoy_entropy)))))))) 
              << 9U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_i[1U] 
        = (((IData)((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__kmac_cmd_err) 
                      | ((0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__inputs_invalid_d)) 
                         | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__kmac_fsm_err)))
                      ? (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__decoy_entropy)) 
                          << 0x00000020U) | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__decoy_entropy)))
                      : (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__adv_en) 
                          & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__valid))
                          ? ((0x07bfU >= (0x000007ffU 
                                          & VL_SHIFTL_III(11,11,32, 
                                                          (0x0000001fU 
                                                           & ((IData)(0x11U) 
                                                              - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U)))
                              ? (((QData)((IData)(__Vtemp_31[
                                                  (((IData)(0x0000003fU) 
                                                    + 
                                                    (0x000007ffU 
                                                     & VL_SHIFTL_III(11,11,32, 
                                                                     (0x0000001fU 
                                                                      & ((IData)(0x11U) 
                                                                         - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U))) 
                                                   >> 5U)])) 
                                  << ((0U == (0x0000001fU 
                                              & VL_SHIFTL_III(11,11,32, 
                                                              (0x0000001fU 
                                                               & ((IData)(0x11U) 
                                                                  - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U)))
                                       ? 0x00000020U
                                       : ((IData)(0x00000040U) 
                                          - (0x0000001fU 
                                             & VL_SHIFTL_III(11,11,32, 
                                                             (0x0000001fU 
                                                              & ((IData)(0x11U) 
                                                                 - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U))))) 
                                 | (((0U == (0x0000001fU 
                                             & VL_SHIFTL_III(11,11,32, 
                                                             (0x0000001fU 
                                                              & ((IData)(0x11U) 
                                                                 - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U)))
                                      ? 0ULL : ((QData)((IData)(
                                                                __Vtemp_31[
                                                                (((IData)(0x0000001fU) 
                                                                  + 
                                                                  (0x000007ffU 
                                                                   & VL_SHIFTL_III(11,11,32, 
                                                                                (0x0000001fU 
                                                                                & ((IData)(0x11U) 
                                                                                - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U))) 
                                                                 >> 5U)])) 
                                                << 
                                                ((IData)(0x00000020U) 
                                                 - 
                                                 (0x0000001fU 
                                                  & VL_SHIFTL_III(11,11,32, 
                                                                  (0x0000001fU 
                                                                   & ((IData)(0x11U) 
                                                                      - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U))))) 
                                    | ((QData)((IData)(
                                                       __Vtemp_31[
                                                       (0x0000003fU 
                                                        & (VL_SHIFTL_III(11,11,32, 
                                                                         (0x0000001fU 
                                                                          & ((IData)(0x11U) 
                                                                             - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U) 
                                                           >> 5U))])) 
                                       >> (0x0000001fU 
                                           & VL_SHIFTL_III(11,11,32, 
                                                           (0x0000001fU 
                                                            & ((IData)(0x11U) 
                                                               - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U)))))
                              : 0ULL) : (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__id_en) 
                                          & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__valid))
                                          ? ((0x07bfU 
                                              >= (0x000007ffU 
                                                  & VL_SHIFTL_III(11,11,32, 
                                                                  (0x0000001fU 
                                                                   & ((IData)(3U) 
                                                                      - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U)))
                                              ? (((QData)((IData)(
                                                                  __Vtemp_35[
                                                                  (((IData)(0x0000003fU) 
                                                                    + 
                                                                    (0x000007ffU 
                                                                     & VL_SHIFTL_III(11,11,32, 
                                                                                (0x0000001fU 
                                                                                & ((IData)(3U) 
                                                                                - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U))) 
                                                                   >> 5U)])) 
                                                  << 
                                                  ((0U 
                                                    == 
                                                    (0x0000001fU 
                                                     & VL_SHIFTL_III(11,11,32, 
                                                                     (0x0000001fU 
                                                                      & ((IData)(3U) 
                                                                         - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U)))
                                                    ? 0x00000020U
                                                    : 
                                                   ((IData)(0x00000040U) 
                                                    - 
                                                    (0x0000001fU 
                                                     & VL_SHIFTL_III(11,11,32, 
                                                                     (0x0000001fU 
                                                                      & ((IData)(3U) 
                                                                         - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U))))) 
                                                 | (((0U 
                                                      == 
                                                      (0x0000001fU 
                                                       & VL_SHIFTL_III(11,11,32, 
                                                                       (0x0000001fU 
                                                                        & ((IData)(3U) 
                                                                           - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U)))
                                                      ? 0ULL
                                                      : 
                                                     ((QData)((IData)(
                                                                      __Vtemp_35[
                                                                      (((IData)(0x0000001fU) 
                                                                        + 
                                                                        (0x000007ffU 
                                                                         & VL_SHIFTL_III(11,11,32, 
                                                                                (0x0000001fU 
                                                                                & ((IData)(3U) 
                                                                                - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U))) 
                                                                       >> 5U)])) 
                                                      << 
                                                      ((IData)(0x00000020U) 
                                                       - 
                                                       (0x0000001fU 
                                                        & VL_SHIFTL_III(11,11,32, 
                                                                        (0x0000001fU 
                                                                         & ((IData)(3U) 
                                                                            - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U))))) 
                                                    | ((QData)((IData)(
                                                                       __Vtemp_35[
                                                                       (0x0000003fU 
                                                                        & (VL_SHIFTL_III(11,11,32, 
                                                                                (0x0000001fU 
                                                                                & ((IData)(3U) 
                                                                                - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U) 
                                                                           >> 5U))])) 
                                                       >> 
                                                       (0x0000001fU 
                                                        & VL_SHIFTL_III(11,11,32, 
                                                                        (0x0000001fU 
                                                                         & ((IData)(3U) 
                                                                            - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U)))))
                                              : 0ULL)
                                          : (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__gen_en) 
                                              & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__valid))
                                              ? ((0x07bfU 
                                                  >= 
                                                  (0x000007ffU 
                                                   & VL_SHIFTL_III(11,11,32, 
                                                                   (0x0000001fU 
                                                                    & ((IData)(0x0cU) 
                                                                       - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U)))
                                                  ? 
                                                 (((QData)((IData)(
                                                                   __Vtemp_42[
                                                                   (((IData)(0x0000003fU) 
                                                                     + 
                                                                     (0x000007ffU 
                                                                      & VL_SHIFTL_III(11,11,32, 
                                                                                (0x0000001fU 
                                                                                & ((IData)(0x0cU) 
                                                                                - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U))) 
                                                                    >> 5U)])) 
                                                   << 
                                                   ((0U 
                                                     == 
                                                     (0x0000001fU 
                                                      & VL_SHIFTL_III(11,11,32, 
                                                                      (0x0000001fU 
                                                                       & ((IData)(0x0cU) 
                                                                          - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U)))
                                                     ? 0x00000020U
                                                     : 
                                                    ((IData)(0x00000040U) 
                                                     - 
                                                     (0x0000001fU 
                                                      & VL_SHIFTL_III(11,11,32, 
                                                                      (0x0000001fU 
                                                                       & ((IData)(0x0cU) 
                                                                          - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U))))) 
                                                  | (((0U 
                                                       == 
                                                       (0x0000001fU 
                                                        & VL_SHIFTL_III(11,11,32, 
                                                                        (0x0000001fU 
                                                                         & ((IData)(0x0cU) 
                                                                            - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U)))
                                                       ? 0ULL
                                                       : 
                                                      ((QData)((IData)(
                                                                       __Vtemp_42[
                                                                       (((IData)(0x0000001fU) 
                                                                         + 
                                                                         (0x000007ffU 
                                                                          & VL_SHIFTL_III(11,11,32, 
                                                                                (0x0000001fU 
                                                                                & ((IData)(0x0cU) 
                                                                                - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U))) 
                                                                        >> 5U)])) 
                                                       << 
                                                       ((IData)(0x00000020U) 
                                                        - 
                                                        (0x0000001fU 
                                                         & VL_SHIFTL_III(11,11,32, 
                                                                         (0x0000001fU 
                                                                          & ((IData)(0x0cU) 
                                                                             - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U))))) 
                                                     | ((QData)((IData)(
                                                                        __Vtemp_42[
                                                                        (0x0000003fU 
                                                                         & (VL_SHIFTL_III(11,11,32, 
                                                                                (0x0000001fU 
                                                                                & ((IData)(0x0cU) 
                                                                                - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U) 
                                                                            >> 5U))])) 
                                                        >> 
                                                        (0x0000001fU 
                                                         & VL_SHIFTL_III(11,11,32, 
                                                                         (0x0000001fU 
                                                                          & ((IData)(0x0cU) 
                                                                             - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U)))))
                                                  : 0ULL)
                                              : (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__decoy_entropy)) 
                                                  << 0x00000020U) 
                                                 | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__decoy_entropy)))))))) 
            >> 0x00000017U) | ((IData)(((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__kmac_cmd_err) 
                                          | ((0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__inputs_invalid_d)) 
                                             | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__kmac_fsm_err)))
                                          ? (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__decoy_entropy)) 
                                              << 0x00000020U) 
                                             | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__decoy_entropy)))
                                          : (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__adv_en) 
                                              & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__valid))
                                              ? ((0x07bfU 
                                                  >= 
                                                  (0x000007ffU 
                                                   & VL_SHIFTL_III(11,11,32, 
                                                                   (0x0000001fU 
                                                                    & ((IData)(0x11U) 
                                                                       - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U)))
                                                  ? 
                                                 (((QData)((IData)(
                                                                   __Vtemp_31[
                                                                   (((IData)(0x0000003fU) 
                                                                     + 
                                                                     (0x000007ffU 
                                                                      & VL_SHIFTL_III(11,11,32, 
                                                                                (0x0000001fU 
                                                                                & ((IData)(0x11U) 
                                                                                - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U))) 
                                                                    >> 5U)])) 
                                                   << 
                                                   ((0U 
                                                     == 
                                                     (0x0000001fU 
                                                      & VL_SHIFTL_III(11,11,32, 
                                                                      (0x0000001fU 
                                                                       & ((IData)(0x11U) 
                                                                          - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U)))
                                                     ? 0x00000020U
                                                     : 
                                                    ((IData)(0x00000040U) 
                                                     - 
                                                     (0x0000001fU 
                                                      & VL_SHIFTL_III(11,11,32, 
                                                                      (0x0000001fU 
                                                                       & ((IData)(0x11U) 
                                                                          - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U))))) 
                                                  | (((0U 
                                                       == 
                                                       (0x0000001fU 
                                                        & VL_SHIFTL_III(11,11,32, 
                                                                        (0x0000001fU 
                                                                         & ((IData)(0x11U) 
                                                                            - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U)))
                                                       ? 0ULL
                                                       : 
                                                      ((QData)((IData)(
                                                                       __Vtemp_31[
                                                                       (((IData)(0x0000001fU) 
                                                                         + 
                                                                         (0x000007ffU 
                                                                          & VL_SHIFTL_III(11,11,32, 
                                                                                (0x0000001fU 
                                                                                & ((IData)(0x11U) 
                                                                                - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U))) 
                                                                        >> 5U)])) 
                                                       << 
                                                       ((IData)(0x00000020U) 
                                                        - 
                                                        (0x0000001fU 
                                                         & VL_SHIFTL_III(11,11,32, 
                                                                         (0x0000001fU 
                                                                          & ((IData)(0x11U) 
                                                                             - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U))))) 
                                                     | ((QData)((IData)(
                                                                        __Vtemp_31[
                                                                        (0x0000003fU 
                                                                         & (VL_SHIFTL_III(11,11,32, 
                                                                                (0x0000001fU 
                                                                                & ((IData)(0x11U) 
                                                                                - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U) 
                                                                            >> 5U))])) 
                                                        >> 
                                                        (0x0000001fU 
                                                         & VL_SHIFTL_III(11,11,32, 
                                                                         (0x0000001fU 
                                                                          & ((IData)(0x11U) 
                                                                             - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U)))))
                                                  : 0ULL)
                                              : (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__id_en) 
                                                  & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__valid))
                                                  ? 
                                                 ((0x07bfU 
                                                   >= 
                                                   (0x000007ffU 
                                                    & VL_SHIFTL_III(11,11,32, 
                                                                    (0x0000001fU 
                                                                     & ((IData)(3U) 
                                                                        - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U)))
                                                   ? 
                                                  (((QData)((IData)(
                                                                    __Vtemp_35[
                                                                    (((IData)(0x0000003fU) 
                                                                      + 
                                                                      (0x000007ffU 
                                                                       & VL_SHIFTL_III(11,11,32, 
                                                                                (0x0000001fU 
                                                                                & ((IData)(3U) 
                                                                                - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U))) 
                                                                     >> 5U)])) 
                                                    << 
                                                    ((0U 
                                                      == 
                                                      (0x0000001fU 
                                                       & VL_SHIFTL_III(11,11,32, 
                                                                       (0x0000001fU 
                                                                        & ((IData)(3U) 
                                                                           - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U)))
                                                      ? 0x00000020U
                                                      : 
                                                     ((IData)(0x00000040U) 
                                                      - 
                                                      (0x0000001fU 
                                                       & VL_SHIFTL_III(11,11,32, 
                                                                       (0x0000001fU 
                                                                        & ((IData)(3U) 
                                                                           - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U))))) 
                                                   | (((0U 
                                                        == 
                                                        (0x0000001fU 
                                                         & VL_SHIFTL_III(11,11,32, 
                                                                         (0x0000001fU 
                                                                          & ((IData)(3U) 
                                                                             - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U)))
                                                        ? 0ULL
                                                        : 
                                                       ((QData)((IData)(
                                                                        __Vtemp_35[
                                                                        (((IData)(0x0000001fU) 
                                                                          + 
                                                                          (0x000007ffU 
                                                                           & VL_SHIFTL_III(11,11,32, 
                                                                                (0x0000001fU 
                                                                                & ((IData)(3U) 
                                                                                - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U))) 
                                                                         >> 5U)])) 
                                                        << 
                                                        ((IData)(0x00000020U) 
                                                         - 
                                                         (0x0000001fU 
                                                          & VL_SHIFTL_III(11,11,32, 
                                                                          (0x0000001fU 
                                                                           & ((IData)(3U) 
                                                                              - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U))))) 
                                                      | ((QData)((IData)(
                                                                         __Vtemp_35[
                                                                         (0x0000003fU 
                                                                          & (VL_SHIFTL_III(11,11,32, 
                                                                                (0x0000001fU 
                                                                                & ((IData)(3U) 
                                                                                - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U) 
                                                                             >> 5U))])) 
                                                         >> 
                                                         (0x0000001fU 
                                                          & VL_SHIFTL_III(11,11,32, 
                                                                          (0x0000001fU 
                                                                           & ((IData)(3U) 
                                                                              - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U)))))
                                                   : 0ULL)
                                                  : 
                                                 (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__gen_en) 
                                                   & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__valid))
                                                   ? 
                                                  ((0x07bfU 
                                                    >= 
                                                    (0x000007ffU 
                                                     & VL_SHIFTL_III(11,11,32, 
                                                                     (0x0000001fU 
                                                                      & ((IData)(0x0cU) 
                                                                         - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U)))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     __Vtemp_42[
                                                                     (((IData)(0x0000003fU) 
                                                                       + 
                                                                       (0x000007ffU 
                                                                        & VL_SHIFTL_III(11,11,32, 
                                                                                (0x0000001fU 
                                                                                & ((IData)(0x0cU) 
                                                                                - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U))) 
                                                                      >> 5U)])) 
                                                     << 
                                                     ((0U 
                                                       == 
                                                       (0x0000001fU 
                                                        & VL_SHIFTL_III(11,11,32, 
                                                                        (0x0000001fU 
                                                                         & ((IData)(0x0cU) 
                                                                            - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U)))
                                                       ? 0x00000020U
                                                       : 
                                                      ((IData)(0x00000040U) 
                                                       - 
                                                       (0x0000001fU 
                                                        & VL_SHIFTL_III(11,11,32, 
                                                                        (0x0000001fU 
                                                                         & ((IData)(0x0cU) 
                                                                            - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U))))) 
                                                    | (((0U 
                                                         == 
                                                         (0x0000001fU 
                                                          & VL_SHIFTL_III(11,11,32, 
                                                                          (0x0000001fU 
                                                                           & ((IData)(0x0cU) 
                                                                              - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U)))
                                                         ? 0ULL
                                                         : 
                                                        ((QData)((IData)(
                                                                         __Vtemp_42[
                                                                         (((IData)(0x0000001fU) 
                                                                           + 
                                                                           (0x000007ffU 
                                                                            & VL_SHIFTL_III(11,11,32, 
                                                                                (0x0000001fU 
                                                                                & ((IData)(0x0cU) 
                                                                                - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U))) 
                                                                          >> 5U)])) 
                                                         << 
                                                         ((IData)(0x00000020U) 
                                                          - 
                                                          (0x0000001fU 
                                                           & VL_SHIFTL_III(11,11,32, 
                                                                           (0x0000001fU 
                                                                            & ((IData)(0x0cU) 
                                                                               - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U))))) 
                                                       | ((QData)((IData)(
                                                                          __Vtemp_42[
                                                                          (0x0000003fU 
                                                                           & (VL_SHIFTL_III(11,11,32, 
                                                                                (0x0000001fU 
                                                                                & ((IData)(0x0cU) 
                                                                                - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U) 
                                                                              >> 5U))])) 
                                                          >> 
                                                          (0x0000001fU 
                                                           & VL_SHIFTL_III(11,11,32, 
                                                                           (0x0000001fU 
                                                                            & ((IData)(0x0cU) 
                                                                               - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U)))))
                                                    : 0ULL)
                                                   : 
                                                  (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__decoy_entropy)) 
                                                    << 0x00000020U) 
                                                   | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__decoy_entropy))))))) 
                                        >> 0x00000020U)) 
                               << 9U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_i[2U] 
        = ((0xfffffe00U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_i[2U]) 
           | ((IData)(((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__kmac_cmd_err) 
                         | ((0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__inputs_invalid_d)) 
                            | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__kmac_fsm_err)))
                         ? (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__decoy_entropy)) 
                             << 0x00000020U) | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__decoy_entropy)))
                         : (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__adv_en) 
                             & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__valid))
                             ? ((0x07bfU >= (0x000007ffU 
                                             & VL_SHIFTL_III(11,11,32, 
                                                             (0x0000001fU 
                                                              & ((IData)(0x11U) 
                                                                 - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U)))
                                 ? (((QData)((IData)(
                                                     __Vtemp_31[
                                                     (((IData)(0x0000003fU) 
                                                       + 
                                                       (0x000007ffU 
                                                        & VL_SHIFTL_III(11,11,32, 
                                                                        (0x0000001fU 
                                                                         & ((IData)(0x11U) 
                                                                            - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U))) 
                                                      >> 5U)])) 
                                     << ((0U == (0x0000001fU 
                                                 & VL_SHIFTL_III(11,11,32, 
                                                                 (0x0000001fU 
                                                                  & ((IData)(0x11U) 
                                                                     - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U)))
                                          ? 0x00000020U
                                          : ((IData)(0x00000040U) 
                                             - (0x0000001fU 
                                                & VL_SHIFTL_III(11,11,32, 
                                                                (0x0000001fU 
                                                                 & ((IData)(0x11U) 
                                                                    - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U))))) 
                                    | (((0U == (0x0000001fU 
                                                & VL_SHIFTL_III(11,11,32, 
                                                                (0x0000001fU 
                                                                 & ((IData)(0x11U) 
                                                                    - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U)))
                                         ? 0ULL : ((QData)((IData)(
                                                                   __Vtemp_31[
                                                                   (((IData)(0x0000001fU) 
                                                                     + 
                                                                     (0x000007ffU 
                                                                      & VL_SHIFTL_III(11,11,32, 
                                                                                (0x0000001fU 
                                                                                & ((IData)(0x11U) 
                                                                                - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U))) 
                                                                    >> 5U)])) 
                                                   << 
                                                   ((IData)(0x00000020U) 
                                                    - 
                                                    (0x0000001fU 
                                                     & VL_SHIFTL_III(11,11,32, 
                                                                     (0x0000001fU 
                                                                      & ((IData)(0x11U) 
                                                                         - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U))))) 
                                       | ((QData)((IData)(
                                                          __Vtemp_31[
                                                          (0x0000003fU 
                                                           & (VL_SHIFTL_III(11,11,32, 
                                                                            (0x0000001fU 
                                                                             & ((IData)(0x11U) 
                                                                                - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U) 
                                                              >> 5U))])) 
                                          >> (0x0000001fU 
                                              & VL_SHIFTL_III(11,11,32, 
                                                              (0x0000001fU 
                                                               & ((IData)(0x11U) 
                                                                  - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U)))))
                                 : 0ULL) : (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__id_en) 
                                             & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__valid))
                                             ? ((0x07bfU 
                                                 >= 
                                                 (0x000007ffU 
                                                  & VL_SHIFTL_III(11,11,32, 
                                                                  (0x0000001fU 
                                                                   & ((IData)(3U) 
                                                                      - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U)))
                                                 ? 
                                                (((QData)((IData)(
                                                                  __Vtemp_35[
                                                                  (((IData)(0x0000003fU) 
                                                                    + 
                                                                    (0x000007ffU 
                                                                     & VL_SHIFTL_III(11,11,32, 
                                                                                (0x0000001fU 
                                                                                & ((IData)(3U) 
                                                                                - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U))) 
                                                                   >> 5U)])) 
                                                  << 
                                                  ((0U 
                                                    == 
                                                    (0x0000001fU 
                                                     & VL_SHIFTL_III(11,11,32, 
                                                                     (0x0000001fU 
                                                                      & ((IData)(3U) 
                                                                         - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U)))
                                                    ? 0x00000020U
                                                    : 
                                                   ((IData)(0x00000040U) 
                                                    - 
                                                    (0x0000001fU 
                                                     & VL_SHIFTL_III(11,11,32, 
                                                                     (0x0000001fU 
                                                                      & ((IData)(3U) 
                                                                         - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U))))) 
                                                 | (((0U 
                                                      == 
                                                      (0x0000001fU 
                                                       & VL_SHIFTL_III(11,11,32, 
                                                                       (0x0000001fU 
                                                                        & ((IData)(3U) 
                                                                           - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U)))
                                                      ? 0ULL
                                                      : 
                                                     ((QData)((IData)(
                                                                      __Vtemp_35[
                                                                      (((IData)(0x0000001fU) 
                                                                        + 
                                                                        (0x000007ffU 
                                                                         & VL_SHIFTL_III(11,11,32, 
                                                                                (0x0000001fU 
                                                                                & ((IData)(3U) 
                                                                                - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U))) 
                                                                       >> 5U)])) 
                                                      << 
                                                      ((IData)(0x00000020U) 
                                                       - 
                                                       (0x0000001fU 
                                                        & VL_SHIFTL_III(11,11,32, 
                                                                        (0x0000001fU 
                                                                         & ((IData)(3U) 
                                                                            - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U))))) 
                                                    | ((QData)((IData)(
                                                                       __Vtemp_35[
                                                                       (0x0000003fU 
                                                                        & (VL_SHIFTL_III(11,11,32, 
                                                                                (0x0000001fU 
                                                                                & ((IData)(3U) 
                                                                                - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U) 
                                                                           >> 5U))])) 
                                                       >> 
                                                       (0x0000001fU 
                                                        & VL_SHIFTL_III(11,11,32, 
                                                                        (0x0000001fU 
                                                                         & ((IData)(3U) 
                                                                            - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U)))))
                                                 : 0ULL)
                                             : (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__gen_en) 
                                                 & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__valid))
                                                 ? 
                                                ((0x07bfU 
                                                  >= 
                                                  (0x000007ffU 
                                                   & VL_SHIFTL_III(11,11,32, 
                                                                   (0x0000001fU 
                                                                    & ((IData)(0x0cU) 
                                                                       - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U)))
                                                  ? 
                                                 (((QData)((IData)(
                                                                   __Vtemp_42[
                                                                   (((IData)(0x0000003fU) 
                                                                     + 
                                                                     (0x000007ffU 
                                                                      & VL_SHIFTL_III(11,11,32, 
                                                                                (0x0000001fU 
                                                                                & ((IData)(0x0cU) 
                                                                                - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U))) 
                                                                    >> 5U)])) 
                                                   << 
                                                   ((0U 
                                                     == 
                                                     (0x0000001fU 
                                                      & VL_SHIFTL_III(11,11,32, 
                                                                      (0x0000001fU 
                                                                       & ((IData)(0x0cU) 
                                                                          - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U)))
                                                     ? 0x00000020U
                                                     : 
                                                    ((IData)(0x00000040U) 
                                                     - 
                                                     (0x0000001fU 
                                                      & VL_SHIFTL_III(11,11,32, 
                                                                      (0x0000001fU 
                                                                       & ((IData)(0x0cU) 
                                                                          - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U))))) 
                                                  | (((0U 
                                                       == 
                                                       (0x0000001fU 
                                                        & VL_SHIFTL_III(11,11,32, 
                                                                        (0x0000001fU 
                                                                         & ((IData)(0x0cU) 
                                                                            - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U)))
                                                       ? 0ULL
                                                       : 
                                                      ((QData)((IData)(
                                                                       __Vtemp_42[
                                                                       (((IData)(0x0000001fU) 
                                                                         + 
                                                                         (0x000007ffU 
                                                                          & VL_SHIFTL_III(11,11,32, 
                                                                                (0x0000001fU 
                                                                                & ((IData)(0x0cU) 
                                                                                - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U))) 
                                                                        >> 5U)])) 
                                                       << 
                                                       ((IData)(0x00000020U) 
                                                        - 
                                                        (0x0000001fU 
                                                         & VL_SHIFTL_III(11,11,32, 
                                                                         (0x0000001fU 
                                                                          & ((IData)(0x0cU) 
                                                                             - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U))))) 
                                                     | ((QData)((IData)(
                                                                        __Vtemp_42[
                                                                        (0x0000003fU 
                                                                         & (VL_SHIFTL_III(11,11,32, 
                                                                                (0x0000001fU 
                                                                                & ((IData)(0x0cU) 
                                                                                - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U) 
                                                                            >> 5U))])) 
                                                        >> 
                                                        (0x0000001fU 
                                                         & VL_SHIFTL_III(11,11,32, 
                                                                         (0x0000001fU 
                                                                          & ((IData)(0x0cU) 
                                                                             - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))), 6U)))))
                                                  : 0ULL)
                                                 : 
                                                (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__decoy_entropy)) 
                                                  << 0x00000020U) 
                                                 | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__decoy_entropy))))))) 
                       >> 0x00000020U)) >> 0x00000017U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_i[2U] 
        = ((0x000001ffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_i[2U]) 
           | ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT____Vcellout__u_lc_ctrl__kmac_data_o[0U] 
               << 0x0000000aU) | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__valid) 
                                  << 9U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_i[3U] 
        = (((0x000001ffU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT____Vcellout__u_lc_ctrl__kmac_data_o[0U] 
                            >> 0x00000016U)) | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__valid) 
                                                >> 0x00000017U)) 
           | ((0x00000200U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT____Vcellout__u_lc_ctrl__kmac_data_o[0U] 
                              >> 0x00000016U)) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT____Vcellout__u_lc_ctrl__kmac_data_o[1U] 
                                                  << 0x0000000aU)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_i[4U] 
        = ((0x000001ffU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT____Vcellout__u_lc_ctrl__kmac_data_o[1U] 
                           >> 0x00000016U)) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__gen_rom_scramble_enabled__DOT__u_rom__DOT__rdata_scr) 
                                                << 0x0000001dU) 
                                               | (((0xfffff800U 
                                                    & (0x0001f000U 
                                                       | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__gen_fsm_scramble_enabled__DOT__u_checker_fsm__DOT__u_counter__DOT__last_nontop_q) 
                                                          << 0x0000000bU))) 
                                                   | ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT____Vcellout__u_lc_ctrl__kmac_data_o[1U] 
                                                       >> 0x0000001fU) 
                                                      | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT____Vcellout__u_lc_ctrl__kmac_data_o[2U] 
                                                         << 1U))) 
                                                  << 9U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_i[5U] 
        = (((0x000001ffU & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__gen_rom_scramble_enabled__DOT__u_rom__DOT__rdata_scr) 
                            >> 3U)) | (((0xfffff800U 
                                         & (0x0001f000U 
                                            | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__gen_fsm_scramble_enabled__DOT__u_checker_fsm__DOT__u_counter__DOT__last_nontop_q) 
                                               << 0x0000000bU))) 
                                        | ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT____Vcellout__u_lc_ctrl__kmac_data_o[1U] 
                                            >> 0x0000001fU) 
                                           | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT____Vcellout__u_lc_ctrl__kmac_data_o[2U] 
                                              << 1U))) 
                                       >> 0x00000017U)) 
           | ((0x1ffffe00U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__gen_rom_scramble_enabled__DOT__u_rom__DOT__rdata_scr) 
                              >> 3U)) | ((IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__gen_rom_scramble_enabled__DOT__u_rom__DOT__rdata_scr 
                                                  >> 0x00000020U)) 
                                         << 0x0000001dU)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_i[6U] 
        = ((0x20000000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_i[6U]) 
           | (0x3fffffffU & ((0x000001ffU & ((IData)(
                                                     (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__gen_rom_scramble_enabled__DOT__u_rom__DOT__rdata_scr 
                                                      >> 0x00000020U)) 
                                             >> 3U)) 
                             | (0x1ffffe00U & ((IData)(
                                                       (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__gen_rom_scramble_enabled__DOT__u_rom__DOT__rdata_scr 
                                                        >> 0x00000020U)) 
                                               >> 3U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_i[6U] 
        = ((0x1fffffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_i[6U]) 
           | (0x3fffffffU & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__gen_fsm_scramble_enabled__DOT__u_checker_fsm__DOT__kmac_rom_vld_q) 
                             << 0x0000001dU)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_reqs = 0U;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_h2d605572__0 
        = (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_i[2U] 
                 >> 9U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_reqs 
        = ((6U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_reqs)) 
           | (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_h2d605572__0));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_h2d605572__0 
        = (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_i[4U] 
                 >> 0x00000013U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_reqs 
        = ((5U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_reqs)) 
           | ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_h2d605572__0) 
              << 1U));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_h2d605572__0 
        = (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_i[6U] 
                 >> 0x0000001dU));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_reqs 
        = ((3U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_reqs)) 
           | ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_h2d605572__0) 
              << 2U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__u_appid_arb__DOT__gen_normal_case__DOT__data_tree__BRA__2__KET__ 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_reqs) 
            >> 2U) & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vcellinp__u_appid_arb__data_i
           [2U]);
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__u_appid_arb__DOT__gen_normal_case__DOT__data_tree__BRA__1__KET__ 
        = ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_reqs))
            ? vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vcellinp__u_appid_arb__data_i
           [0U] : vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vcellinp__u_appid_arb__data_i
           [1U]);
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__u_appid_arb__DOT__gen_normal_case__DOT__req_tree__BRA__1__KET__ 
        = (IData)((0U != (3U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_reqs))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__u_appid_arb__DOT__idx_o 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__u_appid_arb__DOT__gen_normal_case__DOT__req_tree__BRA__1__KET__)
            ? ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_reqs))
                ? 0U : 1U) : ((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_reqs))
                               ? 2U : 0U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__u_appid_arb__DOT__valid_o 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__u_appid_arb__DOT__gen_normal_case__DOT__req_tree__BRA__1__KET__) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_reqs) 
              >> 2U));
}
