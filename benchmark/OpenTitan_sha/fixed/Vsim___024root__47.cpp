// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

extern const VlWide<10>/*319:0*/ Vsim__ConstPool__CONST_hc1613866_0;

void Vsim___024root___nba_comb__TOP__70(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__70\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<3>/*95:0*/ __Vtemp_13;
    VlWide<4>/*127:0*/ __Vtemp_14;
    VlWide<3>/*95:0*/ __Vtemp_15;
    VlWide<3>/*95:0*/ __Vtemp_16;
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__g_ispr_rdata_dec__BRA__5__KET____DOT__i_secded_dec__DOT__err_o 
        = ((((~ VL_REDXOR_8(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__g_ispr_rdata_dec__BRA__5__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
             & (0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__g_ispr_rdata_dec__BRA__5__KET____DOT__i_secded_dec__DOT__syndrome_o))) 
            << 1U) | (1U & VL_REDXOR_8(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__g_ispr_rdata_dec__BRA__5__KET____DOT__i_secded_dec__DOT__syndrome_o)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__g_ispr_rdata_dec__BRA__5__KET____DOT__i_secded_dec__DOT__data_o 
        = ((((((((((0x52U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__g_ispr_rdata_dec__BRA__5__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                   ^ (0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__g_in_mux_outer__BRA__226__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o))) 
                  << 3U) | (((0x16U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__g_ispr_rdata_dec__BRA__5__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                             ^ (0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__g_in_mux_outer__BRA__225__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o))) 
                            << 2U)) | ((((0x29U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__g_ispr_rdata_dec__BRA__5__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                         ^ (0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__g_in_mux_outer__BRA__224__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o))) 
                                        << 1U) | ((0x4aU 
                                                   == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__g_ispr_rdata_dec__BRA__5__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                                  ^ 
                                                  (0U 
                                                   != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__g_in_mux_outer__BRA__223__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o))))) 
               << 0x0000000cU) | ((((((0x62U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__g_ispr_rdata_dec__BRA__5__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                      ^ (0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__g_in_mux_outer__BRA__222__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o))) 
                                     << 3U) | (((0x23U 
                                                 == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__g_ispr_rdata_dec__BRA__5__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                                ^ (0U 
                                                   != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__g_in_mux_outer__BRA__221__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o))) 
                                               << 2U)) 
                                   | ((((0x13U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__g_ispr_rdata_dec__BRA__5__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                        ^ (0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__g_in_mux_outer__BRA__220__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o))) 
                                       << 1U) | ((0x2cU 
                                                  == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__g_ispr_rdata_dec__BRA__5__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                                 ^ 
                                                 (0U 
                                                  != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__g_in_mux_outer__BRA__219__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o))))) 
                                  << 8U)) | (((((((0x32U 
                                                   == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__g_ispr_rdata_dec__BRA__5__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                                  ^ 
                                                  (0U 
                                                   != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__g_in_mux_outer__BRA__218__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o))) 
                                                 << 3U) 
                                                | (((0x70U 
                                                     == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__g_ispr_rdata_dec__BRA__5__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                                    ^ 
                                                    (0U 
                                                     != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__g_in_mux_outer__BRA__217__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o))) 
                                                   << 2U)) 
                                               | ((((0x0eU 
                                                     == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__g_ispr_rdata_dec__BRA__5__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                                    ^ 
                                                    (0U 
                                                     != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__g_in_mux_outer__BRA__216__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o))) 
                                                   << 1U) 
                                                  | ((0x46U 
                                                      == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__g_ispr_rdata_dec__BRA__5__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                                     ^ 
                                                     (0U 
                                                      != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__g_in_mux_outer__BRA__215__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o))))) 
                                              << 4U) 
                                             | (((((0x26U 
                                                    == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__g_ispr_rdata_dec__BRA__5__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                                   ^ 
                                                   (0U 
                                                    != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__g_in_mux_outer__BRA__214__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o))) 
                                                  << 3U) 
                                                 | (((0x25U 
                                                      == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__g_ispr_rdata_dec__BRA__5__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                                     ^ 
                                                     (0U 
                                                      != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__g_in_mux_outer__BRA__213__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o))) 
                                                    << 2U)) 
                                                | ((((0x0bU 
                                                      == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__g_ispr_rdata_dec__BRA__5__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                                     ^ 
                                                     (0U 
                                                      != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__g_in_mux_outer__BRA__212__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o))) 
                                                    << 1U) 
                                                   | ((0x1cU 
                                                       == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__g_ispr_rdata_dec__BRA__5__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                                      ^ 
                                                      (0U 
                                                       != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__g_in_mux_outer__BRA__211__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o))))))) 
            << 0x00000010U) | ((((((((7U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__g_ispr_rdata_dec__BRA__5__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                     ^ (0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__g_in_mux_outer__BRA__210__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o))) 
                                    << 3U) | (((0x68U 
                                                == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__g_ispr_rdata_dec__BRA__5__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                               ^ (0U 
                                                  != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__g_in_mux_outer__BRA__209__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o))) 
                                              << 2U)) 
                                  | ((((0x31U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__g_ispr_rdata_dec__BRA__5__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                       ^ (0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__g_in_mux_outer__BRA__208__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o))) 
                                      << 1U) | ((0x51U 
                                                 == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__g_ispr_rdata_dec__BRA__5__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                                ^ (0U 
                                                   != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__g_in_mux_outer__BRA__207__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o))))) 
                                 << 0x0000000cU) | 
                                ((((((0x0dU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__g_ispr_rdata_dec__BRA__5__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                     ^ (0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__g_in_mux_outer__BRA__206__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o))) 
                                    << 3U) | (((0x49U 
                                                == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__g_ispr_rdata_dec__BRA__5__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                               ^ (0U 
                                                  != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__g_in_mux_outer__BRA__205__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o))) 
                                              << 2U)) 
                                  | ((((0x38U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__g_ispr_rdata_dec__BRA__5__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                       ^ (0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__g_in_mux_outer__BRA__204__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o))) 
                                      << 1U) | ((0x45U 
                                                 == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__g_ispr_rdata_dec__BRA__5__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                                ^ (0U 
                                                   != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__g_in_mux_outer__BRA__203__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o))))) 
                                 << 8U)) | (((((((0x4cU 
                                                  == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__g_ispr_rdata_dec__BRA__5__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                                 ^ 
                                                 (0U 
                                                  != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__g_in_mux_outer__BRA__202__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o))) 
                                                << 3U) 
                                               | (((0x2aU 
                                                    == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__g_ispr_rdata_dec__BRA__5__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                                   ^ 
                                                   (0U 
                                                    != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__g_in_mux_outer__BRA__201__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o))) 
                                                  << 2U)) 
                                              | ((((0x15U 
                                                    == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__g_ispr_rdata_dec__BRA__5__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                                   ^ 
                                                   (0U 
                                                    != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__g_in_mux_outer__BRA__200__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o))) 
                                                  << 1U) 
                                                 | ((0x1aU 
                                                     == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__g_ispr_rdata_dec__BRA__5__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                                    ^ 
                                                    (0U 
                                                     != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__g_in_mux_outer__BRA__199__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o))))) 
                                             << 4U) 
                                            | (((((0x34U 
                                                   == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__g_ispr_rdata_dec__BRA__5__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                                  ^ 
                                                  (0U 
                                                   != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__g_in_mux_outer__BRA__198__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o))) 
                                                 << 3U) 
                                                | (((0x61U 
                                                     == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__g_ispr_rdata_dec__BRA__5__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                                    ^ 
                                                    (0U 
                                                     != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__g_in_mux_outer__BRA__197__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o))) 
                                                   << 2U)) 
                                               | ((((0x54U 
                                                     == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__g_ispr_rdata_dec__BRA__5__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                                    ^ 
                                                    (0U 
                                                     != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__g_in_mux_outer__BRA__196__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o))) 
                                                   << 1U) 
                                                  | ((0x19U 
                                                      == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__g_ispr_rdata_dec__BRA__5__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                                     ^ 
                                                     (0U 
                                                      != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__g_in_mux_outer__BRA__195__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o))))))));
    vlSelfRef.__VdfgRegularize_he50b618e_0_1014[0U] 
        = vlSelfRef.__VdfgRegularize_he50b618e_0_1013[0U];
    vlSelfRef.__VdfgRegularize_he50b618e_0_1014[1U] 
        = vlSelfRef.__VdfgRegularize_he50b618e_0_1013[1U];
    vlSelfRef.__VdfgRegularize_he50b618e_0_1014[2U] 
        = vlSelfRef.__VdfgRegularize_he50b618e_0_1013[2U];
    vlSelfRef.__VdfgRegularize_he50b618e_0_1014[3U] 
        = vlSelfRef.__VdfgRegularize_he50b618e_0_1013[3U];
    vlSelfRef.__VdfgRegularize_he50b618e_0_1014[4U] 
        = vlSelfRef.__VdfgRegularize_he50b618e_0_1013[4U];
    vlSelfRef.__VdfgRegularize_he50b618e_0_1014[5U] 
        = vlSelfRef.__VdfgRegularize_he50b618e_0_1013[5U];
    vlSelfRef.__VdfgRegularize_he50b618e_0_1014[6U] 
        = vlSelfRef.__VdfgRegularize_he50b618e_0_1013[6U];
    vlSelfRef.__VdfgRegularize_he50b618e_0_1014[7U] 
        = vlSelfRef.__VdfgRegularize_he50b618e_0_1013[7U];
    vlSelfRef.__VdfgRegularize_he50b618e_0_1014[8U] 
        = ((0x0001fc00U & vlSelfRef.__VdfgRegularize_he50b618e_0_1014[8U]) 
           | (0x0001ffffU & vlSelfRef.__VdfgRegularize_he50b618e_0_1013[8U]));
    vlSelfRef.__VdfgRegularize_he50b618e_0_1014[8U] 
        = ((0x000003ffU & vlSelfRef.__VdfgRegularize_he50b618e_0_1014[8U]) 
           | (0x0001fc00U & ((((((0U != (((4U & (VL_REDXOR_32(
                                                              (0x98505586U 
                                                               & vlSelfRef.__VdfgRegularize_he50b618e_0_1024[6U])) 
                                                 << 2U)) 
                                          | ((2U & 
                                              (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[8U] 
                                               >> 0x0000000fU)) 
                                             | (1U 
                                                & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[8U] 
                                                   >> 0x00000010U)))) 
                                         & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__g_in_mux_outer__BRA__0__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in1_i))) 
                                 << 3U) | ((0U != (
                                                   ((4U 
                                                     & ((~ 
                                                         VL_REDXOR_32(
                                                                      (0x2dcc624cU 
                                                                       & vlSelfRef.__VdfgRegularize_he50b618e_0_1024[6U]))) 
                                                        << 2U)) 
                                                    | ((2U 
                                                        & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[8U] 
                                                           >> 0x0000000eU)) 
                                                       | (1U 
                                                          & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[8U] 
                                                             >> 0x0000000fU)))) 
                                                   & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__g_in_mux_outer__BRA__0__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in1_i))) 
                                           << 2U)) 
                               | (((0U != (((4U & (
                                                   VL_REDXOR_32(
                                                                (0xc2c1323bU 
                                                                 & vlSelfRef.__VdfgRegularize_he50b618e_0_1024[6U])) 
                                                   << 2U)) 
                                            | ((2U 
                                                & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[8U] 
                                                   >> 0x0000000dU)) 
                                               | (1U 
                                                  & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[8U] 
                                                     >> 0x0000000eU)))) 
                                           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__g_in_mux_outer__BRA__0__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in1_i))) 
                                   << 1U) | (0U != 
                                             (((4U 
                                                & ((~ 
                                                    VL_REDXOR_32(
                                                                 (0x31234ed1U 
                                                                  & vlSelfRef.__VdfgRegularize_he50b618e_0_1024[6U]))) 
                                                   << 2U)) 
                                               | ((2U 
                                                   & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[8U] 
                                                      >> 0x0000000cU)) 
                                                  | (1U 
                                                     & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[8U] 
                                                        >> 0x0000000dU)))) 
                                              & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__g_in_mux_outer__BRA__0__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in1_i))))) 
                              << 0x0000000dU) | (((0U 
                                                   != 
                                                   (((4U 
                                                      & (VL_REDXOR_32(
                                                                      (0x413d89aaU 
                                                                       & vlSelfRef.__VdfgRegularize_he50b618e_0_1024[6U])) 
                                                         << 2U)) 
                                                     | ((2U 
                                                         & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[8U] 
                                                            >> 0x0000000bU)) 
                                                        | (1U 
                                                           & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[8U] 
                                                              >> 0x0000000cU)))) 
                                                    & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__g_in_mux_outer__BRA__0__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in1_i))) 
                                                  << 0x0000000cU) 
                                                 | (((0U 
                                                      != 
                                                      (((4U 
                                                         & ((~ 
                                                             VL_REDXOR_32(
                                                                          (0xdeba8050U 
                                                                           & vlSelfRef.__VdfgRegularize_he50b618e_0_1024[6U]))) 
                                                            << 2U)) 
                                                        | ((2U 
                                                            & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[8U] 
                                                               >> 0x0000000aU)) 
                                                           | (1U 
                                                              & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[8U] 
                                                                 >> 0x0000000bU)))) 
                                                       & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__g_in_mux_outer__BRA__0__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in1_i))) 
                                                     << 0x0000000bU) 
                                                    | ((0U 
                                                        != 
                                                        (((4U 
                                                           & (VL_REDXOR_32(
                                                                           (0x2606bd25U 
                                                                            & vlSelfRef.__VdfgRegularize_he50b618e_0_1024[6U])) 
                                                              << 2U)) 
                                                          | ((2U 
                                                              & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[8U] 
                                                                 >> 9U)) 
                                                             | (1U 
                                                                & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[8U] 
                                                                   >> 0x0000000aU)))) 
                                                         & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__g_in_mux_outer__BRA__0__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in1_i))) 
                                                       << 0x0000000aU))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__g_ispr_rdata_dec__BRA__6__KET____DOT__i_secded_dec__DOT__syndrome_o 
        = (((((2U & (VL_REDXOR_64((0x0000004098505586ULL 
                                   & (0x0000002a00000000ULL 
                                      ^ (((QData)((IData)(
                                                          vlSelfRef.__VdfgRegularize_he50b618e_0_1014[8U])) 
                                          << 0x00000036U) 
                                         | (((QData)((IData)(
                                                             vlSelfRef.__VdfgRegularize_he50b618e_0_1014[8U])) 
                                             << 0x00000016U) 
                                            | ((QData)((IData)(
                                                               vlSelfRef.__VdfgRegularize_he50b618e_0_1014[7U])) 
                                               >> 0x0000000aU)))))) 
                     << 1U)) | (1U & VL_REDXOR_64((0x000000202dcc624cULL 
                                                   & (0x0000002a00000000ULL 
                                                      ^ 
                                                      (((QData)((IData)(
                                                                        vlSelfRef.__VdfgRegularize_he50b618e_0_1014[8U])) 
                                                        << 0x00000036U) 
                                                       | (((QData)((IData)(
                                                                           vlSelfRef.__VdfgRegularize_he50b618e_0_1014[8U])) 
                                                           << 0x00000016U) 
                                                          | ((QData)((IData)(
                                                                             vlSelfRef.__VdfgRegularize_he50b618e_0_1014[7U])) 
                                                             >> 0x0000000aU)))))))) 
             << 5U) | (((2U & (VL_REDXOR_64((0x00000010c2c1323bULL 
                                             & (0x0000002a00000000ULL 
                                                ^ (
                                                   ((QData)((IData)(
                                                                    vlSelfRef.__VdfgRegularize_he50b618e_0_1014[8U])) 
                                                    << 0x00000036U) 
                                                   | (((QData)((IData)(
                                                                       vlSelfRef.__VdfgRegularize_he50b618e_0_1014[8U])) 
                                                       << 0x00000016U) 
                                                      | ((QData)((IData)(
                                                                         vlSelfRef.__VdfgRegularize_he50b618e_0_1014[7U])) 
                                                         >> 0x0000000aU)))))) 
                               << 1U)) | (1U & VL_REDXOR_64(
                                                            (0x0000000831234ed1ULL 
                                                             & (0x0000002a00000000ULL 
                                                                ^ 
                                                                (((QData)((IData)(
                                                                                vlSelfRef.__VdfgRegularize_he50b618e_0_1014[8U])) 
                                                                  << 0x00000036U) 
                                                                 | (((QData)((IData)(
                                                                                vlSelfRef.__VdfgRegularize_he50b618e_0_1014[8U])) 
                                                                     << 0x00000016U) 
                                                                    | ((QData)((IData)(
                                                                                vlSelfRef.__VdfgRegularize_he50b618e_0_1014[7U])) 
                                                                       >> 0x0000000aU)))))))) 
                       << 3U)) | ((4U & (VL_REDXOR_64(
                                                      (0x00000004413d89aaULL 
                                                       & (0x0000002a00000000ULL 
                                                          ^ 
                                                          (((QData)((IData)(
                                                                            vlSelfRef.__VdfgRegularize_he50b618e_0_1014[8U])) 
                                                            << 0x00000036U) 
                                                           | (((QData)((IData)(
                                                                               vlSelfRef.__VdfgRegularize_he50b618e_0_1014[8U])) 
                                                               << 0x00000016U) 
                                                              | ((QData)((IData)(
                                                                                vlSelfRef.__VdfgRegularize_he50b618e_0_1014[7U])) 
                                                                 >> 0x0000000aU)))))) 
                                         << 2U)) | 
                                  ((2U & (VL_REDXOR_64(
                                                       (0x00000002deba8050ULL 
                                                        & (0x0000002a00000000ULL 
                                                           ^ 
                                                           (((QData)((IData)(
                                                                             vlSelfRef.__VdfgRegularize_he50b618e_0_1014[8U])) 
                                                             << 0x00000036U) 
                                                            | (((QData)((IData)(
                                                                                vlSelfRef.__VdfgRegularize_he50b618e_0_1014[8U])) 
                                                                << 0x00000016U) 
                                                               | ((QData)((IData)(
                                                                                vlSelfRef.__VdfgRegularize_he50b618e_0_1014[7U])) 
                                                                  >> 0x0000000aU)))))) 
                                          << 1U)) | 
                                   (1U & VL_REDXOR_64(
                                                      (0x000000012606bd25ULL 
                                                       & (0x0000002a00000000ULL 
                                                          ^ 
                                                          (((QData)((IData)(
                                                                            vlSelfRef.__VdfgRegularize_he50b618e_0_1014[8U])) 
                                                            << 0x00000036U) 
                                                           | (((QData)((IData)(
                                                                               vlSelfRef.__VdfgRegularize_he50b618e_0_1014[8U])) 
                                                               << 0x00000016U) 
                                                              | ((QData)((IData)(
                                                                                vlSelfRef.__VdfgRegularize_he50b618e_0_1014[7U])) 
                                                                 >> 0x0000000aU))))))))));
    vlSelfRef.__VdfgRegularize_he50b618e_0_1015[0U] 
        = vlSelfRef.__VdfgRegularize_he50b618e_0_1014[0U];
    vlSelfRef.__VdfgRegularize_he50b618e_0_1015[1U] 
        = vlSelfRef.__VdfgRegularize_he50b618e_0_1014[1U];
    vlSelfRef.__VdfgRegularize_he50b618e_0_1015[2U] 
        = vlSelfRef.__VdfgRegularize_he50b618e_0_1014[2U];
    vlSelfRef.__VdfgRegularize_he50b618e_0_1015[3U] 
        = vlSelfRef.__VdfgRegularize_he50b618e_0_1014[3U];
    vlSelfRef.__VdfgRegularize_he50b618e_0_1015[4U] 
        = vlSelfRef.__VdfgRegularize_he50b618e_0_1014[4U];
    vlSelfRef.__VdfgRegularize_he50b618e_0_1015[5U] 
        = vlSelfRef.__VdfgRegularize_he50b618e_0_1014[5U];
    vlSelfRef.__VdfgRegularize_he50b618e_0_1015[6U] 
        = vlSelfRef.__VdfgRegularize_he50b618e_0_1014[6U];
    vlSelfRef.__VdfgRegularize_he50b618e_0_1015[7U] 
        = vlSelfRef.__VdfgRegularize_he50b618e_0_1014[7U];
    vlSelfRef.__VdfgRegularize_he50b618e_0_1015[8U] 
        = ((0xfffe0000U & vlSelfRef.__VdfgRegularize_he50b618e_0_1015[8U]) 
           | vlSelfRef.__VdfgRegularize_he50b618e_0_1014[8U]);
    vlSelfRef.__VdfgRegularize_he50b618e_0_1015[8U] 
        = ((0x0001ffffU & vlSelfRef.__VdfgRegularize_he50b618e_0_1015[8U]) 
           | ((((((((0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__g_in_mux_outer__BRA__287__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o)) 
                    << 3U) | ((0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__g_in_mux_outer__BRA__286__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o)) 
                              << 2U)) | (((0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__g_in_mux_outer__BRA__285__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o)) 
                                          << 1U) | 
                                         (0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__g_in_mux_outer__BRA__284__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o)))) 
                 << 0x0000000bU) | (((((0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__g_in_mux_outer__BRA__283__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o)) 
                                       << 3U) | ((0U 
                                                  != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__g_in_mux_outer__BRA__282__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o)) 
                                                 << 2U)) 
                                     | (((0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__g_in_mux_outer__BRA__281__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o)) 
                                         << 1U) | (0U 
                                                   != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__g_in_mux_outer__BRA__280__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o)))) 
                                    << 7U)) | (((((
                                                   (0U 
                                                    != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__g_in_mux_outer__BRA__279__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o)) 
                                                   << 3U) 
                                                  | ((0U 
                                                      != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__g_in_mux_outer__BRA__278__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o)) 
                                                     << 2U)) 
                                                 | (((0U 
                                                      != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__g_in_mux_outer__BRA__277__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o)) 
                                                     << 1U) 
                                                    | (0U 
                                                       != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__g_in_mux_outer__BRA__276__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o)))) 
                                                << 3U) 
                                               | (((0U 
                                                    != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__g_in_mux_outer__BRA__275__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o)) 
                                                   << 2U) 
                                                  | (((0U 
                                                       != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__g_in_mux_outer__BRA__274__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o)) 
                                                      << 1U) 
                                                     | (0U 
                                                        != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__g_in_mux_outer__BRA__273__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o)))))) 
              << 0x00000011U));
    vlSelfRef.__VdfgRegularize_he50b618e_0_1015[9U] 
        = (0x0001ffffU & (((((((0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__g_in_mux_outer__BRA__304__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o)) 
                               << 4U) | (((0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__g_in_mux_outer__BRA__303__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o)) 
                                          << 3U) | 
                                         ((0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__g_in_mux_outer__BRA__302__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o)) 
                                          << 2U))) 
                             | (((0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__g_in_mux_outer__BRA__301__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o)) 
                                 << 1U) | (0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__g_in_mux_outer__BRA__300__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o)))) 
                            << 0x0000000cU) | (((((0U 
                                                   != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__g_in_mux_outer__BRA__299__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o)) 
                                                  << 3U) 
                                                 | ((0U 
                                                     != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__g_in_mux_outer__BRA__298__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o)) 
                                                    << 2U)) 
                                                | (((0U 
                                                     != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__g_in_mux_outer__BRA__297__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o)) 
                                                    << 1U) 
                                                   | (0U 
                                                      != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__g_in_mux_outer__BRA__296__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o)))) 
                                               << 8U)) 
                          | ((((((0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__g_in_mux_outer__BRA__295__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o)) 
                                 << 3U) | ((0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__g_in_mux_outer__BRA__294__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o)) 
                                           << 2U)) 
                               | (((0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__g_in_mux_outer__BRA__293__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o)) 
                                   << 1U) | (0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__g_in_mux_outer__BRA__292__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o)))) 
                              << 4U) | ((((0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__g_in_mux_outer__BRA__291__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o)) 
                                          << 3U) | 
                                         ((0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__g_in_mux_outer__BRA__290__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o)) 
                                          << 2U)) | 
                                        (((0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__g_in_mux_outer__BRA__289__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o)) 
                                          << 1U) | 
                                         (0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__g_in_mux_outer__BRA__288__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o)))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__g_ispr_rdata_dec__BRA__6__KET____DOT__i_secded_dec__DOT__err_o 
        = ((((~ VL_REDXOR_8(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__g_ispr_rdata_dec__BRA__6__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
             & (0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__g_ispr_rdata_dec__BRA__6__KET____DOT__i_secded_dec__DOT__syndrome_o))) 
            << 1U) | (1U & VL_REDXOR_8(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__g_ispr_rdata_dec__BRA__6__KET____DOT__i_secded_dec__DOT__syndrome_o)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__g_ispr_rdata_dec__BRA__6__KET____DOT__i_secded_dec__DOT__data_o 
        = ((((((((((0x52U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__g_ispr_rdata_dec__BRA__6__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                   ^ (0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__g_in_mux_outer__BRA__265__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o))) 
                  << 3U) | (((0x16U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__g_ispr_rdata_dec__BRA__6__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                             ^ (0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__g_in_mux_outer__BRA__264__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o))) 
                            << 2U)) | ((((0x29U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__g_ispr_rdata_dec__BRA__6__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                         ^ (0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__g_in_mux_outer__BRA__263__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o))) 
                                        << 1U) | ((0x4aU 
                                                   == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__g_ispr_rdata_dec__BRA__6__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                                  ^ 
                                                  (0U 
                                                   != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__g_in_mux_outer__BRA__262__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o))))) 
               << 0x0000000cU) | ((((((0x62U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__g_ispr_rdata_dec__BRA__6__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                      ^ (0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__g_in_mux_outer__BRA__261__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o))) 
                                     << 3U) | (((0x23U 
                                                 == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__g_ispr_rdata_dec__BRA__6__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                                ^ (0U 
                                                   != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__g_in_mux_outer__BRA__260__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o))) 
                                               << 2U)) 
                                   | ((((0x13U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__g_ispr_rdata_dec__BRA__6__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                        ^ (0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__g_in_mux_outer__BRA__259__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o))) 
                                       << 1U) | ((0x2cU 
                                                  == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__g_ispr_rdata_dec__BRA__6__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                                 ^ 
                                                 (0U 
                                                  != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__g_in_mux_outer__BRA__258__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o))))) 
                                  << 8U)) | (((((((0x32U 
                                                   == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__g_ispr_rdata_dec__BRA__6__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                                  ^ 
                                                  (0U 
                                                   != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__g_in_mux_outer__BRA__257__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o))) 
                                                 << 3U) 
                                                | (((0x70U 
                                                     == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__g_ispr_rdata_dec__BRA__6__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                                    ^ 
                                                    (0U 
                                                     != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__g_in_mux_outer__BRA__256__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o))) 
                                                   << 2U)) 
                                               | ((((0x0eU 
                                                     == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__g_ispr_rdata_dec__BRA__6__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                                    ^ 
                                                    (0U 
                                                     != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__g_in_mux_outer__BRA__255__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o))) 
                                                   << 1U) 
                                                  | ((0x46U 
                                                      == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__g_ispr_rdata_dec__BRA__6__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                                     ^ 
                                                     (0U 
                                                      != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__g_in_mux_outer__BRA__254__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o))))) 
                                              << 4U) 
                                             | (((((0x26U 
                                                    == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__g_ispr_rdata_dec__BRA__6__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                                   ^ 
                                                   (0U 
                                                    != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__g_in_mux_outer__BRA__253__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o))) 
                                                  << 3U) 
                                                 | (((0x25U 
                                                      == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__g_ispr_rdata_dec__BRA__6__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                                     ^ 
                                                     (0U 
                                                      != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__g_in_mux_outer__BRA__252__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o))) 
                                                    << 2U)) 
                                                | ((((0x0bU 
                                                      == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__g_ispr_rdata_dec__BRA__6__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                                     ^ 
                                                     (0U 
                                                      != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__g_in_mux_outer__BRA__251__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o))) 
                                                    << 1U) 
                                                   | ((0x1cU 
                                                       == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__g_ispr_rdata_dec__BRA__6__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                                      ^ 
                                                      (0U 
                                                       != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__g_in_mux_outer__BRA__250__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o))))))) 
            << 0x00000010U) | ((((((((7U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__g_ispr_rdata_dec__BRA__6__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                     ^ (0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__g_in_mux_outer__BRA__249__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o))) 
                                    << 3U) | (((0x68U 
                                                == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__g_ispr_rdata_dec__BRA__6__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                               ^ (0U 
                                                  != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__g_in_mux_outer__BRA__248__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o))) 
                                              << 2U)) 
                                  | ((((0x31U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__g_ispr_rdata_dec__BRA__6__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                       ^ (0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__g_in_mux_outer__BRA__247__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o))) 
                                      << 1U) | ((0x51U 
                                                 == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__g_ispr_rdata_dec__BRA__6__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                                ^ (0U 
                                                   != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__g_in_mux_outer__BRA__246__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o))))) 
                                 << 0x0000000cU) | 
                                ((((((0x0dU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__g_ispr_rdata_dec__BRA__6__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                     ^ (0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__g_in_mux_outer__BRA__245__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o))) 
                                    << 3U) | (((0x49U 
                                                == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__g_ispr_rdata_dec__BRA__6__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                               ^ (0U 
                                                  != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__g_in_mux_outer__BRA__244__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o))) 
                                              << 2U)) 
                                  | ((((0x38U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__g_ispr_rdata_dec__BRA__6__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                       ^ (0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__g_in_mux_outer__BRA__243__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o))) 
                                      << 1U) | ((0x45U 
                                                 == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__g_ispr_rdata_dec__BRA__6__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                                ^ (0U 
                                                   != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__g_in_mux_outer__BRA__242__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o))))) 
                                 << 8U)) | (((((((0x4cU 
                                                  == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__g_ispr_rdata_dec__BRA__6__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                                 ^ 
                                                 (0U 
                                                  != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__g_in_mux_outer__BRA__241__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o))) 
                                                << 3U) 
                                               | (((0x2aU 
                                                    == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__g_ispr_rdata_dec__BRA__6__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                                   ^ 
                                                   (0U 
                                                    != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__g_in_mux_outer__BRA__240__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o))) 
                                                  << 2U)) 
                                              | ((((0x15U 
                                                    == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__g_ispr_rdata_dec__BRA__6__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                                   ^ 
                                                   (0U 
                                                    != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__g_in_mux_outer__BRA__239__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o))) 
                                                  << 1U) 
                                                 | ((0x1aU 
                                                     == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__g_ispr_rdata_dec__BRA__6__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                                    ^ 
                                                    (0U 
                                                     != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__g_in_mux_outer__BRA__238__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o))))) 
                                             << 4U) 
                                            | (((((0x34U 
                                                   == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__g_ispr_rdata_dec__BRA__6__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                                  ^ 
                                                  (0U 
                                                   != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__g_in_mux_outer__BRA__237__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o))) 
                                                 << 3U) 
                                                | (((0x61U 
                                                     == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__g_ispr_rdata_dec__BRA__6__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                                    ^ 
                                                    (0U 
                                                     != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__g_in_mux_outer__BRA__236__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o))) 
                                                   << 2U)) 
                                               | ((((0x54U 
                                                     == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__g_ispr_rdata_dec__BRA__6__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                                    ^ 
                                                    (0U 
                                                     != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__g_in_mux_outer__BRA__235__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o))) 
                                                   << 1U) 
                                                  | ((0x19U 
                                                      == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__g_ispr_rdata_dec__BRA__6__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                                     ^ 
                                                     (0U 
                                                      != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__g_in_mux_outer__BRA__234__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o))))))));
    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_decoder__DOT__ispr_rs_insn) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__wsr_wdata[0U] 
            = (vlSelfRef.__VdfgRegularize_he50b618e_0_1002 
               | vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_adder_y_op_a_blanked__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[0U]);
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__wsr_wdata[1U] 
            = (((vlSelfRef.__VdfgRegularize_he50b618e_0_1003[2U] 
                 << 0x00000019U) | (vlSelfRef.__VdfgRegularize_he50b618e_0_1003[1U] 
                                    >> 7U)) | vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_adder_y_op_a_blanked__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[1U]);
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__wsr_wdata[2U] 
            = (((vlSelfRef.__VdfgRegularize_he50b618e_0_1005[3U] 
                 << 0x00000012U) | (vlSelfRef.__VdfgRegularize_he50b618e_0_1005[2U] 
                                    >> 0x0000000eU)) 
               | vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_adder_y_op_a_blanked__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[2U]);
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__wsr_wdata[3U] 
            = (((vlSelfRef.__VdfgRegularize_he50b618e_0_1007[4U] 
                 << 0x0000000bU) | (vlSelfRef.__VdfgRegularize_he50b618e_0_1007[3U] 
                                    >> 0x00000015U)) 
               | vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_adder_y_op_a_blanked__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[3U]);
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__wsr_wdata[4U] 
            = (((vlSelfRef.__VdfgRegularize_he50b618e_0_1009[5U] 
                 << 4U) | (vlSelfRef.__VdfgRegularize_he50b618e_0_1009[4U] 
                           >> 0x0000001cU)) | vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_adder_y_op_a_blanked__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[4U]);
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__wsr_wdata[5U] 
            = (((vlSelfRef.__VdfgRegularize_he50b618e_0_1011[7U] 
                 << 0x0000001dU) | (vlSelfRef.__VdfgRegularize_he50b618e_0_1011[6U] 
                                    >> 3U)) | vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_adder_y_op_a_blanked__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[5U]);
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__wsr_wdata[6U] 
            = ((IData)((((QData)((IData)(((vlSelfRef.__VdfgRegularize_he50b618e_0_1015[9U] 
                                           << 0x0000000fU) 
                                          | (vlSelfRef.__VdfgRegularize_he50b618e_0_1015[8U] 
                                             >> 0x00000011U)))) 
                         << 0x00000020U) | (QData)((IData)(
                                                           ((vlSelfRef.__VdfgRegularize_he50b618e_0_1013[8U] 
                                                             << 0x00000016U) 
                                                            | (vlSelfRef.__VdfgRegularize_he50b618e_0_1013[7U] 
                                                               >> 0x0000000aU)))))) 
               | vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_adder_y_op_a_blanked__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[6U]);
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__wsr_wdata[7U] 
            = ((IData)(((((QData)((IData)(((vlSelfRef.__VdfgRegularize_he50b618e_0_1015[9U] 
                                            << 0x0000000fU) 
                                           | (vlSelfRef.__VdfgRegularize_he50b618e_0_1015[8U] 
                                              >> 0x00000011U)))) 
                          << 0x00000020U) | (QData)((IData)(
                                                            ((vlSelfRef.__VdfgRegularize_he50b618e_0_1013[8U] 
                                                              << 0x00000016U) 
                                                             | (vlSelfRef.__VdfgRegularize_he50b618e_0_1013[7U] 
                                                                >> 0x0000000aU))))) 
                        >> 0x00000020U)) | vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_adder_y_op_a_blanked__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[7U]);
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__wsr_wdata[0U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_adder_y_op_a_blanked__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[0U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__wsr_wdata[1U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_adder_y_op_a_blanked__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[1U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__wsr_wdata[2U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_adder_y_op_a_blanked__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[2U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__wsr_wdata[3U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_adder_y_op_a_blanked__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[3U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__wsr_wdata[4U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_adder_y_op_a_blanked__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[4U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__wsr_wdata[5U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_adder_y_op_a_blanked__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[5U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__wsr_wdata[6U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_adder_y_op_a_blanked__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[6U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__wsr_wdata[7U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_adder_y_op_a_blanked__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[7U];
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__out_o[0U] 
        = vlSelfRef.__VdfgRegularize_he50b618e_0_1015[0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__out_o[1U] 
        = vlSelfRef.__VdfgRegularize_he50b618e_0_1015[1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__out_o[2U] 
        = vlSelfRef.__VdfgRegularize_he50b618e_0_1015[2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__out_o[3U] 
        = vlSelfRef.__VdfgRegularize_he50b618e_0_1015[3U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__out_o[4U] 
        = vlSelfRef.__VdfgRegularize_he50b618e_0_1015[4U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__out_o[5U] 
        = vlSelfRef.__VdfgRegularize_he50b618e_0_1015[5U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__out_o[6U] 
        = vlSelfRef.__VdfgRegularize_he50b618e_0_1015[6U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__out_o[7U] 
        = vlSelfRef.__VdfgRegularize_he50b618e_0_1015[7U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__out_o[8U] 
        = vlSelfRef.__VdfgRegularize_he50b618e_0_1015[8U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__out_o[9U] 
        = ((0x00fe0000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__out_o[9U]) 
           | (0x00ffffffU & vlSelfRef.__VdfgRegularize_he50b618e_0_1015[9U]));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__out_o[9U] 
        = ((0x0001ffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__out_o[9U]) 
           | (0x00fe0000U & ((((((0U != (((4U & (VL_REDXOR_32(
                                                              (0x98505586U 
                                                               & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__out_o[7U])) 
                                                 << 2U)) 
                                          | ((2U & 
                                              (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[9U] 
                                               >> 0x00000016U)) 
                                             | (1U 
                                                & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[9U] 
                                                   >> 0x00000017U)))) 
                                         & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__g_in_mux_outer__BRA__0__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in1_i))) 
                                 << 3U) | ((0U != (
                                                   ((4U 
                                                     & ((~ 
                                                         VL_REDXOR_32(
                                                                      (0x2dcc624cU 
                                                                       & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__out_o[7U]))) 
                                                        << 2U)) 
                                                    | ((2U 
                                                        & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[9U] 
                                                           >> 0x00000015U)) 
                                                       | (1U 
                                                          & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[9U] 
                                                             >> 0x00000016U)))) 
                                                   & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__g_in_mux_outer__BRA__0__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in1_i))) 
                                           << 2U)) 
                               | (((0U != (((4U & (
                                                   VL_REDXOR_32(
                                                                (0xc2c1323bU 
                                                                 & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__out_o[7U])) 
                                                   << 2U)) 
                                            | ((2U 
                                                & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[9U] 
                                                   >> 0x00000014U)) 
                                               | (1U 
                                                  & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[9U] 
                                                     >> 0x00000015U)))) 
                                           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__g_in_mux_outer__BRA__0__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in1_i))) 
                                   << 1U) | (0U != 
                                             (((4U 
                                                & ((~ 
                                                    VL_REDXOR_32(
                                                                 (0x31234ed1U 
                                                                  & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__out_o[7U]))) 
                                                   << 2U)) 
                                               | ((2U 
                                                   & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[9U] 
                                                      >> 0x00000013U)) 
                                                  | (1U 
                                                     & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[9U] 
                                                        >> 0x00000014U)))) 
                                              & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__g_in_mux_outer__BRA__0__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in1_i))))) 
                              << 0x00000014U) | (((0U 
                                                   != 
                                                   (((4U 
                                                      & (VL_REDXOR_32(
                                                                      (0x413d89aaU 
                                                                       & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__out_o[7U])) 
                                                         << 2U)) 
                                                     | ((2U 
                                                         & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[9U] 
                                                            >> 0x00000012U)) 
                                                        | (1U 
                                                           & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[9U] 
                                                              >> 0x00000013U)))) 
                                                    & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__g_in_mux_outer__BRA__0__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in1_i))) 
                                                  << 0x00000013U) 
                                                 | (((0U 
                                                      != 
                                                      (((4U 
                                                         & ((~ 
                                                             VL_REDXOR_32(
                                                                          (0xdeba8050U 
                                                                           & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__out_o[7U]))) 
                                                            << 2U)) 
                                                        | ((2U 
                                                            & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[9U] 
                                                               >> 0x00000011U)) 
                                                           | (1U 
                                                              & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[9U] 
                                                                 >> 0x00000012U)))) 
                                                       & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__g_in_mux_outer__BRA__0__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in1_i))) 
                                                     << 0x00000012U) 
                                                    | ((0U 
                                                        != 
                                                        (((4U 
                                                           & (VL_REDXOR_32(
                                                                           (0x2606bd25U 
                                                                            & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_no_intg_mux__DOT__out_o[7U])) 
                                                              << 2U)) 
                                                          | ((2U 
                                                              & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_mac_bignum__DOT__acc_intg_q[9U] 
                                                                 >> 0x00000010U)) 
                                                             | (1U 
                                                                & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__mod_intg_q[9U] 
                                                                   >> 0x00000011U)))) 
                                                         & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__g_in_mux_outer__BRA__0__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in1_i))) 
                                                       << 0x00000011U))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_acc_bignum_wdata_intg_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__wsr_wdata[0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_acc_bignum_wdata_intg_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[1U] 
        = ((0xffffff80U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_acc_bignum_wdata_intg_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[1U]) 
           | (((((2U & (VL_REDXOR_32((0x98505586U & 
                                      vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__wsr_wdata[0U])) 
                        << 1U)) | (1U & (~ VL_REDXOR_32(
                                                        (0x2dcc624cU 
                                                         & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__wsr_wdata[0U]))))) 
                << 5U) | (((2U & (VL_REDXOR_32((0xc2c1323bU 
                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__wsr_wdata[0U])) 
                                  << 1U)) | (1U & (~ 
                                                   VL_REDXOR_32(
                                                                (0x31234ed1U 
                                                                 & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__wsr_wdata[0U]))))) 
                          << 3U)) | ((4U & (VL_REDXOR_32(
                                                         (0x413d89aaU 
                                                          & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__wsr_wdata[0U])) 
                                            << 2U)) 
                                     | ((2U & ((~ VL_REDXOR_32(
                                                               (0xdeba8050U 
                                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__wsr_wdata[0U]))) 
                                               << 1U)) 
                                        | (1U & VL_REDXOR_32(
                                                             (0x2606bd25U 
                                                              & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__wsr_wdata[0U])))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_acc_bignum_wdata_intg_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[1U] 
        = ((0x0000007fU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_acc_bignum_wdata_intg_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[1U]) 
           | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__wsr_wdata[1U] 
              << 7U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_acc_bignum_wdata_intg_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[2U] 
        = ((0xffffff80U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_acc_bignum_wdata_intg_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[2U]) 
           | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__wsr_wdata[1U] 
              >> 0x00000019U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_acc_bignum_wdata_intg_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[2U] 
        = ((0xffffff7fU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_acc_bignum_wdata_intg_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[2U]) 
           | (0x00000080U & (VL_REDXOR_32((0x2606bd25U 
                                           & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__wsr_wdata[1U])) 
                             << 7U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_acc_bignum_wdata_intg_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[2U] 
        = ((0xffffc0ffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_acc_bignum_wdata_intg_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[2U]) 
           | (0xffffff00U & ((((4U & (VL_REDXOR_32(
                                                   (0x98505586U 
                                                    & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__wsr_wdata[1U])) 
                                      << 2U)) | ((2U 
                                                  & ((~ 
                                                      VL_REDXOR_32(
                                                                   (0x2dcc624cU 
                                                                    & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__wsr_wdata[1U]))) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & VL_REDXOR_32(
                                                                   (0xc2c1323bU 
                                                                    & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__wsr_wdata[1U]))))) 
                              << 0x0000000bU) | (((4U 
                                                   & ((~ 
                                                       VL_REDXOR_32(
                                                                    (0x31234ed1U 
                                                                     & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__wsr_wdata[1U]))) 
                                                      << 2U)) 
                                                  | ((2U 
                                                      & (VL_REDXOR_32(
                                                                      (0x413d89aaU 
                                                                       & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__wsr_wdata[1U])) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & (~ 
                                                           VL_REDXOR_32(
                                                                        (0xdeba8050U 
                                                                         & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__wsr_wdata[1U])))))) 
                                                 << 8U))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_acc_bignum_wdata_intg_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[2U] 
        = ((0x00003fffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_acc_bignum_wdata_intg_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[2U]) 
           | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__wsr_wdata[2U] 
              << 0x0000000eU));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_acc_bignum_wdata_intg_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[3U] 
        = ((0xffffc000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_acc_bignum_wdata_intg_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[3U]) 
           | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__wsr_wdata[2U] 
              >> 0x00000012U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_acc_bignum_wdata_intg_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[3U] 
        = ((0xffff3fffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_acc_bignum_wdata_intg_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[3U]) 
           | (((2U & ((~ VL_REDXOR_32((0xdeba8050U 
                                       & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__wsr_wdata[2U]))) 
                      << 1U)) | (1U & VL_REDXOR_32(
                                                   (0x2606bd25U 
                                                    & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__wsr_wdata[2U])))) 
              << 0x0000000eU));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_acc_bignum_wdata_intg_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[3U] 
        = ((0xffe0ffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_acc_bignum_wdata_intg_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[3U]) 
           | (0xffff0000U & ((((4U & (VL_REDXOR_32(
                                                   (0x98505586U 
                                                    & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__wsr_wdata[2U])) 
                                      << 2U)) | ((2U 
                                                  & ((~ 
                                                      VL_REDXOR_32(
                                                                   (0x2dcc624cU 
                                                                    & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__wsr_wdata[2U]))) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & VL_REDXOR_32(
                                                                   (0xc2c1323bU 
                                                                    & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__wsr_wdata[2U]))))) 
                              << 0x00000012U) | (((2U 
                                                   & ((~ 
                                                       VL_REDXOR_32(
                                                                    (0x31234ed1U 
                                                                     & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__wsr_wdata[2U]))) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & VL_REDXOR_32(
                                                                    (0x413d89aaU 
                                                                     & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__wsr_wdata[2U])))) 
                                                 << 0x00000010U))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_acc_bignum_wdata_intg_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[3U] 
        = ((0x001fffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_acc_bignum_wdata_intg_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[3U]) 
           | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__wsr_wdata[3U] 
              << 0x00000015U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_acc_bignum_wdata_intg_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[4U] 
        = ((0xffe00000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_acc_bignum_wdata_intg_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[4U]) 
           | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__wsr_wdata[3U] 
              >> 0x0000000bU));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_acc_bignum_wdata_intg_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[4U] 
        = ((0xff1fffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_acc_bignum_wdata_intg_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[4U]) 
           | (((4U & (VL_REDXOR_32((0x413d89aaU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__wsr_wdata[3U])) 
                      << 2U)) | ((2U & ((~ VL_REDXOR_32(
                                                        (0xdeba8050U 
                                                         & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__wsr_wdata[3U]))) 
                                        << 1U)) | (1U 
                                                   & VL_REDXOR_32(
                                                                  (0x2606bd25U 
                                                                   & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__wsr_wdata[3U]))))) 
              << 0x00000015U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_acc_bignum_wdata_intg_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[4U] 
        = ((0xf0ffffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_acc_bignum_wdata_intg_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[4U]) 
           | (0xff000000U & ((((2U & (VL_REDXOR_32(
                                                   (0x98505586U 
                                                    & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__wsr_wdata[3U])) 
                                      << 1U)) | (1U 
                                                 & (~ 
                                                    VL_REDXOR_32(
                                                                 (0x2dcc624cU 
                                                                  & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__wsr_wdata[3U]))))) 
                              << 0x0000001aU) | (((2U 
                                                   & (VL_REDXOR_32(
                                                                   (0xc2c1323bU 
                                                                    & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__wsr_wdata[3U])) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & (~ 
                                                        VL_REDXOR_32(
                                                                     (0x31234ed1U 
                                                                      & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__wsr_wdata[3U]))))) 
                                                 << 0x00000018U))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_acc_bignum_wdata_intg_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[4U] 
        = ((0x0fffffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_acc_bignum_wdata_intg_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[4U]) 
           | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__wsr_wdata[4U] 
              << 0x0000001cU));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_acc_bignum_wdata_intg_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[5U] 
        = ((0xf0000000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_acc_bignum_wdata_intg_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[5U]) 
           | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__wsr_wdata[4U] 
              >> 4U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_acc_bignum_wdata_intg_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[5U] 
        = ((0x0fffffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_acc_bignum_wdata_intg_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[5U]) 
           | (0xf0000000U & ((((2U & ((~ VL_REDXOR_32(
                                                      (0x31234ed1U 
                                                       & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__wsr_wdata[4U]))) 
                                      << 1U)) | (1U 
                                                 & VL_REDXOR_32(
                                                                (0x413d89aaU 
                                                                 & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__wsr_wdata[4U])))) 
                              << 0x0000001eU) | (((2U 
                                                   & ((~ 
                                                       VL_REDXOR_32(
                                                                    (0xdeba8050U 
                                                                     & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__wsr_wdata[4U]))) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & VL_REDXOR_32(
                                                                    (0x2606bd25U 
                                                                     & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__wsr_wdata[4U])))) 
                                                 << 0x0000001cU))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_acc_bignum_wdata_intg_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[6U] 
        = ((0xfffffff8U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_acc_bignum_wdata_intg_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[6U]) 
           | ((4U & (VL_REDXOR_32((0x98505586U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__wsr_wdata[4U])) 
                     << 2U)) | ((2U & ((~ VL_REDXOR_32(
                                                       (0x2dcc624cU 
                                                        & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__wsr_wdata[4U]))) 
                                       << 1U)) | (1U 
                                                  & VL_REDXOR_32(
                                                                 (0xc2c1323bU 
                                                                  & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__wsr_wdata[4U]))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_acc_bignum_wdata_intg_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[6U] 
        = ((7U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_acc_bignum_wdata_intg_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[6U]) 
           | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__wsr_wdata[5U] 
              << 3U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_acc_bignum_wdata_intg_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[7U] 
        = ((0xfffffff8U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_acc_bignum_wdata_intg_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[7U]) 
           | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__wsr_wdata[5U] 
              >> 0x0000001dU));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_acc_bignum_wdata_intg_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[7U] 
        = ((0xffffffe7U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_acc_bignum_wdata_intg_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[7U]) 
           | (((2U & ((~ VL_REDXOR_32((0xdeba8050U 
                                       & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__wsr_wdata[5U]))) 
                      << 1U)) | (1U & VL_REDXOR_32(
                                                   (0x2606bd25U 
                                                    & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__wsr_wdata[5U])))) 
              << 3U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_acc_bignum_wdata_intg_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[7U] 
        = ((0xfffffc1fU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_acc_bignum_wdata_intg_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[7U]) 
           | (0xffffffe0U & ((((4U & (VL_REDXOR_32(
                                                   (0x98505586U 
                                                    & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__wsr_wdata[5U])) 
                                      << 2U)) | ((2U 
                                                  & ((~ 
                                                      VL_REDXOR_32(
                                                                   (0x2dcc624cU 
                                                                    & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__wsr_wdata[5U]))) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & VL_REDXOR_32(
                                                                   (0xc2c1323bU 
                                                                    & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__wsr_wdata[5U]))))) 
                              << 7U) | (((2U & ((~ 
                                                 VL_REDXOR_32(
                                                              (0x31234ed1U 
                                                               & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__wsr_wdata[5U]))) 
                                                << 1U)) 
                                         | (1U & VL_REDXOR_32(
                                                              (0x413d89aaU 
                                                               & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__wsr_wdata[5U])))) 
                                        << 5U))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_acc_bignum_wdata_intg_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[7U] 
        = ((0x000003ffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_acc_bignum_wdata_intg_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[7U]) 
           | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__wsr_wdata[6U] 
              << 0x0000000aU));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_acc_bignum_wdata_intg_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[8U] 
        = ((0xfffffc00U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_acc_bignum_wdata_intg_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[8U]) 
           | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__wsr_wdata[6U] 
              >> 0x00000016U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_acc_bignum_wdata_intg_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[8U] 
        = ((0xfffe03ffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_acc_bignum_wdata_intg_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[8U]) 
           | ((((((2U & (VL_REDXOR_32((0x98505586U 
                                       & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__wsr_wdata[6U])) 
                         << 1U)) | (1U & (~ VL_REDXOR_32(
                                                         (0x2dcc624cU 
                                                          & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__wsr_wdata[6U]))))) 
                 << 5U) | (((2U & (VL_REDXOR_32((0xc2c1323bU 
                                                 & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__wsr_wdata[6U])) 
                                   << 1U)) | (1U & 
                                              (~ VL_REDXOR_32(
                                                              (0x31234ed1U 
                                                               & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__wsr_wdata[6U]))))) 
                           << 3U)) | ((4U & (VL_REDXOR_32(
                                                          (0x413d89aaU 
                                                           & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__wsr_wdata[6U])) 
                                             << 2U)) 
                                      | ((2U & ((~ 
                                                 VL_REDXOR_32(
                                                              (0xdeba8050U 
                                                               & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__wsr_wdata[6U]))) 
                                                << 1U)) 
                                         | (1U & VL_REDXOR_32(
                                                              (0x2606bd25U 
                                                               & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__wsr_wdata[6U])))))) 
              << 0x0000000aU));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_acc_bignum_wdata_intg_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[8U] 
        = ((0x0001ffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_acc_bignum_wdata_intg_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[8U]) 
           | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__wsr_wdata[7U] 
              << 0x00000011U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_acc_bignum_wdata_intg_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[9U] 
        = ((0x00fe0000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_acc_bignum_wdata_intg_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[9U]) 
           | (0x00ffffffU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__wsr_wdata[7U] 
                             >> 0x0000000fU)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_acc_bignum_wdata_intg_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[9U] 
        = ((0x0001ffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_acc_bignum_wdata_intg_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[9U]) 
           | (0x00ffffffU & ((((((2U & (VL_REDXOR_32(
                                                     (0x98505586U 
                                                      & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__wsr_wdata[7U])) 
                                        << 1U)) | (1U 
                                                   & (~ 
                                                      VL_REDXOR_32(
                                                                   (0x2dcc624cU 
                                                                    & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__wsr_wdata[7U]))))) 
                                << 5U) | (((2U & (VL_REDXOR_32(
                                                               (0xc2c1323bU 
                                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__wsr_wdata[7U])) 
                                                  << 1U)) 
                                           | (1U & 
                                              (~ VL_REDXOR_32(
                                                              (0x31234ed1U 
                                                               & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__wsr_wdata[7U]))))) 
                                          << 3U)) | 
                              ((4U & (VL_REDXOR_32(
                                                   (0x413d89aaU 
                                                    & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__wsr_wdata[7U])) 
                                      << 2U)) | ((2U 
                                                  & ((~ 
                                                      VL_REDXOR_32(
                                                                   (0xdeba8050U 
                                                                    & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__wsr_wdata[7U]))) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & VL_REDXOR_32(
                                                                   (0x2606bd25U 
                                                                    & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__wsr_wdata[7U])))))) 
                             << 0x00000011U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__g_ispr_rdata_dec__BRA__7__KET____DOT__i_secded_dec__DOT__syndrome_o 
        = (((((2U & (VL_REDXOR_64((0x0000004098505586ULL 
                                   & (0x0000002a00000000ULL 
                                      ^ (((QData)((IData)(
                                                          vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__out_o[9U])) 
                                          << 0x0000002fU) 
                                         | (((QData)((IData)(
                                                             vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__out_o[9U])) 
                                             << 0x0000000fU) 
                                            | ((QData)((IData)(
                                                               vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__out_o[8U])) 
                                               >> 0x00000011U)))))) 
                     << 1U)) | (1U & VL_REDXOR_64((0x000000202dcc624cULL 
                                                   & (0x0000002a00000000ULL 
                                                      ^ 
                                                      (((QData)((IData)(
                                                                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__out_o[9U])) 
                                                        << 0x0000002fU) 
                                                       | (((QData)((IData)(
                                                                           vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__out_o[9U])) 
                                                           << 0x0000000fU) 
                                                          | ((QData)((IData)(
                                                                             vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__out_o[8U])) 
                                                             >> 0x00000011U)))))))) 
             << 5U) | (((2U & (VL_REDXOR_64((0x00000010c2c1323bULL 
                                             & (0x0000002a00000000ULL 
                                                ^ (
                                                   ((QData)((IData)(
                                                                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__out_o[9U])) 
                                                    << 0x0000002fU) 
                                                   | (((QData)((IData)(
                                                                       vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__out_o[9U])) 
                                                       << 0x0000000fU) 
                                                      | ((QData)((IData)(
                                                                         vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__out_o[8U])) 
                                                         >> 0x00000011U)))))) 
                               << 1U)) | (1U & VL_REDXOR_64(
                                                            (0x0000000831234ed1ULL 
                                                             & (0x0000002a00000000ULL 
                                                                ^ 
                                                                (((QData)((IData)(
                                                                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__out_o[9U])) 
                                                                  << 0x0000002fU) 
                                                                 | (((QData)((IData)(
                                                                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__out_o[9U])) 
                                                                     << 0x0000000fU) 
                                                                    | ((QData)((IData)(
                                                                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__out_o[8U])) 
                                                                       >> 0x00000011U)))))))) 
                       << 3U)) | ((4U & (VL_REDXOR_64(
                                                      (0x00000004413d89aaULL 
                                                       & (0x0000002a00000000ULL 
                                                          ^ 
                                                          (((QData)((IData)(
                                                                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__out_o[9U])) 
                                                            << 0x0000002fU) 
                                                           | (((QData)((IData)(
                                                                               vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__out_o[9U])) 
                                                               << 0x0000000fU) 
                                                              | ((QData)((IData)(
                                                                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__out_o[8U])) 
                                                                 >> 0x00000011U)))))) 
                                         << 2U)) | 
                                  ((2U & (VL_REDXOR_64(
                                                       (0x00000002deba8050ULL 
                                                        & (0x0000002a00000000ULL 
                                                           ^ 
                                                           (((QData)((IData)(
                                                                             vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__out_o[9U])) 
                                                             << 0x0000002fU) 
                                                            | (((QData)((IData)(
                                                                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__out_o[9U])) 
                                                                << 0x0000000fU) 
                                                               | ((QData)((IData)(
                                                                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__out_o[8U])) 
                                                                  >> 0x00000011U)))))) 
                                          << 1U)) | 
                                   (1U & VL_REDXOR_64(
                                                      (0x000000012606bd25ULL 
                                                       & (0x0000002a00000000ULL 
                                                          ^ 
                                                          (((QData)((IData)(
                                                                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__out_o[9U])) 
                                                            << 0x0000002fU) 
                                                           | (((QData)((IData)(
                                                                               vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__out_o[9U])) 
                                                               << 0x0000000fU) 
                                                              | ((QData)((IData)(
                                                                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__out_o[8U])) 
                                                                 >> 0x00000011U))))))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[0U] 
        = Vsim__ConstPool__CONST_hc1613866_0[0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[1U] 
        = Vsim__ConstPool__CONST_hc1613866_0[1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[2U] 
        = Vsim__ConstPool__CONST_hc1613866_0[2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[3U] 
        = Vsim__ConstPool__CONST_hc1613866_0[3U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[4U] 
        = Vsim__ConstPool__CONST_hc1613866_0[4U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[5U] 
        = Vsim__ConstPool__CONST_hc1613866_0[5U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[6U] 
        = Vsim__ConstPool__CONST_hc1613866_0[6U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[7U] 
        = Vsim__ConstPool__CONST_hc1613866_0[7U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[8U] 
        = Vsim__ConstPool__CONST_hc1613866_0[8U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[9U] 
        = Vsim__ConstPool__CONST_hc1613866_0[9U];
    if ((0x00000020U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__insn_dec_bignum_i[0U])) {
        if ((0x00000010U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__insn_dec_bignum_i[0U])) {
            if ((1U & (~ (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__insn_dec_bignum_i[0U] 
                          >> 3U)))) {
                if ((1U & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ctrl_flow_predec_flop__q_o)) 
                           | (0U != ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_flag_mux__DOT__g_in_mux_outer__BRA__0__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i) 
                                     & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_alu_predec_bignum_flop__q_o 
                                                >> 0x0000000aU))))))) {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[0U] 
                        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.out_o[0U];
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[1U] 
                        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.out_o[1U];
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[2U] 
                        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.out_o[2U];
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[3U] 
                        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.out_o[3U];
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[4U] 
                        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.out_o[4U];
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[5U] 
                        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.out_o[5U];
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[6U] 
                        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.out_o[6U];
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[7U] 
                        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.out_o[7U];
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[8U] 
                        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.out_o[8U];
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[9U] 
                        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__u_rd_mux_a.out_o[9U];
                } else {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[0U] 
                        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_rf_bignum_rd_data_b_intg_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[0U] 
                           & (- (IData)((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ctrl_flow_predec_flop__q_o)))));
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[1U] 
                        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_rf_bignum_rd_data_b_intg_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[1U] 
                           & (- (IData)((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ctrl_flow_predec_flop__q_o)))));
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[2U] 
                        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_rf_bignum_rd_data_b_intg_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[2U] 
                           & (- (IData)((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ctrl_flow_predec_flop__q_o)))));
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[3U] 
                        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_rf_bignum_rd_data_b_intg_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[3U] 
                           & (- (IData)((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ctrl_flow_predec_flop__q_o)))));
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[4U] 
                        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_rf_bignum_rd_data_b_intg_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[4U] 
                           & (- (IData)((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ctrl_flow_predec_flop__q_o)))));
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[5U] 
                        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_rf_bignum_rd_data_b_intg_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[5U] 
                           & (- (IData)((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ctrl_flow_predec_flop__q_o)))));
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[6U] 
                        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_rf_bignum_rd_data_b_intg_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[6U] 
                           & (- (IData)((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ctrl_flow_predec_flop__q_o)))));
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[7U] 
                        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_rf_bignum_rd_data_b_intg_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[7U] 
                           & (- (IData)((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ctrl_flow_predec_flop__q_o)))));
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[8U] 
                        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_rf_bignum_rd_data_b_intg_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[8U] 
                           & (- (IData)((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ctrl_flow_predec_flop__q_o)))));
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[9U] 
                        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_rf_bignum_rd_data_b_intg_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[9U] 
                           & (- (IData)((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ctrl_flow_predec_flop__q_o)))));
                }
            }
        }
    } else if ((0x00000010U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__insn_dec_bignum_i[0U])) {
        if ((8U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__insn_dec_bignum_i[0U])) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[0U] 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__out_o[0U];
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[1U] 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__out_o[1U];
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[2U] 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__out_o[2U];
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[3U] 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__out_o[3U];
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[4U] 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__out_o[4U];
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[5U] 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__out_o[5U];
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[6U] 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__out_o[6U];
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[7U] 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__out_o[7U];
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[8U] 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__out_o[8U];
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[9U] 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__out_o[9U];
        } else {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[0U] 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__dmem_rdata[0U];
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[1U] 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__dmem_rdata[1U];
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[2U] 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__dmem_rdata[2U];
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[3U] 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__dmem_rdata[3U];
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[4U] 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__dmem_rdata[4U];
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[5U] 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__dmem_rdata[5U];
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[6U] 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__dmem_rdata[6U];
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[7U] 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__dmem_rdata[7U];
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[8U] 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__dmem_rdata[8U];
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[9U] 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__dmem_rdata[9U];
        }
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_mod_bignum_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[0U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_acc_bignum_wdata_intg_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[0U] 
           & (- (IData)((1U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_predec_bignum_flop__q_o))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_mod_bignum_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[1U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_acc_bignum_wdata_intg_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[1U] 
           & (- (IData)((1U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_predec_bignum_flop__q_o))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_mod_bignum_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[2U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_acc_bignum_wdata_intg_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[2U] 
           & (- (IData)((1U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_predec_bignum_flop__q_o))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_mod_bignum_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[3U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_acc_bignum_wdata_intg_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[3U] 
           & (- (IData)((1U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_predec_bignum_flop__q_o))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_mod_bignum_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[4U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_acc_bignum_wdata_intg_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[4U] 
           & (- (IData)((1U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_predec_bignum_flop__q_o))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_mod_bignum_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[5U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_acc_bignum_wdata_intg_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[5U] 
           & (- (IData)((1U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_predec_bignum_flop__q_o))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_mod_bignum_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[6U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_acc_bignum_wdata_intg_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[6U] 
           & (- (IData)((1U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_predec_bignum_flop__q_o))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_mod_bignum_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[7U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_acc_bignum_wdata_intg_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[7U] 
           & (- (IData)((1U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_predec_bignum_flop__q_o))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_mod_bignum_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[8U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_acc_bignum_wdata_intg_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[8U] 
           & (- (IData)((1U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_predec_bignum_flop__q_o))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_mod_bignum_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[9U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_acc_bignum_wdata_intg_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[9U] 
           & (- (IData)((1U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_ispr_predec_bignum_flop__q_o))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__g_ispr_rdata_dec__BRA__7__KET____DOT__i_secded_dec__DOT__err_o 
        = ((((~ VL_REDXOR_8(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__g_ispr_rdata_dec__BRA__7__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
             & (0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__g_ispr_rdata_dec__BRA__7__KET____DOT__i_secded_dec__DOT__syndrome_o))) 
            << 1U) | (1U & VL_REDXOR_8(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__g_ispr_rdata_dec__BRA__7__KET____DOT__i_secded_dec__DOT__syndrome_o)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__g_ispr_rdata_dec__BRA__7__KET____DOT__i_secded_dec__DOT__data_o 
        = ((((((((((0x52U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__g_ispr_rdata_dec__BRA__7__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                   ^ (0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__g_in_mux_outer__BRA__304__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o))) 
                  << 3U) | (((0x16U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__g_ispr_rdata_dec__BRA__7__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                             ^ (0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__g_in_mux_outer__BRA__303__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o))) 
                            << 2U)) | ((((0x29U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__g_ispr_rdata_dec__BRA__7__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                         ^ (0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__g_in_mux_outer__BRA__302__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o))) 
                                        << 1U) | ((0x4aU 
                                                   == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__g_ispr_rdata_dec__BRA__7__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                                  ^ 
                                                  (0U 
                                                   != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__g_in_mux_outer__BRA__301__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o))))) 
               << 0x0000000cU) | ((((((0x62U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__g_ispr_rdata_dec__BRA__7__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                      ^ (0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__g_in_mux_outer__BRA__300__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o))) 
                                     << 3U) | (((0x23U 
                                                 == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__g_ispr_rdata_dec__BRA__7__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                                ^ (0U 
                                                   != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__g_in_mux_outer__BRA__299__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o))) 
                                               << 2U)) 
                                   | ((((0x13U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__g_ispr_rdata_dec__BRA__7__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                        ^ (0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__g_in_mux_outer__BRA__298__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o))) 
                                       << 1U) | ((0x2cU 
                                                  == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__g_ispr_rdata_dec__BRA__7__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                                 ^ 
                                                 (0U 
                                                  != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__g_in_mux_outer__BRA__297__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o))))) 
                                  << 8U)) | (((((((0x32U 
                                                   == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__g_ispr_rdata_dec__BRA__7__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                                  ^ 
                                                  (0U 
                                                   != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__g_in_mux_outer__BRA__296__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o))) 
                                                 << 3U) 
                                                | (((0x70U 
                                                     == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__g_ispr_rdata_dec__BRA__7__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                                    ^ 
                                                    (0U 
                                                     != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__g_in_mux_outer__BRA__295__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o))) 
                                                   << 2U)) 
                                               | ((((0x0eU 
                                                     == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__g_ispr_rdata_dec__BRA__7__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                                    ^ 
                                                    (0U 
                                                     != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__g_in_mux_outer__BRA__294__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o))) 
                                                   << 1U) 
                                                  | ((0x46U 
                                                      == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__g_ispr_rdata_dec__BRA__7__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                                     ^ 
                                                     (0U 
                                                      != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__g_in_mux_outer__BRA__293__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o))))) 
                                              << 4U) 
                                             | (((((0x26U 
                                                    == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__g_ispr_rdata_dec__BRA__7__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                                   ^ 
                                                   (0U 
                                                    != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__g_in_mux_outer__BRA__292__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o))) 
                                                  << 3U) 
                                                 | (((0x25U 
                                                      == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__g_ispr_rdata_dec__BRA__7__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                                     ^ 
                                                     (0U 
                                                      != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__g_in_mux_outer__BRA__291__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o))) 
                                                    << 2U)) 
                                                | ((((0x0bU 
                                                      == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__g_ispr_rdata_dec__BRA__7__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                                     ^ 
                                                     (0U 
                                                      != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__g_in_mux_outer__BRA__290__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o))) 
                                                    << 1U) 
                                                   | ((0x1cU 
                                                       == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__g_ispr_rdata_dec__BRA__7__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                                      ^ 
                                                      (0U 
                                                       != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__g_in_mux_outer__BRA__289__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o))))))) 
            << 0x00000010U) | ((((((((7U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__g_ispr_rdata_dec__BRA__7__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                     ^ (0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__g_in_mux_outer__BRA__288__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o))) 
                                    << 3U) | (((0x68U 
                                                == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__g_ispr_rdata_dec__BRA__7__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                               ^ (0U 
                                                  != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__g_in_mux_outer__BRA__287__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o))) 
                                              << 2U)) 
                                  | ((((0x31U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__g_ispr_rdata_dec__BRA__7__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                       ^ (0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__g_in_mux_outer__BRA__286__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o))) 
                                      << 1U) | ((0x51U 
                                                 == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__g_ispr_rdata_dec__BRA__7__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                                ^ (0U 
                                                   != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__g_in_mux_outer__BRA__285__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o))))) 
                                 << 0x0000000cU) | 
                                ((((((0x0dU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__g_ispr_rdata_dec__BRA__7__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                     ^ (0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__g_in_mux_outer__BRA__284__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o))) 
                                    << 3U) | (((0x49U 
                                                == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__g_ispr_rdata_dec__BRA__7__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                               ^ (0U 
                                                  != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__g_in_mux_outer__BRA__283__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o))) 
                                              << 2U)) 
                                  | ((((0x38U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__g_ispr_rdata_dec__BRA__7__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                       ^ (0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__g_in_mux_outer__BRA__282__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o))) 
                                      << 1U) | ((0x45U 
                                                 == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__g_ispr_rdata_dec__BRA__7__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                                ^ (0U 
                                                   != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__g_in_mux_outer__BRA__281__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o))))) 
                                 << 8U)) | (((((((0x4cU 
                                                  == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__g_ispr_rdata_dec__BRA__7__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                                 ^ 
                                                 (0U 
                                                  != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__g_in_mux_outer__BRA__280__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o))) 
                                                << 3U) 
                                               | (((0x2aU 
                                                    == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__g_ispr_rdata_dec__BRA__7__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                                   ^ 
                                                   (0U 
                                                    != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__g_in_mux_outer__BRA__279__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o))) 
                                                  << 2U)) 
                                              | ((((0x15U 
                                                    == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__g_ispr_rdata_dec__BRA__7__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                                   ^ 
                                                   (0U 
                                                    != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__g_in_mux_outer__BRA__278__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o))) 
                                                  << 1U) 
                                                 | ((0x1aU 
                                                     == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__g_ispr_rdata_dec__BRA__7__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                                    ^ 
                                                    (0U 
                                                     != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__g_in_mux_outer__BRA__277__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o))))) 
                                             << 4U) 
                                            | (((((0x34U 
                                                   == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__g_ispr_rdata_dec__BRA__7__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                                  ^ 
                                                  (0U 
                                                   != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__g_in_mux_outer__BRA__276__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o))) 
                                                 << 3U) 
                                                | (((0x61U 
                                                     == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__g_ispr_rdata_dec__BRA__7__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                                    ^ 
                                                    (0U 
                                                     != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__g_in_mux_outer__BRA__275__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o))) 
                                                   << 2U)) 
                                               | ((((0x54U 
                                                     == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__g_ispr_rdata_dec__BRA__7__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                                    ^ 
                                                    (0U 
                                                     != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__g_in_mux_outer__BRA__274__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o))) 
                                                   << 1U) 
                                                  | ((0x19U 
                                                      == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__g_ispr_rdata_dec__BRA__7__KET____DOT__i_secded_dec__DOT__syndrome_o)) 
                                                     ^ 
                                                     (0U 
                                                      != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_alu_bignum__DOT__u_ispr_rdata_intg_mux__DOT__g_in_mux_outer__BRA__273__KET____DOT__u_mux_bit_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o))))))));
    __Vtemp_13[0U] = (IData)((((QData)((IData)(((2U 
                                                 & ((~ 
                                                     VL_REDXOR_32(
                                                                  (0xdeba8050U 
                                                                   & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_no_intg_i[5U]))) 
                                                    << 1U)) 
                                                | (1U 
                                                   & VL_REDXOR_32(
                                                                  (0x2606bd25U 
                                                                   & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_no_intg_i[5U])))))) 
                               << 0x00000023U) | (((QData)((IData)(
                                                                   vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_no_intg_i[5U])) 
                                                   << 3U) 
                                                  | (QData)((IData)(
                                                                    ((4U 
                                                                      & (VL_REDXOR_32(
                                                                                (0x98505586U 
                                                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_no_intg_i[4U])) 
                                                                         << 2U)) 
                                                                     | ((2U 
                                                                         & ((~ 
                                                                             VL_REDXOR_32(
                                                                                (0x2dcc624cU 
                                                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_no_intg_i[4U]))) 
                                                                            << 1U)) 
                                                                        | (1U 
                                                                           & VL_REDXOR_32(
                                                                                (0xc2c1323bU 
                                                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_no_intg_i[4U]))))))))));
    __Vtemp_13[1U] = (((IData)((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_no_intg_i[6U])) 
                                 << 5U) | (QData)((IData)(
                                                          ((((4U 
                                                              & (VL_REDXOR_32(
                                                                              (0x98505586U 
                                                                               & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_no_intg_i[5U])) 
                                                                 << 2U)) 
                                                             | ((2U 
                                                                 & ((~ 
                                                                     VL_REDXOR_32(
                                                                                (0x2dcc624cU 
                                                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_no_intg_i[5U]))) 
                                                                    << 1U)) 
                                                                | (1U 
                                                                   & VL_REDXOR_32(
                                                                                (0xc2c1323bU 
                                                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_no_intg_i[5U]))))) 
                                                            << 2U) 
                                                           | ((2U 
                                                               & ((~ 
                                                                   VL_REDXOR_32(
                                                                                (0x31234ed1U 
                                                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_no_intg_i[5U]))) 
                                                                  << 1U)) 
                                                              | (1U 
                                                                 & VL_REDXOR_32(
                                                                                (0x413d89aaU 
                                                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_no_intg_i[5U]))))))))) 
                       << 5U) | (IData)(((((QData)((IData)(
                                                           ((2U 
                                                             & ((~ 
                                                                 VL_REDXOR_32(
                                                                              (0xdeba8050U 
                                                                               & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_no_intg_i[5U]))) 
                                                                << 1U)) 
                                                            | (1U 
                                                               & VL_REDXOR_32(
                                                                              (0x2606bd25U 
                                                                               & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_no_intg_i[5U])))))) 
                                           << 0x00000023U) 
                                          | (((QData)((IData)(
                                                              vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_no_intg_i[5U])) 
                                              << 3U) 
                                             | (QData)((IData)(
                                                               ((4U 
                                                                 & (VL_REDXOR_32(
                                                                                (0x98505586U 
                                                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_no_intg_i[4U])) 
                                                                    << 2U)) 
                                                                | ((2U 
                                                                    & ((~ 
                                                                        VL_REDXOR_32(
                                                                                (0x2dcc624cU 
                                                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_no_intg_i[4U]))) 
                                                                       << 1U)) 
                                                                   | (1U 
                                                                      & VL_REDXOR_32(
                                                                                (0xc2c1323bU 
                                                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_no_intg_i[4U]))))))))) 
                                         >> 0x00000020U)));
    __Vtemp_13[2U] = (((IData)((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_no_intg_i[6U])) 
                                 << 5U) | (QData)((IData)(
                                                          ((((4U 
                                                              & (VL_REDXOR_32(
                                                                              (0x98505586U 
                                                                               & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_no_intg_i[5U])) 
                                                                 << 2U)) 
                                                             | ((2U 
                                                                 & ((~ 
                                                                     VL_REDXOR_32(
                                                                                (0x2dcc624cU 
                                                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_no_intg_i[5U]))) 
                                                                    << 1U)) 
                                                                | (1U 
                                                                   & VL_REDXOR_32(
                                                                                (0xc2c1323bU 
                                                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_no_intg_i[5U]))))) 
                                                            << 2U) 
                                                           | ((2U 
                                                               & ((~ 
                                                                   VL_REDXOR_32(
                                                                                (0x31234ed1U 
                                                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_no_intg_i[5U]))) 
                                                                  << 1U)) 
                                                              | (1U 
                                                                 & VL_REDXOR_32(
                                                                                (0x413d89aaU 
                                                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_no_intg_i[5U]))))))))) 
                       >> 0x0000001bU) | ((IData)((
                                                   (((QData)((IData)(
                                                                     vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_no_intg_i[6U])) 
                                                     << 5U) 
                                                    | (QData)((IData)(
                                                                      ((((4U 
                                                                          & (VL_REDXOR_32(
                                                                                (0x98505586U 
                                                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_no_intg_i[5U])) 
                                                                             << 2U)) 
                                                                         | ((2U 
                                                                             & ((~ 
                                                                                VL_REDXOR_32(
                                                                                (0x2dcc624cU 
                                                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_no_intg_i[5U]))) 
                                                                                << 1U)) 
                                                                            | (1U 
                                                                               & VL_REDXOR_32(
                                                                                (0xc2c1323bU 
                                                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_no_intg_i[5U]))))) 
                                                                        << 2U) 
                                                                       | ((2U 
                                                                           & ((~ 
                                                                               VL_REDXOR_32(
                                                                                (0x31234ed1U 
                                                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_no_intg_i[5U]))) 
                                                                              << 1U)) 
                                                                          | (1U 
                                                                             & VL_REDXOR_32(
                                                                                (0x413d89aaU 
                                                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_no_intg_i[5U])))))))) 
                                                   >> 0x00000020U)) 
                                          << 5U));
    __Vtemp_14[2U] = (((IData)((((QData)((IData)(((
                                                   (((2U 
                                                      & (VL_REDXOR_32(
                                                                      (0x98505586U 
                                                                       & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_no_intg_i[7U])) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & (~ 
                                                           VL_REDXOR_32(
                                                                        (0x2dcc624cU 
                                                                         & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_no_intg_i[7U]))))) 
                                                    << 5U) 
                                                   | (((2U 
                                                        & (VL_REDXOR_32(
                                                                        (0xc2c1323bU 
                                                                         & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_no_intg_i[7U])) 
                                                           << 1U)) 
                                                       | (1U 
                                                          & (~ 
                                                             VL_REDXOR_32(
                                                                          (0x31234ed1U 
                                                                           & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_no_intg_i[7U]))))) 
                                                      << 3U)) 
                                                  | ((4U 
                                                      & (VL_REDXOR_32(
                                                                      (0x413d89aaU 
                                                                       & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_no_intg_i[7U])) 
                                                         << 2U)) 
                                                     | ((2U 
                                                         & ((~ 
                                                             VL_REDXOR_32(
                                                                          (0xdeba8050U 
                                                                           & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_no_intg_i[7U]))) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & VL_REDXOR_32(
                                                                          (0x2606bd25U 
                                                                           & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_no_intg_i[7U])))))))) 
                                 << 0x00000027U) | 
                                (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_no_intg_i[7U])) 
                                  << 7U) | (QData)((IData)(
                                                           (((((2U 
                                                                & (VL_REDXOR_32(
                                                                                (0x98505586U 
                                                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_no_intg_i[6U])) 
                                                                   << 1U)) 
                                                               | (1U 
                                                                  & (~ 
                                                                     VL_REDXOR_32(
                                                                                (0x2dcc624cU 
                                                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_no_intg_i[6U]))))) 
                                                              << 5U) 
                                                             | (((2U 
                                                                  & (VL_REDXOR_32(
                                                                                (0xc2c1323bU 
                                                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_no_intg_i[6U])) 
                                                                     << 1U)) 
                                                                 | (1U 
                                                                    & (~ 
                                                                       VL_REDXOR_32(
                                                                                (0x31234ed1U 
                                                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_no_intg_i[6U]))))) 
                                                                << 3U)) 
                                                            | ((4U 
                                                                & (VL_REDXOR_32(
                                                                                (0x413d89aaU 
                                                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_no_intg_i[6U])) 
                                                                   << 2U)) 
                                                               | ((2U 
                                                                   & ((~ 
                                                                       VL_REDXOR_32(
                                                                                (0xdeba8050U 
                                                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_no_intg_i[6U]))) 
                                                                      << 1U)) 
                                                                  | (1U 
                                                                     & VL_REDXOR_32(
                                                                                (0x2606bd25U 
                                                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_no_intg_i[6U]))))))))))) 
                       << 0x0000000aU) | __Vtemp_13[2U]);
    __Vtemp_14[3U] = (((IData)((((QData)((IData)(((
                                                   (((2U 
                                                      & (VL_REDXOR_32(
                                                                      (0x98505586U 
                                                                       & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_no_intg_i[7U])) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & (~ 
                                                           VL_REDXOR_32(
                                                                        (0x2dcc624cU 
                                                                         & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_no_intg_i[7U]))))) 
                                                    << 5U) 
                                                   | (((2U 
                                                        & (VL_REDXOR_32(
                                                                        (0xc2c1323bU 
                                                                         & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_no_intg_i[7U])) 
                                                           << 1U)) 
                                                       | (1U 
                                                          & (~ 
                                                             VL_REDXOR_32(
                                                                          (0x31234ed1U 
                                                                           & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_no_intg_i[7U]))))) 
                                                      << 3U)) 
                                                  | ((4U 
                                                      & (VL_REDXOR_32(
                                                                      (0x413d89aaU 
                                                                       & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_no_intg_i[7U])) 
                                                         << 2U)) 
                                                     | ((2U 
                                                         & ((~ 
                                                             VL_REDXOR_32(
                                                                          (0xdeba8050U 
                                                                           & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_no_intg_i[7U]))) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & VL_REDXOR_32(
                                                                          (0x2606bd25U 
                                                                           & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_no_intg_i[7U])))))))) 
                                 << 0x00000027U) | 
                                (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_no_intg_i[7U])) 
                                  << 7U) | (QData)((IData)(
                                                           (((((2U 
                                                                & (VL_REDXOR_32(
                                                                                (0x98505586U 
                                                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_no_intg_i[6U])) 
                                                                   << 1U)) 
                                                               | (1U 
                                                                  & (~ 
                                                                     VL_REDXOR_32(
                                                                                (0x2dcc624cU 
                                                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_no_intg_i[6U]))))) 
                                                              << 5U) 
                                                             | (((2U 
                                                                  & (VL_REDXOR_32(
                                                                                (0xc2c1323bU 
                                                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_no_intg_i[6U])) 
                                                                     << 1U)) 
                                                                 | (1U 
                                                                    & (~ 
                                                                       VL_REDXOR_32(
                                                                                (0x31234ed1U 
                                                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_no_intg_i[6U]))))) 
                                                                << 3U)) 
                                                            | ((4U 
                                                                & (VL_REDXOR_32(
                                                                                (0x413d89aaU 
                                                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_no_intg_i[6U])) 
                                                                   << 2U)) 
                                                               | ((2U 
                                                                   & ((~ 
                                                                       VL_REDXOR_32(
                                                                                (0xdeba8050U 
                                                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_no_intg_i[6U]))) 
                                                                      << 1U)) 
                                                                  | (1U 
                                                                     & VL_REDXOR_32(
                                                                                (0x2606bd25U 
                                                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_no_intg_i[6U]))))))))))) 
                       >> 0x00000016U) | ((IData)((
                                                   (((QData)((IData)(
                                                                     (((((2U 
                                                                          & (VL_REDXOR_32(
                                                                                (0x98505586U 
                                                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_no_intg_i[7U])) 
                                                                             << 1U)) 
                                                                         | (1U 
                                                                            & (~ 
                                                                               VL_REDXOR_32(
                                                                                (0x2dcc624cU 
                                                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_no_intg_i[7U]))))) 
                                                                        << 5U) 
                                                                       | (((2U 
                                                                            & (VL_REDXOR_32(
                                                                                (0xc2c1323bU 
                                                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_no_intg_i[7U])) 
                                                                               << 1U)) 
                                                                           | (1U 
                                                                              & (~ 
                                                                                VL_REDXOR_32(
                                                                                (0x31234ed1U 
                                                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_no_intg_i[7U]))))) 
                                                                          << 3U)) 
                                                                      | ((4U 
                                                                          & (VL_REDXOR_32(
                                                                                (0x413d89aaU 
                                                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_no_intg_i[7U])) 
                                                                             << 2U)) 
                                                                         | ((2U 
                                                                             & ((~ 
                                                                                VL_REDXOR_32(
                                                                                (0xdeba8050U 
                                                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_no_intg_i[7U]))) 
                                                                                << 1U)) 
                                                                            | (1U 
                                                                               & VL_REDXOR_32(
                                                                                (0x2606bd25U 
                                                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_no_intg_i[7U])))))))) 
                                                     << 0x00000027U) 
                                                    | (((QData)((IData)(
                                                                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_no_intg_i[7U])) 
                                                        << 7U) 
                                                       | (QData)((IData)(
                                                                         (((((2U 
                                                                              & (VL_REDXOR_32(
                                                                                (0x98505586U 
                                                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_no_intg_i[6U])) 
                                                                                << 1U)) 
                                                                             | (1U 
                                                                                & (~ 
                                                                                VL_REDXOR_32(
                                                                                (0x2dcc624cU 
                                                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_no_intg_i[6U]))))) 
                                                                            << 5U) 
                                                                           | (((2U 
                                                                                & (VL_REDXOR_32(
                                                                                (0xc2c1323bU 
                                                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_no_intg_i[6U])) 
                                                                                << 1U)) 
                                                                               | (1U 
                                                                                & (~ 
                                                                                VL_REDXOR_32(
                                                                                (0x31234ed1U 
                                                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_no_intg_i[6U]))))) 
                                                                              << 3U)) 
                                                                          | ((4U 
                                                                              & (VL_REDXOR_32(
                                                                                (0x413d89aaU 
                                                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_no_intg_i[6U])) 
                                                                                << 2U)) 
                                                                             | ((2U 
                                                                                & ((~ 
                                                                                VL_REDXOR_32(
                                                                                (0xdeba8050U 
                                                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_no_intg_i[6U]))) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & VL_REDXOR_32(
                                                                                (0x2606bd25U 
                                                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_no_intg_i[6U])))))))))) 
                                                   >> 0x00000020U)) 
                                          << 0x0000000aU));
    __Vtemp_15[0U] = (IData)((((QData)((IData)(((4U 
                                                 & (VL_REDXOR_32(
                                                                 (0x413d89aaU 
                                                                  & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_no_intg_i[3U])) 
                                                    << 2U)) 
                                                | ((2U 
                                                    & ((~ 
                                                        VL_REDXOR_32(
                                                                     (0xdeba8050U 
                                                                      & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_no_intg_i[3U]))) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & VL_REDXOR_32(
                                                                     (0x2606bd25U 
                                                                      & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_no_intg_i[3U]))))))) 
                               << 0x00000025U) | (((QData)((IData)(
                                                                   vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_no_intg_i[3U])) 
                                                   << 5U) 
                                                  | (QData)((IData)(
                                                                    ((((4U 
                                                                        & (VL_REDXOR_32(
                                                                                (0x98505586U 
                                                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_no_intg_i[2U])) 
                                                                           << 2U)) 
                                                                       | ((2U 
                                                                           & ((~ 
                                                                               VL_REDXOR_32(
                                                                                (0x2dcc624cU 
                                                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_no_intg_i[2U]))) 
                                                                              << 1U)) 
                                                                          | (1U 
                                                                             & VL_REDXOR_32(
                                                                                (0xc2c1323bU 
                                                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_no_intg_i[2U]))))) 
                                                                      << 2U) 
                                                                     | ((2U 
                                                                         & ((~ 
                                                                             VL_REDXOR_32(
                                                                                (0x31234ed1U 
                                                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_no_intg_i[2U]))) 
                                                                            << 1U)) 
                                                                        | (1U 
                                                                           & VL_REDXOR_32(
                                                                                (0x413d89aaU 
                                                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_no_intg_i[2U]))))))))));
    __Vtemp_15[1U] = (((IData)((((QData)((IData)(((
                                                   ((2U 
                                                     & ((~ 
                                                         VL_REDXOR_32(
                                                                      (0x31234ed1U 
                                                                       & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_no_intg_i[4U]))) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & VL_REDXOR_32(
                                                                      (0x413d89aaU 
                                                                       & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_no_intg_i[4U])))) 
                                                   << 2U) 
                                                  | ((2U 
                                                      & ((~ 
                                                          VL_REDXOR_32(
                                                                       (0xdeba8050U 
                                                                        & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_no_intg_i[4U]))) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & VL_REDXOR_32(
                                                                       (0x2606bd25U 
                                                                        & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_no_intg_i[4U]))))))) 
                                 << 0x00000024U) | 
                                (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_no_intg_i[4U])) 
                                  << 4U) | (QData)((IData)(
                                                           ((((2U 
                                                               & (VL_REDXOR_32(
                                                                               (0x98505586U 
                                                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_no_intg_i[3U])) 
                                                                  << 1U)) 
                                                              | (1U 
                                                                 & (~ 
                                                                    VL_REDXOR_32(
                                                                                (0x2dcc624cU 
                                                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_no_intg_i[3U]))))) 
                                                             << 2U) 
                                                            | ((2U 
                                                                & (VL_REDXOR_32(
                                                                                (0xc2c1323bU 
                                                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_no_intg_i[3U])) 
                                                                   << 1U)) 
                                                               | (1U 
                                                                  & (~ 
                                                                     VL_REDXOR_32(
                                                                                (0x31234ed1U 
                                                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_no_intg_i[3U]))))))))))) 
                       << 8U) | (IData)(((((QData)((IData)(
                                                           ((4U 
                                                             & (VL_REDXOR_32(
                                                                             (0x413d89aaU 
                                                                              & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_no_intg_i[3U])) 
                                                                << 2U)) 
                                                            | ((2U 
                                                                & ((~ 
                                                                    VL_REDXOR_32(
                                                                                (0xdeba8050U 
                                                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_no_intg_i[3U]))) 
                                                                   << 1U)) 
                                                               | (1U 
                                                                  & VL_REDXOR_32(
                                                                                (0x2606bd25U 
                                                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_no_intg_i[3U]))))))) 
                                           << 0x00000025U) 
                                          | (((QData)((IData)(
                                                              vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_no_intg_i[3U])) 
                                              << 5U) 
                                             | (QData)((IData)(
                                                               ((((4U 
                                                                   & (VL_REDXOR_32(
                                                                                (0x98505586U 
                                                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_no_intg_i[2U])) 
                                                                      << 2U)) 
                                                                  | ((2U 
                                                                      & ((~ 
                                                                          VL_REDXOR_32(
                                                                                (0x2dcc624cU 
                                                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_no_intg_i[2U]))) 
                                                                         << 1U)) 
                                                                     | (1U 
                                                                        & VL_REDXOR_32(
                                                                                (0xc2c1323bU 
                                                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_no_intg_i[2U]))))) 
                                                                 << 2U) 
                                                                | ((2U 
                                                                    & ((~ 
                                                                        VL_REDXOR_32(
                                                                                (0x31234ed1U 
                                                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_no_intg_i[2U]))) 
                                                                       << 1U)) 
                                                                   | (1U 
                                                                      & VL_REDXOR_32(
                                                                                (0x413d89aaU 
                                                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_no_intg_i[2U]))))))))) 
                                         >> 0x00000020U)));
    __Vtemp_15[2U] = (((IData)((((QData)((IData)(((
                                                   ((2U 
                                                     & ((~ 
                                                         VL_REDXOR_32(
                                                                      (0x31234ed1U 
                                                                       & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_no_intg_i[4U]))) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & VL_REDXOR_32(
                                                                      (0x413d89aaU 
                                                                       & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_no_intg_i[4U])))) 
                                                   << 2U) 
                                                  | ((2U 
                                                      & ((~ 
                                                          VL_REDXOR_32(
                                                                       (0xdeba8050U 
                                                                        & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_no_intg_i[4U]))) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & VL_REDXOR_32(
                                                                       (0x2606bd25U 
                                                                        & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_no_intg_i[4U]))))))) 
                                 << 0x00000024U) | 
                                (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_no_intg_i[4U])) 
                                  << 4U) | (QData)((IData)(
                                                           ((((2U 
                                                               & (VL_REDXOR_32(
                                                                               (0x98505586U 
                                                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_no_intg_i[3U])) 
                                                                  << 1U)) 
                                                              | (1U 
                                                                 & (~ 
                                                                    VL_REDXOR_32(
                                                                                (0x2dcc624cU 
                                                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_no_intg_i[3U]))))) 
                                                             << 2U) 
                                                            | ((2U 
                                                                & (VL_REDXOR_32(
                                                                                (0xc2c1323bU 
                                                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_no_intg_i[3U])) 
                                                                   << 1U)) 
                                                               | (1U 
                                                                  & (~ 
                                                                     VL_REDXOR_32(
                                                                                (0x31234ed1U 
                                                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_no_intg_i[3U]))))))))))) 
                       >> 0x00000018U) | ((IData)((
                                                   (((QData)((IData)(
                                                                     ((((2U 
                                                                         & ((~ 
                                                                             VL_REDXOR_32(
                                                                                (0x31234ed1U 
                                                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_no_intg_i[4U]))) 
                                                                            << 1U)) 
                                                                        | (1U 
                                                                           & VL_REDXOR_32(
                                                                                (0x413d89aaU 
                                                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_no_intg_i[4U])))) 
                                                                       << 2U) 
                                                                      | ((2U 
                                                                          & ((~ 
                                                                              VL_REDXOR_32(
                                                                                (0xdeba8050U 
                                                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_no_intg_i[4U]))) 
                                                                             << 1U)) 
                                                                         | (1U 
                                                                            & VL_REDXOR_32(
                                                                                (0x2606bd25U 
                                                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_no_intg_i[4U]))))))) 
                                                     << 0x00000024U) 
                                                    | (((QData)((IData)(
                                                                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_no_intg_i[4U])) 
                                                        << 4U) 
                                                       | (QData)((IData)(
                                                                         ((((2U 
                                                                             & (VL_REDXOR_32(
                                                                                (0x98505586U 
                                                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_no_intg_i[3U])) 
                                                                                << 1U)) 
                                                                            | (1U 
                                                                               & (~ 
                                                                                VL_REDXOR_32(
                                                                                (0x2dcc624cU 
                                                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_no_intg_i[3U]))))) 
                                                                           << 2U) 
                                                                          | ((2U 
                                                                              & (VL_REDXOR_32(
                                                                                (0xc2c1323bU 
                                                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_no_intg_i[3U])) 
                                                                                << 1U)) 
                                                                             | (1U 
                                                                                & (~ 
                                                                                VL_REDXOR_32(
                                                                                (0x31234ed1U 
                                                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_no_intg_i[3U])))))))))) 
                                                   >> 0x00000020U)) 
                                          << 8U));
    __Vtemp_16[0U] = (IData)((((QData)((IData)((1U 
                                                & VL_REDXOR_32(
                                                               (0x2606bd25U 
                                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_no_intg_i[1U]))))) 
                               << 0x00000027U) | (((QData)((IData)(
                                                                   vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_no_intg_i[1U])) 
                                                   << 7U) 
                                                  | (QData)((IData)(
                                                                    (((((2U 
                                                                         & (VL_REDXOR_32(
                                                                                (0x98505586U 
                                                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_no_intg_i[0U])) 
                                                                            << 1U)) 
                                                                        | (1U 
                                                                           & (~ 
                                                                              VL_REDXOR_32(
                                                                                (0x2dcc624cU 
                                                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_no_intg_i[0U]))))) 
                                                                       << 5U) 
                                                                      | (((2U 
                                                                           & (VL_REDXOR_32(
                                                                                (0xc2c1323bU 
                                                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_no_intg_i[0U])) 
                                                                              << 1U)) 
                                                                          | (1U 
                                                                             & (~ 
                                                                                VL_REDXOR_32(
                                                                                (0x31234ed1U 
                                                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_no_intg_i[0U]))))) 
                                                                         << 3U)) 
                                                                     | ((4U 
                                                                         & (VL_REDXOR_32(
                                                                                (0x413d89aaU 
                                                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_no_intg_i[0U])) 
                                                                            << 2U)) 
                                                                        | ((2U 
                                                                            & ((~ 
                                                                                VL_REDXOR_32(
                                                                                (0xdeba8050U 
                                                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_no_intg_i[0U]))) 
                                                                               << 1U)) 
                                                                           | (1U 
                                                                              & VL_REDXOR_32(
                                                                                (0x2606bd25U 
                                                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_no_intg_i[0U])))))))))));
    __Vtemp_16[1U] = (((IData)((((QData)((IData)(((2U 
                                                   & ((~ 
                                                       VL_REDXOR_32(
                                                                    (0xdeba8050U 
                                                                     & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_no_intg_i[2U]))) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & VL_REDXOR_32(
                                                                    (0x2606bd25U 
                                                                     & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_no_intg_i[2U])))))) 
                                 << 0x00000026U) | 
                                (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_no_intg_i[2U])) 
                                  << 6U) | (QData)((IData)(
                                                           ((((4U 
                                                               & (VL_REDXOR_32(
                                                                               (0x98505586U 
                                                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_no_intg_i[1U])) 
                                                                  << 2U)) 
                                                              | ((2U 
                                                                  & ((~ 
                                                                      VL_REDXOR_32(
                                                                                (0x2dcc624cU 
                                                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_no_intg_i[1U]))) 
                                                                     << 1U)) 
                                                                 | (1U 
                                                                    & VL_REDXOR_32(
                                                                                (0xc2c1323bU 
                                                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_no_intg_i[1U]))))) 
                                                             << 3U) 
                                                            | ((4U 
                                                                & ((~ 
                                                                    VL_REDXOR_32(
                                                                                (0x31234ed1U 
                                                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_no_intg_i[1U]))) 
                                                                   << 2U)) 
                                                               | ((2U 
                                                                   & (VL_REDXOR_32(
                                                                                (0x413d89aaU 
                                                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_no_intg_i[1U])) 
                                                                      << 1U)) 
                                                                  | (1U 
                                                                     & (~ 
                                                                        VL_REDXOR_32(
                                                                                (0xdeba8050U 
                                                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_no_intg_i[1U])))))))))))) 
                       << 8U) | (IData)(((((QData)((IData)(
                                                           (1U 
                                                            & VL_REDXOR_32(
                                                                           (0x2606bd25U 
                                                                            & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_no_intg_i[1U]))))) 
                                           << 0x00000027U) 
                                          | (((QData)((IData)(
                                                              vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_no_intg_i[1U])) 
                                              << 7U) 
                                             | (QData)((IData)(
                                                               (((((2U 
                                                                    & (VL_REDXOR_32(
                                                                                (0x98505586U 
                                                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_no_intg_i[0U])) 
                                                                       << 1U)) 
                                                                   | (1U 
                                                                      & (~ 
                                                                         VL_REDXOR_32(
                                                                                (0x2dcc624cU 
                                                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_no_intg_i[0U]))))) 
                                                                  << 5U) 
                                                                 | (((2U 
                                                                      & (VL_REDXOR_32(
                                                                                (0xc2c1323bU 
                                                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_no_intg_i[0U])) 
                                                                         << 1U)) 
                                                                     | (1U 
                                                                        & (~ 
                                                                           VL_REDXOR_32(
                                                                                (0x31234ed1U 
                                                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_no_intg_i[0U]))))) 
                                                                    << 3U)) 
                                                                | ((4U 
                                                                    & (VL_REDXOR_32(
                                                                                (0x413d89aaU 
                                                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_no_intg_i[0U])) 
                                                                       << 2U)) 
                                                                   | ((2U 
                                                                       & ((~ 
                                                                           VL_REDXOR_32(
                                                                                (0xdeba8050U 
                                                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_no_intg_i[0U]))) 
                                                                          << 1U)) 
                                                                      | (1U 
                                                                         & VL_REDXOR_32(
                                                                                (0x2606bd25U 
                                                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_no_intg_i[0U])))))))))) 
                                         >> 0x00000020U)));
    __Vtemp_16[2U] = (((IData)((((QData)((IData)(((2U 
                                                   & ((~ 
                                                       VL_REDXOR_32(
                                                                    (0xdeba8050U 
                                                                     & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_no_intg_i[2U]))) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & VL_REDXOR_32(
                                                                    (0x2606bd25U 
                                                                     & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_no_intg_i[2U])))))) 
                                 << 0x00000026U) | 
                                (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_no_intg_i[2U])) 
                                  << 6U) | (QData)((IData)(
                                                           ((((4U 
                                                               & (VL_REDXOR_32(
                                                                               (0x98505586U 
                                                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_no_intg_i[1U])) 
                                                                  << 2U)) 
                                                              | ((2U 
                                                                  & ((~ 
                                                                      VL_REDXOR_32(
                                                                                (0x2dcc624cU 
                                                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_no_intg_i[1U]))) 
                                                                     << 1U)) 
                                                                 | (1U 
                                                                    & VL_REDXOR_32(
                                                                                (0xc2c1323bU 
                                                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_no_intg_i[1U]))))) 
                                                             << 3U) 
                                                            | ((4U 
                                                                & ((~ 
                                                                    VL_REDXOR_32(
                                                                                (0x31234ed1U 
                                                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_no_intg_i[1U]))) 
                                                                   << 2U)) 
                                                               | ((2U 
                                                                   & (VL_REDXOR_32(
                                                                                (0x413d89aaU 
                                                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_no_intg_i[1U])) 
                                                                      << 1U)) 
                                                                  | (1U 
                                                                     & (~ 
                                                                        VL_REDXOR_32(
                                                                                (0xdeba8050U 
                                                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_no_intg_i[1U])))))))))))) 
                       >> 0x00000018U) | ((IData)((
                                                   (((QData)((IData)(
                                                                     ((2U 
                                                                       & ((~ 
                                                                           VL_REDXOR_32(
                                                                                (0xdeba8050U 
                                                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_no_intg_i[2U]))) 
                                                                          << 1U)) 
                                                                      | (1U 
                                                                         & VL_REDXOR_32(
                                                                                (0x2606bd25U 
                                                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_no_intg_i[2U])))))) 
                                                     << 0x00000026U) 
                                                    | (((QData)((IData)(
                                                                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_no_intg_i[2U])) 
                                                        << 6U) 
                                                       | (QData)((IData)(
                                                                         ((((4U 
                                                                             & (VL_REDXOR_32(
                                                                                (0x98505586U 
                                                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_no_intg_i[1U])) 
                                                                                << 2U)) 
                                                                            | ((2U 
                                                                                & ((~ 
                                                                                VL_REDXOR_32(
                                                                                (0x2dcc624cU 
                                                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_no_intg_i[1U]))) 
                                                                                << 1U)) 
                                                                               | (1U 
                                                                                & VL_REDXOR_32(
                                                                                (0xc2c1323bU 
                                                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_no_intg_i[1U]))))) 
                                                                           << 3U) 
                                                                          | ((4U 
                                                                              & ((~ 
                                                                                VL_REDXOR_32(
                                                                                (0x31234ed1U 
                                                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_no_intg_i[1U]))) 
                                                                                << 2U)) 
                                                                             | ((2U 
                                                                                & (VL_REDXOR_32(
                                                                                (0x413d89aaU 
                                                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_no_intg_i[1U])) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (~ 
                                                                                VL_REDXOR_32(
                                                                                (0xdeba8050U 
                                                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_no_intg_i[1U]))))))))))) 
                                                   >> 0x00000020U)) 
                                          << 8U));
    if (((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__sec_wipe_wdr_q)) 
         & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg_sel_ctrl))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[0U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[0U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[1U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[1U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[2U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[2U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[3U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[3U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[4U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[4U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[5U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[5U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[6U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[6U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[7U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[7U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[8U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[8U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[9U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__rf_bignum_wr_data_intg[9U];
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[0U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__wr_data_no_intg_i[0U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[1U] 
            = __Vtemp_16[0U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[2U] 
            = __Vtemp_16[1U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[3U] 
            = ((__Vtemp_15[0U] << 0x00000010U) | __Vtemp_16[2U]);
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[4U] 
            = ((__Vtemp_15[0U] >> 0x00000010U) | (__Vtemp_15[1U] 
                                                  << 0x00000010U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[5U] 
            = ((__Vtemp_15[1U] >> 0x00000010U) | (__Vtemp_15[2U] 
                                                  << 0x00000010U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[6U] 
            = __Vtemp_13[0U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[7U] 
            = __Vtemp_13[1U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[8U] 
            = __Vtemp_14[2U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[9U] 
            = __Vtemp_14[3U];
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[0U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[0U] 
           & (- (IData)((1U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U]))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[1U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[1U] 
           & (- (IData)((1U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U]))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[2U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[2U] 
           & (- (IData)((1U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U]))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[3U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[3U] 
           & (- (IData)((1U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U]))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[4U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[4U] 
           & (- (IData)((1U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U]))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[5U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[5U] 
           & (- (IData)((1U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U]))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[6U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[6U] 
           & (- (IData)((1U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U]))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[7U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[7U] 
           & (- (IData)((1U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U]))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[8U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[8U] 
           & (- (IData)((1U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U]))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[9U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[9U] 
           & (- (IData)((1U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U]))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__1__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[0U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[0U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 1U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__1__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[1U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[1U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 1U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__1__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[2U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[2U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 1U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__1__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[3U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[3U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 1U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__1__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[4U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[4U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 1U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__1__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[5U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[5U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 1U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__1__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[6U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[6U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 1U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__1__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[7U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[7U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 1U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__1__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[8U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[8U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 1U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__1__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[9U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[9U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 1U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__2__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[0U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[0U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 2U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__2__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[1U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[1U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 2U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__2__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[2U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[2U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 2U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__2__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[3U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[3U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 2U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__2__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[4U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[4U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 2U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__2__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[5U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[5U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 2U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__2__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[6U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[6U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 2U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__2__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[7U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[7U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 2U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__2__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[8U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[8U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 2U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__2__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[9U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[9U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 2U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__3__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[0U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[0U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 3U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__3__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[1U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[1U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 3U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__3__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[2U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[2U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 3U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__3__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[3U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[3U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 3U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__3__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[4U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[4U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 3U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__3__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[5U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[5U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 3U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__3__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[6U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[6U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 3U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__3__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[7U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[7U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 3U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__3__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[8U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[8U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 3U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__3__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[9U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[9U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 3U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__4__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[0U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[0U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 4U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__4__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[1U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[1U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 4U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__4__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[2U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[2U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 4U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__4__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[3U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[3U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 4U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__4__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[4U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[4U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 4U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__4__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[5U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[5U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 4U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__4__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[6U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[6U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 4U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__4__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[7U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[7U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 4U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__4__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[8U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[8U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 4U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__4__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[9U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[9U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 4U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__5__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[0U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[0U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 5U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__5__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[1U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[1U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 5U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__5__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[2U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[2U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 5U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__5__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[3U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[3U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 5U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__5__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[4U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[4U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 5U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__5__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[5U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[5U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 5U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__5__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[6U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[6U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 5U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__5__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[7U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[7U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 5U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__5__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[8U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[8U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 5U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__5__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[9U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[9U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 5U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__6__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[0U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[0U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 6U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__6__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[1U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[1U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 6U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__6__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[2U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[2U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 6U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__6__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[3U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[3U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 6U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__6__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[4U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[4U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 6U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__6__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[5U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[5U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 6U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__6__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[6U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[6U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 6U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__6__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[7U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[7U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 6U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__6__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[8U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[8U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 6U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__6__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[9U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[9U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 6U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__7__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[0U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[0U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 7U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__7__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[1U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[1U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 7U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__7__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[2U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[2U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 7U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__7__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[3U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[3U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 7U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__7__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[4U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[4U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 7U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__7__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[5U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[5U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 7U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__7__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[6U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[6U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 7U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__7__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[7U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[7U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 7U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__7__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[8U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[8U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 7U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__7__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[9U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[9U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 7U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__8__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[0U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[0U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 8U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__8__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[1U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[1U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 8U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__8__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[2U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[2U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 8U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__8__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[3U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[3U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 8U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__8__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[4U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[4U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 8U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__8__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[5U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[5U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 8U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__8__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[6U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[6U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 8U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__8__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[7U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[7U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 8U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__8__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[8U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[8U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 8U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__8__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[9U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[9U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 8U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__9__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[0U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[0U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 9U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__9__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[1U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[1U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 9U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__9__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[2U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[2U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 9U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__9__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[3U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[3U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 9U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__9__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[4U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[4U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 9U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__9__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[5U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[5U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 9U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__9__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[6U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[6U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 9U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__9__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[7U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[7U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 9U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__9__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[8U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[8U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 9U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__9__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[9U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[9U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 9U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__10__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[0U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[0U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x0000000aU)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__10__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[1U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[1U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x0000000aU)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__10__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[2U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[2U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x0000000aU)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__10__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[3U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[3U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x0000000aU)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__10__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[4U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[4U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x0000000aU)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__10__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[5U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[5U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x0000000aU)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__10__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[6U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[6U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x0000000aU)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__10__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[7U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[7U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x0000000aU)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__10__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[8U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[8U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x0000000aU)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__10__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[9U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[9U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x0000000aU)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__11__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[0U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[0U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x0000000bU)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__11__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[1U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[1U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x0000000bU)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__11__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[2U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[2U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x0000000bU)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__11__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[3U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[3U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x0000000bU)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__11__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[4U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[4U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x0000000bU)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__11__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[5U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[5U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x0000000bU)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__11__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[6U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[6U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x0000000bU)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__11__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[7U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[7U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x0000000bU)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__11__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[8U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[8U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x0000000bU)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__11__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[9U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[9U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x0000000bU)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__12__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[0U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[0U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x0000000cU)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__12__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[1U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[1U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x0000000cU)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__12__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[2U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[2U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x0000000cU)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__12__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[3U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[3U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x0000000cU)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__12__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[4U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[4U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x0000000cU)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__12__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[5U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[5U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x0000000cU)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__12__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[6U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[6U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x0000000cU)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__12__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[7U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[7U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x0000000cU)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__12__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[8U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[8U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x0000000cU)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__12__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[9U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[9U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x0000000cU)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__13__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[0U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[0U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x0000000dU)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__13__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[1U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[1U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x0000000dU)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__13__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[2U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[2U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x0000000dU)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__13__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[3U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[3U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x0000000dU)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__13__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[4U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[4U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x0000000dU)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__13__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[5U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[5U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x0000000dU)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__13__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[6U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[6U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x0000000dU)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__13__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[7U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[7U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x0000000dU)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__13__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[8U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[8U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x0000000dU)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__13__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[9U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[9U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x0000000dU)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__14__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[0U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[0U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x0000000eU)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__14__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[1U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[1U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x0000000eU)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__14__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[2U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[2U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x0000000eU)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__14__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[3U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[3U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x0000000eU)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__14__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[4U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[4U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x0000000eU)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__14__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[5U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[5U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x0000000eU)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__14__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[6U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[6U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x0000000eU)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__14__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[7U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[7U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x0000000eU)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__14__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[8U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[8U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x0000000eU)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__14__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[9U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[9U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x0000000eU)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__15__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[0U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[0U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x0000000fU)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__15__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[1U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[1U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x0000000fU)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__15__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[2U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[2U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x0000000fU)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__15__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[3U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[3U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x0000000fU)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__15__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[4U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[4U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x0000000fU)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__15__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[5U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[5U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x0000000fU)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__15__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[6U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[6U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x0000000fU)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__15__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[7U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[7U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x0000000fU)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__15__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[8U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[8U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x0000000fU)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__15__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[9U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[9U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x0000000fU)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__16__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[0U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[0U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x00000010U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__16__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[1U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[1U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x00000010U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__16__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[2U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[2U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x00000010U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__16__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[3U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[3U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x00000010U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__16__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[4U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[4U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x00000010U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__16__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[5U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[5U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x00000010U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__16__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[6U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[6U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x00000010U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__16__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[7U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[7U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x00000010U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__16__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[8U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[8U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x00000010U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__16__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[9U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[9U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x00000010U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__17__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[0U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[0U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x00000011U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__17__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[1U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[1U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x00000011U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__17__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[2U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[2U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x00000011U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__17__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[3U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[3U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x00000011U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__17__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[4U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[4U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x00000011U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__17__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[5U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[5U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x00000011U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__17__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[6U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[6U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x00000011U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__17__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[7U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[7U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x00000011U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__17__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[8U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[8U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x00000011U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__17__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[9U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[9U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x00000011U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__18__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[0U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[0U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x00000012U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__18__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[1U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[1U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x00000012U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__18__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[2U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[2U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x00000012U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__18__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[3U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[3U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x00000012U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__18__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[4U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[4U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x00000012U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__18__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[5U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[5U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x00000012U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__18__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[6U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[6U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x00000012U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__18__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[7U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[7U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x00000012U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__18__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[8U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[8U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x00000012U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__18__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[9U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[9U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x00000012U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__19__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[0U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[0U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x00000013U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__19__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[1U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[1U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x00000013U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__19__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[2U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[2U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x00000013U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__19__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[3U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[3U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x00000013U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__19__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[4U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[4U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x00000013U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__19__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[5U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[5U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x00000013U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__19__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[6U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[6U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x00000013U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__19__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[7U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[7U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x00000013U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__19__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[8U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[8U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x00000013U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__19__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[9U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[9U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x00000013U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__20__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[0U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[0U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x00000014U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__20__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[1U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[1U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x00000014U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__20__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[2U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[2U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x00000014U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__20__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[3U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[3U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x00000014U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__20__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[4U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[4U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x00000014U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__20__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[5U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[5U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x00000014U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__20__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[6U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[6U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x00000014U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__20__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[7U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[7U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x00000014U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__20__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[8U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[8U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x00000014U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__20__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[9U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[9U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x00000014U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__21__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[0U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[0U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x00000015U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__21__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[1U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[1U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x00000015U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__21__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[2U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[2U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x00000015U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__21__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[3U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[3U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x00000015U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__21__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[4U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[4U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x00000015U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__21__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[5U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[5U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x00000015U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__21__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[6U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[6U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x00000015U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__21__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[7U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[7U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x00000015U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__21__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[8U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[8U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x00000015U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__21__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[9U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[9U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x00000015U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__22__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[0U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[0U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x00000016U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__22__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[1U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[1U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x00000016U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__22__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[2U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[2U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x00000016U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__22__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[3U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[3U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x00000016U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__22__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[4U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[4U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x00000016U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__22__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[5U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[5U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x00000016U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__22__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[6U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[6U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x00000016U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__22__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[7U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[7U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x00000016U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__22__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[8U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[8U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x00000016U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__22__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[9U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[9U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x00000016U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__23__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[0U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[0U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x00000017U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__23__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[1U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[1U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x00000017U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__23__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[2U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[2U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x00000017U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__23__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[3U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[3U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x00000017U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__23__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[4U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[4U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x00000017U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__23__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[5U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[5U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x00000017U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__23__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[6U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[6U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x00000017U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__23__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[7U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[7U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x00000017U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__23__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[8U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[8U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x00000017U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__23__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[9U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[9U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x00000017U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__24__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[0U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[0U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x00000018U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__24__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[1U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[1U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x00000018U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__24__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[2U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[2U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x00000018U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__24__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[3U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[3U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x00000018U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__24__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[4U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[4U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x00000018U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__24__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[5U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[5U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x00000018U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__24__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[6U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[6U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x00000018U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__24__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[7U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[7U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x00000018U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__24__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[8U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[8U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x00000018U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__24__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[9U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[9U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x00000018U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__25__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[0U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[0U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x00000019U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__25__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[1U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[1U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x00000019U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__25__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[2U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[2U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x00000019U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__25__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[3U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[3U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x00000019U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__25__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[4U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[4U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x00000019U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__25__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[5U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[5U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x00000019U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__25__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[6U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[6U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x00000019U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__25__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[7U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[7U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x00000019U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__25__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[8U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[8U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x00000019U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__25__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[9U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[9U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x00000019U)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__26__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[0U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[0U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x0000001aU)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__26__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[1U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[1U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x0000001aU)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__26__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[2U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[2U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x0000001aU)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__26__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[3U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[3U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x0000001aU)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__26__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[4U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[4U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x0000001aU)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__26__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[5U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[5U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x0000001aU)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__26__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[6U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[6U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x0000001aU)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__26__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[7U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[7U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x0000001aU)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__26__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[8U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[8U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x0000001aU)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__26__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[9U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[9U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x0000001aU)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__27__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[0U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[0U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x0000001bU)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__27__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[1U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[1U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x0000001bU)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__27__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[2U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[2U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x0000001bU)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__27__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[3U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[3U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x0000001bU)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__27__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[4U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[4U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x0000001bU)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__27__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[5U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[5U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x0000001bU)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__27__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[6U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[6U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x0000001bU)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__27__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[7U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[7U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x0000001bU)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__27__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[8U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[8U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x0000001bU)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__27__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[9U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[9U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x0000001bU)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__28__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[0U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[0U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x0000001cU)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__28__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[1U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[1U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x0000001cU)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__28__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[2U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[2U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x0000001cU)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__28__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[3U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[3U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x0000001cU)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__28__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[4U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[4U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x0000001cU)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__28__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[5U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[5U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x0000001cU)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__28__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[6U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[6U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x0000001cU)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__28__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[7U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[7U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x0000001cU)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__28__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[8U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[8U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x0000001cU)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__28__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[9U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[9U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x0000001cU)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__29__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[0U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[0U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x0000001dU)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__29__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[1U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[1U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x0000001dU)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__29__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[2U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[2U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x0000001dU)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__29__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[3U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[3U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x0000001dU)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__29__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[4U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[4U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x0000001dU)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__29__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[5U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[5U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x0000001dU)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__29__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[6U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[6U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x0000001dU)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__29__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[7U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[7U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x0000001dU)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__29__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[8U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[8U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x0000001dU)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__29__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[9U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[9U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x0000001dU)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__30__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[0U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[0U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x0000001eU)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__30__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[1U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[1U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x0000001eU)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__30__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[2U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[2U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x0000001eU)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__30__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[3U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[3U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x0000001eU)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__30__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[4U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[4U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x0000001eU)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__30__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[5U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[5U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x0000001eU)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__30__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[6U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[6U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x0000001eU)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__30__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[7U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[7U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x0000001eU)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__30__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[8U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[8U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x0000001eU)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__30__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[9U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[9U] 
           & (- (IData)((1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                               >> 0x0000001eU)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__31__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[0U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[0U] 
           & (- (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                         >> 0x0000001fU))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__31__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[1U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[1U] 
           & (- (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                         >> 0x0000001fU))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__31__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[2U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[2U] 
           & (- (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                         >> 0x0000001fU))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__31__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[3U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[3U] 
           & (- (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                         >> 0x0000001fU))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__31__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[4U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[4U] 
           & (- (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                         >> 0x0000001fU))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__31__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[5U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[5U] 
           & (- (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                         >> 0x0000001fU))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__31__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[6U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[6U] 
           & (- (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                         >> 0x0000001fU))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__31__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[7U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[7U] 
           & (- (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                         >> 0x0000001fU))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__31__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[8U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[8U] 
           & (- (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                         >> 0x0000001fU))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__31__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o[9U] 
        = (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_rf_bignum__DOT__gen_rf_bignum_ff__DOT__u_otbn_rf_bignum_inner__DOT__g_rf__BRA__0__KET____DOT__u_wdata_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__in0_i[9U] 
           & (- (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_instruction_fetch__DOT____Vcellout__u_rf_predec_bignum_flop__q_o[0U] 
                         >> 0x0000001fU))));
}

extern const VlWide<8>/*255:0*/ Vsim__ConstPool__CONST_h9e67c271_0;

void Vsim___024root___nba_comb__TOP__71(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__71\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*63:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT____VdfgExtracted_h435ad752__1;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT____VdfgExtracted_h435ad752__1 = 0;
    QData/*63:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT____VdfgExtracted_h99e0c7c1__1;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT____VdfgExtracted_h99e0c7c1__1 = 0;
    QData/*63:0*/ __Vfunc_sbox4_64bit__1829__Vfuncout;
    __Vfunc_sbox4_64bit__1829__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_sbox4_64bit__1829__state_in;
    __Vfunc_sbox4_64bit__1829__state_in = 0;
    CData/*7:0*/ __Vfunc_sbox4_8bit__1830__Vfuncout;
    __Vfunc_sbox4_8bit__1830__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_sbox4_8bit__1830__state_in;
    __Vfunc_sbox4_8bit__1830__state_in = 0;
    QData/*63:0*/ __Vfunc_prince_mult_prime_64bit__1831__Vfuncout;
    __Vfunc_prince_mult_prime_64bit__1831__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_prince_mult_prime_64bit__1831__state_in;
    __Vfunc_prince_mult_prime_64bit__1831__state_in = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__1832__Vfuncout;
    __Vfunc_prince_nibble_red16__1832__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__1832__vect;
    __Vfunc_prince_nibble_red16__1832__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__1833__Vfuncout;
    __Vfunc_prince_nibble_red16__1833__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__1833__vect;
    __Vfunc_prince_nibble_red16__1833__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__1834__Vfuncout;
    __Vfunc_prince_nibble_red16__1834__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__1834__vect;
    __Vfunc_prince_nibble_red16__1834__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__1835__Vfuncout;
    __Vfunc_prince_nibble_red16__1835__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__1835__vect;
    __Vfunc_prince_nibble_red16__1835__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__1836__Vfuncout;
    __Vfunc_prince_nibble_red16__1836__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__1836__vect;
    __Vfunc_prince_nibble_red16__1836__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__1837__Vfuncout;
    __Vfunc_prince_nibble_red16__1837__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__1837__vect;
    __Vfunc_prince_nibble_red16__1837__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__1838__Vfuncout;
    __Vfunc_prince_nibble_red16__1838__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__1838__vect;
    __Vfunc_prince_nibble_red16__1838__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__1839__Vfuncout;
    __Vfunc_prince_nibble_red16__1839__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__1839__vect;
    __Vfunc_prince_nibble_red16__1839__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__1840__Vfuncout;
    __Vfunc_prince_nibble_red16__1840__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__1840__vect;
    __Vfunc_prince_nibble_red16__1840__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__1841__Vfuncout;
    __Vfunc_prince_nibble_red16__1841__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__1841__vect;
    __Vfunc_prince_nibble_red16__1841__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__1842__Vfuncout;
    __Vfunc_prince_nibble_red16__1842__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__1842__vect;
    __Vfunc_prince_nibble_red16__1842__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__1843__Vfuncout;
    __Vfunc_prince_nibble_red16__1843__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__1843__vect;
    __Vfunc_prince_nibble_red16__1843__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__1844__Vfuncout;
    __Vfunc_prince_nibble_red16__1844__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__1844__vect;
    __Vfunc_prince_nibble_red16__1844__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__1845__Vfuncout;
    __Vfunc_prince_nibble_red16__1845__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__1845__vect;
    __Vfunc_prince_nibble_red16__1845__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__1846__Vfuncout;
    __Vfunc_prince_nibble_red16__1846__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__1846__vect;
    __Vfunc_prince_nibble_red16__1846__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__1847__Vfuncout;
    __Vfunc_prince_nibble_red16__1847__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__1847__vect;
    __Vfunc_prince_nibble_red16__1847__vect = 0;
    QData/*63:0*/ __Vfunc_prince_shiftrows_64bit__1848__Vfuncout;
    __Vfunc_prince_shiftrows_64bit__1848__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_prince_shiftrows_64bit__1848__state_in;
    __Vfunc_prince_shiftrows_64bit__1848__state_in = 0;
    QData/*63:0*/ __Vfunc_prince_mult_prime_64bit__1849__Vfuncout;
    __Vfunc_prince_mult_prime_64bit__1849__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_prince_mult_prime_64bit__1849__state_in;
    __Vfunc_prince_mult_prime_64bit__1849__state_in = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__1850__Vfuncout;
    __Vfunc_prince_nibble_red16__1850__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__1850__vect;
    __Vfunc_prince_nibble_red16__1850__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__1851__Vfuncout;
    __Vfunc_prince_nibble_red16__1851__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__1851__vect;
    __Vfunc_prince_nibble_red16__1851__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__1852__Vfuncout;
    __Vfunc_prince_nibble_red16__1852__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__1852__vect;
    __Vfunc_prince_nibble_red16__1852__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__1853__Vfuncout;
    __Vfunc_prince_nibble_red16__1853__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__1853__vect;
    __Vfunc_prince_nibble_red16__1853__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__1854__Vfuncout;
    __Vfunc_prince_nibble_red16__1854__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__1854__vect;
    __Vfunc_prince_nibble_red16__1854__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__1855__Vfuncout;
    __Vfunc_prince_nibble_red16__1855__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__1855__vect;
    __Vfunc_prince_nibble_red16__1855__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__1856__Vfuncout;
    __Vfunc_prince_nibble_red16__1856__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__1856__vect;
    __Vfunc_prince_nibble_red16__1856__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__1857__Vfuncout;
    __Vfunc_prince_nibble_red16__1857__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__1857__vect;
    __Vfunc_prince_nibble_red16__1857__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__1858__Vfuncout;
    __Vfunc_prince_nibble_red16__1858__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__1858__vect;
    __Vfunc_prince_nibble_red16__1858__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__1859__Vfuncout;
    __Vfunc_prince_nibble_red16__1859__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__1859__vect;
    __Vfunc_prince_nibble_red16__1859__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__1860__Vfuncout;
    __Vfunc_prince_nibble_red16__1860__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__1860__vect;
    __Vfunc_prince_nibble_red16__1860__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__1861__Vfuncout;
    __Vfunc_prince_nibble_red16__1861__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__1861__vect;
    __Vfunc_prince_nibble_red16__1861__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__1862__Vfuncout;
    __Vfunc_prince_nibble_red16__1862__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__1862__vect;
    __Vfunc_prince_nibble_red16__1862__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__1863__Vfuncout;
    __Vfunc_prince_nibble_red16__1863__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__1863__vect;
    __Vfunc_prince_nibble_red16__1863__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__1864__Vfuncout;
    __Vfunc_prince_nibble_red16__1864__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__1864__vect;
    __Vfunc_prince_nibble_red16__1864__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__1865__Vfuncout;
    __Vfunc_prince_nibble_red16__1865__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__1865__vect;
    __Vfunc_prince_nibble_red16__1865__vect = 0;
    QData/*63:0*/ __Vfunc_prince_shiftrows_64bit__1866__Vfuncout;
    __Vfunc_prince_shiftrows_64bit__1866__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_prince_shiftrows_64bit__1866__state_in;
    __Vfunc_prince_shiftrows_64bit__1866__state_in = 0;
    QData/*63:0*/ __Vfunc_prince_mult_prime_64bit__1867__Vfuncout;
    __Vfunc_prince_mult_prime_64bit__1867__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_prince_mult_prime_64bit__1867__state_in;
    __Vfunc_prince_mult_prime_64bit__1867__state_in = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__1868__Vfuncout;
    __Vfunc_prince_nibble_red16__1868__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__1868__vect;
    __Vfunc_prince_nibble_red16__1868__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__1869__Vfuncout;
    __Vfunc_prince_nibble_red16__1869__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__1869__vect;
    __Vfunc_prince_nibble_red16__1869__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__1870__Vfuncout;
    __Vfunc_prince_nibble_red16__1870__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__1870__vect;
    __Vfunc_prince_nibble_red16__1870__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__1871__Vfuncout;
    __Vfunc_prince_nibble_red16__1871__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__1871__vect;
    __Vfunc_prince_nibble_red16__1871__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__1872__Vfuncout;
    __Vfunc_prince_nibble_red16__1872__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__1872__vect;
    __Vfunc_prince_nibble_red16__1872__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__1873__Vfuncout;
    __Vfunc_prince_nibble_red16__1873__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__1873__vect;
    __Vfunc_prince_nibble_red16__1873__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__1874__Vfuncout;
    __Vfunc_prince_nibble_red16__1874__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__1874__vect;
    __Vfunc_prince_nibble_red16__1874__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__1875__Vfuncout;
    __Vfunc_prince_nibble_red16__1875__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__1875__vect;
    __Vfunc_prince_nibble_red16__1875__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__1876__Vfuncout;
    __Vfunc_prince_nibble_red16__1876__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__1876__vect;
    __Vfunc_prince_nibble_red16__1876__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__1877__Vfuncout;
    __Vfunc_prince_nibble_red16__1877__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__1877__vect;
    __Vfunc_prince_nibble_red16__1877__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__1878__Vfuncout;
    __Vfunc_prince_nibble_red16__1878__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__1878__vect;
    __Vfunc_prince_nibble_red16__1878__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__1879__Vfuncout;
    __Vfunc_prince_nibble_red16__1879__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__1879__vect;
    __Vfunc_prince_nibble_red16__1879__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__1880__Vfuncout;
    __Vfunc_prince_nibble_red16__1880__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__1880__vect;
    __Vfunc_prince_nibble_red16__1880__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__1881__Vfuncout;
    __Vfunc_prince_nibble_red16__1881__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__1881__vect;
    __Vfunc_prince_nibble_red16__1881__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__1882__Vfuncout;
    __Vfunc_prince_nibble_red16__1882__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__1882__vect;
    __Vfunc_prince_nibble_red16__1882__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__1883__Vfuncout;
    __Vfunc_prince_nibble_red16__1883__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__1883__vect;
    __Vfunc_prince_nibble_red16__1883__vect = 0;
    QData/*63:0*/ __Vfunc_prince_shiftrows_64bit__1884__Vfuncout;
    __Vfunc_prince_shiftrows_64bit__1884__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_prince_shiftrows_64bit__1884__state_in;
    __Vfunc_prince_shiftrows_64bit__1884__state_in = 0;
    QData/*63:0*/ __Vfunc_sbox4_64bit__1961__Vfuncout;
    __Vfunc_sbox4_64bit__1961__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_sbox4_64bit__1961__state_in;
    __Vfunc_sbox4_64bit__1961__state_in = 0;
    CData/*7:0*/ __Vfunc_sbox4_8bit__1962__Vfuncout;
    __Vfunc_sbox4_8bit__1962__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_sbox4_8bit__1962__state_in;
    __Vfunc_sbox4_8bit__1962__state_in = 0;
    QData/*63:0*/ __Vfunc_sbox4_64bit__1963__Vfuncout;
    __Vfunc_sbox4_64bit__1963__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_sbox4_64bit__1963__state_in;
    __Vfunc_sbox4_64bit__1963__state_in = 0;
    CData/*7:0*/ __Vfunc_sbox4_8bit__1964__Vfuncout;
    __Vfunc_sbox4_8bit__1964__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_sbox4_8bit__1964__state_in;
    __Vfunc_sbox4_8bit__1964__state_in = 0;
    QData/*63:0*/ __Vfunc_sbox4_64bit__1965__Vfuncout;
    __Vfunc_sbox4_64bit__1965__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_sbox4_64bit__1965__state_in;
    __Vfunc_sbox4_64bit__1965__state_in = 0;
    CData/*7:0*/ __Vfunc_sbox4_8bit__1966__Vfuncout;
    __Vfunc_sbox4_8bit__1966__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_sbox4_8bit__1966__state_in;
    __Vfunc_sbox4_8bit__1966__state_in = 0;
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_186;
    __VdfgRegularize_h6e95ff9d_0_186 = 0;
    CData/*1:0*/ __VdfgRegularize_h6e95ff9d_0_188;
    __VdfgRegularize_h6e95ff9d_0_188 = 0;
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o[0U][0U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_socket.tl_d_o
        [0U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o[0U][1U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_socket.tl_d_o
        [0U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o[0U][2U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_socket.tl_d_o
        [0U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o[0U][3U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_socket.tl_d_o
        [0U][3U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o[1U][0U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_socket.tl_d_o
        [1U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o[1U][1U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_socket.tl_d_o
        [1U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o[1U][2U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_socket.tl_d_o
        [1U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o[1U][3U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_socket.tl_d_o
        [1U][3U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o[2U][0U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_socket.tl_d_o
        [2U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o[2U][1U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_socket.tl_d_o
        [2U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o[2U][2U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_socket.tl_d_o
        [2U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o[2U][3U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_socket.tl_d_o
        [2U][3U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__wmask_int[0U] 
        = Vsim__ConstPool__CONST_h9e67c271_0[0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__wmask_int[1U] 
        = Vsim__ConstPool__CONST_h9e67c271_0[1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__wmask_int[2U] 
        = Vsim__ConstPool__CONST_h9e67c271_0[2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__wmask_int[3U] 
        = Vsim__ConstPool__CONST_h9e67c271_0[3U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__wmask_int[4U] 
        = Vsim__ConstPool__CONST_h9e67c271_0[4U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__wmask_int[5U] 
        = Vsim__ConstPool__CONST_h9e67c271_0[5U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__wmask_int[6U] 
        = Vsim__ConstPool__CONST_h9e67c271_0[6U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__wmask_int[7U] 
        = Vsim__ConstPool__CONST_h9e67c271_0[7U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d[0U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
        [0U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d[0U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
        [0U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d[0U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
        [0U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d[0U][3U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
        [0U][3U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d[1U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
        [1U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d[1U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
        [1U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d[1U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
        [1U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d[1U][3U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
        [1U][3U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d[2U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
        [2U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d[2U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
        [2U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d[2U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
        [2U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_h2d[2U][3U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
        [2U][3U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_reg_if__DOT__d_ack 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_reg_if__DOT__outstanding_q) 
           & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
           [2U][0U]);
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__wmask_intg = 0ULL;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__wdata_intg = 0ULL;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__tl_win_h2d[0U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
        [0U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__tl_win_h2d[0U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
        [0U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__tl_win_h2d[0U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
        [0U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__tl_win_h2d[0U][3U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
        [0U][3U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__tl_win_h2d[1U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
        [1U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__tl_win_h2d[1U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
        [1U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__tl_win_h2d[1U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
        [1U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__tl_win_h2d[1U][3U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
        [1U][3U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__u_reqfifo__DOT__rready_i 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__d_valid) 
           & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
           [0U][0U]);
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__u_reqfifo__DOT__rready_i 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__d_valid) 
           & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
           [1U][0U]);
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__data_i 
        = (0x0000007fU & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__busy_execute_q)
                           ? ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__u_lsu_addr_blanker__DOT__u_blank_and__DOT__gen_generic__DOT__u_impl_generic__DOT__out_o) 
                              >> 5U) : ((0x00001000U 
                                         & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                         [1U][3U]) ? 
                                        ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                          [1U][2U] 
                                          << 0x0000001fU) 
                                         | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                            [1U][2U] 
                                            >> 1U))
                                         : 0U)));
    if ((0x00001000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
         [1U][3U])) {
        VL_ASSIGNSEL_WI(256, 8, (0x000000ffU & VL_SHIFTL_III(8,32,32, 
                                                             (7U 
                                                              & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                                  [1U][2U] 
                                                                  << 2U) 
                                                                 | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                                    [1U][1U] 
                                                                    >> 0x0000001eU))), 5U)), vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__wmask_int, 
                        (0x000000ffU & (- (IData)((1U 
                                                   & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                      [1U][1U] 
                                                      >> 0x00000018U))))));
        VL_ASSIGNSEL_WI(256, 8, (0x000000ffU & ((IData)(8U) 
                                                + VL_SHIFTL_III(8,32,32, 
                                                                (7U 
                                                                 & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                                     [1U][2U] 
                                                                     << 2U) 
                                                                    | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                                       [1U][1U] 
                                                                       >> 0x0000001eU))), 5U))), vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__wmask_int, 
                        (0x000000ffU & (- (IData)((1U 
                                                   & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                      [1U][1U] 
                                                      >> 0x00000019U))))));
        VL_ASSIGNSEL_WI(256, 8, (0x000000ffU & ((IData)(0x10U) 
                                                + VL_SHIFTL_III(8,32,32, 
                                                                (7U 
                                                                 & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                                     [1U][2U] 
                                                                     << 2U) 
                                                                    | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                                       [1U][1U] 
                                                                       >> 0x0000001eU))), 5U))), vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__wmask_int, 
                        (0x000000ffU & (- (IData)((1U 
                                                   & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                      [1U][1U] 
                                                      >> 0x0000001aU))))));
        VL_ASSIGNSEL_WI(256, 8, (0x000000ffU & ((IData)(0x18U) 
                                                + VL_SHIFTL_III(8,32,32, 
                                                                (7U 
                                                                 & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                                     [1U][2U] 
                                                                     << 2U) 
                                                                    | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                                       [1U][1U] 
                                                                       >> 0x0000001eU))), 5U))), vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__wmask_int, 
                        (0x000000ffU & (- (IData)((1U 
                                                   & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                      [1U][1U] 
                                                      >> 0x0000001bU))))));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__unnamedblk1__DOT__i = 4U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT____Vlvbound_h143489bb__0 = 0x7fU;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT____Vlvbound_h6b9e49de__0 
            = (0x0000007fU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                              [1U][0U] >> 1U));
        if ((0x37U >= (0x0000003fU & ((IData)(7U) * 
                                      (7U & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                              [1U][2U] 
                                              << 2U) 
                                             | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                [1U][1U] 
                                                >> 0x0000001eU))))))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__wmask_intg 
                = (((~ (0x000000000000007fULL << (0x0000003fU 
                                                  & ((IData)(7U) 
                                                     * 
                                                     (7U 
                                                      & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                          [1U][2U] 
                                                          << 2U) 
                                                         | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                            [1U][1U] 
                                                            >> 0x0000001eU))))))) 
                    & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__wmask_intg) 
                   | (0x00ffffffffffffffULL & ((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT____Vlvbound_h143489bb__0)) 
                                               << (0x0000003fU 
                                                   & ((IData)(7U) 
                                                      * 
                                                      (7U 
                                                       & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                           [1U][2U] 
                                                           << 2U) 
                                                          | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                             [1U][1U] 
                                                             >> 0x0000001eU))))))));
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__wdata_intg 
                = (((~ (0x000000000000007fULL << (0x0000003fU 
                                                  & ((IData)(7U) 
                                                     * 
                                                     (7U 
                                                      & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                          [1U][2U] 
                                                          << 2U) 
                                                         | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                            [1U][1U] 
                                                            >> 0x0000001eU))))))) 
                    & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__wdata_intg) 
                   | (0x00ffffffffffffffULL & ((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT____Vlvbound_h6b9e49de__0)) 
                                               << (0x0000003fU 
                                                   & ((IData)(7U) 
                                                      * 
                                                      (7U 
                                                       & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                           [1U][2U] 
                                                           << 2U) 
                                                          | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                             [1U][1U] 
                                                             >> 0x0000001eU))))))));
        }
    }
    if ((0x00001000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
         [0U][3U])) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__unnamedblk1__DOT__i = 4U;
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__instr_error 
        = (([&]() {
                vlSelfRef.__Vfunc_mubi4_test_invalid__1970__val 
                    = (0x0000000fU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                      [1U][0U] >> 0x0000000fU));
                vlSelfRef.__Vfunc_mubi4_test_invalid__1970__Vfuncout 
                    = (1U & (~ ((6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_invalid__1970__val)) 
                                | (9U == (IData)(vlSelfRef.__Vfunc_mubi4_test_invalid__1970__val)))));
            }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_invalid__1970__Vfuncout)) 
           | ([&]() {
                vlSelfRef.__Vfunc_mubi4_test_true_strict__1971__val 
                    = (0x0000000fU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                      [1U][0U] >> 0x0000000fU));
                vlSelfRef.__Vfunc_mubi4_test_true_strict__1971__Vfuncout 
                    = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__1971__val));
            }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__1971__Vfuncout)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__instr_error 
        = (([&]() {
                vlSelfRef.__Vfunc_mubi4_test_invalid__1778__val 
                    = (0x0000000fU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                      [0U][0U] >> 0x0000000fU));
                vlSelfRef.__Vfunc_mubi4_test_invalid__1778__Vfuncout 
                    = (1U & (~ ((6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_invalid__1778__val)) 
                                | (9U == (IData)(vlSelfRef.__Vfunc_mubi4_test_invalid__1778__val)))));
            }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_invalid__1778__Vfuncout)) 
           | ([&]() {
                vlSelfRef.__Vfunc_mubi4_test_true_strict__1779__val 
                    = (0x0000000fU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                      [0U][0U] >> 0x0000000fU));
                vlSelfRef.__Vfunc_mubi4_test_true_strict__1779__Vfuncout 
                    = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__1779__val));
            }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__1779__Vfuncout)));
    vlSelfRef.__VdfgRegularize_he50b618e_0_137 = ((0U 
                                                   == 
                                                   (7U 
                                                    & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                       [1U][3U] 
                                                       >> 9U))) 
                                                  | (1U 
                                                     == 
                                                     (7U 
                                                      & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                         [1U][3U] 
                                                         >> 9U))));
    vlSelfRef.__VdfgRegularize_he50b618e_0_135 = ((0U 
                                                   == 
                                                   (7U 
                                                    & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                       [0U][3U] 
                                                       >> 9U))) 
                                                  | (1U 
                                                     == 
                                                     (7U 
                                                      & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                         [0U][3U] 
                                                         >> 9U))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__addr_hit 
        = ((((((0x000aU == (0x00003fffU & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                            [2U][2U] 
                                            << 2U) 
                                           | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                              [2U][1U] 
                                              >> 0x0000001eU)))) 
               << 5U) | (((9U == (0x00003fffU & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                  [2U][2U] 
                                                  << 2U) 
                                                 | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                    [2U][1U] 
                                                    >> 0x0000001eU)))) 
                          << 4U) | ((8U == (0x00003fffU 
                                            & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                [2U][2U] 
                                                << 2U) 
                                               | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                  [2U][1U] 
                                                  >> 0x0000001eU)))) 
                                    << 3U))) | (((7U 
                                                  == 
                                                  (0x00003fffU 
                                                   & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                       [2U][2U] 
                                                       << 2U) 
                                                      | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                         [2U][1U] 
                                                         >> 0x0000001eU)))) 
                                                 << 2U) 
                                                | (((6U 
                                                     == 
                                                     (0x00003fffU 
                                                      & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                          [2U][2U] 
                                                          << 2U) 
                                                         | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                            [2U][1U] 
                                                            >> 0x0000001eU)))) 
                                                    << 1U) 
                                                   | (5U 
                                                      == 
                                                      (0x00003fffU 
                                                       & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                           [2U][2U] 
                                                           << 2U) 
                                                          | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                             [2U][1U] 
                                                             >> 0x0000001eU))))))) 
            << 5U) | ((((4U == (0x00003fffU & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                [2U][2U] 
                                                << 2U) 
                                               | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                  [2U][1U] 
                                                  >> 0x0000001eU)))) 
                        << 4U) | (((3U == (0x00003fffU 
                                           & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                               [2U][2U] 
                                               << 2U) 
                                              | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                 [2U][1U] 
                                                 >> 0x0000001eU)))) 
                                   << 3U) | ((2U == 
                                              (0x00003fffU 
                                               & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                   [2U][2U] 
                                                   << 2U) 
                                                  | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                     [2U][1U] 
                                                     >> 0x0000001eU)))) 
                                             << 2U))) 
                      | (((1U == (0x00003fffU & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                  [2U][2U] 
                                                  << 2U) 
                                                 | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                    [2U][1U] 
                                                    >> 0x0000001eU)))) 
                          << 1U) | (0U == (0x00003fffU 
                                           & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                               [2U][2U] 
                                               << 2U) 
                                              | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                 [2U][1U] 
                                                 >> 0x0000001eU)))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__addr_o 
        = ((0x00001000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
            [0U][3U]) ? (0x000007ffU & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                         [0U][2U] << 2U) 
                                        | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                           [0U][1U] 
                                           >> 0x0000001eU)))
            : 0U);
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_reg_if__DOT__instr_error 
        = ([&]() {
            vlSelfRef.__Vfunc_mubi4_test_true_strict__1981__val 
                = (0x0000000fU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                  [2U][0U] >> 0x0000000fU));
            vlSelfRef.__Vfunc_mubi4_test_true_strict__1981__Vfuncout 
                = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__1981__val));
        }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__1981__Vfuncout));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_reg_if__DOT__a_ack 
        = (1U & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_reg_if__DOT__outstanding_q)) 
                 & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                    [2U][3U] >> 0x0000000cU)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__tl_win_o[0U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__tl_win_h2d
        [0U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__tl_win_o[0U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__tl_win_h2d
        [0U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__tl_win_o[0U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__tl_win_h2d
        [0U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__tl_win_o[0U][3U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__tl_win_h2d
        [0U][3U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__tl_win_o[1U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__tl_win_h2d
        [1U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__tl_win_o[1U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__tl_win_h2d
        [1U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__tl_win_o[1U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__tl_win_h2d
        [1U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__tl_win_o[1U][3U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__tl_win_h2d
        [1U][3U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__u_rspfifo__DOT__gen_singleton_fifo__DOT__full_d 
        = (1U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__u_rspfifo__DOT__rvalid_o)
                  ? (~ (IData)(((0x00008000U == (0x0001c000U 
                                                 & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__u_reqfifo__DOT__rdata_o)) 
                                & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__u_reqfifo__DOT__rready_i))))
                  : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__u_rspfifo__DOT__wvalid_i)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__u_rspfifo__DOT__gen_singleton_fifo__DOT__full_d 
        = (1U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__u_rspfifo__DOT__rvalid_o)
                  ? (~ (IData)(((0x00008000U == (0x0001c000U 
                                                 & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__u_reqfifo__DOT__rdata_o)) 
                                & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__u_reqfifo__DOT__rready_i))))
                  : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__u_rspfifo__DOT__wvalid_i)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_lo__BRA__63__03a0__KET__ 
        = (((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__dmem_nonce_q 
             << 7U) | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__data_i))) 
           ^ (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__k0 
              ^ (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__dmem_key_q[1U])) 
                  << 0x00000020U) | (QData)((IData)(
                                                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__dmem_key_q[0U])))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_185 = (0x0000007fU 
                                                  & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__data_i) 
                                                     ^ (IData)(
                                                               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__dmem_nonce_q 
                                                                >> 0x00000039U))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__we_o 
        = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
            [1U][3U] >> 0x0000000cU) & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_137));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__we_o 
        = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
            [0U][3U] >> 0x0000000cU) & (IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_135));
    if ((1U & (~ VL_ONEHOT_I((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__addr_hit))))) {
        if ((0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__addr_hit))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: otbn_reg_top.sv:1065: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_otbn.u_reg: unique case, but multiple matches found for '1'h1'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name());
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/otbn_reg_top.sv", 1065, "");
            }
        }
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__wdata_int 
        = ((0x00001000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
            [0U][3U]) ? ((((((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                              [0U][1U] >> 0x0000001bU) 
                             & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__we_o))
                             ? (0x000000ffU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                               [0U][1U] 
                                               >> 0x00000010U))
                             : 0U) << 0x00000018U) 
                          | ((((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                [0U][1U] >> 0x0000001aU) 
                               & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__we_o))
                               ? (0x000000ffU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                 [0U][1U] 
                                                 >> 8U))
                               : 0U) << 0x00000010U)) 
                         | (((((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                [0U][1U] >> 0x00000019U) 
                               & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__we_o))
                               ? (0x000000ffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                  [0U][1U]) : 0U) << 8U) 
                            | (((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                 [0U][1U] >> 0x00000018U) 
                                & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__we_o))
                                ? (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                   [0U][0U] >> 0x00000018U)
                                : 0U))) : 0U);
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__reg_rdata_next = 0U;
    if ((IData)((0U != (0x00ffU & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__addr_hit))))) {
        if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__addr_hit))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xfffffffeU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__reg_rdata_next) 
                   | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_intr_state__q));
        } else if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__addr_hit))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xfffffffeU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__reg_rdata_next) 
                   | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_intr_enable__q));
        } else if ((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__addr_hit))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__reg_rdata_next 
                = (0xfffffffeU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__reg_rdata_next);
        } else if ((8U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__addr_hit))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__reg_rdata_next 
                = (0xfffffffcU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__reg_rdata_next);
        } else if ((0x00000010U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__addr_hit))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__reg_rdata_next 
                = (0xffffff00U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__reg_rdata_next);
        } else if ((0x00000020U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__addr_hit))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xfffffffeU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__reg_rdata_next) 
                   | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__software_errs_fatal_q));
        } else if ((0x00000040U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__addr_hit))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xffffff00U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__reg_rdata_next) 
                   | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_status__DOT__q));
        } else {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xffffff00U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__reg_rdata_next) 
                   | (0x000000ffU & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__err_bits_q)));
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__reg_rdata_next 
                = ((0xff00ffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__reg_rdata_next) 
                   | (0x00ff0000U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__err_bits_q) 
                                     << 8U)));
        }
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__reg_rdata_next 
            = ((0x00000100U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__addr_hit))
                ? ((0xffffff00U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__reg_rdata_next) 
                   | ((((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_fatal_alert_cause_fatal_software__DOT__q) 
                          << 3U) | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_fatal_alert_cause_lifecycle_escalation__DOT__q) 
                                    << 2U)) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_fatal_alert_cause_illegal_bus_access__DOT__q) 
                                                << 1U) 
                                               | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_fatal_alert_cause_bad_internal_state__DOT__q))) 
                       << 4U) | ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_fatal_alert_cause_bus_intg_violation__DOT__q) 
                                   << 3U) | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_fatal_alert_cause_reg_intg_violation__DOT__q) 
                                             << 2U)) 
                                 | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_fatal_alert_cause_dmem_intg_violation__DOT__q) 
                                     << 1U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_fatal_alert_cause_imem_intg_violation__DOT__q)))))
                : ((0x00000200U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__addr_hit))
                    ? vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__u_otbn_controller__DOT__insn_cnt_q
                    : ((0x00000400U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__addr_hit))
                        ? (~ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_mem_load_crc32__DOT__crc_q)
                        : 0xffffffffU)));
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_reg_if__DOT__rd_req 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_reg_if__DOT__a_ack) 
           & (4U == (7U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                           [2U][3U] >> 9U))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_reg_if__DOT__wr_req 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_reg_if__DOT__a_ack) 
           & ((0U == (7U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                            [2U][3U] >> 9U))) | (1U 
                                                 == 
                                                 (7U 
                                                  & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                     [2U][3U] 
                                                     >> 9U)))));
    __Vfunc_sbox4_64bit__1829__state_in = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_lo__BRA__63__03a0__KET__;
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__Vfunc_sbox4_64bit__1829__state_out = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 5957516621330142754ull);
    __Vfunc_sbox4_8bit__1830__state_in = (0x000000ffU 
                                          & (IData)(__Vfunc_sbox4_64bit__1829__state_in));
    vlSelf->__Vfunc_sbox4_8bit__1830__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1986609082913654200ull);
    vlSelfRef.__Vfunc_sbox4_8bit__1830__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1830__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__1830__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__1830__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1830__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__1830__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__1830__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__1830__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__1829__state_out 
        = ((0xffffffffffffff00ULL & vlSelfRef.__Vfunc_sbox4_64bit__1829__state_out) 
           | (IData)((IData)(__Vfunc_sbox4_8bit__1830__Vfuncout)));
    __Vfunc_sbox4_8bit__1830__state_in = (0x000000ffU 
                                          & (IData)(
                                                    (__Vfunc_sbox4_64bit__1829__state_in 
                                                     >> 8U)));
    vlSelf->__Vfunc_sbox4_8bit__1830__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1986609082913654200ull);
    vlSelfRef.__Vfunc_sbox4_8bit__1830__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1830__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__1830__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__1830__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1830__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__1830__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__1830__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__1830__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__1829__state_out 
        = ((0xffffffffffff00ffULL & vlSelfRef.__Vfunc_sbox4_64bit__1829__state_out) 
           | ((QData)((IData)(__Vfunc_sbox4_8bit__1830__Vfuncout)) 
              << 8U));
    __Vfunc_sbox4_8bit__1830__state_in = (0x000000ffU 
                                          & (IData)(
                                                    (__Vfunc_sbox4_64bit__1829__state_in 
                                                     >> 0x10U)));
    vlSelf->__Vfunc_sbox4_8bit__1830__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1986609082913654200ull);
    vlSelfRef.__Vfunc_sbox4_8bit__1830__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1830__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__1830__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__1830__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1830__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__1830__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__1830__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__1830__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__1829__state_out 
        = ((0xffffffffff00ffffULL & vlSelfRef.__Vfunc_sbox4_64bit__1829__state_out) 
           | ((QData)((IData)(__Vfunc_sbox4_8bit__1830__Vfuncout)) 
              << 0x00000010U));
    __Vfunc_sbox4_8bit__1830__state_in = (0x000000ffU 
                                          & (IData)(
                                                    (__Vfunc_sbox4_64bit__1829__state_in 
                                                     >> 0x18U)));
    vlSelf->__Vfunc_sbox4_8bit__1830__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1986609082913654200ull);
    vlSelfRef.__Vfunc_sbox4_8bit__1830__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1830__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__1830__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__1830__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1830__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__1830__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__1830__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__1830__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__1829__state_out 
        = ((0xffffffff00ffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__1829__state_out) 
           | ((QData)((IData)(__Vfunc_sbox4_8bit__1830__Vfuncout)) 
              << 0x00000018U));
    __Vfunc_sbox4_8bit__1830__state_in = (0x000000ffU 
                                          & (IData)(
                                                    (__Vfunc_sbox4_64bit__1829__state_in 
                                                     >> 0x20U)));
    vlSelf->__Vfunc_sbox4_8bit__1830__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1986609082913654200ull);
    vlSelfRef.__Vfunc_sbox4_8bit__1830__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1830__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__1830__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__1830__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1830__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__1830__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__1830__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__1830__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__1829__state_out 
        = ((0xffffff00ffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__1829__state_out) 
           | ((QData)((IData)(__Vfunc_sbox4_8bit__1830__Vfuncout)) 
              << 0x00000020U));
    __Vfunc_sbox4_8bit__1830__state_in = (0x000000ffU 
                                          & (IData)(
                                                    (__Vfunc_sbox4_64bit__1829__state_in 
                                                     >> 0x28U)));
    vlSelf->__Vfunc_sbox4_8bit__1830__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1986609082913654200ull);
    vlSelfRef.__Vfunc_sbox4_8bit__1830__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1830__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__1830__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__1830__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1830__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__1830__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__1830__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__1830__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__1829__state_out 
        = ((0xffff00ffffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__1829__state_out) 
           | ((QData)((IData)(__Vfunc_sbox4_8bit__1830__Vfuncout)) 
              << 0x00000028U));
    __Vfunc_sbox4_8bit__1830__state_in = (0x000000ffU 
                                          & (IData)(
                                                    (__Vfunc_sbox4_64bit__1829__state_in 
                                                     >> 0x30U)));
    vlSelf->__Vfunc_sbox4_8bit__1830__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1986609082913654200ull);
    vlSelfRef.__Vfunc_sbox4_8bit__1830__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1830__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__1830__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__1830__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1830__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__1830__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__1830__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__1830__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__1829__state_out 
        = ((0xff00ffffffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__1829__state_out) 
           | ((QData)((IData)(__Vfunc_sbox4_8bit__1830__Vfuncout)) 
              << 0x00000030U));
    __Vfunc_sbox4_8bit__1830__state_in = (0x000000ffU 
                                          & (IData)(
                                                    (__Vfunc_sbox4_64bit__1829__state_in 
                                                     >> 0x38U)));
    vlSelf->__Vfunc_sbox4_8bit__1830__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1986609082913654200ull);
    vlSelfRef.__Vfunc_sbox4_8bit__1830__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1830__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__1830__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__1830__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1830__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__1830__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__1830__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__1830__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__1829__state_out 
        = ((0x00ffffffffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__1829__state_out) 
           | ((QData)((IData)(__Vfunc_sbox4_8bit__1830__Vfuncout)) 
              << 0x00000038U));
    __Vfunc_sbox4_64bit__1829__Vfuncout = vlSelfRef.__Vfunc_sbox4_64bit__1829__state_out;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_fwd_pass__BRA__1__KET____DOT__data_state_round 
        = __Vfunc_sbox4_64bit__1829__Vfuncout;
    __Vfunc_prince_mult_prime_64bit__1831__state_in 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_fwd_pass__BRA__1__KET____DOT__data_state_round;
    vlSelf->__Vfunc_prince_mult_prime_64bit__1831__state_out = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 11713178612014916795ull);
    __Vfunc_prince_nibble_red16__1832__vect = (0xe7bdU 
                                               & (IData)(__Vfunc_prince_mult_prime_64bit__1831__state_in));
    __Vfunc_prince_nibble_red16__1832__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__1832__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__1832__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__1832__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__1832__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__1831__state_out 
        = ((0xfffffffffffffff0ULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__1831__state_out) 
           | (IData)((IData)(__Vfunc_prince_nibble_red16__1832__Vfuncout)));
    __Vfunc_prince_nibble_red16__1833__vect = (0xde7bU 
                                               & (IData)(__Vfunc_prince_mult_prime_64bit__1831__state_in));
    __Vfunc_prince_nibble_red16__1833__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__1833__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__1833__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__1833__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__1833__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__1831__state_out 
        = ((0xffffffffffffff0fULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__1831__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__1833__Vfuncout)) 
              << 4U));
    __Vfunc_prince_nibble_red16__1834__vect = (0xbde7U 
                                               & (IData)(__Vfunc_prince_mult_prime_64bit__1831__state_in));
    __Vfunc_prince_nibble_red16__1834__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__1834__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__1834__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__1834__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__1834__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__1831__state_out 
        = ((0xfffffffffffff0ffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__1831__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__1834__Vfuncout)) 
              << 8U));
    __Vfunc_prince_nibble_red16__1835__vect = (0x7bdeU 
                                               & (IData)(__Vfunc_prince_mult_prime_64bit__1831__state_in));
    __Vfunc_prince_nibble_red16__1835__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__1835__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__1835__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__1835__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__1835__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__1831__state_out 
        = ((0xffffffffffff0fffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__1831__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__1835__Vfuncout)) 
              << 0x0000000cU));
    __Vfunc_prince_nibble_red16__1836__vect = (0x7bdeU 
                                               & (IData)(
                                                         (__Vfunc_prince_mult_prime_64bit__1831__state_in 
                                                          >> 0x10U)));
    __Vfunc_prince_nibble_red16__1836__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__1836__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__1836__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__1836__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__1836__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__1831__state_out 
        = ((0xfffffffffff0ffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__1831__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__1836__Vfuncout)) 
              << 0x00000010U));
    __Vfunc_prince_nibble_red16__1837__vect = (0xe7bdU 
                                               & (IData)(
                                                         (__Vfunc_prince_mult_prime_64bit__1831__state_in 
                                                          >> 0x10U)));
    __Vfunc_prince_nibble_red16__1837__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__1837__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__1837__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__1837__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__1837__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__1831__state_out 
        = ((0xffffffffff0fffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__1831__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__1837__Vfuncout)) 
              << 0x00000014U));
    __Vfunc_prince_nibble_red16__1838__vect = (0xde7bU 
                                               & (IData)(
                                                         (__Vfunc_prince_mult_prime_64bit__1831__state_in 
                                                          >> 0x10U)));
    __Vfunc_prince_nibble_red16__1838__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__1838__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__1838__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__1838__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__1838__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__1831__state_out 
        = ((0xfffffffff0ffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__1831__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__1838__Vfuncout)) 
              << 0x00000018U));
    __Vfunc_prince_nibble_red16__1839__vect = (0xbde7U 
                                               & (IData)(
                                                         (__Vfunc_prince_mult_prime_64bit__1831__state_in 
                                                          >> 0x10U)));
    __Vfunc_prince_nibble_red16__1839__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__1839__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__1839__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__1839__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__1839__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__1831__state_out 
        = ((0xffffffff0fffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__1831__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__1839__Vfuncout)) 
              << 0x0000001cU));
    __Vfunc_prince_nibble_red16__1840__vect = (0x7bdeU 
                                               & (IData)(
                                                         (__Vfunc_prince_mult_prime_64bit__1831__state_in 
                                                          >> 0x20U)));
    __Vfunc_prince_nibble_red16__1840__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__1840__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__1840__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__1840__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__1840__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__1831__state_out 
        = ((0xfffffff0ffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__1831__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__1840__Vfuncout)) 
              << 0x00000020U));
    __Vfunc_prince_nibble_red16__1841__vect = (0xe7bdU 
                                               & (IData)(
                                                         (__Vfunc_prince_mult_prime_64bit__1831__state_in 
                                                          >> 0x20U)));
    __Vfunc_prince_nibble_red16__1841__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__1841__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__1841__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__1841__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__1841__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__1831__state_out 
        = ((0xffffff0fffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__1831__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__1841__Vfuncout)) 
              << 0x00000024U));
    __Vfunc_prince_nibble_red16__1842__vect = (0xde7bU 
                                               & (IData)(
                                                         (__Vfunc_prince_mult_prime_64bit__1831__state_in 
                                                          >> 0x20U)));
    __Vfunc_prince_nibble_red16__1842__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__1842__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__1842__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__1842__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__1842__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__1831__state_out 
        = ((0xfffff0ffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__1831__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__1842__Vfuncout)) 
              << 0x00000028U));
    __Vfunc_prince_nibble_red16__1843__vect = (0xbde7U 
                                               & (IData)(
                                                         (__Vfunc_prince_mult_prime_64bit__1831__state_in 
                                                          >> 0x20U)));
    __Vfunc_prince_nibble_red16__1843__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__1843__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__1843__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__1843__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__1843__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__1831__state_out 
        = ((0xffff0fffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__1831__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__1843__Vfuncout)) 
              << 0x0000002cU));
    __Vfunc_prince_nibble_red16__1844__vect = (0xe7bdU 
                                               & (IData)(
                                                         (__Vfunc_prince_mult_prime_64bit__1831__state_in 
                                                          >> 0x30U)));
    __Vfunc_prince_nibble_red16__1844__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__1844__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__1844__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__1844__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__1844__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__1831__state_out 
        = ((0xfff0ffffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__1831__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__1844__Vfuncout)) 
              << 0x00000030U));
    __Vfunc_prince_nibble_red16__1845__vect = (0xde7bU 
                                               & (IData)(
                                                         (__Vfunc_prince_mult_prime_64bit__1831__state_in 
                                                          >> 0x30U)));
    __Vfunc_prince_nibble_red16__1845__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__1845__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__1845__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__1845__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__1845__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__1831__state_out 
        = ((0xff0fffffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__1831__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__1845__Vfuncout)) 
              << 0x00000034U));
    __Vfunc_prince_nibble_red16__1846__vect = (0xbde7U 
                                               & (IData)(
                                                         (__Vfunc_prince_mult_prime_64bit__1831__state_in 
                                                          >> 0x30U)));
    __Vfunc_prince_nibble_red16__1846__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__1846__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__1846__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__1846__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__1846__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__1831__state_out 
        = ((0xf0ffffffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__1831__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__1846__Vfuncout)) 
              << 0x00000038U));
    __Vfunc_prince_nibble_red16__1847__vect = (0x7bdeU 
                                               & (IData)(
                                                         (__Vfunc_prince_mult_prime_64bit__1831__state_in 
                                                          >> 0x30U)));
    __Vfunc_prince_nibble_red16__1847__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__1847__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__1847__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__1847__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__1847__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__1831__state_out 
        = ((0x0fffffffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__1831__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__1847__Vfuncout)) 
              << 0x0000003cU));
    __Vfunc_prince_mult_prime_64bit__1831__Vfuncout 
        = vlSelfRef.__Vfunc_prince_mult_prime_64bit__1831__state_out;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_fwd_pass__BRA__1__KET____DOT__data_state_round 
        = __Vfunc_prince_mult_prime_64bit__1831__Vfuncout;
    __Vfunc_prince_shiftrows_64bit__1848__state_in 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_fwd_pass__BRA__1__KET____DOT__data_state_round;
    vlSelf->__Vfunc_prince_shiftrows_64bit__1848__state_out = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 6772581834986919470ull);
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__1848__state_out 
        = ((0xfffffffffffff000ULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__1848__state_out) 
           | (IData)((IData)(((0x00000f00U & ((IData)(
                                                      (__Vfunc_prince_shiftrows_64bit__1848__state_in 
                                                       >> 0x38U)) 
                                              << 8U)) 
                              | ((0x000000f0U & ((IData)(
                                                         (__Vfunc_prince_shiftrows_64bit__1848__state_in 
                                                          >> 0x24U)) 
                                                 << 4U)) 
                                 | (0x0000000fU & (IData)(
                                                          (__Vfunc_prince_shiftrows_64bit__1848__state_in 
                                                           >> 0x10U))))))));
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__1848__state_out 
        = ((0xffffffffff000fffULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__1848__state_out) 
           | ((QData)((IData)(((0x00000f00U & ((IData)(
                                                       (__Vfunc_prince_shiftrows_64bit__1848__state_in 
                                                        >> 0x34U)) 
                                               << 8U)) 
                               | ((0x000000f0U & ((IData)(
                                                          (__Vfunc_prince_shiftrows_64bit__1848__state_in 
                                                           >> 0x20U)) 
                                                  << 4U)) 
                                  | (0x0000000fU & (IData)(
                                                           (__Vfunc_prince_shiftrows_64bit__1848__state_in 
                                                            >> 0x0cU))))))) 
              << 0x0000000cU));
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__1848__state_out 
        = ((0xfffffff000ffffffULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__1848__state_out) 
           | ((QData)((IData)(((0x00000f00U & ((IData)(
                                                       (__Vfunc_prince_shiftrows_64bit__1848__state_in 
                                                        >> 0x30U)) 
                                               << 8U)) 
                               | ((0x000000f0U & ((IData)(
                                                          (__Vfunc_prince_shiftrows_64bit__1848__state_in 
                                                           >> 0x1cU)) 
                                                  << 4U)) 
                                  | (0x0000000fU & (IData)(
                                                           (__Vfunc_prince_shiftrows_64bit__1848__state_in 
                                                            >> 8U))))))) 
              << 0x00000018U));
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__1848__state_out 
        = ((0xffff000fffffffffULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__1848__state_out) 
           | ((QData)((IData)(((0x00000f00U & ((IData)(
                                                       (__Vfunc_prince_shiftrows_64bit__1848__state_in 
                                                        >> 0x2cU)) 
                                               << 8U)) 
                               | ((0x000000f0U & ((IData)(
                                                          (__Vfunc_prince_shiftrows_64bit__1848__state_in 
                                                           >> 0x18U)) 
                                                  << 4U)) 
                                  | (0x0000000fU & (IData)(
                                                           (__Vfunc_prince_shiftrows_64bit__1848__state_in 
                                                            >> 4U))))))) 
              << 0x00000024U));
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__1848__state_out 
        = ((0xf000ffffffffffffULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__1848__state_out) 
           | ((QData)((IData)(((0x00000f00U & ((IData)(
                                                       (__Vfunc_prince_shiftrows_64bit__1848__state_in 
                                                        >> 0x28U)) 
                                               << 8U)) 
                               | ((0x000000f0U & ((IData)(
                                                          (__Vfunc_prince_shiftrows_64bit__1848__state_in 
                                                           >> 0x14U)) 
                                                  << 4U)) 
                                  | (0x0000000fU & (IData)(__Vfunc_prince_shiftrows_64bit__1848__state_in)))))) 
              << 0x00000030U));
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__1848__state_out 
        = ((0x0fffffffffffffffULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__1848__state_out) 
           | ((QData)((IData)((0x0000000fU & (IData)(
                                                     (__Vfunc_prince_shiftrows_64bit__1848__state_in 
                                                      >> 0x3cU))))) 
              << 0x0000003cU));
    __Vfunc_prince_shiftrows_64bit__1848__Vfuncout 
        = vlSelfRef.__Vfunc_prince_shiftrows_64bit__1848__state_out;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_fwd_pass__BRA__1__KET____DOT__data_state_round 
        = __Vfunc_prince_shiftrows_64bit__1848__Vfuncout;
    __VdfgRegularize_h6e95ff9d_0_186 = ((2U & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_185) 
                                               >> 3U)) 
                                        | (1U & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_185) 
                                                 >> 6U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__wdata_int[0U] 
        = Vsim__ConstPool__CONST_h9e67c271_0[0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__wdata_int[1U] 
        = Vsim__ConstPool__CONST_h9e67c271_0[1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__wdata_int[2U] 
        = Vsim__ConstPool__CONST_h9e67c271_0[2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__wdata_int[3U] 
        = Vsim__ConstPool__CONST_h9e67c271_0[3U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__wdata_int[4U] 
        = Vsim__ConstPool__CONST_h9e67c271_0[4U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__wdata_int[5U] 
        = Vsim__ConstPool__CONST_h9e67c271_0[5U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__wdata_int[6U] 
        = Vsim__ConstPool__CONST_h9e67c271_0[6U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__wdata_int[7U] 
        = Vsim__ConstPool__CONST_h9e67c271_0[7U];
    if ((0x00001000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
         [1U][3U])) {
        VL_ASSIGNSEL_WI(256, 8, (0x000000ffU & VL_SHIFTL_III(8,32,32, 
                                                             (7U 
                                                              & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                                  [1U][2U] 
                                                                  << 2U) 
                                                                 | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                                    [1U][1U] 
                                                                    >> 0x0000001eU))), 5U)), vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__wdata_int, 
                        (((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                           [1U][1U] >> 0x00000018U) 
                          & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__we_o))
                          ? (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                             [1U][0U] >> 0x00000018U)
                          : 0U));
        VL_ASSIGNSEL_WI(256, 8, (0x000000ffU & ((IData)(8U) 
                                                + VL_SHIFTL_III(8,32,32, 
                                                                (7U 
                                                                 & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                                     [1U][2U] 
                                                                     << 2U) 
                                                                    | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                                       [1U][1U] 
                                                                       >> 0x0000001eU))), 5U))), vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__wdata_int, 
                        (((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                           [1U][1U] >> 0x00000019U) 
                          & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__we_o))
                          ? (0x000000ffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                             [1U][1U]) : 0U));
        VL_ASSIGNSEL_WI(256, 8, (0x000000ffU & ((IData)(0x10U) 
                                                + VL_SHIFTL_III(8,32,32, 
                                                                (7U 
                                                                 & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                                     [1U][2U] 
                                                                     << 2U) 
                                                                    | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                                       [1U][1U] 
                                                                       >> 0x0000001eU))), 5U))), vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__wdata_int, 
                        (((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                           [1U][1U] >> 0x0000001aU) 
                          & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__we_o))
                          ? (0x000000ffU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                            [1U][1U] 
                                            >> 8U))
                          : 0U));
        VL_ASSIGNSEL_WI(256, 8, (0x000000ffU & ((IData)(0x18U) 
                                                + VL_SHIFTL_III(8,32,32, 
                                                                (7U 
                                                                 & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                                     [1U][2U] 
                                                                     << 2U) 
                                                                    | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                                       [1U][1U] 
                                                                       >> 0x0000001eU))), 5U))), vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__wdata_int, 
                        (((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                           [1U][1U] >> 0x0000001bU) 
                          & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__we_o))
                          ? (0x000000ffU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                            [1U][1U] 
                                            >> 0x00000010U))
                          : 0U));
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_imem__DOT__write_i 
        = ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__imem_access_core)) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__we_o));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_lo__BRA__127__03a64__KET__ 
        = (0x13198a2e03707344ULL ^ (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_fwd_pass__BRA__1__KET____DOT__data_state_round 
                                    ^ (((QData)((IData)(
                                                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__dmem_key_q[3U])) 
                                        << 0x00000020U) 
                                       | (QData)((IData)(
                                                         vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__dmem_key_q[2U])))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_sbox 
        = (((((2U & ((IData)((0x21748fe3da09b65cULL 
                              >> (0x0000003fU & VL_SHIFTL_III(6,6,32, 
                                                              (0x0000000fU 
                                                               & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_185)), 2U)))) 
                     << 1U)) | (1U & (IData)((0x21748fe3da09b65cULL 
                                              >> ((IData)(1U) 
                                                  + 
                                                  (0x0000003fU 
                                                   & VL_SHIFTL_III(6,6,32, 
                                                                   (0x0000000fU 
                                                                    & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_185)), 2U))))))) 
             << 5U) | (((2U & ((IData)((0x21748fe3da09b65cULL 
                                        >> ((IData)(3U) 
                                            + (0x0000003fU 
                                               & VL_SHIFTL_III(6,6,32, 
                                                               (0x0000000fU 
                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_185)), 2U))))) 
                               << 1U)) | (1U & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_185) 
                                                >> 5U))) 
                       << 3U)) | ((4U & ((IData)((0x21748fe3da09b65cULL 
                                                  >> 
                                                  ((IData)(2U) 
                                                   + 
                                                   (0x0000003fU 
                                                    & VL_SHIFTL_III(6,6,32, 
                                                                    (0x0000000fU 
                                                                     & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_185)), 2U))))) 
                                         << 2U)) | (IData)(__VdfgRegularize_h6e95ff9d_0_186)));
    __Vfunc_sbox4_64bit__1961__state_in = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_lo__BRA__127__03a64__KET__;
    vlSelf->__Vfunc_sbox4_64bit__1961__state_out = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 5647055171731995866ull);
    __Vfunc_sbox4_8bit__1962__state_in = (0x000000ffU 
                                          & (IData)(__Vfunc_sbox4_64bit__1961__state_in));
    vlSelf->__Vfunc_sbox4_8bit__1962__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12875472226407103035ull);
    vlSelfRef.__Vfunc_sbox4_8bit__1962__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1962__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__1962__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__1962__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1962__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__1962__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__1962__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__1962__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__1961__state_out 
        = ((0xffffffffffffff00ULL & vlSelfRef.__Vfunc_sbox4_64bit__1961__state_out) 
           | (IData)((IData)(__Vfunc_sbox4_8bit__1962__Vfuncout)));
    __Vfunc_sbox4_8bit__1962__state_in = (0x000000ffU 
                                          & (IData)(
                                                    (__Vfunc_sbox4_64bit__1961__state_in 
                                                     >> 8U)));
    vlSelf->__Vfunc_sbox4_8bit__1962__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12875472226407103035ull);
    vlSelfRef.__Vfunc_sbox4_8bit__1962__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1962__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__1962__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__1962__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1962__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__1962__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__1962__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__1962__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__1961__state_out 
        = ((0xffffffffffff00ffULL & vlSelfRef.__Vfunc_sbox4_64bit__1961__state_out) 
           | ((QData)((IData)(__Vfunc_sbox4_8bit__1962__Vfuncout)) 
              << 8U));
    __Vfunc_sbox4_8bit__1962__state_in = (0x000000ffU 
                                          & (IData)(
                                                    (__Vfunc_sbox4_64bit__1961__state_in 
                                                     >> 0x10U)));
    vlSelf->__Vfunc_sbox4_8bit__1962__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12875472226407103035ull);
    vlSelfRef.__Vfunc_sbox4_8bit__1962__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1962__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__1962__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__1962__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1962__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__1962__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__1962__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__1962__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__1961__state_out 
        = ((0xffffffffff00ffffULL & vlSelfRef.__Vfunc_sbox4_64bit__1961__state_out) 
           | ((QData)((IData)(__Vfunc_sbox4_8bit__1962__Vfuncout)) 
              << 0x00000010U));
    __Vfunc_sbox4_8bit__1962__state_in = (0x000000ffU 
                                          & (IData)(
                                                    (__Vfunc_sbox4_64bit__1961__state_in 
                                                     >> 0x18U)));
    vlSelf->__Vfunc_sbox4_8bit__1962__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12875472226407103035ull);
    vlSelfRef.__Vfunc_sbox4_8bit__1962__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1962__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__1962__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__1962__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1962__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__1962__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__1962__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__1962__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__1961__state_out 
        = ((0xffffffff00ffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__1961__state_out) 
           | ((QData)((IData)(__Vfunc_sbox4_8bit__1962__Vfuncout)) 
              << 0x00000018U));
    __Vfunc_sbox4_8bit__1962__state_in = (0x000000ffU 
                                          & (IData)(
                                                    (__Vfunc_sbox4_64bit__1961__state_in 
                                                     >> 0x20U)));
    vlSelf->__Vfunc_sbox4_8bit__1962__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12875472226407103035ull);
    vlSelfRef.__Vfunc_sbox4_8bit__1962__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1962__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__1962__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__1962__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1962__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__1962__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__1962__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__1962__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__1961__state_out 
        = ((0xffffff00ffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__1961__state_out) 
           | ((QData)((IData)(__Vfunc_sbox4_8bit__1962__Vfuncout)) 
              << 0x00000020U));
    __Vfunc_sbox4_8bit__1962__state_in = (0x000000ffU 
                                          & (IData)(
                                                    (__Vfunc_sbox4_64bit__1961__state_in 
                                                     >> 0x28U)));
    vlSelf->__Vfunc_sbox4_8bit__1962__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12875472226407103035ull);
    vlSelfRef.__Vfunc_sbox4_8bit__1962__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1962__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__1962__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__1962__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1962__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__1962__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__1962__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__1962__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__1961__state_out 
        = ((0xffff00ffffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__1961__state_out) 
           | ((QData)((IData)(__Vfunc_sbox4_8bit__1962__Vfuncout)) 
              << 0x00000028U));
    __Vfunc_sbox4_8bit__1962__state_in = (0x000000ffU 
                                          & (IData)(
                                                    (__Vfunc_sbox4_64bit__1961__state_in 
                                                     >> 0x30U)));
    vlSelf->__Vfunc_sbox4_8bit__1962__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12875472226407103035ull);
    vlSelfRef.__Vfunc_sbox4_8bit__1962__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1962__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__1962__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__1962__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1962__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__1962__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__1962__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__1962__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__1961__state_out 
        = ((0xff00ffffffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__1961__state_out) 
           | ((QData)((IData)(__Vfunc_sbox4_8bit__1962__Vfuncout)) 
              << 0x00000030U));
    __Vfunc_sbox4_8bit__1962__state_in = (0x000000ffU 
                                          & (IData)(
                                                    (__Vfunc_sbox4_64bit__1961__state_in 
                                                     >> 0x38U)));
    vlSelf->__Vfunc_sbox4_8bit__1962__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12875472226407103035ull);
    vlSelfRef.__Vfunc_sbox4_8bit__1962__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1962__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__1962__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__1962__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1962__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__1962__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__1962__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__1962__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__1961__state_out 
        = ((0x00ffffffffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__1961__state_out) 
           | ((QData)((IData)(__Vfunc_sbox4_8bit__1962__Vfuncout)) 
              << 0x00000038U));
    __Vfunc_sbox4_64bit__1961__Vfuncout = vlSelfRef.__Vfunc_sbox4_64bit__1961__state_out;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT____VdfgExtracted_h435ad752__1 
        = __Vfunc_sbox4_64bit__1961__Vfuncout;
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_187 = (0x0000007fU 
                                                  & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__0__KET____DOT__data_state_sbox) 
                                                     ^ (IData)(
                                                               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__dmem_nonce_q 
                                                                >> 0x00000039U))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_fwd_pass__BRA__2__KET____DOT__data_state_round 
        = chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT____VdfgExtracted_h435ad752__1;
    __Vfunc_prince_mult_prime_64bit__1849__state_in 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_fwd_pass__BRA__2__KET____DOT__data_state_round;
    vlSelf->__Vfunc_prince_mult_prime_64bit__1849__state_out = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 7949698568422945641ull);
    __Vfunc_prince_nibble_red16__1850__vect = (0xe7bdU 
                                               & (IData)(__Vfunc_prince_mult_prime_64bit__1849__state_in));
    __Vfunc_prince_nibble_red16__1850__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__1850__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__1850__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__1850__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__1850__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__1849__state_out 
        = ((0xfffffffffffffff0ULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__1849__state_out) 
           | (IData)((IData)(__Vfunc_prince_nibble_red16__1850__Vfuncout)));
    __Vfunc_prince_nibble_red16__1851__vect = (0xde7bU 
                                               & (IData)(__Vfunc_prince_mult_prime_64bit__1849__state_in));
    __Vfunc_prince_nibble_red16__1851__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__1851__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__1851__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__1851__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__1851__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__1849__state_out 
        = ((0xffffffffffffff0fULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__1849__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__1851__Vfuncout)) 
              << 4U));
    __Vfunc_prince_nibble_red16__1852__vect = (0xbde7U 
                                               & (IData)(__Vfunc_prince_mult_prime_64bit__1849__state_in));
    __Vfunc_prince_nibble_red16__1852__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__1852__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__1852__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__1852__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__1852__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__1849__state_out 
        = ((0xfffffffffffff0ffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__1849__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__1852__Vfuncout)) 
              << 8U));
    __Vfunc_prince_nibble_red16__1853__vect = (0x7bdeU 
                                               & (IData)(__Vfunc_prince_mult_prime_64bit__1849__state_in));
    __Vfunc_prince_nibble_red16__1853__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__1853__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__1853__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__1853__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__1853__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__1849__state_out 
        = ((0xffffffffffff0fffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__1849__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__1853__Vfuncout)) 
              << 0x0000000cU));
    __Vfunc_prince_nibble_red16__1854__vect = (0x7bdeU 
                                               & (IData)(
                                                         (__Vfunc_prince_mult_prime_64bit__1849__state_in 
                                                          >> 0x10U)));
    __Vfunc_prince_nibble_red16__1854__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__1854__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__1854__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__1854__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__1854__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__1849__state_out 
        = ((0xfffffffffff0ffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__1849__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__1854__Vfuncout)) 
              << 0x00000010U));
    __Vfunc_prince_nibble_red16__1855__vect = (0xe7bdU 
                                               & (IData)(
                                                         (__Vfunc_prince_mult_prime_64bit__1849__state_in 
                                                          >> 0x10U)));
    __Vfunc_prince_nibble_red16__1855__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__1855__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__1855__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__1855__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__1855__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__1849__state_out 
        = ((0xffffffffff0fffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__1849__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__1855__Vfuncout)) 
              << 0x00000014U));
    __Vfunc_prince_nibble_red16__1856__vect = (0xde7bU 
                                               & (IData)(
                                                         (__Vfunc_prince_mult_prime_64bit__1849__state_in 
                                                          >> 0x10U)));
    __Vfunc_prince_nibble_red16__1856__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__1856__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__1856__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__1856__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__1856__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__1849__state_out 
        = ((0xfffffffff0ffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__1849__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__1856__Vfuncout)) 
              << 0x00000018U));
    __Vfunc_prince_nibble_red16__1857__vect = (0xbde7U 
                                               & (IData)(
                                                         (__Vfunc_prince_mult_prime_64bit__1849__state_in 
                                                          >> 0x10U)));
    __Vfunc_prince_nibble_red16__1857__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__1857__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__1857__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__1857__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__1857__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__1849__state_out 
        = ((0xffffffff0fffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__1849__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__1857__Vfuncout)) 
              << 0x0000001cU));
    __Vfunc_prince_nibble_red16__1858__vect = (0x7bdeU 
                                               & (IData)(
                                                         (__Vfunc_prince_mult_prime_64bit__1849__state_in 
                                                          >> 0x20U)));
    __Vfunc_prince_nibble_red16__1858__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__1858__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__1858__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__1858__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__1858__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__1849__state_out 
        = ((0xfffffff0ffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__1849__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__1858__Vfuncout)) 
              << 0x00000020U));
    __Vfunc_prince_nibble_red16__1859__vect = (0xe7bdU 
                                               & (IData)(
                                                         (__Vfunc_prince_mult_prime_64bit__1849__state_in 
                                                          >> 0x20U)));
    __Vfunc_prince_nibble_red16__1859__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__1859__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__1859__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__1859__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__1859__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__1849__state_out 
        = ((0xffffff0fffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__1849__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__1859__Vfuncout)) 
              << 0x00000024U));
    __Vfunc_prince_nibble_red16__1860__vect = (0xde7bU 
                                               & (IData)(
                                                         (__Vfunc_prince_mult_prime_64bit__1849__state_in 
                                                          >> 0x20U)));
    __Vfunc_prince_nibble_red16__1860__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__1860__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__1860__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__1860__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__1860__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__1849__state_out 
        = ((0xfffff0ffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__1849__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__1860__Vfuncout)) 
              << 0x00000028U));
    __Vfunc_prince_nibble_red16__1861__vect = (0xbde7U 
                                               & (IData)(
                                                         (__Vfunc_prince_mult_prime_64bit__1849__state_in 
                                                          >> 0x20U)));
    __Vfunc_prince_nibble_red16__1861__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__1861__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__1861__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__1861__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__1861__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__1849__state_out 
        = ((0xffff0fffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__1849__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__1861__Vfuncout)) 
              << 0x0000002cU));
    __Vfunc_prince_nibble_red16__1862__vect = (0xe7bdU 
                                               & (IData)(
                                                         (__Vfunc_prince_mult_prime_64bit__1849__state_in 
                                                          >> 0x30U)));
    __Vfunc_prince_nibble_red16__1862__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__1862__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__1862__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__1862__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__1862__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__1849__state_out 
        = ((0xfff0ffffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__1849__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__1862__Vfuncout)) 
              << 0x00000030U));
    __Vfunc_prince_nibble_red16__1863__vect = (0xde7bU 
                                               & (IData)(
                                                         (__Vfunc_prince_mult_prime_64bit__1849__state_in 
                                                          >> 0x30U)));
    __Vfunc_prince_nibble_red16__1863__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__1863__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__1863__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__1863__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__1863__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__1849__state_out 
        = ((0xff0fffffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__1849__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__1863__Vfuncout)) 
              << 0x00000034U));
    __Vfunc_prince_nibble_red16__1864__vect = (0xbde7U 
                                               & (IData)(
                                                         (__Vfunc_prince_mult_prime_64bit__1849__state_in 
                                                          >> 0x30U)));
    __Vfunc_prince_nibble_red16__1864__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__1864__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__1864__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__1864__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__1864__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__1849__state_out 
        = ((0xf0ffffffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__1849__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__1864__Vfuncout)) 
              << 0x00000038U));
    __Vfunc_prince_nibble_red16__1865__vect = (0x7bdeU 
                                               & (IData)(
                                                         (__Vfunc_prince_mult_prime_64bit__1849__state_in 
                                                          >> 0x30U)));
    __Vfunc_prince_nibble_red16__1865__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__1865__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__1865__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__1865__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__1865__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__1849__state_out 
        = ((0x0fffffffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__1849__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__1865__Vfuncout)) 
              << 0x0000003cU));
    __Vfunc_prince_mult_prime_64bit__1849__Vfuncout 
        = vlSelfRef.__Vfunc_prince_mult_prime_64bit__1849__state_out;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_fwd_pass__BRA__2__KET____DOT__data_state_round 
        = __Vfunc_prince_mult_prime_64bit__1849__Vfuncout;
    __Vfunc_prince_shiftrows_64bit__1866__state_in 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_fwd_pass__BRA__2__KET____DOT__data_state_round;
    vlSelf->__Vfunc_prince_shiftrows_64bit__1866__state_out = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 12818706087480859717ull);
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__1866__state_out 
        = ((0xfffffffffffff000ULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__1866__state_out) 
           | (IData)((IData)(((0x00000f00U & ((IData)(
                                                      (__Vfunc_prince_shiftrows_64bit__1866__state_in 
                                                       >> 0x38U)) 
                                              << 8U)) 
                              | ((0x000000f0U & ((IData)(
                                                         (__Vfunc_prince_shiftrows_64bit__1866__state_in 
                                                          >> 0x24U)) 
                                                 << 4U)) 
                                 | (0x0000000fU & (IData)(
                                                          (__Vfunc_prince_shiftrows_64bit__1866__state_in 
                                                           >> 0x10U))))))));
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__1866__state_out 
        = ((0xffffffffff000fffULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__1866__state_out) 
           | ((QData)((IData)(((0x00000f00U & ((IData)(
                                                       (__Vfunc_prince_shiftrows_64bit__1866__state_in 
                                                        >> 0x34U)) 
                                               << 8U)) 
                               | ((0x000000f0U & ((IData)(
                                                          (__Vfunc_prince_shiftrows_64bit__1866__state_in 
                                                           >> 0x20U)) 
                                                  << 4U)) 
                                  | (0x0000000fU & (IData)(
                                                           (__Vfunc_prince_shiftrows_64bit__1866__state_in 
                                                            >> 0x0cU))))))) 
              << 0x0000000cU));
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__1866__state_out 
        = ((0xfffffff000ffffffULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__1866__state_out) 
           | ((QData)((IData)(((0x00000f00U & ((IData)(
                                                       (__Vfunc_prince_shiftrows_64bit__1866__state_in 
                                                        >> 0x30U)) 
                                               << 8U)) 
                               | ((0x000000f0U & ((IData)(
                                                          (__Vfunc_prince_shiftrows_64bit__1866__state_in 
                                                           >> 0x1cU)) 
                                                  << 4U)) 
                                  | (0x0000000fU & (IData)(
                                                           (__Vfunc_prince_shiftrows_64bit__1866__state_in 
                                                            >> 8U))))))) 
              << 0x00000018U));
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__1866__state_out 
        = ((0xffff000fffffffffULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__1866__state_out) 
           | ((QData)((IData)(((0x00000f00U & ((IData)(
                                                       (__Vfunc_prince_shiftrows_64bit__1866__state_in 
                                                        >> 0x2cU)) 
                                               << 8U)) 
                               | ((0x000000f0U & ((IData)(
                                                          (__Vfunc_prince_shiftrows_64bit__1866__state_in 
                                                           >> 0x18U)) 
                                                  << 4U)) 
                                  | (0x0000000fU & (IData)(
                                                           (__Vfunc_prince_shiftrows_64bit__1866__state_in 
                                                            >> 4U))))))) 
              << 0x00000024U));
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__1866__state_out 
        = ((0xf000ffffffffffffULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__1866__state_out) 
           | ((QData)((IData)(((0x00000f00U & ((IData)(
                                                       (__Vfunc_prince_shiftrows_64bit__1866__state_in 
                                                        >> 0x28U)) 
                                               << 8U)) 
                               | ((0x000000f0U & ((IData)(
                                                          (__Vfunc_prince_shiftrows_64bit__1866__state_in 
                                                           >> 0x14U)) 
                                                  << 4U)) 
                                  | (0x0000000fU & (IData)(__Vfunc_prince_shiftrows_64bit__1866__state_in)))))) 
              << 0x00000030U));
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__1866__state_out 
        = ((0x0fffffffffffffffULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__1866__state_out) 
           | ((QData)((IData)((0x0000000fU & (IData)(
                                                     (__Vfunc_prince_shiftrows_64bit__1866__state_in 
                                                      >> 0x3cU))))) 
              << 0x0000003cU));
    __Vfunc_prince_shiftrows_64bit__1866__Vfuncout 
        = vlSelfRef.__Vfunc_prince_shiftrows_64bit__1866__state_out;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_fwd_pass__BRA__2__KET____DOT__data_state_round 
        = __Vfunc_prince_shiftrows_64bit__1866__Vfuncout;
    __VdfgRegularize_h6e95ff9d_0_188 = ((2U & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_187) 
                                               >> 3U)) 
                                        | (1U & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_187) 
                                                 >> 6U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_lo__BRA__191__03a128__KET__ 
        = (0xa4093822299f31d0ULL ^ (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_fwd_pass__BRA__2__KET____DOT__data_state_round 
                                    ^ (((QData)((IData)(
                                                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__dmem_key_q[1U])) 
                                        << 0x00000020U) 
                                       | (QData)((IData)(
                                                         vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__dmem_key_q[0U])))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_sbox 
        = (((((2U & ((IData)((0x21748fe3da09b65cULL 
                              >> (0x0000003fU & VL_SHIFTL_III(6,6,32, 
                                                              (0x0000000fU 
                                                               & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_187)), 2U)))) 
                     << 1U)) | (1U & (IData)((0x21748fe3da09b65cULL 
                                              >> ((IData)(1U) 
                                                  + 
                                                  (0x0000003fU 
                                                   & VL_SHIFTL_III(6,6,32, 
                                                                   (0x0000000fU 
                                                                    & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_187)), 2U))))))) 
             << 5U) | (((2U & ((IData)((0x21748fe3da09b65cULL 
                                        >> ((IData)(3U) 
                                            + (0x0000003fU 
                                               & VL_SHIFTL_III(6,6,32, 
                                                               (0x0000000fU 
                                                                & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_187)), 2U))))) 
                               << 1U)) | (1U & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_187) 
                                                >> 5U))) 
                       << 3U)) | ((4U & ((IData)((0x21748fe3da09b65cULL 
                                                  >> 
                                                  ((IData)(2U) 
                                                   + 
                                                   (0x0000003fU 
                                                    & VL_SHIFTL_III(6,6,32, 
                                                                    (0x0000000fU 
                                                                     & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_187)), 2U))))) 
                                         << 2U)) | (IData)(__VdfgRegularize_h6e95ff9d_0_188)));
    __Vfunc_sbox4_64bit__1963__state_in = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_lo__BRA__191__03a128__KET__;
    vlSelf->__Vfunc_sbox4_64bit__1963__state_out = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 5511839219421678766ull);
    __Vfunc_sbox4_8bit__1964__state_in = (0x000000ffU 
                                          & (IData)(__Vfunc_sbox4_64bit__1963__state_in));
    vlSelf->__Vfunc_sbox4_8bit__1964__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8235862032752403525ull);
    vlSelfRef.__Vfunc_sbox4_8bit__1964__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1964__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__1964__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__1964__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1964__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__1964__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__1964__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__1964__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__1963__state_out 
        = ((0xffffffffffffff00ULL & vlSelfRef.__Vfunc_sbox4_64bit__1963__state_out) 
           | (IData)((IData)(__Vfunc_sbox4_8bit__1964__Vfuncout)));
    __Vfunc_sbox4_8bit__1964__state_in = (0x000000ffU 
                                          & (IData)(
                                                    (__Vfunc_sbox4_64bit__1963__state_in 
                                                     >> 8U)));
    vlSelf->__Vfunc_sbox4_8bit__1964__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8235862032752403525ull);
    vlSelfRef.__Vfunc_sbox4_8bit__1964__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1964__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__1964__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__1964__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1964__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__1964__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__1964__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__1964__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__1963__state_out 
        = ((0xffffffffffff00ffULL & vlSelfRef.__Vfunc_sbox4_64bit__1963__state_out) 
           | ((QData)((IData)(__Vfunc_sbox4_8bit__1964__Vfuncout)) 
              << 8U));
    __Vfunc_sbox4_8bit__1964__state_in = (0x000000ffU 
                                          & (IData)(
                                                    (__Vfunc_sbox4_64bit__1963__state_in 
                                                     >> 0x10U)));
    vlSelf->__Vfunc_sbox4_8bit__1964__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8235862032752403525ull);
    vlSelfRef.__Vfunc_sbox4_8bit__1964__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1964__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__1964__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__1964__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1964__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__1964__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__1964__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__1964__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__1963__state_out 
        = ((0xffffffffff00ffffULL & vlSelfRef.__Vfunc_sbox4_64bit__1963__state_out) 
           | ((QData)((IData)(__Vfunc_sbox4_8bit__1964__Vfuncout)) 
              << 0x00000010U));
    __Vfunc_sbox4_8bit__1964__state_in = (0x000000ffU 
                                          & (IData)(
                                                    (__Vfunc_sbox4_64bit__1963__state_in 
                                                     >> 0x18U)));
    vlSelf->__Vfunc_sbox4_8bit__1964__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8235862032752403525ull);
    vlSelfRef.__Vfunc_sbox4_8bit__1964__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1964__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__1964__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__1964__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1964__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__1964__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__1964__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__1964__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__1963__state_out 
        = ((0xffffffff00ffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__1963__state_out) 
           | ((QData)((IData)(__Vfunc_sbox4_8bit__1964__Vfuncout)) 
              << 0x00000018U));
    __Vfunc_sbox4_8bit__1964__state_in = (0x000000ffU 
                                          & (IData)(
                                                    (__Vfunc_sbox4_64bit__1963__state_in 
                                                     >> 0x20U)));
    vlSelf->__Vfunc_sbox4_8bit__1964__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8235862032752403525ull);
    vlSelfRef.__Vfunc_sbox4_8bit__1964__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1964__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__1964__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__1964__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1964__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__1964__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__1964__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__1964__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__1963__state_out 
        = ((0xffffff00ffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__1963__state_out) 
           | ((QData)((IData)(__Vfunc_sbox4_8bit__1964__Vfuncout)) 
              << 0x00000020U));
    __Vfunc_sbox4_8bit__1964__state_in = (0x000000ffU 
                                          & (IData)(
                                                    (__Vfunc_sbox4_64bit__1963__state_in 
                                                     >> 0x28U)));
    vlSelf->__Vfunc_sbox4_8bit__1964__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8235862032752403525ull);
    vlSelfRef.__Vfunc_sbox4_8bit__1964__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1964__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__1964__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__1964__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1964__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__1964__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__1964__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__1964__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__1963__state_out 
        = ((0xffff00ffffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__1963__state_out) 
           | ((QData)((IData)(__Vfunc_sbox4_8bit__1964__Vfuncout)) 
              << 0x00000028U));
    __Vfunc_sbox4_8bit__1964__state_in = (0x000000ffU 
                                          & (IData)(
                                                    (__Vfunc_sbox4_64bit__1963__state_in 
                                                     >> 0x30U)));
    vlSelf->__Vfunc_sbox4_8bit__1964__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8235862032752403525ull);
    vlSelfRef.__Vfunc_sbox4_8bit__1964__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1964__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__1964__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__1964__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1964__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__1964__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__1964__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__1964__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__1963__state_out 
        = ((0xff00ffffffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__1963__state_out) 
           | ((QData)((IData)(__Vfunc_sbox4_8bit__1964__Vfuncout)) 
              << 0x00000030U));
    __Vfunc_sbox4_8bit__1964__state_in = (0x000000ffU 
                                          & (IData)(
                                                    (__Vfunc_sbox4_64bit__1963__state_in 
                                                     >> 0x38U)));
    vlSelf->__Vfunc_sbox4_8bit__1964__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8235862032752403525ull);
    vlSelfRef.__Vfunc_sbox4_8bit__1964__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1964__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__1964__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__1964__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1964__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__1964__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__1964__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__1964__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__1963__state_out 
        = ((0x00ffffffffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__1963__state_out) 
           | ((QData)((IData)(__Vfunc_sbox4_8bit__1964__Vfuncout)) 
              << 0x00000038U));
    __Vfunc_sbox4_64bit__1963__Vfuncout = vlSelfRef.__Vfunc_sbox4_64bit__1963__state_out;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT____VdfgExtracted_h99e0c7c1__1 
        = __Vfunc_sbox4_64bit__1963__Vfuncout;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__data_o 
        = (0x0000007fU & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_dmem__DOT__gen_addr_scr__DOT__u_prim_subst_perm__DOT__gen_round__BRA__1__KET____DOT__data_state_sbox) 
                          ^ (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__dmem_nonce_q 
                                     >> 0x00000039U))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_fwd_pass__BRA__3__KET____DOT__data_state_round 
        = chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT____VdfgExtracted_h99e0c7c1__1;
    __Vfunc_prince_mult_prime_64bit__1867__state_in 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_fwd_pass__BRA__3__KET____DOT__data_state_round;
    vlSelf->__Vfunc_prince_mult_prime_64bit__1867__state_out = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 17070796834084963877ull);
    __Vfunc_prince_nibble_red16__1868__vect = (0xe7bdU 
                                               & (IData)(__Vfunc_prince_mult_prime_64bit__1867__state_in));
    __Vfunc_prince_nibble_red16__1868__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__1868__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__1868__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__1868__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__1868__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__1867__state_out 
        = ((0xfffffffffffffff0ULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__1867__state_out) 
           | (IData)((IData)(__Vfunc_prince_nibble_red16__1868__Vfuncout)));
    __Vfunc_prince_nibble_red16__1869__vect = (0xde7bU 
                                               & (IData)(__Vfunc_prince_mult_prime_64bit__1867__state_in));
    __Vfunc_prince_nibble_red16__1869__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__1869__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__1869__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__1869__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__1869__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__1867__state_out 
        = ((0xffffffffffffff0fULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__1867__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__1869__Vfuncout)) 
              << 4U));
    __Vfunc_prince_nibble_red16__1870__vect = (0xbde7U 
                                               & (IData)(__Vfunc_prince_mult_prime_64bit__1867__state_in));
    __Vfunc_prince_nibble_red16__1870__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__1870__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__1870__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__1870__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__1870__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__1867__state_out 
        = ((0xfffffffffffff0ffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__1867__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__1870__Vfuncout)) 
              << 8U));
    __Vfunc_prince_nibble_red16__1871__vect = (0x7bdeU 
                                               & (IData)(__Vfunc_prince_mult_prime_64bit__1867__state_in));
    __Vfunc_prince_nibble_red16__1871__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__1871__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__1871__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__1871__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__1871__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__1867__state_out 
        = ((0xffffffffffff0fffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__1867__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__1871__Vfuncout)) 
              << 0x0000000cU));
    __Vfunc_prince_nibble_red16__1872__vect = (0x7bdeU 
                                               & (IData)(
                                                         (__Vfunc_prince_mult_prime_64bit__1867__state_in 
                                                          >> 0x10U)));
    __Vfunc_prince_nibble_red16__1872__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__1872__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__1872__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__1872__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__1872__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__1867__state_out 
        = ((0xfffffffffff0ffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__1867__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__1872__Vfuncout)) 
              << 0x00000010U));
    __Vfunc_prince_nibble_red16__1873__vect = (0xe7bdU 
                                               & (IData)(
                                                         (__Vfunc_prince_mult_prime_64bit__1867__state_in 
                                                          >> 0x10U)));
    __Vfunc_prince_nibble_red16__1873__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__1873__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__1873__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__1873__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__1873__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__1867__state_out 
        = ((0xffffffffff0fffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__1867__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__1873__Vfuncout)) 
              << 0x00000014U));
    __Vfunc_prince_nibble_red16__1874__vect = (0xde7bU 
                                               & (IData)(
                                                         (__Vfunc_prince_mult_prime_64bit__1867__state_in 
                                                          >> 0x10U)));
    __Vfunc_prince_nibble_red16__1874__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__1874__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__1874__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__1874__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__1874__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__1867__state_out 
        = ((0xfffffffff0ffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__1867__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__1874__Vfuncout)) 
              << 0x00000018U));
    __Vfunc_prince_nibble_red16__1875__vect = (0xbde7U 
                                               & (IData)(
                                                         (__Vfunc_prince_mult_prime_64bit__1867__state_in 
                                                          >> 0x10U)));
    __Vfunc_prince_nibble_red16__1875__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__1875__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__1875__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__1875__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__1875__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__1867__state_out 
        = ((0xffffffff0fffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__1867__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__1875__Vfuncout)) 
              << 0x0000001cU));
    __Vfunc_prince_nibble_red16__1876__vect = (0x7bdeU 
                                               & (IData)(
                                                         (__Vfunc_prince_mult_prime_64bit__1867__state_in 
                                                          >> 0x20U)));
    __Vfunc_prince_nibble_red16__1876__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__1876__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__1876__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__1876__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__1876__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__1867__state_out 
        = ((0xfffffff0ffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__1867__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__1876__Vfuncout)) 
              << 0x00000020U));
    __Vfunc_prince_nibble_red16__1877__vect = (0xe7bdU 
                                               & (IData)(
                                                         (__Vfunc_prince_mult_prime_64bit__1867__state_in 
                                                          >> 0x20U)));
    __Vfunc_prince_nibble_red16__1877__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__1877__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__1877__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__1877__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__1877__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__1867__state_out 
        = ((0xffffff0fffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__1867__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__1877__Vfuncout)) 
              << 0x00000024U));
    __Vfunc_prince_nibble_red16__1878__vect = (0xde7bU 
                                               & (IData)(
                                                         (__Vfunc_prince_mult_prime_64bit__1867__state_in 
                                                          >> 0x20U)));
    __Vfunc_prince_nibble_red16__1878__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__1878__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__1878__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__1878__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__1878__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__1867__state_out 
        = ((0xfffff0ffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__1867__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__1878__Vfuncout)) 
              << 0x00000028U));
    __Vfunc_prince_nibble_red16__1879__vect = (0xbde7U 
                                               & (IData)(
                                                         (__Vfunc_prince_mult_prime_64bit__1867__state_in 
                                                          >> 0x20U)));
    __Vfunc_prince_nibble_red16__1879__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__1879__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__1879__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__1879__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__1879__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__1867__state_out 
        = ((0xffff0fffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__1867__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__1879__Vfuncout)) 
              << 0x0000002cU));
    __Vfunc_prince_nibble_red16__1880__vect = (0xe7bdU 
                                               & (IData)(
                                                         (__Vfunc_prince_mult_prime_64bit__1867__state_in 
                                                          >> 0x30U)));
    __Vfunc_prince_nibble_red16__1880__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__1880__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__1880__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__1880__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__1880__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__1867__state_out 
        = ((0xfff0ffffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__1867__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__1880__Vfuncout)) 
              << 0x00000030U));
    __Vfunc_prince_nibble_red16__1881__vect = (0xde7bU 
                                               & (IData)(
                                                         (__Vfunc_prince_mult_prime_64bit__1867__state_in 
                                                          >> 0x30U)));
    __Vfunc_prince_nibble_red16__1881__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__1881__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__1881__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__1881__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__1881__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__1867__state_out 
        = ((0xff0fffffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__1867__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__1881__Vfuncout)) 
              << 0x00000034U));
    __Vfunc_prince_nibble_red16__1882__vect = (0xbde7U 
                                               & (IData)(
                                                         (__Vfunc_prince_mult_prime_64bit__1867__state_in 
                                                          >> 0x30U)));
    __Vfunc_prince_nibble_red16__1882__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__1882__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__1882__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__1882__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__1882__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__1867__state_out 
        = ((0xf0ffffffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__1867__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__1882__Vfuncout)) 
              << 0x00000038U));
    __Vfunc_prince_nibble_red16__1883__vect = (0x7bdeU 
                                               & (IData)(
                                                         (__Vfunc_prince_mult_prime_64bit__1867__state_in 
                                                          >> 0x30U)));
    __Vfunc_prince_nibble_red16__1883__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__1883__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__1883__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__1883__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__1883__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__1867__state_out 
        = ((0x0fffffffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__1867__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__1883__Vfuncout)) 
              << 0x0000003cU));
    __Vfunc_prince_mult_prime_64bit__1867__Vfuncout 
        = vlSelfRef.__Vfunc_prince_mult_prime_64bit__1867__state_out;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_fwd_pass__BRA__3__KET____DOT__data_state_round 
        = __Vfunc_prince_mult_prime_64bit__1867__Vfuncout;
    __Vfunc_prince_shiftrows_64bit__1884__state_in 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_fwd_pass__BRA__3__KET____DOT__data_state_round;
    vlSelf->__Vfunc_prince_shiftrows_64bit__1884__state_out = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 4612902107367325939ull);
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__1884__state_out 
        = ((0xfffffffffffff000ULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__1884__state_out) 
           | (IData)((IData)(((0x00000f00U & ((IData)(
                                                      (__Vfunc_prince_shiftrows_64bit__1884__state_in 
                                                       >> 0x38U)) 
                                              << 8U)) 
                              | ((0x000000f0U & ((IData)(
                                                         (__Vfunc_prince_shiftrows_64bit__1884__state_in 
                                                          >> 0x24U)) 
                                                 << 4U)) 
                                 | (0x0000000fU & (IData)(
                                                          (__Vfunc_prince_shiftrows_64bit__1884__state_in 
                                                           >> 0x10U))))))));
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__1884__state_out 
        = ((0xffffffffff000fffULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__1884__state_out) 
           | ((QData)((IData)(((0x00000f00U & ((IData)(
                                                       (__Vfunc_prince_shiftrows_64bit__1884__state_in 
                                                        >> 0x34U)) 
                                               << 8U)) 
                               | ((0x000000f0U & ((IData)(
                                                          (__Vfunc_prince_shiftrows_64bit__1884__state_in 
                                                           >> 0x20U)) 
                                                  << 4U)) 
                                  | (0x0000000fU & (IData)(
                                                           (__Vfunc_prince_shiftrows_64bit__1884__state_in 
                                                            >> 0x0cU))))))) 
              << 0x0000000cU));
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__1884__state_out 
        = ((0xfffffff000ffffffULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__1884__state_out) 
           | ((QData)((IData)(((0x00000f00U & ((IData)(
                                                       (__Vfunc_prince_shiftrows_64bit__1884__state_in 
                                                        >> 0x30U)) 
                                               << 8U)) 
                               | ((0x000000f0U & ((IData)(
                                                          (__Vfunc_prince_shiftrows_64bit__1884__state_in 
                                                           >> 0x1cU)) 
                                                  << 4U)) 
                                  | (0x0000000fU & (IData)(
                                                           (__Vfunc_prince_shiftrows_64bit__1884__state_in 
                                                            >> 8U))))))) 
              << 0x00000018U));
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__1884__state_out 
        = ((0xffff000fffffffffULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__1884__state_out) 
           | ((QData)((IData)(((0x00000f00U & ((IData)(
                                                       (__Vfunc_prince_shiftrows_64bit__1884__state_in 
                                                        >> 0x2cU)) 
                                               << 8U)) 
                               | ((0x000000f0U & ((IData)(
                                                          (__Vfunc_prince_shiftrows_64bit__1884__state_in 
                                                           >> 0x18U)) 
                                                  << 4U)) 
                                  | (0x0000000fU & (IData)(
                                                           (__Vfunc_prince_shiftrows_64bit__1884__state_in 
                                                            >> 4U))))))) 
              << 0x00000024U));
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__1884__state_out 
        = ((0xf000ffffffffffffULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__1884__state_out) 
           | ((QData)((IData)(((0x00000f00U & ((IData)(
                                                       (__Vfunc_prince_shiftrows_64bit__1884__state_in 
                                                        >> 0x28U)) 
                                               << 8U)) 
                               | ((0x000000f0U & ((IData)(
                                                          (__Vfunc_prince_shiftrows_64bit__1884__state_in 
                                                           >> 0x14U)) 
                                                  << 4U)) 
                                  | (0x0000000fU & (IData)(__Vfunc_prince_shiftrows_64bit__1884__state_in)))))) 
              << 0x00000030U));
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__1884__state_out 
        = ((0x0fffffffffffffffULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__1884__state_out) 
           | ((QData)((IData)((0x0000000fU & (IData)(
                                                     (__Vfunc_prince_shiftrows_64bit__1884__state_in 
                                                      >> 0x3cU))))) 
              << 0x0000003cU));
    __Vfunc_prince_shiftrows_64bit__1884__Vfuncout 
        = vlSelfRef.__Vfunc_prince_shiftrows_64bit__1884__state_out;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_fwd_pass__BRA__3__KET____DOT__data_state_round 
        = __Vfunc_prince_shiftrows_64bit__1884__Vfuncout;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_lo__BRA__255__03a192__KET__ 
        = (0x082efa98ec4e6c89ULL ^ (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__gen_fwd_pass__BRA__3__KET____DOT__data_state_round 
                                    ^ (((QData)((IData)(
                                                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__dmem_key_q[3U])) 
                                        << 0x00000020U) 
                                       | (QData)((IData)(
                                                         vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__dmem_key_q[2U])))));
    __Vfunc_sbox4_64bit__1965__state_in = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__data_state_lo__BRA__255__03a192__KET__;
    vlSelf->__Vfunc_sbox4_64bit__1965__state_out = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 16092781706330214325ull);
    __Vfunc_sbox4_8bit__1966__state_in = (0x000000ffU 
                                          & (IData)(__Vfunc_sbox4_64bit__1965__state_in));
    vlSelf->__Vfunc_sbox4_8bit__1966__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1386836273905898597ull);
    vlSelfRef.__Vfunc_sbox4_8bit__1966__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1966__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__1966__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__1966__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1966__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__1966__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__1966__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__1966__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__1965__state_out 
        = ((0xffffffffffffff00ULL & vlSelfRef.__Vfunc_sbox4_64bit__1965__state_out) 
           | (IData)((IData)(__Vfunc_sbox4_8bit__1966__Vfuncout)));
    __Vfunc_sbox4_8bit__1966__state_in = (0x000000ffU 
                                          & (IData)(
                                                    (__Vfunc_sbox4_64bit__1965__state_in 
                                                     >> 8U)));
    vlSelf->__Vfunc_sbox4_8bit__1966__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1386836273905898597ull);
    vlSelfRef.__Vfunc_sbox4_8bit__1966__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1966__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__1966__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__1966__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1966__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__1966__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__1966__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__1966__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__1965__state_out 
        = ((0xffffffffffff00ffULL & vlSelfRef.__Vfunc_sbox4_64bit__1965__state_out) 
           | ((QData)((IData)(__Vfunc_sbox4_8bit__1966__Vfuncout)) 
              << 8U));
    __Vfunc_sbox4_8bit__1966__state_in = (0x000000ffU 
                                          & (IData)(
                                                    (__Vfunc_sbox4_64bit__1965__state_in 
                                                     >> 0x10U)));
    vlSelf->__Vfunc_sbox4_8bit__1966__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1386836273905898597ull);
    vlSelfRef.__Vfunc_sbox4_8bit__1966__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1966__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__1966__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__1966__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1966__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__1966__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__1966__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__1966__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__1965__state_out 
        = ((0xffffffffff00ffffULL & vlSelfRef.__Vfunc_sbox4_64bit__1965__state_out) 
           | ((QData)((IData)(__Vfunc_sbox4_8bit__1966__Vfuncout)) 
              << 0x00000010U));
    __Vfunc_sbox4_8bit__1966__state_in = (0x000000ffU 
                                          & (IData)(
                                                    (__Vfunc_sbox4_64bit__1965__state_in 
                                                     >> 0x18U)));
    vlSelf->__Vfunc_sbox4_8bit__1966__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1386836273905898597ull);
    vlSelfRef.__Vfunc_sbox4_8bit__1966__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1966__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__1966__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__1966__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1966__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__1966__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__1966__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__1966__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__1965__state_out 
        = ((0xffffffff00ffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__1965__state_out) 
           | ((QData)((IData)(__Vfunc_sbox4_8bit__1966__Vfuncout)) 
              << 0x00000018U));
    __Vfunc_sbox4_8bit__1966__state_in = (0x000000ffU 
                                          & (IData)(
                                                    (__Vfunc_sbox4_64bit__1965__state_in 
                                                     >> 0x20U)));
    vlSelf->__Vfunc_sbox4_8bit__1966__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1386836273905898597ull);
    vlSelfRef.__Vfunc_sbox4_8bit__1966__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1966__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__1966__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__1966__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1966__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__1966__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__1966__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__1966__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__1965__state_out 
        = ((0xffffff00ffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__1965__state_out) 
           | ((QData)((IData)(__Vfunc_sbox4_8bit__1966__Vfuncout)) 
              << 0x00000020U));
    __Vfunc_sbox4_8bit__1966__state_in = (0x000000ffU 
                                          & (IData)(
                                                    (__Vfunc_sbox4_64bit__1965__state_in 
                                                     >> 0x28U)));
    vlSelf->__Vfunc_sbox4_8bit__1966__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1386836273905898597ull);
    vlSelfRef.__Vfunc_sbox4_8bit__1966__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1966__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__1966__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__1966__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1966__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__1966__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__1966__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__1966__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__1965__state_out 
        = ((0xffff00ffffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__1965__state_out) 
           | ((QData)((IData)(__Vfunc_sbox4_8bit__1966__Vfuncout)) 
              << 0x00000028U));
    __Vfunc_sbox4_8bit__1966__state_in = (0x000000ffU 
                                          & (IData)(
                                                    (__Vfunc_sbox4_64bit__1965__state_in 
                                                     >> 0x30U)));
    vlSelf->__Vfunc_sbox4_8bit__1966__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1386836273905898597ull);
    vlSelfRef.__Vfunc_sbox4_8bit__1966__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1966__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__1966__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__1966__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1966__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__1966__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__1966__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__1966__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__1965__state_out 
        = ((0xff00ffffffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__1965__state_out) 
           | ((QData)((IData)(__Vfunc_sbox4_8bit__1966__Vfuncout)) 
              << 0x00000030U));
    __Vfunc_sbox4_8bit__1966__state_in = (0x000000ffU 
                                          & (IData)(
                                                    (__Vfunc_sbox4_64bit__1965__state_in 
                                                     >> 0x38U)));
    vlSelf->__Vfunc_sbox4_8bit__1966__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1386836273905898597ull);
    vlSelfRef.__Vfunc_sbox4_8bit__1966__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1966__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__1966__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__1966__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1966__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__1966__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__1966__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__1966__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__1965__state_out 
        = ((0x00ffffffffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__1965__state_out) 
           | ((QData)((IData)(__Vfunc_sbox4_8bit__1966__Vfuncout)) 
              << 0x00000038U));
    __Vfunc_sbox4_64bit__1965__Vfuncout = vlSelfRef.__Vfunc_sbox4_64bit__1965__state_out;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_dmem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT____VdfgExtracted_h36ab3cd7__1 
        = __Vfunc_sbox4_64bit__1965__Vfuncout;
}

void Vsim___024root___nba_comb__TOP__72(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___nba_comb__TOP__72\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____VdfgRegularize_hc44a298e_0_15;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____VdfgRegularize_hc44a298e_0_15 = 0;
    CData/*3:0*/ __Vfunc_mubi4_bool_to_mubi__1588__Vfuncout;
    __Vfunc_mubi4_bool_to_mubi__1588__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_mubi4_bool_to_mubi__1588__val;
    __Vfunc_mubi4_bool_to_mubi__1588__val = 0;
    CData/*3:0*/ __Vfunc_mubi4_bool_to_mubi__1590__Vfuncout;
    __Vfunc_mubi4_bool_to_mubi__1590__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_mubi4_bool_to_mubi__1590__val;
    __Vfunc_mubi4_bool_to_mubi__1590__val = 0;
    CData/*3:0*/ __Vfunc_mubi4_bool_to_mubi__1591__Vfuncout;
    __Vfunc_mubi4_bool_to_mubi__1591__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_mubi4_bool_to_mubi__1591__val;
    __Vfunc_mubi4_bool_to_mubi__1591__val = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_true_loose__1607__Vfuncout;
    __Vfunc_mubi4_test_true_loose__1607__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_loose__1607__val;
    __Vfunc_mubi4_test_true_loose__1607__val = 0;
    CData/*3:0*/ __Vfunc_mubi4_and_hi__1608__Vfuncout;
    __Vfunc_mubi4_and_hi__1608__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_and_hi__1608__a;
    __Vfunc_mubi4_and_hi__1608__a = 0;
    CData/*3:0*/ __Vfunc_mubi4_and_hi__1608__b;
    __Vfunc_mubi4_and_hi__1608__b = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__1609__Vfuncout;
    __Vfunc_mubi4_and__1609__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__1609__a;
    __Vfunc_mubi4_and__1609__a = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__1609__b;
    __Vfunc_mubi4_and__1609__b = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__1609__a_in;
    __Vfunc_mubi4_and__1609__a_in = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__1609__b_in;
    __Vfunc_mubi4_and__1609__b_in = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_true_loose__1620__Vfuncout;
    __Vfunc_mubi4_test_true_loose__1620__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_loose__1620__val;
    __Vfunc_mubi4_test_true_loose__1620__val = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_true_loose__1621__Vfuncout;
    __Vfunc_mubi4_test_true_loose__1621__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_loose__1621__val;
    __Vfunc_mubi4_test_true_loose__1621__val = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_true_loose__1623__Vfuncout;
    __Vfunc_mubi4_test_true_loose__1623__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_loose__1623__val;
    __Vfunc_mubi4_test_true_loose__1623__val = 0;
    CData/*3:0*/ __Vfunc_mubi4_bool_to_mubi__1631__Vfuncout;
    __Vfunc_mubi4_bool_to_mubi__1631__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_mubi4_bool_to_mubi__1631__val;
    __Vfunc_mubi4_bool_to_mubi__1631__val = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_invalid__1990__Vfuncout;
    __Vfunc_mubi4_test_invalid__1990__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_invalid__1990__val;
    __Vfunc_mubi4_test_invalid__1990__val = 0;
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__u_sram_byte__DOT__error_i 
        = (1U & (((IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_137) 
                  & ((0x0fU != (0x0000000fU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                               [1U][1U] 
                                               >> 0x00000018U))) 
                     | (2U != (3U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                     [1U][3U] >> 4U))))) 
                 | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__instr_error) 
                    | ((~ (((0U == (7U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                          [1U][3U] 
                                          >> 9U))) 
                            | ((1U == (7U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                             [1U][3U] 
                                             >> 9U))) 
                               | (4U == (7U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                               [1U][3U] 
                                               >> 9U))))) 
                           & ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__u_err.__PVT__addr_sz_chk) 
                              & ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__u_err.__PVT__mask_chk) 
                                 & ((4U == (7U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                  [1U][3U] 
                                                  >> 9U))) 
                                    | ((1U == (7U & 
                                               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                [1U][3U] 
                                                >> 9U))) 
                                       | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__u_err.__PVT__fulldata_chk))))))) 
                       | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__u_err.__PVT__instr_type_err) 
                          | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__u_err.__PVT__instr_wr_err))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__u_sram_byte__DOT__error_i 
        = (1U & (((IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_135) 
                  & ((0x0fU != (0x0000000fU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                               [0U][1U] 
                                               >> 0x00000018U))) 
                     | (2U != (3U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                     [0U][3U] >> 4U))))) 
                 | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__instr_error) 
                    | ((~ (((0U == (7U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                          [0U][3U] 
                                          >> 9U))) 
                            | ((1U == (7U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                             [0U][3U] 
                                             >> 9U))) 
                               | (4U == (7U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                               [0U][3U] 
                                               >> 9U))))) 
                           & ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__u_err.__PVT__addr_sz_chk) 
                              & ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__u_err.__PVT__mask_chk) 
                                 & ((4U == (7U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                  [0U][3U] 
                                                  >> 9U))) 
                                    | ((1U == (7U & 
                                               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                [0U][3U] 
                                                >> 9U))) 
                                       | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__u_err.__PVT__fulldata_chk))))))) 
                       | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__u_err.__PVT__instr_type_err) 
                          | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__u_err.__PVT__instr_wr_err))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_reg_if__DOT__err_internal 
        = (1U & (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_reg_if__DOT__wr_req) 
                  & (0U != (3U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                  [2U][1U] >> 0x0000001cU)))) 
                 | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_reg_if__DOT__instr_error) 
                    | ((~ (((0U == (7U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                          [2U][3U] 
                                          >> 9U))) 
                            | ((1U == (7U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                             [2U][3U] 
                                             >> 9U))) 
                               | (4U == (7U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                               [2U][3U] 
                                               >> 9U))))) 
                           & ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_reg_if__DOT__u_err.__PVT__addr_sz_chk) 
                              & ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_reg_if__DOT__u_err.__PVT__mask_chk) 
                                 & ((4U == (7U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                  [2U][3U] 
                                                  >> 9U))) 
                                    | ((1U == (7U & 
                                               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                [2U][3U] 
                                                >> 9U))) 
                                       | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_reg_if__DOT__u_err.__PVT__fulldata_chk))))))) 
                       | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_reg_if__DOT__u_err.__PVT__instr_type_err) 
                          | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_reg_if__DOT__u_err.__PVT__instr_wr_err))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__req_o 
        = (1U & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                  [1U][3U] >> 0x0000000cU) & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__u_sram_byte__DOT__error_i)) 
                                              & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__full_q)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__req_o 
        = (1U & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                  [0U][3U] >> 0x0000000cU) & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__u_sram_byte__DOT__error_i)) 
                                              & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__full_q)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_reg_if__DOT__re_o 
        = ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_reg_if__DOT__err_internal)) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_reg_if__DOT__rd_req));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_reg_if__DOT__we_o 
        = ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_reg_if__DOT__err_internal)) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_reg_if__DOT__wr_req));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__dmem_illegal_bus_access 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__busy_execute_q) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__req_o));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__u_sramreqfifo__DOT__wvalid_i 
        = ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__we_o)) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__req_o));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT____VdfgRegularize_haa34d1ec_0_0 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__req_o) 
            | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__missed_err_gnt_q)) 
           & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__full_q)) 
              & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__u_sramreqfifo__DOT__gen_singleton_fifo__DOT__full_q))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__imem_illegal_bus_access 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__req_o) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__imem_access_core));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__u_sramreqfifo__DOT__wvalid_i 
        = ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__we_o)) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__req_o));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_mem_load_crc32__DOT__data_i 
        = (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__req_o)) 
            << 0x0000002fU) | (((QData)((IData)(((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__req_o)
                                                  ? (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__addr_o)
                                                  : 
                                                 (0x000003ffU 
                                                  & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                      [1U][2U] 
                                                      << 2U) 
                                                     | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                        [1U][1U] 
                                                        >> 0x0000001eU)))))) 
                                << 0x00000020U) | (QData)((IData)(
                                                                  ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__req_o)
                                                                    ? vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__wdata_int
                                                                    : 
                                                                   ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                                     [1U][1U] 
                                                                     << 8U) 
                                                                    | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                                       [1U][0U] 
                                                                       >> 0x00000018U)))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_imem__DOT__req_i 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__imem_access_core)
            ? (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__prefetch_en)
            : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__req_o));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT____VdfgRegularize_h128e8182_0_0 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__req_o) 
            | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__missed_err_gnt_q)) 
           & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__full_q)) 
              & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__u_sramreqfifo__DOT__gen_singleton_fifo__DOT__full_q))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__wr_err 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_reg_if__DOT__we_o) 
           & (((0U == (0x00003fffU & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                       [2U][2U] << 2U) 
                                      | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                         [2U][1U] >> 0x0000001eU)))) 
               & (0U != (1U & (~ ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                   [2U][1U] << 8U) 
                                  | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                     [2U][1U] >> 0x00000018U)))))) 
              | (((1U == (0x00003fffU & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                          [2U][2U] 
                                          << 2U) | 
                                         (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                          [2U][1U] 
                                          >> 0x0000001eU)))) 
                  & (0U != (1U & (~ ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                      [2U][1U] << 8U) 
                                     | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                        [2U][1U] >> 0x00000018U)))))) 
                 | (((2U == (0x00003fffU & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                             [2U][2U] 
                                             << 2U) 
                                            | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                               [2U][1U] 
                                               >> 0x0000001eU)))) 
                     & (0U != (1U & (~ ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                         [2U][1U] << 8U) 
                                        | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                           [2U][1U] 
                                           >> 0x00000018U)))))) 
                    | (((3U == (0x00003fffU & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                [2U][2U] 
                                                << 2U) 
                                               | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                  [2U][1U] 
                                                  >> 0x0000001eU)))) 
                        & (0U != (1U & (~ ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                            [2U][1U] 
                                            << 8U) 
                                           | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                              [2U][1U] 
                                              >> 0x00000018U)))))) 
                       | (((4U == (0x00003fffU & ((
                                                   vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                   [2U][2U] 
                                                   << 2U) 
                                                  | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                     [2U][1U] 
                                                     >> 0x0000001eU)))) 
                           & (0U != (1U & (~ ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                               [2U][1U] 
                                               << 8U) 
                                              | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                 [2U][1U] 
                                                 >> 0x00000018U)))))) 
                          | (((5U == (0x00003fffU & 
                                      ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                        [2U][2U] << 2U) 
                                       | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                          [2U][1U] 
                                          >> 0x0000001eU)))) 
                              & (0U != (1U & (~ ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                  [2U][1U] 
                                                  << 8U) 
                                                 | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                    [2U][1U] 
                                                    >> 0x00000018U)))))) 
                             | (((6U == (0x00003fffU 
                                         & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                             [2U][2U] 
                                             << 2U) 
                                            | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                               [2U][1U] 
                                               >> 0x0000001eU)))) 
                                 & (0U != (1U & (~ 
                                                 ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                   [2U][1U] 
                                                   << 8U) 
                                                  | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                     [2U][1U] 
                                                     >> 0x00000018U)))))) 
                                | (((7U == (0x00003fffU 
                                            & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                [2U][2U] 
                                                << 2U) 
                                               | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                  [2U][1U] 
                                                  >> 0x0000001eU)))) 
                                    & (0U != (7U & 
                                              (~ ((
                                                   vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                   [2U][1U] 
                                                   << 8U) 
                                                  | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                     [2U][1U] 
                                                     >> 0x00000018U)))))) 
                                   | (((8U == (0x00003fffU 
                                               & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                   [2U][2U] 
                                                   << 2U) 
                                                  | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                     [2U][1U] 
                                                     >> 0x0000001eU)))) 
                                       & (0U != (1U 
                                                 & (~ 
                                                    ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                      [2U][1U] 
                                                      << 8U) 
                                                     | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                        [2U][1U] 
                                                        >> 0x00000018U)))))) 
                                      | ((0U != (0x0000000fU 
                                                 & (~ 
                                                    ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                      [2U][1U] 
                                                      << 8U) 
                                                     | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                        [2U][1U] 
                                                        >> 0x00000018U))))) 
                                         & ((9U == 
                                             (0x00003fffU 
                                              & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                  [2U][2U] 
                                                  << 2U) 
                                                 | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                    [2U][1U] 
                                                    >> 0x0000001eU)))) 
                                            | (0x000aU 
                                               == (0x00003fffU 
                                                   & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                       [2U][2U] 
                                                       << 2U) 
                                                      | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                         [2U][1U] 
                                                         >> 0x0000001eU))))))))))))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__addrmiss 
        = ((~ (0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__addr_hit))) 
           & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_reg_if__DOT__re_o) 
              | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_reg_if__DOT__we_o)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__u_sramreqfifo__DOT__gen_singleton_fifo__DOT__full_d 
        = (1U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__u_sramreqfifo__DOT__gen_singleton_fifo__DOT__full_q)
                  ? (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__u_rspfifo__DOT__wvalid_i))
                  : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__u_sramreqfifo__DOT__wvalid_i)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__u_reqfifo__DOT__wvalid_i 
        = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
            [1U][3U] >> 0x0000000cU) & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT____VdfgRegularize_haa34d1ec_0_0));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__u_rsp_gen__DOT__tl_i[0U] 
        = (IData)((((QData)((IData)(((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__d_valid)
                                      ? (3U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__u_reqfifo__DOT__rdata_o 
                                               >> 8U))
                                      : 0U))) << 0x00000039U) 
                   | (((QData)((IData)(((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__d_valid)
                                         ? (0x000000ffU 
                                            & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__u_reqfifo__DOT__rdata_o)
                                         : 0U))) << 0x00000031U) 
                      | (((QData)((IData)((((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__d_error)) 
                                            & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__vld_rd_rsp))
                                            ? (IData)(
                                                      (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__u_rspfifo__DOT__rdata_o 
                                                       >> 8U))
                                            : vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__error_blanking_data))) 
                          << 0x00000010U) | (QData)((IData)(
                                                            ((((0x00004000U 
                                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__u_reqfifo__DOT__rdata_o)
                                                                ? 0x0000002aU
                                                                : 
                                                               ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__vld_rd_rsp)
                                                                 ? 
                                                                (0x0000007fU 
                                                                 & (IData)(
                                                                           (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__u_rspfifo__DOT__rdata_o 
                                                                            >> 1U)))
                                                                 : 0x0000002aU)) 
                                                              << 2U) 
                                                             | ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__d_error) 
                                                                  & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__d_valid)) 
                                                                 << 1U) 
                                                                | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT____VdfgRegularize_haa34d1ec_0_0)))))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__u_rsp_gen__DOT__tl_i[1U] 
        = ((0xc0000000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__u_rsp_gen__DOT__tl_i[1U]) 
           | (IData)(((((QData)((IData)(((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__d_valid)
                                          ? (3U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__u_reqfifo__DOT__rdata_o 
                                                   >> 8U))
                                          : 0U))) << 0x00000039U) 
                       | (((QData)((IData)(((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__d_valid)
                                             ? (0x000000ffU 
                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__u_reqfifo__DOT__rdata_o)
                                             : 0U))) 
                           << 0x00000031U) | (((QData)((IData)(
                                                               (((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__d_error)) 
                                                                 & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__vld_rd_rsp))
                                                                 ? (IData)(
                                                                           (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__u_rspfifo__DOT__rdata_o 
                                                                            >> 8U))
                                                                 : vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__error_blanking_data))) 
                                               << 0x00000010U) 
                                              | (QData)((IData)(
                                                                ((((0x00004000U 
                                                                    & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__u_reqfifo__DOT__rdata_o)
                                                                    ? 0x0000002aU
                                                                    : 
                                                                   ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__vld_rd_rsp)
                                                                     ? 
                                                                    (0x0000007fU 
                                                                     & (IData)(
                                                                               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__u_rspfifo__DOT__rdata_o 
                                                                                >> 1U)))
                                                                     : 0x0000002aU)) 
                                                                  << 2U) 
                                                                 | ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__d_error) 
                                                                      & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__d_valid)) 
                                                                     << 1U) 
                                                                    | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT____VdfgRegularize_haa34d1ec_0_0)))))))) 
                      >> 0x00000020U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__u_rsp_gen__DOT__tl_i[1U] 
        = ((0x3fffffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__u_rsp_gen__DOT__tl_i[1U]) 
           | ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__d_valid) 
                & (1U != (3U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__u_reqfifo__DOT__rdata_o 
                                >> 0x0000000fU)))) ? 0U
                : 1U) << 0x0000001eU));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__u_rsp_gen__DOT__tl_i[2U] 
        = ((2U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__u_rsp_gen__DOT__tl_i[2U]) 
           | (3U & ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__d_valid) 
                      & (1U != (3U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__u_reqfifo__DOT__rdata_o 
                                      >> 0x0000000fU))))
                      ? 0U : 1U) >> 2U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__u_rsp_gen__DOT__tl_i[2U] 
        = ((1U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__u_rsp_gen__DOT__tl_i[2U]) 
           | (3U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__d_valid) 
                    << 1U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__u_sramreqfifo__DOT__gen_singleton_fifo__DOT__full_d 
        = (1U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__u_sramreqfifo__DOT__gen_singleton_fifo__DOT__full_q)
                  ? (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__u_rspfifo__DOT__wvalid_i))
                  : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__u_sramreqfifo__DOT__wvalid_i)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__valid_i 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_scramble_ctrl__DOT__imem_key_valid_q) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_imem__DOT__req_i));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__u_reqfifo__DOT__wvalid_i 
        = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
            [0U][3U] >> 0x0000000cU) & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT____VdfgRegularize_h128e8182_0_0));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__u_rsp_gen__DOT__tl_i[0U] 
        = (IData)((((QData)((IData)(((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__d_valid)
                                      ? (3U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__u_reqfifo__DOT__rdata_o 
                                               >> 8U))
                                      : 0U))) << 0x00000039U) 
                   | (((QData)((IData)(((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__d_valid)
                                         ? (0x000000ffU 
                                            & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__u_reqfifo__DOT__rdata_o)
                                         : 0U))) << 0x00000031U) 
                      | (((QData)((IData)((((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__d_error)) 
                                            & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__vld_rd_rsp))
                                            ? (IData)(
                                                      (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__u_rspfifo__DOT__rdata_o 
                                                       >> 8U))
                                            : vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__error_blanking_data))) 
                          << 0x00000010U) | (QData)((IData)(
                                                            ((((0x00004000U 
                                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__u_reqfifo__DOT__rdata_o)
                                                                ? 0x0000002aU
                                                                : 
                                                               ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__vld_rd_rsp)
                                                                 ? 
                                                                (0x0000007fU 
                                                                 & (IData)(
                                                                           (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__u_rspfifo__DOT__rdata_o 
                                                                            >> 1U)))
                                                                 : 0x0000002aU)) 
                                                              << 2U) 
                                                             | ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__d_error) 
                                                                  & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__d_valid)) 
                                                                 << 1U) 
                                                                | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT____VdfgRegularize_h128e8182_0_0)))))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__u_rsp_gen__DOT__tl_i[1U] 
        = ((0xc0000000U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__u_rsp_gen__DOT__tl_i[1U]) 
           | (IData)(((((QData)((IData)(((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__d_valid)
                                          ? (3U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__u_reqfifo__DOT__rdata_o 
                                                   >> 8U))
                                          : 0U))) << 0x00000039U) 
                       | (((QData)((IData)(((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__d_valid)
                                             ? (0x000000ffU 
                                                & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__u_reqfifo__DOT__rdata_o)
                                             : 0U))) 
                           << 0x00000031U) | (((QData)((IData)(
                                                               (((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__d_error)) 
                                                                 & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__vld_rd_rsp))
                                                                 ? (IData)(
                                                                           (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__u_rspfifo__DOT__rdata_o 
                                                                            >> 8U))
                                                                 : vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__error_blanking_data))) 
                                               << 0x00000010U) 
                                              | (QData)((IData)(
                                                                ((((0x00004000U 
                                                                    & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__u_reqfifo__DOT__rdata_o)
                                                                    ? 0x0000002aU
                                                                    : 
                                                                   ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__vld_rd_rsp)
                                                                     ? 
                                                                    (0x0000007fU 
                                                                     & (IData)(
                                                                               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__u_rspfifo__DOT__rdata_o 
                                                                                >> 1U)))
                                                                     : 0x0000002aU)) 
                                                                  << 2U) 
                                                                 | ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__d_error) 
                                                                      & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__d_valid)) 
                                                                     << 1U) 
                                                                    | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT____VdfgRegularize_h128e8182_0_0)))))))) 
                      >> 0x00000020U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__u_rsp_gen__DOT__tl_i[1U] 
        = ((0x3fffffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__u_rsp_gen__DOT__tl_i[1U]) 
           | ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__d_valid) 
                & (1U != (3U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__u_reqfifo__DOT__rdata_o 
                                >> 0x0000000fU)))) ? 0U
                : 1U) << 0x0000001eU));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__u_rsp_gen__DOT__tl_i[2U] 
        = ((2U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__u_rsp_gen__DOT__tl_i[2U]) 
           | (3U & ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__d_valid) 
                      & (1U != (3U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__u_reqfifo__DOT__rdata_o 
                                      >> 0x0000000fU))))
                      ? 0U : 1U) >> 2U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__u_rsp_gen__DOT__tl_i[2U] 
        = ((1U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__u_rsp_gen__DOT__tl_i[2U]) 
           | (3U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__d_valid) 
                    << 1U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_reg_if__DOT__error_i 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__addrmiss) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__wr_err) 
              | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_chk.err_o)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__full_d 
        = (1U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__full_q)
                  ? (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__u_reqfifo__DOT__rready_i))
                  : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__u_reqfifo__DOT__wvalid_i)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__tl_win_d2h[1U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__u_rsp_gen__DOT__tl_i[0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__tl_win_d2h[1U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__u_rsp_gen__DOT__tl_i[1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__tl_win_d2h[1U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__u_rsp_gen__DOT__tl_i[2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_d2h[1U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__u_rsp_gen__DOT__tl_i[0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_d2h[1U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__u_rsp_gen__DOT__tl_i[1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_d2h[1U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__u_rsp_gen__DOT__tl_i[2U];
    __Vfunc_mubi4_bool_to_mubi__1591__val = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__valid_i) 
                                             & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_imem__DOT__write_i));
    __Vfunc_mubi4_bool_to_mubi__1591__Vfuncout = ((IData)(__Vfunc_mubi4_bool_to_mubi__1591__val)
                                                   ? 6U
                                                   : 9U);
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_imem__DOT__write_en_d 
        = __Vfunc_mubi4_bool_to_mubi__1591__Vfuncout;
    __Vfunc_mubi4_bool_to_mubi__1590__val = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_imem__DOT__gen_par_scr__BRA__0__KET____DOT__u_prim_prince__DOT__valid_i) 
                                             & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_imem__DOT__write_i)));
    __Vfunc_mubi4_bool_to_mubi__1590__Vfuncout = ((IData)(__Vfunc_mubi4_bool_to_mubi__1590__val)
                                                   ? 6U
                                                   : 9U);
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_imem__DOT__read_en 
        = __Vfunc_mubi4_bool_to_mubi__1590__Vfuncout;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__full_d 
        = (1U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__full_q)
                  ? (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__u_reqfifo__DOT__rready_i))
                  : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__u_reqfifo__DOT__wvalid_i)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__tl_win_d2h[0U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__u_rsp_gen__DOT__tl_i[0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__tl_win_d2h[0U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__u_rsp_gen__DOT__tl_i[1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__tl_win_d2h[0U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__u_rsp_gen__DOT__tl_i[2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_d2h[0U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__u_rsp_gen__DOT__tl_i[0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_d2h[0U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__u_rsp_gen__DOT__tl_i[1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_d2h[0U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__u_rsp_gen__DOT__tl_i[2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____VdfgRegularize_hc44a298e_0_16 
        = ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_reg_if__DOT__error_i)) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_reg_if__DOT__re_o));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____VdfgRegularize_hc44a298e_0_15 
        = ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_reg_if__DOT__error_i)) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_reg_if__DOT__we_o));
    __Vfunc_mubi4_test_true_loose__1621__val = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_imem__DOT__write_en_d;
    __Vfunc_mubi4_test_true_loose__1621__Vfuncout = 
        (9U != (IData)(__Vfunc_mubi4_test_true_loose__1621__val));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_imem__DOT__write_en_b 
        = __Vfunc_mubi4_test_true_loose__1621__Vfuncout;
    __Vfunc_mubi4_test_true_loose__1620__val = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_imem__DOT__read_en;
    __Vfunc_mubi4_test_true_loose__1620__Vfuncout = 
        (9U != (IData)(__Vfunc_mubi4_test_true_loose__1620__val));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_imem__DOT__read_en_b 
        = __Vfunc_mubi4_test_true_loose__1620__Vfuncout;
    __Vfunc_mubi4_and_hi__1608__b = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_imem__DOT__read_en;
    __Vfunc_mubi4_and_hi__1608__a = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_imem__DOT__write_en_q;
    __Vfunc_mubi4_and__1609__b = __Vfunc_mubi4_and_hi__1608__b;
    __Vfunc_mubi4_and__1609__a = __Vfunc_mubi4_and_hi__1608__a;
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__Vfunc_mubi4_and__1609__out = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12436594509205365336ull);
    __Vfunc_mubi4_and__1609__a_in = __Vfunc_mubi4_and__1609__a;
    __Vfunc_mubi4_and__1609__b_in = __Vfunc_mubi4_and__1609__b;
    vlSelfRef.__Vfunc_mubi4_and__1609__out = ((0x0cU 
                                               & (IData)(vlSelfRef.__Vfunc_mubi4_and__1609__out)) 
                                              | ((2U 
                                                  & ((IData)(__Vfunc_mubi4_and__1609__a_in) 
                                                     & (IData)(__Vfunc_mubi4_and__1609__b_in))) 
                                                 | (1U 
                                                    & ((IData)(__Vfunc_mubi4_and__1609__a_in) 
                                                       | (IData)(__Vfunc_mubi4_and__1609__b_in)))));
    vlSelfRef.__Vfunc_mubi4_and__1609__out = ((3U & (IData)(vlSelfRef.__Vfunc_mubi4_and__1609__out)) 
                                              | (((2U 
                                                   & (((IData)(__Vfunc_mubi4_and__1609__a_in) 
                                                       | (IData)(__Vfunc_mubi4_and__1609__b_in)) 
                                                      >> 2U)) 
                                                  | (1U 
                                                     & (((IData)(__Vfunc_mubi4_and__1609__a_in) 
                                                         & (IData)(__Vfunc_mubi4_and__1609__b_in)) 
                                                        >> 2U))) 
                                                 << 2U));
    __Vfunc_mubi4_and__1609__Vfuncout = vlSelfRef.__Vfunc_mubi4_and__1609__out;
    __Vfunc_mubi4_and_hi__1608__Vfuncout = __Vfunc_mubi4_and__1609__Vfuncout;
    __Vfunc_mubi4_test_true_loose__1607__val = __Vfunc_mubi4_and_hi__1608__Vfuncout;
    __Vfunc_mubi4_test_true_loose__1607__Vfuncout = 
        (9U != (IData)(__Vfunc_mubi4_test_true_loose__1607__val));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_imem__DOT__rw_collision 
        = __Vfunc_mubi4_test_true_loose__1607__Vfuncout;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_imem__DOT__macro_write 
        = ((([&]() {
                    vlSelfRef.__Vfunc_mubi4_or_hi__1604__b 
                        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_imem__DOT__write_pending_q;
                    vlSelfRef.__Vfunc_mubi4_or_hi__1604__a 
                        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_imem__DOT__write_en_q;
                    vlSelfRef.__Vfunc_mubi4_or__1605__b 
                        = vlSelfRef.__Vfunc_mubi4_or_hi__1604__b;
                    vlSelfRef.__Vfunc_mubi4_or__1605__a 
                        = vlSelfRef.__Vfunc_mubi4_or_hi__1604__a;
                    vlSelf->__Vfunc_mubi4_or__1605__out = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2410811796782017852ull);
                    vlSelfRef.__Vfunc_mubi4_or__1605__a_in 
                        = vlSelfRef.__Vfunc_mubi4_or__1605__a;
                    vlSelfRef.__Vfunc_mubi4_or__1605__b_in 
                        = vlSelfRef.__Vfunc_mubi4_or__1605__b;
                    vlSelfRef.__Vfunc_mubi4_or__1605__out 
                        = ((0x0cU & (IData)(vlSelfRef.__Vfunc_mubi4_or__1605__out)) 
                           | ((2U & ((IData)(vlSelfRef.__Vfunc_mubi4_or__1605__a_in) 
                                     | (IData)(vlSelfRef.__Vfunc_mubi4_or__1605__b_in))) 
                              | (1U & ((IData)(vlSelfRef.__Vfunc_mubi4_or__1605__a_in) 
                                       & (IData)(vlSelfRef.__Vfunc_mubi4_or__1605__b_in)))));
                    vlSelfRef.__Vfunc_mubi4_or__1605__out 
                        = ((3U & (IData)(vlSelfRef.__Vfunc_mubi4_or__1605__out)) 
                           | (((2U & (((IData)(vlSelfRef.__Vfunc_mubi4_or__1605__a_in) 
                                       & (IData)(vlSelfRef.__Vfunc_mubi4_or__1605__b_in)) 
                                      >> 2U)) | (1U 
                                                 & (((IData)(vlSelfRef.__Vfunc_mubi4_or__1605__a_in) 
                                                     | (IData)(vlSelfRef.__Vfunc_mubi4_or__1605__b_in)) 
                                                    >> 2U))) 
                              << 2U));
                    vlSelfRef.__Vfunc_mubi4_or__1605__Vfuncout 
                        = vlSelfRef.__Vfunc_mubi4_or__1605__out;
                    vlSelfRef.__Vfunc_mubi4_or_hi__1604__Vfuncout 
                        = vlSelfRef.__Vfunc_mubi4_or__1605__Vfuncout;
                    vlSelfRef.__Vfunc_mubi4_test_true_loose__1603__val 
                        = vlSelfRef.__Vfunc_mubi4_or_hi__1604__Vfuncout;
                    vlSelfRef.__Vfunc_mubi4_test_true_loose__1603__Vfuncout 
                        = (9U != (IData)(vlSelfRef.__Vfunc_mubi4_test_true_loose__1603__val));
                }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_loose__1603__Vfuncout)) 
            & (~ ([&]() {
                        vlSelfRef.__Vfunc_mubi4_test_true_loose__1606__val 
                            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_imem__DOT__read_en;
                        vlSelfRef.__Vfunc_mubi4_test_true_loose__1606__Vfuncout 
                            = (9U != (IData)(vlSelfRef.__Vfunc_mubi4_test_true_loose__1606__val));
                    }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_loose__1606__Vfuncout)))) 
           & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_imem__DOT__intg_error_w_q)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__tl_win_i[0U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__tl_win_d2h
        [0U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__tl_win_i[0U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__tl_win_d2h
        [0U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__tl_win_i[0U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__tl_win_d2h
        [0U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__tl_win_i[1U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__tl_win_d2h
        [1U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__tl_win_i[1U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__tl_win_d2h
        [1U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__tl_win_i[1U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__tl_win_d2h
        [1U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellinp__u_socket__tl_d_i[0U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_d2h
        [0U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellinp__u_socket__tl_d_i[0U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_d2h
        [0U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellinp__u_socket__tl_d_i[0U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_d2h
        [0U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellinp__u_socket__tl_d_i[1U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_d2h
        [1U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellinp__u_socket__tl_d_i[1U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_d2h
        [1U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellinp__u_socket__tl_d_i[1U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_d2h
        [1U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellinp__u_socket__tl_d_i[2U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_d2h
        [2U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellinp__u_socket__tl_d_i[2U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_d2h
        [2U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellinp__u_socket__tl_d_i[2U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__tl_socket_d2h
        [2U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_mem_load_crc32__DOT__set_crc_i 
        = ((0x000aU == (0x00003fffU & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                        [2U][2U] << 2U) 
                                       | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                          [2U][1U] 
                                          >> 0x0000001eU)))) 
           & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____VdfgRegularize_hc44a298e_0_15));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_insn_cnt__DOT__we 
        = ((9U == (0x00003fffU & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                   [2U][2U] << 2U) 
                                  | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                     [2U][1U] >> 0x0000001eU)))) 
           & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____VdfgRegularize_hc44a298e_0_15));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_err_bits_bad_data_addr__DOT__we 
        = ((7U == (0x00003fffU & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                   [2U][2U] << 2U) 
                                  | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                     [2U][1U] >> 0x0000001eU)))) 
           & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____VdfgRegularize_hc44a298e_0_15));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_intr_enable__DOT__we 
        = ((1U == (0x00003fffU & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                   [2U][2U] << 2U) 
                                  | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                     [2U][1U] >> 0x0000001eU)))) 
           & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____VdfgRegularize_hc44a298e_0_15));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_intr_state__DOT__we 
        = ((0U == (0x00003fffU & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                   [2U][2U] << 2U) 
                                  | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                     [2U][1U] >> 0x0000001eU)))) 
           & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____VdfgRegularize_hc44a298e_0_15));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_cmd__DOT__we 
        = ((4U == (0x00003fffU & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                   [2U][2U] << 2U) 
                                  | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                     [2U][1U] >> 0x0000001eU)))) 
           & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____VdfgRegularize_hc44a298e_0_15));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_ctrl__DOT__we 
        = ((5U == (0x00003fffU & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                   [2U][2U] << 2U) 
                                  | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                     [2U][1U] >> 0x0000001eU)))) 
           & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____VdfgRegularize_hc44a298e_0_15));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_intr_test__DOT__we 
        = ((2U == (0x00003fffU & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                   [2U][2U] << 2U) 
                                  | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                     [2U][1U] >> 0x0000001eU)))) 
           & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____VdfgRegularize_hc44a298e_0_15));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_alert_test_fatal__DOT__we 
        = ((3U == (0x00003fffU & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                   [2U][2U] << 2U) 
                                  | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                     [2U][1U] >> 0x0000001eU)))) 
           & (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____VdfgRegularize_hc44a298e_0_15));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_imem__DOT__u_write_pending_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_imem__DOT__macro_write)
            ? 9U : ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_imem__DOT__rw_collision)
                     ? 6U : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_imem__DOT__write_pending_q)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__imem_wpending 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_imem__DOT__macro_write) 
           | ([&]() {
                vlSelfRef.__Vfunc_mubi4_test_true_loose__1610__val 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_imem__DOT__write_en_d;
                vlSelfRef.__Vfunc_mubi4_test_true_loose__1610__Vfuncout 
                    = (9U != (IData)(vlSelfRef.__Vfunc_mubi4_test_true_loose__1610__val));
            }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_loose__1610__Vfuncout)));
    __Vfunc_mubi4_bool_to_mubi__1631__val = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_imem__DOT__macro_write;
    __Vfunc_mubi4_bool_to_mubi__1631__Vfuncout = ((IData)(__Vfunc_mubi4_bool_to_mubi__1631__val)
                                                   ? 6U
                                                   : 9U);
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_imem__DOT__u_prim_ram_1p_adv__DOT__write_d 
        = __Vfunc_mubi4_bool_to_mubi__1631__Vfuncout;
    vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_socket.tl_d_i[0U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellinp__u_socket__tl_d_i
        [0U][0U];
    vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_socket.tl_d_i[0U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellinp__u_socket__tl_d_i
        [0U][1U];
    vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_socket.tl_d_i[0U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellinp__u_socket__tl_d_i
        [0U][2U];
    vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_socket.tl_d_i[1U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellinp__u_socket__tl_d_i
        [1U][0U];
    vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_socket.tl_d_i[1U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellinp__u_socket__tl_d_i
        [1U][1U];
    vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_socket.tl_d_i[1U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellinp__u_socket__tl_d_i
        [1U][2U];
    vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_socket.tl_d_i[2U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellinp__u_socket__tl_d_i
        [2U][0U];
    vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_socket.tl_d_i[2U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellinp__u_socket__tl_d_i
        [2U][1U];
    vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_socket.tl_d_i[2U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellinp__u_socket__tl_d_i
        [2U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__2__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_insn_cnt__DOT__we) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_mem_load_crc32__DOT__set_crc_i));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__2__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_insn_cnt__DOT__we) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_mem_load_crc32__DOT__set_crc_i));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__err_bits_clear 
        = ((0x0000ffffU == (0x0000ffffU & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_err_bits_bad_data_addr__DOT__we))))) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__is_not_running_q));
    vlSelfRef.__VdfgRegularize_he50b618e_0_983[0U] 
        = (IData)((((QData)((IData)(((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                      [2U][1U] << 8U) 
                                     | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                        [2U][0U] >> 0x00000018U)))) 
                    << 1U) | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_mem_load_crc32__DOT__set_crc_i))));
    vlSelfRef.__VdfgRegularize_he50b618e_0_983[1U] 
        = ((0xfffffffeU & vlSelfRef.__VdfgRegularize_he50b618e_0_983[1U]) 
           | (IData)(((((QData)((IData)(((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                          [2U][1U] 
                                          << 8U) | 
                                         (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                          [2U][0U] 
                                          >> 0x00000018U)))) 
                        << 1U) | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_mem_load_crc32__DOT__set_crc_i))) 
                      >> 0x00000020U)));
    vlSelfRef.__VdfgRegularize_he50b618e_0_983[1U] 
        = ((1U & vlSelfRef.__VdfgRegularize_he50b618e_0_983[1U]) 
           | ((IData)((((QData)((IData)(((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                          [2U][1U] 
                                          << 8U) | 
                                         (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                          [2U][0U] 
                                          >> 0x00000018U)))) 
                        << 1U) | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_insn_cnt__DOT__we)))) 
              << 1U));
    vlSelfRef.__VdfgRegularize_he50b618e_0_983[2U] 
        = ((0x0000003cU & vlSelfRef.__VdfgRegularize_he50b618e_0_983[2U]) 
           | (0x0000003fU & (((IData)((((QData)((IData)(
                                                        ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                          [2U][1U] 
                                                          << 8U) 
                                                         | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                            [2U][0U] 
                                                            >> 0x00000018U)))) 
                                        << 1U) | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_insn_cnt__DOT__we)))) 
                              >> 0x0000001fU) | ((IData)(
                                                         ((((QData)((IData)(
                                                                            ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                                              [2U][1U] 
                                                                              << 8U) 
                                                                             | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                                                [2U][0U] 
                                                                                >> 0x00000018U)))) 
                                                            << 1U) 
                                                           | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_insn_cnt__DOT__we))) 
                                                          >> 0x00000020U)) 
                                                 << 1U))));
    vlSelfRef.__VdfgRegularize_he50b618e_0_983[2U] 
        = ((3U & vlSelfRef.__VdfgRegularize_he50b618e_0_983[2U]) 
           | (0x0000003cU & ((((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                      [2U][0U] >> 0x00000018U)) 
                               | (0x0000ffffU == (0x0000ffffU 
                                                  & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_err_bits_bad_data_addr__DOT__we)))))) 
                              << 4U) | (((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                [2U][0U] 
                                                >> 0x00000017U)) 
                                         | (0x0000ffffU 
                                            == (0x0000ffffU 
                                                & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_err_bits_bad_data_addr__DOT__we)))))) 
                                        << 2U))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_intr_enable__DOT__wr_data 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_intr_enable__DOT__we) 
           & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
              [2U][0U] >> 0x00000018U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__7__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_intr_state__DOT__we) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_intr_enable__DOT__we));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__7__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_intr_state__DOT__we) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_intr_enable__DOT__we));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__software_errs_fatal_d 
        = (1U & (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_ctrl__DOT__we) 
                  & (0U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__status_q)))
                  ? (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                     [2U][0U] >> 0x00000018U) : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__software_errs_fatal_q)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__9__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_cmd__DOT__we) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_ctrl__DOT__we));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__9__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_cmd__DOT__we) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_ctrl__DOT__we));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_mem_load_crc32__DOT__set_crc_i) 
            << 0x0000000aU) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_insn_cnt__DOT__we) 
                                << 9U) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_err_bits_bad_data_addr__DOT__we) 
                                           << 7U) | 
                                          ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_ctrl__DOT__we) 
                                             << 5U) 
                                            | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_cmd__DOT__we) 
                                                << 4U) 
                                               | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_alert_test_fatal__DOT__we) 
                                                  << 3U))) 
                                           | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_intr_test__DOT__we) 
                                               << 2U) 
                                              | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_intr_enable__DOT__we) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_intr_state__DOT__we)))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__8__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_intr_test__DOT__we) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_alert_test_fatal__DOT__we));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__8__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_intr_test__DOT__we) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_alert_test_fatal__DOT__we));
    __Vfunc_mubi4_test_true_loose__1623__val = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_imem__DOT__u_prim_ram_1p_adv__DOT__write_d;
    __Vfunc_mubi4_test_true_loose__1623__Vfuncout = 
        (9U != (IData)(__Vfunc_mubi4_test_true_loose__1623__val));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_imem__DOT__u_prim_ram_1p_adv__DOT__write_q_b 
        = __Vfunc_mubi4_test_true_loose__1623__Vfuncout;
    vlSelfRef.__VdfgRegularize_he50b618e_0_984[0U] 
        = vlSelfRef.__VdfgRegularize_he50b618e_0_983[0U];
    vlSelfRef.__VdfgRegularize_he50b618e_0_984[1U] 
        = vlSelfRef.__VdfgRegularize_he50b618e_0_983[1U];
    vlSelfRef.__VdfgRegularize_he50b618e_0_984[2U] 
        = ((0x00000080U & vlSelfRef.__VdfgRegularize_he50b618e_0_984[2U]) 
           | (0x000000ffU & (((0x0000ffffU == (0x0000ffffU 
                                               & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_err_bits_bad_data_addr__DOT__we))))) 
                              << 6U) | vlSelfRef.__VdfgRegularize_he50b618e_0_983[2U])));
    vlSelfRef.__VdfgRegularize_he50b618e_0_984[2U] 
        = ((0x0000007fU & vlSelfRef.__VdfgRegularize_he50b618e_0_984[2U]) 
           | (0x00000080U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                             [2U][0U] >> 0x00000013U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__4__KET__ 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__9__KET__) 
            & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_err_bits_bad_data_addr__DOT__we)) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__9__KET__));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__4__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__9__KET__) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_err_bits_bad_data_addr__DOT__we));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__3__KET__ 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__7__KET__) 
            & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__8__KET__)) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__7__KET__) 
              | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__8__KET__)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__3__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__7__KET__) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__8__KET__));
    vlSelfRef.__VdfgRegularize_he50b618e_0_985[0U] 
        = vlSelfRef.__VdfgRegularize_he50b618e_0_984[0U];
    vlSelfRef.__VdfgRegularize_he50b618e_0_985[1U] 
        = vlSelfRef.__VdfgRegularize_he50b618e_0_984[1U];
    vlSelfRef.__VdfgRegularize_he50b618e_0_985[2U] 
        = ((0x00000200U & vlSelfRef.__VdfgRegularize_he50b618e_0_985[2U]) 
           | (0x000003ffU & (((0x0000ffffU == (0x0000ffffU 
                                               & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_err_bits_bad_data_addr__DOT__we))))) 
                              << 8U) | vlSelfRef.__VdfgRegularize_he50b618e_0_984[2U])));
    vlSelfRef.__VdfgRegularize_he50b618e_0_985[2U] 
        = ((0x000001ffU & vlSelfRef.__VdfgRegularize_he50b618e_0_985[2U]) 
           | (0x00000200U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                             [2U][0U] >> 0x00000012U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__1__KET__ 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__3__KET__) 
            & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__4__KET__)) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__3__KET__) 
              | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__4__KET__)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__1__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__3__KET__) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__4__KET__));
    vlSelfRef.__VdfgRegularize_he50b618e_0_986[0U] 
        = vlSelfRef.__VdfgRegularize_he50b618e_0_985[0U];
    vlSelfRef.__VdfgRegularize_he50b618e_0_986[1U] 
        = vlSelfRef.__VdfgRegularize_he50b618e_0_985[1U];
    vlSelfRef.__VdfgRegularize_he50b618e_0_986[2U] 
        = ((0x00000800U & vlSelfRef.__VdfgRegularize_he50b618e_0_986[2U]) 
           | (0x00000fffU & (((0x0000ffffU == (0x0000ffffU 
                                               & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_err_bits_bad_data_addr__DOT__we))))) 
                              << 0x0000000aU) | vlSelfRef.__VdfgRegularize_he50b618e_0_985[2U])));
    vlSelfRef.__VdfgRegularize_he50b618e_0_986[2U] 
        = ((0x000007ffU & vlSelfRef.__VdfgRegularize_he50b618e_0_986[2U]) 
           | (0x00000800U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                             [2U][0U] >> 0x00000011U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__0__KET__ 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__1__KET__) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__2__KET__));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__oh0_err 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__1__KET__) 
            & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__2__KET__)) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__1__KET__) 
              | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_tree__BRA__2__KET__)));
    vlSelfRef.__VdfgRegularize_he50b618e_0_987[0U] 
        = vlSelfRef.__VdfgRegularize_he50b618e_0_986[0U];
    vlSelfRef.__VdfgRegularize_he50b618e_0_987[1U] 
        = vlSelfRef.__VdfgRegularize_he50b618e_0_986[1U];
    vlSelfRef.__VdfgRegularize_he50b618e_0_987[2U] 
        = ((0x00002000U & vlSelfRef.__VdfgRegularize_he50b618e_0_987[2U]) 
           | (0x00003fffU & (((0x0000ffffU == (0x0000ffffU 
                                               & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_err_bits_bad_data_addr__DOT__we))))) 
                              << 0x0000000cU) | vlSelfRef.__VdfgRegularize_he50b618e_0_986[2U])));
    vlSelfRef.__VdfgRegularize_he50b618e_0_987[2U] 
        = ((0x00001fffU & vlSelfRef.__VdfgRegularize_he50b618e_0_987[2U]) 
           | (0x00002000U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                             [2U][0U] >> 0x00000010U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_o 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__oh0_err) 
           | ((~ ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__addrmiss)) 
                  & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_reg_if__DOT__we_o))) 
              & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__0__KET__)));
    vlSelfRef.__VdfgRegularize_he50b618e_0_988[0U] 
        = vlSelfRef.__VdfgRegularize_he50b618e_0_987[0U];
    vlSelfRef.__VdfgRegularize_he50b618e_0_988[1U] 
        = vlSelfRef.__VdfgRegularize_he50b618e_0_987[1U];
    vlSelfRef.__VdfgRegularize_he50b618e_0_988[2U] 
        = ((0x00008000U & vlSelfRef.__VdfgRegularize_he50b618e_0_988[2U]) 
           | (0x0000ffffU & (((0x0000ffffU == (0x0000ffffU 
                                               & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_err_bits_bad_data_addr__DOT__we))))) 
                              << 0x0000000eU) | vlSelfRef.__VdfgRegularize_he50b618e_0_987[2U])));
    vlSelfRef.__VdfgRegularize_he50b618e_0_988[2U] 
        = ((0x00007fffU & vlSelfRef.__VdfgRegularize_he50b618e_0_988[2U]) 
           | (0x00008000U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                             [2U][0U] >> 0x0000000fU)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__non_core_err_bits 
        = ((([&]() {
                    vlSelfRef.__Vfunc_lc_tx_test_true_loose__1587__val 
                        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_lc_escalate_en_sync.__PVT__lc_en;
                    vlSelfRef.__Vfunc_lc_tx_test_true_loose__1587__Vfuncout 
                        = (0x0aU != (IData)(vlSelfRef.__Vfunc_lc_tx_test_true_loose__1587__val));
                }(), (IData)(vlSelfRef.__Vfunc_lc_tx_test_true_loose__1587__Vfuncout)) 
            << 3U) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__illegal_bus_access_q) 
                       << 2U) | ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__otbn_scramble_state_error) 
                                   | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__missed_gnt_error_q)) 
                                  << 1U) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__u_rspfifo__DOT__gen_singleton_fifo__DOT__gen_secure__DOT__err_q) 
                                             | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__u_sramreqfifo__DOT__gen_singleton_fifo__DOT__gen_secure__DOT__err_q) 
                                                | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__intg_error_q) 
                                                   | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_imem__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__gen_secure__DOT__err_q)))) 
                                            | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__u_rspfifo__DOT__gen_singleton_fifo__DOT__gen_secure__DOT__err_q) 
                                                | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__u_sramreqfifo__DOT__gen_singleton_fifo__DOT__gen_secure__DOT__err_q) 
                                                   | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__intg_error_q) 
                                                      | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_tlul_adapter_sram_dmem__DOT__u_reqfifo__DOT__gen_singleton_fifo__DOT__gen_secure__DOT__err_q)))) 
                                               | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__err_q) 
                                                  | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_chk.err_o) 
                                                     | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_o))))))));
    vlSelfRef.__VdfgRegularize_he50b618e_0_989[0U] 
        = vlSelfRef.__VdfgRegularize_he50b618e_0_988[0U];
    vlSelfRef.__VdfgRegularize_he50b618e_0_989[1U] 
        = vlSelfRef.__VdfgRegularize_he50b618e_0_988[1U];
    vlSelfRef.__VdfgRegularize_he50b618e_0_989[2U] 
        = ((0x00020000U & vlSelfRef.__VdfgRegularize_he50b618e_0_989[2U]) 
           | (0x0003ffffU & (((0x0000ffffU == (0x0000ffffU 
                                               & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_err_bits_bad_data_addr__DOT__we))))) 
                              << 0x00000010U) | vlSelfRef.__VdfgRegularize_he50b618e_0_988[2U])));
    vlSelfRef.__VdfgRegularize_he50b618e_0_989[2U] 
        = ((0x0001ffffU & vlSelfRef.__VdfgRegularize_he50b618e_0_989[2U]) 
           | (0x00020000U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                             [2U][0U] >> 0x0000000eU)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__non_core_err_bits_d 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__non_core_err_bits) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__non_core_err_bits_q));
    __Vfunc_mubi4_bool_to_mubi__1588__val = ((0U != 
                                              (7U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__non_core_err_bits))) 
                                             | ([&]() {
                vlSelfRef.__Vfunc_lc_tx_test_true_loose__1589__val 
                    = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_lc_escalate_en_sync.__PVT__lc_en;
                vlSelfRef.__Vfunc_lc_tx_test_true_loose__1589__Vfuncout 
                    = (0x0aU != (IData)(vlSelfRef.__Vfunc_lc_tx_test_true_loose__1589__val));
            }(), (IData)(vlSelfRef.__Vfunc_lc_tx_test_true_loose__1589__Vfuncout)));
    __Vfunc_mubi4_bool_to_mubi__1588__Vfuncout = ((IData)(__Vfunc_mubi4_bool_to_mubi__1588__val)
                                                   ? 6U
                                                   : 9U);
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__core_escalate_en 
        = __Vfunc_mubi4_bool_to_mubi__1588__Vfuncout;
    vlSelfRef.__VdfgRegularize_he50b618e_0_990[0U] 
        = vlSelfRef.__VdfgRegularize_he50b618e_0_989[0U];
    vlSelfRef.__VdfgRegularize_he50b618e_0_990[1U] 
        = vlSelfRef.__VdfgRegularize_he50b618e_0_989[1U];
    vlSelfRef.__VdfgRegularize_he50b618e_0_990[2U] 
        = ((0x00080000U & vlSelfRef.__VdfgRegularize_he50b618e_0_990[2U]) 
           | (0x000fffffU & (((0x0000ffffU == (0x0000ffffU 
                                               & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_err_bits_bad_data_addr__DOT__we))))) 
                              << 0x00000012U) | vlSelfRef.__VdfgRegularize_he50b618e_0_989[2U])));
    vlSelfRef.__VdfgRegularize_he50b618e_0_990[2U] 
        = ((0x0007ffffU & vlSelfRef.__VdfgRegularize_he50b618e_0_990[2U]) 
           | (0x00080000U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                             [2U][1U] << 0x0000000bU)));
    __Vfunc_mubi4_test_invalid__1990__val = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__core_escalate_en;
    __Vfunc_mubi4_test_invalid__1990__Vfuncout = (1U 
                                                  & (~ 
                                                     ((6U 
                                                       == (IData)(__Vfunc_mubi4_test_invalid__1990__val)) 
                                                      | (9U 
                                                         == (IData)(__Vfunc_mubi4_test_invalid__1990__val)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_otbn_core__DOT__mubi_err 
        = __Vfunc_mubi4_test_invalid__1990__Vfuncout;
    vlSelfRef.__VdfgRegularize_he50b618e_0_991[0U] 
        = vlSelfRef.__VdfgRegularize_he50b618e_0_990[0U];
    vlSelfRef.__VdfgRegularize_he50b618e_0_991[1U] 
        = vlSelfRef.__VdfgRegularize_he50b618e_0_990[1U];
    vlSelfRef.__VdfgRegularize_he50b618e_0_991[2U] 
        = ((0x00200000U & vlSelfRef.__VdfgRegularize_he50b618e_0_991[2U]) 
           | (0x003fffffU & (((0x0000ffffU == (0x0000ffffU 
                                               & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_err_bits_bad_data_addr__DOT__we))))) 
                              << 0x00000014U) | vlSelfRef.__VdfgRegularize_he50b618e_0_990[2U])));
    vlSelfRef.__VdfgRegularize_he50b618e_0_991[2U] 
        = ((0x001fffffU & vlSelfRef.__VdfgRegularize_he50b618e_0_991[2U]) 
           | (0x00200000U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                             [2U][1U] << 0x0000000cU)));
    vlSelfRef.__VdfgRegularize_he50b618e_0_992[0U] 
        = vlSelfRef.__VdfgRegularize_he50b618e_0_991[0U];
    vlSelfRef.__VdfgRegularize_he50b618e_0_992[1U] 
        = vlSelfRef.__VdfgRegularize_he50b618e_0_991[1U];
    vlSelfRef.__VdfgRegularize_he50b618e_0_992[2U] 
        = ((0x00800000U & vlSelfRef.__VdfgRegularize_he50b618e_0_992[2U]) 
           | (0x00ffffffU & (((0x0000ffffU == (0x0000ffffU 
                                               & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_err_bits_bad_data_addr__DOT__we))))) 
                              << 0x00000016U) | vlSelfRef.__VdfgRegularize_he50b618e_0_991[2U])));
    vlSelfRef.__VdfgRegularize_he50b618e_0_992[2U] 
        = ((0x007fffffU & vlSelfRef.__VdfgRegularize_he50b618e_0_992[2U]) 
           | (0x00800000U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                             [2U][1U] << 0x0000000dU)));
    vlSelfRef.__VdfgRegularize_he50b618e_0_993[0U] 
        = vlSelfRef.__VdfgRegularize_he50b618e_0_992[0U];
    vlSelfRef.__VdfgRegularize_he50b618e_0_993[1U] 
        = vlSelfRef.__VdfgRegularize_he50b618e_0_992[1U];
    vlSelfRef.__VdfgRegularize_he50b618e_0_993[2U] 
        = ((0x02000000U & vlSelfRef.__VdfgRegularize_he50b618e_0_993[2U]) 
           | (0x03ffffffU & (((0x0000ffffU == (0x0000ffffU 
                                               & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_err_bits_bad_data_addr__DOT__we))))) 
                              << 0x00000018U) | vlSelfRef.__VdfgRegularize_he50b618e_0_992[2U])));
    vlSelfRef.__VdfgRegularize_he50b618e_0_993[2U] 
        = ((0x01ffffffU & vlSelfRef.__VdfgRegularize_he50b618e_0_993[2U]) 
           | (0x02000000U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                             [2U][1U] << 0x0000000eU)));
    vlSelfRef.__VdfgRegularize_he50b618e_0_994[0U] 
        = vlSelfRef.__VdfgRegularize_he50b618e_0_993[0U];
    vlSelfRef.__VdfgRegularize_he50b618e_0_994[1U] 
        = vlSelfRef.__VdfgRegularize_he50b618e_0_993[1U];
    vlSelfRef.__VdfgRegularize_he50b618e_0_994[2U] 
        = ((0x08000000U & vlSelfRef.__VdfgRegularize_he50b618e_0_994[2U]) 
           | (0x0fffffffU & (((0x0000ffffU == (0x0000ffffU 
                                               & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_err_bits_bad_data_addr__DOT__we))))) 
                              << 0x0000001aU) | vlSelfRef.__VdfgRegularize_he50b618e_0_993[2U])));
    vlSelfRef.__VdfgRegularize_he50b618e_0_994[2U] 
        = ((0x07ffffffU & vlSelfRef.__VdfgRegularize_he50b618e_0_994[2U]) 
           | (0x08000000U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                             [2U][1U] << 0x0000000fU)));
    vlSelfRef.__VdfgRegularize_he50b618e_0_995[0U] 
        = vlSelfRef.__VdfgRegularize_he50b618e_0_994[0U];
    vlSelfRef.__VdfgRegularize_he50b618e_0_995[1U] 
        = vlSelfRef.__VdfgRegularize_he50b618e_0_994[1U];
    vlSelfRef.__VdfgRegularize_he50b618e_0_995[2U] 
        = ((0x20000000U & vlSelfRef.__VdfgRegularize_he50b618e_0_995[2U]) 
           | (0x3fffffffU & (((0x0000ffffU == (0x0000ffffU 
                                               & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_err_bits_bad_data_addr__DOT__we))))) 
                              << 0x0000001cU) | vlSelfRef.__VdfgRegularize_he50b618e_0_994[2U])));
    vlSelfRef.__VdfgRegularize_he50b618e_0_995[2U] 
        = ((0x1fffffffU & vlSelfRef.__VdfgRegularize_he50b618e_0_995[2U]) 
           | (0x20000000U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                             [2U][1U] << 0x00000010U)));
    vlSelfRef.__VdfgRegularize_he50b618e_0_996[0U] 
        = vlSelfRef.__VdfgRegularize_he50b618e_0_995[0U];
    vlSelfRef.__VdfgRegularize_he50b618e_0_996[1U] 
        = vlSelfRef.__VdfgRegularize_he50b618e_0_995[1U];
    vlSelfRef.__VdfgRegularize_he50b618e_0_996[2U] 
        = ((0x80000000U & vlSelfRef.__VdfgRegularize_he50b618e_0_996[2U]) 
           | (((0x0000ffffU == (0x0000ffffU & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_err_bits_bad_data_addr__DOT__we))))) 
               << 0x0000001eU) | vlSelfRef.__VdfgRegularize_he50b618e_0_995[2U]));
    vlSelfRef.__VdfgRegularize_he50b618e_0_996[2U] 
        = ((0x7fffffffU & vlSelfRef.__VdfgRegularize_he50b618e_0_996[2U]) 
           | (0x80000000U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                             [2U][1U] << 0x00000011U)));
    vlSelfRef.__VdfgRegularize_he50b618e_0_997[0U] 
        = vlSelfRef.__VdfgRegularize_he50b618e_0_996[0U];
    vlSelfRef.__VdfgRegularize_he50b618e_0_997[1U] 
        = vlSelfRef.__VdfgRegularize_he50b618e_0_996[1U];
    vlSelfRef.__VdfgRegularize_he50b618e_0_997[2U] 
        = vlSelfRef.__VdfgRegularize_he50b618e_0_996[2U];
    vlSelfRef.__VdfgRegularize_he50b618e_0_997[3U] 
        = ((2U & vlSelfRef.__VdfgRegularize_he50b618e_0_997[3U]) 
           | (3U & (0x0000ffffU == (0x0000ffffU & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_err_bits_bad_data_addr__DOT__we)))))));
    vlSelfRef.__VdfgRegularize_he50b618e_0_997[3U] 
        = ((1U & vlSelfRef.__VdfgRegularize_he50b618e_0_997[3U]) 
           | (2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                    [2U][1U] >> 0x0000000eU)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__reg2hw[0U] 
        = vlSelfRef.__VdfgRegularize_he50b618e_0_997[0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__reg2hw[1U] 
        = vlSelfRef.__VdfgRegularize_he50b618e_0_997[1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__reg2hw[2U] 
        = vlSelfRef.__VdfgRegularize_he50b618e_0_997[2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__reg2hw[3U] 
        = ((0x001ffffcU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__reg2hw[3U]) 
           | (0x001fffffU & vlSelfRef.__VdfgRegularize_he50b618e_0_997[3U]));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__reg2hw[3U] 
        = ((3U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__reg2hw[3U]) 
           | (0x001fffffU & ((((((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_intr_state__q) 
                                   << 3U) | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_intr_enable__q) 
                                             << 2U)) 
                                 | ((2U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                           [2U][0U] 
                                           >> 0x00000017U)) 
                                    | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_intr_test__DOT__we))) 
                                << 0x0000000fU) | (
                                                   (((2U 
                                                      & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                         [2U][0U] 
                                                         >> 0x00000018U)) 
                                                     | (3U 
                                                        == 
                                                        (3U 
                                                         & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_alert_test_fatal__DOT__we)))))) 
                                                    << 0x0000000dU) 
                                                   | (((2U 
                                                        & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                           [2U][0U] 
                                                           >> 0x00000017U)) 
                                                       | (3U 
                                                          == 
                                                          (3U 
                                                           & (- (IData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_alert_test_fatal__DOT__we)))))) 
                                                      << 0x0000000bU))) 
                              | ((0x000007f8U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                 [2U][0U] 
                                                 >> 0x00000015U)) 
                                 | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_cmd__DOT__we) 
                                     << 2U) | ((2U 
                                                & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT____Vcellout__u_socket__tl_d_o
                                                   [2U][0U] 
                                                   >> 0x00000017U)) 
                                               | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otbn__DOT__u_reg__DOT__u_ctrl__DOT__we))))) 
                             << 2U)));
}
