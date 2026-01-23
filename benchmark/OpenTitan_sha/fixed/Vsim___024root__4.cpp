// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

extern const VlUnpacked<SData/*8:0*/, 512> Vsim__ConstPool__TABLE_h9c001f2d_0;

void Vsim___024root___act_comb__TOP__5(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___act_comb__TOP__5\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*9:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_region_sel__DOT____Vlvbound_ha3f3b6dc__0;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_region_sel__DOT____Vlvbound_ha3f3b6dc__0 = 0;
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_region_sel__DOT____Vlvbound_h63a115ac__0;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_region_sel__DOT____Vlvbound_h63a115ac__0 = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_true_strict__848__Vfuncout;
    __Vfunc_mubi4_test_true_strict__848__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_strict__848__val;
    __Vfunc_mubi4_test_true_strict__848__val = 0;
    CData/*3:0*/ __Vfunc_mubi4_and_hi__849__Vfuncout;
    __Vfunc_mubi4_and_hi__849__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_and_hi__849__a;
    __Vfunc_mubi4_and_hi__849__a = 0;
    CData/*3:0*/ __Vfunc_mubi4_and_hi__849__b;
    __Vfunc_mubi4_and_hi__849__b = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__850__Vfuncout;
    __Vfunc_mubi4_and__850__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__850__a;
    __Vfunc_mubi4_and__850__a = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__850__b;
    __Vfunc_mubi4_and__850__b = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__850__a_in;
    __Vfunc_mubi4_and__850__a_in = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__850__b_in;
    __Vfunc_mubi4_and__850__b_in = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_true_strict__851__Vfuncout;
    __Vfunc_mubi4_test_true_strict__851__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_strict__851__val;
    __Vfunc_mubi4_test_true_strict__851__val = 0;
    CData/*3:0*/ __Vfunc_mubi4_and_hi__852__Vfuncout;
    __Vfunc_mubi4_and_hi__852__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_and_hi__852__a;
    __Vfunc_mubi4_and_hi__852__a = 0;
    CData/*3:0*/ __Vfunc_mubi4_and_hi__852__b;
    __Vfunc_mubi4_and_hi__852__b = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__853__Vfuncout;
    __Vfunc_mubi4_and__853__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__853__a;
    __Vfunc_mubi4_and__853__a = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__853__b;
    __Vfunc_mubi4_and__853__b = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__853__a_in;
    __Vfunc_mubi4_and__853__a_in = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__853__b_in;
    __Vfunc_mubi4_and__853__b_in = 0;
    SData/*8:0*/ __Vtableidx119;
    __Vtableidx119 = 0;
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_adapter_eflash__DOT__instr_error 
        = (([&]() {
                vlSelfRef.__Vfunc_mubi4_test_invalid__843__val 
                    = (0x0000000fU & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[0U] 
                                      >> 0x0000000fU));
                vlSelfRef.__Vfunc_mubi4_test_invalid__843__Vfuncout 
                    = (1U & (~ ((6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_invalid__843__val)) 
                                | (9U == (IData)(vlSelfRef.__Vfunc_mubi4_test_invalid__843__val)))));
            }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_invalid__843__Vfuncout)) 
           | (([&]() {
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__844__val 
                        = (0x0000000fU & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[0U] 
                                          >> 0x0000000fU));
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__844__Vfuncout 
                        = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__844__val));
                }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__844__Vfuncout)) 
              & ([&]() {
                    vlSelfRef.__Vfunc_mubi4_test_false_loose__845__val 
                        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__flash_exec_en;
                    vlSelfRef.__Vfunc_mubi4_test_false_loose__845__Vfuncout 
                        = (6U != (IData)(vlSelfRef.__Vfunc_mubi4_test_false_loose__845__val));
                }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_false_loose__845__Vfuncout))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_adapter_eflash__DOT__u_sram_byte__DOT__error_i 
        = (1U & ((((((0x0800U != (0x0e00U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[3U])) 
                     | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_adapter_eflash__DOT__instr_error)) 
                    | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_adapter_eflash__DOT__gen_cmd_intg_check__DOT__u_cmd_intg_chk.err_o)) 
                   | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_adapter_eflash__DOT__u_err.__PVT__instr_type_err)) 
                  | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_adapter_eflash__DOT__u_err.__PVT__instr_wr_err)) 
                 | (((IData)(vlSelfRef.__VdfgRegularize_he50b618e_0_101) 
                     & (IData)(((0x0f000000U != (0x0f000000U 
                                                 & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[1U])) 
                                | (0x0020U != (0x0030U 
                                               & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[3U]))))) 
                    | (~ (((0U == (7U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[3U] 
                                         >> 9U))) | 
                           ((1U == (7U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[3U] 
                                          >> 9U))) 
                            | (4U == (7U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[3U] 
                                            >> 9U))))) 
                          & ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_adapter_eflash__DOT__u_err.__PVT__addr_sz_chk) 
                             & ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_adapter_eflash__DOT__u_err.__PVT__mask_chk) 
                                & ((4U == (7U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[3U] 
                                                 >> 9U))) 
                                   | ((1U == (7U & 
                                              (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[3U] 
                                               >> 9U))) 
                                      | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_adapter_eflash__DOT__u_err.__PVT__fulldata_chk))))))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_adapter_eflash__DOT__req_o 
        = ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[3U] 
            >> 0x0000000cU) & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_adapter_eflash__DOT__u_sram_byte__DOT__error_i)) 
                               & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_adapter_eflash__DOT__u_reqfifo__DOT__wready_o)));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_region_sel__DOT____Vlvbound_ha3f3b6dc__0 
        = (0x000003ffU & ((0x000001ffU & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__region_attrs
                                                  [0U] 
                                                  >> 0x0000000aU))) 
                          + (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__region_attrs
                                    [0U])));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_region_sel__DOT__region_end[0U] 
        = chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_region_sel__DOT____Vlvbound_ha3f3b6dc__0;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_region_sel__DOT____Vlvbound_h63a115ac__0 
        = ((((((0x000001ffU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_adapter_eflash__DOT__addr_o 
                               >> 9U)) >= (0x000001ffU 
                                           & (IData)(
                                                     (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__region_attrs
                                                      [0U] 
                                                      >> 0x0000000aU)))) 
              & ((0x000001ffU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_adapter_eflash__DOT__addr_o 
                                 >> 9U)) < vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_region_sel__DOT__region_end
                 [0U])) & (3U == (3U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__region_attrs
                                                [0U] 
                                                >> 0x0000002fU))))) 
            & ([&]() {
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__860__val 
                        = (0x0000000fU & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__region_attrs
                                                  [0U] 
                                                  >> 0x0000002bU)));
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__860__Vfuncout 
                        = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__860__val));
                }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__860__Vfuncout))) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_adapter_eflash__DOT__req_o));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_region_sel__DOT__region_match 
        = ((0x01feU & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_region_sel__DOT__region_match)) 
           | (IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_region_sel__DOT____Vlvbound_h63a115ac__0));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_region_sel__DOT____Vlvbound_ha3f3b6dc__0 
        = (0x000003ffU & ((0x000001ffU & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__region_attrs
                                                  [1U] 
                                                  >> 0x0000000aU))) 
                          + (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__region_attrs
                                    [1U])));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_region_sel__DOT__region_end[1U] 
        = chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_region_sel__DOT____Vlvbound_ha3f3b6dc__0;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_region_sel__DOT____Vlvbound_h63a115ac__0 
        = ((((((0x000001ffU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_adapter_eflash__DOT__addr_o 
                               >> 9U)) >= (0x000001ffU 
                                           & (IData)(
                                                     (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__region_attrs
                                                      [1U] 
                                                      >> 0x0000000aU)))) 
              & ((0x000001ffU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_adapter_eflash__DOT__addr_o 
                                 >> 9U)) < vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_region_sel__DOT__region_end
                 [1U])) & (3U == (3U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__region_attrs
                                                [1U] 
                                                >> 0x0000002fU))))) 
            & ([&]() {
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__860__val 
                        = (0x0000000fU & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__region_attrs
                                                  [1U] 
                                                  >> 0x0000002bU)));
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__860__Vfuncout 
                        = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__860__val));
                }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__860__Vfuncout))) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_adapter_eflash__DOT__req_o));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_region_sel__DOT__region_match 
        = ((0x01fdU & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_region_sel__DOT__region_match)) 
           | ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_region_sel__DOT____Vlvbound_h63a115ac__0) 
              << 1U));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_region_sel__DOT____Vlvbound_ha3f3b6dc__0 
        = (0x000003ffU & ((0x000001ffU & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__region_attrs
                                                  [2U] 
                                                  >> 0x0000000aU))) 
                          + (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__region_attrs
                                    [2U])));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_region_sel__DOT__region_end[2U] 
        = chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_region_sel__DOT____Vlvbound_ha3f3b6dc__0;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_region_sel__DOT____Vlvbound_h63a115ac__0 
        = ((((((0x000001ffU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_adapter_eflash__DOT__addr_o 
                               >> 9U)) >= (0x000001ffU 
                                           & (IData)(
                                                     (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__region_attrs
                                                      [2U] 
                                                      >> 0x0000000aU)))) 
              & ((0x000001ffU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_adapter_eflash__DOT__addr_o 
                                 >> 9U)) < vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_region_sel__DOT__region_end
                 [2U])) & (3U == (3U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__region_attrs
                                                [2U] 
                                                >> 0x0000002fU))))) 
            & ([&]() {
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__860__val 
                        = (0x0000000fU & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__region_attrs
                                                  [2U] 
                                                  >> 0x0000002bU)));
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__860__Vfuncout 
                        = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__860__val));
                }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__860__Vfuncout))) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_adapter_eflash__DOT__req_o));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_region_sel__DOT__region_match 
        = ((0x01fbU & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_region_sel__DOT__region_match)) 
           | ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_region_sel__DOT____Vlvbound_h63a115ac__0) 
              << 2U));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_region_sel__DOT____Vlvbound_ha3f3b6dc__0 
        = (0x000003ffU & ((0x000001ffU & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__region_attrs
                                                  [3U] 
                                                  >> 0x0000000aU))) 
                          + (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__region_attrs
                                    [3U])));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_region_sel__DOT__region_end[3U] 
        = chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_region_sel__DOT____Vlvbound_ha3f3b6dc__0;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_region_sel__DOT____Vlvbound_h63a115ac__0 
        = ((((((0x000001ffU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_adapter_eflash__DOT__addr_o 
                               >> 9U)) >= (0x000001ffU 
                                           & (IData)(
                                                     (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__region_attrs
                                                      [3U] 
                                                      >> 0x0000000aU)))) 
              & ((0x000001ffU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_adapter_eflash__DOT__addr_o 
                                 >> 9U)) < vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_region_sel__DOT__region_end
                 [3U])) & (3U == (3U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__region_attrs
                                                [3U] 
                                                >> 0x0000002fU))))) 
            & ([&]() {
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__860__val 
                        = (0x0000000fU & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__region_attrs
                                                  [3U] 
                                                  >> 0x0000002bU)));
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__860__Vfuncout 
                        = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__860__val));
                }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__860__Vfuncout))) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_adapter_eflash__DOT__req_o));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_region_sel__DOT__region_match 
        = ((0x01f7U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_region_sel__DOT__region_match)) 
           | ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_region_sel__DOT____Vlvbound_h63a115ac__0) 
              << 3U));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_region_sel__DOT____Vlvbound_ha3f3b6dc__0 
        = (0x000003ffU & ((0x000001ffU & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__region_attrs
                                                  [4U] 
                                                  >> 0x0000000aU))) 
                          + (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__region_attrs
                                    [4U])));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_region_sel__DOT__region_end[4U] 
        = chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_region_sel__DOT____Vlvbound_ha3f3b6dc__0;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_region_sel__DOT____Vlvbound_h63a115ac__0 
        = ((((((0x000001ffU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_adapter_eflash__DOT__addr_o 
                               >> 9U)) >= (0x000001ffU 
                                           & (IData)(
                                                     (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__region_attrs
                                                      [4U] 
                                                      >> 0x0000000aU)))) 
              & ((0x000001ffU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_adapter_eflash__DOT__addr_o 
                                 >> 9U)) < vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_region_sel__DOT__region_end
                 [4U])) & (3U == (3U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__region_attrs
                                                [4U] 
                                                >> 0x0000002fU))))) 
            & ([&]() {
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__860__val 
                        = (0x0000000fU & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__region_attrs
                                                  [4U] 
                                                  >> 0x0000002bU)));
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__860__Vfuncout 
                        = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__860__val));
                }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__860__Vfuncout))) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_adapter_eflash__DOT__req_o));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_region_sel__DOT__region_match 
        = ((0x01efU & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_region_sel__DOT__region_match)) 
           | ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_region_sel__DOT____Vlvbound_h63a115ac__0) 
              << 4U));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_region_sel__DOT____Vlvbound_ha3f3b6dc__0 
        = (0x000003ffU & ((0x000001ffU & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__region_attrs
                                                  [5U] 
                                                  >> 0x0000000aU))) 
                          + (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__region_attrs
                                    [5U])));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_region_sel__DOT__region_end[5U] 
        = chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_region_sel__DOT____Vlvbound_ha3f3b6dc__0;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_region_sel__DOT____Vlvbound_h63a115ac__0 
        = ((((((0x000001ffU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_adapter_eflash__DOT__addr_o 
                               >> 9U)) >= (0x000001ffU 
                                           & (IData)(
                                                     (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__region_attrs
                                                      [5U] 
                                                      >> 0x0000000aU)))) 
              & ((0x000001ffU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_adapter_eflash__DOT__addr_o 
                                 >> 9U)) < vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_region_sel__DOT__region_end
                 [5U])) & (3U == (3U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__region_attrs
                                                [5U] 
                                                >> 0x0000002fU))))) 
            & ([&]() {
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__860__val 
                        = (0x0000000fU & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__region_attrs
                                                  [5U] 
                                                  >> 0x0000002bU)));
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__860__Vfuncout 
                        = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__860__val));
                }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__860__Vfuncout))) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_adapter_eflash__DOT__req_o));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_region_sel__DOT__region_match 
        = ((0x01dfU & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_region_sel__DOT__region_match)) 
           | ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_region_sel__DOT____Vlvbound_h63a115ac__0) 
              << 5U));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_region_sel__DOT____Vlvbound_ha3f3b6dc__0 
        = (0x000003ffU & ((0x000001ffU & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__region_attrs
                                                  [6U] 
                                                  >> 0x0000000aU))) 
                          + (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__region_attrs
                                    [6U])));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_region_sel__DOT__region_end[6U] 
        = chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_region_sel__DOT____Vlvbound_ha3f3b6dc__0;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_region_sel__DOT____Vlvbound_h63a115ac__0 
        = ((((((0x000001ffU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_adapter_eflash__DOT__addr_o 
                               >> 9U)) >= (0x000001ffU 
                                           & (IData)(
                                                     (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__region_attrs
                                                      [6U] 
                                                      >> 0x0000000aU)))) 
              & ((0x000001ffU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_adapter_eflash__DOT__addr_o 
                                 >> 9U)) < vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_region_sel__DOT__region_end
                 [6U])) & (3U == (3U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__region_attrs
                                                [6U] 
                                                >> 0x0000002fU))))) 
            & ([&]() {
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__860__val 
                        = (0x0000000fU & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__region_attrs
                                                  [6U] 
                                                  >> 0x0000002bU)));
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__860__Vfuncout 
                        = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__860__val));
                }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__860__Vfuncout))) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_adapter_eflash__DOT__req_o));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_region_sel__DOT__region_match 
        = ((0x01bfU & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_region_sel__DOT__region_match)) 
           | ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_region_sel__DOT____Vlvbound_h63a115ac__0) 
              << 6U));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_region_sel__DOT____Vlvbound_ha3f3b6dc__0 
        = (0x000003ffU & ((0x000001ffU & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__region_attrs
                                                  [7U] 
                                                  >> 0x0000000aU))) 
                          + (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__region_attrs
                                    [7U])));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_region_sel__DOT__region_end[7U] 
        = chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_region_sel__DOT____Vlvbound_ha3f3b6dc__0;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_region_sel__DOT____Vlvbound_h63a115ac__0 
        = ((((((0x000001ffU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_adapter_eflash__DOT__addr_o 
                               >> 9U)) >= (0x000001ffU 
                                           & (IData)(
                                                     (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__region_attrs
                                                      [7U] 
                                                      >> 0x0000000aU)))) 
              & ((0x000001ffU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_adapter_eflash__DOT__addr_o 
                                 >> 9U)) < vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_region_sel__DOT__region_end
                 [7U])) & (3U == (3U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__region_attrs
                                                [7U] 
                                                >> 0x0000002fU))))) 
            & ([&]() {
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__860__val 
                        = (0x0000000fU & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__region_attrs
                                                  [7U] 
                                                  >> 0x0000002bU)));
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__860__Vfuncout 
                        = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__860__val));
                }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__860__Vfuncout))) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_adapter_eflash__DOT__req_o));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_region_sel__DOT__region_match 
        = ((0x017fU & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_region_sel__DOT__region_match)) 
           | ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_region_sel__DOT____Vlvbound_h63a115ac__0) 
              << 7U));
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_region_sel__DOT____Vlvbound_ha3f3b6dc__0 
        = (0x000003ffU & ((0x000001ffU & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__region_attrs
                                                  [8U] 
                                                  >> 0x0000000aU))) 
                          + (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__region_attrs
                                    [8U])));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_region_sel__DOT__region_end[8U] 
        = chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_region_sel__DOT____Vlvbound_ha3f3b6dc__0;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_region_sel__DOT____Vlvbound_h63a115ac__0 
        = ((((((0x000001ffU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_adapter_eflash__DOT__addr_o 
                               >> 9U)) >= (0x000001ffU 
                                           & (IData)(
                                                     (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__region_attrs
                                                      [8U] 
                                                      >> 0x0000000aU)))) 
              & ((0x000001ffU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_adapter_eflash__DOT__addr_o 
                                 >> 9U)) < vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_region_sel__DOT__region_end
                 [8U])) & (3U == (3U & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__region_attrs
                                                [8U] 
                                                >> 0x0000002fU))))) 
            & ([&]() {
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__860__val 
                        = (0x0000000fU & (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__region_attrs
                                                  [8U] 
                                                  >> 0x0000002bU)));
                    vlSelfRef.__Vfunc_mubi4_test_true_strict__860__Vfuncout 
                        = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__860__val));
                }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__860__Vfuncout))) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_adapter_eflash__DOT__req_o));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_region_sel__DOT__region_match 
        = ((0x00ffU & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_region_sel__DOT__region_match)) 
           | ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_region_sel__DOT____Vlvbound_h63a115ac__0) 
              << 8U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_bank_sequence_fifo__DOT__wdata_i 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_adapter_eflash__DOT__req_o) 
           & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_adapter_eflash__DOT__addr_o 
              >> 0x00000011U));
    __Vtableidx119 = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_region_sel__DOT__region_match;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_region_sel__DOT__region_sel 
        = Vsim__ConstPool__TABLE_h9c001f2d_0[__Vtableidx119];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__region_cfg = 0ULL;
    if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_region_sel__DOT__region_sel))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__region_cfg 
            = (0x00007fffffffffffULL & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__region_attrs
               [0U]);
    }
    if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_region_sel__DOT__region_sel))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__region_cfg 
            = (0x00007fffffffffffULL & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__region_attrs
               [1U]);
    }
    if ((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_region_sel__DOT__region_sel))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__region_cfg 
            = (0x00007fffffffffffULL & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__region_attrs
               [2U]);
    }
    if ((8U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_region_sel__DOT__region_sel))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__region_cfg 
            = (0x00007fffffffffffULL & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__region_attrs
               [3U]);
    }
    if ((0x00000010U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_region_sel__DOT__region_sel))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__region_cfg 
            = (0x00007fffffffffffULL & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__region_attrs
               [4U]);
    }
    if ((0x00000020U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_region_sel__DOT__region_sel))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__region_cfg 
            = (0x00007fffffffffffULL & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__region_attrs
               [5U]);
    }
    if ((0x00000040U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_region_sel__DOT__region_sel))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__region_cfg 
            = (0x00007fffffffffffULL & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__region_attrs
               [6U]);
    }
    if ((0x00000080U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_region_sel__DOT__region_sel))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__region_cfg 
            = (0x00007fffffffffffULL & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__region_attrs
               [7U]);
    }
    if ((0x00000100U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_region_sel__DOT__region_sel))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__region_cfg 
            = (0x00007fffffffffffULL & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__region_attrs
               [8U]);
    }
    __Vfunc_mubi4_and_hi__852__b = (0x0000000fU & (IData)(
                                                          (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__region_cfg 
                                                           >> 0x0000002bU)));
    __Vfunc_mubi4_and_hi__852__a = (0x0000000fU & (IData)(
                                                          (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__region_cfg 
                                                           >> 0x00000017U)));
    __Vfunc_mubi4_and__853__b = __Vfunc_mubi4_and_hi__852__b;
    __Vfunc_mubi4_and__853__a = __Vfunc_mubi4_and_hi__852__a;
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__Vfunc_mubi4_and__853__out = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17841213541560763884ull);
    __Vfunc_mubi4_and__853__a_in = __Vfunc_mubi4_and__853__a;
    __Vfunc_mubi4_and__853__b_in = __Vfunc_mubi4_and__853__b;
    vlSelfRef.__Vfunc_mubi4_and__853__out = ((0x0cU 
                                              & (IData)(vlSelfRef.__Vfunc_mubi4_and__853__out)) 
                                             | ((2U 
                                                 & ((IData)(__Vfunc_mubi4_and__853__a_in) 
                                                    & (IData)(__Vfunc_mubi4_and__853__b_in))) 
                                                | (1U 
                                                   & ((IData)(__Vfunc_mubi4_and__853__a_in) 
                                                      | (IData)(__Vfunc_mubi4_and__853__b_in)))));
    vlSelfRef.__Vfunc_mubi4_and__853__out = ((3U & (IData)(vlSelfRef.__Vfunc_mubi4_and__853__out)) 
                                             | (((2U 
                                                  & (((IData)(__Vfunc_mubi4_and__853__a_in) 
                                                      | (IData)(__Vfunc_mubi4_and__853__b_in)) 
                                                     >> 2U)) 
                                                 | (1U 
                                                    & (((IData)(__Vfunc_mubi4_and__853__a_in) 
                                                        & (IData)(__Vfunc_mubi4_and__853__b_in)) 
                                                       >> 2U))) 
                                                << 2U));
    __Vfunc_mubi4_and__853__Vfuncout = vlSelfRef.__Vfunc_mubi4_and__853__out;
    __Vfunc_mubi4_and_hi__852__Vfuncout = __Vfunc_mubi4_and__853__Vfuncout;
    __Vfunc_mubi4_test_true_strict__851__val = __Vfunc_mubi4_and_hi__852__Vfuncout;
    __Vfunc_mubi4_test_true_strict__851__Vfuncout = 
        (6U == (IData)(__Vfunc_mubi4_test_true_strict__851__val));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__host_ecc_en 
        = __Vfunc_mubi4_test_true_strict__851__Vfuncout;
    __Vfunc_mubi4_and_hi__849__b = (0x0000000fU & (IData)(
                                                          (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__region_cfg 
                                                           >> 0x0000002bU)));
    __Vfunc_mubi4_and_hi__849__a = (0x0000000fU & (IData)(
                                                          (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__region_cfg 
                                                           >> 0x0000001bU)));
    __Vfunc_mubi4_and__850__b = __Vfunc_mubi4_and_hi__849__b;
    __Vfunc_mubi4_and__850__a = __Vfunc_mubi4_and_hi__849__a;
    vlSelf->__Vfunc_mubi4_and__850__out = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1626646013880664732ull);
    __Vfunc_mubi4_and__850__a_in = __Vfunc_mubi4_and__850__a;
    __Vfunc_mubi4_and__850__b_in = __Vfunc_mubi4_and__850__b;
    vlSelfRef.__Vfunc_mubi4_and__850__out = ((0x0cU 
                                              & (IData)(vlSelfRef.__Vfunc_mubi4_and__850__out)) 
                                             | ((2U 
                                                 & ((IData)(__Vfunc_mubi4_and__850__a_in) 
                                                    & (IData)(__Vfunc_mubi4_and__850__b_in))) 
                                                | (1U 
                                                   & ((IData)(__Vfunc_mubi4_and__850__a_in) 
                                                      | (IData)(__Vfunc_mubi4_and__850__b_in)))));
    vlSelfRef.__Vfunc_mubi4_and__850__out = ((3U & (IData)(vlSelfRef.__Vfunc_mubi4_and__850__out)) 
                                             | (((2U 
                                                  & (((IData)(__Vfunc_mubi4_and__850__a_in) 
                                                      | (IData)(__Vfunc_mubi4_and__850__b_in)) 
                                                     >> 2U)) 
                                                 | (1U 
                                                    & (((IData)(__Vfunc_mubi4_and__850__a_in) 
                                                        & (IData)(__Vfunc_mubi4_and__850__b_in)) 
                                                       >> 2U))) 
                                                << 2U));
    __Vfunc_mubi4_and__850__Vfuncout = vlSelfRef.__Vfunc_mubi4_and__850__out;
    __Vfunc_mubi4_and_hi__849__Vfuncout = __Vfunc_mubi4_and__850__Vfuncout;
    __Vfunc_mubi4_test_true_strict__848__val = __Vfunc_mubi4_and_hi__849__Vfuncout;
    __Vfunc_mubi4_test_true_strict__848__Vfuncout = 
        (6U == (IData)(__Vfunc_mubi4_test_true_strict__848__val));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__host_scramble_en 
        = __Vfunc_mubi4_test_true_strict__848__Vfuncout;
}

void Vsim___024root___act_comb__TOP__6(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___act_comb__TOP__6\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x00001000U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[3U])) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_tl_adapter_eflash__DOT__unnamedblk1__DOT__i = 4U;
    }
}

void Vsim___024root___act_comb__TOP__7(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___act_comb__TOP__7\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x00001000U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_prog_tl_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[3U])) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_to_prog_fifo__DOT__unnamedblk1__DOT__i = 4U;
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_to_prog_fifo__DOT__u_reqfifo__DOT__rready_i 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_to_prog_fifo__DOT__d_valid) 
           & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_prog_tl_gate.__Vcellout__gen_lc_gating_muxes__BRA__1__KET____DOT__u_prim_blanker_h2d__out_o[0U]);
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_to_prog_fifo__DOT__u_rspfifo__DOT__gen_singleton_fifo__DOT__full_d 
        = ((~ (IData)(((0x00008000U == (0x0001c000U 
                                        & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_to_prog_fifo__DOT__u_reqfifo__DOT__rdata_o)) 
                       & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_to_prog_fifo__DOT__u_reqfifo__DOT__rready_i)))) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_to_prog_fifo__DOT__u_rspfifo__DOT__gen_singleton_fifo__DOT__full_q));
}

void Vsim___024root___act_comb__TOP__8(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___act_comb__TOP__8\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__byte_req_ack 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__byte_wr_txn) 
           & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__error_i)) 
              & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_ret_aon__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo_a_size__DOT__wvalid_i)));
}

void Vsim___024root___act_comb__TOP__9(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___act_comb__TOP__9\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__byte_req_ack 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__byte_wr_txn) 
           & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__error_i)) 
              & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sram_ctrl_main__DOT__u_tlul_adapter_sram__DOT__u_sram_byte__DOT__gen_integ_handling__DOT__u_sync_fifo_a_size__DOT__wvalid_i)));
}

void Vsim___024root___act_comb__TOP__10(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___act_comb__TOP__10\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_pin__DOT__aon_z3_wakeup_hw_i 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_ulp__DOT__pwrb_det) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_ulp__DOT__ac_present_det) 
              | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_ulp__DOT__lid_open_det)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_pin__DOT__aon_z3_wakeup_out_int_o 
        = ((~ ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_pin_out_ctl_z3_wakeup__q) 
               & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_pin_out_value_z3_wakeup__q)) 
                  & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_pin_allowed_ctl_z3_wakeup_0__q)))) 
           & (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_pin_out_ctl_z3_wakeup__q) 
               & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_pin_allowed_ctl_z3_wakeup_1__q) 
                  & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_reg__DOT____Vcellout__u_pin_out_value_z3_wakeup__q))) 
              | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_sysrst_ctrl_aon__DOT__u_sysrst_ctrl_pin__DOT__aon_z3_wakeup_hw_i)));
}

void Vsim___024root___act_comb__TOP__11(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___act_comb__TOP__11\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_o 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__oh0_err) 
           | ((~ ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__addrmiss)) 
                  & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_reg_if__DOT__we_o))) 
              & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_reg_core__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__0__KET__)));
}

void Vsim___024root___act_comb__TOP__12(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___act_comb__TOP__12\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vlvbound_hbaad2483__0;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vlvbound_hbaad2483__0 = 0;
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_scrmbl_mtx__DOT__idx_o 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_scrmbl_mtx__DOT__gen_normal_case__DOT__gen_tree__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel)
            ? (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_scrmbl_mtx__DOT__gen_normal_case__DOT__idx_tree__BRA__11__03a8__KET__)
            : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_scrmbl_mtx__DOT__gen_normal_case__DOT__idx_tree__BRA__19__03a16__KET__));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_scrmbl_rsp_valid = 0U;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vlvbound_hbaad2483__0 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_ctrl_scrmbl__DOT__valid_q;
    if ((0x0dU >= (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_scrmbl_mtx__DOT__idx_o))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_scrmbl_rsp_valid 
            = (((~ ((IData)(1U) << (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_scrmbl_mtx__DOT__idx_o))) 
                & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__part_scrmbl_rsp_valid)) 
               | (0x3fffU & ((IData)(chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT____Vlvbound_hbaad2483__0) 
                             << (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_scrmbl_mtx__DOT__idx_o))));
    }
}

void Vsim___024root___act_comb__TOP__13(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___act_comb__TOP__13\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT____VdfgExtracted_h8ba8d610__0 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_cfb_enc)
            ? 3U : ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_cfb_dec)
                     ? 3U : ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_ofb)
                              ? 3U : ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_ctr)
                                       ? 3U : 4U))));
}

void Vsim___024root___act_comb__TOP__14(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___act_comb__TOP__14\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT____VdfgExtracted_h8ba8d610__0 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_cfb_enc)
            ? 3U : ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_cfb_dec)
                     ? 3U : ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_ofb)
                              ? 3U : ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_ctr)
                                       ? 3U : 4U))));
}

void Vsim___024root___act_comb__TOP__15(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___act_comb__TOP__15\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT____VdfgExtracted_h8ba8d610__0 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_cfb_enc)
            ? 3U : ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_cfb_dec)
                     ? 3U : ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_ofb)
                              ? 3U : ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__doing_ctr)
                                       ? 3U : 4U))));
}

void Vsim___024root___act_comb__TOP__16(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___act_comb__TOP__16\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__hw2reg[0U] 
        = ((0xffff7fffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__hw2reg[0U]) 
           | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__2__KET____DOT__gen_fsm_n__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__prng_reseed_o) 
               | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__1__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__prng_reseed_o) 
                  | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__gen_fsm__BRA__0__KET____DOT__gen_fsm_p__DOT__u_aes_control_fsm_i__DOT__u_aes_control_fsm__DOT__prng_reseed_o))) 
              << 0x0000000fU));
}

void Vsim___024root___act_comb__TOP__17(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___act_comb__TOP__17\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_arb__DOT__gen_normal_case__DOT__gen_tree__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel 
        = (1U & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_arb__DOT__gen_normal_case__DOT__req_tree__BRA__1__KET__)) 
                 | ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_arb__DOT__gen_normal_case__DOT__prio_tree__BRA__1__KET__)) 
                    & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_arb__DOT__gen_normal_case__DOT__prio_tree__BRA__2__KET__))));
}

void Vsim___024root___act_comb__TOP__18(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___act_comb__TOP__18\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_arb__DOT__valid_o 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_arb__DOT__gen_normal_case__DOT__req_tree__BRA__1__KET__) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_arb__DOT__gen_normal_case__DOT__req_tree__BRA__2__KET__));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__valid_i 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_arb__DOT__valid_o) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_rsp_fifo__DOT__wready_o));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__err_d 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__err_q;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__cnt_clr = 0U;
    if (((((((((0x0306U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_state_regs__DOT__state_raw)) 
               | (0x0233U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_state_regs__DOT__state_raw))) 
              | (0x0170U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_state_regs__DOT__state_raw))) 
             | (0x009fU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_state_regs__DOT__state_raw))) 
            | (0x024dU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_state_regs__DOT__state_raw))) 
           | (0x03ebU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_state_regs__DOT__state_raw))) 
          | (0x00c2U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_state_regs__DOT__state_raw))) 
         | (0x01a5U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_state_regs__DOT__state_raw)))) {
        if ((0x0306U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_state_regs__DOT__state_raw))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__err_d = 0U;
        } else if ((0x0233U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_state_regs__DOT__state_raw))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__err_d = 0U;
        } else if ((0x0170U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_state_regs__DOT__state_raw))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__err_d = 0U;
            if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__valid_i) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__err_d = 0U;
            }
        } else if ((0x009fU != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_state_regs__DOT__state_raw))) {
            if ((0x024dU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_state_regs__DOT__state_raw))) {
                if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__rvalid) {
                    if ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_dec__DOT__err_o) 
                          >> 1U) & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__integrity_en_q))) {
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__err_d = 3U;
                    } else if (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_dec__DOT__err_o) 
                                & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__integrity_en_q))) {
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__err_d = 2U;
                    }
                }
            } else if ((0x03ebU != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_state_regs__DOT__state_raw))) {
                if ((0x00c2U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_state_regs__DOT__state_raw))) {
                    if (((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT____VdfgRegularize_he90e51ca_0_1 
                          & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_enc__DOT__data_o) 
                         != vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT____VdfgRegularize_he90e51ca_0_1)) {
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__err_d = 4U;
                    }
                }
            }
        }
        if ((0x0306U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_state_regs__DOT__state_raw))) {
            if ((0x0233U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_state_regs__DOT__state_raw))) {
                if ((0x0170U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_state_regs__DOT__state_raw))) {
                    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__valid_i) {
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__cnt_clr = 1U;
                    }
                } else if ((0x009fU != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_state_regs__DOT__state_raw))) {
                    if ((0x024dU != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_state_regs__DOT__state_raw))) {
                        if ((0x03ebU != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_state_regs__DOT__state_raw))) {
                            if ((0x00c2U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__u_state_regs__DOT__state_raw))) {
                                if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__rvalid) {
                                    if (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__cnt_q) 
                                         == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__size_q))) {
                                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__cnt_clr = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_rsp_fifo__DOT__wvalid_i 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__otp_prim_ready) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__valid_i));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__cnt_d 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__cnt_clr)
            ? 0U : (3U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__cnt_q) 
                          + (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__cnt_en))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_rsp_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_rsp_fifo__DOT__wvalid_i) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_rsp_fifo__DOT__wready_o));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_rsp_fifo__DOT__gen_normal_fifo__DOT__empty 
        = ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_rsp_fifo__DOT__wvalid_i)) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_rsp_fifo__DOT__gen_normal_fifo__DOT__fifo_empty));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_rsp_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_rsp_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_rsp_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_rsp_fifo__DOT__rvalid_o 
        = (1U & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_rsp_fifo__DOT__gen_normal_fifo__DOT__empty)) 
                 & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_rsp_fifo__DOT__gen_normal_fifo__DOT__under_rst))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_rsp_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_rsp_fifo__DOT__rvalid_o) 
           & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_rsp_fifo__DOT__gen_normal_fifo__DOT__under_rst)) 
              & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp__DOT__gen_generic__DOT__u_impl_generic__DOT__valid_q)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_rsp_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_rsp_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_rptr) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__u_otp_rsp_fifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q));
}

extern const VlUnpacked<CData/*0:0*/, 128> Vsim__ConstPool__TABLE_hda42d83f_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vsim__ConstPool__TABLE_h534bae5f_0;

void Vsim___024root___act_comb__TOP__19(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___act_comb__TOP__19\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*6:0*/ __Vtableidx82;
    __Vtableidx82 = 0;
    CData/*5:0*/ __Vtableidx83;
    __Vtableidx83 = 0;
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__st_d 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__sha3pad_keccak_run = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__sel_mux = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__fsm_keccak_valid = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__hold_msg = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__clr_sentmsg = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__en_msgbuf = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__clr_msgbuf = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__absorbed_d = 9U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__sha3pad_state_error = 0U;
    if ((0x00000040U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))) {
        if ((0x00000020U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))) {
            if ((0x00000010U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))) {
                if ((8U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))) {
                    if ((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__st_d = 0x33U;
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__sha3pad_state_error = 1U;
                    } else if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))) {
                        if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))) {
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__st_d = 0x33U;
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__sha3pad_state_error = 1U;
                        } else {
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__sel_mux = 3U;
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__fsm_keccak_valid = 1U;
                            if (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__u_sentmsg_count__DOT__incr_en_i) 
                                 & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__end_of_block))) {
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__st_d = 0x19U;
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__clr_msgbuf = 1U;
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__clr_sentmsg = 1U;
                            } else if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__u_sentmsg_count__DOT__incr_en_i) {
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__st_d = 0x69U;
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__clr_msgbuf = 1U;
                            } else {
                                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__st_d = 0x7aU;
                            }
                        }
                    } else {
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__st_d = 0x33U;
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__sha3pad_state_error = 1U;
                    }
                } else {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__st_d = 0x33U;
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__sha3pad_state_error = 1U;
                }
            } else if ((8U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))) {
                if ((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__st_d = 0x33U;
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__sha3pad_state_error = 1U;
                } else if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__st_d = 0x33U;
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__sha3pad_state_error = 1U;
                } else if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__sel_mux = 4U;
                    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__sent_blocksize) {
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__st_d = 0x57U;
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__fsm_keccak_valid = 0U;
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__sha3pad_keccak_run = 1U;
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__clr_sentmsg = 1U;
                    } else {
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__st_d = 0x69U;
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__fsm_keccak_valid = 1U;
                    }
                } else {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__st_d = 0x33U;
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__sha3pad_state_error = 1U;
                }
            } else {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__st_d = 0x33U;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__sha3pad_state_error = 1U;
            }
        } else if ((0x00000010U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))) {
            if ((8U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__st_d = 0x33U;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__sha3pad_state_error = 1U;
            } else if ((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))) {
                if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))) {
                    if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__clr_sentmsg = 1U;
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__clr_msgbuf = 1U;
                        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__keccak_complete) {
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__st_d = 0x42U;
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__absorbed_d = 6U;
                        } else {
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__st_d = 0x57U;
                        }
                    } else {
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__st_d = 0x33U;
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__sha3pad_state_error = 1U;
                    }
                } else {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__st_d = 0x33U;
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__sha3pad_state_error = 1U;
                }
            } else {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__st_d = 0x33U;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__sha3pad_state_error = 1U;
            }
        } else if ((8U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))) {
            if ((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))) {
                if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__st_d = 0x33U;
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__sha3pad_state_error = 1U;
                } else if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__st_d = 0x33U;
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__sha3pad_state_error = 1U;
                } else {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__sel_mux = 2U;
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__st_d 
                        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__keccak_complete)
                            ? 0x25U : 0x4cU);
                }
            } else {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__st_d = 0x33U;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__sha3pad_state_error = 1U;
            }
        } else if ((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__st_d = 0x33U;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__sha3pad_state_error = 1U;
        } else if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))) {
            if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__st_d = 0x33U;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__sha3pad_state_error = 1U;
            } else {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__st_d 
                    = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__keccak_start)
                        ? ((3U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__app_sha3_mode))
                            ? 0x3cU : 0x25U) : 0x42U);
            }
        } else {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__st_d = 0x33U;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__sha3pad_state_error = 1U;
        }
    } else if ((0x00000020U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))) {
        if ((0x00000010U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))) {
            if ((8U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))) {
                if ((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))) {
                    if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__st_d = 0x33U;
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__sha3pad_state_error = 1U;
                    } else if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))) {
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__st_d = 0x33U;
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__sha3pad_state_error = 1U;
                    } else {
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__sel_mux = 2U;
                        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__sent_blocksize) {
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__st_d = 0x4cU;
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__sha3pad_keccak_run = 1U;
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__fsm_keccak_valid = 0U;
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__clr_sentmsg = 1U;
                        } else {
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__st_d = 0x3cU;
                            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__fsm_keccak_valid = 1U;
                        }
                    }
                } else {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__st_d = 0x33U;
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__sha3pad_state_error = 1U;
                }
            } else if ((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__st_d = 0x33U;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__sha3pad_state_error = 1U;
            } else if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))) {
                if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__st_d 
                        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw;
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__sha3pad_state_error = 1U;
                } else {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__st_d = 0x33U;
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__sha3pad_state_error = 1U;
                }
            } else {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__st_d = 0x33U;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__sha3pad_state_error = 1U;
            }
        } else if ((8U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__st_d = 0x33U;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__sha3pad_state_error = 1U;
        } else if ((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))) {
            if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__st_d = 0x33U;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__sha3pad_state_error = 1U;
            } else if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__sel_mux = 1U;
                if (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__msg_valid_i) 
                     & (~ (0x000000ffU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__msg_strb_i))))) {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__st_d = 0x25U;
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__en_msgbuf = 1U;
                } else if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__sent_blocksize) {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__st_d = 0x0fU;
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__sha3pad_keccak_run = 1U;
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__clr_sentmsg = 1U;
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__hold_msg = 1U;
                } else if (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__process_latched) 
                            | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__keccak_process))) {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__st_d = 0x7aU;
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__hold_msg = 1U;
                } else {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__st_d = 0x25U;
                }
            } else {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__st_d = 0x33U;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__sha3pad_state_error = 1U;
            }
        } else {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__st_d = 0x33U;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__sha3pad_state_error = 1U;
        }
    } else if ((0x00000010U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))) {
        if ((8U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))) {
            if ((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__st_d = 0x33U;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__sha3pad_state_error = 1U;
            } else if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__st_d = 0x33U;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__sha3pad_state_error = 1U;
            } else if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__st_d = 0x57U;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__sha3pad_keccak_run = 1U;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__clr_sentmsg = 1U;
            } else {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__st_d = 0x33U;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__sha3pad_state_error = 1U;
            }
        } else {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__st_d = 0x33U;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__sha3pad_state_error = 1U;
        }
    } else if ((8U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))) {
        if ((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))) {
            if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))) {
                if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__hold_msg = 1U;
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__st_d 
                        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__keccak_complete)
                            ? 0x25U : 0x0fU);
                } else {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__st_d = 0x33U;
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__sha3pad_state_error = 1U;
                }
            } else {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__st_d = 0x33U;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__sha3pad_state_error = 1U;
            }
        } else {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__st_d = 0x33U;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__sha3pad_state_error = 1U;
        }
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__st_d = 0x33U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__sha3pad_state_error = 1U;
    }
    if (([&]() {
                vlSelfRef.__Vfunc_lc_tx_test_true_loose__1528__val 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__lc_escalate_en__BRA__11__03a8__KET__;
                vlSelfRef.__Vfunc_lc_tx_test_true_loose__1528__Vfuncout 
                    = (0x0aU != (IData)(vlSelfRef.__Vfunc_lc_tx_test_true_loose__1528__val));
            }(), (IData)(vlSelfRef.__Vfunc_lc_tx_test_true_loose__1528__Vfuncout))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__st_d = 0x33U;
    }
    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__clr_sentmsg) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__u_sentmsg_count__DOT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__u_sentmsg_count__DOT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 0x0000001fU;
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__u_sentmsg_count__DOT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
            = (0x0000001fU & (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__u_sentmsg_count__DOT__incr_en_i) 
                               & (~ (0x0000001fU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__u_sentmsg_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))))
                               ? (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__u_sentmsg_count__DOT__incr_en_i) 
                                   & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__u_sentmsg_count__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt) 
                                      >> 5U)) ? 0x1fU
                                   : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__u_sentmsg_count__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt))
                               : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__u_sentmsg_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__u_sentmsg_count__DOT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
            = (0x0000001fU & (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__u_sentmsg_count__DOT__incr_en_i) 
                               & (0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__u_sentmsg_count__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)))
                               ? (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__u_sentmsg_count__DOT__incr_en_i) 
                                   & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__u_sentmsg_count__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt) 
                                      >> 5U)) ? 0U : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__u_sentmsg_count__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt))
                               : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__u_sentmsg_count__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)));
    }
    __Vtableidx82 = ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__en_msgbuf) 
                       << 6U) | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__hold_msg) 
                                 << 5U)) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__msg_valid_i) 
                                             << 4U) 
                                            | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__fsm_keccak_valid) 
                                                << 3U) 
                                               | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__sel_mux))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__keccak_valid 
        = Vsim__ConstPool__TABLE_hda42d83f_0[__Vtableidx82];
    __Vtableidx83 = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__hold_msg) 
                      << 5U) | (((0x1fU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_keccak__DOT__u_state_regs__DOT__state_raw)) 
                                 << 4U) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__en_msgbuf) 
                                            << 3U) 
                                           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__sel_mux))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__msg_ready 
        = Vsim__ConstPool__TABLE_h534bae5f_0[__Vtableidx83];
    if ((4U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__sel_mux))) {
        if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__sel_mux))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__keccak_data[0U] = 0ULL;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__keccak_data[1U] = 0ULL;
        } else if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__sel_mux))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__keccak_data[0U] = 0ULL;
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__keccak_data[1U] = 0ULL;
        } else {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__keccak_data[0U] 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__zero_with_endbit
                [0U];
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__keccak_data[1U] 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__zero_with_endbit
                [1U];
        }
    } else if ((2U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__sel_mux))) {
        if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__sel_mux))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__keccak_data[0U] 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__funcpad_data
                [0U];
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__keccak_data[1U] 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__funcpad_data
                [1U];
        } else {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__keccak_data[0U] 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__prefix_data
                [0U];
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__keccak_data[1U] 
                = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__prefix_data
                [1U];
        }
    } else if ((1U & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__sel_mux))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__keccak_data[0U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__msg_data_masked
            [0U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__keccak_data[1U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__msg_data_masked
            [1U];
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__keccak_data[0U] = 0ULL;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__keccak_data[1U] = 0ULL;
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__run_req_o 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__sha3pad_keccak_run) 
           | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__sw_keccak_run) 
              | ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__keccak_complete)) 
                 & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__keccak_run_req_q))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__gen_entropy__DOT__u_entropy__DOT__msg_mask_en_i 
        = ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_reg__DOT__u_cfg_shadowed_msg_mask.__PVT__committed_q) 
           & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__msg_ready) 
              & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__msg_valid_i)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_kmac_core__DOT__u_key_index_count__DOT__incr_en_i 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__msg_ready) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_kmac_core__DOT__kmac_valid));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_msgfifo__DOT__u_msgfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__incr_en_i 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_msgfifo__DOT__u_msgfifo__DOT__rvalid_o) 
           & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_msgfifo__DOT__u_msgfifo__DOT__gen_normal_fifo__DOT__under_rst)) 
              & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_kmac_core__DOT__en_kmac_datapath)) 
                 & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__msg_ready))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__keccak_data_o[0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__keccak_data
        [0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_pad__DOT__keccak_data_o[1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__keccak_data
        [1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_keccak__DOT__data_i[0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__keccak_data
        [0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_keccak__DOT__data_i[1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__keccak_data
        [1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_keccak__DOT__run_i 
        = ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__keccak_triggered_q)) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__run_req_o));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_kmac_core__DOT__u_key_index_count__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
        = (0x0000003fU & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_kmac_core__DOT__u_key_index_count__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q) 
                          - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_kmac_core__DOT__u_key_index_count__DOT__incr_en_i)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_kmac_core__DOT__u_key_index_count__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
        = (0x0000003fU & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_kmac_core__DOT__u_key_index_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                          + (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_kmac_core__DOT__u_key_index_count__DOT__incr_en_i)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_msgfifo__DOT__u_msgfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
        = (0x0000003fU & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_msgfifo__DOT__u_msgfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                          + (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_msgfifo__DOT__u_msgfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__incr_en_i)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_msgfifo__DOT__u_msgfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
        = (0x0000003fU & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_msgfifo__DOT__u_msgfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q) 
                          - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_msgfifo__DOT__u_msgfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__incr_en_i)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_msgfifo__DOT__u_msgfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__set_i 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_msgfifo__DOT__u_msgfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__incr_en_i) 
           & (9U == (0x0000000fU & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_msgfifo__DOT__u_msgfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__keccak_triggered_d 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__u_keccak__DOT__run_i) 
           | ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__keccak_complete)) 
              & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_sha3__DOT__keccak_triggered_q)));
    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_kmac_core__DOT__clr_keyidx) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_kmac_core__DOT__u_key_index_count__DOT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 0x0000001fU;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_kmac_core__DOT__u_key_index_count__DOT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 0U;
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_kmac_core__DOT__u_key_index_count__DOT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
            = (0x0000001fU & (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_kmac_core__DOT__u_key_index_count__DOT__incr_en_i) 
                               & (0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_kmac_core__DOT__u_key_index_count__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)))
                               ? (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_kmac_core__DOT__u_key_index_count__DOT__incr_en_i) 
                                   & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_kmac_core__DOT__u_key_index_count__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt) 
                                      >> 5U)) ? 0U : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_kmac_core__DOT__u_key_index_count__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt))
                               : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_kmac_core__DOT__u_key_index_count__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_kmac_core__DOT__u_key_index_count__DOT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
            = (0x0000001fU & (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_kmac_core__DOT__u_key_index_count__DOT__incr_en_i) 
                               & (~ (0x0000001fU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_kmac_core__DOT__u_key_index_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))))
                               ? (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_kmac_core__DOT__u_key_index_count__DOT__incr_en_i) 
                                   & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_kmac_core__DOT__u_key_index_count__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt) 
                                      >> 5U)) ? 0x1fU
                                   : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_kmac_core__DOT__u_key_index_count__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt))
                               : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_kmac_core__DOT__u_key_index_count__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)));
    }
    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_msgfifo__DOT____Vcellinp__u_msgfifo__clr_i) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_msgfifo__DOT__u_msgfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_msgfifo__DOT__u_msgfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 0x0000001fU;
    } else if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_msgfifo__DOT__u_msgfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__set_i) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_msgfifo__DOT__u_msgfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
            = (0x0000001fU & (0x00000010U & ((~ ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_msgfifo__DOT__u_msgfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                                                 >> 4U)) 
                                             << 4U)));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_msgfifo__DOT__u_msgfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
            = (0x0000001fU & ((IData)(0x1fU) - (0x00000010U 
                                                & ((~ 
                                                    ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_msgfifo__DOT__u_msgfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                                                     >> 4U)) 
                                                   << 4U))));
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_msgfifo__DOT__u_msgfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
            = (0x0000001fU & (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_msgfifo__DOT__u_msgfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__incr_en_i) 
                               & (~ (0x0000001fU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_msgfifo__DOT__u_msgfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))))
                               ? (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_msgfifo__DOT__u_msgfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__incr_en_i) 
                                   & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_msgfifo__DOT__u_msgfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt) 
                                      >> 5U)) ? 0x1fU
                                   : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_msgfifo__DOT__u_msgfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt))
                               : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_msgfifo__DOT__u_msgfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_msgfifo__DOT__u_msgfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
            = (0x0000001fU & (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_msgfifo__DOT__u_msgfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__incr_en_i) 
                               & (0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_msgfifo__DOT__u_msgfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)))
                               ? (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_msgfifo__DOT__u_msgfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__incr_en_i) 
                                   & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_msgfifo__DOT__u_msgfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt) 
                                      >> 5U)) ? 0U : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_msgfifo__DOT__u_msgfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt))
                               : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_msgfifo__DOT__u_msgfifo__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__gen_secure_ptrs__DOT__u_rptr__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)));
    }
}

extern const VlWide<25>/*799:0*/ Vsim__ConstPool__CONST_hba963b7f_0;

void Vsim___024root___act_comb__TOP__20(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___act_comb__TOP__20\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_id))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0U] 
            = ((0xfffffffeU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0U]) 
               | (IData)(((((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__sha3_err 
                             >> 0x00000020U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__fsm_digest_done_q)) 
                           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__kmac_app_state_error)) 
                          | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__service_rejected_error))));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0U] 
            = ((1U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0U]) 
               | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                  [1U][0U] << 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[1U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                [1U][0U] >> 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                                            [1U][1U] 
                                            << 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[2U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                [1U][1U] >> 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                                            [1U][2U] 
                                            << 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[3U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                [1U][2U] >> 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                                            [1U][3U] 
                                            << 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[4U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                [1U][3U] >> 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                                            [1U][4U] 
                                            << 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[5U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                [1U][4U] >> 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                                            [1U][5U] 
                                            << 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[6U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                [1U][5U] >> 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                                            [1U][6U] 
                                            << 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[7U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                [1U][6U] >> 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                                            [1U][7U] 
                                            << 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[8U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                [1U][7U] >> 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                                            [1U][8U] 
                                            << 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[9U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                [1U][8U] >> 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                                            [1U][9U] 
                                            << 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x0000000aU] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                [1U][9U] >> 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                                            [1U][0x0000000aU] 
                                            << 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x0000000bU] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                [1U][0x0000000aU] >> 0x0000001fU) | 
               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                [1U][0x0000000bU] << 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x0000000cU] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                [1U][0x0000000bU] >> 0x0000001fU) | 
               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                [0U][0U] << 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x0000000dU] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                [0U][0U] >> 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                                            [0U][1U] 
                                            << 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x0000000eU] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                [0U][1U] >> 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                                            [0U][2U] 
                                            << 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x0000000fU] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                [0U][2U] >> 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                                            [0U][3U] 
                                            << 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x00000010U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                [0U][3U] >> 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                                            [0U][4U] 
                                            << 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x00000011U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                [0U][4U] >> 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                                            [0U][5U] 
                                            << 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x00000012U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                [0U][5U] >> 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                                            [0U][6U] 
                                            << 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x00000013U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                [0U][6U] >> 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                                            [0U][7U] 
                                            << 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x00000014U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                [0U][7U] >> 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                                            [0U][8U] 
                                            << 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x00000015U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                [0U][8U] >> 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                                            [0U][9U] 
                                            << 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x00000016U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                [0U][9U] >> 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                                            [0U][0x0000000aU] 
                                            << 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x00000017U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                [0U][0x0000000aU] >> 0x0000001fU) | 
               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                [0U][0x0000000bU] << 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x00000018U] 
            = (7U & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                      [0U][0x0000000bU] >> 0x0000001fU) 
                     | ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_data_ready) 
                          | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__fsm_data_ready)) 
                         << 2U) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest_done) 
                                    | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__fsm_digest_done_q)) 
                                   << 1U))));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[1U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[1U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[2U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[2U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[3U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[3U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[4U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[4U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[5U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[5U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[6U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[6U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[7U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[7U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[8U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[8U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[9U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[9U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x0000000aU] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x0000000aU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x0000000bU] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x0000000bU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x0000000cU] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x0000000cU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x0000000dU] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x0000000dU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x0000000eU] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x0000000eU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x0000000fU] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x0000000fU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000010U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x00000010U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000011U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x00000011U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000012U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x00000012U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000013U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x00000013U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000014U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x00000014U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000015U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x00000015U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000016U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x00000016U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000017U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x00000017U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000018U] 
            = ((0xfffffff8U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000018U]) 
               | vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x00000018U]);
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0U] 
            = Vsim__ConstPool__CONST_hba963b7f_0[0U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[1U] 
            = Vsim__ConstPool__CONST_hba963b7f_0[1U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[2U] 
            = Vsim__ConstPool__CONST_hba963b7f_0[2U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[3U] 
            = Vsim__ConstPool__CONST_hba963b7f_0[3U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[4U] 
            = Vsim__ConstPool__CONST_hba963b7f_0[4U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[5U] 
            = Vsim__ConstPool__CONST_hba963b7f_0[5U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[6U] 
            = Vsim__ConstPool__CONST_hba963b7f_0[6U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[7U] 
            = Vsim__ConstPool__CONST_hba963b7f_0[7U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[8U] 
            = Vsim__ConstPool__CONST_hba963b7f_0[8U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[9U] 
            = Vsim__ConstPool__CONST_hba963b7f_0[9U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x0000000aU] 
            = Vsim__ConstPool__CONST_hba963b7f_0[0x0000000aU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x0000000bU] 
            = Vsim__ConstPool__CONST_hba963b7f_0[0x0000000bU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x0000000cU] 
            = Vsim__ConstPool__CONST_hba963b7f_0[0x0000000cU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x0000000dU] 
            = Vsim__ConstPool__CONST_hba963b7f_0[0x0000000dU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x0000000eU] 
            = Vsim__ConstPool__CONST_hba963b7f_0[0x0000000eU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x0000000fU] 
            = Vsim__ConstPool__CONST_hba963b7f_0[0x0000000fU];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000010U] 
            = Vsim__ConstPool__CONST_hba963b7f_0[0x00000010U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000011U] 
            = Vsim__ConstPool__CONST_hba963b7f_0[0x00000011U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000012U] 
            = Vsim__ConstPool__CONST_hba963b7f_0[0x00000012U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000013U] 
            = Vsim__ConstPool__CONST_hba963b7f_0[0x00000013U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000014U] 
            = Vsim__ConstPool__CONST_hba963b7f_0[0x00000014U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000015U] 
            = Vsim__ConstPool__CONST_hba963b7f_0[0x00000015U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000016U] 
            = Vsim__ConstPool__CONST_hba963b7f_0[0x00000016U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000017U] 
            = Vsim__ConstPool__CONST_hba963b7f_0[0x00000017U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000018U] 
            = ((0xfffffff8U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000018U]) 
               | Vsim__ConstPool__CONST_hba963b7f_0[0x00000018U]);
    }
    if ((1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_id))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0U] 
            = ((0xfffffffeU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0U]) 
               | (IData)(((((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__sha3_err 
                             >> 0x00000020U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__fsm_digest_done_q)) 
                           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__kmac_app_state_error)) 
                          | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__service_rejected_error))));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0U] 
            = ((1U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0U]) 
               | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                  [1U][0U] << 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[1U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                [1U][0U] >> 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                                            [1U][1U] 
                                            << 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[2U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                [1U][1U] >> 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                                            [1U][2U] 
                                            << 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[3U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                [1U][2U] >> 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                                            [1U][3U] 
                                            << 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[4U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                [1U][3U] >> 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                                            [1U][4U] 
                                            << 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[5U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                [1U][4U] >> 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                                            [1U][5U] 
                                            << 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[6U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                [1U][5U] >> 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                                            [1U][6U] 
                                            << 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[7U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                [1U][6U] >> 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                                            [1U][7U] 
                                            << 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[8U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                [1U][7U] >> 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                                            [1U][8U] 
                                            << 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[9U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                [1U][8U] >> 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                                            [1U][9U] 
                                            << 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x0000000aU] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                [1U][9U] >> 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                                            [1U][0x0000000aU] 
                                            << 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x0000000bU] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                [1U][0x0000000aU] >> 0x0000001fU) | 
               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                [1U][0x0000000bU] << 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x0000000cU] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                [1U][0x0000000bU] >> 0x0000001fU) | 
               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                [0U][0U] << 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x0000000dU] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                [0U][0U] >> 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                                            [0U][1U] 
                                            << 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x0000000eU] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                [0U][1U] >> 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                                            [0U][2U] 
                                            << 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x0000000fU] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                [0U][2U] >> 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                                            [0U][3U] 
                                            << 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x00000010U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                [0U][3U] >> 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                                            [0U][4U] 
                                            << 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x00000011U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                [0U][4U] >> 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                                            [0U][5U] 
                                            << 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x00000012U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                [0U][5U] >> 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                                            [0U][6U] 
                                            << 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x00000013U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                [0U][6U] >> 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                                            [0U][7U] 
                                            << 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x00000014U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                [0U][7U] >> 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                                            [0U][8U] 
                                            << 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x00000015U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                [0U][8U] >> 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                                            [0U][9U] 
                                            << 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x00000016U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                [0U][9U] >> 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                                            [0U][0x0000000aU] 
                                            << 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x00000017U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                [0U][0x0000000aU] >> 0x0000001fU) | 
               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                [0U][0x0000000bU] << 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x00000018U] 
            = (7U & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                      [0U][0x0000000bU] >> 0x0000001fU) 
                     | ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_data_ready) 
                          | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__fsm_data_ready)) 
                         << 2U) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest_done) 
                                    | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__fsm_digest_done_q)) 
                                   << 1U))));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000018U] 
            = ((7U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000018U]) 
               | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0U] 
                  << 3U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000019U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0U] 
                >> 0x0000001dU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[1U] 
                                   << 3U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x0000001aU] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[1U] 
                >> 0x0000001dU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[2U] 
                                   << 3U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x0000001bU] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[2U] 
                >> 0x0000001dU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[3U] 
                                   << 3U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x0000001cU] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[3U] 
                >> 0x0000001dU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[4U] 
                                   << 3U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x0000001dU] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[4U] 
                >> 0x0000001dU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[5U] 
                                   << 3U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x0000001eU] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[5U] 
                >> 0x0000001dU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[6U] 
                                   << 3U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x0000001fU] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[6U] 
                >> 0x0000001dU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[7U] 
                                   << 3U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000020U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[7U] 
                >> 0x0000001dU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[8U] 
                                   << 3U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000021U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[8U] 
                >> 0x0000001dU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[9U] 
                                   << 3U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000022U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[9U] 
                >> 0x0000001dU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x0000000aU] 
                                   << 3U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000023U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x0000000aU] 
                >> 0x0000001dU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x0000000bU] 
                                   << 3U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000024U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x0000000bU] 
                >> 0x0000001dU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x0000000cU] 
                                   << 3U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000025U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x0000000cU] 
                >> 0x0000001dU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x0000000dU] 
                                   << 3U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000026U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x0000000dU] 
                >> 0x0000001dU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x0000000eU] 
                                   << 3U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000027U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x0000000eU] 
                >> 0x0000001dU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x0000000fU] 
                                   << 3U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000028U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x0000000fU] 
                >> 0x0000001dU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x00000010U] 
                                   << 3U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000029U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x00000010U] 
                >> 0x0000001dU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x00000011U] 
                                   << 3U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x0000002aU] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x00000011U] 
                >> 0x0000001dU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x00000012U] 
                                   << 3U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x0000002bU] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x00000012U] 
                >> 0x0000001dU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x00000013U] 
                                   << 3U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x0000002cU] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x00000013U] 
                >> 0x0000001dU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x00000014U] 
                                   << 3U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x0000002dU] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x00000014U] 
                >> 0x0000001dU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x00000015U] 
                                   << 3U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x0000002eU] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x00000015U] 
                >> 0x0000001dU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x00000016U] 
                                   << 3U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x0000002fU] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x00000016U] 
                >> 0x0000001dU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x00000017U] 
                                   << 3U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000030U] 
            = ((0xffffffc0U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000030U]) 
               | ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x00000017U] 
                   >> 0x0000001dU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x00000018U] 
                                      << 3U)));
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000018U] 
            = ((7U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000018U]) 
               | (Vsim__ConstPool__CONST_hba963b7f_0[0U] 
                  << 3U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000019U] 
            = ((Vsim__ConstPool__CONST_hba963b7f_0[0U] 
                >> 0x0000001dU) | (Vsim__ConstPool__CONST_hba963b7f_0[1U] 
                                   << 3U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x0000001aU] 
            = ((Vsim__ConstPool__CONST_hba963b7f_0[1U] 
                >> 0x0000001dU) | (Vsim__ConstPool__CONST_hba963b7f_0[2U] 
                                   << 3U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x0000001bU] 
            = ((Vsim__ConstPool__CONST_hba963b7f_0[2U] 
                >> 0x0000001dU) | (Vsim__ConstPool__CONST_hba963b7f_0[3U] 
                                   << 3U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x0000001cU] 
            = ((Vsim__ConstPool__CONST_hba963b7f_0[3U] 
                >> 0x0000001dU) | (Vsim__ConstPool__CONST_hba963b7f_0[4U] 
                                   << 3U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x0000001dU] 
            = ((Vsim__ConstPool__CONST_hba963b7f_0[4U] 
                >> 0x0000001dU) | (Vsim__ConstPool__CONST_hba963b7f_0[5U] 
                                   << 3U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x0000001eU] 
            = ((Vsim__ConstPool__CONST_hba963b7f_0[5U] 
                >> 0x0000001dU) | (Vsim__ConstPool__CONST_hba963b7f_0[6U] 
                                   << 3U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x0000001fU] 
            = ((Vsim__ConstPool__CONST_hba963b7f_0[6U] 
                >> 0x0000001dU) | (Vsim__ConstPool__CONST_hba963b7f_0[7U] 
                                   << 3U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000020U] 
            = ((Vsim__ConstPool__CONST_hba963b7f_0[7U] 
                >> 0x0000001dU) | (Vsim__ConstPool__CONST_hba963b7f_0[8U] 
                                   << 3U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000021U] 
            = ((Vsim__ConstPool__CONST_hba963b7f_0[8U] 
                >> 0x0000001dU) | (Vsim__ConstPool__CONST_hba963b7f_0[9U] 
                                   << 3U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000022U] 
            = ((Vsim__ConstPool__CONST_hba963b7f_0[9U] 
                >> 0x0000001dU) | (Vsim__ConstPool__CONST_hba963b7f_0[0x0000000aU] 
                                   << 3U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000023U] 
            = ((Vsim__ConstPool__CONST_hba963b7f_0[0x0000000aU] 
                >> 0x0000001dU) | (Vsim__ConstPool__CONST_hba963b7f_0[0x0000000bU] 
                                   << 3U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000024U] 
            = ((Vsim__ConstPool__CONST_hba963b7f_0[0x0000000bU] 
                >> 0x0000001dU) | (Vsim__ConstPool__CONST_hba963b7f_0[0x0000000cU] 
                                   << 3U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000025U] 
            = ((Vsim__ConstPool__CONST_hba963b7f_0[0x0000000cU] 
                >> 0x0000001dU) | (Vsim__ConstPool__CONST_hba963b7f_0[0x0000000dU] 
                                   << 3U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000026U] 
            = ((Vsim__ConstPool__CONST_hba963b7f_0[0x0000000dU] 
                >> 0x0000001dU) | (Vsim__ConstPool__CONST_hba963b7f_0[0x0000000eU] 
                                   << 3U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000027U] 
            = ((Vsim__ConstPool__CONST_hba963b7f_0[0x0000000eU] 
                >> 0x0000001dU) | (Vsim__ConstPool__CONST_hba963b7f_0[0x0000000fU] 
                                   << 3U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000028U] 
            = ((Vsim__ConstPool__CONST_hba963b7f_0[0x0000000fU] 
                >> 0x0000001dU) | (Vsim__ConstPool__CONST_hba963b7f_0[0x00000010U] 
                                   << 3U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000029U] 
            = ((Vsim__ConstPool__CONST_hba963b7f_0[0x00000010U] 
                >> 0x0000001dU) | (Vsim__ConstPool__CONST_hba963b7f_0[0x00000011U] 
                                   << 3U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x0000002aU] 
            = ((Vsim__ConstPool__CONST_hba963b7f_0[0x00000011U] 
                >> 0x0000001dU) | (Vsim__ConstPool__CONST_hba963b7f_0[0x00000012U] 
                                   << 3U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x0000002bU] 
            = ((Vsim__ConstPool__CONST_hba963b7f_0[0x00000012U] 
                >> 0x0000001dU) | (Vsim__ConstPool__CONST_hba963b7f_0[0x00000013U] 
                                   << 3U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x0000002cU] 
            = ((Vsim__ConstPool__CONST_hba963b7f_0[0x00000013U] 
                >> 0x0000001dU) | (Vsim__ConstPool__CONST_hba963b7f_0[0x00000014U] 
                                   << 3U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x0000002dU] 
            = ((Vsim__ConstPool__CONST_hba963b7f_0[0x00000014U] 
                >> 0x0000001dU) | (Vsim__ConstPool__CONST_hba963b7f_0[0x00000015U] 
                                   << 3U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x0000002eU] 
            = ((Vsim__ConstPool__CONST_hba963b7f_0[0x00000015U] 
                >> 0x0000001dU) | (Vsim__ConstPool__CONST_hba963b7f_0[0x00000016U] 
                                   << 3U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x0000002fU] 
            = ((Vsim__ConstPool__CONST_hba963b7f_0[0x00000016U] 
                >> 0x0000001dU) | (Vsim__ConstPool__CONST_hba963b7f_0[0x00000017U] 
                                   << 3U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000030U] 
            = ((0xffffffc0U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000030U]) 
               | ((Vsim__ConstPool__CONST_hba963b7f_0[0x00000017U] 
                   >> 0x0000001dU) | (Vsim__ConstPool__CONST_hba963b7f_0[0x00000018U] 
                                      << 3U)));
    }
    if ((2U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_id))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0U] 
            = ((0xfffffffeU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0U]) 
               | (IData)(((((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__sha3_err 
                             >> 0x00000020U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__fsm_digest_done_q)) 
                           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__kmac_app_state_error)) 
                          | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__service_rejected_error))));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0U] 
            = ((1U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0U]) 
               | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                  [1U][0U] << 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[1U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                [1U][0U] >> 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                                            [1U][1U] 
                                            << 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[2U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                [1U][1U] >> 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                                            [1U][2U] 
                                            << 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[3U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                [1U][2U] >> 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                                            [1U][3U] 
                                            << 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[4U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                [1U][3U] >> 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                                            [1U][4U] 
                                            << 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[5U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                [1U][4U] >> 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                                            [1U][5U] 
                                            << 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[6U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                [1U][5U] >> 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                                            [1U][6U] 
                                            << 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[7U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                [1U][6U] >> 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                                            [1U][7U] 
                                            << 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[8U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                [1U][7U] >> 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                                            [1U][8U] 
                                            << 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[9U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                [1U][8U] >> 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                                            [1U][9U] 
                                            << 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x0000000aU] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                [1U][9U] >> 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                                            [1U][0x0000000aU] 
                                            << 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x0000000bU] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                [1U][0x0000000aU] >> 0x0000001fU) | 
               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                [1U][0x0000000bU] << 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x0000000cU] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                [1U][0x0000000bU] >> 0x0000001fU) | 
               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                [0U][0U] << 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x0000000dU] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                [0U][0U] >> 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                                            [0U][1U] 
                                            << 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x0000000eU] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                [0U][1U] >> 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                                            [0U][2U] 
                                            << 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x0000000fU] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                [0U][2U] >> 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                                            [0U][3U] 
                                            << 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x00000010U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                [0U][3U] >> 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                                            [0U][4U] 
                                            << 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x00000011U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                [0U][4U] >> 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                                            [0U][5U] 
                                            << 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x00000012U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                [0U][5U] >> 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                                            [0U][6U] 
                                            << 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x00000013U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                [0U][6U] >> 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                                            [0U][7U] 
                                            << 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x00000014U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                [0U][7U] >> 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                                            [0U][8U] 
                                            << 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x00000015U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                [0U][8U] >> 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                                            [0U][9U] 
                                            << 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x00000016U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                [0U][9U] >> 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                                            [0U][0x0000000aU] 
                                            << 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x00000017U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                [0U][0x0000000aU] >> 0x0000001fU) | 
               (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                [0U][0x0000000bU] << 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x00000018U] 
            = (7U & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest
                      [0U][0x0000000bU] >> 0x0000001fU) 
                     | ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_data_ready) 
                          | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__fsm_data_ready)) 
                         << 2U) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__app_digest_done) 
                                    | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT__fsm_digest_done_q)) 
                                   << 1U))));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000030U] 
            = ((0x0000003fU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000030U]) 
               | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0U] 
                  << 6U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000031U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0U] 
                >> 0x0000001aU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[1U] 
                                   << 6U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000032U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[1U] 
                >> 0x0000001aU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[2U] 
                                   << 6U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000033U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[2U] 
                >> 0x0000001aU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[3U] 
                                   << 6U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000034U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[3U] 
                >> 0x0000001aU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[4U] 
                                   << 6U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000035U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[4U] 
                >> 0x0000001aU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[5U] 
                                   << 6U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000036U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[5U] 
                >> 0x0000001aU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[6U] 
                                   << 6U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000037U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[6U] 
                >> 0x0000001aU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[7U] 
                                   << 6U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000038U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[7U] 
                >> 0x0000001aU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[8U] 
                                   << 6U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000039U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[8U] 
                >> 0x0000001aU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[9U] 
                                   << 6U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x0000003aU] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[9U] 
                >> 0x0000001aU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x0000000aU] 
                                   << 6U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x0000003bU] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x0000000aU] 
                >> 0x0000001aU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x0000000bU] 
                                   << 6U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x0000003cU] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x0000000bU] 
                >> 0x0000001aU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x0000000cU] 
                                   << 6U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x0000003dU] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x0000000cU] 
                >> 0x0000001aU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x0000000dU] 
                                   << 6U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x0000003eU] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x0000000dU] 
                >> 0x0000001aU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x0000000eU] 
                                   << 6U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x0000003fU] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x0000000eU] 
                >> 0x0000001aU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x0000000fU] 
                                   << 6U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000040U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x0000000fU] 
                >> 0x0000001aU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x00000010U] 
                                   << 6U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000041U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x00000010U] 
                >> 0x0000001aU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x00000011U] 
                                   << 6U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000042U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x00000011U] 
                >> 0x0000001aU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x00000012U] 
                                   << 6U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000043U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x00000012U] 
                >> 0x0000001aU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x00000013U] 
                                   << 6U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000044U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x00000013U] 
                >> 0x0000001aU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x00000014U] 
                                   << 6U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000045U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x00000014U] 
                >> 0x0000001aU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x00000015U] 
                                   << 6U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000046U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x00000015U] 
                >> 0x0000001aU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x00000016U] 
                                   << 6U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000047U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x00000016U] 
                >> 0x0000001aU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x00000017U] 
                                   << 6U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000048U] 
            = (0x000001ffU & ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x00000017U] 
                               >> 0x0000001aU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT__u_app_intf__DOT____Vlvbound_hd646f1cc__0[0x00000018U] 
                                                  << 6U)));
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000030U] 
            = ((0x0000003fU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000030U]) 
               | (Vsim__ConstPool__CONST_hba963b7f_0[0U] 
                  << 6U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000031U] 
            = ((Vsim__ConstPool__CONST_hba963b7f_0[0U] 
                >> 0x0000001aU) | (Vsim__ConstPool__CONST_hba963b7f_0[1U] 
                                   << 6U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000032U] 
            = ((Vsim__ConstPool__CONST_hba963b7f_0[1U] 
                >> 0x0000001aU) | (Vsim__ConstPool__CONST_hba963b7f_0[2U] 
                                   << 6U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000033U] 
            = ((Vsim__ConstPool__CONST_hba963b7f_0[2U] 
                >> 0x0000001aU) | (Vsim__ConstPool__CONST_hba963b7f_0[3U] 
                                   << 6U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000034U] 
            = ((Vsim__ConstPool__CONST_hba963b7f_0[3U] 
                >> 0x0000001aU) | (Vsim__ConstPool__CONST_hba963b7f_0[4U] 
                                   << 6U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000035U] 
            = ((Vsim__ConstPool__CONST_hba963b7f_0[4U] 
                >> 0x0000001aU) | (Vsim__ConstPool__CONST_hba963b7f_0[5U] 
                                   << 6U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000036U] 
            = ((Vsim__ConstPool__CONST_hba963b7f_0[5U] 
                >> 0x0000001aU) | (Vsim__ConstPool__CONST_hba963b7f_0[6U] 
                                   << 6U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000037U] 
            = ((Vsim__ConstPool__CONST_hba963b7f_0[6U] 
                >> 0x0000001aU) | (Vsim__ConstPool__CONST_hba963b7f_0[7U] 
                                   << 6U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000038U] 
            = ((Vsim__ConstPool__CONST_hba963b7f_0[7U] 
                >> 0x0000001aU) | (Vsim__ConstPool__CONST_hba963b7f_0[8U] 
                                   << 6U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000039U] 
            = ((Vsim__ConstPool__CONST_hba963b7f_0[8U] 
                >> 0x0000001aU) | (Vsim__ConstPool__CONST_hba963b7f_0[9U] 
                                   << 6U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x0000003aU] 
            = ((Vsim__ConstPool__CONST_hba963b7f_0[9U] 
                >> 0x0000001aU) | (Vsim__ConstPool__CONST_hba963b7f_0[0x0000000aU] 
                                   << 6U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x0000003bU] 
            = ((Vsim__ConstPool__CONST_hba963b7f_0[0x0000000aU] 
                >> 0x0000001aU) | (Vsim__ConstPool__CONST_hba963b7f_0[0x0000000bU] 
                                   << 6U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x0000003cU] 
            = ((Vsim__ConstPool__CONST_hba963b7f_0[0x0000000bU] 
                >> 0x0000001aU) | (Vsim__ConstPool__CONST_hba963b7f_0[0x0000000cU] 
                                   << 6U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x0000003dU] 
            = ((Vsim__ConstPool__CONST_hba963b7f_0[0x0000000cU] 
                >> 0x0000001aU) | (Vsim__ConstPool__CONST_hba963b7f_0[0x0000000dU] 
                                   << 6U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x0000003eU] 
            = ((Vsim__ConstPool__CONST_hba963b7f_0[0x0000000dU] 
                >> 0x0000001aU) | (Vsim__ConstPool__CONST_hba963b7f_0[0x0000000eU] 
                                   << 6U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x0000003fU] 
            = ((Vsim__ConstPool__CONST_hba963b7f_0[0x0000000eU] 
                >> 0x0000001aU) | (Vsim__ConstPool__CONST_hba963b7f_0[0x0000000fU] 
                                   << 6U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000040U] 
            = ((Vsim__ConstPool__CONST_hba963b7f_0[0x0000000fU] 
                >> 0x0000001aU) | (Vsim__ConstPool__CONST_hba963b7f_0[0x00000010U] 
                                   << 6U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000041U] 
            = ((Vsim__ConstPool__CONST_hba963b7f_0[0x00000010U] 
                >> 0x0000001aU) | (Vsim__ConstPool__CONST_hba963b7f_0[0x00000011U] 
                                   << 6U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000042U] 
            = ((Vsim__ConstPool__CONST_hba963b7f_0[0x00000011U] 
                >> 0x0000001aU) | (Vsim__ConstPool__CONST_hba963b7f_0[0x00000012U] 
                                   << 6U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000043U] 
            = ((Vsim__ConstPool__CONST_hba963b7f_0[0x00000012U] 
                >> 0x0000001aU) | (Vsim__ConstPool__CONST_hba963b7f_0[0x00000013U] 
                                   << 6U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000044U] 
            = ((Vsim__ConstPool__CONST_hba963b7f_0[0x00000013U] 
                >> 0x0000001aU) | (Vsim__ConstPool__CONST_hba963b7f_0[0x00000014U] 
                                   << 6U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000045U] 
            = ((Vsim__ConstPool__CONST_hba963b7f_0[0x00000014U] 
                >> 0x0000001aU) | (Vsim__ConstPool__CONST_hba963b7f_0[0x00000015U] 
                                   << 6U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000046U] 
            = ((Vsim__ConstPool__CONST_hba963b7f_0[0x00000015U] 
                >> 0x0000001aU) | (Vsim__ConstPool__CONST_hba963b7f_0[0x00000016U] 
                                   << 6U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000047U] 
            = ((Vsim__ConstPool__CONST_hba963b7f_0[0x00000016U] 
                >> 0x0000001aU) | (Vsim__ConstPool__CONST_hba963b7f_0[0x00000017U] 
                                   << 6U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000048U] 
            = (0x000001ffU & ((Vsim__ConstPool__CONST_hba963b7f_0[0x00000017U] 
                               >> 0x0000001aU) | (Vsim__ConstPool__CONST_hba963b7f_0[0x00000018U] 
                                                  << 6U)));
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_kmac_if__DOT__state_d 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_kmac_if__DOT__u_state_regs__DOT__state_raw;
    if ((0x5bU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_kmac_if__DOT__u_state_regs__DOT__state_raw))) {
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_kmac_if__DOT__u_prim_sync_reqack_data_in__DOT__u_prim_sync_reqack__DOT__dst_req_o) {
            if ((0x00000020U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000030U])) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_kmac_if__DOT__state_d = 0x94U;
            }
        }
    } else if ((0x94U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_kmac_if__DOT__u_state_regs__DOT__state_raw))) {
        if ((0x00000020U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000030U])) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_kmac_if__DOT__state_d = 0xe7U;
        }
    } else if ((0xe7U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_kmac_if__DOT__u_state_regs__DOT__state_raw))) {
        if ((0x00000010U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000030U])) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_kmac_if__DOT__state_d = 0x28U;
        }
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__kmac_done_err_d 
        = (1U & (((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__kmac_done_vld)) 
                  & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000018U] 
                     >> 1U)) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__kmac_done_err_q)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__gen_fsm_scramble_enabled__DOT__u_checker_fsm__DOT__kmac_rom_vld_d 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__gen_fsm_scramble_enabled__DOT__u_checker_fsm__DOT__kmac_rom_vld_q;
    if ((0x00000100U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000048U])) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__gen_fsm_scramble_enabled__DOT__u_checker_fsm__DOT__kmac_rom_vld_d = 0U;
    }
    if ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__gen_fsm_scramble_enabled__DOT__u_checker_fsm__DOT__u_counter__DOT__req_q) 
          & (0x00c9U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__gen_fsm_scramble_enabled__DOT__u_checker_fsm__DOT__u_state_regs__DOT__state_raw))) 
         & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__gen_fsm_scramble_enabled__DOT__u_checker_fsm__DOT__u_counter__DOT__last_nontop_q)))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__gen_fsm_scramble_enabled__DOT__u_checker_fsm__DOT__kmac_rom_vld_d = 1U;
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_kmac_if__DOT__kmac_ack = 0U;
    if ((0x5bU != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_kmac_if__DOT__u_state_regs__DOT__state_raw))) {
        if ((0x94U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_kmac_if__DOT__u_state_regs__DOT__state_raw))) {
            if ((0xe7U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_kmac_if__DOT__u_state_regs__DOT__state_raw))) {
                if ((0x00000010U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000030U])) {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_kmac_if__DOT__kmac_ack = 1U;
                }
            }
        }
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__kmac_digest[0U] 
        = (((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x0000003dU] 
             << 0x00000019U) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x0000003cU] 
                                >> 7U)) ^ ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000031U] 
                                            << 0x00000019U) 
                                           | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000030U] 
                                              >> 7U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__kmac_digest[1U] 
        = (((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x0000003eU] 
             << 0x00000019U) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x0000003dU] 
                                >> 7U)) ^ ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000032U] 
                                            << 0x00000019U) 
                                           | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000031U] 
                                              >> 7U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__kmac_digest[2U] 
        = (((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x0000003fU] 
             << 0x00000019U) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x0000003eU] 
                                >> 7U)) ^ ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000033U] 
                                            << 0x00000019U) 
                                           | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000032U] 
                                              >> 7U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__kmac_digest[3U] 
        = (((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000040U] 
             << 0x00000019U) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x0000003fU] 
                                >> 7U)) ^ ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000034U] 
                                            << 0x00000019U) 
                                           | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000033U] 
                                              >> 7U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__kmac_digest[4U] 
        = (((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000041U] 
             << 0x00000019U) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000040U] 
                                >> 7U)) ^ ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000035U] 
                                            << 0x00000019U) 
                                           | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000034U] 
                                              >> 7U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__kmac_digest[5U] 
        = (((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000042U] 
             << 0x00000019U) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000041U] 
                                >> 7U)) ^ ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000036U] 
                                            << 0x00000019U) 
                                           | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000035U] 
                                              >> 7U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__kmac_digest[6U] 
        = (((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000043U] 
             << 0x00000019U) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000042U] 
                                >> 7U)) ^ ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000037U] 
                                            << 0x00000019U) 
                                           | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000036U] 
                                              >> 7U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__kmac_digest[7U] 
        = (((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000044U] 
             << 0x00000019U) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000043U] 
                                >> 7U)) ^ ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000038U] 
                                            << 0x00000019U) 
                                           | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000037U] 
                                              >> 7U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__cnt_clr = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__state_d 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_state_regs__DOT__state_raw;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__rounds = 0U;
    if ((0x03a2U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_state_regs__DOT__state_raw))) {
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__valid_op) {
            if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__adv_en) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__rounds = 0x11U;
            } else if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__id_en) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__rounds = 3U;
            } else if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__gen_en) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__rounds = 0x0cU;
            }
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__state_d 
                = ((0U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__rounds))
                    ? 0x0140U : 0x009bU);
        }
    } else if ((0x009bU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_state_regs__DOT__state_raw))) {
        if ((4U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000018U])) {
            if ((1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__state_d = 0x0140U;
            }
        }
    } else if ((0x0140U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_state_regs__DOT__state_raw))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__state_d 
            = ((4U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000018U])
                ? 0x0229U : 0x0140U);
    } else if ((0x0229U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_state_regs__DOT__state_raw))) {
        if ((2U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000018U])) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__state_d = 0x03fdU;
        }
    } else if ((0x03fdU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_state_regs__DOT__state_raw))) {
        if ((1U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__valid_op)))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__state_d = 0x03a2U;
        }
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__cnt_en = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__gen_fsm_scramble_enabled__DOT__u_checker_fsm__DOT__u_counter__DOT__go 
        = (((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000048U] 
             >> 8U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__gen_fsm_scramble_enabled__DOT__u_checker_fsm__DOT____VdfgRegularize_h725e584c_0_0)) 
           & ((0x1fffU != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__gen_fsm_scramble_enabled__DOT__u_checker_fsm__DOT__u_counter__DOT__addr_q)) 
              & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__gen_fsm_scramble_enabled__DOT__u_checker_fsm__DOT__u_counter__DOT__vld_q)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__kmac_op_err = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__kmac_done = 0U;
    if ((0x03a2U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_state_regs__DOT__state_raw))) {
        if ((0x009bU != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_state_regs__DOT__state_raw))) {
            if ((0x0140U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_state_regs__DOT__state_raw))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__cnt_clr 
                    = (1U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000018U] 
                             >> 2U));
            }
            if ((0x0140U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_state_regs__DOT__state_raw))) {
                if ((0x0229U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_state_regs__DOT__state_raw))) {
                    if ((2U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000018U])) {
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__kmac_op_err 
                            = (1U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0U]);
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__kmac_done = 1U;
                    }
                } else if ((0x03fdU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_state_regs__DOT__state_raw))) {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__kmac_done = 1U;
                    if ((1U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__valid_op)))) {
                        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__kmac_done = 0U;
                    }
                } else {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__kmac_done = 1U;
                }
            }
        }
        if ((0x009bU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_state_regs__DOT__state_raw))) {
            if ((4U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000018U])) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__cnt_en = 1U;
            }
        }
    }
    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__err_q) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__state_d = 0x00eeU;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__kmac_done = 1U;
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_kmac_if__DOT__u_prim_sync_reqack_data_in__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_handshake 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_kmac_if__DOT__kmac_ack) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_kmac_if__DOT__u_prim_sync_reqack_data_in__DOT__u_prim_sync_reqack__DOT__dst_req_o));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
        = (0x0000003fU & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q) 
                          + (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__cnt_en)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
        = (0x0000003fU & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                          - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__cnt_en)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__checker_rom_index 
        = (0x00001fffU & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__gen_fsm_scramble_enabled__DOT__u_checker_fsm__DOT__u_counter__DOT__addr_q) 
                          + (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rom_ctrl__DOT__gen_fsm_scramble_enabled__DOT__u_checker_fsm__DOT__u_counter__DOT__go)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__u_op_state__DOT__state_d 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__u_op_state__DOT__u_state_regs__DOT__state_raw;
    if ((0x95U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__u_op_state__DOT__u_state_regs__DOT__state_raw))) {
        if (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__adv_req) 
             | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__dis_req))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__u_op_state__DOT__state_d = 0x28U;
        } else if (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__id_req) 
                    | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_req))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__u_op_state__DOT__state_d = 0xfeU;
        }
    } else if ((0x28U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__u_op_state__DOT__u_state_regs__DOT__state_raw))) {
        if (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__kmac_done) 
             & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__cdi_cnt))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__u_op_state__DOT__state_d = 0x95U;
        } else if (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__kmac_done) 
                    & VL_GTS_III(32, 1U, (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__cdi_cnt)))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__u_op_state__DOT__state_d = 0x43U;
        }
    } else if ((0x43U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__u_op_state__DOT__u_state_regs__DOT__state_raw))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__u_op_state__DOT__state_d = 0x28U;
    } else if ((0xfeU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__u_op_state__DOT__u_state_regs__DOT__state_raw))) {
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__kmac_done) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__u_op_state__DOT__state_d = 0x95U;
        }
    }
    if (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__valid_op) 
         & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__kmac_done))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__kmac_data[0U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x0000000dU] 
                << 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x0000000cU] 
                                   >> 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__kmac_data[1U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x0000000eU] 
                << 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x0000000dU] 
                                   >> 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__kmac_data[2U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x0000000fU] 
                << 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x0000000eU] 
                                   >> 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__kmac_data[3U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000010U] 
                << 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x0000000fU] 
                                   >> 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__kmac_data[4U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000011U] 
                << 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000010U] 
                                   >> 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__kmac_data[5U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000012U] 
                << 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000011U] 
                                   >> 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__kmac_data[6U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000013U] 
                << 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000012U] 
                                   >> 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__kmac_data[7U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000014U] 
                << 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000013U] 
                                   >> 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__kmac_data[8U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000015U] 
                << 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000014U] 
                                   >> 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__kmac_data[9U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000016U] 
                << 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000015U] 
                                   >> 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__kmac_data[0x0000000aU] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000017U] 
                << 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000016U] 
                                   >> 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__kmac_data[0x0000000bU] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000018U] 
                << 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x00000017U] 
                                   >> 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__kmac_data[0x0000000cU] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[1U] 
                << 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0U] 
                                   >> 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__kmac_data[0x0000000dU] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[2U] 
                << 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[1U] 
                                   >> 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__kmac_data[0x0000000eU] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[3U] 
                << 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[2U] 
                                   >> 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__kmac_data[0x0000000fU] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[4U] 
                << 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[3U] 
                                   >> 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__kmac_data[0x00000010U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[5U] 
                << 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[4U] 
                                   >> 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__kmac_data[0x00000011U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[6U] 
                << 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[5U] 
                                   >> 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__kmac_data[0x00000012U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[7U] 
                << 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[6U] 
                                   >> 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__kmac_data[0x00000013U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[8U] 
                << 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[7U] 
                                   >> 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__kmac_data[0x00000014U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[9U] 
                << 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[8U] 
                                   >> 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__kmac_data[0x00000015U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x0000000aU] 
                << 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[9U] 
                                   >> 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__kmac_data[0x00000016U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x0000000bU] 
                << 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x0000000aU] 
                                   >> 1U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__kmac_data[0x00000017U] 
            = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x0000000cU] 
                << 0x0000001fU) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_kmac__DOT____Vcellout__u_app_intf__app_o[0x0000000bU] 
                                   >> 1U));
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__kmac_data[0U] 
            = (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__data_rand);
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__kmac_data[1U] 
            = (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__data_rand);
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__kmac_data[2U] 
            = (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__data_rand);
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__kmac_data[3U] 
            = (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__data_rand);
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__kmac_data[4U] 
            = (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__data_rand);
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__kmac_data[5U] 
            = (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__data_rand);
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__kmac_data[6U] 
            = (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__data_rand);
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__kmac_data[7U] 
            = (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__data_rand);
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__kmac_data[8U] 
            = (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__data_rand);
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__kmac_data[9U] 
            = (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__data_rand);
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__kmac_data[0x0000000aU] 
            = (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__data_rand);
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__kmac_data[0x0000000bU] 
            = (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__data_rand);
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__kmac_data[0x0000000cU] 
            = (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__data_rand 
                       >> 0x00000020U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__kmac_data[0x0000000dU] 
            = (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__data_rand 
                       >> 0x00000020U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__kmac_data[0x0000000eU] 
            = (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__data_rand 
                       >> 0x00000020U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__kmac_data[0x0000000fU] 
            = (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__data_rand 
                       >> 0x00000020U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__kmac_data[0x00000010U] 
            = (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__data_rand 
                       >> 0x00000020U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__kmac_data[0x00000011U] 
            = (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__data_rand 
                       >> 0x00000020U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__kmac_data[0x00000012U] 
            = (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__data_rand 
                       >> 0x00000020U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__kmac_data[0x00000013U] 
            = (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__data_rand 
                       >> 0x00000020U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__kmac_data[0x00000014U] 
            = (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__data_rand 
                       >> 0x00000020U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__kmac_data[0x00000015U] 
            = (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__data_rand 
                       >> 0x00000020U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__kmac_data[0x00000016U] 
            = (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__data_rand 
                       >> 0x00000020U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__kmac_data[0x00000017U] 
            = (IData)((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__data_rand 
                       >> 0x00000020U));
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__op_update = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__op_ack = 0U;
    if ((0x95U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__u_op_state__DOT__u_state_regs__DOT__state_raw))) {
        if ((0x28U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__u_op_state__DOT__u_state_regs__DOT__state_raw))) {
            if ((1U & (~ ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__kmac_done) 
                          & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__cdi_cnt))))) {
                if (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__kmac_done) 
                     & VL_GTS_III(32, 1U, (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__cdi_cnt)))) {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__op_update = 1U;
                }
            }
            if (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__kmac_done) 
                 & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__cdi_cnt))) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__op_ack = 1U;
            }
        } else if ((0x43U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__u_op_state__DOT__u_state_regs__DOT__state_raw))) {
            if ((0xfeU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__u_op_state__DOT__u_state_regs__DOT__state_raw))) {
                if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__kmac_done) {
                    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__op_ack = 1U;
                }
            } else {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__op_ack = 1U;
            }
        }
    }
    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_kmac_if__DOT__u_prim_sync_reqack_data_in__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_fsm_cs) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_kmac_if__DOT__u_prim_sync_reqack_data_in__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 1U;
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_kmac_if__DOT__u_prim_sync_reqack_data_in__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_handshake) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_kmac_if__DOT__u_prim_sync_reqack_data_in__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 0U;
        }
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_kmac_if__DOT__u_prim_sync_reqack_data_in__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 0U;
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_kmac_if__DOT__u_prim_sync_reqack_data_in__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_handshake) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_kmac_if__DOT__u_prim_sync_reqack_data_in__DOT__u_prim_sync_reqack__DOT__gen_nrz_hs_protocol__DOT__dst_fsm_ns = 1U;
        }
    }
    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__cnt_clr) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 0U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 0x0000001fU;
    } else if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__cnt_set) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
            = (0x0000001fU & ((IData)(0x1fU) - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__rounds)));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
            = (0x0000001fU & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__rounds));
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
            = (0x0000001fU & (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__cnt_en) 
                               & (~ (0x0000001fU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q))))
                               ? (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__cnt_en) 
                                   & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt) 
                                      >> 5U)) ? 0x1fU
                                   : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt))
                               : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
            = (0x0000001fU & (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__cnt_en) 
                               & (0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)))
                               ? (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__cnt_en) 
                                   & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt) 
                                      >> 5U)) ? 0U : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt))
                               : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)));
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__kmac_data_truncated[0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__kmac_data[0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__kmac_data_truncated[1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__kmac_data[1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__kmac_data_truncated[2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__kmac_data[2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__kmac_data_truncated[3U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__kmac_data[3U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__kmac_data_truncated[4U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__kmac_data[4U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__kmac_data_truncated[5U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__kmac_data[5U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__kmac_data_truncated[6U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__kmac_data[6U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__kmac_data_truncated[7U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__kmac_data[7U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__kmac_data_truncated[8U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__kmac_data[0x0000000cU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__kmac_data_truncated[9U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__kmac_data[0x0000000dU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__kmac_data_truncated[0x0000000aU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__kmac_data[0x0000000eU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__kmac_data_truncated[0x0000000bU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__kmac_data[0x0000000fU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__kmac_data_truncated[0x0000000cU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__kmac_data[0x00000010U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__kmac_data_truncated[0x0000000dU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__kmac_data[0x00000011U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__kmac_data_truncated[0x0000000eU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__kmac_data[0x00000012U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__kmac_data_truncated[0x0000000fU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__kmac_data[0x00000013U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__u_cnt__DOT__incr_en_i 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__op_update) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__random_req));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__u_cnt__DOT__clr_i 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__op_ack) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__random_ack));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__dis_state 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__op_ack) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__dis_req));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT____VdfgRegularize_ha40fb8ef_0_2 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__op_ack) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__op_update));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT__u_start__DOT__de 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__op_req)
            ? (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__op_ack)
            : ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__init) 
               | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__invalid_op)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__invalid_kmac_out 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__op_update) 
            | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__op_ack)) 
           & ((~ ([&]() {
                        vlSelfRef.__Vfunc_valid_data_chk__2042__value[0U] 
                            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__kmac_data_truncated[0U];
                        vlSelfRef.__Vfunc_valid_data_chk__2042__value[1U] 
                            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__kmac_data_truncated[1U];
                        vlSelfRef.__Vfunc_valid_data_chk__2042__value[2U] 
                            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__kmac_data_truncated[2U];
                        vlSelfRef.__Vfunc_valid_data_chk__2042__value[3U] 
                            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__kmac_data_truncated[3U];
                        vlSelfRef.__Vfunc_valid_data_chk__2042__value[4U] 
                            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__kmac_data_truncated[4U];
                        vlSelfRef.__Vfunc_valid_data_chk__2042__value[5U] 
                            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__kmac_data_truncated[5U];
                        vlSelfRef.__Vfunc_valid_data_chk__2042__value[6U] 
                            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__kmac_data_truncated[6U];
                        vlSelfRef.__Vfunc_valid_data_chk__2042__value[7U] 
                            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__kmac_data_truncated[7U];
                        vlSelfRef.__Vfunc_valid_data_chk__2042__Vfuncout 
                            = ((0U != (((((((vlSelfRef.__Vfunc_valid_data_chk__2042__value[0U] 
                                             | vlSelfRef.__Vfunc_valid_data_chk__2042__value[1U]) 
                                            | vlSelfRef.__Vfunc_valid_data_chk__2042__value[2U]) 
                                           | vlSelfRef.__Vfunc_valid_data_chk__2042__value[3U]) 
                                          | vlSelfRef.__Vfunc_valid_data_chk__2042__value[4U]) 
                                         | vlSelfRef.__Vfunc_valid_data_chk__2042__value[5U]) 
                                        | vlSelfRef.__Vfunc_valid_data_chk__2042__value[6U]) 
                                       | vlSelfRef.__Vfunc_valid_data_chk__2042__value[7U])) 
                               & (~ (0xffffffffU == 
                                     (((((((vlSelfRef.__Vfunc_valid_data_chk__2042__value[0U] 
                                            & vlSelfRef.__Vfunc_valid_data_chk__2042__value[1U]) 
                                           & vlSelfRef.__Vfunc_valid_data_chk__2042__value[2U]) 
                                          & vlSelfRef.__Vfunc_valid_data_chk__2042__value[3U]) 
                                         & vlSelfRef.__Vfunc_valid_data_chk__2042__value[4U]) 
                                        & vlSelfRef.__Vfunc_valid_data_chk__2042__value[5U]) 
                                       & vlSelfRef.__Vfunc_valid_data_chk__2042__value[6U]) 
                                      & vlSelfRef.__Vfunc_valid_data_chk__2042__value[7U]))));
                    }(), (IData)(vlSelfRef.__Vfunc_valid_data_chk__2042__Vfuncout))) 
              | (~ ([&]() {
                        vlSelfRef.__Vfunc_valid_data_chk__2043__value[0U] 
                            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__kmac_data_truncated[8U];
                        vlSelfRef.__Vfunc_valid_data_chk__2043__value[1U] 
                            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__kmac_data_truncated[9U];
                        vlSelfRef.__Vfunc_valid_data_chk__2043__value[2U] 
                            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__kmac_data_truncated[0x0000000aU];
                        vlSelfRef.__Vfunc_valid_data_chk__2043__value[3U] 
                            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__kmac_data_truncated[0x0000000bU];
                        vlSelfRef.__Vfunc_valid_data_chk__2043__value[4U] 
                            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__kmac_data_truncated[0x0000000cU];
                        vlSelfRef.__Vfunc_valid_data_chk__2043__value[5U] 
                            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__kmac_data_truncated[0x0000000dU];
                        vlSelfRef.__Vfunc_valid_data_chk__2043__value[6U] 
                            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__kmac_data_truncated[0x0000000eU];
                        vlSelfRef.__Vfunc_valid_data_chk__2043__value[7U] 
                            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__kmac_data_truncated[0x0000000fU];
                        vlSelfRef.__Vfunc_valid_data_chk__2043__Vfuncout 
                            = ((0U != (((((((vlSelfRef.__Vfunc_valid_data_chk__2043__value[0U] 
                                             | vlSelfRef.__Vfunc_valid_data_chk__2043__value[1U]) 
                                            | vlSelfRef.__Vfunc_valid_data_chk__2043__value[2U]) 
                                           | vlSelfRef.__Vfunc_valid_data_chk__2043__value[3U]) 
                                          | vlSelfRef.__Vfunc_valid_data_chk__2043__value[4U]) 
                                         | vlSelfRef.__Vfunc_valid_data_chk__2043__value[5U]) 
                                        | vlSelfRef.__Vfunc_valid_data_chk__2043__value[6U]) 
                                       | vlSelfRef.__Vfunc_valid_data_chk__2043__value[7U])) 
                               & (~ (0xffffffffU == 
                                     (((((((vlSelfRef.__Vfunc_valid_data_chk__2043__value[0U] 
                                            & vlSelfRef.__Vfunc_valid_data_chk__2043__value[1U]) 
                                           & vlSelfRef.__Vfunc_valid_data_chk__2043__value[2U]) 
                                          & vlSelfRef.__Vfunc_valid_data_chk__2043__value[3U]) 
                                         & vlSelfRef.__Vfunc_valid_data_chk__2043__value[4U]) 
                                        & vlSelfRef.__Vfunc_valid_data_chk__2043__value[5U]) 
                                       & vlSelfRef.__Vfunc_valid_data_chk__2043__value[6U]) 
                                      & vlSelfRef.__Vfunc_valid_data_chk__2043__value[7U]))));
                    }(), (IData)(vlSelfRef.__Vfunc_valid_data_chk__2043__Vfuncout)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__u_cnt__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
        = (0x0000000fU & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__u_cnt__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q) 
                          - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__u_cnt__DOT__incr_en_i)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
        = (0x0000000fU & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                          + (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__u_cnt__DOT__incr_en_i)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT__u_start__DOT__qe 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT__u_start__DOT__de) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT__u_start__DOT__we));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT__u_intr_state__DOT__de 
        = (((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_53.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
             >> 0x00000018U) & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT__u_intr_test__DOT__we)) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT__u_start__DOT__de));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__u_data_en__DOT__state_d 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__u_data_en__DOT__u_state_regs__DOT__state_raw;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__data_fsm_err = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__data_hw_en = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__data_sw_en = 0U;
    if ((0x0210U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__u_data_en__DOT__u_state_regs__DOT__state_raw))) {
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__adv_en) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__u_data_en__DOT__state_d = 0x009fU;
        } else if ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__id_en) 
                     | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__gen_en)) 
                    & ([&]() {
                        vlSelfRef.__Vfunc_mubi4_test_true_strict__2047__val 
                            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__u_hw_sel__DOT__mubi_int;
                        vlSelfRef.__Vfunc_mubi4_test_true_strict__2047__Vfuncout 
                            = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__2047__val));
                    }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__2047__Vfuncout)))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__u_data_en__DOT__state_d = 0x0064U;
        } else if ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__id_en) 
                     | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__gen_en)) 
                    & ([&]() {
                        vlSelfRef.__Vfunc_mubi4_test_false_strict__2048__val 
                            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__u_hw_sel__DOT__mubi_int;
                        vlSelfRef.__Vfunc_mubi4_test_false_strict__2048__Vfuncout 
                            = (9U == (IData)(vlSelfRef.__Vfunc_mubi4_test_false_strict__2048__val));
                    }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_false_strict__2048__Vfuncout)))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__u_data_en__DOT__state_d = 0x03aeU;
        } else if (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__id_en) 
                    | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__gen_en))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__u_data_en__DOT__state_d = 0x009fU;
        }
    } else if ((0x0064U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__u_data_en__DOT__u_state_regs__DOT__state_raw))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__data_hw_en = 1U;
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT__u_start__DOT__de) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__u_data_en__DOT__state_d = 0x01f3U;
        } else if (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__adv_en) 
                    | ([&]() {
                        vlSelfRef.__Vfunc_mubi4_test_false_loose__2049__val 
                            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__u_hw_sel__DOT__mubi_int;
                        vlSelfRef.__Vfunc_mubi4_test_false_loose__2049__Vfuncout 
                            = (6U != (IData)(vlSelfRef.__Vfunc_mubi4_test_false_loose__2049__val));
                    }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_false_loose__2049__Vfuncout)))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__u_data_en__DOT__state_d = 0x009fU;
        }
    } else if ((0x03aeU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__u_data_en__DOT__u_state_regs__DOT__state_raw))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__data_sw_en = 1U;
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT__u_start__DOT__de) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__u_data_en__DOT__state_d = 0x01f3U;
        } else if (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__adv_en) 
                    | ([&]() {
                        vlSelfRef.__Vfunc_mubi4_test_true_loose__2050__val 
                            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__u_hw_sel__DOT__mubi_int;
                        vlSelfRef.__Vfunc_mubi4_test_true_loose__2050__Vfuncout 
                            = (9U != (IData)(vlSelfRef.__Vfunc_mubi4_test_true_loose__2050__val));
                    }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_loose__2050__Vfuncout)))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__u_data_en__DOT__state_d = 0x009fU;
        }
    } else if ((0x009fU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__u_data_en__DOT__u_state_regs__DOT__state_raw))) {
        if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT__u_start__DOT__de) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__u_data_en__DOT__state_d = 0x01f3U;
        }
    } else if ((0x01f3U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__u_data_en__DOT__u_state_regs__DOT__state_raw))) {
        if ((1U & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT____Vcellout__u_start__q)))) {
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__u_data_en__DOT__state_d = 0x0210U;
        }
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__data_fsm_err = 1U;
    }
    if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I(((((0x01f3U 
                                              == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__u_data_en__DOT__u_state_regs__DOT__state_raw)) 
                                             << 4U) 
                                            | (((0x009fU 
                                                 == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__u_data_en__DOT__u_state_regs__DOT__state_raw)) 
                                                << 3U) 
                                               | ((0x03aeU 
                                                   == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__u_data_en__DOT__u_state_regs__DOT__state_raw)) 
                                                  << 2U))) 
                                           | (((0x0064U 
                                                == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__u_data_en__DOT__u_state_regs__DOT__state_raw)) 
                                               << 1U) 
                                              | (0x0210U 
                                                 == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__u_data_en__DOT__u_state_regs__DOT__state_raw)))))))))) {
        if ((0U != ((((0x01f3U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__u_data_en__DOT__u_state_regs__DOT__state_raw)) 
                      << 4U) | (((0x009fU == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__u_data_en__DOT__u_state_regs__DOT__state_raw)) 
                                 << 3U) | ((0x03aeU 
                                            == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__u_data_en__DOT__u_state_regs__DOT__state_raw)) 
                                           << 2U))) 
                    | (((0x0064U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__u_data_en__DOT__u_state_regs__DOT__state_raw)) 
                        << 1U) | (0x0210U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__u_data_en__DOT__u_state_regs__DOT__state_raw)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: keymgr_data_en_state.sv:83: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_keymgr.u_ctrl.u_data_en: unique case, but multiple matches found for '10'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),10,
                             (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__u_data_en__DOT__u_state_regs__DOT__state_raw));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/keymgr_data_en_state.sv", 83, "");
            }
        }
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__u_err__DOT__err_vld 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT__u_start__DOT__de) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__op_update));
    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__u_cnt__DOT__clr_i) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__u_cnt__DOT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 7U;
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i = 0U;
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__u_cnt__DOT__gen_cnts__BRA__1__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
            = (7U & (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__u_cnt__DOT__incr_en_i) 
                      & (0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__u_cnt__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)))
                      ? (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__u_cnt__DOT__incr_en_i) 
                          & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__u_cnt__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt) 
                             >> 3U)) ? 0U : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__u_cnt__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt))
                      : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__u_cnt__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q)));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
            = (7U & (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__u_cnt__DOT__incr_en_i) 
                      & (~ (7U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))))
                      ? (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__u_cnt__DOT__incr_en_i) 
                          & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt) 
                             >> 3U)) ? 7U : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt))
                      : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)));
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT__u_intr_state__DOT__qe 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT__u_intr_state__DOT__de) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT__u_intr_state__DOT__we));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT__u_intr_state__DOT__d 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT__u_intr_state__DOT__de) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT____Vcellout__u_intr_state__q));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__u_err__DOT__async_fault_d 
        = (((((4U & ((((~ (VL_REDXOR_8(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__1__KET____DOT__gen_ecc_loop_shares__BRA__1__KET____DOT__gen_ecc_loop_words__BRA__3__KET____DOT__u_dec__DOT__syndrome_o) 
                           | vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__1__KET____DOT__gen_ecc_loop_shares__BRA__1__KET____DOT__gen_ecc_loop_words__BRA__3__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                           [0U])) | VL_REDXOR_8(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__1__KET____DOT__gen_ecc_loop_shares__BRA__1__KET____DOT__gen_ecc_loop_words__BRA__3__KET____DOT__u_dec__DOT__syndrome_o)) 
                      | (((~ (VL_REDXOR_8(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__1__KET____DOT__gen_ecc_loop_shares__BRA__1__KET____DOT__gen_ecc_loop_words__BRA__2__KET____DOT__u_dec__DOT__syndrome_o) 
                              | vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__1__KET____DOT__gen_ecc_loop_shares__BRA__1__KET____DOT__gen_ecc_loop_words__BRA__2__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                              [0U])) | VL_REDXOR_8(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__1__KET____DOT__gen_ecc_loop_shares__BRA__1__KET____DOT__gen_ecc_loop_words__BRA__2__KET____DOT__u_dec__DOT__syndrome_o)) 
                         | (((~ (VL_REDXOR_8(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__1__KET____DOT__gen_ecc_loop_shares__BRA__1__KET____DOT__gen_ecc_loop_words__BRA__1__KET____DOT__u_dec__DOT__syndrome_o) 
                                 | vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__1__KET____DOT__gen_ecc_loop_shares__BRA__1__KET____DOT__gen_ecc_loop_words__BRA__1__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                 [0U])) | VL_REDXOR_8(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__1__KET____DOT__gen_ecc_loop_shares__BRA__1__KET____DOT__gen_ecc_loop_words__BRA__1__KET____DOT__u_dec__DOT__syndrome_o)) 
                            | (((~ (VL_REDXOR_8(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__1__KET____DOT__gen_ecc_loop_shares__BRA__1__KET____DOT__gen_ecc_loop_words__BRA__0__KET____DOT__u_dec__DOT__syndrome_o) 
                                    | vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__1__KET____DOT__gen_ecc_loop_shares__BRA__1__KET____DOT__gen_ecc_loop_words__BRA__0__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                    [0U])) | VL_REDXOR_8(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__1__KET____DOT__gen_ecc_loop_shares__BRA__1__KET____DOT__gen_ecc_loop_words__BRA__0__KET____DOT__u_dec__DOT__syndrome_o)) 
                               | (((~ (VL_REDXOR_8(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__1__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__3__KET____DOT__u_dec__DOT__syndrome_o) 
                                       | vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__1__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__3__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                       [0U])) | VL_REDXOR_8(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__1__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__3__KET____DOT__u_dec__DOT__syndrome_o)) 
                                  | (((~ (VL_REDXOR_8(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__1__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__2__KET____DOT__u_dec__DOT__syndrome_o) 
                                          | vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__1__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__2__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                          [0U])) | 
                                      VL_REDXOR_8(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__1__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__2__KET____DOT__u_dec__DOT__syndrome_o)) 
                                     | (((~ (VL_REDXOR_8(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__1__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__1__KET____DOT__u_dec__DOT__syndrome_o) 
                                             | vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__1__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__1__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                             [0U])) 
                                         | VL_REDXOR_8(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__1__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__1__KET____DOT__u_dec__DOT__syndrome_o)) 
                                        | (((~ (VL_REDXOR_8(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__1__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__0__KET____DOT__u_dec__DOT__syndrome_o) 
                                                | vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__1__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__0__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                [0U])) 
                                            | VL_REDXOR_8(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__1__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__0__KET____DOT__u_dec__DOT__syndrome_o)) 
                                           | (((~ (
                                                   VL_REDXOR_8(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__1__KET____DOT__gen_ecc_loop_words__BRA__3__KET____DOT__u_dec__DOT__syndrome_o) 
                                                   | vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__1__KET____DOT__gen_ecc_loop_words__BRA__3__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                   [0U])) 
                                               | VL_REDXOR_8(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__1__KET____DOT__gen_ecc_loop_words__BRA__3__KET____DOT__u_dec__DOT__syndrome_o)) 
                                              | (((~ 
                                                   (VL_REDXOR_8(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__1__KET____DOT__gen_ecc_loop_words__BRA__2__KET____DOT__u_dec__DOT__syndrome_o) 
                                                    | vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__1__KET____DOT__gen_ecc_loop_words__BRA__2__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                    [0U])) 
                                                  | VL_REDXOR_8(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__1__KET____DOT__gen_ecc_loop_words__BRA__2__KET____DOT__u_dec__DOT__syndrome_o)) 
                                                 | (((~ 
                                                      (VL_REDXOR_8(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__1__KET____DOT__gen_ecc_loop_words__BRA__1__KET____DOT__u_dec__DOT__syndrome_o) 
                                                       | vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__1__KET____DOT__gen_ecc_loop_words__BRA__1__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                       [0U])) 
                                                     | VL_REDXOR_8(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__1__KET____DOT__gen_ecc_loop_words__BRA__1__KET____DOT__u_dec__DOT__syndrome_o)) 
                                                    | (((~ 
                                                         (VL_REDXOR_8(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__1__KET____DOT__gen_ecc_loop_words__BRA__0__KET____DOT__u_dec__DOT__syndrome_o) 
                                                          | vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__1__KET____DOT__gen_ecc_loop_words__BRA__0__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                          [0U])) 
                                                        | VL_REDXOR_8(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__1__KET____DOT__gen_ecc_loop_words__BRA__0__KET____DOT__u_dec__DOT__syndrome_o)) 
                                                       | (((~ 
                                                            (VL_REDXOR_8(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__3__KET____DOT__u_dec__DOT__syndrome_o) 
                                                             | vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__3__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                             [0U])) 
                                                           | VL_REDXOR_8(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__3__KET____DOT__u_dec__DOT__syndrome_o)) 
                                                          | (((~ 
                                                               (VL_REDXOR_8(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__2__KET____DOT__u_dec__DOT__syndrome_o) 
                                                                | vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__2__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                                [0U])) 
                                                              | VL_REDXOR_8(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__2__KET____DOT__u_dec__DOT__syndrome_o)) 
                                                             | (((~ 
                                                                  (VL_REDXOR_8(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__1__KET____DOT__u_dec__DOT__syndrome_o) 
                                                                   | vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__1__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                                   [0U])) 
                                                                 | VL_REDXOR_8(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__1__KET____DOT__u_dec__DOT__syndrome_o)) 
                                                                | ((~ 
                                                                    (VL_REDXOR_8(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__0__KET____DOT__u_dec__DOT__syndrome_o) 
                                                                     | vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__0__KET____DOT__u_dec__DOT____VdfgBinToOneHot_Tab_hd4ed1e0a_0_0
                                                                     [0U])) 
                                                                   | VL_REDXOR_8(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_ecc_loop_cdi__BRA__0__KET____DOT__gen_ecc_loop_shares__BRA__0__KET____DOT__gen_ecc_loop_words__BRA__0__KET____DOT__u_dec__DOT__syndrome_o))))))))))))))))) 
                     << 2U)) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__sideload_fsm_err) 
                                 << 1U) | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reseed_ctrl__DOT__u_reseed_cnt.__PVT__err_q))) 
             << 8U) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__u_cnt__DOT__err_q) 
                        << 7U) | ((((((~ ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__advance_sel) 
                                          | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__disable_sel))) 
                                      & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__adv_en)) 
                                     | ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__gen_op)) 
                                        & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__gen_en))) 
                                    | ((0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT__u_control_shadowed_operation__DOT__committed_q)) 
                                       & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__vld_state_change_q))) 
                                   << 6U) | ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__state_intg_err_d) 
                                               | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__state_intg_err_q)) 
                                              | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__data_fsm_err) 
                                                 | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__op_fsm_err))) 
                                             << 5U)))) 
           | (((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT__u_control_shadowed_operation__DOT__err_storage) 
                 | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT__u_control_shadowed_cdi_sel.err_storage) 
                    | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT__u_control_shadowed_dest_sel.err_storage) 
                       | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT__u_reseed_interval_shadowed__DOT__err_storage) 
                          | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT__u_max_creator_key_ver_shadowed.err_storage) 
                             | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT__u_max_owner_int_key_ver_shadowed__DOT__err_storage) 
                                | (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT__u_max_owner_key_ver_shadowed.err_storage))))))) 
                << 4U) | ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT__err_q) 
                            | ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT__u_chk.err_o) 
                               | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_o))) 
                           << 3U) | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_kmac_if__DOT__kmac_done_err_q) 
                                     << 2U))) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__kmac_fsm_err) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__kmac_cmd_err))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__u_err__DOT__sync_fault_d 
        = ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__u_err__DOT__err_vld) 
             & (0U != ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_sideload_ctrl__DOT__valid_tracking_q)) 
                       & (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_sideload_ctrl__DOT__u_otbn_key__DOT__valid_o) 
                           << 2U) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_sideload_ctrl__DOT__u_kmac_key__DOT__valid_o) 
                                      << 1U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_control__DOT__key_sideload_valid_i)))))) 
            << 2U) | ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__u_err__DOT__err_vld) 
                        & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__invalid_kmac_out)) 
                       << 1U) | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__u_err__DOT__err_vld) 
                                 & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__kmac_op_err))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT__u_intr_state__DOT__wr_data 
        = ((~ ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_sm1_53.__PVT__u_devicefifo__DOT__reqfifo__DOT__rdata_o[0U] 
                >> 0x00000018U) & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT__u_intr_state__DOT__we))) 
           & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT__u_intr_state__DOT__de)
               ? (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT__u_intr_state__DOT__d)
               : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT____Vcellout__u_intr_state__q)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__async_fault 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__u_err__DOT__async_fault_q) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__u_err__DOT__async_fault_d));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__sync_fault 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__u_err__DOT__sync_fault_q) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__u_err__DOT__sync_fault_d));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__op_fault_err 
        = ((0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__sync_fault)) 
           | (0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__async_fault)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT__u_fault_status_kmac_op__DOT__de 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT__u_start__DOT__de) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__sync_fault));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT__u_fault_status_kmac_out__DOT__de 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT__u_start__DOT__de) 
           & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__sync_fault) 
              >> 1U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT__u_fault_status_side_ctrl_sel__DOT__de 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT__u_start__DOT__de) 
           & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__sync_fault) 
              >> 2U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__fault_code 
        = ((((2U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__async_fault) 
                    >> 9U)) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT__u_fault_status_side_ctrl_sel__DOT__de)) 
            << 0x0000000cU) | ((0x00000fe0U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__async_fault) 
                                               << 2U)) 
                               | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT__u_fault_status_kmac_out__DOT__de) 
                                   << 4U) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_reg__DOT__u_fault_status_kmac_op__DOT__de) 
                                              << 3U) 
                                             | (7U 
                                                & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_keymgr__DOT__u_ctrl__DOT__async_fault))))));
}

extern const VlWide<28>/*895:0*/ Vsim__ConstPool__CONST_ha2d15421_0;

void Vsim___024root___act_comb__TOP__21(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___act_comb__TOP__21\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__hw2reg[0U] 
        = Vsim__ConstPool__CONST_ha2d15421_0[0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__hw2reg[1U] 
        = Vsim__ConstPool__CONST_ha2d15421_0[1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__hw2reg[2U] 
        = Vsim__ConstPool__CONST_ha2d15421_0[2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__hw2reg[3U] 
        = Vsim__ConstPool__CONST_ha2d15421_0[3U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__hw2reg[4U] 
        = Vsim__ConstPool__CONST_ha2d15421_0[4U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__hw2reg[5U] 
        = Vsim__ConstPool__CONST_ha2d15421_0[5U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__hw2reg[6U] 
        = Vsim__ConstPool__CONST_ha2d15421_0[6U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__hw2reg[7U] 
        = Vsim__ConstPool__CONST_ha2d15421_0[7U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__hw2reg[8U] 
        = Vsim__ConstPool__CONST_ha2d15421_0[8U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__hw2reg[9U] 
        = Vsim__ConstPool__CONST_ha2d15421_0[9U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__hw2reg[0x0000000aU] 
        = Vsim__ConstPool__CONST_ha2d15421_0[0x0000000aU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__hw2reg[0x0000000bU] 
        = Vsim__ConstPool__CONST_ha2d15421_0[0x0000000bU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__hw2reg[0x0000000cU] 
        = Vsim__ConstPool__CONST_ha2d15421_0[0x0000000cU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__hw2reg[0x0000000dU] 
        = Vsim__ConstPool__CONST_ha2d15421_0[0x0000000dU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__hw2reg[0x0000000eU] 
        = Vsim__ConstPool__CONST_ha2d15421_0[0x0000000eU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__hw2reg[0x0000000fU] 
        = Vsim__ConstPool__CONST_ha2d15421_0[0x0000000fU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__hw2reg[0x00000010U] 
        = Vsim__ConstPool__CONST_ha2d15421_0[0x00000010U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__hw2reg[0x00000011U] 
        = Vsim__ConstPool__CONST_ha2d15421_0[0x00000011U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__hw2reg[0x00000012U] 
        = Vsim__ConstPool__CONST_ha2d15421_0[0x00000012U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__hw2reg[0x00000013U] 
        = Vsim__ConstPool__CONST_ha2d15421_0[0x00000013U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__hw2reg[0x00000014U] 
        = Vsim__ConstPool__CONST_ha2d15421_0[0x00000014U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__hw2reg[0x00000015U] 
        = Vsim__ConstPool__CONST_ha2d15421_0[0x00000015U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__hw2reg[0x00000016U] 
        = Vsim__ConstPool__CONST_ha2d15421_0[0x00000016U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__hw2reg[0x00000017U] 
        = Vsim__ConstPool__CONST_ha2d15421_0[0x00000017U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__hw2reg[0x00000018U] 
        = Vsim__ConstPool__CONST_ha2d15421_0[0x00000018U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__hw2reg[0x00000019U] 
        = Vsim__ConstPool__CONST_ha2d15421_0[0x00000019U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__hw2reg[0x0000001aU] 
        = Vsim__ConstPool__CONST_ha2d15421_0[0x0000001aU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__hw2reg[0x0000001bU] 
        = Vsim__ConstPool__CONST_ha2d15421_0[0x0000001bU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__hw2reg[0x0000001bU] 
        = ((0x0000ffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__hw2reg[0x0000001bU]) 
           | (0x00ff0000U & ((((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__lc_done_d) 
                                 << 3U) | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__lc_idle_d) 
                                           << 2U)) 
                               | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__ext_clock_switched) 
                                   << 1U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__trans_success_q))) 
                              << 0x00000014U) | (((
                                                   ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__trans_cnt_oflw_error_q) 
                                                    << 3U) 
                                                   | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__trans_invalid_error_q) 
                                                      << 2U)) 
                                                  | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__token_invalid_error_q) 
                                                      << 1U) 
                                                     | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__flash_rma_error_q))) 
                                                 << 0x00000010U))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__hw2reg[0x0000001bU] 
        = ((0x00ff0fffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__hw2reg[0x0000001bU]) 
           | (0x00ffffffU & (((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__fatal_prog_error_q) 
                                << 3U) | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__fatal_state_error_q) 
                                          << 2U)) | 
                              (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__fatal_bus_integ_error_q) 
                                << 1U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__otp_part_error_q))) 
                             << 0x0000000cU)));
    __Vtemp_1[0U] = (IData)((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__dec_lc_cnt)) 
                              << 0x00000020U) | (QData)((IData)(
                                                                (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__dec_lc_id_state) 
                                                                  << 0x0000001eU) 
                                                                 | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__dec_lc_id_state) 
                                                                     << 0x0000001cU) 
                                                                    | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__dec_lc_id_state) 
                                                                        << 0x0000001aU) 
                                                                       | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__dec_lc_id_state) 
                                                                           << 0x00000018U) 
                                                                          | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__dec_lc_id_state) 
                                                                              << 0x00000016U) 
                                                                             | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__dec_lc_id_state) 
                                                                                << 0x00000014U) 
                                                                                | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__dec_lc_id_state) 
                                                                                << 0x00000012U) 
                                                                                | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__dec_lc_id_state) 
                                                                                << 0x00000010U) 
                                                                                | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__dec_lc_id_state) 
                                                                                << 0x0000000eU) 
                                                                                | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__dec_lc_id_state) 
                                                                                << 0x0000000cU) 
                                                                                | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__dec_lc_id_state) 
                                                                                << 0x0000000aU) 
                                                                                | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__dec_lc_id_state) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__dec_lc_id_state) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__dec_lc_id_state) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__dec_lc_id_state) 
                                                                                << 2U) 
                                                                                | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__dec_lc_id_state))))))))))))))))))));
    __Vtemp_1[1U] = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_lc_ctrl_state_decode__DOT__dec_lc_state 
                      << 5U) | (IData)(((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__dec_lc_cnt)) 
                                          << 0x00000020U) 
                                         | (QData)((IData)(
                                                           (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__dec_lc_id_state) 
                                                             << 0x0000001eU) 
                                                            | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__dec_lc_id_state) 
                                                                << 0x0000001cU) 
                                                               | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__dec_lc_id_state) 
                                                                   << 0x0000001aU) 
                                                                  | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__dec_lc_id_state) 
                                                                      << 0x00000018U) 
                                                                     | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__dec_lc_id_state) 
                                                                         << 0x00000016U) 
                                                                        | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__dec_lc_id_state) 
                                                                            << 0x00000014U) 
                                                                           | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__dec_lc_id_state) 
                                                                               << 0x00000012U) 
                                                                              | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__dec_lc_id_state) 
                                                                                << 0x00000010U) 
                                                                                | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__dec_lc_id_state) 
                                                                                << 0x0000000eU) 
                                                                                | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__dec_lc_id_state) 
                                                                                << 0x0000000cU) 
                                                                                | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__dec_lc_id_state) 
                                                                                << 0x0000000aU) 
                                                                                | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__dec_lc_id_state) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__dec_lc_id_state) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__dec_lc_id_state) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__dec_lc_id_state) 
                                                                                << 2U) 
                                                                                | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__dec_lc_id_state))))))))))))))))))) 
                                        >> 0x00000020U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__hw2reg[0x00000012U] 
        = __Vtemp_1[0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__hw2reg[0x00000013U] 
        = __Vtemp_1[1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__hw2reg[0x00000014U] 
        = ((0xfffffff8U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__hw2reg[0x00000014U]) 
           | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_lc_ctrl_fsm__DOT__u_lc_ctrl_state_decode__DOT__dec_lc_state 
              >> 0x0000001bU));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__hw2reg[0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__otp_broadcast[8U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__hw2reg[1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__otp_broadcast[9U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__hw2reg[2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__otp_broadcast[0x0000000aU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__hw2reg[3U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__otp_broadcast[0x0000000bU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__hw2reg[4U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__otp_broadcast[0x0000000cU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__hw2reg[5U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__otp_broadcast[0x0000000dU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__hw2reg[6U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__otp_broadcast[0x0000000eU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__hw2reg[7U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__otp_broadcast[0x0000000fU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__hw2reg[8U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__otp_broadcast[0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__hw2reg[9U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__otp_broadcast[1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__hw2reg[0x0000000aU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__otp_broadcast[2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__hw2reg[0x0000000bU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__otp_broadcast[3U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__hw2reg[0x0000000cU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__otp_broadcast[4U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__hw2reg[0x0000000dU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__otp_broadcast[5U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__hw2reg[0x0000000eU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__otp_broadcast[6U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__hw2reg[0x0000000fU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_otp_ctrl__DOT__otp_broadcast[7U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__hw2reg[0x00000010U] = 0x01000000U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__hw2reg[0x00000011U] = 0x00024001U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_hw2reg[0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__hw2reg[0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_hw2reg[1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__hw2reg[1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_hw2reg[2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__hw2reg[2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_hw2reg[3U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__hw2reg[3U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_hw2reg[4U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__hw2reg[4U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_hw2reg[5U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__hw2reg[5U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_hw2reg[6U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__hw2reg[6U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_hw2reg[7U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__hw2reg[7U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_hw2reg[8U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__hw2reg[8U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_hw2reg[9U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__hw2reg[9U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_hw2reg[0x0000000aU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__hw2reg[0x0000000aU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_hw2reg[0x0000000bU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__hw2reg[0x0000000bU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_hw2reg[0x0000000cU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__hw2reg[0x0000000cU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_hw2reg[0x0000000dU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__hw2reg[0x0000000dU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_hw2reg[0x0000000eU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__hw2reg[0x0000000eU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_hw2reg[0x0000000fU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__hw2reg[0x0000000fU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_hw2reg[0x00000010U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__hw2reg[0x00000010U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_hw2reg[0x00000011U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__hw2reg[0x00000011U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_hw2reg[0x00000012U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__hw2reg[0x00000012U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_hw2reg[0x00000013U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__hw2reg[0x00000013U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_hw2reg[0x00000014U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__hw2reg[0x00000014U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_hw2reg[0x00000015U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__hw2reg[0x00000015U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_hw2reg[0x00000016U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__hw2reg[0x00000016U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_hw2reg[0x00000017U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__hw2reg[0x00000017U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_hw2reg[0x00000018U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__hw2reg[0x00000018U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_hw2reg[0x00000019U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__hw2reg[0x00000019U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_hw2reg[0x0000001aU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__hw2reg[0x0000001aU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_hw2reg[0x0000001bU] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__hw2reg[0x0000001bU];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_hw2reg[0x0000001bU] 
        = ((0x00fff00fU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_hw2reg[0x0000001bU]) 
           | (0x00ffffffU & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_claim_transition_if_q) 
                             << 4U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__hw2reg[0x0000001bU] 
        = ((0x00fff00fU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__hw2reg[0x0000001bU]) 
           | (0x00ffffffU & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__sw_claim_transition_if_q) 
                             << 4U)));
    if (([&]() {
                vlSelfRef.__Vfunc_mubi8_test_true_strict__236__val 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_claim_transition_if_q;
                vlSelfRef.__Vfunc_mubi8_test_true_strict__236__Vfuncout 
                    = (0x96U == (IData)(vlSelfRef.__Vfunc_mubi8_test_true_strict__236__val));
            }(), (IData)(vlSelfRef.__Vfunc_mubi8_test_true_strict__236__Vfuncout))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_hw2reg[0x00000016U] 
            = ((7U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_hw2reg[0x00000016U]) 
               | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__transition_target_q 
                  << 3U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_hw2reg[0x00000017U] 
            = (((6U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__transition_token_q[0U] 
                       << 1U)) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__transition_target_q 
                                  >> 0x0000001dU)) 
               | (0xfffffff8U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__transition_token_q[0U] 
                                 << 1U)));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_hw2reg[0x00000018U] 
            = (((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__transition_token_q[0U] 
                 >> 0x0000001fU) | (6U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__transition_token_q[1U] 
                                          << 1U))) 
               | (0xfffffff8U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__transition_token_q[1U] 
                                 << 1U)));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_hw2reg[0x00000019U] 
            = (((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__transition_token_q[1U] 
                 >> 0x0000001fU) | (6U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__transition_token_q[2U] 
                                          << 1U))) 
               | (0xfffffff8U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__transition_token_q[2U] 
                                 << 1U)));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_hw2reg[0x0000001aU] 
            = (((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__transition_token_q[2U] 
                 >> 0x0000001fU) | (6U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__transition_token_q[3U] 
                                          << 1U))) 
               | (0xfffffff8U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__transition_token_q[3U] 
                                 << 1U)));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_hw2reg[0x0000001bU] 
            = ((0x00fffff8U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_hw2reg[0x0000001bU]) 
               | (0x00ffffffU & ((4U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__use_ext_clock_q) 
                                        << 2U)) | (
                                                   vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__transition_token_q[3U] 
                                                   >> 0x0000001fU))));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_hw2reg[0x0000001bU] 
            = ((0x00fffff7U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_hw2reg[0x0000001bU]) 
               | (0x00ffffffU & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__lc_idle_d) 
                                 << 3U)));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_hw2reg[0x00000014U] 
            = ((7U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_hw2reg[0x00000014U]) 
               | ((IData)(((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__otp_vendor_test_ctrl_q)) 
                           << 0x00000020U)) << 3U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_hw2reg[0x00000015U] 
            = (((IData)(((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__otp_vendor_test_ctrl_q)) 
                         << 0x00000020U)) >> 0x0000001dU) 
               | ((IData)((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__otp_vendor_test_ctrl_q)) 
                            << 0x00000020U) >> 0x00000020U)) 
                  << 3U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_hw2reg[0x00000016U] 
            = ((0xfffffff8U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_hw2reg[0x00000016U]) 
               | ((IData)((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__otp_vendor_test_ctrl_q)) 
                            << 0x00000020U) >> 0x00000020U)) 
                  >> 0x0000001dU));
    } else if (([&]() {
                vlSelfRef.__Vfunc_mubi8_test_true_strict__237__val 
                    = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__sw_claim_transition_if_q;
                vlSelfRef.__Vfunc_mubi8_test_true_strict__237__Vfuncout 
                    = (0x96U == (IData)(vlSelfRef.__Vfunc_mubi8_test_true_strict__237__val));
            }(), (IData)(vlSelfRef.__Vfunc_mubi8_test_true_strict__237__Vfuncout))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__hw2reg[0x00000016U] 
            = ((7U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__hw2reg[0x00000016U]) 
               | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__transition_target_q 
                  << 3U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__hw2reg[0x00000017U] 
            = (((6U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__transition_token_q[0U] 
                       << 1U)) | (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__transition_target_q 
                                  >> 0x0000001dU)) 
               | (0xfffffff8U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__transition_token_q[0U] 
                                 << 1U)));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__hw2reg[0x00000018U] 
            = (((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__transition_token_q[0U] 
                 >> 0x0000001fU) | (6U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__transition_token_q[1U] 
                                          << 1U))) 
               | (0xfffffff8U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__transition_token_q[1U] 
                                 << 1U)));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__hw2reg[0x00000019U] 
            = (((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__transition_token_q[1U] 
                 >> 0x0000001fU) | (6U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__transition_token_q[2U] 
                                          << 1U))) 
               | (0xfffffff8U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__transition_token_q[2U] 
                                 << 1U)));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__hw2reg[0x0000001aU] 
            = (((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__transition_token_q[2U] 
                 >> 0x0000001fU) | (6U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__transition_token_q[3U] 
                                          << 1U))) 
               | (0xfffffff8U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__transition_token_q[3U] 
                                 << 1U)));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__hw2reg[0x0000001bU] 
            = ((0x00fffff8U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__hw2reg[0x0000001bU]) 
               | (0x00ffffffU & ((4U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__use_ext_clock_q) 
                                        << 2U)) | (
                                                   vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__transition_token_q[3U] 
                                                   >> 0x0000001fU))));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__hw2reg[0x0000001bU] 
            = ((0x00fffff7U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__hw2reg[0x0000001bU]) 
               | (0x00ffffffU & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__lc_idle_d) 
                                 << 3U)));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__hw2reg[0x00000014U] 
            = ((7U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__hw2reg[0x00000014U]) 
               | ((IData)(((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__otp_vendor_test_ctrl_q)) 
                           << 0x00000020U)) << 3U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__hw2reg[0x00000015U] 
            = (((IData)(((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__otp_vendor_test_ctrl_q)) 
                         << 0x00000020U)) >> 0x0000001dU) 
               | ((IData)((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__otp_vendor_test_ctrl_q)) 
                            << 0x00000020U) >> 0x00000020U)) 
                  << 3U));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__hw2reg[0x00000016U] 
            = ((0xfffffff8U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__hw2reg[0x00000016U]) 
               | ((IData)((((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__otp_vendor_test_ctrl_q)) 
                            << 0x00000020U) >> 0x00000020U)) 
                  >> 0x0000001dU));
    }
}

void Vsim___024root___act_comb__TOP__22(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___act_comb__TOP__22\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__sw_claim_transition_if_d 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__sw_claim_transition_if_q;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_claim_transition_if_d 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_claim_transition_if_q;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__transition_token_d[0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__transition_token_q[0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__transition_token_d[1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__transition_token_q[1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__transition_token_d[2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__transition_token_q[2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__transition_token_d[3U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__transition_token_q[3U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__transition_target_d 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__transition_target_q;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__transition_cmd = 0U;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__otp_vendor_test_ctrl_d 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__otp_vendor_test_ctrl_q;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__use_ext_clock_d 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__use_ext_clock_q;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__volatile_raw_unlock_d = 0U;
    if ((([&]() {
                    vlSelfRef.__Vfunc_mubi8_test_false_loose__238__val 
                        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__sw_claim_transition_if_q;
                    vlSelfRef.__Vfunc_mubi8_test_false_loose__238__Vfuncout 
                        = (0x96U != (IData)(vlSelfRef.__Vfunc_mubi8_test_false_loose__238__val));
                }(), (IData)(vlSelfRef.__Vfunc_mubi8_test_false_loose__238__Vfuncout)) 
         & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_tap_dmi.reg2hw[6U] 
            >> 0x0000000aU))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_claim_transition_if_d 
            = (0x000000ffU & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_tap_dmi.reg2hw[6U] 
                              >> 0x0000000bU));
    } else if ((([&]() {
                    vlSelfRef.__Vfunc_mubi8_test_false_loose__239__val 
                        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_claim_transition_if_q;
                    vlSelfRef.__Vfunc_mubi8_test_false_loose__239__Vfuncout 
                        = (0x96U != (IData)(vlSelfRef.__Vfunc_mubi8_test_false_loose__239__val));
                }(), (IData)(vlSelfRef.__Vfunc_mubi8_test_false_loose__239__Vfuncout)) 
                & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_regs.reg2hw[6U] 
                   >> 0x0000000aU))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__sw_claim_transition_if_d 
            = (0x000000ffU & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_regs.reg2hw[6U] 
                              >> 0x0000000bU));
    }
    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__lc_idle_d) {
        if (([&]() {
                    vlSelfRef.__Vfunc_mubi8_test_true_strict__240__val 
                        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__tap_dmi_claim_transition_if_q;
                    vlSelfRef.__Vfunc_mubi8_test_true_strict__240__Vfuncout 
                        = (0x96U == (IData)(vlSelfRef.__Vfunc_mubi8_test_true_strict__240__val));
                }(), (IData)(vlSelfRef.__Vfunc_mubi8_test_true_strict__240__Vfuncout))) {
            if ((0x00000010U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_tap_dmi.reg2hw[6U])) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__use_ext_clock_d 
                    = (1U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__use_ext_clock_d) 
                             | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_tap_dmi.reg2hw[6U] 
                                >> 5U)));
            }
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__transition_cmd 
                = (IData)((0x00000300U == (0x00000300U 
                                           & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_tap_dmi.reg2hw[6U])));
            if ((0x00000040U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_tap_dmi.reg2hw[6U])) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__volatile_raw_unlock_d 
                    = (1U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_tap_dmi.reg2hw[6U] 
                             >> 7U));
            }
            if ((1U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_tap_dmi.reg2hw[2U])) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__transition_token_d[0U] 
                    = ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_tap_dmi.reg2hw[3U] 
                        << 0x0000001fU) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_tap_dmi.reg2hw[2U] 
                                           >> 1U));
            }
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__p_csr_assign_inputs__DOT__unnamedblk1__DOT__k = 4U;
            if ((2U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_tap_dmi.reg2hw[1U])) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT____Vlvbound_h948aa267__0 
                    = (0x0000001fU & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_tap_dmi.reg2hw[1U] 
                                      >> 2U));
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__p_csr_assign_inputs__DOT__unnamedblk2__DOT__k = 6U;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__transition_target_d 
                    = ((0x3fffffe0U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__transition_target_d) 
                       | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT____Vlvbound_h948aa267__0));
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT____Vlvbound_h948aa267__0 
                    = (0x0000001fU & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_tap_dmi.reg2hw[1U] 
                                      >> 7U));
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__transition_target_d 
                    = ((0x3ffffc1fU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__transition_target_d) 
                       | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT____Vlvbound_h948aa267__0) 
                          << 5U));
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT____Vlvbound_h948aa267__0 
                    = (0x0000001fU & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_tap_dmi.reg2hw[1U] 
                                      >> 0x0000000cU));
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__transition_target_d 
                    = ((0x3fff83ffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__transition_target_d) 
                       | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT____Vlvbound_h948aa267__0) 
                          << 0x0000000aU));
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT____Vlvbound_h948aa267__0 
                    = (0x0000001fU & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_tap_dmi.reg2hw[1U] 
                                      >> 0x00000011U));
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__transition_target_d 
                    = ((0x3ff07fffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__transition_target_d) 
                       | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT____Vlvbound_h948aa267__0) 
                          << 0x0000000fU));
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT____Vlvbound_h948aa267__0 
                    = (0x0000001fU & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_tap_dmi.reg2hw[1U] 
                                      >> 0x00000016U));
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__transition_target_d 
                    = ((0x3e0fffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__transition_target_d) 
                       | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT____Vlvbound_h948aa267__0) 
                          << 0x00000014U));
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT____Vlvbound_h948aa267__0 
                    = (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_tap_dmi.reg2hw[1U] 
                       >> 0x0000001bU);
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__transition_target_d 
                    = ((0x01ffffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__transition_target_d) 
                       | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT____Vlvbound_h948aa267__0) 
                          << 0x00000019U));
            }
            if ((1U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_tap_dmi.reg2hw[0U])) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__otp_vendor_test_ctrl_d 
                    = ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_tap_dmi.reg2hw[1U] 
                        << 0x0000001fU) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_tap_dmi.reg2hw[0U] 
                                           >> 1U));
            }
            if ((2U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_tap_dmi.reg2hw[3U])) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__transition_token_d[1U] 
                    = ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_tap_dmi.reg2hw[4U] 
                        << 0x0000001eU) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_tap_dmi.reg2hw[3U] 
                                           >> 2U));
            }
            if ((4U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_tap_dmi.reg2hw[4U])) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__transition_token_d[2U] 
                    = ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_tap_dmi.reg2hw[5U] 
                        << 0x0000001dU) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_tap_dmi.reg2hw[4U] 
                                           >> 3U));
            }
            if ((8U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_tap_dmi.reg2hw[5U])) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__transition_token_d[3U] 
                    = ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_tap_dmi.reg2hw[6U] 
                        << 0x0000001cU) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_tap_dmi.reg2hw[5U] 
                                           >> 4U));
            }
        } else if (([&]() {
                    vlSelfRef.__Vfunc_mubi8_test_true_strict__241__val 
                        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__sw_claim_transition_if_q;
                    vlSelfRef.__Vfunc_mubi8_test_true_strict__241__Vfuncout 
                        = (0x96U == (IData)(vlSelfRef.__Vfunc_mubi8_test_true_strict__241__val));
                }(), (IData)(vlSelfRef.__Vfunc_mubi8_test_true_strict__241__Vfuncout))) {
            if ((0x00000010U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_regs.reg2hw[6U])) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__use_ext_clock_d 
                    = (1U & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__use_ext_clock_d) 
                             | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_regs.reg2hw[6U] 
                                >> 5U)));
            }
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__transition_cmd 
                = (IData)((0x00000300U == (0x00000300U 
                                           & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_regs.reg2hw[6U])));
            if ((0x00000040U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_regs.reg2hw[6U])) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__volatile_raw_unlock_d 
                    = (1U & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_regs.reg2hw[6U] 
                             >> 7U));
            }
            if ((1U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_regs.reg2hw[2U])) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__transition_token_d[0U] 
                    = ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_regs.reg2hw[3U] 
                        << 0x0000001fU) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_regs.reg2hw[2U] 
                                           >> 1U));
            }
            vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__p_csr_assign_inputs__DOT__unnamedblk3__DOT__k = 4U;
            if ((2U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_regs.reg2hw[1U])) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT____Vlvbound_h3bac17e3__0 
                    = (0x0000001fU & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_regs.reg2hw[1U] 
                                      >> 2U));
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__p_csr_assign_inputs__DOT__unnamedblk4__DOT__k = 6U;
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__transition_target_d 
                    = ((0x3fffffe0U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__transition_target_d) 
                       | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT____Vlvbound_h3bac17e3__0));
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT____Vlvbound_h3bac17e3__0 
                    = (0x0000001fU & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_regs.reg2hw[1U] 
                                      >> 7U));
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__transition_target_d 
                    = ((0x3ffffc1fU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__transition_target_d) 
                       | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT____Vlvbound_h3bac17e3__0) 
                          << 5U));
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT____Vlvbound_h3bac17e3__0 
                    = (0x0000001fU & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_regs.reg2hw[1U] 
                                      >> 0x0000000cU));
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__transition_target_d 
                    = ((0x3fff83ffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__transition_target_d) 
                       | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT____Vlvbound_h3bac17e3__0) 
                          << 0x0000000aU));
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT____Vlvbound_h3bac17e3__0 
                    = (0x0000001fU & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_regs.reg2hw[1U] 
                                      >> 0x00000011U));
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__transition_target_d 
                    = ((0x3ff07fffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__transition_target_d) 
                       | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT____Vlvbound_h3bac17e3__0) 
                          << 0x0000000fU));
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT____Vlvbound_h3bac17e3__0 
                    = (0x0000001fU & (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_regs.reg2hw[1U] 
                                      >> 0x00000016U));
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__transition_target_d 
                    = ((0x3e0fffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__transition_target_d) 
                       | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT____Vlvbound_h3bac17e3__0) 
                          << 0x00000014U));
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT____Vlvbound_h3bac17e3__0 
                    = (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_regs.reg2hw[1U] 
                       >> 0x0000001bU);
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__transition_target_d 
                    = ((0x01ffffffU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__transition_target_d) 
                       | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT____Vlvbound_h3bac17e3__0) 
                          << 0x00000019U));
            }
            if ((1U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_regs.reg2hw[0U])) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__otp_vendor_test_ctrl_d 
                    = ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_regs.reg2hw[1U] 
                        << 0x0000001fU) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_regs.reg2hw[0U] 
                                           >> 1U));
            }
            if ((2U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_regs.reg2hw[3U])) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__transition_token_d[1U] 
                    = ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_regs.reg2hw[4U] 
                        << 0x0000001eU) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_regs.reg2hw[3U] 
                                           >> 2U));
            }
            if ((4U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_regs.reg2hw[4U])) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__transition_token_d[2U] 
                    = ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_regs.reg2hw[5U] 
                        << 0x0000001dU) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_regs.reg2hw[4U] 
                                           >> 3U));
            }
            if ((8U & vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_regs.reg2hw[5U])) {
                vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__transition_token_d[3U] 
                    = ((vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_regs.reg2hw[6U] 
                        << 0x0000001cU) | (vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_lc_ctrl__DOT__u_reg_regs.reg2hw[5U] 
                                           >> 4U));
            }
        }
    }
}

void Vsim___024root___act_comb__TOP__23(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___act_comb__TOP__23\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_he50b618e_0_982 = ((
                                                   ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__prng_reseed_q) 
                                                    << 5U) 
                                                   | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__key_clear_q) 
                                                       << 4U) 
                                                      | ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_cipher_core__DOT__u_aes_cipher_control__DOT__data_out_clear_q) 
                                                         << 3U))) 
                                                  | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__prd_clearing_upd_ack) 
                                                      << 2U) 
                                                     | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_aes_core__DOT__u_aes_prng_clearing__DOT__u_lfsr__DOT__seed_en_i) 
                                                         << 1U) 
                                                        | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_aes__DOT__u_reg__DOT____Vcellout__u_status_output_lost__q))));
}

void Vsim___024root___act_comb__TOP__24(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___act_comb__TOP__24\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__phase 
        = ((1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_ctrl_arb__DOT__func_sel))
            ? 3U : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_hw_if__DOT__phase));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__muxed_addr 
        = ((2U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_ctrl_arb__DOT__func_sel))
            ? ((0U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_hw_if__DOT__phase))
                ? (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_hw_if__DOT__addr 
                   << 2U) : ((((0x00000100U & (vlSymsp->TOP__flash_ctrl_pkg.RmaWipeEntries
                                               [((4U 
                                                  >= (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_hw_if__DOT__u_wipe_idx_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))
                                                  ? (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_hw_if__DOT__u_wipe_idx_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)
                                                  : 0U)] 
                                               >> 0x0000000dU)) 
                               | (0x000000ffU & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_hw_if__DOT__u_page_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))) 
                              << 0x0000000bU) | (0x000007fcU 
                                                 & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_hw_if__DOT__u_word_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                                                    << 2U))))
            : ((1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_ctrl_arb__DOT__func_sel))
                ? vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT____Vcellout__u_addr__q
                : 0U));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_ctrl_prog__DOT__int_addr 
        = (0x0007ffffU & ((0x0003ffffU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__muxed_addr 
                                          >> 2U)) + (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_ctrl_prog__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_ctrl_rd__DOT__int_addr 
        = (0x0007ffffU & ((0x0003ffffU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__muxed_addr 
                                          >> 2U)) + (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_ctrl_rd__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)));
}

void Vsim___024root___act_comb__TOP__25(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___act_comb__TOP__25\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__muxed_ctrl 
        = (0x000fffffU & ((2U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_ctrl_arb__DOT__func_sel))
                           ? ((((0U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_hw_if__DOT__phase))
                                 ? (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_hw_if__DOT__num_words)
                                 : 3U) << 8U) | ((0x000000c0U 
                                                  & (((0U 
                                                       == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_hw_if__DOT__phase))
                                                       ? (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_hw_if__DOT__info_sel)
                                                       : 
                                                      (vlSymsp->TOP__flash_ctrl_pkg.RmaWipeEntries
                                                       [
                                                       ((4U 
                                                         >= (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_hw_if__DOT__u_wipe_idx_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))
                                                         ? (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_hw_if__DOT__u_wipe_idx_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)
                                                         : 0U)] 
                                                       >> 0x00000012U)) 
                                                     << 6U)) 
                                                 | ((0x00000020U 
                                                     & (((0U 
                                                          == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_hw_if__DOT__phase))
                                                          ? (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_hw_if__DOT__part_sel)
                                                          : 
                                                         (vlSymsp->TOP__flash_ctrl_pkg.RmaWipeEntries
                                                          [
                                                          ((4U 
                                                            >= (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_hw_if__DOT__u_wipe_idx_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q))
                                                            ? (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_hw_if__DOT__u_wipe_idx_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q)
                                                            : 0U)] 
                                                          >> 0x00000014U)) 
                                                        << 5U)) 
                                                    | ((((0U 
                                                          == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_hw_if__DOT__phase))
                                                          ? 0U
                                                          : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_hw_if__DOT__rma_op)) 
                                                        << 1U) 
                                                       | ((0U 
                                                           == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_hw_if__DOT__phase))
                                                           ? (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_hw_if__DOT__start)
                                                           : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_hw_if__DOT__rma_start))))))
                           : ((1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_ctrl_arb__DOT__func_sel))
                               ? ((vlSelfRef.__VdfgRegularize_he50b618e_0_970[0x00000027U] 
                                   << 5U) | (vlSelfRef.__VdfgRegularize_he50b618e_0_970[0x00000026U] 
                                             >> 0x0000001bU))
                               : 0U)));
    if ((1U & (~ VL_ONEHOT_I((((2U == (3U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__muxed_ctrl 
                                             >> 1U))) 
                               << 2U) | (((1U == (3U 
                                                  & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__muxed_ctrl 
                                                     >> 1U))) 
                                          << 1U) | 
                                         (0U == (3U 
                                                 & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__muxed_ctrl 
                                                    >> 1U))))))))) {
        if ((0U != (((2U == (3U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__muxed_ctrl 
                                   >> 1U))) << 2U) 
                    | (((1U == (3U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__muxed_ctrl 
                                      >> 1U))) << 1U) 
                       | (0U == (3U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__muxed_ctrl 
                                       >> 1U))))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: flash_ctrl.sv:754: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_flash_ctrl: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),2,
                             (3U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__muxed_ctrl 
                                    >> 1U)));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/flash_ctrl.sv", 754, "");
            }
        }
    }
    if ((1U & (~ VL_ONEHOT_I((((0U == (3U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__muxed_ctrl 
                                             >> 1U))) 
                               << 2U) | (((2U == (3U 
                                                  & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__muxed_ctrl 
                                                     >> 1U))) 
                                          << 1U) | 
                                         (1U == (3U 
                                                 & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__muxed_ctrl 
                                                    >> 1U))))))))) {
        if ((0U != (((0U == (3U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__muxed_ctrl 
                                   >> 1U))) << 2U) 
                    | (((2U == (3U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__muxed_ctrl 
                                      >> 1U))) << 1U) 
                       | (1U == (3U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__muxed_ctrl 
                                       >> 1U))))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: flash_ctrl_arb.sv:244: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_flash_ctrl.u_ctrl_arb: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),2,
                             (3U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__muxed_ctrl 
                                    >> 1U)));
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/flash_ctrl_arb.sv", 244, "");
            }
        }
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_ctrl_rd__DOT__cnt_hit 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_ctrl_rd__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
           >= (0x00000fffU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__muxed_ctrl 
                              >> 8U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_ctrl_prog__DOT__cnt_hit 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_ctrl_prog__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
           >= (0x00000fffU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__muxed_ctrl 
                              >> 8U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT____Vcellinp__u_flash_mp__pg_erase_i 
        = (IData)((4U == (0x00000016U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__muxed_ctrl)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__erase_flash_req 
        = (IData)((5U == (7U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__muxed_ctrl)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_ctrl_prog__DOT__pgm_res_err 
        = ((0x00003fffU & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__muxed_addr 
                           >> 6U)) != (0x00003fffU 
                                       & (((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__muxed_addr 
                                            >> 2U) 
                                           + (0x00000fffU 
                                              & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__muxed_ctrl 
                                                 >> 8U))) 
                                          >> 4U)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__prog_op_valid 
        = (IData)((3U == (7U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__muxed_ctrl)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__rd_op_valid 
        = (IData)((1U == (7U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__muxed_ctrl)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__erase_flash_addr 
        = ((0x00000010U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__muxed_ctrl)
            ? (0x00020000U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__muxed_addr 
                              >> 2U)) : (0x0003fe00U 
                                         & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__muxed_addr 
                                            >> 2U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_60 = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_ctrl_rd__DOT__data_rdy_i) 
                                                 & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_ctrl_rd__DOT__cnt_hit));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__rd_flash_req 
        = ((0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_ctrl_rd__DOT__st_q)) 
           & ((1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_ctrl_rd__DOT__st_q)) 
              & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__rd_op_valid) 
                 & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_ctrl_rd__DOT__data_rdy_i))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__ctrl_err_addr = 0U;
    if ((1U == (3U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__muxed_ctrl 
                      >> 1U)))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__ctrl_err_addr 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__prog_err_addr;
    } else if ((2U == (3U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__muxed_ctrl 
                             >> 1U)))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__ctrl_err_addr 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__erase_flash_addr;
    } else if ((0U == (3U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__muxed_ctrl 
                             >> 1U)))) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__ctrl_err_addr 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__rd_err_addr;
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__flash_addr 
        = (0x0003ffffU & ((0U == (3U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__muxed_ctrl 
                                        >> 1U))) ? vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_ctrl_rd__DOT__int_addr
                           : ((1U == (3U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__muxed_ctrl 
                                            >> 1U)))
                               ? vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_ctrl_prog__DOT__int_addr
                               : ((2U == (3U & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__muxed_ctrl 
                                                >> 1U)))
                                   ? vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__erase_flash_addr
                                   : 0U))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__data_bk_erase_en 
        = ((IData)((0x00000014U == (0x00000016U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__muxed_ctrl))) 
           & (((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__flash_addr 
                >> 0x00000011U) & ((2U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_ctrl_arb__DOT__func_sel)) 
                                   & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_mp_bank_cfg_shadowed_erase_en_1.__PVT__committed_q))) 
              | ((~ (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__flash_addr 
                     >> 0x00000011U)) & ((2U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_ctrl_arb__DOT__func_sel)) 
                                         & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__u_mp_bank_cfg_shadowed_erase_en_0.__PVT__committed_q)))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT____VdfgRegularize_h7b88c983_0_0 
        = (0x000007ffU & (((IData)(0x00000348U) * (1U 
                                                   & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__flash_addr 
                                                      >> 0x00000011U))) 
                          + ((0x000003ffU & ((IData)(0x00000118U) 
                                             * (3U 
                                                & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__muxed_ctrl 
                                                   >> 6U)))) 
                             + (0x000001ffU & ((IData)(0x0000001cU) 
                                               * (0x0000000fU 
                                                  & (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__flash_addr 
                                                     >> 9U)))))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__info_bk_erase_en 
        = ((vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__muxed_ctrl 
            >> 5U) & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_mp__DOT__data_bk_erase_en));
}

void Vsim___024root___act_comb__TOP__26(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___act_comb__TOP__26\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_ctrl_rd__DOT__u_cnt__DOT__incr_en_i 
        = ((0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_ctrl_rd__DOT__st_q)) 
           & ((1U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_ctrl_rd__DOT__st_q))
               ? (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_ctrl_rd__DOT__txn_done)
               : ((2U == (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_ctrl_rd__DOT__st_q)) 
                  & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_ctrl_rd__DOT__data_rdy_i))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT____Vcellinp__u_flash_hw_if__rvalid_i 
        = ((1U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_ctrl_arb__DOT__func_sel)) 
           & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_ctrl_rd__DOT__u_cnt__DOT__incr_en_i));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_ctrl_rd__DOT__u_cnt__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt 
        = (0x00001fffU & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_ctrl_rd__DOT__u_cnt__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q) 
                          - (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_ctrl_rd__DOT__u_cnt__DOT__incr_en_i)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_ctrl_rd__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt 
        = (0x00001fffU & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_ctrl_rd__DOT__u_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q) 
                          + (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_flash_ctrl_rd__DOT__u_cnt__DOT__incr_en_i)));
}

void Vsim___024root___act_comb__TOP__27(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___act_comb__TOP__27\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__tl_win_d2h[0U][0U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_prog_tl_gate.tl_d2h_o[0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__tl_win_d2h[0U][1U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_prog_tl_gate.tl_d2h_o[1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__tl_win_d2h[0U][2U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_prog_tl_gate.tl_d2h_o[2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__tl_socket_d2h[0U][0U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_prog_tl_gate.tl_d2h_o[0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__tl_socket_d2h[0U][1U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_prog_tl_gate.tl_d2h_o[1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_reg_core__DOT__tl_socket_d2h[0U][2U] 
        = vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_prog_tl_gate.tl_d2h_o[2U];
}

void Vsim___024root___act_comb__TOP__28(Vsim___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root___act_comb__TOP__28\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*63:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__gen_prince__DOT__u_cipher__DOT____VdfgExtracted_h435ad752__3;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__gen_prince__DOT__u_cipher__DOT____VdfgExtracted_h435ad752__3 = 0;
    QData/*63:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__gen_prince__DOT__u_cipher__DOT____VdfgExtracted_h99e0c7c1__3;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__gen_prince__DOT__u_cipher__DOT____VdfgExtracted_h99e0c7c1__3 = 0;
    QData/*63:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__gen_prince__DOT__u_cipher__DOT____VdfgExtracted_h36ab3cd7__2;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__gen_prince__DOT__u_cipher__DOT____VdfgExtracted_h36ab3cd7__2 = 0;
    QData/*63:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__gen_prince__DOT__u_cipher__DOT____VdfgExtracted_h81252f00__0;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__gen_prince__DOT__u_cipher__DOT____VdfgExtracted_h81252f00__0 = 0;
    QData/*63:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__gen_prince__DOT__u_cipher__DOT____VdfgExtracted_hc734f68f__3;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__gen_prince__DOT__u_cipher__DOT____VdfgExtracted_hc734f68f__3 = 0;
    QData/*63:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__gen_prince__DOT__u_cipher__DOT____VdfgExtracted_h09fdf4ef__3;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__gen_prince__DOT__u_cipher__DOT____VdfgExtracted_h09fdf4ef__3 = 0;
    QData/*63:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__gen_prince__DOT__u_cipher__DOT____VdfgExtracted_hb453e96e__2;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__gen_prince__DOT__u_cipher__DOT____VdfgExtracted_hb453e96e__2 = 0;
    QData/*63:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__gen_prince__DOT__u_cipher__DOT____VdfgExtracted_h99975f1a__0;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__gen_prince__DOT__u_cipher__DOT____VdfgExtracted_h99975f1a__0 = 0;
    QData/*63:0*/ chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__gen_prince__DOT__u_cipher__DOT____VdfgExtracted_h92915da7__0;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__gen_prince__DOT__u_cipher__DOT____VdfgExtracted_h92915da7__0 = 0;
    QData/*63:0*/ __Vfunc_sbox4_64bit__868__Vfuncout;
    __Vfunc_sbox4_64bit__868__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_sbox4_64bit__868__state_in;
    __Vfunc_sbox4_64bit__868__state_in = 0;
    CData/*7:0*/ __Vfunc_sbox4_8bit__869__Vfuncout;
    __Vfunc_sbox4_8bit__869__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_sbox4_8bit__869__state_in;
    __Vfunc_sbox4_8bit__869__state_in = 0;
    QData/*63:0*/ __Vfunc_prince_mult_prime_64bit__870__Vfuncout;
    __Vfunc_prince_mult_prime_64bit__870__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_prince_mult_prime_64bit__870__state_in;
    __Vfunc_prince_mult_prime_64bit__870__state_in = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__871__Vfuncout;
    __Vfunc_prince_nibble_red16__871__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__871__vect;
    __Vfunc_prince_nibble_red16__871__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__872__Vfuncout;
    __Vfunc_prince_nibble_red16__872__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__872__vect;
    __Vfunc_prince_nibble_red16__872__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__873__Vfuncout;
    __Vfunc_prince_nibble_red16__873__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__873__vect;
    __Vfunc_prince_nibble_red16__873__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__874__Vfuncout;
    __Vfunc_prince_nibble_red16__874__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__874__vect;
    __Vfunc_prince_nibble_red16__874__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__875__Vfuncout;
    __Vfunc_prince_nibble_red16__875__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__875__vect;
    __Vfunc_prince_nibble_red16__875__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__876__Vfuncout;
    __Vfunc_prince_nibble_red16__876__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__876__vect;
    __Vfunc_prince_nibble_red16__876__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__877__Vfuncout;
    __Vfunc_prince_nibble_red16__877__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__877__vect;
    __Vfunc_prince_nibble_red16__877__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__878__Vfuncout;
    __Vfunc_prince_nibble_red16__878__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__878__vect;
    __Vfunc_prince_nibble_red16__878__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__879__Vfuncout;
    __Vfunc_prince_nibble_red16__879__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__879__vect;
    __Vfunc_prince_nibble_red16__879__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__880__Vfuncout;
    __Vfunc_prince_nibble_red16__880__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__880__vect;
    __Vfunc_prince_nibble_red16__880__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__881__Vfuncout;
    __Vfunc_prince_nibble_red16__881__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__881__vect;
    __Vfunc_prince_nibble_red16__881__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__882__Vfuncout;
    __Vfunc_prince_nibble_red16__882__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__882__vect;
    __Vfunc_prince_nibble_red16__882__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__883__Vfuncout;
    __Vfunc_prince_nibble_red16__883__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__883__vect;
    __Vfunc_prince_nibble_red16__883__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__884__Vfuncout;
    __Vfunc_prince_nibble_red16__884__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__884__vect;
    __Vfunc_prince_nibble_red16__884__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__885__Vfuncout;
    __Vfunc_prince_nibble_red16__885__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__885__vect;
    __Vfunc_prince_nibble_red16__885__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__886__Vfuncout;
    __Vfunc_prince_nibble_red16__886__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__886__vect;
    __Vfunc_prince_nibble_red16__886__vect = 0;
    QData/*63:0*/ __Vfunc_prince_shiftrows_64bit__887__Vfuncout;
    __Vfunc_prince_shiftrows_64bit__887__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_prince_shiftrows_64bit__887__state_in;
    __Vfunc_prince_shiftrows_64bit__887__state_in = 0;
    QData/*63:0*/ __Vfunc_prince_mult_prime_64bit__888__Vfuncout;
    __Vfunc_prince_mult_prime_64bit__888__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_prince_mult_prime_64bit__888__state_in;
    __Vfunc_prince_mult_prime_64bit__888__state_in = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__889__Vfuncout;
    __Vfunc_prince_nibble_red16__889__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__889__vect;
    __Vfunc_prince_nibble_red16__889__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__890__Vfuncout;
    __Vfunc_prince_nibble_red16__890__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__890__vect;
    __Vfunc_prince_nibble_red16__890__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__891__Vfuncout;
    __Vfunc_prince_nibble_red16__891__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__891__vect;
    __Vfunc_prince_nibble_red16__891__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__892__Vfuncout;
    __Vfunc_prince_nibble_red16__892__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__892__vect;
    __Vfunc_prince_nibble_red16__892__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__893__Vfuncout;
    __Vfunc_prince_nibble_red16__893__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__893__vect;
    __Vfunc_prince_nibble_red16__893__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__894__Vfuncout;
    __Vfunc_prince_nibble_red16__894__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__894__vect;
    __Vfunc_prince_nibble_red16__894__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__895__Vfuncout;
    __Vfunc_prince_nibble_red16__895__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__895__vect;
    __Vfunc_prince_nibble_red16__895__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__896__Vfuncout;
    __Vfunc_prince_nibble_red16__896__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__896__vect;
    __Vfunc_prince_nibble_red16__896__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__897__Vfuncout;
    __Vfunc_prince_nibble_red16__897__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__897__vect;
    __Vfunc_prince_nibble_red16__897__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__898__Vfuncout;
    __Vfunc_prince_nibble_red16__898__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__898__vect;
    __Vfunc_prince_nibble_red16__898__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__899__Vfuncout;
    __Vfunc_prince_nibble_red16__899__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__899__vect;
    __Vfunc_prince_nibble_red16__899__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__900__Vfuncout;
    __Vfunc_prince_nibble_red16__900__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__900__vect;
    __Vfunc_prince_nibble_red16__900__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__901__Vfuncout;
    __Vfunc_prince_nibble_red16__901__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__901__vect;
    __Vfunc_prince_nibble_red16__901__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__902__Vfuncout;
    __Vfunc_prince_nibble_red16__902__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__902__vect;
    __Vfunc_prince_nibble_red16__902__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__903__Vfuncout;
    __Vfunc_prince_nibble_red16__903__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__903__vect;
    __Vfunc_prince_nibble_red16__903__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__904__Vfuncout;
    __Vfunc_prince_nibble_red16__904__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__904__vect;
    __Vfunc_prince_nibble_red16__904__vect = 0;
    QData/*63:0*/ __Vfunc_prince_shiftrows_64bit__905__Vfuncout;
    __Vfunc_prince_shiftrows_64bit__905__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_prince_shiftrows_64bit__905__state_in;
    __Vfunc_prince_shiftrows_64bit__905__state_in = 0;
    QData/*63:0*/ __Vfunc_prince_mult_prime_64bit__906__Vfuncout;
    __Vfunc_prince_mult_prime_64bit__906__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_prince_mult_prime_64bit__906__state_in;
    __Vfunc_prince_mult_prime_64bit__906__state_in = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__907__Vfuncout;
    __Vfunc_prince_nibble_red16__907__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__907__vect;
    __Vfunc_prince_nibble_red16__907__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__908__Vfuncout;
    __Vfunc_prince_nibble_red16__908__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__908__vect;
    __Vfunc_prince_nibble_red16__908__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__909__Vfuncout;
    __Vfunc_prince_nibble_red16__909__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__909__vect;
    __Vfunc_prince_nibble_red16__909__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__910__Vfuncout;
    __Vfunc_prince_nibble_red16__910__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__910__vect;
    __Vfunc_prince_nibble_red16__910__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__911__Vfuncout;
    __Vfunc_prince_nibble_red16__911__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__911__vect;
    __Vfunc_prince_nibble_red16__911__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__912__Vfuncout;
    __Vfunc_prince_nibble_red16__912__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__912__vect;
    __Vfunc_prince_nibble_red16__912__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__913__Vfuncout;
    __Vfunc_prince_nibble_red16__913__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__913__vect;
    __Vfunc_prince_nibble_red16__913__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__914__Vfuncout;
    __Vfunc_prince_nibble_red16__914__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__914__vect;
    __Vfunc_prince_nibble_red16__914__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__915__Vfuncout;
    __Vfunc_prince_nibble_red16__915__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__915__vect;
    __Vfunc_prince_nibble_red16__915__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__916__Vfuncout;
    __Vfunc_prince_nibble_red16__916__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__916__vect;
    __Vfunc_prince_nibble_red16__916__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__917__Vfuncout;
    __Vfunc_prince_nibble_red16__917__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__917__vect;
    __Vfunc_prince_nibble_red16__917__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__918__Vfuncout;
    __Vfunc_prince_nibble_red16__918__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__918__vect;
    __Vfunc_prince_nibble_red16__918__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__919__Vfuncout;
    __Vfunc_prince_nibble_red16__919__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__919__vect;
    __Vfunc_prince_nibble_red16__919__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__920__Vfuncout;
    __Vfunc_prince_nibble_red16__920__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__920__vect;
    __Vfunc_prince_nibble_red16__920__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__921__Vfuncout;
    __Vfunc_prince_nibble_red16__921__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__921__vect;
    __Vfunc_prince_nibble_red16__921__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__922__Vfuncout;
    __Vfunc_prince_nibble_red16__922__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__922__vect;
    __Vfunc_prince_nibble_red16__922__vect = 0;
    QData/*63:0*/ __Vfunc_prince_shiftrows_64bit__923__Vfuncout;
    __Vfunc_prince_shiftrows_64bit__923__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_prince_shiftrows_64bit__923__state_in;
    __Vfunc_prince_shiftrows_64bit__923__state_in = 0;
    QData/*63:0*/ __Vfunc_prince_mult_prime_64bit__924__Vfuncout;
    __Vfunc_prince_mult_prime_64bit__924__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_prince_mult_prime_64bit__924__state_in;
    __Vfunc_prince_mult_prime_64bit__924__state_in = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__925__Vfuncout;
    __Vfunc_prince_nibble_red16__925__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__925__vect;
    __Vfunc_prince_nibble_red16__925__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__926__Vfuncout;
    __Vfunc_prince_nibble_red16__926__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__926__vect;
    __Vfunc_prince_nibble_red16__926__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__927__Vfuncout;
    __Vfunc_prince_nibble_red16__927__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__927__vect;
    __Vfunc_prince_nibble_red16__927__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__928__Vfuncout;
    __Vfunc_prince_nibble_red16__928__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__928__vect;
    __Vfunc_prince_nibble_red16__928__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__929__Vfuncout;
    __Vfunc_prince_nibble_red16__929__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__929__vect;
    __Vfunc_prince_nibble_red16__929__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__930__Vfuncout;
    __Vfunc_prince_nibble_red16__930__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__930__vect;
    __Vfunc_prince_nibble_red16__930__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__931__Vfuncout;
    __Vfunc_prince_nibble_red16__931__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__931__vect;
    __Vfunc_prince_nibble_red16__931__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__932__Vfuncout;
    __Vfunc_prince_nibble_red16__932__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__932__vect;
    __Vfunc_prince_nibble_red16__932__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__933__Vfuncout;
    __Vfunc_prince_nibble_red16__933__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__933__vect;
    __Vfunc_prince_nibble_red16__933__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__934__Vfuncout;
    __Vfunc_prince_nibble_red16__934__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__934__vect;
    __Vfunc_prince_nibble_red16__934__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__935__Vfuncout;
    __Vfunc_prince_nibble_red16__935__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__935__vect;
    __Vfunc_prince_nibble_red16__935__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__936__Vfuncout;
    __Vfunc_prince_nibble_red16__936__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__936__vect;
    __Vfunc_prince_nibble_red16__936__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__937__Vfuncout;
    __Vfunc_prince_nibble_red16__937__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__937__vect;
    __Vfunc_prince_nibble_red16__937__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__938__Vfuncout;
    __Vfunc_prince_nibble_red16__938__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__938__vect;
    __Vfunc_prince_nibble_red16__938__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__939__Vfuncout;
    __Vfunc_prince_nibble_red16__939__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__939__vect;
    __Vfunc_prince_nibble_red16__939__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__940__Vfuncout;
    __Vfunc_prince_nibble_red16__940__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__940__vect;
    __Vfunc_prince_nibble_red16__940__vect = 0;
    QData/*63:0*/ __Vfunc_prince_shiftrows_64bit__941__Vfuncout;
    __Vfunc_prince_shiftrows_64bit__941__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_prince_shiftrows_64bit__941__state_in;
    __Vfunc_prince_shiftrows_64bit__941__state_in = 0;
    QData/*63:0*/ __Vfunc_prince_mult_prime_64bit__942__Vfuncout;
    __Vfunc_prince_mult_prime_64bit__942__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_prince_mult_prime_64bit__942__state_in;
    __Vfunc_prince_mult_prime_64bit__942__state_in = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__943__Vfuncout;
    __Vfunc_prince_nibble_red16__943__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__943__vect;
    __Vfunc_prince_nibble_red16__943__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__944__Vfuncout;
    __Vfunc_prince_nibble_red16__944__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__944__vect;
    __Vfunc_prince_nibble_red16__944__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__945__Vfuncout;
    __Vfunc_prince_nibble_red16__945__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__945__vect;
    __Vfunc_prince_nibble_red16__945__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__946__Vfuncout;
    __Vfunc_prince_nibble_red16__946__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__946__vect;
    __Vfunc_prince_nibble_red16__946__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__947__Vfuncout;
    __Vfunc_prince_nibble_red16__947__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__947__vect;
    __Vfunc_prince_nibble_red16__947__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__948__Vfuncout;
    __Vfunc_prince_nibble_red16__948__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__948__vect;
    __Vfunc_prince_nibble_red16__948__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__949__Vfuncout;
    __Vfunc_prince_nibble_red16__949__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__949__vect;
    __Vfunc_prince_nibble_red16__949__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__950__Vfuncout;
    __Vfunc_prince_nibble_red16__950__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__950__vect;
    __Vfunc_prince_nibble_red16__950__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__951__Vfuncout;
    __Vfunc_prince_nibble_red16__951__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__951__vect;
    __Vfunc_prince_nibble_red16__951__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__952__Vfuncout;
    __Vfunc_prince_nibble_red16__952__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__952__vect;
    __Vfunc_prince_nibble_red16__952__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__953__Vfuncout;
    __Vfunc_prince_nibble_red16__953__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__953__vect;
    __Vfunc_prince_nibble_red16__953__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__954__Vfuncout;
    __Vfunc_prince_nibble_red16__954__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__954__vect;
    __Vfunc_prince_nibble_red16__954__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__955__Vfuncout;
    __Vfunc_prince_nibble_red16__955__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__955__vect;
    __Vfunc_prince_nibble_red16__955__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__956__Vfuncout;
    __Vfunc_prince_nibble_red16__956__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__956__vect;
    __Vfunc_prince_nibble_red16__956__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__957__Vfuncout;
    __Vfunc_prince_nibble_red16__957__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__957__vect;
    __Vfunc_prince_nibble_red16__957__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__958__Vfuncout;
    __Vfunc_prince_nibble_red16__958__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__958__vect;
    __Vfunc_prince_nibble_red16__958__vect = 0;
    QData/*63:0*/ __Vfunc_prince_shiftrows_64bit__959__Vfuncout;
    __Vfunc_prince_shiftrows_64bit__959__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_prince_shiftrows_64bit__959__state_in;
    __Vfunc_prince_shiftrows_64bit__959__state_in = 0;
    QData/*63:0*/ __Vfunc_prince_mult_prime_64bit__979__Vfuncout;
    __Vfunc_prince_mult_prime_64bit__979__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_prince_mult_prime_64bit__979__state_in;
    __Vfunc_prince_mult_prime_64bit__979__state_in = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__980__Vfuncout;
    __Vfunc_prince_nibble_red16__980__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__980__vect;
    __Vfunc_prince_nibble_red16__980__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__981__Vfuncout;
    __Vfunc_prince_nibble_red16__981__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__981__vect;
    __Vfunc_prince_nibble_red16__981__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__982__Vfuncout;
    __Vfunc_prince_nibble_red16__982__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__982__vect;
    __Vfunc_prince_nibble_red16__982__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__983__Vfuncout;
    __Vfunc_prince_nibble_red16__983__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__983__vect;
    __Vfunc_prince_nibble_red16__983__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__984__Vfuncout;
    __Vfunc_prince_nibble_red16__984__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__984__vect;
    __Vfunc_prince_nibble_red16__984__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__985__Vfuncout;
    __Vfunc_prince_nibble_red16__985__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__985__vect;
    __Vfunc_prince_nibble_red16__985__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__986__Vfuncout;
    __Vfunc_prince_nibble_red16__986__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__986__vect;
    __Vfunc_prince_nibble_red16__986__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__987__Vfuncout;
    __Vfunc_prince_nibble_red16__987__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__987__vect;
    __Vfunc_prince_nibble_red16__987__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__988__Vfuncout;
    __Vfunc_prince_nibble_red16__988__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__988__vect;
    __Vfunc_prince_nibble_red16__988__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__989__Vfuncout;
    __Vfunc_prince_nibble_red16__989__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__989__vect;
    __Vfunc_prince_nibble_red16__989__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__990__Vfuncout;
    __Vfunc_prince_nibble_red16__990__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__990__vect;
    __Vfunc_prince_nibble_red16__990__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__991__Vfuncout;
    __Vfunc_prince_nibble_red16__991__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__991__vect;
    __Vfunc_prince_nibble_red16__991__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__992__Vfuncout;
    __Vfunc_prince_nibble_red16__992__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__992__vect;
    __Vfunc_prince_nibble_red16__992__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__993__Vfuncout;
    __Vfunc_prince_nibble_red16__993__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__993__vect;
    __Vfunc_prince_nibble_red16__993__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__994__Vfuncout;
    __Vfunc_prince_nibble_red16__994__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__994__vect;
    __Vfunc_prince_nibble_red16__994__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__995__Vfuncout;
    __Vfunc_prince_nibble_red16__995__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__995__vect;
    __Vfunc_prince_nibble_red16__995__vect = 0;
    QData/*63:0*/ __Vfunc_sbox4_64bit__996__Vfuncout;
    __Vfunc_sbox4_64bit__996__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_sbox4_64bit__996__state_in;
    __Vfunc_sbox4_64bit__996__state_in = 0;
    CData/*7:0*/ __Vfunc_sbox4_8bit__997__Vfuncout;
    __Vfunc_sbox4_8bit__997__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_sbox4_8bit__997__state_in;
    __Vfunc_sbox4_8bit__997__state_in = 0;
    QData/*63:0*/ __Vfunc_prince_mult_prime_64bit__998__Vfuncout;
    __Vfunc_prince_mult_prime_64bit__998__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_prince_mult_prime_64bit__998__state_in;
    __Vfunc_prince_mult_prime_64bit__998__state_in = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__999__Vfuncout;
    __Vfunc_prince_nibble_red16__999__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__999__vect;
    __Vfunc_prince_nibble_red16__999__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__1000__Vfuncout;
    __Vfunc_prince_nibble_red16__1000__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__1000__vect;
    __Vfunc_prince_nibble_red16__1000__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__1001__Vfuncout;
    __Vfunc_prince_nibble_red16__1001__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__1001__vect;
    __Vfunc_prince_nibble_red16__1001__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__1002__Vfuncout;
    __Vfunc_prince_nibble_red16__1002__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__1002__vect;
    __Vfunc_prince_nibble_red16__1002__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__1003__Vfuncout;
    __Vfunc_prince_nibble_red16__1003__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__1003__vect;
    __Vfunc_prince_nibble_red16__1003__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__1004__Vfuncout;
    __Vfunc_prince_nibble_red16__1004__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__1004__vect;
    __Vfunc_prince_nibble_red16__1004__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__1005__Vfuncout;
    __Vfunc_prince_nibble_red16__1005__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__1005__vect;
    __Vfunc_prince_nibble_red16__1005__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__1006__Vfuncout;
    __Vfunc_prince_nibble_red16__1006__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__1006__vect;
    __Vfunc_prince_nibble_red16__1006__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__1007__Vfuncout;
    __Vfunc_prince_nibble_red16__1007__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__1007__vect;
    __Vfunc_prince_nibble_red16__1007__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__1008__Vfuncout;
    __Vfunc_prince_nibble_red16__1008__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__1008__vect;
    __Vfunc_prince_nibble_red16__1008__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__1009__Vfuncout;
    __Vfunc_prince_nibble_red16__1009__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__1009__vect;
    __Vfunc_prince_nibble_red16__1009__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__1010__Vfuncout;
    __Vfunc_prince_nibble_red16__1010__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__1010__vect;
    __Vfunc_prince_nibble_red16__1010__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__1011__Vfuncout;
    __Vfunc_prince_nibble_red16__1011__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__1011__vect;
    __Vfunc_prince_nibble_red16__1011__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__1012__Vfuncout;
    __Vfunc_prince_nibble_red16__1012__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__1012__vect;
    __Vfunc_prince_nibble_red16__1012__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__1013__Vfuncout;
    __Vfunc_prince_nibble_red16__1013__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__1013__vect;
    __Vfunc_prince_nibble_red16__1013__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__1014__Vfuncout;
    __Vfunc_prince_nibble_red16__1014__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__1014__vect;
    __Vfunc_prince_nibble_red16__1014__vect = 0;
    QData/*63:0*/ __Vfunc_sbox4_64bit__1015__Vfuncout;
    __Vfunc_sbox4_64bit__1015__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_sbox4_64bit__1015__state_in;
    __Vfunc_sbox4_64bit__1015__state_in = 0;
    CData/*7:0*/ __Vfunc_sbox4_8bit__1016__Vfuncout;
    __Vfunc_sbox4_8bit__1016__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_sbox4_8bit__1016__state_in;
    __Vfunc_sbox4_8bit__1016__state_in = 0;
    QData/*63:0*/ __Vfunc_prince_mult_prime_64bit__1017__Vfuncout;
    __Vfunc_prince_mult_prime_64bit__1017__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_prince_mult_prime_64bit__1017__state_in;
    __Vfunc_prince_mult_prime_64bit__1017__state_in = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__1018__Vfuncout;
    __Vfunc_prince_nibble_red16__1018__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__1018__vect;
    __Vfunc_prince_nibble_red16__1018__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__1019__Vfuncout;
    __Vfunc_prince_nibble_red16__1019__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__1019__vect;
    __Vfunc_prince_nibble_red16__1019__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__1020__Vfuncout;
    __Vfunc_prince_nibble_red16__1020__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__1020__vect;
    __Vfunc_prince_nibble_red16__1020__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__1021__Vfuncout;
    __Vfunc_prince_nibble_red16__1021__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__1021__vect;
    __Vfunc_prince_nibble_red16__1021__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__1022__Vfuncout;
    __Vfunc_prince_nibble_red16__1022__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__1022__vect;
    __Vfunc_prince_nibble_red16__1022__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__1023__Vfuncout;
    __Vfunc_prince_nibble_red16__1023__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__1023__vect;
    __Vfunc_prince_nibble_red16__1023__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__1024__Vfuncout;
    __Vfunc_prince_nibble_red16__1024__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__1024__vect;
    __Vfunc_prince_nibble_red16__1024__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__1025__Vfuncout;
    __Vfunc_prince_nibble_red16__1025__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__1025__vect;
    __Vfunc_prince_nibble_red16__1025__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__1026__Vfuncout;
    __Vfunc_prince_nibble_red16__1026__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__1026__vect;
    __Vfunc_prince_nibble_red16__1026__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__1027__Vfuncout;
    __Vfunc_prince_nibble_red16__1027__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__1027__vect;
    __Vfunc_prince_nibble_red16__1027__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__1028__Vfuncout;
    __Vfunc_prince_nibble_red16__1028__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__1028__vect;
    __Vfunc_prince_nibble_red16__1028__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__1029__Vfuncout;
    __Vfunc_prince_nibble_red16__1029__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__1029__vect;
    __Vfunc_prince_nibble_red16__1029__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__1030__Vfuncout;
    __Vfunc_prince_nibble_red16__1030__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__1030__vect;
    __Vfunc_prince_nibble_red16__1030__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__1031__Vfuncout;
    __Vfunc_prince_nibble_red16__1031__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__1031__vect;
    __Vfunc_prince_nibble_red16__1031__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__1032__Vfuncout;
    __Vfunc_prince_nibble_red16__1032__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__1032__vect;
    __Vfunc_prince_nibble_red16__1032__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__1033__Vfuncout;
    __Vfunc_prince_nibble_red16__1033__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__1033__vect;
    __Vfunc_prince_nibble_red16__1033__vect = 0;
    QData/*63:0*/ __Vfunc_sbox4_64bit__1034__Vfuncout;
    __Vfunc_sbox4_64bit__1034__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_sbox4_64bit__1034__state_in;
    __Vfunc_sbox4_64bit__1034__state_in = 0;
    CData/*7:0*/ __Vfunc_sbox4_8bit__1035__Vfuncout;
    __Vfunc_sbox4_8bit__1035__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_sbox4_8bit__1035__state_in;
    __Vfunc_sbox4_8bit__1035__state_in = 0;
    QData/*63:0*/ __Vfunc_prince_mult_prime_64bit__1036__Vfuncout;
    __Vfunc_prince_mult_prime_64bit__1036__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_prince_mult_prime_64bit__1036__state_in;
    __Vfunc_prince_mult_prime_64bit__1036__state_in = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__1037__Vfuncout;
    __Vfunc_prince_nibble_red16__1037__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__1037__vect;
    __Vfunc_prince_nibble_red16__1037__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__1038__Vfuncout;
    __Vfunc_prince_nibble_red16__1038__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__1038__vect;
    __Vfunc_prince_nibble_red16__1038__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__1039__Vfuncout;
    __Vfunc_prince_nibble_red16__1039__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__1039__vect;
    __Vfunc_prince_nibble_red16__1039__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__1040__Vfuncout;
    __Vfunc_prince_nibble_red16__1040__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__1040__vect;
    __Vfunc_prince_nibble_red16__1040__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__1041__Vfuncout;
    __Vfunc_prince_nibble_red16__1041__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__1041__vect;
    __Vfunc_prince_nibble_red16__1041__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__1042__Vfuncout;
    __Vfunc_prince_nibble_red16__1042__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__1042__vect;
    __Vfunc_prince_nibble_red16__1042__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__1043__Vfuncout;
    __Vfunc_prince_nibble_red16__1043__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__1043__vect;
    __Vfunc_prince_nibble_red16__1043__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__1044__Vfuncout;
    __Vfunc_prince_nibble_red16__1044__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__1044__vect;
    __Vfunc_prince_nibble_red16__1044__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__1045__Vfuncout;
    __Vfunc_prince_nibble_red16__1045__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__1045__vect;
    __Vfunc_prince_nibble_red16__1045__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__1046__Vfuncout;
    __Vfunc_prince_nibble_red16__1046__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__1046__vect;
    __Vfunc_prince_nibble_red16__1046__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__1047__Vfuncout;
    __Vfunc_prince_nibble_red16__1047__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__1047__vect;
    __Vfunc_prince_nibble_red16__1047__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__1048__Vfuncout;
    __Vfunc_prince_nibble_red16__1048__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__1048__vect;
    __Vfunc_prince_nibble_red16__1048__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__1049__Vfuncout;
    __Vfunc_prince_nibble_red16__1049__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__1049__vect;
    __Vfunc_prince_nibble_red16__1049__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__1050__Vfuncout;
    __Vfunc_prince_nibble_red16__1050__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__1050__vect;
    __Vfunc_prince_nibble_red16__1050__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__1051__Vfuncout;
    __Vfunc_prince_nibble_red16__1051__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__1051__vect;
    __Vfunc_prince_nibble_red16__1051__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__1052__Vfuncout;
    __Vfunc_prince_nibble_red16__1052__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__1052__vect;
    __Vfunc_prince_nibble_red16__1052__vect = 0;
    QData/*63:0*/ __Vfunc_sbox4_64bit__1053__Vfuncout;
    __Vfunc_sbox4_64bit__1053__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_sbox4_64bit__1053__state_in;
    __Vfunc_sbox4_64bit__1053__state_in = 0;
    CData/*7:0*/ __Vfunc_sbox4_8bit__1054__Vfuncout;
    __Vfunc_sbox4_8bit__1054__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_sbox4_8bit__1054__state_in;
    __Vfunc_sbox4_8bit__1054__state_in = 0;
    QData/*63:0*/ __Vfunc_prince_mult_prime_64bit__1055__Vfuncout;
    __Vfunc_prince_mult_prime_64bit__1055__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_prince_mult_prime_64bit__1055__state_in;
    __Vfunc_prince_mult_prime_64bit__1055__state_in = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__1056__Vfuncout;
    __Vfunc_prince_nibble_red16__1056__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__1056__vect;
    __Vfunc_prince_nibble_red16__1056__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__1057__Vfuncout;
    __Vfunc_prince_nibble_red16__1057__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__1057__vect;
    __Vfunc_prince_nibble_red16__1057__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__1058__Vfuncout;
    __Vfunc_prince_nibble_red16__1058__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__1058__vect;
    __Vfunc_prince_nibble_red16__1058__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__1059__Vfuncout;
    __Vfunc_prince_nibble_red16__1059__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__1059__vect;
    __Vfunc_prince_nibble_red16__1059__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__1060__Vfuncout;
    __Vfunc_prince_nibble_red16__1060__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__1060__vect;
    __Vfunc_prince_nibble_red16__1060__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__1061__Vfuncout;
    __Vfunc_prince_nibble_red16__1061__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__1061__vect;
    __Vfunc_prince_nibble_red16__1061__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__1062__Vfuncout;
    __Vfunc_prince_nibble_red16__1062__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__1062__vect;
    __Vfunc_prince_nibble_red16__1062__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__1063__Vfuncout;
    __Vfunc_prince_nibble_red16__1063__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__1063__vect;
    __Vfunc_prince_nibble_red16__1063__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__1064__Vfuncout;
    __Vfunc_prince_nibble_red16__1064__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__1064__vect;
    __Vfunc_prince_nibble_red16__1064__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__1065__Vfuncout;
    __Vfunc_prince_nibble_red16__1065__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__1065__vect;
    __Vfunc_prince_nibble_red16__1065__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__1066__Vfuncout;
    __Vfunc_prince_nibble_red16__1066__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__1066__vect;
    __Vfunc_prince_nibble_red16__1066__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__1067__Vfuncout;
    __Vfunc_prince_nibble_red16__1067__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__1067__vect;
    __Vfunc_prince_nibble_red16__1067__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__1068__Vfuncout;
    __Vfunc_prince_nibble_red16__1068__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__1068__vect;
    __Vfunc_prince_nibble_red16__1068__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__1069__Vfuncout;
    __Vfunc_prince_nibble_red16__1069__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__1069__vect;
    __Vfunc_prince_nibble_red16__1069__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__1070__Vfuncout;
    __Vfunc_prince_nibble_red16__1070__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__1070__vect;
    __Vfunc_prince_nibble_red16__1070__vect = 0;
    CData/*3:0*/ __Vfunc_prince_nibble_red16__1071__Vfuncout;
    __Vfunc_prince_nibble_red16__1071__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_prince_nibble_red16__1071__vect;
    __Vfunc_prince_nibble_red16__1071__vect = 0;
    QData/*63:0*/ __Vfunc_sbox4_64bit__1072__Vfuncout;
    __Vfunc_sbox4_64bit__1072__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_sbox4_64bit__1072__state_in;
    __Vfunc_sbox4_64bit__1072__state_in = 0;
    CData/*7:0*/ __Vfunc_sbox4_8bit__1073__Vfuncout;
    __Vfunc_sbox4_8bit__1073__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_sbox4_8bit__1073__state_in;
    __Vfunc_sbox4_8bit__1073__state_in = 0;
    QData/*63:0*/ __Vfunc_sbox4_64bit__1074__Vfuncout;
    __Vfunc_sbox4_64bit__1074__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_sbox4_64bit__1074__state_in;
    __Vfunc_sbox4_64bit__1074__state_in = 0;
    CData/*7:0*/ __Vfunc_sbox4_8bit__1075__Vfuncout;
    __Vfunc_sbox4_8bit__1075__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_sbox4_8bit__1075__state_in;
    __Vfunc_sbox4_8bit__1075__state_in = 0;
    QData/*63:0*/ __Vfunc_sbox4_64bit__1076__Vfuncout;
    __Vfunc_sbox4_64bit__1076__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_sbox4_64bit__1076__state_in;
    __Vfunc_sbox4_64bit__1076__state_in = 0;
    CData/*7:0*/ __Vfunc_sbox4_8bit__1077__Vfuncout;
    __Vfunc_sbox4_8bit__1077__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_sbox4_8bit__1077__state_in;
    __Vfunc_sbox4_8bit__1077__state_in = 0;
    QData/*63:0*/ __Vfunc_sbox4_64bit__1078__Vfuncout;
    __Vfunc_sbox4_64bit__1078__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_sbox4_64bit__1078__state_in;
    __Vfunc_sbox4_64bit__1078__state_in = 0;
    CData/*7:0*/ __Vfunc_sbox4_8bit__1079__Vfuncout;
    __Vfunc_sbox4_8bit__1079__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_sbox4_8bit__1079__state_in;
    __Vfunc_sbox4_8bit__1079__state_in = 0;
    QData/*63:0*/ __Vfunc_sbox4_64bit__1080__Vfuncout;
    __Vfunc_sbox4_64bit__1080__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_sbox4_64bit__1080__state_in;
    __Vfunc_sbox4_64bit__1080__state_in = 0;
    CData/*7:0*/ __Vfunc_sbox4_8bit__1081__Vfuncout;
    __Vfunc_sbox4_8bit__1081__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_sbox4_8bit__1081__state_in;
    __Vfunc_sbox4_8bit__1081__state_in = 0;
    QData/*63:0*/ __Vfunc_sbox4_64bit__1082__Vfuncout;
    __Vfunc_sbox4_64bit__1082__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_sbox4_64bit__1082__state_in;
    __Vfunc_sbox4_64bit__1082__state_in = 0;
    CData/*7:0*/ __Vfunc_sbox4_8bit__1083__Vfuncout;
    __Vfunc_sbox4_8bit__1083__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_sbox4_8bit__1083__state_in;
    __Vfunc_sbox4_8bit__1083__state_in = 0;
    QData/*63:0*/ __Vfunc_prince_shiftrows_64bit__1084__Vfuncout;
    __Vfunc_prince_shiftrows_64bit__1084__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_prince_shiftrows_64bit__1084__state_in;
    __Vfunc_prince_shiftrows_64bit__1084__state_in = 0;
    QData/*63:0*/ __Vfunc_prince_shiftrows_64bit__1085__Vfuncout;
    __Vfunc_prince_shiftrows_64bit__1085__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_prince_shiftrows_64bit__1085__state_in;
    __Vfunc_prince_shiftrows_64bit__1085__state_in = 0;
    QData/*63:0*/ __Vfunc_prince_shiftrows_64bit__1086__Vfuncout;
    __Vfunc_prince_shiftrows_64bit__1086__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_prince_shiftrows_64bit__1086__state_in;
    __Vfunc_prince_shiftrows_64bit__1086__state_in = 0;
    QData/*63:0*/ __Vfunc_prince_shiftrows_64bit__1087__Vfuncout;
    __Vfunc_prince_shiftrows_64bit__1087__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_prince_shiftrows_64bit__1087__state_in;
    __Vfunc_prince_shiftrows_64bit__1087__state_in = 0;
    QData/*63:0*/ __Vfunc_prince_shiftrows_64bit__1088__Vfuncout;
    __Vfunc_prince_shiftrows_64bit__1088__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_prince_shiftrows_64bit__1088__state_in;
    __Vfunc_prince_shiftrows_64bit__1088__state_in = 0;
    // Body
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_op__DOT__gen_input_bufs__BRA__0__KET____DOT__u_req_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i 
        = (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_op__DOT__gen_input_bufs__BRA__0__KET____DOT__gen_rr_arbiter__DOT__u_arb__DOT__gen_normal_case__DOT__req_tree__BRA__2__KET__) 
            << 1U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_op__DOT__gen_input_bufs__BRA__0__KET____DOT__gen_rr_arbiter__DOT__u_arb__DOT__gen_normal_case__DOT__req_tree__BRA__1__KET__));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_op__DOT__gen_input_bufs__BRA__0__KET____DOT__gen_rr_arbiter__DOT__u_arb__DOT__valid_o 
        = ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_op__DOT__gen_input_bufs__BRA__0__KET____DOT__gen_rr_arbiter__DOT__u_arb__DOT__gen_normal_case__DOT__req_tree__BRA__1__KET__) 
           | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_op__DOT__gen_input_bufs__BRA__0__KET____DOT__gen_rr_arbiter__DOT__u_arb__DOT__gen_normal_case__DOT__req_tree__BRA__2__KET__));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_op__DOT__gen_input_bufs__BRA__0__KET____DOT__gen_rr_arbiter__DOT__u_arb__DOT__data_i[0U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_op__DOT__gen_input_bufs__BRA__0__KET____DOT__data_buf
        [0U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_op__DOT__gen_input_bufs__BRA__0__KET____DOT__gen_rr_arbiter__DOT__u_arb__DOT__data_i[0U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_op__DOT__gen_input_bufs__BRA__0__KET____DOT__data_buf
        [0U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_op__DOT__gen_input_bufs__BRA__0__KET____DOT__gen_rr_arbiter__DOT__u_arb__DOT__data_i[0U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_op__DOT__gen_input_bufs__BRA__0__KET____DOT__data_buf
        [0U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_op__DOT__gen_input_bufs__BRA__0__KET____DOT__gen_rr_arbiter__DOT__u_arb__DOT__data_i[0U][3U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_op__DOT__gen_input_bufs__BRA__0__KET____DOT__data_buf
        [0U][3U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_op__DOT__gen_input_bufs__BRA__0__KET____DOT__gen_rr_arbiter__DOT__u_arb__DOT__data_i[0U][4U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_op__DOT__gen_input_bufs__BRA__0__KET____DOT__data_buf
        [0U][4U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_op__DOT__gen_input_bufs__BRA__0__KET____DOT__gen_rr_arbiter__DOT__u_arb__DOT__data_i[1U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_op__DOT__gen_input_bufs__BRA__0__KET____DOT__data_buf
        [1U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_op__DOT__gen_input_bufs__BRA__0__KET____DOT__gen_rr_arbiter__DOT__u_arb__DOT__data_i[1U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_op__DOT__gen_input_bufs__BRA__0__KET____DOT__data_buf
        [1U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_op__DOT__gen_input_bufs__BRA__0__KET____DOT__gen_rr_arbiter__DOT__u_arb__DOT__data_i[1U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_op__DOT__gen_input_bufs__BRA__0__KET____DOT__data_buf
        [1U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_op__DOT__gen_input_bufs__BRA__0__KET____DOT__gen_rr_arbiter__DOT__u_arb__DOT__data_i[1U][3U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_op__DOT__gen_input_bufs__BRA__0__KET____DOT__data_buf
        [1U][3U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_op__DOT__gen_input_bufs__BRA__0__KET____DOT__gen_rr_arbiter__DOT__u_arb__DOT__data_i[1U][4U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_op__DOT__gen_input_bufs__BRA__0__KET____DOT__data_buf
        [1U][4U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_op__DOT__gen_input_bufs__BRA__1__KET____DOT__gen_rr_arbiter__DOT__u_arb__DOT__data_i[0U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_op__DOT__gen_input_bufs__BRA__1__KET____DOT__data_buf
        [0U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_op__DOT__gen_input_bufs__BRA__1__KET____DOT__gen_rr_arbiter__DOT__u_arb__DOT__data_i[0U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_op__DOT__gen_input_bufs__BRA__1__KET____DOT__data_buf
        [0U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_op__DOT__gen_input_bufs__BRA__1__KET____DOT__gen_rr_arbiter__DOT__u_arb__DOT__data_i[0U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_op__DOT__gen_input_bufs__BRA__1__KET____DOT__data_buf
        [0U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_op__DOT__gen_input_bufs__BRA__1__KET____DOT__gen_rr_arbiter__DOT__u_arb__DOT__data_i[0U][3U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_op__DOT__gen_input_bufs__BRA__1__KET____DOT__data_buf
        [0U][3U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_op__DOT__gen_input_bufs__BRA__1__KET____DOT__gen_rr_arbiter__DOT__u_arb__DOT__data_i[0U][4U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_op__DOT__gen_input_bufs__BRA__1__KET____DOT__data_buf
        [0U][4U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_op__DOT__gen_input_bufs__BRA__1__KET____DOT__gen_rr_arbiter__DOT__u_arb__DOT__data_i[1U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_op__DOT__gen_input_bufs__BRA__1__KET____DOT__data_buf
        [1U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_op__DOT__gen_input_bufs__BRA__1__KET____DOT__gen_rr_arbiter__DOT__u_arb__DOT__data_i[1U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_op__DOT__gen_input_bufs__BRA__1__KET____DOT__data_buf
        [1U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_op__DOT__gen_input_bufs__BRA__1__KET____DOT__gen_rr_arbiter__DOT__u_arb__DOT__data_i[1U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_op__DOT__gen_input_bufs__BRA__1__KET____DOT__data_buf
        [1U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_op__DOT__gen_input_bufs__BRA__1__KET____DOT__gen_rr_arbiter__DOT__u_arb__DOT__data_i[1U][3U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_op__DOT__gen_input_bufs__BRA__1__KET____DOT__data_buf
        [1U][3U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_op__DOT__gen_input_bufs__BRA__1__KET____DOT__gen_rr_arbiter__DOT__u_arb__DOT__data_i[1U][4U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_op__DOT__gen_input_bufs__BRA__1__KET____DOT__data_buf
        [1U][4U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT____Vcellinp__u_prim_arbiter_tree_op__data_i[0U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__op_data_in_banks
        [0U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT____Vcellinp__u_prim_arbiter_tree_op__data_i[0U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__op_data_in_banks
        [0U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT____Vcellinp__u_prim_arbiter_tree_op__data_i[0U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__op_data_in_banks
        [0U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT____Vcellinp__u_prim_arbiter_tree_op__data_i[0U][3U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__op_data_in_banks
        [0U][3U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT____Vcellinp__u_prim_arbiter_tree_op__data_i[0U][4U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__op_data_in_banks
        [0U][4U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT____Vcellinp__u_prim_arbiter_tree_op__data_i[1U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__op_data_in_banks
        [1U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT____Vcellinp__u_prim_arbiter_tree_op__data_i[1U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__op_data_in_banks
        [1U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT____Vcellinp__u_prim_arbiter_tree_op__data_i[1U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__op_data_in_banks
        [1U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT____Vcellinp__u_prim_arbiter_tree_op__data_i[1U][3U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__op_data_in_banks
        [1U][3U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT____Vcellinp__u_prim_arbiter_tree_op__data_i[1U][4U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__op_data_in_banks
        [1U][4U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_op__DOT__gen_input_bufs__BRA__0__KET____DOT__gen_rr_arbiter__DOT__u_arb__DOT__idx_o 
        = (1U & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_op__DOT__gen_input_bufs__BRA__0__KET____DOT__gen_rr_arbiter__DOT__u_arb__DOT__gen_normal_case__DOT__req_tree__BRA__1__KET__)) 
                 | ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_op__DOT__gen_input_bufs__BRA__0__KET____DOT__gen_rr_arbiter__DOT__u_arb__DOT__gen_normal_case__DOT__prio_tree__BRA__1__KET__)) 
                    & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_op__DOT__gen_input_bufs__BRA__0__KET____DOT__gen_rr_arbiter__DOT__u_arb__DOT__gen_normal_case__DOT__prio_tree__BRA__2__KET__))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_op__DOT__gen_input_bufs__BRA__1__KET____DOT__gen_rr_arbiter__DOT__u_arb__DOT__idx_o 
        = (1U & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_op__DOT__gen_input_bufs__BRA__0__KET____DOT__gen_rr_arbiter__DOT__u_arb__DOT__gen_normal_case__DOT__req_tree__BRA__1__KET__)) 
                 | ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_op__DOT__gen_input_bufs__BRA__1__KET____DOT__gen_rr_arbiter__DOT__u_arb__DOT__gen_normal_case__DOT__prio_tree__BRA__1__KET__)) 
                    & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_op__DOT__gen_input_bufs__BRA__1__KET____DOT__gen_rr_arbiter__DOT__u_arb__DOT__gen_normal_case__DOT__prio_tree__BRA__2__KET__))));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__gen_prince__DOT__u_cipher__DOT__valid_i 
        = ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_op__DOT__gen_input_bufs__BRA__0__KET____DOT__gen_rr_arbiter__DOT__u_arb__DOT__ready_i)) 
           & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__gen_prince__DOT__u_cipher__DOT__gen_data_reg__DOT__valid_q)) 
              & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_op__DOT__gen_input_bufs__BRA__0__KET____DOT__gen_rr_arbiter__DOT__u_arb__DOT__valid_o)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_op__DOT__data_i[0U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT____Vcellinp__u_prim_arbiter_tree_op__data_i
        [0U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_op__DOT__data_i[0U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT____Vcellinp__u_prim_arbiter_tree_op__data_i
        [0U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_op__DOT__data_i[0U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT____Vcellinp__u_prim_arbiter_tree_op__data_i
        [0U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_op__DOT__data_i[0U][3U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT____Vcellinp__u_prim_arbiter_tree_op__data_i
        [0U][3U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_op__DOT__data_i[0U][4U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT____Vcellinp__u_prim_arbiter_tree_op__data_i
        [0U][4U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_op__DOT__data_i[1U][0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT____Vcellinp__u_prim_arbiter_tree_op__data_i
        [1U][0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_op__DOT__data_i[1U][1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT____Vcellinp__u_prim_arbiter_tree_op__data_i
        [1U][1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_op__DOT__data_i[1U][2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT____Vcellinp__u_prim_arbiter_tree_op__data_i
        [1U][2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_op__DOT__data_i[1U][3U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT____Vcellinp__u_prim_arbiter_tree_op__data_i
        [1U][3U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_op__DOT__data_i[1U][4U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT____Vcellinp__u_prim_arbiter_tree_op__data_i
        [1U][4U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_op__DOT__gen_input_bufs__BRA__0__KET____DOT__gen_rr_arbiter__DOT__u_arb__DOT__gen_normal_case__DOT__prio_mask_d 
        = ((2U & (((0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_op__DOT__gen_input_bufs__BRA__0__KET____DOT__u_req_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))
                    ? ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_op__DOT__gen_input_bufs__BRA__0__KET____DOT__gen_rr_arbiter__DOT__u_arb__DOT__idx_o)) 
                       | ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_op__DOT__gen_input_bufs__BRA__0__KET____DOT__gen_rr_arbiter__DOT__u_arb__DOT__ready_i)) 
                          & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_op__DOT__gen_input_bufs__BRA__0__KET____DOT__gen_rr_arbiter__DOT__u_arb__DOT__idx_o)))
                    : ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_op__DOT__gen_input_bufs__BRA__0__KET____DOT__gen_rr_arbiter__DOT__u_arb__DOT__gen_normal_case__DOT__prio_mask_q) 
                       >> 1U)) << 1U)) | (1U & ((0U 
                                                 != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_op__DOT__gen_input_bufs__BRA__0__KET____DOT__u_req_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))
                                                 ? 
                                                ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_op__DOT__gen_input_bufs__BRA__0__KET____DOT__gen_rr_arbiter__DOT__u_arb__DOT__ready_i)) 
                                                 & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_op__DOT__gen_input_bufs__BRA__0__KET____DOT__gen_rr_arbiter__DOT__u_arb__DOT__idx_o)))
                                                 : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_op__DOT__gen_input_bufs__BRA__0__KET____DOT__gen_rr_arbiter__DOT__u_arb__DOT__gen_normal_case__DOT__prio_mask_q))));
    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_op__DOT__gen_input_bufs__BRA__0__KET____DOT__gen_rr_arbiter__DOT__u_arb__DOT__idx_o) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_op__DOT__gen_input_bufs__BRA__0__KET____DOT__gen_rr_arbiter__DOT__u_arb__DOT__data_o[0U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_op__DOT__gen_input_bufs__BRA__0__KET____DOT__gen_data_bufs__BRA__1__KET____DOT__u_dat_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i[0U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_op__DOT__gen_input_bufs__BRA__0__KET____DOT__gen_rr_arbiter__DOT__u_arb__DOT__data_o[1U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_op__DOT__gen_input_bufs__BRA__0__KET____DOT__gen_data_bufs__BRA__1__KET____DOT__u_dat_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i[1U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_op__DOT__gen_input_bufs__BRA__0__KET____DOT__gen_rr_arbiter__DOT__u_arb__DOT__data_o[2U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_op__DOT__gen_input_bufs__BRA__0__KET____DOT__gen_data_bufs__BRA__1__KET____DOT__u_dat_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i[2U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_op__DOT__gen_input_bufs__BRA__0__KET____DOT__gen_rr_arbiter__DOT__u_arb__DOT__data_o[3U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_op__DOT__gen_input_bufs__BRA__0__KET____DOT__gen_data_bufs__BRA__1__KET____DOT__u_dat_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i[3U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_op__DOT__gen_input_bufs__BRA__0__KET____DOT__gen_rr_arbiter__DOT__u_arb__DOT__data_o[4U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_op__DOT__gen_input_bufs__BRA__0__KET____DOT__gen_data_bufs__BRA__1__KET____DOT__u_dat_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i[4U];
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_op__DOT__gen_input_bufs__BRA__0__KET____DOT__gen_rr_arbiter__DOT__u_arb__DOT__data_o[0U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_op__DOT__gen_input_bufs__BRA__0__KET____DOT__gen_data_bufs__BRA__0__KET____DOT__u_dat_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i[0U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_op__DOT__gen_input_bufs__BRA__0__KET____DOT__gen_rr_arbiter__DOT__u_arb__DOT__data_o[1U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_op__DOT__gen_input_bufs__BRA__0__KET____DOT__gen_data_bufs__BRA__0__KET____DOT__u_dat_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i[1U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_op__DOT__gen_input_bufs__BRA__0__KET____DOT__gen_rr_arbiter__DOT__u_arb__DOT__data_o[2U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_op__DOT__gen_input_bufs__BRA__0__KET____DOT__gen_data_bufs__BRA__0__KET____DOT__u_dat_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i[2U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_op__DOT__gen_input_bufs__BRA__0__KET____DOT__gen_rr_arbiter__DOT__u_arb__DOT__data_o[3U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_op__DOT__gen_input_bufs__BRA__0__KET____DOT__gen_data_bufs__BRA__0__KET____DOT__u_dat_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i[3U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_op__DOT__gen_input_bufs__BRA__0__KET____DOT__gen_rr_arbiter__DOT__u_arb__DOT__data_o[4U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_op__DOT__gen_input_bufs__BRA__0__KET____DOT__gen_data_bufs__BRA__0__KET____DOT__u_dat_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i[4U];
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_op__DOT__gen_input_bufs__BRA__1__KET____DOT__gen_rr_arbiter__DOT__u_arb__DOT__gen_normal_case__DOT__prio_mask_d 
        = ((2U & (((0U != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_op__DOT__gen_input_bufs__BRA__0__KET____DOT__u_req_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))
                    ? ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_op__DOT__gen_input_bufs__BRA__1__KET____DOT__gen_rr_arbiter__DOT__u_arb__DOT__idx_o)) 
                       | ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_op__DOT__gen_input_bufs__BRA__0__KET____DOT__gen_rr_arbiter__DOT__u_arb__DOT__ready_i)) 
                          & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_op__DOT__gen_input_bufs__BRA__1__KET____DOT__gen_rr_arbiter__DOT__u_arb__DOT__idx_o)))
                    : ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_op__DOT__gen_input_bufs__BRA__1__KET____DOT__gen_rr_arbiter__DOT__u_arb__DOT__gen_normal_case__DOT__prio_mask_q) 
                       >> 1U)) << 1U)) | (1U & ((0U 
                                                 != (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_op__DOT__gen_input_bufs__BRA__0__KET____DOT__u_req_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i))
                                                 ? 
                                                ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_op__DOT__gen_input_bufs__BRA__0__KET____DOT__gen_rr_arbiter__DOT__u_arb__DOT__ready_i)) 
                                                 & (~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_op__DOT__gen_input_bufs__BRA__1__KET____DOT__gen_rr_arbiter__DOT__u_arb__DOT__idx_o)))
                                                 : (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_op__DOT__gen_input_bufs__BRA__1__KET____DOT__gen_rr_arbiter__DOT__u_arb__DOT__gen_normal_case__DOT__prio_mask_q))));
    if (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_op__DOT__gen_input_bufs__BRA__1__KET____DOT__gen_rr_arbiter__DOT__u_arb__DOT__idx_o) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_op__DOT__gen_input_bufs__BRA__1__KET____DOT__gen_rr_arbiter__DOT__u_arb__DOT__data_o[0U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_op__DOT__gen_input_bufs__BRA__0__KET____DOT__gen_data_bufs__BRA__1__KET____DOT__u_dat_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i[0U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_op__DOT__gen_input_bufs__BRA__1__KET____DOT__gen_rr_arbiter__DOT__u_arb__DOT__data_o[1U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_op__DOT__gen_input_bufs__BRA__0__KET____DOT__gen_data_bufs__BRA__1__KET____DOT__u_dat_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i[1U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_op__DOT__gen_input_bufs__BRA__1__KET____DOT__gen_rr_arbiter__DOT__u_arb__DOT__data_o[2U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_op__DOT__gen_input_bufs__BRA__0__KET____DOT__gen_data_bufs__BRA__1__KET____DOT__u_dat_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i[2U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_op__DOT__gen_input_bufs__BRA__1__KET____DOT__gen_rr_arbiter__DOT__u_arb__DOT__data_o[3U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_op__DOT__gen_input_bufs__BRA__0__KET____DOT__gen_data_bufs__BRA__1__KET____DOT__u_dat_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i[3U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_op__DOT__gen_input_bufs__BRA__1__KET____DOT__gen_rr_arbiter__DOT__u_arb__DOT__data_o[4U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_op__DOT__gen_input_bufs__BRA__0__KET____DOT__gen_data_bufs__BRA__1__KET____DOT__u_dat_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i[4U];
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_op__DOT__gen_input_bufs__BRA__1__KET____DOT__gen_rr_arbiter__DOT__u_arb__DOT__data_o[0U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_op__DOT__gen_input_bufs__BRA__0__KET____DOT__gen_data_bufs__BRA__0__KET____DOT__u_dat_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i[0U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_op__DOT__gen_input_bufs__BRA__1__KET____DOT__gen_rr_arbiter__DOT__u_arb__DOT__data_o[1U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_op__DOT__gen_input_bufs__BRA__0__KET____DOT__gen_data_bufs__BRA__0__KET____DOT__u_dat_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i[1U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_op__DOT__gen_input_bufs__BRA__1__KET____DOT__gen_rr_arbiter__DOT__u_arb__DOT__data_o[2U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_op__DOT__gen_input_bufs__BRA__0__KET____DOT__gen_data_bufs__BRA__0__KET____DOT__u_dat_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i[2U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_op__DOT__gen_input_bufs__BRA__1__KET____DOT__gen_rr_arbiter__DOT__u_arb__DOT__data_o[3U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_op__DOT__gen_input_bufs__BRA__0__KET____DOT__gen_data_bufs__BRA__0__KET____DOT__u_dat_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i[3U];
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_op__DOT__gen_input_bufs__BRA__1__KET____DOT__gen_rr_arbiter__DOT__u_arb__DOT__data_o[4U] 
            = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_op__DOT__gen_input_bufs__BRA__0__KET____DOT__gen_data_bufs__BRA__0__KET____DOT__u_dat_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i[4U];
    }
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_op__DOT____VdfgRegularize_h093f8fef_0_0[0U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_op__DOT__gen_input_bufs__BRA__0__KET____DOT__gen_rr_arbiter__DOT__u_arb__DOT__data_o[0U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_op__DOT____VdfgRegularize_h093f8fef_0_0[1U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_op__DOT__gen_input_bufs__BRA__0__KET____DOT__gen_rr_arbiter__DOT__u_arb__DOT__data_o[1U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_op__DOT____VdfgRegularize_h093f8fef_0_0[2U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_op__DOT__gen_input_bufs__BRA__0__KET____DOT__gen_rr_arbiter__DOT__u_arb__DOT__data_o[2U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_op__DOT____VdfgRegularize_h093f8fef_0_0[3U] 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_op__DOT__gen_input_bufs__BRA__0__KET____DOT__gen_rr_arbiter__DOT__u_arb__DOT__data_o[3U];
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_op__DOT____VdfgRegularize_h093f8fef_0_0[4U] 
        = ((0x0000001eU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_op__DOT____VdfgRegularize_h093f8fef_0_0[4U]) 
           | (0x0000001fU & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_op__DOT__gen_input_bufs__BRA__0__KET____DOT__gen_rr_arbiter__DOT__u_arb__DOT__data_o[4U]));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_op__DOT____VdfgRegularize_h093f8fef_0_0[4U] 
        = ((1U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_op__DOT____VdfgRegularize_h093f8fef_0_0[4U]) 
           | (0x0000001fU & (((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_op__DOT__gen_input_bufs__BRA__0__KET____DOT__gen_rr_arbiter__DOT__u_arb__DOT__valid_o) 
                                << 3U) | (((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_op__DOT__gen_input_bufs__BRA__0__KET____DOT__gen_rr_arbiter__DOT__u_arb__DOT__gen_normal_case__DOT__req_tree__BRA__2__KET__) 
                                           & ((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_op__DOT__gen_input_bufs__BRA__0__KET____DOT__gen_rr_arbiter__DOT__u_arb__DOT__idx_o) 
                                              & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_op__DOT__gen_input_bufs__BRA__0__KET____DOT__gen_rr_arbiter__DOT__u_arb__DOT__ready_i))) 
                                          << 2U)) | 
                              ((((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_op__DOT__gen_input_bufs__BRA__0__KET____DOT__gen_rr_arbiter__DOT__u_arb__DOT__gen_normal_case__DOT__req_tree__BRA__1__KET__) 
                                 & ((~ (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_op__DOT__gen_input_bufs__BRA__0__KET____DOT__gen_rr_arbiter__DOT__u_arb__DOT__idx_o)) 
                                    & (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_op__DOT__gen_input_bufs__BRA__0__KET____DOT__gen_rr_arbiter__DOT__u_arb__DOT__ready_i))) 
                                << 1U) | (IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_op__DOT__gen_input_bufs__BRA__0__KET____DOT__gen_rr_arbiter__DOT__u_arb__DOT__idx_o))) 
                             << 1U)));
    if ((1U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_op__DOT__gen_input_bufs__BRA__1__KET____DOT__gen_rr_arbiter__DOT__u_arb__DOT__data_o[4U])) {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__gen_prince__DOT__u_cipher__DOT__k0_new_d 
            = (0xc0ac29b7c97c50ddULL ^ (((QData)((IData)(
                                                         vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__gen_prince__DOT__u_cipher__DOT__key_i[3U])) 
                                         << 0x00000020U) 
                                        | (QData)((IData)(
                                                          vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__gen_prince__DOT__u_cipher__DOT__key_i[2U]))));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__gen_prince__DOT__u_cipher__DOT__k1_d 
            = (0xc0ac29b7c97c50ddULL ^ (((QData)((IData)(
                                                         vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__gen_prince__DOT__u_cipher__DOT__key_i[1U])) 
                                         << 0x00000020U) 
                                        | (QData)((IData)(
                                                          vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__gen_prince__DOT__u_cipher__DOT__key_i[0U]))));
    } else {
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__gen_prince__DOT__u_cipher__DOT__k0_new_d 
            = (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__gen_prince__DOT__u_cipher__DOT__key_i[3U])) 
                << 0x00000020U) | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__gen_prince__DOT__u_cipher__DOT__key_i[2U])));
        vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__gen_prince__DOT__u_cipher__DOT__k1_d 
            = (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__gen_prince__DOT__u_cipher__DOT__key_i[1U])) 
                << 0x00000020U) | (QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__gen_prince__DOT__u_cipher__DOT__key_i[0U])));
    }
    __Vfunc_prince_shiftrows_64bit__1084__state_in 
        = (0x7ef84f78fd955cb1ULL ^ (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__gen_prince__DOT__u_cipher__DOT__data_state_middle 
                                    ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__gen_prince__DOT__u_cipher__DOT__k0_new_d));
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__Vfunc_prince_shiftrows_64bit__1084__state_out = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 1795607167409275693ull);
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__1084__state_out 
        = ((0xfffffffffffff000ULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__1084__state_out) 
           | (IData)((IData)(((0x00000f00U & ((IData)(
                                                      (__Vfunc_prince_shiftrows_64bit__1084__state_in 
                                                       >> 0x18U)) 
                                              << 8U)) 
                              | ((0x000000f0U & ((IData)(
                                                         (__Vfunc_prince_shiftrows_64bit__1084__state_in 
                                                          >> 0x24U)) 
                                                 << 4U)) 
                                 | (0x0000000fU & (IData)(
                                                          (__Vfunc_prince_shiftrows_64bit__1084__state_in 
                                                           >> 0x30U))))))));
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__1084__state_out 
        = ((0xffffffffff000fffULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__1084__state_out) 
           | ((QData)((IData)(((0x00000f00U & ((IData)(
                                                       (__Vfunc_prince_shiftrows_64bit__1084__state_in 
                                                        >> 0x34U)) 
                                               << 8U)) 
                               | ((0x000000f0U & ((IData)(__Vfunc_prince_shiftrows_64bit__1084__state_in) 
                                                  << 4U)) 
                                  | (0x0000000fU & (IData)(
                                                           (__Vfunc_prince_shiftrows_64bit__1084__state_in 
                                                            >> 0x0cU))))))) 
              << 0x0000000cU));
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__1084__state_out 
        = ((0xfffffff000ffffffULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__1084__state_out) 
           | ((QData)((IData)(((0x00000f00U & ((IData)(
                                                       (__Vfunc_prince_shiftrows_64bit__1084__state_in 
                                                        >> 0x10U)) 
                                               << 8U)) 
                               | ((0x000000f0U & ((IData)(
                                                          (__Vfunc_prince_shiftrows_64bit__1084__state_in 
                                                           >> 0x1cU)) 
                                                  << 4U)) 
                                  | (0x0000000fU & (IData)(
                                                           (__Vfunc_prince_shiftrows_64bit__1084__state_in 
                                                            >> 0x28U))))))) 
              << 0x00000018U));
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__1084__state_out 
        = ((0xffff000fffffffffULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__1084__state_out) 
           | ((QData)((IData)(((0x00000f00U & ((IData)(
                                                       (__Vfunc_prince_shiftrows_64bit__1084__state_in 
                                                        >> 0x2cU)) 
                                               << 8U)) 
                               | ((0x000000f0U & ((IData)(
                                                          (__Vfunc_prince_shiftrows_64bit__1084__state_in 
                                                           >> 0x38U)) 
                                                  << 4U)) 
                                  | (0x0000000fU & (IData)(
                                                           (__Vfunc_prince_shiftrows_64bit__1084__state_in 
                                                            >> 4U))))))) 
              << 0x00000024U));
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__1084__state_out 
        = ((0xf000ffffffffffffULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__1084__state_out) 
           | ((QData)((IData)(((0x00000f00U & ((IData)(
                                                       (__Vfunc_prince_shiftrows_64bit__1084__state_in 
                                                        >> 8U)) 
                                               << 8U)) 
                               | ((0x000000f0U & ((IData)(
                                                          (__Vfunc_prince_shiftrows_64bit__1084__state_in 
                                                           >> 0x14U)) 
                                                  << 4U)) 
                                  | (0x0000000fU & (IData)(
                                                           (__Vfunc_prince_shiftrows_64bit__1084__state_in 
                                                            >> 0x20U))))))) 
              << 0x00000030U));
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__1084__state_out 
        = ((0x0fffffffffffffffULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__1084__state_out) 
           | ((QData)((IData)((0x0000000fU & (IData)(
                                                     (__Vfunc_prince_shiftrows_64bit__1084__state_in 
                                                      >> 0x3cU))))) 
              << 0x0000003cU));
    __Vfunc_prince_shiftrows_64bit__1084__Vfuncout 
        = vlSelfRef.__Vfunc_prince_shiftrows_64bit__1084__state_out;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__gen_prince__DOT__u_cipher__DOT____VdfgExtracted_hc734f68f__3 
        = __Vfunc_prince_shiftrows_64bit__1084__Vfuncout;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__gen_prince__DOT__u_cipher__DOT__data_state_lo__BRA__63__03a0__KET__ 
        = (((1U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_op__DOT__gen_input_bufs__BRA__1__KET____DOT__gen_rr_arbiter__DOT__u_arb__DOT__data_o[4U])
             ? (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_op__DOT__gen_input_bufs__BRA__1__KET____DOT__gen_rr_arbiter__DOT__u_arb__DOT__data_o[1U])) 
                 << 0x00000020U) | (QData)((IData)(
                                                   vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_op__DOT__gen_input_bufs__BRA__1__KET____DOT__gen_rr_arbiter__DOT__u_arb__DOT__data_o[0U])))
             : (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_op__DOT__gen_input_bufs__BRA__1__KET____DOT__gen_rr_arbiter__DOT__u_arb__DOT__data_o[3U])) 
                 << 0x00000020U) | (QData)((IData)(
                                                   vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_op__DOT__gen_input_bufs__BRA__1__KET____DOT__gen_rr_arbiter__DOT__u_arb__DOT__data_o[2U])))) 
           ^ (((1U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_op__DOT__gen_input_bufs__BRA__1__KET____DOT__gen_rr_arbiter__DOT__u_arb__DOT__data_o[4U])
                ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_65
                : (((QData)((IData)(vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__gen_prince__DOT__u_cipher__DOT__key_i[3U])) 
                    << 0x00000020U) | (QData)((IData)(
                                                      vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__gen_prince__DOT__u_cipher__DOT__key_i[2U])))) 
              ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__gen_prince__DOT__u_cipher__DOT__k1_d));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__gen_prince__DOT__u_cipher__DOT__gen_bwd_pass__BRA__1__KET____DOT__data_state_bwd 
        = chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__gen_prince__DOT__u_cipher__DOT____VdfgExtracted_hc734f68f__3;
    __Vfunc_prince_mult_prime_64bit__979__state_in 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__gen_prince__DOT__u_cipher__DOT__gen_bwd_pass__BRA__1__KET____DOT__data_state_bwd;
    vlSelf->__Vfunc_prince_mult_prime_64bit__979__state_out = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 17694125547639848214ull);
    __Vfunc_prince_nibble_red16__980__vect = (0xe7bdU 
                                              & (IData)(__Vfunc_prince_mult_prime_64bit__979__state_in));
    __Vfunc_prince_nibble_red16__980__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__980__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__980__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__980__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__980__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__979__state_out 
        = ((0xfffffffffffffff0ULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__979__state_out) 
           | (IData)((IData)(__Vfunc_prince_nibble_red16__980__Vfuncout)));
    __Vfunc_prince_nibble_red16__981__vect = (0xde7bU 
                                              & (IData)(__Vfunc_prince_mult_prime_64bit__979__state_in));
    __Vfunc_prince_nibble_red16__981__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__981__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__981__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__981__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__981__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__979__state_out 
        = ((0xffffffffffffff0fULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__979__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__981__Vfuncout)) 
              << 4U));
    __Vfunc_prince_nibble_red16__982__vect = (0xbde7U 
                                              & (IData)(__Vfunc_prince_mult_prime_64bit__979__state_in));
    __Vfunc_prince_nibble_red16__982__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__982__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__982__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__982__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__982__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__979__state_out 
        = ((0xfffffffffffff0ffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__979__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__982__Vfuncout)) 
              << 8U));
    __Vfunc_prince_nibble_red16__983__vect = (0x7bdeU 
                                              & (IData)(__Vfunc_prince_mult_prime_64bit__979__state_in));
    __Vfunc_prince_nibble_red16__983__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__983__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__983__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__983__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__983__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__979__state_out 
        = ((0xffffffffffff0fffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__979__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__983__Vfuncout)) 
              << 0x0000000cU));
    __Vfunc_prince_nibble_red16__984__vect = (0x7bdeU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__979__state_in 
                                                         >> 0x10U)));
    __Vfunc_prince_nibble_red16__984__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__984__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__984__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__984__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__984__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__979__state_out 
        = ((0xfffffffffff0ffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__979__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__984__Vfuncout)) 
              << 0x00000010U));
    __Vfunc_prince_nibble_red16__985__vect = (0xe7bdU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__979__state_in 
                                                         >> 0x10U)));
    __Vfunc_prince_nibble_red16__985__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__985__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__985__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__985__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__985__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__979__state_out 
        = ((0xffffffffff0fffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__979__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__985__Vfuncout)) 
              << 0x00000014U));
    __Vfunc_prince_nibble_red16__986__vect = (0xde7bU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__979__state_in 
                                                         >> 0x10U)));
    __Vfunc_prince_nibble_red16__986__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__986__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__986__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__986__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__986__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__979__state_out 
        = ((0xfffffffff0ffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__979__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__986__Vfuncout)) 
              << 0x00000018U));
    __Vfunc_prince_nibble_red16__987__vect = (0xbde7U 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__979__state_in 
                                                         >> 0x10U)));
    __Vfunc_prince_nibble_red16__987__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__987__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__987__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__987__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__987__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__979__state_out 
        = ((0xffffffff0fffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__979__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__987__Vfuncout)) 
              << 0x0000001cU));
    __Vfunc_prince_nibble_red16__988__vect = (0x7bdeU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__979__state_in 
                                                         >> 0x20U)));
    __Vfunc_prince_nibble_red16__988__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__988__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__988__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__988__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__988__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__979__state_out 
        = ((0xfffffff0ffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__979__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__988__Vfuncout)) 
              << 0x00000020U));
    __Vfunc_prince_nibble_red16__989__vect = (0xe7bdU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__979__state_in 
                                                         >> 0x20U)));
    __Vfunc_prince_nibble_red16__989__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__989__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__989__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__989__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__989__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__979__state_out 
        = ((0xffffff0fffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__979__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__989__Vfuncout)) 
              << 0x00000024U));
    __Vfunc_prince_nibble_red16__990__vect = (0xde7bU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__979__state_in 
                                                         >> 0x20U)));
    __Vfunc_prince_nibble_red16__990__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__990__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__990__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__990__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__990__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__979__state_out 
        = ((0xfffff0ffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__979__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__990__Vfuncout)) 
              << 0x00000028U));
    __Vfunc_prince_nibble_red16__991__vect = (0xbde7U 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__979__state_in 
                                                         >> 0x20U)));
    __Vfunc_prince_nibble_red16__991__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__991__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__991__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__991__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__991__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__979__state_out 
        = ((0xffff0fffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__979__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__991__Vfuncout)) 
              << 0x0000002cU));
    __Vfunc_prince_nibble_red16__992__vect = (0xe7bdU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__979__state_in 
                                                         >> 0x30U)));
    __Vfunc_prince_nibble_red16__992__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__992__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__992__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__992__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__992__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__979__state_out 
        = ((0xfff0ffffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__979__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__992__Vfuncout)) 
              << 0x00000030U));
    __Vfunc_prince_nibble_red16__993__vect = (0xde7bU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__979__state_in 
                                                         >> 0x30U)));
    __Vfunc_prince_nibble_red16__993__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__993__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__993__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__993__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__993__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__979__state_out 
        = ((0xff0fffffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__979__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__993__Vfuncout)) 
              << 0x00000034U));
    __Vfunc_prince_nibble_red16__994__vect = (0xbde7U 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__979__state_in 
                                                         >> 0x30U)));
    __Vfunc_prince_nibble_red16__994__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__994__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__994__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__994__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__994__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__979__state_out 
        = ((0xf0ffffffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__979__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__994__Vfuncout)) 
              << 0x00000038U));
    __Vfunc_prince_nibble_red16__995__vect = (0x7bdeU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__979__state_in 
                                                         >> 0x30U)));
    __Vfunc_prince_nibble_red16__995__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__995__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__995__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__995__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__995__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__979__state_out 
        = ((0x0fffffffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__979__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__995__Vfuncout)) 
              << 0x0000003cU));
    __Vfunc_prince_mult_prime_64bit__979__Vfuncout 
        = vlSelfRef.__Vfunc_prince_mult_prime_64bit__979__state_out;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__gen_prince__DOT__u_cipher__DOT__gen_bwd_pass__BRA__1__KET____DOT__data_state_bwd 
        = __Vfunc_prince_mult_prime_64bit__979__Vfuncout;
    __Vfunc_sbox4_64bit__996__state_in = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__gen_prince__DOT__u_cipher__DOT__gen_bwd_pass__BRA__1__KET____DOT__data_state_bwd;
    vlSelf->__Vfunc_sbox4_64bit__996__state_out = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 9640676660352284353ull);
    __Vfunc_sbox4_8bit__997__state_in = (0x000000ffU 
                                         & (IData)(__Vfunc_sbox4_64bit__996__state_in));
    vlSelf->__Vfunc_sbox4_8bit__997__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14871678324380828402ull);
    vlSelfRef.__Vfunc_sbox4_8bit__997__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__997__state_out)) 
         | (0x0000000fU & (IData)((0x1ce5046a98df237bULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__997__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__997__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__997__state_out)) 
         | (0x000000f0U & ((IData)((0x1ce5046a98df237bULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__997__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__997__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__997__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__996__state_out = 
        ((0xffffffffffffff00ULL & vlSelfRef.__Vfunc_sbox4_64bit__996__state_out) 
         | (IData)((IData)(__Vfunc_sbox4_8bit__997__Vfuncout)));
    __Vfunc_sbox4_8bit__997__state_in = (0x000000ffU 
                                         & (IData)(
                                                   (__Vfunc_sbox4_64bit__996__state_in 
                                                    >> 8U)));
    vlSelf->__Vfunc_sbox4_8bit__997__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14871678324380828402ull);
    vlSelfRef.__Vfunc_sbox4_8bit__997__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__997__state_out)) 
         | (0x0000000fU & (IData)((0x1ce5046a98df237bULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__997__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__997__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__997__state_out)) 
         | (0x000000f0U & ((IData)((0x1ce5046a98df237bULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__997__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__997__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__997__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__996__state_out = 
        ((0xffffffffffff00ffULL & vlSelfRef.__Vfunc_sbox4_64bit__996__state_out) 
         | ((QData)((IData)(__Vfunc_sbox4_8bit__997__Vfuncout)) 
            << 8U));
    __Vfunc_sbox4_8bit__997__state_in = (0x000000ffU 
                                         & (IData)(
                                                   (__Vfunc_sbox4_64bit__996__state_in 
                                                    >> 0x10U)));
    vlSelf->__Vfunc_sbox4_8bit__997__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14871678324380828402ull);
    vlSelfRef.__Vfunc_sbox4_8bit__997__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__997__state_out)) 
         | (0x0000000fU & (IData)((0x1ce5046a98df237bULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__997__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__997__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__997__state_out)) 
         | (0x000000f0U & ((IData)((0x1ce5046a98df237bULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__997__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__997__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__997__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__996__state_out = 
        ((0xffffffffff00ffffULL & vlSelfRef.__Vfunc_sbox4_64bit__996__state_out) 
         | ((QData)((IData)(__Vfunc_sbox4_8bit__997__Vfuncout)) 
            << 0x00000010U));
    __Vfunc_sbox4_8bit__997__state_in = (0x000000ffU 
                                         & (IData)(
                                                   (__Vfunc_sbox4_64bit__996__state_in 
                                                    >> 0x18U)));
    vlSelf->__Vfunc_sbox4_8bit__997__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14871678324380828402ull);
    vlSelfRef.__Vfunc_sbox4_8bit__997__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__997__state_out)) 
         | (0x0000000fU & (IData)((0x1ce5046a98df237bULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__997__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__997__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__997__state_out)) 
         | (0x000000f0U & ((IData)((0x1ce5046a98df237bULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__997__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__997__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__997__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__996__state_out = 
        ((0xffffffff00ffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__996__state_out) 
         | ((QData)((IData)(__Vfunc_sbox4_8bit__997__Vfuncout)) 
            << 0x00000018U));
    __Vfunc_sbox4_8bit__997__state_in = (0x000000ffU 
                                         & (IData)(
                                                   (__Vfunc_sbox4_64bit__996__state_in 
                                                    >> 0x20U)));
    vlSelf->__Vfunc_sbox4_8bit__997__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14871678324380828402ull);
    vlSelfRef.__Vfunc_sbox4_8bit__997__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__997__state_out)) 
         | (0x0000000fU & (IData)((0x1ce5046a98df237bULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__997__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__997__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__997__state_out)) 
         | (0x000000f0U & ((IData)((0x1ce5046a98df237bULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__997__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__997__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__997__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__996__state_out = 
        ((0xffffff00ffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__996__state_out) 
         | ((QData)((IData)(__Vfunc_sbox4_8bit__997__Vfuncout)) 
            << 0x00000020U));
    __Vfunc_sbox4_8bit__997__state_in = (0x000000ffU 
                                         & (IData)(
                                                   (__Vfunc_sbox4_64bit__996__state_in 
                                                    >> 0x28U)));
    vlSelf->__Vfunc_sbox4_8bit__997__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14871678324380828402ull);
    vlSelfRef.__Vfunc_sbox4_8bit__997__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__997__state_out)) 
         | (0x0000000fU & (IData)((0x1ce5046a98df237bULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__997__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__997__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__997__state_out)) 
         | (0x000000f0U & ((IData)((0x1ce5046a98df237bULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__997__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__997__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__997__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__996__state_out = 
        ((0xffff00ffffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__996__state_out) 
         | ((QData)((IData)(__Vfunc_sbox4_8bit__997__Vfuncout)) 
            << 0x00000028U));
    __Vfunc_sbox4_8bit__997__state_in = (0x000000ffU 
                                         & (IData)(
                                                   (__Vfunc_sbox4_64bit__996__state_in 
                                                    >> 0x30U)));
    vlSelf->__Vfunc_sbox4_8bit__997__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14871678324380828402ull);
    vlSelfRef.__Vfunc_sbox4_8bit__997__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__997__state_out)) 
         | (0x0000000fU & (IData)((0x1ce5046a98df237bULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__997__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__997__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__997__state_out)) 
         | (0x000000f0U & ((IData)((0x1ce5046a98df237bULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__997__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__997__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__997__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__996__state_out = 
        ((0xff00ffffffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__996__state_out) 
         | ((QData)((IData)(__Vfunc_sbox4_8bit__997__Vfuncout)) 
            << 0x00000030U));
    __Vfunc_sbox4_8bit__997__state_in = (0x000000ffU 
                                         & (IData)(
                                                   (__Vfunc_sbox4_64bit__996__state_in 
                                                    >> 0x38U)));
    vlSelf->__Vfunc_sbox4_8bit__997__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14871678324380828402ull);
    vlSelfRef.__Vfunc_sbox4_8bit__997__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__997__state_out)) 
         | (0x0000000fU & (IData)((0x1ce5046a98df237bULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__997__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__997__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__997__state_out)) 
         | (0x000000f0U & ((IData)((0x1ce5046a98df237bULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__997__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__997__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__997__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__996__state_out = 
        ((0x00ffffffffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__996__state_out) 
         | ((QData)((IData)(__Vfunc_sbox4_8bit__997__Vfuncout)) 
            << 0x00000038U));
    __Vfunc_sbox4_64bit__996__Vfuncout = vlSelfRef.__Vfunc_sbox4_64bit__996__state_out;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__gen_prince__DOT__u_cipher__DOT__data_state_hi__BRA__127__03a64__KET__ 
        = __Vfunc_sbox4_64bit__996__Vfuncout;
    __Vfunc_sbox4_64bit__868__state_in = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__gen_prince__DOT__u_cipher__DOT__data_state_lo__BRA__63__03a0__KET__;
    vlSelf->__Vfunc_sbox4_64bit__868__state_out = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 4226299597487716612ull);
    __Vfunc_sbox4_8bit__869__state_in = (0x000000ffU 
                                         & (IData)(__Vfunc_sbox4_64bit__868__state_in));
    vlSelf->__Vfunc_sbox4_8bit__869__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5774657916208788660ull);
    vlSelfRef.__Vfunc_sbox4_8bit__869__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__869__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__869__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__869__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__869__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__869__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__869__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__869__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__868__state_out = 
        ((0xffffffffffffff00ULL & vlSelfRef.__Vfunc_sbox4_64bit__868__state_out) 
         | (IData)((IData)(__Vfunc_sbox4_8bit__869__Vfuncout)));
    __Vfunc_sbox4_8bit__869__state_in = (0x000000ffU 
                                         & (IData)(
                                                   (__Vfunc_sbox4_64bit__868__state_in 
                                                    >> 8U)));
    vlSelf->__Vfunc_sbox4_8bit__869__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5774657916208788660ull);
    vlSelfRef.__Vfunc_sbox4_8bit__869__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__869__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__869__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__869__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__869__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__869__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__869__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__869__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__868__state_out = 
        ((0xffffffffffff00ffULL & vlSelfRef.__Vfunc_sbox4_64bit__868__state_out) 
         | ((QData)((IData)(__Vfunc_sbox4_8bit__869__Vfuncout)) 
            << 8U));
    __Vfunc_sbox4_8bit__869__state_in = (0x000000ffU 
                                         & (IData)(
                                                   (__Vfunc_sbox4_64bit__868__state_in 
                                                    >> 0x10U)));
    vlSelf->__Vfunc_sbox4_8bit__869__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5774657916208788660ull);
    vlSelfRef.__Vfunc_sbox4_8bit__869__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__869__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__869__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__869__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__869__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__869__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__869__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__869__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__868__state_out = 
        ((0xffffffffff00ffffULL & vlSelfRef.__Vfunc_sbox4_64bit__868__state_out) 
         | ((QData)((IData)(__Vfunc_sbox4_8bit__869__Vfuncout)) 
            << 0x00000010U));
    __Vfunc_sbox4_8bit__869__state_in = (0x000000ffU 
                                         & (IData)(
                                                   (__Vfunc_sbox4_64bit__868__state_in 
                                                    >> 0x18U)));
    vlSelf->__Vfunc_sbox4_8bit__869__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5774657916208788660ull);
    vlSelfRef.__Vfunc_sbox4_8bit__869__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__869__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__869__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__869__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__869__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__869__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__869__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__869__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__868__state_out = 
        ((0xffffffff00ffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__868__state_out) 
         | ((QData)((IData)(__Vfunc_sbox4_8bit__869__Vfuncout)) 
            << 0x00000018U));
    __Vfunc_sbox4_8bit__869__state_in = (0x000000ffU 
                                         & (IData)(
                                                   (__Vfunc_sbox4_64bit__868__state_in 
                                                    >> 0x20U)));
    vlSelf->__Vfunc_sbox4_8bit__869__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5774657916208788660ull);
    vlSelfRef.__Vfunc_sbox4_8bit__869__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__869__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__869__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__869__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__869__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__869__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__869__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__869__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__868__state_out = 
        ((0xffffff00ffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__868__state_out) 
         | ((QData)((IData)(__Vfunc_sbox4_8bit__869__Vfuncout)) 
            << 0x00000020U));
    __Vfunc_sbox4_8bit__869__state_in = (0x000000ffU 
                                         & (IData)(
                                                   (__Vfunc_sbox4_64bit__868__state_in 
                                                    >> 0x28U)));
    vlSelf->__Vfunc_sbox4_8bit__869__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5774657916208788660ull);
    vlSelfRef.__Vfunc_sbox4_8bit__869__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__869__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__869__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__869__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__869__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__869__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__869__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__869__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__868__state_out = 
        ((0xffff00ffffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__868__state_out) 
         | ((QData)((IData)(__Vfunc_sbox4_8bit__869__Vfuncout)) 
            << 0x00000028U));
    __Vfunc_sbox4_8bit__869__state_in = (0x000000ffU 
                                         & (IData)(
                                                   (__Vfunc_sbox4_64bit__868__state_in 
                                                    >> 0x30U)));
    vlSelf->__Vfunc_sbox4_8bit__869__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5774657916208788660ull);
    vlSelfRef.__Vfunc_sbox4_8bit__869__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__869__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__869__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__869__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__869__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__869__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__869__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__869__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__868__state_out = 
        ((0xff00ffffffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__868__state_out) 
         | ((QData)((IData)(__Vfunc_sbox4_8bit__869__Vfuncout)) 
            << 0x00000030U));
    __Vfunc_sbox4_8bit__869__state_in = (0x000000ffU 
                                         & (IData)(
                                                   (__Vfunc_sbox4_64bit__868__state_in 
                                                    >> 0x38U)));
    vlSelf->__Vfunc_sbox4_8bit__869__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5774657916208788660ull);
    vlSelfRef.__Vfunc_sbox4_8bit__869__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__869__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__869__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__869__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__869__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__869__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__869__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__869__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__868__state_out = 
        ((0x00ffffffffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__868__state_out) 
         | ((QData)((IData)(__Vfunc_sbox4_8bit__869__Vfuncout)) 
            << 0x00000038U));
    __Vfunc_sbox4_64bit__868__Vfuncout = vlSelfRef.__Vfunc_sbox4_64bit__868__state_out;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__gen_prince__DOT__u_cipher__DOT__gen_fwd_pass__BRA__1__KET____DOT__data_state_round 
        = __Vfunc_sbox4_64bit__868__Vfuncout;
    __Vfunc_prince_mult_prime_64bit__870__state_in 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__gen_prince__DOT__u_cipher__DOT__gen_fwd_pass__BRA__1__KET____DOT__data_state_round;
    vlSelf->__Vfunc_prince_mult_prime_64bit__870__state_out = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 4258484497256056583ull);
    __Vfunc_prince_nibble_red16__871__vect = (0xe7bdU 
                                              & (IData)(__Vfunc_prince_mult_prime_64bit__870__state_in));
    __Vfunc_prince_nibble_red16__871__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__871__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__871__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__871__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__871__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__870__state_out 
        = ((0xfffffffffffffff0ULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__870__state_out) 
           | (IData)((IData)(__Vfunc_prince_nibble_red16__871__Vfuncout)));
    __Vfunc_prince_nibble_red16__872__vect = (0xde7bU 
                                              & (IData)(__Vfunc_prince_mult_prime_64bit__870__state_in));
    __Vfunc_prince_nibble_red16__872__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__872__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__872__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__872__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__872__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__870__state_out 
        = ((0xffffffffffffff0fULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__870__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__872__Vfuncout)) 
              << 4U));
    __Vfunc_prince_nibble_red16__873__vect = (0xbde7U 
                                              & (IData)(__Vfunc_prince_mult_prime_64bit__870__state_in));
    __Vfunc_prince_nibble_red16__873__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__873__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__873__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__873__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__873__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__870__state_out 
        = ((0xfffffffffffff0ffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__870__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__873__Vfuncout)) 
              << 8U));
    __Vfunc_prince_nibble_red16__874__vect = (0x7bdeU 
                                              & (IData)(__Vfunc_prince_mult_prime_64bit__870__state_in));
    __Vfunc_prince_nibble_red16__874__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__874__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__874__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__874__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__874__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__870__state_out 
        = ((0xffffffffffff0fffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__870__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__874__Vfuncout)) 
              << 0x0000000cU));
    __Vfunc_prince_nibble_red16__875__vect = (0x7bdeU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__870__state_in 
                                                         >> 0x10U)));
    __Vfunc_prince_nibble_red16__875__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__875__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__875__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__875__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__875__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__870__state_out 
        = ((0xfffffffffff0ffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__870__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__875__Vfuncout)) 
              << 0x00000010U));
    __Vfunc_prince_nibble_red16__876__vect = (0xe7bdU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__870__state_in 
                                                         >> 0x10U)));
    __Vfunc_prince_nibble_red16__876__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__876__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__876__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__876__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__876__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__870__state_out 
        = ((0xffffffffff0fffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__870__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__876__Vfuncout)) 
              << 0x00000014U));
    __Vfunc_prince_nibble_red16__877__vect = (0xde7bU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__870__state_in 
                                                         >> 0x10U)));
    __Vfunc_prince_nibble_red16__877__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__877__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__877__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__877__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__877__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__870__state_out 
        = ((0xfffffffff0ffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__870__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__877__Vfuncout)) 
              << 0x00000018U));
    __Vfunc_prince_nibble_red16__878__vect = (0xbde7U 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__870__state_in 
                                                         >> 0x10U)));
    __Vfunc_prince_nibble_red16__878__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__878__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__878__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__878__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__878__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__870__state_out 
        = ((0xffffffff0fffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__870__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__878__Vfuncout)) 
              << 0x0000001cU));
    __Vfunc_prince_nibble_red16__879__vect = (0x7bdeU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__870__state_in 
                                                         >> 0x20U)));
    __Vfunc_prince_nibble_red16__879__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__879__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__879__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__879__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__879__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__870__state_out 
        = ((0xfffffff0ffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__870__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__879__Vfuncout)) 
              << 0x00000020U));
    __Vfunc_prince_nibble_red16__880__vect = (0xe7bdU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__870__state_in 
                                                         >> 0x20U)));
    __Vfunc_prince_nibble_red16__880__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__880__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__880__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__880__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__880__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__870__state_out 
        = ((0xffffff0fffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__870__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__880__Vfuncout)) 
              << 0x00000024U));
    __Vfunc_prince_nibble_red16__881__vect = (0xde7bU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__870__state_in 
                                                         >> 0x20U)));
    __Vfunc_prince_nibble_red16__881__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__881__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__881__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__881__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__881__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__870__state_out 
        = ((0xfffff0ffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__870__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__881__Vfuncout)) 
              << 0x00000028U));
    __Vfunc_prince_nibble_red16__882__vect = (0xbde7U 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__870__state_in 
                                                         >> 0x20U)));
    __Vfunc_prince_nibble_red16__882__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__882__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__882__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__882__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__882__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__870__state_out 
        = ((0xffff0fffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__870__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__882__Vfuncout)) 
              << 0x0000002cU));
    __Vfunc_prince_nibble_red16__883__vect = (0xe7bdU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__870__state_in 
                                                         >> 0x30U)));
    __Vfunc_prince_nibble_red16__883__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__883__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__883__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__883__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__883__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__870__state_out 
        = ((0xfff0ffffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__870__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__883__Vfuncout)) 
              << 0x00000030U));
    __Vfunc_prince_nibble_red16__884__vect = (0xde7bU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__870__state_in 
                                                         >> 0x30U)));
    __Vfunc_prince_nibble_red16__884__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__884__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__884__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__884__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__884__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__870__state_out 
        = ((0xff0fffffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__870__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__884__Vfuncout)) 
              << 0x00000034U));
    __Vfunc_prince_nibble_red16__885__vect = (0xbde7U 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__870__state_in 
                                                         >> 0x30U)));
    __Vfunc_prince_nibble_red16__885__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__885__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__885__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__885__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__885__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__870__state_out 
        = ((0xf0ffffffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__870__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__885__Vfuncout)) 
              << 0x00000038U));
    __Vfunc_prince_nibble_red16__886__vect = (0x7bdeU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__870__state_in 
                                                         >> 0x30U)));
    __Vfunc_prince_nibble_red16__886__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__886__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__886__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__886__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__886__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__870__state_out 
        = ((0x0fffffffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__870__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__886__Vfuncout)) 
              << 0x0000003cU));
    __Vfunc_prince_mult_prime_64bit__870__Vfuncout 
        = vlSelfRef.__Vfunc_prince_mult_prime_64bit__870__state_out;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__gen_prince__DOT__u_cipher__DOT__gen_fwd_pass__BRA__1__KET____DOT__data_state_round 
        = __Vfunc_prince_mult_prime_64bit__870__Vfuncout;
    __Vfunc_prince_shiftrows_64bit__887__state_in = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__gen_prince__DOT__u_cipher__DOT__gen_fwd_pass__BRA__1__KET____DOT__data_state_round;
    vlSelf->__Vfunc_prince_shiftrows_64bit__887__state_out = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 320339224751274100ull);
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__887__state_out 
        = ((0xfffffffffffff000ULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__887__state_out) 
           | (IData)((IData)(((0x00000f00U & ((IData)(
                                                      (__Vfunc_prince_shiftrows_64bit__887__state_in 
                                                       >> 0x38U)) 
                                              << 8U)) 
                              | ((0x000000f0U & ((IData)(
                                                         (__Vfunc_prince_shiftrows_64bit__887__state_in 
                                                          >> 0x24U)) 
                                                 << 4U)) 
                                 | (0x0000000fU & (IData)(
                                                          (__Vfunc_prince_shiftrows_64bit__887__state_in 
                                                           >> 0x10U))))))));
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__887__state_out 
        = ((0xffffffffff000fffULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__887__state_out) 
           | ((QData)((IData)(((0x00000f00U & ((IData)(
                                                       (__Vfunc_prince_shiftrows_64bit__887__state_in 
                                                        >> 0x34U)) 
                                               << 8U)) 
                               | ((0x000000f0U & ((IData)(
                                                          (__Vfunc_prince_shiftrows_64bit__887__state_in 
                                                           >> 0x20U)) 
                                                  << 4U)) 
                                  | (0x0000000fU & (IData)(
                                                           (__Vfunc_prince_shiftrows_64bit__887__state_in 
                                                            >> 0x0cU))))))) 
              << 0x0000000cU));
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__887__state_out 
        = ((0xfffffff000ffffffULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__887__state_out) 
           | ((QData)((IData)(((0x00000f00U & ((IData)(
                                                       (__Vfunc_prince_shiftrows_64bit__887__state_in 
                                                        >> 0x30U)) 
                                               << 8U)) 
                               | ((0x000000f0U & ((IData)(
                                                          (__Vfunc_prince_shiftrows_64bit__887__state_in 
                                                           >> 0x1cU)) 
                                                  << 4U)) 
                                  | (0x0000000fU & (IData)(
                                                           (__Vfunc_prince_shiftrows_64bit__887__state_in 
                                                            >> 8U))))))) 
              << 0x00000018U));
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__887__state_out 
        = ((0xffff000fffffffffULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__887__state_out) 
           | ((QData)((IData)(((0x00000f00U & ((IData)(
                                                       (__Vfunc_prince_shiftrows_64bit__887__state_in 
                                                        >> 0x2cU)) 
                                               << 8U)) 
                               | ((0x000000f0U & ((IData)(
                                                          (__Vfunc_prince_shiftrows_64bit__887__state_in 
                                                           >> 0x18U)) 
                                                  << 4U)) 
                                  | (0x0000000fU & (IData)(
                                                           (__Vfunc_prince_shiftrows_64bit__887__state_in 
                                                            >> 4U))))))) 
              << 0x00000024U));
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__887__state_out 
        = ((0xf000ffffffffffffULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__887__state_out) 
           | ((QData)((IData)(((0x00000f00U & ((IData)(
                                                       (__Vfunc_prince_shiftrows_64bit__887__state_in 
                                                        >> 0x28U)) 
                                               << 8U)) 
                               | ((0x000000f0U & ((IData)(
                                                          (__Vfunc_prince_shiftrows_64bit__887__state_in 
                                                           >> 0x14U)) 
                                                  << 4U)) 
                                  | (0x0000000fU & (IData)(__Vfunc_prince_shiftrows_64bit__887__state_in)))))) 
              << 0x00000030U));
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__887__state_out 
        = ((0x0fffffffffffffffULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__887__state_out) 
           | ((QData)((IData)((0x0000000fU & (IData)(
                                                     (__Vfunc_prince_shiftrows_64bit__887__state_in 
                                                      >> 0x3cU))))) 
              << 0x0000003cU));
    __Vfunc_prince_shiftrows_64bit__887__Vfuncout = vlSelfRef.__Vfunc_prince_shiftrows_64bit__887__state_out;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__gen_prince__DOT__u_cipher__DOT__gen_fwd_pass__BRA__1__KET____DOT__data_state_round 
        = __Vfunc_prince_shiftrows_64bit__887__Vfuncout;
    __Vfunc_prince_shiftrows_64bit__1085__state_in 
        = (0x85840851f1ac43aaULL ^ (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__gen_prince__DOT__u_cipher__DOT__data_state_hi__BRA__127__03a64__KET__ 
                                    ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__gen_prince__DOT__u_cipher__DOT__k1_d));
    vlSelf->__Vfunc_prince_shiftrows_64bit__1085__state_out = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 14364665940212629647ull);
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__1085__state_out 
        = ((0xfffffffffffff000ULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__1085__state_out) 
           | (IData)((IData)(((0x00000f00U & ((IData)(
                                                      (__Vfunc_prince_shiftrows_64bit__1085__state_in 
                                                       >> 0x18U)) 
                                              << 8U)) 
                              | ((0x000000f0U & ((IData)(
                                                         (__Vfunc_prince_shiftrows_64bit__1085__state_in 
                                                          >> 0x24U)) 
                                                 << 4U)) 
                                 | (0x0000000fU & (IData)(
                                                          (__Vfunc_prince_shiftrows_64bit__1085__state_in 
                                                           >> 0x30U))))))));
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__1085__state_out 
        = ((0xffffffffff000fffULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__1085__state_out) 
           | ((QData)((IData)(((0x00000f00U & ((IData)(
                                                       (__Vfunc_prince_shiftrows_64bit__1085__state_in 
                                                        >> 0x34U)) 
                                               << 8U)) 
                               | ((0x000000f0U & ((IData)(__Vfunc_prince_shiftrows_64bit__1085__state_in) 
                                                  << 4U)) 
                                  | (0x0000000fU & (IData)(
                                                           (__Vfunc_prince_shiftrows_64bit__1085__state_in 
                                                            >> 0x0cU))))))) 
              << 0x0000000cU));
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__1085__state_out 
        = ((0xfffffff000ffffffULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__1085__state_out) 
           | ((QData)((IData)(((0x00000f00U & ((IData)(
                                                       (__Vfunc_prince_shiftrows_64bit__1085__state_in 
                                                        >> 0x10U)) 
                                               << 8U)) 
                               | ((0x000000f0U & ((IData)(
                                                          (__Vfunc_prince_shiftrows_64bit__1085__state_in 
                                                           >> 0x1cU)) 
                                                  << 4U)) 
                                  | (0x0000000fU & (IData)(
                                                           (__Vfunc_prince_shiftrows_64bit__1085__state_in 
                                                            >> 0x28U))))))) 
              << 0x00000018U));
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__1085__state_out 
        = ((0xffff000fffffffffULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__1085__state_out) 
           | ((QData)((IData)(((0x00000f00U & ((IData)(
                                                       (__Vfunc_prince_shiftrows_64bit__1085__state_in 
                                                        >> 0x2cU)) 
                                               << 8U)) 
                               | ((0x000000f0U & ((IData)(
                                                          (__Vfunc_prince_shiftrows_64bit__1085__state_in 
                                                           >> 0x38U)) 
                                                  << 4U)) 
                                  | (0x0000000fU & (IData)(
                                                           (__Vfunc_prince_shiftrows_64bit__1085__state_in 
                                                            >> 4U))))))) 
              << 0x00000024U));
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__1085__state_out 
        = ((0xf000ffffffffffffULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__1085__state_out) 
           | ((QData)((IData)(((0x00000f00U & ((IData)(
                                                       (__Vfunc_prince_shiftrows_64bit__1085__state_in 
                                                        >> 8U)) 
                                               << 8U)) 
                               | ((0x000000f0U & ((IData)(
                                                          (__Vfunc_prince_shiftrows_64bit__1085__state_in 
                                                           >> 0x14U)) 
                                                  << 4U)) 
                                  | (0x0000000fU & (IData)(
                                                           (__Vfunc_prince_shiftrows_64bit__1085__state_in 
                                                            >> 0x20U))))))) 
              << 0x00000030U));
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__1085__state_out 
        = ((0x0fffffffffffffffULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__1085__state_out) 
           | ((QData)((IData)((0x0000000fU & (IData)(
                                                     (__Vfunc_prince_shiftrows_64bit__1085__state_in 
                                                      >> 0x3cU))))) 
              << 0x0000003cU));
    __Vfunc_prince_shiftrows_64bit__1085__Vfuncout 
        = vlSelfRef.__Vfunc_prince_shiftrows_64bit__1085__state_out;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__gen_prince__DOT__u_cipher__DOT____VdfgExtracted_h09fdf4ef__3 
        = __Vfunc_prince_shiftrows_64bit__1085__Vfuncout;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__gen_prince__DOT__u_cipher__DOT__data_state_lo__BRA__127__03a64__KET__ 
        = (0x13198a2e03707344ULL ^ (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__gen_prince__DOT__u_cipher__DOT__gen_fwd_pass__BRA__1__KET____DOT__data_state_round 
                                    ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__gen_prince__DOT__u_cipher__DOT__k0_new_d));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__gen_prince__DOT__u_cipher__DOT__gen_bwd_pass__BRA__2__KET____DOT__data_state_bwd 
        = chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__gen_prince__DOT__u_cipher__DOT____VdfgExtracted_h09fdf4ef__3;
    __Vfunc_prince_mult_prime_64bit__998__state_in 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__gen_prince__DOT__u_cipher__DOT__gen_bwd_pass__BRA__2__KET____DOT__data_state_bwd;
    vlSelf->__Vfunc_prince_mult_prime_64bit__998__state_out = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 6492415052416167538ull);
    __Vfunc_prince_nibble_red16__999__vect = (0xe7bdU 
                                              & (IData)(__Vfunc_prince_mult_prime_64bit__998__state_in));
    __Vfunc_prince_nibble_red16__999__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__999__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__999__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__999__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__999__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__998__state_out 
        = ((0xfffffffffffffff0ULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__998__state_out) 
           | (IData)((IData)(__Vfunc_prince_nibble_red16__999__Vfuncout)));
    __Vfunc_prince_nibble_red16__1000__vect = (0xde7bU 
                                               & (IData)(__Vfunc_prince_mult_prime_64bit__998__state_in));
    __Vfunc_prince_nibble_red16__1000__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__1000__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__1000__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__1000__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__1000__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__998__state_out 
        = ((0xffffffffffffff0fULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__998__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__1000__Vfuncout)) 
              << 4U));
    __Vfunc_prince_nibble_red16__1001__vect = (0xbde7U 
                                               & (IData)(__Vfunc_prince_mult_prime_64bit__998__state_in));
    __Vfunc_prince_nibble_red16__1001__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__1001__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__1001__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__1001__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__1001__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__998__state_out 
        = ((0xfffffffffffff0ffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__998__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__1001__Vfuncout)) 
              << 8U));
    __Vfunc_prince_nibble_red16__1002__vect = (0x7bdeU 
                                               & (IData)(__Vfunc_prince_mult_prime_64bit__998__state_in));
    __Vfunc_prince_nibble_red16__1002__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__1002__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__1002__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__1002__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__1002__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__998__state_out 
        = ((0xffffffffffff0fffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__998__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__1002__Vfuncout)) 
              << 0x0000000cU));
    __Vfunc_prince_nibble_red16__1003__vect = (0x7bdeU 
                                               & (IData)(
                                                         (__Vfunc_prince_mult_prime_64bit__998__state_in 
                                                          >> 0x10U)));
    __Vfunc_prince_nibble_red16__1003__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__1003__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__1003__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__1003__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__1003__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__998__state_out 
        = ((0xfffffffffff0ffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__998__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__1003__Vfuncout)) 
              << 0x00000010U));
    __Vfunc_prince_nibble_red16__1004__vect = (0xe7bdU 
                                               & (IData)(
                                                         (__Vfunc_prince_mult_prime_64bit__998__state_in 
                                                          >> 0x10U)));
    __Vfunc_prince_nibble_red16__1004__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__1004__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__1004__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__1004__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__1004__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__998__state_out 
        = ((0xffffffffff0fffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__998__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__1004__Vfuncout)) 
              << 0x00000014U));
    __Vfunc_prince_nibble_red16__1005__vect = (0xde7bU 
                                               & (IData)(
                                                         (__Vfunc_prince_mult_prime_64bit__998__state_in 
                                                          >> 0x10U)));
    __Vfunc_prince_nibble_red16__1005__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__1005__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__1005__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__1005__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__1005__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__998__state_out 
        = ((0xfffffffff0ffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__998__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__1005__Vfuncout)) 
              << 0x00000018U));
    __Vfunc_prince_nibble_red16__1006__vect = (0xbde7U 
                                               & (IData)(
                                                         (__Vfunc_prince_mult_prime_64bit__998__state_in 
                                                          >> 0x10U)));
    __Vfunc_prince_nibble_red16__1006__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__1006__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__1006__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__1006__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__1006__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__998__state_out 
        = ((0xffffffff0fffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__998__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__1006__Vfuncout)) 
              << 0x0000001cU));
    __Vfunc_prince_nibble_red16__1007__vect = (0x7bdeU 
                                               & (IData)(
                                                         (__Vfunc_prince_mult_prime_64bit__998__state_in 
                                                          >> 0x20U)));
    __Vfunc_prince_nibble_red16__1007__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__1007__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__1007__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__1007__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__1007__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__998__state_out 
        = ((0xfffffff0ffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__998__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__1007__Vfuncout)) 
              << 0x00000020U));
    __Vfunc_prince_nibble_red16__1008__vect = (0xe7bdU 
                                               & (IData)(
                                                         (__Vfunc_prince_mult_prime_64bit__998__state_in 
                                                          >> 0x20U)));
    __Vfunc_prince_nibble_red16__1008__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__1008__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__1008__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__1008__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__1008__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__998__state_out 
        = ((0xffffff0fffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__998__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__1008__Vfuncout)) 
              << 0x00000024U));
    __Vfunc_prince_nibble_red16__1009__vect = (0xde7bU 
                                               & (IData)(
                                                         (__Vfunc_prince_mult_prime_64bit__998__state_in 
                                                          >> 0x20U)));
    __Vfunc_prince_nibble_red16__1009__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__1009__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__1009__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__1009__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__1009__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__998__state_out 
        = ((0xfffff0ffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__998__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__1009__Vfuncout)) 
              << 0x00000028U));
    __Vfunc_prince_nibble_red16__1010__vect = (0xbde7U 
                                               & (IData)(
                                                         (__Vfunc_prince_mult_prime_64bit__998__state_in 
                                                          >> 0x20U)));
    __Vfunc_prince_nibble_red16__1010__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__1010__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__1010__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__1010__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__1010__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__998__state_out 
        = ((0xffff0fffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__998__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__1010__Vfuncout)) 
              << 0x0000002cU));
    __Vfunc_prince_nibble_red16__1011__vect = (0xe7bdU 
                                               & (IData)(
                                                         (__Vfunc_prince_mult_prime_64bit__998__state_in 
                                                          >> 0x30U)));
    __Vfunc_prince_nibble_red16__1011__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__1011__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__1011__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__1011__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__1011__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__998__state_out 
        = ((0xfff0ffffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__998__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__1011__Vfuncout)) 
              << 0x00000030U));
    __Vfunc_prince_nibble_red16__1012__vect = (0xde7bU 
                                               & (IData)(
                                                         (__Vfunc_prince_mult_prime_64bit__998__state_in 
                                                          >> 0x30U)));
    __Vfunc_prince_nibble_red16__1012__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__1012__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__1012__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__1012__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__1012__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__998__state_out 
        = ((0xff0fffffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__998__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__1012__Vfuncout)) 
              << 0x00000034U));
    __Vfunc_prince_nibble_red16__1013__vect = (0xbde7U 
                                               & (IData)(
                                                         (__Vfunc_prince_mult_prime_64bit__998__state_in 
                                                          >> 0x30U)));
    __Vfunc_prince_nibble_red16__1013__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__1013__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__1013__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__1013__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__1013__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__998__state_out 
        = ((0xf0ffffffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__998__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__1013__Vfuncout)) 
              << 0x00000038U));
    __Vfunc_prince_nibble_red16__1014__vect = (0x7bdeU 
                                               & (IData)(
                                                         (__Vfunc_prince_mult_prime_64bit__998__state_in 
                                                          >> 0x30U)));
    __Vfunc_prince_nibble_red16__1014__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__1014__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__1014__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__1014__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__1014__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__998__state_out 
        = ((0x0fffffffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__998__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__1014__Vfuncout)) 
              << 0x0000003cU));
    __Vfunc_prince_mult_prime_64bit__998__Vfuncout 
        = vlSelfRef.__Vfunc_prince_mult_prime_64bit__998__state_out;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__gen_prince__DOT__u_cipher__DOT__gen_bwd_pass__BRA__2__KET____DOT__data_state_bwd 
        = __Vfunc_prince_mult_prime_64bit__998__Vfuncout;
    __Vfunc_sbox4_64bit__1015__state_in = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__gen_prince__DOT__u_cipher__DOT__gen_bwd_pass__BRA__2__KET____DOT__data_state_bwd;
    vlSelf->__Vfunc_sbox4_64bit__1015__state_out = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 5239904280276983506ull);
    __Vfunc_sbox4_8bit__1016__state_in = (0x000000ffU 
                                          & (IData)(__Vfunc_sbox4_64bit__1015__state_in));
    vlSelf->__Vfunc_sbox4_8bit__1016__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12183638375498710877ull);
    vlSelfRef.__Vfunc_sbox4_8bit__1016__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1016__state_out)) 
         | (0x0000000fU & (IData)((0x1ce5046a98df237bULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__1016__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__1016__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1016__state_out)) 
         | (0x000000f0U & ((IData)((0x1ce5046a98df237bULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__1016__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__1016__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__1016__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__1015__state_out 
        = ((0xffffffffffffff00ULL & vlSelfRef.__Vfunc_sbox4_64bit__1015__state_out) 
           | (IData)((IData)(__Vfunc_sbox4_8bit__1016__Vfuncout)));
    __Vfunc_sbox4_8bit__1016__state_in = (0x000000ffU 
                                          & (IData)(
                                                    (__Vfunc_sbox4_64bit__1015__state_in 
                                                     >> 8U)));
    vlSelf->__Vfunc_sbox4_8bit__1016__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12183638375498710877ull);
    vlSelfRef.__Vfunc_sbox4_8bit__1016__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1016__state_out)) 
         | (0x0000000fU & (IData)((0x1ce5046a98df237bULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__1016__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__1016__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1016__state_out)) 
         | (0x000000f0U & ((IData)((0x1ce5046a98df237bULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__1016__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__1016__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__1016__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__1015__state_out 
        = ((0xffffffffffff00ffULL & vlSelfRef.__Vfunc_sbox4_64bit__1015__state_out) 
           | ((QData)((IData)(__Vfunc_sbox4_8bit__1016__Vfuncout)) 
              << 8U));
    __Vfunc_sbox4_8bit__1016__state_in = (0x000000ffU 
                                          & (IData)(
                                                    (__Vfunc_sbox4_64bit__1015__state_in 
                                                     >> 0x10U)));
    vlSelf->__Vfunc_sbox4_8bit__1016__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12183638375498710877ull);
    vlSelfRef.__Vfunc_sbox4_8bit__1016__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1016__state_out)) 
         | (0x0000000fU & (IData)((0x1ce5046a98df237bULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__1016__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__1016__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1016__state_out)) 
         | (0x000000f0U & ((IData)((0x1ce5046a98df237bULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__1016__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__1016__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__1016__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__1015__state_out 
        = ((0xffffffffff00ffffULL & vlSelfRef.__Vfunc_sbox4_64bit__1015__state_out) 
           | ((QData)((IData)(__Vfunc_sbox4_8bit__1016__Vfuncout)) 
              << 0x00000010U));
    __Vfunc_sbox4_8bit__1016__state_in = (0x000000ffU 
                                          & (IData)(
                                                    (__Vfunc_sbox4_64bit__1015__state_in 
                                                     >> 0x18U)));
    vlSelf->__Vfunc_sbox4_8bit__1016__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12183638375498710877ull);
    vlSelfRef.__Vfunc_sbox4_8bit__1016__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1016__state_out)) 
         | (0x0000000fU & (IData)((0x1ce5046a98df237bULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__1016__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__1016__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1016__state_out)) 
         | (0x000000f0U & ((IData)((0x1ce5046a98df237bULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__1016__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__1016__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__1016__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__1015__state_out 
        = ((0xffffffff00ffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__1015__state_out) 
           | ((QData)((IData)(__Vfunc_sbox4_8bit__1016__Vfuncout)) 
              << 0x00000018U));
    __Vfunc_sbox4_8bit__1016__state_in = (0x000000ffU 
                                          & (IData)(
                                                    (__Vfunc_sbox4_64bit__1015__state_in 
                                                     >> 0x20U)));
    vlSelf->__Vfunc_sbox4_8bit__1016__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12183638375498710877ull);
    vlSelfRef.__Vfunc_sbox4_8bit__1016__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1016__state_out)) 
         | (0x0000000fU & (IData)((0x1ce5046a98df237bULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__1016__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__1016__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1016__state_out)) 
         | (0x000000f0U & ((IData)((0x1ce5046a98df237bULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__1016__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__1016__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__1016__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__1015__state_out 
        = ((0xffffff00ffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__1015__state_out) 
           | ((QData)((IData)(__Vfunc_sbox4_8bit__1016__Vfuncout)) 
              << 0x00000020U));
    __Vfunc_sbox4_8bit__1016__state_in = (0x000000ffU 
                                          & (IData)(
                                                    (__Vfunc_sbox4_64bit__1015__state_in 
                                                     >> 0x28U)));
    vlSelf->__Vfunc_sbox4_8bit__1016__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12183638375498710877ull);
    vlSelfRef.__Vfunc_sbox4_8bit__1016__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1016__state_out)) 
         | (0x0000000fU & (IData)((0x1ce5046a98df237bULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__1016__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__1016__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1016__state_out)) 
         | (0x000000f0U & ((IData)((0x1ce5046a98df237bULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__1016__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__1016__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__1016__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__1015__state_out 
        = ((0xffff00ffffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__1015__state_out) 
           | ((QData)((IData)(__Vfunc_sbox4_8bit__1016__Vfuncout)) 
              << 0x00000028U));
    __Vfunc_sbox4_8bit__1016__state_in = (0x000000ffU 
                                          & (IData)(
                                                    (__Vfunc_sbox4_64bit__1015__state_in 
                                                     >> 0x30U)));
    vlSelf->__Vfunc_sbox4_8bit__1016__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12183638375498710877ull);
    vlSelfRef.__Vfunc_sbox4_8bit__1016__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1016__state_out)) 
         | (0x0000000fU & (IData)((0x1ce5046a98df237bULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__1016__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__1016__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1016__state_out)) 
         | (0x000000f0U & ((IData)((0x1ce5046a98df237bULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__1016__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__1016__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__1016__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__1015__state_out 
        = ((0xff00ffffffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__1015__state_out) 
           | ((QData)((IData)(__Vfunc_sbox4_8bit__1016__Vfuncout)) 
              << 0x00000030U));
    __Vfunc_sbox4_8bit__1016__state_in = (0x000000ffU 
                                          & (IData)(
                                                    (__Vfunc_sbox4_64bit__1015__state_in 
                                                     >> 0x38U)));
    vlSelf->__Vfunc_sbox4_8bit__1016__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12183638375498710877ull);
    vlSelfRef.__Vfunc_sbox4_8bit__1016__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1016__state_out)) 
         | (0x0000000fU & (IData)((0x1ce5046a98df237bULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__1016__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__1016__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1016__state_out)) 
         | (0x000000f0U & ((IData)((0x1ce5046a98df237bULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__1016__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__1016__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__1016__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__1015__state_out 
        = ((0x00ffffffffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__1015__state_out) 
           | ((QData)((IData)(__Vfunc_sbox4_8bit__1016__Vfuncout)) 
              << 0x00000038U));
    __Vfunc_sbox4_64bit__1015__Vfuncout = vlSelfRef.__Vfunc_sbox4_64bit__1015__state_out;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__gen_prince__DOT__u_cipher__DOT__data_state_hi__BRA__191__03a128__KET__ 
        = __Vfunc_sbox4_64bit__1015__Vfuncout;
    __Vfunc_sbox4_64bit__1074__state_in = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__gen_prince__DOT__u_cipher__DOT__data_state_lo__BRA__127__03a64__KET__;
    vlSelf->__Vfunc_sbox4_64bit__1074__state_out = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 10417091731613686872ull);
    __Vfunc_sbox4_8bit__1075__state_in = (0x000000ffU 
                                          & (IData)(__Vfunc_sbox4_64bit__1074__state_in));
    vlSelf->__Vfunc_sbox4_8bit__1075__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2391475344628400672ull);
    vlSelfRef.__Vfunc_sbox4_8bit__1075__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1075__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__1075__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__1075__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1075__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__1075__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__1075__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__1075__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__1074__state_out 
        = ((0xffffffffffffff00ULL & vlSelfRef.__Vfunc_sbox4_64bit__1074__state_out) 
           | (IData)((IData)(__Vfunc_sbox4_8bit__1075__Vfuncout)));
    __Vfunc_sbox4_8bit__1075__state_in = (0x000000ffU 
                                          & (IData)(
                                                    (__Vfunc_sbox4_64bit__1074__state_in 
                                                     >> 8U)));
    vlSelf->__Vfunc_sbox4_8bit__1075__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2391475344628400672ull);
    vlSelfRef.__Vfunc_sbox4_8bit__1075__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1075__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__1075__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__1075__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1075__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__1075__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__1075__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__1075__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__1074__state_out 
        = ((0xffffffffffff00ffULL & vlSelfRef.__Vfunc_sbox4_64bit__1074__state_out) 
           | ((QData)((IData)(__Vfunc_sbox4_8bit__1075__Vfuncout)) 
              << 8U));
    __Vfunc_sbox4_8bit__1075__state_in = (0x000000ffU 
                                          & (IData)(
                                                    (__Vfunc_sbox4_64bit__1074__state_in 
                                                     >> 0x10U)));
    vlSelf->__Vfunc_sbox4_8bit__1075__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2391475344628400672ull);
    vlSelfRef.__Vfunc_sbox4_8bit__1075__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1075__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__1075__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__1075__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1075__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__1075__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__1075__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__1075__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__1074__state_out 
        = ((0xffffffffff00ffffULL & vlSelfRef.__Vfunc_sbox4_64bit__1074__state_out) 
           | ((QData)((IData)(__Vfunc_sbox4_8bit__1075__Vfuncout)) 
              << 0x00000010U));
    __Vfunc_sbox4_8bit__1075__state_in = (0x000000ffU 
                                          & (IData)(
                                                    (__Vfunc_sbox4_64bit__1074__state_in 
                                                     >> 0x18U)));
    vlSelf->__Vfunc_sbox4_8bit__1075__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2391475344628400672ull);
    vlSelfRef.__Vfunc_sbox4_8bit__1075__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1075__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__1075__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__1075__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1075__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__1075__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__1075__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__1075__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__1074__state_out 
        = ((0xffffffff00ffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__1074__state_out) 
           | ((QData)((IData)(__Vfunc_sbox4_8bit__1075__Vfuncout)) 
              << 0x00000018U));
    __Vfunc_sbox4_8bit__1075__state_in = (0x000000ffU 
                                          & (IData)(
                                                    (__Vfunc_sbox4_64bit__1074__state_in 
                                                     >> 0x20U)));
    vlSelf->__Vfunc_sbox4_8bit__1075__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2391475344628400672ull);
    vlSelfRef.__Vfunc_sbox4_8bit__1075__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1075__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__1075__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__1075__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1075__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__1075__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__1075__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__1075__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__1074__state_out 
        = ((0xffffff00ffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__1074__state_out) 
           | ((QData)((IData)(__Vfunc_sbox4_8bit__1075__Vfuncout)) 
              << 0x00000020U));
    __Vfunc_sbox4_8bit__1075__state_in = (0x000000ffU 
                                          & (IData)(
                                                    (__Vfunc_sbox4_64bit__1074__state_in 
                                                     >> 0x28U)));
    vlSelf->__Vfunc_sbox4_8bit__1075__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2391475344628400672ull);
    vlSelfRef.__Vfunc_sbox4_8bit__1075__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1075__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__1075__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__1075__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1075__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__1075__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__1075__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__1075__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__1074__state_out 
        = ((0xffff00ffffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__1074__state_out) 
           | ((QData)((IData)(__Vfunc_sbox4_8bit__1075__Vfuncout)) 
              << 0x00000028U));
    __Vfunc_sbox4_8bit__1075__state_in = (0x000000ffU 
                                          & (IData)(
                                                    (__Vfunc_sbox4_64bit__1074__state_in 
                                                     >> 0x30U)));
    vlSelf->__Vfunc_sbox4_8bit__1075__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2391475344628400672ull);
    vlSelfRef.__Vfunc_sbox4_8bit__1075__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1075__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__1075__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__1075__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1075__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__1075__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__1075__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__1075__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__1074__state_out 
        = ((0xff00ffffffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__1074__state_out) 
           | ((QData)((IData)(__Vfunc_sbox4_8bit__1075__Vfuncout)) 
              << 0x00000030U));
    __Vfunc_sbox4_8bit__1075__state_in = (0x000000ffU 
                                          & (IData)(
                                                    (__Vfunc_sbox4_64bit__1074__state_in 
                                                     >> 0x38U)));
    vlSelf->__Vfunc_sbox4_8bit__1075__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2391475344628400672ull);
    vlSelfRef.__Vfunc_sbox4_8bit__1075__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1075__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__1075__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__1075__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1075__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__1075__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__1075__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__1075__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__1074__state_out 
        = ((0x00ffffffffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__1074__state_out) 
           | ((QData)((IData)(__Vfunc_sbox4_8bit__1075__Vfuncout)) 
              << 0x00000038U));
    __Vfunc_sbox4_64bit__1074__Vfuncout = vlSelfRef.__Vfunc_sbox4_64bit__1074__state_out;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__gen_prince__DOT__u_cipher__DOT____VdfgExtracted_h435ad752__3 
        = __Vfunc_sbox4_64bit__1074__Vfuncout;
    __Vfunc_prince_shiftrows_64bit__1086__state_in 
        = (0xc882d32f25323c54ULL ^ (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__gen_prince__DOT__u_cipher__DOT__data_state_hi__BRA__191__03a128__KET__ 
                                    ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__gen_prince__DOT__u_cipher__DOT__k0_new_d));
    vlSelf->__Vfunc_prince_shiftrows_64bit__1086__state_out = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 1389357474773446898ull);
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__1086__state_out 
        = ((0xfffffffffffff000ULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__1086__state_out) 
           | (IData)((IData)(((0x00000f00U & ((IData)(
                                                      (__Vfunc_prince_shiftrows_64bit__1086__state_in 
                                                       >> 0x18U)) 
                                              << 8U)) 
                              | ((0x000000f0U & ((IData)(
                                                         (__Vfunc_prince_shiftrows_64bit__1086__state_in 
                                                          >> 0x24U)) 
                                                 << 4U)) 
                                 | (0x0000000fU & (IData)(
                                                          (__Vfunc_prince_shiftrows_64bit__1086__state_in 
                                                           >> 0x30U))))))));
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__1086__state_out 
        = ((0xffffffffff000fffULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__1086__state_out) 
           | ((QData)((IData)(((0x00000f00U & ((IData)(
                                                       (__Vfunc_prince_shiftrows_64bit__1086__state_in 
                                                        >> 0x34U)) 
                                               << 8U)) 
                               | ((0x000000f0U & ((IData)(__Vfunc_prince_shiftrows_64bit__1086__state_in) 
                                                  << 4U)) 
                                  | (0x0000000fU & (IData)(
                                                           (__Vfunc_prince_shiftrows_64bit__1086__state_in 
                                                            >> 0x0cU))))))) 
              << 0x0000000cU));
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__1086__state_out 
        = ((0xfffffff000ffffffULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__1086__state_out) 
           | ((QData)((IData)(((0x00000f00U & ((IData)(
                                                       (__Vfunc_prince_shiftrows_64bit__1086__state_in 
                                                        >> 0x10U)) 
                                               << 8U)) 
                               | ((0x000000f0U & ((IData)(
                                                          (__Vfunc_prince_shiftrows_64bit__1086__state_in 
                                                           >> 0x1cU)) 
                                                  << 4U)) 
                                  | (0x0000000fU & (IData)(
                                                           (__Vfunc_prince_shiftrows_64bit__1086__state_in 
                                                            >> 0x28U))))))) 
              << 0x00000018U));
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__1086__state_out 
        = ((0xffff000fffffffffULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__1086__state_out) 
           | ((QData)((IData)(((0x00000f00U & ((IData)(
                                                       (__Vfunc_prince_shiftrows_64bit__1086__state_in 
                                                        >> 0x2cU)) 
                                               << 8U)) 
                               | ((0x000000f0U & ((IData)(
                                                          (__Vfunc_prince_shiftrows_64bit__1086__state_in 
                                                           >> 0x38U)) 
                                                  << 4U)) 
                                  | (0x0000000fU & (IData)(
                                                           (__Vfunc_prince_shiftrows_64bit__1086__state_in 
                                                            >> 4U))))))) 
              << 0x00000024U));
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__1086__state_out 
        = ((0xf000ffffffffffffULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__1086__state_out) 
           | ((QData)((IData)(((0x00000f00U & ((IData)(
                                                       (__Vfunc_prince_shiftrows_64bit__1086__state_in 
                                                        >> 8U)) 
                                               << 8U)) 
                               | ((0x000000f0U & ((IData)(
                                                          (__Vfunc_prince_shiftrows_64bit__1086__state_in 
                                                           >> 0x14U)) 
                                                  << 4U)) 
                                  | (0x0000000fU & (IData)(
                                                           (__Vfunc_prince_shiftrows_64bit__1086__state_in 
                                                            >> 0x20U))))))) 
              << 0x00000030U));
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__1086__state_out 
        = ((0x0fffffffffffffffULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__1086__state_out) 
           | ((QData)((IData)((0x0000000fU & (IData)(
                                                     (__Vfunc_prince_shiftrows_64bit__1086__state_in 
                                                      >> 0x3cU))))) 
              << 0x0000003cU));
    __Vfunc_prince_shiftrows_64bit__1086__Vfuncout 
        = vlSelfRef.__Vfunc_prince_shiftrows_64bit__1086__state_out;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__gen_prince__DOT__u_cipher__DOT____VdfgExtracted_hb453e96e__2 
        = __Vfunc_prince_shiftrows_64bit__1086__Vfuncout;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__gen_prince__DOT__u_cipher__DOT__gen_fwd_pass__BRA__2__KET____DOT__data_state_round 
        = chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__gen_prince__DOT__u_cipher__DOT____VdfgExtracted_h435ad752__3;
    __Vfunc_prince_mult_prime_64bit__888__state_in 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__gen_prince__DOT__u_cipher__DOT__gen_fwd_pass__BRA__2__KET____DOT__data_state_round;
    vlSelf->__Vfunc_prince_mult_prime_64bit__888__state_out = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 3871987868053778211ull);
    __Vfunc_prince_nibble_red16__889__vect = (0xe7bdU 
                                              & (IData)(__Vfunc_prince_mult_prime_64bit__888__state_in));
    __Vfunc_prince_nibble_red16__889__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__889__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__889__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__889__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__889__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__888__state_out 
        = ((0xfffffffffffffff0ULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__888__state_out) 
           | (IData)((IData)(__Vfunc_prince_nibble_red16__889__Vfuncout)));
    __Vfunc_prince_nibble_red16__890__vect = (0xde7bU 
                                              & (IData)(__Vfunc_prince_mult_prime_64bit__888__state_in));
    __Vfunc_prince_nibble_red16__890__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__890__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__890__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__890__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__890__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__888__state_out 
        = ((0xffffffffffffff0fULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__888__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__890__Vfuncout)) 
              << 4U));
    __Vfunc_prince_nibble_red16__891__vect = (0xbde7U 
                                              & (IData)(__Vfunc_prince_mult_prime_64bit__888__state_in));
    __Vfunc_prince_nibble_red16__891__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__891__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__891__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__891__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__891__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__888__state_out 
        = ((0xfffffffffffff0ffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__888__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__891__Vfuncout)) 
              << 8U));
    __Vfunc_prince_nibble_red16__892__vect = (0x7bdeU 
                                              & (IData)(__Vfunc_prince_mult_prime_64bit__888__state_in));
    __Vfunc_prince_nibble_red16__892__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__892__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__892__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__892__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__892__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__888__state_out 
        = ((0xffffffffffff0fffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__888__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__892__Vfuncout)) 
              << 0x0000000cU));
    __Vfunc_prince_nibble_red16__893__vect = (0x7bdeU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__888__state_in 
                                                         >> 0x10U)));
    __Vfunc_prince_nibble_red16__893__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__893__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__893__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__893__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__893__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__888__state_out 
        = ((0xfffffffffff0ffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__888__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__893__Vfuncout)) 
              << 0x00000010U));
    __Vfunc_prince_nibble_red16__894__vect = (0xe7bdU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__888__state_in 
                                                         >> 0x10U)));
    __Vfunc_prince_nibble_red16__894__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__894__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__894__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__894__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__894__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__888__state_out 
        = ((0xffffffffff0fffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__888__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__894__Vfuncout)) 
              << 0x00000014U));
    __Vfunc_prince_nibble_red16__895__vect = (0xde7bU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__888__state_in 
                                                         >> 0x10U)));
    __Vfunc_prince_nibble_red16__895__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__895__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__895__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__895__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__895__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__888__state_out 
        = ((0xfffffffff0ffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__888__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__895__Vfuncout)) 
              << 0x00000018U));
    __Vfunc_prince_nibble_red16__896__vect = (0xbde7U 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__888__state_in 
                                                         >> 0x10U)));
    __Vfunc_prince_nibble_red16__896__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__896__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__896__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__896__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__896__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__888__state_out 
        = ((0xffffffff0fffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__888__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__896__Vfuncout)) 
              << 0x0000001cU));
    __Vfunc_prince_nibble_red16__897__vect = (0x7bdeU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__888__state_in 
                                                         >> 0x20U)));
    __Vfunc_prince_nibble_red16__897__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__897__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__897__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__897__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__897__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__888__state_out 
        = ((0xfffffff0ffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__888__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__897__Vfuncout)) 
              << 0x00000020U));
    __Vfunc_prince_nibble_red16__898__vect = (0xe7bdU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__888__state_in 
                                                         >> 0x20U)));
    __Vfunc_prince_nibble_red16__898__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__898__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__898__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__898__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__898__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__888__state_out 
        = ((0xffffff0fffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__888__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__898__Vfuncout)) 
              << 0x00000024U));
    __Vfunc_prince_nibble_red16__899__vect = (0xde7bU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__888__state_in 
                                                         >> 0x20U)));
    __Vfunc_prince_nibble_red16__899__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__899__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__899__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__899__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__899__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__888__state_out 
        = ((0xfffff0ffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__888__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__899__Vfuncout)) 
              << 0x00000028U));
    __Vfunc_prince_nibble_red16__900__vect = (0xbde7U 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__888__state_in 
                                                         >> 0x20U)));
    __Vfunc_prince_nibble_red16__900__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__900__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__900__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__900__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__900__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__888__state_out 
        = ((0xffff0fffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__888__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__900__Vfuncout)) 
              << 0x0000002cU));
    __Vfunc_prince_nibble_red16__901__vect = (0xe7bdU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__888__state_in 
                                                         >> 0x30U)));
    __Vfunc_prince_nibble_red16__901__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__901__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__901__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__901__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__901__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__888__state_out 
        = ((0xfff0ffffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__888__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__901__Vfuncout)) 
              << 0x00000030U));
    __Vfunc_prince_nibble_red16__902__vect = (0xde7bU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__888__state_in 
                                                         >> 0x30U)));
    __Vfunc_prince_nibble_red16__902__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__902__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__902__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__902__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__902__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__888__state_out 
        = ((0xff0fffffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__888__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__902__Vfuncout)) 
              << 0x00000034U));
    __Vfunc_prince_nibble_red16__903__vect = (0xbde7U 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__888__state_in 
                                                         >> 0x30U)));
    __Vfunc_prince_nibble_red16__903__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__903__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__903__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__903__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__903__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__888__state_out 
        = ((0xf0ffffffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__888__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__903__Vfuncout)) 
              << 0x00000038U));
    __Vfunc_prince_nibble_red16__904__vect = (0x7bdeU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__888__state_in 
                                                         >> 0x30U)));
    __Vfunc_prince_nibble_red16__904__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__904__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__904__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__904__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__904__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__888__state_out 
        = ((0x0fffffffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__888__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__904__Vfuncout)) 
              << 0x0000003cU));
    __Vfunc_prince_mult_prime_64bit__888__Vfuncout 
        = vlSelfRef.__Vfunc_prince_mult_prime_64bit__888__state_out;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__gen_prince__DOT__u_cipher__DOT__gen_fwd_pass__BRA__2__KET____DOT__data_state_round 
        = __Vfunc_prince_mult_prime_64bit__888__Vfuncout;
    __Vfunc_prince_shiftrows_64bit__905__state_in = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__gen_prince__DOT__u_cipher__DOT__gen_fwd_pass__BRA__2__KET____DOT__data_state_round;
    vlSelf->__Vfunc_prince_shiftrows_64bit__905__state_out = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 792782073410612737ull);
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__905__state_out 
        = ((0xfffffffffffff000ULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__905__state_out) 
           | (IData)((IData)(((0x00000f00U & ((IData)(
                                                      (__Vfunc_prince_shiftrows_64bit__905__state_in 
                                                       >> 0x38U)) 
                                              << 8U)) 
                              | ((0x000000f0U & ((IData)(
                                                         (__Vfunc_prince_shiftrows_64bit__905__state_in 
                                                          >> 0x24U)) 
                                                 << 4U)) 
                                 | (0x0000000fU & (IData)(
                                                          (__Vfunc_prince_shiftrows_64bit__905__state_in 
                                                           >> 0x10U))))))));
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__905__state_out 
        = ((0xffffffffff000fffULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__905__state_out) 
           | ((QData)((IData)(((0x00000f00U & ((IData)(
                                                       (__Vfunc_prince_shiftrows_64bit__905__state_in 
                                                        >> 0x34U)) 
                                               << 8U)) 
                               | ((0x000000f0U & ((IData)(
                                                          (__Vfunc_prince_shiftrows_64bit__905__state_in 
                                                           >> 0x20U)) 
                                                  << 4U)) 
                                  | (0x0000000fU & (IData)(
                                                           (__Vfunc_prince_shiftrows_64bit__905__state_in 
                                                            >> 0x0cU))))))) 
              << 0x0000000cU));
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__905__state_out 
        = ((0xfffffff000ffffffULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__905__state_out) 
           | ((QData)((IData)(((0x00000f00U & ((IData)(
                                                       (__Vfunc_prince_shiftrows_64bit__905__state_in 
                                                        >> 0x30U)) 
                                               << 8U)) 
                               | ((0x000000f0U & ((IData)(
                                                          (__Vfunc_prince_shiftrows_64bit__905__state_in 
                                                           >> 0x1cU)) 
                                                  << 4U)) 
                                  | (0x0000000fU & (IData)(
                                                           (__Vfunc_prince_shiftrows_64bit__905__state_in 
                                                            >> 8U))))))) 
              << 0x00000018U));
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__905__state_out 
        = ((0xffff000fffffffffULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__905__state_out) 
           | ((QData)((IData)(((0x00000f00U & ((IData)(
                                                       (__Vfunc_prince_shiftrows_64bit__905__state_in 
                                                        >> 0x2cU)) 
                                               << 8U)) 
                               | ((0x000000f0U & ((IData)(
                                                          (__Vfunc_prince_shiftrows_64bit__905__state_in 
                                                           >> 0x18U)) 
                                                  << 4U)) 
                                  | (0x0000000fU & (IData)(
                                                           (__Vfunc_prince_shiftrows_64bit__905__state_in 
                                                            >> 4U))))))) 
              << 0x00000024U));
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__905__state_out 
        = ((0xf000ffffffffffffULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__905__state_out) 
           | ((QData)((IData)(((0x00000f00U & ((IData)(
                                                       (__Vfunc_prince_shiftrows_64bit__905__state_in 
                                                        >> 0x28U)) 
                                               << 8U)) 
                               | ((0x000000f0U & ((IData)(
                                                          (__Vfunc_prince_shiftrows_64bit__905__state_in 
                                                           >> 0x14U)) 
                                                  << 4U)) 
                                  | (0x0000000fU & (IData)(__Vfunc_prince_shiftrows_64bit__905__state_in)))))) 
              << 0x00000030U));
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__905__state_out 
        = ((0x0fffffffffffffffULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__905__state_out) 
           | ((QData)((IData)((0x0000000fU & (IData)(
                                                     (__Vfunc_prince_shiftrows_64bit__905__state_in 
                                                      >> 0x3cU))))) 
              << 0x0000003cU));
    __Vfunc_prince_shiftrows_64bit__905__Vfuncout = vlSelfRef.__Vfunc_prince_shiftrows_64bit__905__state_out;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__gen_prince__DOT__u_cipher__DOT__gen_fwd_pass__BRA__2__KET____DOT__data_state_round 
        = __Vfunc_prince_shiftrows_64bit__905__Vfuncout;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__gen_prince__DOT__u_cipher__DOT__gen_bwd_pass__BRA__3__KET____DOT__data_state_bwd 
        = chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__gen_prince__DOT__u_cipher__DOT____VdfgExtracted_hb453e96e__2;
    __Vfunc_prince_mult_prime_64bit__1017__state_in 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__gen_prince__DOT__u_cipher__DOT__gen_bwd_pass__BRA__3__KET____DOT__data_state_bwd;
    vlSelf->__Vfunc_prince_mult_prime_64bit__1017__state_out = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 4653236060939765422ull);
    __Vfunc_prince_nibble_red16__1018__vect = (0xe7bdU 
                                               & (IData)(__Vfunc_prince_mult_prime_64bit__1017__state_in));
    __Vfunc_prince_nibble_red16__1018__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__1018__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__1018__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__1018__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__1018__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__1017__state_out 
        = ((0xfffffffffffffff0ULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__1017__state_out) 
           | (IData)((IData)(__Vfunc_prince_nibble_red16__1018__Vfuncout)));
    __Vfunc_prince_nibble_red16__1019__vect = (0xde7bU 
                                               & (IData)(__Vfunc_prince_mult_prime_64bit__1017__state_in));
    __Vfunc_prince_nibble_red16__1019__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__1019__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__1019__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__1019__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__1019__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__1017__state_out 
        = ((0xffffffffffffff0fULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__1017__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__1019__Vfuncout)) 
              << 4U));
    __Vfunc_prince_nibble_red16__1020__vect = (0xbde7U 
                                               & (IData)(__Vfunc_prince_mult_prime_64bit__1017__state_in));
    __Vfunc_prince_nibble_red16__1020__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__1020__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__1020__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__1020__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__1020__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__1017__state_out 
        = ((0xfffffffffffff0ffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__1017__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__1020__Vfuncout)) 
              << 8U));
    __Vfunc_prince_nibble_red16__1021__vect = (0x7bdeU 
                                               & (IData)(__Vfunc_prince_mult_prime_64bit__1017__state_in));
    __Vfunc_prince_nibble_red16__1021__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__1021__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__1021__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__1021__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__1021__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__1017__state_out 
        = ((0xffffffffffff0fffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__1017__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__1021__Vfuncout)) 
              << 0x0000000cU));
    __Vfunc_prince_nibble_red16__1022__vect = (0x7bdeU 
                                               & (IData)(
                                                         (__Vfunc_prince_mult_prime_64bit__1017__state_in 
                                                          >> 0x10U)));
    __Vfunc_prince_nibble_red16__1022__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__1022__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__1022__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__1022__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__1022__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__1017__state_out 
        = ((0xfffffffffff0ffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__1017__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__1022__Vfuncout)) 
              << 0x00000010U));
    __Vfunc_prince_nibble_red16__1023__vect = (0xe7bdU 
                                               & (IData)(
                                                         (__Vfunc_prince_mult_prime_64bit__1017__state_in 
                                                          >> 0x10U)));
    __Vfunc_prince_nibble_red16__1023__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__1023__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__1023__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__1023__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__1023__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__1017__state_out 
        = ((0xffffffffff0fffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__1017__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__1023__Vfuncout)) 
              << 0x00000014U));
    __Vfunc_prince_nibble_red16__1024__vect = (0xde7bU 
                                               & (IData)(
                                                         (__Vfunc_prince_mult_prime_64bit__1017__state_in 
                                                          >> 0x10U)));
    __Vfunc_prince_nibble_red16__1024__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__1024__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__1024__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__1024__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__1024__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__1017__state_out 
        = ((0xfffffffff0ffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__1017__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__1024__Vfuncout)) 
              << 0x00000018U));
    __Vfunc_prince_nibble_red16__1025__vect = (0xbde7U 
                                               & (IData)(
                                                         (__Vfunc_prince_mult_prime_64bit__1017__state_in 
                                                          >> 0x10U)));
    __Vfunc_prince_nibble_red16__1025__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__1025__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__1025__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__1025__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__1025__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__1017__state_out 
        = ((0xffffffff0fffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__1017__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__1025__Vfuncout)) 
              << 0x0000001cU));
    __Vfunc_prince_nibble_red16__1026__vect = (0x7bdeU 
                                               & (IData)(
                                                         (__Vfunc_prince_mult_prime_64bit__1017__state_in 
                                                          >> 0x20U)));
    __Vfunc_prince_nibble_red16__1026__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__1026__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__1026__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__1026__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__1026__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__1017__state_out 
        = ((0xfffffff0ffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__1017__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__1026__Vfuncout)) 
              << 0x00000020U));
    __Vfunc_prince_nibble_red16__1027__vect = (0xe7bdU 
                                               & (IData)(
                                                         (__Vfunc_prince_mult_prime_64bit__1017__state_in 
                                                          >> 0x20U)));
    __Vfunc_prince_nibble_red16__1027__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__1027__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__1027__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__1027__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__1027__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__1017__state_out 
        = ((0xffffff0fffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__1017__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__1027__Vfuncout)) 
              << 0x00000024U));
    __Vfunc_prince_nibble_red16__1028__vect = (0xde7bU 
                                               & (IData)(
                                                         (__Vfunc_prince_mult_prime_64bit__1017__state_in 
                                                          >> 0x20U)));
    __Vfunc_prince_nibble_red16__1028__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__1028__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__1028__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__1028__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__1028__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__1017__state_out 
        = ((0xfffff0ffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__1017__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__1028__Vfuncout)) 
              << 0x00000028U));
    __Vfunc_prince_nibble_red16__1029__vect = (0xbde7U 
                                               & (IData)(
                                                         (__Vfunc_prince_mult_prime_64bit__1017__state_in 
                                                          >> 0x20U)));
    __Vfunc_prince_nibble_red16__1029__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__1029__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__1029__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__1029__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__1029__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__1017__state_out 
        = ((0xffff0fffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__1017__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__1029__Vfuncout)) 
              << 0x0000002cU));
    __Vfunc_prince_nibble_red16__1030__vect = (0xe7bdU 
                                               & (IData)(
                                                         (__Vfunc_prince_mult_prime_64bit__1017__state_in 
                                                          >> 0x30U)));
    __Vfunc_prince_nibble_red16__1030__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__1030__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__1030__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__1030__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__1030__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__1017__state_out 
        = ((0xfff0ffffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__1017__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__1030__Vfuncout)) 
              << 0x00000030U));
    __Vfunc_prince_nibble_red16__1031__vect = (0xde7bU 
                                               & (IData)(
                                                         (__Vfunc_prince_mult_prime_64bit__1017__state_in 
                                                          >> 0x30U)));
    __Vfunc_prince_nibble_red16__1031__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__1031__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__1031__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__1031__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__1031__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__1017__state_out 
        = ((0xff0fffffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__1017__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__1031__Vfuncout)) 
              << 0x00000034U));
    __Vfunc_prince_nibble_red16__1032__vect = (0xbde7U 
                                               & (IData)(
                                                         (__Vfunc_prince_mult_prime_64bit__1017__state_in 
                                                          >> 0x30U)));
    __Vfunc_prince_nibble_red16__1032__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__1032__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__1032__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__1032__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__1032__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__1017__state_out 
        = ((0xf0ffffffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__1017__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__1032__Vfuncout)) 
              << 0x00000038U));
    __Vfunc_prince_nibble_red16__1033__vect = (0x7bdeU 
                                               & (IData)(
                                                         (__Vfunc_prince_mult_prime_64bit__1017__state_in 
                                                          >> 0x30U)));
    __Vfunc_prince_nibble_red16__1033__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__1033__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__1033__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__1033__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__1033__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__1017__state_out 
        = ((0x0fffffffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__1017__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__1033__Vfuncout)) 
              << 0x0000003cU));
    __Vfunc_prince_mult_prime_64bit__1017__Vfuncout 
        = vlSelfRef.__Vfunc_prince_mult_prime_64bit__1017__state_out;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__gen_prince__DOT__u_cipher__DOT__gen_bwd_pass__BRA__3__KET____DOT__data_state_bwd 
        = __Vfunc_prince_mult_prime_64bit__1017__Vfuncout;
    __Vfunc_sbox4_64bit__1034__state_in = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__gen_prince__DOT__u_cipher__DOT__gen_bwd_pass__BRA__3__KET____DOT__data_state_bwd;
    vlSelf->__Vfunc_sbox4_64bit__1034__state_out = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 14584716386649677294ull);
    __Vfunc_sbox4_8bit__1035__state_in = (0x000000ffU 
                                          & (IData)(__Vfunc_sbox4_64bit__1034__state_in));
    vlSelf->__Vfunc_sbox4_8bit__1035__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4662663460315789253ull);
    vlSelfRef.__Vfunc_sbox4_8bit__1035__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1035__state_out)) 
         | (0x0000000fU & (IData)((0x1ce5046a98df237bULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__1035__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__1035__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1035__state_out)) 
         | (0x000000f0U & ((IData)((0x1ce5046a98df237bULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__1035__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__1035__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__1035__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__1034__state_out 
        = ((0xffffffffffffff00ULL & vlSelfRef.__Vfunc_sbox4_64bit__1034__state_out) 
           | (IData)((IData)(__Vfunc_sbox4_8bit__1035__Vfuncout)));
    __Vfunc_sbox4_8bit__1035__state_in = (0x000000ffU 
                                          & (IData)(
                                                    (__Vfunc_sbox4_64bit__1034__state_in 
                                                     >> 8U)));
    vlSelf->__Vfunc_sbox4_8bit__1035__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4662663460315789253ull);
    vlSelfRef.__Vfunc_sbox4_8bit__1035__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1035__state_out)) 
         | (0x0000000fU & (IData)((0x1ce5046a98df237bULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__1035__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__1035__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1035__state_out)) 
         | (0x000000f0U & ((IData)((0x1ce5046a98df237bULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__1035__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__1035__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__1035__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__1034__state_out 
        = ((0xffffffffffff00ffULL & vlSelfRef.__Vfunc_sbox4_64bit__1034__state_out) 
           | ((QData)((IData)(__Vfunc_sbox4_8bit__1035__Vfuncout)) 
              << 8U));
    __Vfunc_sbox4_8bit__1035__state_in = (0x000000ffU 
                                          & (IData)(
                                                    (__Vfunc_sbox4_64bit__1034__state_in 
                                                     >> 0x10U)));
    vlSelf->__Vfunc_sbox4_8bit__1035__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4662663460315789253ull);
    vlSelfRef.__Vfunc_sbox4_8bit__1035__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1035__state_out)) 
         | (0x0000000fU & (IData)((0x1ce5046a98df237bULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__1035__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__1035__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1035__state_out)) 
         | (0x000000f0U & ((IData)((0x1ce5046a98df237bULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__1035__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__1035__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__1035__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__1034__state_out 
        = ((0xffffffffff00ffffULL & vlSelfRef.__Vfunc_sbox4_64bit__1034__state_out) 
           | ((QData)((IData)(__Vfunc_sbox4_8bit__1035__Vfuncout)) 
              << 0x00000010U));
    __Vfunc_sbox4_8bit__1035__state_in = (0x000000ffU 
                                          & (IData)(
                                                    (__Vfunc_sbox4_64bit__1034__state_in 
                                                     >> 0x18U)));
    vlSelf->__Vfunc_sbox4_8bit__1035__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4662663460315789253ull);
    vlSelfRef.__Vfunc_sbox4_8bit__1035__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1035__state_out)) 
         | (0x0000000fU & (IData)((0x1ce5046a98df237bULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__1035__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__1035__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1035__state_out)) 
         | (0x000000f0U & ((IData)((0x1ce5046a98df237bULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__1035__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__1035__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__1035__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__1034__state_out 
        = ((0xffffffff00ffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__1034__state_out) 
           | ((QData)((IData)(__Vfunc_sbox4_8bit__1035__Vfuncout)) 
              << 0x00000018U));
    __Vfunc_sbox4_8bit__1035__state_in = (0x000000ffU 
                                          & (IData)(
                                                    (__Vfunc_sbox4_64bit__1034__state_in 
                                                     >> 0x20U)));
    vlSelf->__Vfunc_sbox4_8bit__1035__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4662663460315789253ull);
    vlSelfRef.__Vfunc_sbox4_8bit__1035__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1035__state_out)) 
         | (0x0000000fU & (IData)((0x1ce5046a98df237bULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__1035__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__1035__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1035__state_out)) 
         | (0x000000f0U & ((IData)((0x1ce5046a98df237bULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__1035__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__1035__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__1035__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__1034__state_out 
        = ((0xffffff00ffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__1034__state_out) 
           | ((QData)((IData)(__Vfunc_sbox4_8bit__1035__Vfuncout)) 
              << 0x00000020U));
    __Vfunc_sbox4_8bit__1035__state_in = (0x000000ffU 
                                          & (IData)(
                                                    (__Vfunc_sbox4_64bit__1034__state_in 
                                                     >> 0x28U)));
    vlSelf->__Vfunc_sbox4_8bit__1035__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4662663460315789253ull);
    vlSelfRef.__Vfunc_sbox4_8bit__1035__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1035__state_out)) 
         | (0x0000000fU & (IData)((0x1ce5046a98df237bULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__1035__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__1035__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1035__state_out)) 
         | (0x000000f0U & ((IData)((0x1ce5046a98df237bULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__1035__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__1035__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__1035__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__1034__state_out 
        = ((0xffff00ffffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__1034__state_out) 
           | ((QData)((IData)(__Vfunc_sbox4_8bit__1035__Vfuncout)) 
              << 0x00000028U));
    __Vfunc_sbox4_8bit__1035__state_in = (0x000000ffU 
                                          & (IData)(
                                                    (__Vfunc_sbox4_64bit__1034__state_in 
                                                     >> 0x30U)));
    vlSelf->__Vfunc_sbox4_8bit__1035__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4662663460315789253ull);
    vlSelfRef.__Vfunc_sbox4_8bit__1035__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1035__state_out)) 
         | (0x0000000fU & (IData)((0x1ce5046a98df237bULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__1035__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__1035__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1035__state_out)) 
         | (0x000000f0U & ((IData)((0x1ce5046a98df237bULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__1035__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__1035__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__1035__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__1034__state_out 
        = ((0xff00ffffffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__1034__state_out) 
           | ((QData)((IData)(__Vfunc_sbox4_8bit__1035__Vfuncout)) 
              << 0x00000030U));
    __Vfunc_sbox4_8bit__1035__state_in = (0x000000ffU 
                                          & (IData)(
                                                    (__Vfunc_sbox4_64bit__1034__state_in 
                                                     >> 0x38U)));
    vlSelf->__Vfunc_sbox4_8bit__1035__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4662663460315789253ull);
    vlSelfRef.__Vfunc_sbox4_8bit__1035__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1035__state_out)) 
         | (0x0000000fU & (IData)((0x1ce5046a98df237bULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__1035__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__1035__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1035__state_out)) 
         | (0x000000f0U & ((IData)((0x1ce5046a98df237bULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__1035__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__1035__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__1035__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__1034__state_out 
        = ((0x00ffffffffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__1034__state_out) 
           | ((QData)((IData)(__Vfunc_sbox4_8bit__1035__Vfuncout)) 
              << 0x00000038U));
    __Vfunc_sbox4_64bit__1034__Vfuncout = vlSelfRef.__Vfunc_sbox4_64bit__1034__state_out;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__gen_prince__DOT__u_cipher__DOT__data_state_hi__BRA__255__03a192__KET__ 
        = __Vfunc_sbox4_64bit__1034__Vfuncout;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__gen_prince__DOT__u_cipher__DOT__data_state_lo__BRA__191__03a128__KET__ 
        = (0xa4093822299f31d0ULL ^ (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__gen_prince__DOT__u_cipher__DOT__gen_fwd_pass__BRA__2__KET____DOT__data_state_round 
                                    ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__gen_prince__DOT__u_cipher__DOT__k1_d));
    __Vfunc_prince_shiftrows_64bit__1087__state_in 
        = (0x64a51195e0e3610dULL ^ (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__gen_prince__DOT__u_cipher__DOT__data_state_hi__BRA__255__03a192__KET__ 
                                    ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__gen_prince__DOT__u_cipher__DOT__k1_d));
    vlSelf->__Vfunc_prince_shiftrows_64bit__1087__state_out = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 12434090266875019077ull);
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__1087__state_out 
        = ((0xfffffffffffff000ULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__1087__state_out) 
           | (IData)((IData)(((0x00000f00U & ((IData)(
                                                      (__Vfunc_prince_shiftrows_64bit__1087__state_in 
                                                       >> 0x18U)) 
                                              << 8U)) 
                              | ((0x000000f0U & ((IData)(
                                                         (__Vfunc_prince_shiftrows_64bit__1087__state_in 
                                                          >> 0x24U)) 
                                                 << 4U)) 
                                 | (0x0000000fU & (IData)(
                                                          (__Vfunc_prince_shiftrows_64bit__1087__state_in 
                                                           >> 0x30U))))))));
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__1087__state_out 
        = ((0xffffffffff000fffULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__1087__state_out) 
           | ((QData)((IData)(((0x00000f00U & ((IData)(
                                                       (__Vfunc_prince_shiftrows_64bit__1087__state_in 
                                                        >> 0x34U)) 
                                               << 8U)) 
                               | ((0x000000f0U & ((IData)(__Vfunc_prince_shiftrows_64bit__1087__state_in) 
                                                  << 4U)) 
                                  | (0x0000000fU & (IData)(
                                                           (__Vfunc_prince_shiftrows_64bit__1087__state_in 
                                                            >> 0x0cU))))))) 
              << 0x0000000cU));
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__1087__state_out 
        = ((0xfffffff000ffffffULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__1087__state_out) 
           | ((QData)((IData)(((0x00000f00U & ((IData)(
                                                       (__Vfunc_prince_shiftrows_64bit__1087__state_in 
                                                        >> 0x10U)) 
                                               << 8U)) 
                               | ((0x000000f0U & ((IData)(
                                                          (__Vfunc_prince_shiftrows_64bit__1087__state_in 
                                                           >> 0x1cU)) 
                                                  << 4U)) 
                                  | (0x0000000fU & (IData)(
                                                           (__Vfunc_prince_shiftrows_64bit__1087__state_in 
                                                            >> 0x28U))))))) 
              << 0x00000018U));
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__1087__state_out 
        = ((0xffff000fffffffffULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__1087__state_out) 
           | ((QData)((IData)(((0x00000f00U & ((IData)(
                                                       (__Vfunc_prince_shiftrows_64bit__1087__state_in 
                                                        >> 0x2cU)) 
                                               << 8U)) 
                               | ((0x000000f0U & ((IData)(
                                                          (__Vfunc_prince_shiftrows_64bit__1087__state_in 
                                                           >> 0x38U)) 
                                                  << 4U)) 
                                  | (0x0000000fU & (IData)(
                                                           (__Vfunc_prince_shiftrows_64bit__1087__state_in 
                                                            >> 4U))))))) 
              << 0x00000024U));
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__1087__state_out 
        = ((0xf000ffffffffffffULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__1087__state_out) 
           | ((QData)((IData)(((0x00000f00U & ((IData)(
                                                       (__Vfunc_prince_shiftrows_64bit__1087__state_in 
                                                        >> 8U)) 
                                               << 8U)) 
                               | ((0x000000f0U & ((IData)(
                                                          (__Vfunc_prince_shiftrows_64bit__1087__state_in 
                                                           >> 0x14U)) 
                                                  << 4U)) 
                                  | (0x0000000fU & (IData)(
                                                           (__Vfunc_prince_shiftrows_64bit__1087__state_in 
                                                            >> 0x20U))))))) 
              << 0x00000030U));
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__1087__state_out 
        = ((0x0fffffffffffffffULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__1087__state_out) 
           | ((QData)((IData)((0x0000000fU & (IData)(
                                                     (__Vfunc_prince_shiftrows_64bit__1087__state_in 
                                                      >> 0x3cU))))) 
              << 0x0000003cU));
    __Vfunc_prince_shiftrows_64bit__1087__Vfuncout 
        = vlSelfRef.__Vfunc_prince_shiftrows_64bit__1087__state_out;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__gen_prince__DOT__u_cipher__DOT____VdfgExtracted_h99975f1a__0 
        = __Vfunc_prince_shiftrows_64bit__1087__Vfuncout;
    __Vfunc_sbox4_64bit__1076__state_in = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__gen_prince__DOT__u_cipher__DOT__data_state_lo__BRA__191__03a128__KET__;
    vlSelf->__Vfunc_sbox4_64bit__1076__state_out = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 4194195226137997228ull);
    __Vfunc_sbox4_8bit__1077__state_in = (0x000000ffU 
                                          & (IData)(__Vfunc_sbox4_64bit__1076__state_in));
    vlSelf->__Vfunc_sbox4_8bit__1077__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2794548327376558196ull);
    vlSelfRef.__Vfunc_sbox4_8bit__1077__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1077__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__1077__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__1077__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1077__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__1077__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__1077__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__1077__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__1076__state_out 
        = ((0xffffffffffffff00ULL & vlSelfRef.__Vfunc_sbox4_64bit__1076__state_out) 
           | (IData)((IData)(__Vfunc_sbox4_8bit__1077__Vfuncout)));
    __Vfunc_sbox4_8bit__1077__state_in = (0x000000ffU 
                                          & (IData)(
                                                    (__Vfunc_sbox4_64bit__1076__state_in 
                                                     >> 8U)));
    vlSelf->__Vfunc_sbox4_8bit__1077__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2794548327376558196ull);
    vlSelfRef.__Vfunc_sbox4_8bit__1077__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1077__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__1077__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__1077__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1077__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__1077__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__1077__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__1077__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__1076__state_out 
        = ((0xffffffffffff00ffULL & vlSelfRef.__Vfunc_sbox4_64bit__1076__state_out) 
           | ((QData)((IData)(__Vfunc_sbox4_8bit__1077__Vfuncout)) 
              << 8U));
    __Vfunc_sbox4_8bit__1077__state_in = (0x000000ffU 
                                          & (IData)(
                                                    (__Vfunc_sbox4_64bit__1076__state_in 
                                                     >> 0x10U)));
    vlSelf->__Vfunc_sbox4_8bit__1077__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2794548327376558196ull);
    vlSelfRef.__Vfunc_sbox4_8bit__1077__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1077__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__1077__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__1077__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1077__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__1077__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__1077__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__1077__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__1076__state_out 
        = ((0xffffffffff00ffffULL & vlSelfRef.__Vfunc_sbox4_64bit__1076__state_out) 
           | ((QData)((IData)(__Vfunc_sbox4_8bit__1077__Vfuncout)) 
              << 0x00000010U));
    __Vfunc_sbox4_8bit__1077__state_in = (0x000000ffU 
                                          & (IData)(
                                                    (__Vfunc_sbox4_64bit__1076__state_in 
                                                     >> 0x18U)));
    vlSelf->__Vfunc_sbox4_8bit__1077__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2794548327376558196ull);
    vlSelfRef.__Vfunc_sbox4_8bit__1077__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1077__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__1077__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__1077__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1077__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__1077__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__1077__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__1077__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__1076__state_out 
        = ((0xffffffff00ffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__1076__state_out) 
           | ((QData)((IData)(__Vfunc_sbox4_8bit__1077__Vfuncout)) 
              << 0x00000018U));
    __Vfunc_sbox4_8bit__1077__state_in = (0x000000ffU 
                                          & (IData)(
                                                    (__Vfunc_sbox4_64bit__1076__state_in 
                                                     >> 0x20U)));
    vlSelf->__Vfunc_sbox4_8bit__1077__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2794548327376558196ull);
    vlSelfRef.__Vfunc_sbox4_8bit__1077__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1077__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__1077__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__1077__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1077__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__1077__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__1077__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__1077__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__1076__state_out 
        = ((0xffffff00ffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__1076__state_out) 
           | ((QData)((IData)(__Vfunc_sbox4_8bit__1077__Vfuncout)) 
              << 0x00000020U));
    __Vfunc_sbox4_8bit__1077__state_in = (0x000000ffU 
                                          & (IData)(
                                                    (__Vfunc_sbox4_64bit__1076__state_in 
                                                     >> 0x28U)));
    vlSelf->__Vfunc_sbox4_8bit__1077__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2794548327376558196ull);
    vlSelfRef.__Vfunc_sbox4_8bit__1077__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1077__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__1077__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__1077__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1077__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__1077__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__1077__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__1077__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__1076__state_out 
        = ((0xffff00ffffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__1076__state_out) 
           | ((QData)((IData)(__Vfunc_sbox4_8bit__1077__Vfuncout)) 
              << 0x00000028U));
    __Vfunc_sbox4_8bit__1077__state_in = (0x000000ffU 
                                          & (IData)(
                                                    (__Vfunc_sbox4_64bit__1076__state_in 
                                                     >> 0x30U)));
    vlSelf->__Vfunc_sbox4_8bit__1077__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2794548327376558196ull);
    vlSelfRef.__Vfunc_sbox4_8bit__1077__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1077__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__1077__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__1077__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1077__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__1077__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__1077__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__1077__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__1076__state_out 
        = ((0xff00ffffffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__1076__state_out) 
           | ((QData)((IData)(__Vfunc_sbox4_8bit__1077__Vfuncout)) 
              << 0x00000030U));
    __Vfunc_sbox4_8bit__1077__state_in = (0x000000ffU 
                                          & (IData)(
                                                    (__Vfunc_sbox4_64bit__1076__state_in 
                                                     >> 0x38U)));
    vlSelf->__Vfunc_sbox4_8bit__1077__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2794548327376558196ull);
    vlSelfRef.__Vfunc_sbox4_8bit__1077__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1077__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__1077__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__1077__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1077__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__1077__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__1077__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__1077__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__1076__state_out 
        = ((0x00ffffffffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__1076__state_out) 
           | ((QData)((IData)(__Vfunc_sbox4_8bit__1077__Vfuncout)) 
              << 0x00000038U));
    __Vfunc_sbox4_64bit__1076__Vfuncout = vlSelfRef.__Vfunc_sbox4_64bit__1076__state_out;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__gen_prince__DOT__u_cipher__DOT____VdfgExtracted_h99e0c7c1__3 
        = __Vfunc_sbox4_64bit__1076__Vfuncout;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__gen_prince__DOT__u_cipher__DOT__gen_bwd_pass__BRA__4__KET____DOT__data_state_bwd 
        = chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__gen_prince__DOT__u_cipher__DOT____VdfgExtracted_h99975f1a__0;
    __Vfunc_prince_mult_prime_64bit__1036__state_in 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__gen_prince__DOT__u_cipher__DOT__gen_bwd_pass__BRA__4__KET____DOT__data_state_bwd;
    vlSelf->__Vfunc_prince_mult_prime_64bit__1036__state_out = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 14712142395319361199ull);
    __Vfunc_prince_nibble_red16__1037__vect = (0xe7bdU 
                                               & (IData)(__Vfunc_prince_mult_prime_64bit__1036__state_in));
    __Vfunc_prince_nibble_red16__1037__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__1037__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__1037__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__1037__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__1037__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__1036__state_out 
        = ((0xfffffffffffffff0ULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__1036__state_out) 
           | (IData)((IData)(__Vfunc_prince_nibble_red16__1037__Vfuncout)));
    __Vfunc_prince_nibble_red16__1038__vect = (0xde7bU 
                                               & (IData)(__Vfunc_prince_mult_prime_64bit__1036__state_in));
    __Vfunc_prince_nibble_red16__1038__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__1038__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__1038__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__1038__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__1038__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__1036__state_out 
        = ((0xffffffffffffff0fULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__1036__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__1038__Vfuncout)) 
              << 4U));
    __Vfunc_prince_nibble_red16__1039__vect = (0xbde7U 
                                               & (IData)(__Vfunc_prince_mult_prime_64bit__1036__state_in));
    __Vfunc_prince_nibble_red16__1039__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__1039__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__1039__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__1039__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__1039__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__1036__state_out 
        = ((0xfffffffffffff0ffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__1036__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__1039__Vfuncout)) 
              << 8U));
    __Vfunc_prince_nibble_red16__1040__vect = (0x7bdeU 
                                               & (IData)(__Vfunc_prince_mult_prime_64bit__1036__state_in));
    __Vfunc_prince_nibble_red16__1040__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__1040__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__1040__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__1040__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__1040__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__1036__state_out 
        = ((0xffffffffffff0fffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__1036__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__1040__Vfuncout)) 
              << 0x0000000cU));
    __Vfunc_prince_nibble_red16__1041__vect = (0x7bdeU 
                                               & (IData)(
                                                         (__Vfunc_prince_mult_prime_64bit__1036__state_in 
                                                          >> 0x10U)));
    __Vfunc_prince_nibble_red16__1041__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__1041__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__1041__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__1041__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__1041__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__1036__state_out 
        = ((0xfffffffffff0ffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__1036__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__1041__Vfuncout)) 
              << 0x00000010U));
    __Vfunc_prince_nibble_red16__1042__vect = (0xe7bdU 
                                               & (IData)(
                                                         (__Vfunc_prince_mult_prime_64bit__1036__state_in 
                                                          >> 0x10U)));
    __Vfunc_prince_nibble_red16__1042__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__1042__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__1042__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__1042__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__1042__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__1036__state_out 
        = ((0xffffffffff0fffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__1036__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__1042__Vfuncout)) 
              << 0x00000014U));
    __Vfunc_prince_nibble_red16__1043__vect = (0xde7bU 
                                               & (IData)(
                                                         (__Vfunc_prince_mult_prime_64bit__1036__state_in 
                                                          >> 0x10U)));
    __Vfunc_prince_nibble_red16__1043__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__1043__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__1043__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__1043__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__1043__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__1036__state_out 
        = ((0xfffffffff0ffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__1036__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__1043__Vfuncout)) 
              << 0x00000018U));
    __Vfunc_prince_nibble_red16__1044__vect = (0xbde7U 
                                               & (IData)(
                                                         (__Vfunc_prince_mult_prime_64bit__1036__state_in 
                                                          >> 0x10U)));
    __Vfunc_prince_nibble_red16__1044__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__1044__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__1044__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__1044__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__1044__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__1036__state_out 
        = ((0xffffffff0fffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__1036__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__1044__Vfuncout)) 
              << 0x0000001cU));
    __Vfunc_prince_nibble_red16__1045__vect = (0x7bdeU 
                                               & (IData)(
                                                         (__Vfunc_prince_mult_prime_64bit__1036__state_in 
                                                          >> 0x20U)));
    __Vfunc_prince_nibble_red16__1045__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__1045__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__1045__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__1045__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__1045__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__1036__state_out 
        = ((0xfffffff0ffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__1036__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__1045__Vfuncout)) 
              << 0x00000020U));
    __Vfunc_prince_nibble_red16__1046__vect = (0xe7bdU 
                                               & (IData)(
                                                         (__Vfunc_prince_mult_prime_64bit__1036__state_in 
                                                          >> 0x20U)));
    __Vfunc_prince_nibble_red16__1046__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__1046__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__1046__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__1046__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__1046__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__1036__state_out 
        = ((0xffffff0fffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__1036__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__1046__Vfuncout)) 
              << 0x00000024U));
    __Vfunc_prince_nibble_red16__1047__vect = (0xde7bU 
                                               & (IData)(
                                                         (__Vfunc_prince_mult_prime_64bit__1036__state_in 
                                                          >> 0x20U)));
    __Vfunc_prince_nibble_red16__1047__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__1047__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__1047__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__1047__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__1047__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__1036__state_out 
        = ((0xfffff0ffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__1036__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__1047__Vfuncout)) 
              << 0x00000028U));
    __Vfunc_prince_nibble_red16__1048__vect = (0xbde7U 
                                               & (IData)(
                                                         (__Vfunc_prince_mult_prime_64bit__1036__state_in 
                                                          >> 0x20U)));
    __Vfunc_prince_nibble_red16__1048__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__1048__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__1048__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__1048__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__1048__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__1036__state_out 
        = ((0xffff0fffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__1036__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__1048__Vfuncout)) 
              << 0x0000002cU));
    __Vfunc_prince_nibble_red16__1049__vect = (0xe7bdU 
                                               & (IData)(
                                                         (__Vfunc_prince_mult_prime_64bit__1036__state_in 
                                                          >> 0x30U)));
    __Vfunc_prince_nibble_red16__1049__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__1049__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__1049__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__1049__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__1049__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__1036__state_out 
        = ((0xfff0ffffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__1036__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__1049__Vfuncout)) 
              << 0x00000030U));
    __Vfunc_prince_nibble_red16__1050__vect = (0xde7bU 
                                               & (IData)(
                                                         (__Vfunc_prince_mult_prime_64bit__1036__state_in 
                                                          >> 0x30U)));
    __Vfunc_prince_nibble_red16__1050__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__1050__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__1050__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__1050__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__1050__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__1036__state_out 
        = ((0xff0fffffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__1036__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__1050__Vfuncout)) 
              << 0x00000034U));
    __Vfunc_prince_nibble_red16__1051__vect = (0xbde7U 
                                               & (IData)(
                                                         (__Vfunc_prince_mult_prime_64bit__1036__state_in 
                                                          >> 0x30U)));
    __Vfunc_prince_nibble_red16__1051__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__1051__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__1051__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__1051__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__1051__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__1036__state_out 
        = ((0xf0ffffffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__1036__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__1051__Vfuncout)) 
              << 0x00000038U));
    __Vfunc_prince_nibble_red16__1052__vect = (0x7bdeU 
                                               & (IData)(
                                                         (__Vfunc_prince_mult_prime_64bit__1036__state_in 
                                                          >> 0x30U)));
    __Vfunc_prince_nibble_red16__1052__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__1052__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__1052__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__1052__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__1052__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__1036__state_out 
        = ((0x0fffffffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__1036__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__1052__Vfuncout)) 
              << 0x0000003cU));
    __Vfunc_prince_mult_prime_64bit__1036__Vfuncout 
        = vlSelfRef.__Vfunc_prince_mult_prime_64bit__1036__state_out;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__gen_prince__DOT__u_cipher__DOT__gen_bwd_pass__BRA__4__KET____DOT__data_state_bwd 
        = __Vfunc_prince_mult_prime_64bit__1036__Vfuncout;
    __Vfunc_sbox4_64bit__1053__state_in = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__gen_prince__DOT__u_cipher__DOT__gen_bwd_pass__BRA__4__KET____DOT__data_state_bwd;
    vlSelf->__Vfunc_sbox4_64bit__1053__state_out = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 12756654205515300608ull);
    __Vfunc_sbox4_8bit__1054__state_in = (0x000000ffU 
                                          & (IData)(__Vfunc_sbox4_64bit__1053__state_in));
    vlSelf->__Vfunc_sbox4_8bit__1054__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14506283857436667564ull);
    vlSelfRef.__Vfunc_sbox4_8bit__1054__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1054__state_out)) 
         | (0x0000000fU & (IData)((0x1ce5046a98df237bULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__1054__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__1054__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1054__state_out)) 
         | (0x000000f0U & ((IData)((0x1ce5046a98df237bULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__1054__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__1054__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__1054__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__1053__state_out 
        = ((0xffffffffffffff00ULL & vlSelfRef.__Vfunc_sbox4_64bit__1053__state_out) 
           | (IData)((IData)(__Vfunc_sbox4_8bit__1054__Vfuncout)));
    __Vfunc_sbox4_8bit__1054__state_in = (0x000000ffU 
                                          & (IData)(
                                                    (__Vfunc_sbox4_64bit__1053__state_in 
                                                     >> 8U)));
    vlSelf->__Vfunc_sbox4_8bit__1054__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14506283857436667564ull);
    vlSelfRef.__Vfunc_sbox4_8bit__1054__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1054__state_out)) 
         | (0x0000000fU & (IData)((0x1ce5046a98df237bULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__1054__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__1054__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1054__state_out)) 
         | (0x000000f0U & ((IData)((0x1ce5046a98df237bULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__1054__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__1054__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__1054__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__1053__state_out 
        = ((0xffffffffffff00ffULL & vlSelfRef.__Vfunc_sbox4_64bit__1053__state_out) 
           | ((QData)((IData)(__Vfunc_sbox4_8bit__1054__Vfuncout)) 
              << 8U));
    __Vfunc_sbox4_8bit__1054__state_in = (0x000000ffU 
                                          & (IData)(
                                                    (__Vfunc_sbox4_64bit__1053__state_in 
                                                     >> 0x10U)));
    vlSelf->__Vfunc_sbox4_8bit__1054__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14506283857436667564ull);
    vlSelfRef.__Vfunc_sbox4_8bit__1054__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1054__state_out)) 
         | (0x0000000fU & (IData)((0x1ce5046a98df237bULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__1054__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__1054__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1054__state_out)) 
         | (0x000000f0U & ((IData)((0x1ce5046a98df237bULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__1054__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__1054__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__1054__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__1053__state_out 
        = ((0xffffffffff00ffffULL & vlSelfRef.__Vfunc_sbox4_64bit__1053__state_out) 
           | ((QData)((IData)(__Vfunc_sbox4_8bit__1054__Vfuncout)) 
              << 0x00000010U));
    __Vfunc_sbox4_8bit__1054__state_in = (0x000000ffU 
                                          & (IData)(
                                                    (__Vfunc_sbox4_64bit__1053__state_in 
                                                     >> 0x18U)));
    vlSelf->__Vfunc_sbox4_8bit__1054__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14506283857436667564ull);
    vlSelfRef.__Vfunc_sbox4_8bit__1054__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1054__state_out)) 
         | (0x0000000fU & (IData)((0x1ce5046a98df237bULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__1054__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__1054__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1054__state_out)) 
         | (0x000000f0U & ((IData)((0x1ce5046a98df237bULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__1054__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__1054__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__1054__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__1053__state_out 
        = ((0xffffffff00ffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__1053__state_out) 
           | ((QData)((IData)(__Vfunc_sbox4_8bit__1054__Vfuncout)) 
              << 0x00000018U));
    __Vfunc_sbox4_8bit__1054__state_in = (0x000000ffU 
                                          & (IData)(
                                                    (__Vfunc_sbox4_64bit__1053__state_in 
                                                     >> 0x20U)));
    vlSelf->__Vfunc_sbox4_8bit__1054__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14506283857436667564ull);
    vlSelfRef.__Vfunc_sbox4_8bit__1054__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1054__state_out)) 
         | (0x0000000fU & (IData)((0x1ce5046a98df237bULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__1054__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__1054__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1054__state_out)) 
         | (0x000000f0U & ((IData)((0x1ce5046a98df237bULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__1054__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__1054__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__1054__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__1053__state_out 
        = ((0xffffff00ffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__1053__state_out) 
           | ((QData)((IData)(__Vfunc_sbox4_8bit__1054__Vfuncout)) 
              << 0x00000020U));
    __Vfunc_sbox4_8bit__1054__state_in = (0x000000ffU 
                                          & (IData)(
                                                    (__Vfunc_sbox4_64bit__1053__state_in 
                                                     >> 0x28U)));
    vlSelf->__Vfunc_sbox4_8bit__1054__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14506283857436667564ull);
    vlSelfRef.__Vfunc_sbox4_8bit__1054__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1054__state_out)) 
         | (0x0000000fU & (IData)((0x1ce5046a98df237bULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__1054__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__1054__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1054__state_out)) 
         | (0x000000f0U & ((IData)((0x1ce5046a98df237bULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__1054__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__1054__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__1054__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__1053__state_out 
        = ((0xffff00ffffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__1053__state_out) 
           | ((QData)((IData)(__Vfunc_sbox4_8bit__1054__Vfuncout)) 
              << 0x00000028U));
    __Vfunc_sbox4_8bit__1054__state_in = (0x000000ffU 
                                          & (IData)(
                                                    (__Vfunc_sbox4_64bit__1053__state_in 
                                                     >> 0x30U)));
    vlSelf->__Vfunc_sbox4_8bit__1054__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14506283857436667564ull);
    vlSelfRef.__Vfunc_sbox4_8bit__1054__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1054__state_out)) 
         | (0x0000000fU & (IData)((0x1ce5046a98df237bULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__1054__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__1054__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1054__state_out)) 
         | (0x000000f0U & ((IData)((0x1ce5046a98df237bULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__1054__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__1054__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__1054__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__1053__state_out 
        = ((0xff00ffffffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__1053__state_out) 
           | ((QData)((IData)(__Vfunc_sbox4_8bit__1054__Vfuncout)) 
              << 0x00000030U));
    __Vfunc_sbox4_8bit__1054__state_in = (0x000000ffU 
                                          & (IData)(
                                                    (__Vfunc_sbox4_64bit__1053__state_in 
                                                     >> 0x38U)));
    vlSelf->__Vfunc_sbox4_8bit__1054__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14506283857436667564ull);
    vlSelfRef.__Vfunc_sbox4_8bit__1054__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1054__state_out)) 
         | (0x0000000fU & (IData)((0x1ce5046a98df237bULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__1054__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__1054__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1054__state_out)) 
         | (0x000000f0U & ((IData)((0x1ce5046a98df237bULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__1054__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__1054__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__1054__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__1053__state_out 
        = ((0x00ffffffffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__1053__state_out) 
           | ((QData)((IData)(__Vfunc_sbox4_8bit__1054__Vfuncout)) 
              << 0x00000038U));
    __Vfunc_sbox4_64bit__1053__Vfuncout = vlSelfRef.__Vfunc_sbox4_64bit__1053__state_out;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__gen_prince__DOT__u_cipher__DOT__data_state_hi__BRA__319__03a256__KET__ 
        = __Vfunc_sbox4_64bit__1053__Vfuncout;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__gen_prince__DOT__u_cipher__DOT__gen_fwd_pass__BRA__3__KET____DOT__data_state_round 
        = chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__gen_prince__DOT__u_cipher__DOT____VdfgExtracted_h99e0c7c1__3;
    __Vfunc_prince_mult_prime_64bit__906__state_in 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__gen_prince__DOT__u_cipher__DOT__gen_fwd_pass__BRA__3__KET____DOT__data_state_round;
    vlSelf->__Vfunc_prince_mult_prime_64bit__906__state_out = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 1834938185373470225ull);
    __Vfunc_prince_nibble_red16__907__vect = (0xe7bdU 
                                              & (IData)(__Vfunc_prince_mult_prime_64bit__906__state_in));
    __Vfunc_prince_nibble_red16__907__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__907__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__907__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__907__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__907__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__906__state_out 
        = ((0xfffffffffffffff0ULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__906__state_out) 
           | (IData)((IData)(__Vfunc_prince_nibble_red16__907__Vfuncout)));
    __Vfunc_prince_nibble_red16__908__vect = (0xde7bU 
                                              & (IData)(__Vfunc_prince_mult_prime_64bit__906__state_in));
    __Vfunc_prince_nibble_red16__908__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__908__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__908__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__908__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__908__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__906__state_out 
        = ((0xffffffffffffff0fULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__906__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__908__Vfuncout)) 
              << 4U));
    __Vfunc_prince_nibble_red16__909__vect = (0xbde7U 
                                              & (IData)(__Vfunc_prince_mult_prime_64bit__906__state_in));
    __Vfunc_prince_nibble_red16__909__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__909__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__909__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__909__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__909__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__906__state_out 
        = ((0xfffffffffffff0ffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__906__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__909__Vfuncout)) 
              << 8U));
    __Vfunc_prince_nibble_red16__910__vect = (0x7bdeU 
                                              & (IData)(__Vfunc_prince_mult_prime_64bit__906__state_in));
    __Vfunc_prince_nibble_red16__910__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__910__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__910__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__910__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__910__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__906__state_out 
        = ((0xffffffffffff0fffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__906__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__910__Vfuncout)) 
              << 0x0000000cU));
    __Vfunc_prince_nibble_red16__911__vect = (0x7bdeU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__906__state_in 
                                                         >> 0x10U)));
    __Vfunc_prince_nibble_red16__911__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__911__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__911__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__911__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__911__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__906__state_out 
        = ((0xfffffffffff0ffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__906__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__911__Vfuncout)) 
              << 0x00000010U));
    __Vfunc_prince_nibble_red16__912__vect = (0xe7bdU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__906__state_in 
                                                         >> 0x10U)));
    __Vfunc_prince_nibble_red16__912__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__912__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__912__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__912__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__912__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__906__state_out 
        = ((0xffffffffff0fffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__906__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__912__Vfuncout)) 
              << 0x00000014U));
    __Vfunc_prince_nibble_red16__913__vect = (0xde7bU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__906__state_in 
                                                         >> 0x10U)));
    __Vfunc_prince_nibble_red16__913__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__913__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__913__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__913__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__913__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__906__state_out 
        = ((0xfffffffff0ffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__906__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__913__Vfuncout)) 
              << 0x00000018U));
    __Vfunc_prince_nibble_red16__914__vect = (0xbde7U 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__906__state_in 
                                                         >> 0x10U)));
    __Vfunc_prince_nibble_red16__914__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__914__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__914__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__914__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__914__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__906__state_out 
        = ((0xffffffff0fffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__906__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__914__Vfuncout)) 
              << 0x0000001cU));
    __Vfunc_prince_nibble_red16__915__vect = (0x7bdeU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__906__state_in 
                                                         >> 0x20U)));
    __Vfunc_prince_nibble_red16__915__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__915__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__915__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__915__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__915__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__906__state_out 
        = ((0xfffffff0ffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__906__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__915__Vfuncout)) 
              << 0x00000020U));
    __Vfunc_prince_nibble_red16__916__vect = (0xe7bdU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__906__state_in 
                                                         >> 0x20U)));
    __Vfunc_prince_nibble_red16__916__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__916__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__916__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__916__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__916__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__906__state_out 
        = ((0xffffff0fffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__906__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__916__Vfuncout)) 
              << 0x00000024U));
    __Vfunc_prince_nibble_red16__917__vect = (0xde7bU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__906__state_in 
                                                         >> 0x20U)));
    __Vfunc_prince_nibble_red16__917__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__917__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__917__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__917__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__917__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__906__state_out 
        = ((0xfffff0ffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__906__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__917__Vfuncout)) 
              << 0x00000028U));
    __Vfunc_prince_nibble_red16__918__vect = (0xbde7U 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__906__state_in 
                                                         >> 0x20U)));
    __Vfunc_prince_nibble_red16__918__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__918__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__918__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__918__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__918__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__906__state_out 
        = ((0xffff0fffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__906__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__918__Vfuncout)) 
              << 0x0000002cU));
    __Vfunc_prince_nibble_red16__919__vect = (0xe7bdU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__906__state_in 
                                                         >> 0x30U)));
    __Vfunc_prince_nibble_red16__919__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__919__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__919__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__919__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__919__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__906__state_out 
        = ((0xfff0ffffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__906__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__919__Vfuncout)) 
              << 0x00000030U));
    __Vfunc_prince_nibble_red16__920__vect = (0xde7bU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__906__state_in 
                                                         >> 0x30U)));
    __Vfunc_prince_nibble_red16__920__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__920__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__920__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__920__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__920__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__906__state_out 
        = ((0xff0fffffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__906__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__920__Vfuncout)) 
              << 0x00000034U));
    __Vfunc_prince_nibble_red16__921__vect = (0xbde7U 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__906__state_in 
                                                         >> 0x30U)));
    __Vfunc_prince_nibble_red16__921__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__921__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__921__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__921__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__921__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__906__state_out 
        = ((0xf0ffffffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__906__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__921__Vfuncout)) 
              << 0x00000038U));
    __Vfunc_prince_nibble_red16__922__vect = (0x7bdeU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__906__state_in 
                                                         >> 0x30U)));
    __Vfunc_prince_nibble_red16__922__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__922__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__922__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__922__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__922__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__906__state_out 
        = ((0x0fffffffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__906__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__922__Vfuncout)) 
              << 0x0000003cU));
    __Vfunc_prince_mult_prime_64bit__906__Vfuncout 
        = vlSelfRef.__Vfunc_prince_mult_prime_64bit__906__state_out;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__gen_prince__DOT__u_cipher__DOT__gen_fwd_pass__BRA__3__KET____DOT__data_state_round 
        = __Vfunc_prince_mult_prime_64bit__906__Vfuncout;
    __Vfunc_prince_shiftrows_64bit__923__state_in = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__gen_prince__DOT__u_cipher__DOT__gen_fwd_pass__BRA__3__KET____DOT__data_state_round;
    vlSelf->__Vfunc_prince_shiftrows_64bit__923__state_out = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 5761953439912742771ull);
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__923__state_out 
        = ((0xfffffffffffff000ULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__923__state_out) 
           | (IData)((IData)(((0x00000f00U & ((IData)(
                                                      (__Vfunc_prince_shiftrows_64bit__923__state_in 
                                                       >> 0x38U)) 
                                              << 8U)) 
                              | ((0x000000f0U & ((IData)(
                                                         (__Vfunc_prince_shiftrows_64bit__923__state_in 
                                                          >> 0x24U)) 
                                                 << 4U)) 
                                 | (0x0000000fU & (IData)(
                                                          (__Vfunc_prince_shiftrows_64bit__923__state_in 
                                                           >> 0x10U))))))));
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__923__state_out 
        = ((0xffffffffff000fffULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__923__state_out) 
           | ((QData)((IData)(((0x00000f00U & ((IData)(
                                                       (__Vfunc_prince_shiftrows_64bit__923__state_in 
                                                        >> 0x34U)) 
                                               << 8U)) 
                               | ((0x000000f0U & ((IData)(
                                                          (__Vfunc_prince_shiftrows_64bit__923__state_in 
                                                           >> 0x20U)) 
                                                  << 4U)) 
                                  | (0x0000000fU & (IData)(
                                                           (__Vfunc_prince_shiftrows_64bit__923__state_in 
                                                            >> 0x0cU))))))) 
              << 0x0000000cU));
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__923__state_out 
        = ((0xfffffff000ffffffULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__923__state_out) 
           | ((QData)((IData)(((0x00000f00U & ((IData)(
                                                       (__Vfunc_prince_shiftrows_64bit__923__state_in 
                                                        >> 0x30U)) 
                                               << 8U)) 
                               | ((0x000000f0U & ((IData)(
                                                          (__Vfunc_prince_shiftrows_64bit__923__state_in 
                                                           >> 0x1cU)) 
                                                  << 4U)) 
                                  | (0x0000000fU & (IData)(
                                                           (__Vfunc_prince_shiftrows_64bit__923__state_in 
                                                            >> 8U))))))) 
              << 0x00000018U));
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__923__state_out 
        = ((0xffff000fffffffffULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__923__state_out) 
           | ((QData)((IData)(((0x00000f00U & ((IData)(
                                                       (__Vfunc_prince_shiftrows_64bit__923__state_in 
                                                        >> 0x2cU)) 
                                               << 8U)) 
                               | ((0x000000f0U & ((IData)(
                                                          (__Vfunc_prince_shiftrows_64bit__923__state_in 
                                                           >> 0x18U)) 
                                                  << 4U)) 
                                  | (0x0000000fU & (IData)(
                                                           (__Vfunc_prince_shiftrows_64bit__923__state_in 
                                                            >> 4U))))))) 
              << 0x00000024U));
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__923__state_out 
        = ((0xf000ffffffffffffULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__923__state_out) 
           | ((QData)((IData)(((0x00000f00U & ((IData)(
                                                       (__Vfunc_prince_shiftrows_64bit__923__state_in 
                                                        >> 0x28U)) 
                                               << 8U)) 
                               | ((0x000000f0U & ((IData)(
                                                          (__Vfunc_prince_shiftrows_64bit__923__state_in 
                                                           >> 0x14U)) 
                                                  << 4U)) 
                                  | (0x0000000fU & (IData)(__Vfunc_prince_shiftrows_64bit__923__state_in)))))) 
              << 0x00000030U));
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__923__state_out 
        = ((0x0fffffffffffffffULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__923__state_out) 
           | ((QData)((IData)((0x0000000fU & (IData)(
                                                     (__Vfunc_prince_shiftrows_64bit__923__state_in 
                                                      >> 0x3cU))))) 
              << 0x0000003cU));
    __Vfunc_prince_shiftrows_64bit__923__Vfuncout = vlSelfRef.__Vfunc_prince_shiftrows_64bit__923__state_out;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__gen_prince__DOT__u_cipher__DOT__gen_fwd_pass__BRA__3__KET____DOT__data_state_round 
        = __Vfunc_prince_shiftrows_64bit__923__Vfuncout;
    __Vfunc_prince_shiftrows_64bit__1088__state_in 
        = (0xd3b5a399ca0c2399ULL ^ (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__gen_prince__DOT__u_cipher__DOT__data_state_hi__BRA__319__03a256__KET__ 
                                    ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__gen_prince__DOT__u_cipher__DOT__k0_new_d));
    vlSelf->__Vfunc_prince_shiftrows_64bit__1088__state_out = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 14731307012219508676ull);
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__1088__state_out 
        = ((0xfffffffffffff000ULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__1088__state_out) 
           | (IData)((IData)(((0x00000f00U & ((IData)(
                                                      (__Vfunc_prince_shiftrows_64bit__1088__state_in 
                                                       >> 0x18U)) 
                                              << 8U)) 
                              | ((0x000000f0U & ((IData)(
                                                         (__Vfunc_prince_shiftrows_64bit__1088__state_in 
                                                          >> 0x24U)) 
                                                 << 4U)) 
                                 | (0x0000000fU & (IData)(
                                                          (__Vfunc_prince_shiftrows_64bit__1088__state_in 
                                                           >> 0x30U))))))));
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__1088__state_out 
        = ((0xffffffffff000fffULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__1088__state_out) 
           | ((QData)((IData)(((0x00000f00U & ((IData)(
                                                       (__Vfunc_prince_shiftrows_64bit__1088__state_in 
                                                        >> 0x34U)) 
                                               << 8U)) 
                               | ((0x000000f0U & ((IData)(__Vfunc_prince_shiftrows_64bit__1088__state_in) 
                                                  << 4U)) 
                                  | (0x0000000fU & (IData)(
                                                           (__Vfunc_prince_shiftrows_64bit__1088__state_in 
                                                            >> 0x0cU))))))) 
              << 0x0000000cU));
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__1088__state_out 
        = ((0xfffffff000ffffffULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__1088__state_out) 
           | ((QData)((IData)(((0x00000f00U & ((IData)(
                                                       (__Vfunc_prince_shiftrows_64bit__1088__state_in 
                                                        >> 0x10U)) 
                                               << 8U)) 
                               | ((0x000000f0U & ((IData)(
                                                          (__Vfunc_prince_shiftrows_64bit__1088__state_in 
                                                           >> 0x1cU)) 
                                                  << 4U)) 
                                  | (0x0000000fU & (IData)(
                                                           (__Vfunc_prince_shiftrows_64bit__1088__state_in 
                                                            >> 0x28U))))))) 
              << 0x00000018U));
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__1088__state_out 
        = ((0xffff000fffffffffULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__1088__state_out) 
           | ((QData)((IData)(((0x00000f00U & ((IData)(
                                                       (__Vfunc_prince_shiftrows_64bit__1088__state_in 
                                                        >> 0x2cU)) 
                                               << 8U)) 
                               | ((0x000000f0U & ((IData)(
                                                          (__Vfunc_prince_shiftrows_64bit__1088__state_in 
                                                           >> 0x38U)) 
                                                  << 4U)) 
                                  | (0x0000000fU & (IData)(
                                                           (__Vfunc_prince_shiftrows_64bit__1088__state_in 
                                                            >> 4U))))))) 
              << 0x00000024U));
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__1088__state_out 
        = ((0xf000ffffffffffffULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__1088__state_out) 
           | ((QData)((IData)(((0x00000f00U & ((IData)(
                                                       (__Vfunc_prince_shiftrows_64bit__1088__state_in 
                                                        >> 8U)) 
                                               << 8U)) 
                               | ((0x000000f0U & ((IData)(
                                                          (__Vfunc_prince_shiftrows_64bit__1088__state_in 
                                                           >> 0x14U)) 
                                                  << 4U)) 
                                  | (0x0000000fU & (IData)(
                                                           (__Vfunc_prince_shiftrows_64bit__1088__state_in 
                                                            >> 0x20U))))))) 
              << 0x00000030U));
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__1088__state_out 
        = ((0x0fffffffffffffffULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__1088__state_out) 
           | ((QData)((IData)((0x0000000fU & (IData)(
                                                     (__Vfunc_prince_shiftrows_64bit__1088__state_in 
                                                      >> 0x3cU))))) 
              << 0x0000003cU));
    __Vfunc_prince_shiftrows_64bit__1088__Vfuncout 
        = vlSelfRef.__Vfunc_prince_shiftrows_64bit__1088__state_out;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__gen_prince__DOT__u_cipher__DOT____VdfgExtracted_h92915da7__0 
        = __Vfunc_prince_shiftrows_64bit__1088__Vfuncout;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__gen_prince__DOT__u_cipher__DOT__data_state_lo__BRA__255__03a192__KET__ 
        = (0x082efa98ec4e6c89ULL ^ (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__gen_prince__DOT__u_cipher__DOT__gen_fwd_pass__BRA__3__KET____DOT__data_state_round 
                                    ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__gen_prince__DOT__u_cipher__DOT__k0_new_d));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__gen_prince__DOT__u_cipher__DOT__gen_bwd_pass__BRA__5__KET____DOT__data_state_bwd 
        = chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__gen_prince__DOT__u_cipher__DOT____VdfgExtracted_h92915da7__0;
    __Vfunc_prince_mult_prime_64bit__1055__state_in 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__gen_prince__DOT__u_cipher__DOT__gen_bwd_pass__BRA__5__KET____DOT__data_state_bwd;
    vlSelf->__Vfunc_prince_mult_prime_64bit__1055__state_out = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 14390687043493807843ull);
    __Vfunc_prince_nibble_red16__1056__vect = (0xe7bdU 
                                               & (IData)(__Vfunc_prince_mult_prime_64bit__1055__state_in));
    __Vfunc_prince_nibble_red16__1056__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__1056__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__1056__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__1056__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__1056__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__1055__state_out 
        = ((0xfffffffffffffff0ULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__1055__state_out) 
           | (IData)((IData)(__Vfunc_prince_nibble_red16__1056__Vfuncout)));
    __Vfunc_prince_nibble_red16__1057__vect = (0xde7bU 
                                               & (IData)(__Vfunc_prince_mult_prime_64bit__1055__state_in));
    __Vfunc_prince_nibble_red16__1057__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__1057__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__1057__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__1057__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__1057__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__1055__state_out 
        = ((0xffffffffffffff0fULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__1055__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__1057__Vfuncout)) 
              << 4U));
    __Vfunc_prince_nibble_red16__1058__vect = (0xbde7U 
                                               & (IData)(__Vfunc_prince_mult_prime_64bit__1055__state_in));
    __Vfunc_prince_nibble_red16__1058__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__1058__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__1058__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__1058__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__1058__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__1055__state_out 
        = ((0xfffffffffffff0ffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__1055__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__1058__Vfuncout)) 
              << 8U));
    __Vfunc_prince_nibble_red16__1059__vect = (0x7bdeU 
                                               & (IData)(__Vfunc_prince_mult_prime_64bit__1055__state_in));
    __Vfunc_prince_nibble_red16__1059__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__1059__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__1059__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__1059__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__1059__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__1055__state_out 
        = ((0xffffffffffff0fffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__1055__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__1059__Vfuncout)) 
              << 0x0000000cU));
    __Vfunc_prince_nibble_red16__1060__vect = (0x7bdeU 
                                               & (IData)(
                                                         (__Vfunc_prince_mult_prime_64bit__1055__state_in 
                                                          >> 0x10U)));
    __Vfunc_prince_nibble_red16__1060__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__1060__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__1060__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__1060__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__1060__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__1055__state_out 
        = ((0xfffffffffff0ffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__1055__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__1060__Vfuncout)) 
              << 0x00000010U));
    __Vfunc_prince_nibble_red16__1061__vect = (0xe7bdU 
                                               & (IData)(
                                                         (__Vfunc_prince_mult_prime_64bit__1055__state_in 
                                                          >> 0x10U)));
    __Vfunc_prince_nibble_red16__1061__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__1061__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__1061__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__1061__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__1061__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__1055__state_out 
        = ((0xffffffffff0fffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__1055__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__1061__Vfuncout)) 
              << 0x00000014U));
    __Vfunc_prince_nibble_red16__1062__vect = (0xde7bU 
                                               & (IData)(
                                                         (__Vfunc_prince_mult_prime_64bit__1055__state_in 
                                                          >> 0x10U)));
    __Vfunc_prince_nibble_red16__1062__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__1062__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__1062__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__1062__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__1062__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__1055__state_out 
        = ((0xfffffffff0ffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__1055__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__1062__Vfuncout)) 
              << 0x00000018U));
    __Vfunc_prince_nibble_red16__1063__vect = (0xbde7U 
                                               & (IData)(
                                                         (__Vfunc_prince_mult_prime_64bit__1055__state_in 
                                                          >> 0x10U)));
    __Vfunc_prince_nibble_red16__1063__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__1063__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__1063__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__1063__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__1063__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__1055__state_out 
        = ((0xffffffff0fffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__1055__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__1063__Vfuncout)) 
              << 0x0000001cU));
    __Vfunc_prince_nibble_red16__1064__vect = (0x7bdeU 
                                               & (IData)(
                                                         (__Vfunc_prince_mult_prime_64bit__1055__state_in 
                                                          >> 0x20U)));
    __Vfunc_prince_nibble_red16__1064__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__1064__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__1064__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__1064__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__1064__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__1055__state_out 
        = ((0xfffffff0ffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__1055__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__1064__Vfuncout)) 
              << 0x00000020U));
    __Vfunc_prince_nibble_red16__1065__vect = (0xe7bdU 
                                               & (IData)(
                                                         (__Vfunc_prince_mult_prime_64bit__1055__state_in 
                                                          >> 0x20U)));
    __Vfunc_prince_nibble_red16__1065__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__1065__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__1065__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__1065__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__1065__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__1055__state_out 
        = ((0xffffff0fffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__1055__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__1065__Vfuncout)) 
              << 0x00000024U));
    __Vfunc_prince_nibble_red16__1066__vect = (0xde7bU 
                                               & (IData)(
                                                         (__Vfunc_prince_mult_prime_64bit__1055__state_in 
                                                          >> 0x20U)));
    __Vfunc_prince_nibble_red16__1066__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__1066__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__1066__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__1066__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__1066__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__1055__state_out 
        = ((0xfffff0ffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__1055__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__1066__Vfuncout)) 
              << 0x00000028U));
    __Vfunc_prince_nibble_red16__1067__vect = (0xbde7U 
                                               & (IData)(
                                                         (__Vfunc_prince_mult_prime_64bit__1055__state_in 
                                                          >> 0x20U)));
    __Vfunc_prince_nibble_red16__1067__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__1067__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__1067__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__1067__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__1067__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__1055__state_out 
        = ((0xffff0fffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__1055__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__1067__Vfuncout)) 
              << 0x0000002cU));
    __Vfunc_prince_nibble_red16__1068__vect = (0xe7bdU 
                                               & (IData)(
                                                         (__Vfunc_prince_mult_prime_64bit__1055__state_in 
                                                          >> 0x30U)));
    __Vfunc_prince_nibble_red16__1068__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__1068__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__1068__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__1068__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__1068__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__1055__state_out 
        = ((0xfff0ffffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__1055__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__1068__Vfuncout)) 
              << 0x00000030U));
    __Vfunc_prince_nibble_red16__1069__vect = (0xde7bU 
                                               & (IData)(
                                                         (__Vfunc_prince_mult_prime_64bit__1055__state_in 
                                                          >> 0x30U)));
    __Vfunc_prince_nibble_red16__1069__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__1069__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__1069__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__1069__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__1069__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__1055__state_out 
        = ((0xff0fffffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__1055__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__1069__Vfuncout)) 
              << 0x00000034U));
    __Vfunc_prince_nibble_red16__1070__vect = (0xbde7U 
                                               & (IData)(
                                                         (__Vfunc_prince_mult_prime_64bit__1055__state_in 
                                                          >> 0x30U)));
    __Vfunc_prince_nibble_red16__1070__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__1070__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__1070__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__1070__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__1070__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__1055__state_out 
        = ((0xf0ffffffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__1055__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__1070__Vfuncout)) 
              << 0x00000038U));
    __Vfunc_prince_nibble_red16__1071__vect = (0x7bdeU 
                                               & (IData)(
                                                         (__Vfunc_prince_mult_prime_64bit__1055__state_in 
                                                          >> 0x30U)));
    __Vfunc_prince_nibble_red16__1071__Vfuncout = (0x0000000fU 
                                                   & ((((IData)(__Vfunc_prince_nibble_red16__1071__vect) 
                                                        ^ 
                                                        ((IData)(__Vfunc_prince_nibble_red16__1071__vect) 
                                                         >> 4U)) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__1071__vect) 
                                                        >> 8U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__1071__vect) 
                                                       >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__1055__state_out 
        = ((0x0fffffffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__1055__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__1071__Vfuncout)) 
              << 0x0000003cU));
    __Vfunc_prince_mult_prime_64bit__1055__Vfuncout 
        = vlSelfRef.__Vfunc_prince_mult_prime_64bit__1055__state_out;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__gen_prince__DOT__u_cipher__DOT__gen_bwd_pass__BRA__5__KET____DOT__data_state_bwd 
        = __Vfunc_prince_mult_prime_64bit__1055__Vfuncout;
    __Vfunc_sbox4_64bit__1072__state_in = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__gen_prince__DOT__u_cipher__DOT__gen_bwd_pass__BRA__5__KET____DOT__data_state_bwd;
    vlSelf->__Vfunc_sbox4_64bit__1072__state_out = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 10079940445937313466ull);
    __Vfunc_sbox4_8bit__1073__state_in = (0x000000ffU 
                                          & (IData)(__Vfunc_sbox4_64bit__1072__state_in));
    vlSelf->__Vfunc_sbox4_8bit__1073__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1899884698121354120ull);
    vlSelfRef.__Vfunc_sbox4_8bit__1073__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1073__state_out)) 
         | (0x0000000fU & (IData)((0x1ce5046a98df237bULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__1073__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__1073__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1073__state_out)) 
         | (0x000000f0U & ((IData)((0x1ce5046a98df237bULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__1073__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__1073__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__1073__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__1072__state_out 
        = ((0xffffffffffffff00ULL & vlSelfRef.__Vfunc_sbox4_64bit__1072__state_out) 
           | (IData)((IData)(__Vfunc_sbox4_8bit__1073__Vfuncout)));
    __Vfunc_sbox4_8bit__1073__state_in = (0x000000ffU 
                                          & (IData)(
                                                    (__Vfunc_sbox4_64bit__1072__state_in 
                                                     >> 8U)));
    vlSelf->__Vfunc_sbox4_8bit__1073__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1899884698121354120ull);
    vlSelfRef.__Vfunc_sbox4_8bit__1073__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1073__state_out)) 
         | (0x0000000fU & (IData)((0x1ce5046a98df237bULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__1073__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__1073__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1073__state_out)) 
         | (0x000000f0U & ((IData)((0x1ce5046a98df237bULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__1073__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__1073__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__1073__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__1072__state_out 
        = ((0xffffffffffff00ffULL & vlSelfRef.__Vfunc_sbox4_64bit__1072__state_out) 
           | ((QData)((IData)(__Vfunc_sbox4_8bit__1073__Vfuncout)) 
              << 8U));
    __Vfunc_sbox4_8bit__1073__state_in = (0x000000ffU 
                                          & (IData)(
                                                    (__Vfunc_sbox4_64bit__1072__state_in 
                                                     >> 0x10U)));
    vlSelf->__Vfunc_sbox4_8bit__1073__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1899884698121354120ull);
    vlSelfRef.__Vfunc_sbox4_8bit__1073__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1073__state_out)) 
         | (0x0000000fU & (IData)((0x1ce5046a98df237bULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__1073__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__1073__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1073__state_out)) 
         | (0x000000f0U & ((IData)((0x1ce5046a98df237bULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__1073__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__1073__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__1073__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__1072__state_out 
        = ((0xffffffffff00ffffULL & vlSelfRef.__Vfunc_sbox4_64bit__1072__state_out) 
           | ((QData)((IData)(__Vfunc_sbox4_8bit__1073__Vfuncout)) 
              << 0x00000010U));
    __Vfunc_sbox4_8bit__1073__state_in = (0x000000ffU 
                                          & (IData)(
                                                    (__Vfunc_sbox4_64bit__1072__state_in 
                                                     >> 0x18U)));
    vlSelf->__Vfunc_sbox4_8bit__1073__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1899884698121354120ull);
    vlSelfRef.__Vfunc_sbox4_8bit__1073__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1073__state_out)) 
         | (0x0000000fU & (IData)((0x1ce5046a98df237bULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__1073__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__1073__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1073__state_out)) 
         | (0x000000f0U & ((IData)((0x1ce5046a98df237bULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__1073__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__1073__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__1073__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__1072__state_out 
        = ((0xffffffff00ffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__1072__state_out) 
           | ((QData)((IData)(__Vfunc_sbox4_8bit__1073__Vfuncout)) 
              << 0x00000018U));
    __Vfunc_sbox4_8bit__1073__state_in = (0x000000ffU 
                                          & (IData)(
                                                    (__Vfunc_sbox4_64bit__1072__state_in 
                                                     >> 0x20U)));
    vlSelf->__Vfunc_sbox4_8bit__1073__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1899884698121354120ull);
    vlSelfRef.__Vfunc_sbox4_8bit__1073__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1073__state_out)) 
         | (0x0000000fU & (IData)((0x1ce5046a98df237bULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__1073__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__1073__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1073__state_out)) 
         | (0x000000f0U & ((IData)((0x1ce5046a98df237bULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__1073__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__1073__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__1073__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__1072__state_out 
        = ((0xffffff00ffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__1072__state_out) 
           | ((QData)((IData)(__Vfunc_sbox4_8bit__1073__Vfuncout)) 
              << 0x00000020U));
    __Vfunc_sbox4_8bit__1073__state_in = (0x000000ffU 
                                          & (IData)(
                                                    (__Vfunc_sbox4_64bit__1072__state_in 
                                                     >> 0x28U)));
    vlSelf->__Vfunc_sbox4_8bit__1073__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1899884698121354120ull);
    vlSelfRef.__Vfunc_sbox4_8bit__1073__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1073__state_out)) 
         | (0x0000000fU & (IData)((0x1ce5046a98df237bULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__1073__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__1073__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1073__state_out)) 
         | (0x000000f0U & ((IData)((0x1ce5046a98df237bULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__1073__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__1073__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__1073__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__1072__state_out 
        = ((0xffff00ffffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__1072__state_out) 
           | ((QData)((IData)(__Vfunc_sbox4_8bit__1073__Vfuncout)) 
              << 0x00000028U));
    __Vfunc_sbox4_8bit__1073__state_in = (0x000000ffU 
                                          & (IData)(
                                                    (__Vfunc_sbox4_64bit__1072__state_in 
                                                     >> 0x30U)));
    vlSelf->__Vfunc_sbox4_8bit__1073__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1899884698121354120ull);
    vlSelfRef.__Vfunc_sbox4_8bit__1073__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1073__state_out)) 
         | (0x0000000fU & (IData)((0x1ce5046a98df237bULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__1073__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__1073__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1073__state_out)) 
         | (0x000000f0U & ((IData)((0x1ce5046a98df237bULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__1073__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__1073__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__1073__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__1072__state_out 
        = ((0xff00ffffffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__1072__state_out) 
           | ((QData)((IData)(__Vfunc_sbox4_8bit__1073__Vfuncout)) 
              << 0x00000030U));
    __Vfunc_sbox4_8bit__1073__state_in = (0x000000ffU 
                                          & (IData)(
                                                    (__Vfunc_sbox4_64bit__1072__state_in 
                                                     >> 0x38U)));
    vlSelf->__Vfunc_sbox4_8bit__1073__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1899884698121354120ull);
    vlSelfRef.__Vfunc_sbox4_8bit__1073__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1073__state_out)) 
         | (0x0000000fU & (IData)((0x1ce5046a98df237bULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__1073__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__1073__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1073__state_out)) 
         | (0x000000f0U & ((IData)((0x1ce5046a98df237bULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__1073__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__1073__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__1073__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__1072__state_out 
        = ((0x00ffffffffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__1072__state_out) 
           | ((QData)((IData)(__Vfunc_sbox4_8bit__1073__Vfuncout)) 
              << 0x00000038U));
    __Vfunc_sbox4_64bit__1072__Vfuncout = vlSelfRef.__Vfunc_sbox4_64bit__1072__state_out;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__gen_prince__DOT__u_cipher__DOT__data_state_hi__BRA__383__03a320__KET__ 
        = __Vfunc_sbox4_64bit__1072__Vfuncout;
    __Vfunc_sbox4_64bit__1078__state_in = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__gen_prince__DOT__u_cipher__DOT__data_state_lo__BRA__255__03a192__KET__;
    vlSelf->__Vfunc_sbox4_64bit__1078__state_out = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 18395362189486607059ull);
    __Vfunc_sbox4_8bit__1079__state_in = (0x000000ffU 
                                          & (IData)(__Vfunc_sbox4_64bit__1078__state_in));
    vlSelf->__Vfunc_sbox4_8bit__1079__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16787081672129904470ull);
    vlSelfRef.__Vfunc_sbox4_8bit__1079__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1079__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__1079__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__1079__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1079__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__1079__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__1079__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__1079__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__1078__state_out 
        = ((0xffffffffffffff00ULL & vlSelfRef.__Vfunc_sbox4_64bit__1078__state_out) 
           | (IData)((IData)(__Vfunc_sbox4_8bit__1079__Vfuncout)));
    __Vfunc_sbox4_8bit__1079__state_in = (0x000000ffU 
                                          & (IData)(
                                                    (__Vfunc_sbox4_64bit__1078__state_in 
                                                     >> 8U)));
    vlSelf->__Vfunc_sbox4_8bit__1079__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16787081672129904470ull);
    vlSelfRef.__Vfunc_sbox4_8bit__1079__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1079__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__1079__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__1079__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1079__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__1079__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__1079__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__1079__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__1078__state_out 
        = ((0xffffffffffff00ffULL & vlSelfRef.__Vfunc_sbox4_64bit__1078__state_out) 
           | ((QData)((IData)(__Vfunc_sbox4_8bit__1079__Vfuncout)) 
              << 8U));
    __Vfunc_sbox4_8bit__1079__state_in = (0x000000ffU 
                                          & (IData)(
                                                    (__Vfunc_sbox4_64bit__1078__state_in 
                                                     >> 0x10U)));
    vlSelf->__Vfunc_sbox4_8bit__1079__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16787081672129904470ull);
    vlSelfRef.__Vfunc_sbox4_8bit__1079__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1079__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__1079__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__1079__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1079__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__1079__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__1079__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__1079__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__1078__state_out 
        = ((0xffffffffff00ffffULL & vlSelfRef.__Vfunc_sbox4_64bit__1078__state_out) 
           | ((QData)((IData)(__Vfunc_sbox4_8bit__1079__Vfuncout)) 
              << 0x00000010U));
    __Vfunc_sbox4_8bit__1079__state_in = (0x000000ffU 
                                          & (IData)(
                                                    (__Vfunc_sbox4_64bit__1078__state_in 
                                                     >> 0x18U)));
    vlSelf->__Vfunc_sbox4_8bit__1079__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16787081672129904470ull);
    vlSelfRef.__Vfunc_sbox4_8bit__1079__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1079__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__1079__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__1079__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1079__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__1079__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__1079__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__1079__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__1078__state_out 
        = ((0xffffffff00ffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__1078__state_out) 
           | ((QData)((IData)(__Vfunc_sbox4_8bit__1079__Vfuncout)) 
              << 0x00000018U));
    __Vfunc_sbox4_8bit__1079__state_in = (0x000000ffU 
                                          & (IData)(
                                                    (__Vfunc_sbox4_64bit__1078__state_in 
                                                     >> 0x20U)));
    vlSelf->__Vfunc_sbox4_8bit__1079__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16787081672129904470ull);
    vlSelfRef.__Vfunc_sbox4_8bit__1079__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1079__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__1079__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__1079__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1079__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__1079__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__1079__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__1079__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__1078__state_out 
        = ((0xffffff00ffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__1078__state_out) 
           | ((QData)((IData)(__Vfunc_sbox4_8bit__1079__Vfuncout)) 
              << 0x00000020U));
    __Vfunc_sbox4_8bit__1079__state_in = (0x000000ffU 
                                          & (IData)(
                                                    (__Vfunc_sbox4_64bit__1078__state_in 
                                                     >> 0x28U)));
    vlSelf->__Vfunc_sbox4_8bit__1079__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16787081672129904470ull);
    vlSelfRef.__Vfunc_sbox4_8bit__1079__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1079__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__1079__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__1079__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1079__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__1079__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__1079__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__1079__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__1078__state_out 
        = ((0xffff00ffffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__1078__state_out) 
           | ((QData)((IData)(__Vfunc_sbox4_8bit__1079__Vfuncout)) 
              << 0x00000028U));
    __Vfunc_sbox4_8bit__1079__state_in = (0x000000ffU 
                                          & (IData)(
                                                    (__Vfunc_sbox4_64bit__1078__state_in 
                                                     >> 0x30U)));
    vlSelf->__Vfunc_sbox4_8bit__1079__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16787081672129904470ull);
    vlSelfRef.__Vfunc_sbox4_8bit__1079__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1079__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__1079__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__1079__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1079__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__1079__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__1079__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__1079__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__1078__state_out 
        = ((0xff00ffffffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__1078__state_out) 
           | ((QData)((IData)(__Vfunc_sbox4_8bit__1079__Vfuncout)) 
              << 0x00000030U));
    __Vfunc_sbox4_8bit__1079__state_in = (0x000000ffU 
                                          & (IData)(
                                                    (__Vfunc_sbox4_64bit__1078__state_in 
                                                     >> 0x38U)));
    vlSelf->__Vfunc_sbox4_8bit__1079__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16787081672129904470ull);
    vlSelfRef.__Vfunc_sbox4_8bit__1079__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1079__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__1079__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__1079__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1079__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__1079__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__1079__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__1079__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__1078__state_out 
        = ((0x00ffffffffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__1078__state_out) 
           | ((QData)((IData)(__Vfunc_sbox4_8bit__1079__Vfuncout)) 
              << 0x00000038U));
    __Vfunc_sbox4_64bit__1078__Vfuncout = vlSelfRef.__Vfunc_sbox4_64bit__1078__state_out;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__gen_prince__DOT__u_cipher__DOT____VdfgExtracted_h36ab3cd7__2 
        = __Vfunc_sbox4_64bit__1078__Vfuncout;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__gen_prince__DOT__u_cipher__DOT__data_o 
        = (0xc0ac29b7c97c50ddULL ^ (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__gen_prince__DOT__u_cipher__DOT__data_state_hi__BRA__383__03a320__KET__ 
                                    ^ (((1U & vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__u_prim_arbiter_tree_op__DOT__gen_input_bufs__BRA__1__KET____DOT__gen_rr_arbiter__DOT__u_arb__DOT__data_o[4U])
                                         ? (((QData)((IData)(
                                                             vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__gen_prince__DOT__u_cipher__DOT__key_i[3U])) 
                                             << 0x00000020U) 
                                            | (QData)((IData)(
                                                              vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__gen_prince__DOT__u_cipher__DOT__key_i[2U])))
                                         : vlSelfRef.__VdfgRegularize_h6e95ff9d_0_65) 
                                       ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__gen_prince__DOT__u_cipher__DOT__k1_d)));
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__gen_prince__DOT__u_cipher__DOT__gen_fwd_pass__BRA__4__KET____DOT__data_state_round 
        = chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__gen_prince__DOT__u_cipher__DOT____VdfgExtracted_h36ab3cd7__2;
    __Vfunc_prince_mult_prime_64bit__924__state_in 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__gen_prince__DOT__u_cipher__DOT__gen_fwd_pass__BRA__4__KET____DOT__data_state_round;
    vlSelf->__Vfunc_prince_mult_prime_64bit__924__state_out = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 17843635930874002887ull);
    __Vfunc_prince_nibble_red16__925__vect = (0xe7bdU 
                                              & (IData)(__Vfunc_prince_mult_prime_64bit__924__state_in));
    __Vfunc_prince_nibble_red16__925__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__925__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__925__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__925__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__925__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__924__state_out 
        = ((0xfffffffffffffff0ULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__924__state_out) 
           | (IData)((IData)(__Vfunc_prince_nibble_red16__925__Vfuncout)));
    __Vfunc_prince_nibble_red16__926__vect = (0xde7bU 
                                              & (IData)(__Vfunc_prince_mult_prime_64bit__924__state_in));
    __Vfunc_prince_nibble_red16__926__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__926__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__926__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__926__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__926__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__924__state_out 
        = ((0xffffffffffffff0fULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__924__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__926__Vfuncout)) 
              << 4U));
    __Vfunc_prince_nibble_red16__927__vect = (0xbde7U 
                                              & (IData)(__Vfunc_prince_mult_prime_64bit__924__state_in));
    __Vfunc_prince_nibble_red16__927__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__927__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__927__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__927__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__927__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__924__state_out 
        = ((0xfffffffffffff0ffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__924__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__927__Vfuncout)) 
              << 8U));
    __Vfunc_prince_nibble_red16__928__vect = (0x7bdeU 
                                              & (IData)(__Vfunc_prince_mult_prime_64bit__924__state_in));
    __Vfunc_prince_nibble_red16__928__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__928__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__928__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__928__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__928__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__924__state_out 
        = ((0xffffffffffff0fffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__924__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__928__Vfuncout)) 
              << 0x0000000cU));
    __Vfunc_prince_nibble_red16__929__vect = (0x7bdeU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__924__state_in 
                                                         >> 0x10U)));
    __Vfunc_prince_nibble_red16__929__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__929__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__929__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__929__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__929__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__924__state_out 
        = ((0xfffffffffff0ffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__924__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__929__Vfuncout)) 
              << 0x00000010U));
    __Vfunc_prince_nibble_red16__930__vect = (0xe7bdU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__924__state_in 
                                                         >> 0x10U)));
    __Vfunc_prince_nibble_red16__930__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__930__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__930__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__930__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__930__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__924__state_out 
        = ((0xffffffffff0fffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__924__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__930__Vfuncout)) 
              << 0x00000014U));
    __Vfunc_prince_nibble_red16__931__vect = (0xde7bU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__924__state_in 
                                                         >> 0x10U)));
    __Vfunc_prince_nibble_red16__931__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__931__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__931__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__931__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__931__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__924__state_out 
        = ((0xfffffffff0ffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__924__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__931__Vfuncout)) 
              << 0x00000018U));
    __Vfunc_prince_nibble_red16__932__vect = (0xbde7U 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__924__state_in 
                                                         >> 0x10U)));
    __Vfunc_prince_nibble_red16__932__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__932__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__932__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__932__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__932__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__924__state_out 
        = ((0xffffffff0fffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__924__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__932__Vfuncout)) 
              << 0x0000001cU));
    __Vfunc_prince_nibble_red16__933__vect = (0x7bdeU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__924__state_in 
                                                         >> 0x20U)));
    __Vfunc_prince_nibble_red16__933__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__933__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__933__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__933__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__933__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__924__state_out 
        = ((0xfffffff0ffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__924__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__933__Vfuncout)) 
              << 0x00000020U));
    __Vfunc_prince_nibble_red16__934__vect = (0xe7bdU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__924__state_in 
                                                         >> 0x20U)));
    __Vfunc_prince_nibble_red16__934__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__934__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__934__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__934__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__934__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__924__state_out 
        = ((0xffffff0fffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__924__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__934__Vfuncout)) 
              << 0x00000024U));
    __Vfunc_prince_nibble_red16__935__vect = (0xde7bU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__924__state_in 
                                                         >> 0x20U)));
    __Vfunc_prince_nibble_red16__935__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__935__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__935__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__935__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__935__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__924__state_out 
        = ((0xfffff0ffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__924__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__935__Vfuncout)) 
              << 0x00000028U));
    __Vfunc_prince_nibble_red16__936__vect = (0xbde7U 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__924__state_in 
                                                         >> 0x20U)));
    __Vfunc_prince_nibble_red16__936__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__936__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__936__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__936__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__936__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__924__state_out 
        = ((0xffff0fffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__924__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__936__Vfuncout)) 
              << 0x0000002cU));
    __Vfunc_prince_nibble_red16__937__vect = (0xe7bdU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__924__state_in 
                                                         >> 0x30U)));
    __Vfunc_prince_nibble_red16__937__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__937__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__937__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__937__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__937__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__924__state_out 
        = ((0xfff0ffffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__924__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__937__Vfuncout)) 
              << 0x00000030U));
    __Vfunc_prince_nibble_red16__938__vect = (0xde7bU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__924__state_in 
                                                         >> 0x30U)));
    __Vfunc_prince_nibble_red16__938__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__938__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__938__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__938__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__938__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__924__state_out 
        = ((0xff0fffffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__924__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__938__Vfuncout)) 
              << 0x00000034U));
    __Vfunc_prince_nibble_red16__939__vect = (0xbde7U 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__924__state_in 
                                                         >> 0x30U)));
    __Vfunc_prince_nibble_red16__939__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__939__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__939__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__939__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__939__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__924__state_out 
        = ((0xf0ffffffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__924__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__939__Vfuncout)) 
              << 0x00000038U));
    __Vfunc_prince_nibble_red16__940__vect = (0x7bdeU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__924__state_in 
                                                         >> 0x30U)));
    __Vfunc_prince_nibble_red16__940__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__940__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__940__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__940__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__940__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__924__state_out 
        = ((0x0fffffffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__924__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__940__Vfuncout)) 
              << 0x0000003cU));
    __Vfunc_prince_mult_prime_64bit__924__Vfuncout 
        = vlSelfRef.__Vfunc_prince_mult_prime_64bit__924__state_out;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__gen_prince__DOT__u_cipher__DOT__gen_fwd_pass__BRA__4__KET____DOT__data_state_round 
        = __Vfunc_prince_mult_prime_64bit__924__Vfuncout;
    __Vfunc_prince_shiftrows_64bit__941__state_in = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__gen_prince__DOT__u_cipher__DOT__gen_fwd_pass__BRA__4__KET____DOT__data_state_round;
    vlSelf->__Vfunc_prince_shiftrows_64bit__941__state_out = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 102329922364851152ull);
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__941__state_out 
        = ((0xfffffffffffff000ULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__941__state_out) 
           | (IData)((IData)(((0x00000f00U & ((IData)(
                                                      (__Vfunc_prince_shiftrows_64bit__941__state_in 
                                                       >> 0x38U)) 
                                              << 8U)) 
                              | ((0x000000f0U & ((IData)(
                                                         (__Vfunc_prince_shiftrows_64bit__941__state_in 
                                                          >> 0x24U)) 
                                                 << 4U)) 
                                 | (0x0000000fU & (IData)(
                                                          (__Vfunc_prince_shiftrows_64bit__941__state_in 
                                                           >> 0x10U))))))));
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__941__state_out 
        = ((0xffffffffff000fffULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__941__state_out) 
           | ((QData)((IData)(((0x00000f00U & ((IData)(
                                                       (__Vfunc_prince_shiftrows_64bit__941__state_in 
                                                        >> 0x34U)) 
                                               << 8U)) 
                               | ((0x000000f0U & ((IData)(
                                                          (__Vfunc_prince_shiftrows_64bit__941__state_in 
                                                           >> 0x20U)) 
                                                  << 4U)) 
                                  | (0x0000000fU & (IData)(
                                                           (__Vfunc_prince_shiftrows_64bit__941__state_in 
                                                            >> 0x0cU))))))) 
              << 0x0000000cU));
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__941__state_out 
        = ((0xfffffff000ffffffULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__941__state_out) 
           | ((QData)((IData)(((0x00000f00U & ((IData)(
                                                       (__Vfunc_prince_shiftrows_64bit__941__state_in 
                                                        >> 0x30U)) 
                                               << 8U)) 
                               | ((0x000000f0U & ((IData)(
                                                          (__Vfunc_prince_shiftrows_64bit__941__state_in 
                                                           >> 0x1cU)) 
                                                  << 4U)) 
                                  | (0x0000000fU & (IData)(
                                                           (__Vfunc_prince_shiftrows_64bit__941__state_in 
                                                            >> 8U))))))) 
              << 0x00000018U));
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__941__state_out 
        = ((0xffff000fffffffffULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__941__state_out) 
           | ((QData)((IData)(((0x00000f00U & ((IData)(
                                                       (__Vfunc_prince_shiftrows_64bit__941__state_in 
                                                        >> 0x2cU)) 
                                               << 8U)) 
                               | ((0x000000f0U & ((IData)(
                                                          (__Vfunc_prince_shiftrows_64bit__941__state_in 
                                                           >> 0x18U)) 
                                                  << 4U)) 
                                  | (0x0000000fU & (IData)(
                                                           (__Vfunc_prince_shiftrows_64bit__941__state_in 
                                                            >> 4U))))))) 
              << 0x00000024U));
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__941__state_out 
        = ((0xf000ffffffffffffULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__941__state_out) 
           | ((QData)((IData)(((0x00000f00U & ((IData)(
                                                       (__Vfunc_prince_shiftrows_64bit__941__state_in 
                                                        >> 0x28U)) 
                                               << 8U)) 
                               | ((0x000000f0U & ((IData)(
                                                          (__Vfunc_prince_shiftrows_64bit__941__state_in 
                                                           >> 0x14U)) 
                                                  << 4U)) 
                                  | (0x0000000fU & (IData)(__Vfunc_prince_shiftrows_64bit__941__state_in)))))) 
              << 0x00000030U));
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__941__state_out 
        = ((0x0fffffffffffffffULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__941__state_out) 
           | ((QData)((IData)((0x0000000fU & (IData)(
                                                     (__Vfunc_prince_shiftrows_64bit__941__state_in 
                                                      >> 0x3cU))))) 
              << 0x0000003cU));
    __Vfunc_prince_shiftrows_64bit__941__Vfuncout = vlSelfRef.__Vfunc_prince_shiftrows_64bit__941__state_out;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__gen_prince__DOT__u_cipher__DOT__gen_fwd_pass__BRA__4__KET____DOT__data_state_round 
        = __Vfunc_prince_shiftrows_64bit__941__Vfuncout;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__gen_prince__DOT__u_cipher__DOT__data_state_lo__BRA__319__03a256__KET__ 
        = (0x452821e638d01377ULL ^ (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__gen_prince__DOT__u_cipher__DOT__gen_fwd_pass__BRA__4__KET____DOT__data_state_round 
                                    ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__gen_prince__DOT__u_cipher__DOT__k1_d));
    __Vfunc_sbox4_64bit__1080__state_in = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__gen_prince__DOT__u_cipher__DOT__data_state_lo__BRA__319__03a256__KET__;
    vlSelf->__Vfunc_sbox4_64bit__1080__state_out = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 17510929055244610257ull);
    __Vfunc_sbox4_8bit__1081__state_in = (0x000000ffU 
                                          & (IData)(__Vfunc_sbox4_64bit__1080__state_in));
    vlSelf->__Vfunc_sbox4_8bit__1081__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9422217256499802605ull);
    vlSelfRef.__Vfunc_sbox4_8bit__1081__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1081__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__1081__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__1081__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1081__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__1081__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__1081__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__1081__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__1080__state_out 
        = ((0xffffffffffffff00ULL & vlSelfRef.__Vfunc_sbox4_64bit__1080__state_out) 
           | (IData)((IData)(__Vfunc_sbox4_8bit__1081__Vfuncout)));
    __Vfunc_sbox4_8bit__1081__state_in = (0x000000ffU 
                                          & (IData)(
                                                    (__Vfunc_sbox4_64bit__1080__state_in 
                                                     >> 8U)));
    vlSelf->__Vfunc_sbox4_8bit__1081__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9422217256499802605ull);
    vlSelfRef.__Vfunc_sbox4_8bit__1081__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1081__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__1081__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__1081__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1081__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__1081__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__1081__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__1081__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__1080__state_out 
        = ((0xffffffffffff00ffULL & vlSelfRef.__Vfunc_sbox4_64bit__1080__state_out) 
           | ((QData)((IData)(__Vfunc_sbox4_8bit__1081__Vfuncout)) 
              << 8U));
    __Vfunc_sbox4_8bit__1081__state_in = (0x000000ffU 
                                          & (IData)(
                                                    (__Vfunc_sbox4_64bit__1080__state_in 
                                                     >> 0x10U)));
    vlSelf->__Vfunc_sbox4_8bit__1081__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9422217256499802605ull);
    vlSelfRef.__Vfunc_sbox4_8bit__1081__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1081__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__1081__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__1081__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1081__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__1081__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__1081__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__1081__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__1080__state_out 
        = ((0xffffffffff00ffffULL & vlSelfRef.__Vfunc_sbox4_64bit__1080__state_out) 
           | ((QData)((IData)(__Vfunc_sbox4_8bit__1081__Vfuncout)) 
              << 0x00000010U));
    __Vfunc_sbox4_8bit__1081__state_in = (0x000000ffU 
                                          & (IData)(
                                                    (__Vfunc_sbox4_64bit__1080__state_in 
                                                     >> 0x18U)));
    vlSelf->__Vfunc_sbox4_8bit__1081__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9422217256499802605ull);
    vlSelfRef.__Vfunc_sbox4_8bit__1081__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1081__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__1081__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__1081__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1081__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__1081__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__1081__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__1081__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__1080__state_out 
        = ((0xffffffff00ffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__1080__state_out) 
           | ((QData)((IData)(__Vfunc_sbox4_8bit__1081__Vfuncout)) 
              << 0x00000018U));
    __Vfunc_sbox4_8bit__1081__state_in = (0x000000ffU 
                                          & (IData)(
                                                    (__Vfunc_sbox4_64bit__1080__state_in 
                                                     >> 0x20U)));
    vlSelf->__Vfunc_sbox4_8bit__1081__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9422217256499802605ull);
    vlSelfRef.__Vfunc_sbox4_8bit__1081__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1081__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__1081__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__1081__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1081__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__1081__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__1081__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__1081__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__1080__state_out 
        = ((0xffffff00ffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__1080__state_out) 
           | ((QData)((IData)(__Vfunc_sbox4_8bit__1081__Vfuncout)) 
              << 0x00000020U));
    __Vfunc_sbox4_8bit__1081__state_in = (0x000000ffU 
                                          & (IData)(
                                                    (__Vfunc_sbox4_64bit__1080__state_in 
                                                     >> 0x28U)));
    vlSelf->__Vfunc_sbox4_8bit__1081__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9422217256499802605ull);
    vlSelfRef.__Vfunc_sbox4_8bit__1081__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1081__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__1081__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__1081__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1081__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__1081__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__1081__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__1081__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__1080__state_out 
        = ((0xffff00ffffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__1080__state_out) 
           | ((QData)((IData)(__Vfunc_sbox4_8bit__1081__Vfuncout)) 
              << 0x00000028U));
    __Vfunc_sbox4_8bit__1081__state_in = (0x000000ffU 
                                          & (IData)(
                                                    (__Vfunc_sbox4_64bit__1080__state_in 
                                                     >> 0x30U)));
    vlSelf->__Vfunc_sbox4_8bit__1081__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9422217256499802605ull);
    vlSelfRef.__Vfunc_sbox4_8bit__1081__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1081__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__1081__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__1081__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1081__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__1081__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__1081__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__1081__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__1080__state_out 
        = ((0xff00ffffffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__1080__state_out) 
           | ((QData)((IData)(__Vfunc_sbox4_8bit__1081__Vfuncout)) 
              << 0x00000030U));
    __Vfunc_sbox4_8bit__1081__state_in = (0x000000ffU 
                                          & (IData)(
                                                    (__Vfunc_sbox4_64bit__1080__state_in 
                                                     >> 0x38U)));
    vlSelf->__Vfunc_sbox4_8bit__1081__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9422217256499802605ull);
    vlSelfRef.__Vfunc_sbox4_8bit__1081__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1081__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__1081__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__1081__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1081__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__1081__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__1081__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__1081__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__1080__state_out 
        = ((0x00ffffffffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__1080__state_out) 
           | ((QData)((IData)(__Vfunc_sbox4_8bit__1081__Vfuncout)) 
              << 0x00000038U));
    __Vfunc_sbox4_64bit__1080__Vfuncout = vlSelfRef.__Vfunc_sbox4_64bit__1080__state_out;
    chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__gen_prince__DOT__u_cipher__DOT____VdfgExtracted_h81252f00__0 
        = __Vfunc_sbox4_64bit__1080__Vfuncout;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__gen_prince__DOT__u_cipher__DOT__gen_fwd_pass__BRA__5__KET____DOT__data_state_round 
        = chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__gen_prince__DOT__u_cipher__DOT____VdfgExtracted_h81252f00__0;
    __Vfunc_prince_mult_prime_64bit__942__state_in 
        = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__gen_prince__DOT__u_cipher__DOT__gen_fwd_pass__BRA__5__KET____DOT__data_state_round;
    vlSelf->__Vfunc_prince_mult_prime_64bit__942__state_out = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 17504869019498734381ull);
    __Vfunc_prince_nibble_red16__943__vect = (0xe7bdU 
                                              & (IData)(__Vfunc_prince_mult_prime_64bit__942__state_in));
    __Vfunc_prince_nibble_red16__943__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__943__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__943__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__943__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__943__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__942__state_out 
        = ((0xfffffffffffffff0ULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__942__state_out) 
           | (IData)((IData)(__Vfunc_prince_nibble_red16__943__Vfuncout)));
    __Vfunc_prince_nibble_red16__944__vect = (0xde7bU 
                                              & (IData)(__Vfunc_prince_mult_prime_64bit__942__state_in));
    __Vfunc_prince_nibble_red16__944__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__944__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__944__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__944__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__944__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__942__state_out 
        = ((0xffffffffffffff0fULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__942__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__944__Vfuncout)) 
              << 4U));
    __Vfunc_prince_nibble_red16__945__vect = (0xbde7U 
                                              & (IData)(__Vfunc_prince_mult_prime_64bit__942__state_in));
    __Vfunc_prince_nibble_red16__945__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__945__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__945__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__945__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__945__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__942__state_out 
        = ((0xfffffffffffff0ffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__942__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__945__Vfuncout)) 
              << 8U));
    __Vfunc_prince_nibble_red16__946__vect = (0x7bdeU 
                                              & (IData)(__Vfunc_prince_mult_prime_64bit__942__state_in));
    __Vfunc_prince_nibble_red16__946__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__946__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__946__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__946__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__946__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__942__state_out 
        = ((0xffffffffffff0fffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__942__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__946__Vfuncout)) 
              << 0x0000000cU));
    __Vfunc_prince_nibble_red16__947__vect = (0x7bdeU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__942__state_in 
                                                         >> 0x10U)));
    __Vfunc_prince_nibble_red16__947__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__947__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__947__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__947__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__947__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__942__state_out 
        = ((0xfffffffffff0ffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__942__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__947__Vfuncout)) 
              << 0x00000010U));
    __Vfunc_prince_nibble_red16__948__vect = (0xe7bdU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__942__state_in 
                                                         >> 0x10U)));
    __Vfunc_prince_nibble_red16__948__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__948__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__948__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__948__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__948__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__942__state_out 
        = ((0xffffffffff0fffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__942__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__948__Vfuncout)) 
              << 0x00000014U));
    __Vfunc_prince_nibble_red16__949__vect = (0xde7bU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__942__state_in 
                                                         >> 0x10U)));
    __Vfunc_prince_nibble_red16__949__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__949__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__949__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__949__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__949__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__942__state_out 
        = ((0xfffffffff0ffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__942__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__949__Vfuncout)) 
              << 0x00000018U));
    __Vfunc_prince_nibble_red16__950__vect = (0xbde7U 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__942__state_in 
                                                         >> 0x10U)));
    __Vfunc_prince_nibble_red16__950__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__950__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__950__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__950__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__950__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__942__state_out 
        = ((0xffffffff0fffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__942__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__950__Vfuncout)) 
              << 0x0000001cU));
    __Vfunc_prince_nibble_red16__951__vect = (0x7bdeU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__942__state_in 
                                                         >> 0x20U)));
    __Vfunc_prince_nibble_red16__951__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__951__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__951__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__951__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__951__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__942__state_out 
        = ((0xfffffff0ffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__942__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__951__Vfuncout)) 
              << 0x00000020U));
    __Vfunc_prince_nibble_red16__952__vect = (0xe7bdU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__942__state_in 
                                                         >> 0x20U)));
    __Vfunc_prince_nibble_red16__952__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__952__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__952__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__952__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__952__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__942__state_out 
        = ((0xffffff0fffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__942__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__952__Vfuncout)) 
              << 0x00000024U));
    __Vfunc_prince_nibble_red16__953__vect = (0xde7bU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__942__state_in 
                                                         >> 0x20U)));
    __Vfunc_prince_nibble_red16__953__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__953__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__953__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__953__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__953__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__942__state_out 
        = ((0xfffff0ffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__942__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__953__Vfuncout)) 
              << 0x00000028U));
    __Vfunc_prince_nibble_red16__954__vect = (0xbde7U 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__942__state_in 
                                                         >> 0x20U)));
    __Vfunc_prince_nibble_red16__954__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__954__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__954__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__954__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__954__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__942__state_out 
        = ((0xffff0fffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__942__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__954__Vfuncout)) 
              << 0x0000002cU));
    __Vfunc_prince_nibble_red16__955__vect = (0xe7bdU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__942__state_in 
                                                         >> 0x30U)));
    __Vfunc_prince_nibble_red16__955__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__955__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__955__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__955__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__955__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__942__state_out 
        = ((0xfff0ffffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__942__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__955__Vfuncout)) 
              << 0x00000030U));
    __Vfunc_prince_nibble_red16__956__vect = (0xde7bU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__942__state_in 
                                                         >> 0x30U)));
    __Vfunc_prince_nibble_red16__956__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__956__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__956__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__956__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__956__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__942__state_out 
        = ((0xff0fffffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__942__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__956__Vfuncout)) 
              << 0x00000034U));
    __Vfunc_prince_nibble_red16__957__vect = (0xbde7U 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__942__state_in 
                                                         >> 0x30U)));
    __Vfunc_prince_nibble_red16__957__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__957__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__957__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__957__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__957__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__942__state_out 
        = ((0xf0ffffffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__942__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__957__Vfuncout)) 
              << 0x00000038U));
    __Vfunc_prince_nibble_red16__958__vect = (0x7bdeU 
                                              & (IData)(
                                                        (__Vfunc_prince_mult_prime_64bit__942__state_in 
                                                         >> 0x30U)));
    __Vfunc_prince_nibble_red16__958__Vfuncout = (0x0000000fU 
                                                  & ((((IData)(__Vfunc_prince_nibble_red16__958__vect) 
                                                       ^ 
                                                       ((IData)(__Vfunc_prince_nibble_red16__958__vect) 
                                                        >> 4U)) 
                                                      ^ 
                                                      ((IData)(__Vfunc_prince_nibble_red16__958__vect) 
                                                       >> 8U)) 
                                                     ^ 
                                                     ((IData)(__Vfunc_prince_nibble_red16__958__vect) 
                                                      >> 0x0cU)));
    vlSelfRef.__Vfunc_prince_mult_prime_64bit__942__state_out 
        = ((0x0fffffffffffffffULL & vlSelfRef.__Vfunc_prince_mult_prime_64bit__942__state_out) 
           | ((QData)((IData)(__Vfunc_prince_nibble_red16__958__Vfuncout)) 
              << 0x0000003cU));
    __Vfunc_prince_mult_prime_64bit__942__Vfuncout 
        = vlSelfRef.__Vfunc_prince_mult_prime_64bit__942__state_out;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__gen_prince__DOT__u_cipher__DOT__gen_fwd_pass__BRA__5__KET____DOT__data_state_round 
        = __Vfunc_prince_mult_prime_64bit__942__Vfuncout;
    __Vfunc_prince_shiftrows_64bit__959__state_in = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__gen_prince__DOT__u_cipher__DOT__gen_fwd_pass__BRA__5__KET____DOT__data_state_round;
    vlSelf->__Vfunc_prince_shiftrows_64bit__959__state_out = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 12896153313647398074ull);
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__959__state_out 
        = ((0xfffffffffffff000ULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__959__state_out) 
           | (IData)((IData)(((0x00000f00U & ((IData)(
                                                      (__Vfunc_prince_shiftrows_64bit__959__state_in 
                                                       >> 0x38U)) 
                                              << 8U)) 
                              | ((0x000000f0U & ((IData)(
                                                         (__Vfunc_prince_shiftrows_64bit__959__state_in 
                                                          >> 0x24U)) 
                                                 << 4U)) 
                                 | (0x0000000fU & (IData)(
                                                          (__Vfunc_prince_shiftrows_64bit__959__state_in 
                                                           >> 0x10U))))))));
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__959__state_out 
        = ((0xffffffffff000fffULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__959__state_out) 
           | ((QData)((IData)(((0x00000f00U & ((IData)(
                                                       (__Vfunc_prince_shiftrows_64bit__959__state_in 
                                                        >> 0x34U)) 
                                               << 8U)) 
                               | ((0x000000f0U & ((IData)(
                                                          (__Vfunc_prince_shiftrows_64bit__959__state_in 
                                                           >> 0x20U)) 
                                                  << 4U)) 
                                  | (0x0000000fU & (IData)(
                                                           (__Vfunc_prince_shiftrows_64bit__959__state_in 
                                                            >> 0x0cU))))))) 
              << 0x0000000cU));
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__959__state_out 
        = ((0xfffffff000ffffffULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__959__state_out) 
           | ((QData)((IData)(((0x00000f00U & ((IData)(
                                                       (__Vfunc_prince_shiftrows_64bit__959__state_in 
                                                        >> 0x30U)) 
                                               << 8U)) 
                               | ((0x000000f0U & ((IData)(
                                                          (__Vfunc_prince_shiftrows_64bit__959__state_in 
                                                           >> 0x1cU)) 
                                                  << 4U)) 
                                  | (0x0000000fU & (IData)(
                                                           (__Vfunc_prince_shiftrows_64bit__959__state_in 
                                                            >> 8U))))))) 
              << 0x00000018U));
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__959__state_out 
        = ((0xffff000fffffffffULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__959__state_out) 
           | ((QData)((IData)(((0x00000f00U & ((IData)(
                                                       (__Vfunc_prince_shiftrows_64bit__959__state_in 
                                                        >> 0x2cU)) 
                                               << 8U)) 
                               | ((0x000000f0U & ((IData)(
                                                          (__Vfunc_prince_shiftrows_64bit__959__state_in 
                                                           >> 0x18U)) 
                                                  << 4U)) 
                                  | (0x0000000fU & (IData)(
                                                           (__Vfunc_prince_shiftrows_64bit__959__state_in 
                                                            >> 4U))))))) 
              << 0x00000024U));
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__959__state_out 
        = ((0xf000ffffffffffffULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__959__state_out) 
           | ((QData)((IData)(((0x00000f00U & ((IData)(
                                                       (__Vfunc_prince_shiftrows_64bit__959__state_in 
                                                        >> 0x28U)) 
                                               << 8U)) 
                               | ((0x000000f0U & ((IData)(
                                                          (__Vfunc_prince_shiftrows_64bit__959__state_in 
                                                           >> 0x14U)) 
                                                  << 4U)) 
                                  | (0x0000000fU & (IData)(__Vfunc_prince_shiftrows_64bit__959__state_in)))))) 
              << 0x00000030U));
    vlSelfRef.__Vfunc_prince_shiftrows_64bit__959__state_out 
        = ((0x0fffffffffffffffULL & vlSelfRef.__Vfunc_prince_shiftrows_64bit__959__state_out) 
           | ((QData)((IData)((0x0000000fU & (IData)(
                                                     (__Vfunc_prince_shiftrows_64bit__959__state_in 
                                                      >> 0x3cU))))) 
              << 0x0000003cU));
    __Vfunc_prince_shiftrows_64bit__959__Vfuncout = vlSelfRef.__Vfunc_prince_shiftrows_64bit__959__state_out;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__gen_prince__DOT__u_cipher__DOT__gen_fwd_pass__BRA__5__KET____DOT__data_state_round 
        = __Vfunc_prince_shiftrows_64bit__959__Vfuncout;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__gen_prince__DOT__u_cipher__DOT__data_state_lo__BRA__383__03a320__KET__ 
        = (0xbe5466cf34e90c6cULL ^ (vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__gen_prince__DOT__u_cipher__DOT__gen_fwd_pass__BRA__5__KET____DOT__data_state_round 
                                    ^ vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__gen_prince__DOT__u_cipher__DOT__k0_new_d));
    __Vfunc_sbox4_64bit__1082__state_in = vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__gen_prince__DOT__u_cipher__DOT__data_state_lo__BRA__383__03a320__KET__;
    vlSelf->__Vfunc_sbox4_64bit__1082__state_out = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 1888924721854242143ull);
    __Vfunc_sbox4_8bit__1083__state_in = (0x000000ffU 
                                          & (IData)(__Vfunc_sbox4_64bit__1082__state_in));
    vlSelf->__Vfunc_sbox4_8bit__1083__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4673134664444117987ull);
    vlSelfRef.__Vfunc_sbox4_8bit__1083__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1083__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__1083__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__1083__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1083__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__1083__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__1083__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__1083__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__1082__state_out 
        = ((0xffffffffffffff00ULL & vlSelfRef.__Vfunc_sbox4_64bit__1082__state_out) 
           | (IData)((IData)(__Vfunc_sbox4_8bit__1083__Vfuncout)));
    __Vfunc_sbox4_8bit__1083__state_in = (0x000000ffU 
                                          & (IData)(
                                                    (__Vfunc_sbox4_64bit__1082__state_in 
                                                     >> 8U)));
    vlSelf->__Vfunc_sbox4_8bit__1083__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4673134664444117987ull);
    vlSelfRef.__Vfunc_sbox4_8bit__1083__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1083__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__1083__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__1083__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1083__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__1083__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__1083__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__1083__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__1082__state_out 
        = ((0xffffffffffff00ffULL & vlSelfRef.__Vfunc_sbox4_64bit__1082__state_out) 
           | ((QData)((IData)(__Vfunc_sbox4_8bit__1083__Vfuncout)) 
              << 8U));
    __Vfunc_sbox4_8bit__1083__state_in = (0x000000ffU 
                                          & (IData)(
                                                    (__Vfunc_sbox4_64bit__1082__state_in 
                                                     >> 0x10U)));
    vlSelf->__Vfunc_sbox4_8bit__1083__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4673134664444117987ull);
    vlSelfRef.__Vfunc_sbox4_8bit__1083__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1083__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__1083__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__1083__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1083__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__1083__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__1083__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__1083__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__1082__state_out 
        = ((0xffffffffff00ffffULL & vlSelfRef.__Vfunc_sbox4_64bit__1082__state_out) 
           | ((QData)((IData)(__Vfunc_sbox4_8bit__1083__Vfuncout)) 
              << 0x00000010U));
    __Vfunc_sbox4_8bit__1083__state_in = (0x000000ffU 
                                          & (IData)(
                                                    (__Vfunc_sbox4_64bit__1082__state_in 
                                                     >> 0x18U)));
    vlSelf->__Vfunc_sbox4_8bit__1083__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4673134664444117987ull);
    vlSelfRef.__Vfunc_sbox4_8bit__1083__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1083__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__1083__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__1083__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1083__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__1083__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__1083__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__1083__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__1082__state_out 
        = ((0xffffffff00ffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__1082__state_out) 
           | ((QData)((IData)(__Vfunc_sbox4_8bit__1083__Vfuncout)) 
              << 0x00000018U));
    __Vfunc_sbox4_8bit__1083__state_in = (0x000000ffU 
                                          & (IData)(
                                                    (__Vfunc_sbox4_64bit__1082__state_in 
                                                     >> 0x20U)));
    vlSelf->__Vfunc_sbox4_8bit__1083__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4673134664444117987ull);
    vlSelfRef.__Vfunc_sbox4_8bit__1083__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1083__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__1083__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__1083__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1083__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__1083__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__1083__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__1083__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__1082__state_out 
        = ((0xffffff00ffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__1082__state_out) 
           | ((QData)((IData)(__Vfunc_sbox4_8bit__1083__Vfuncout)) 
              << 0x00000020U));
    __Vfunc_sbox4_8bit__1083__state_in = (0x000000ffU 
                                          & (IData)(
                                                    (__Vfunc_sbox4_64bit__1082__state_in 
                                                     >> 0x28U)));
    vlSelf->__Vfunc_sbox4_8bit__1083__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4673134664444117987ull);
    vlSelfRef.__Vfunc_sbox4_8bit__1083__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1083__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__1083__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__1083__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1083__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__1083__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__1083__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__1083__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__1082__state_out 
        = ((0xffff00ffffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__1082__state_out) 
           | ((QData)((IData)(__Vfunc_sbox4_8bit__1083__Vfuncout)) 
              << 0x00000028U));
    __Vfunc_sbox4_8bit__1083__state_in = (0x000000ffU 
                                          & (IData)(
                                                    (__Vfunc_sbox4_64bit__1082__state_in 
                                                     >> 0x30U)));
    vlSelf->__Vfunc_sbox4_8bit__1083__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4673134664444117987ull);
    vlSelfRef.__Vfunc_sbox4_8bit__1083__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1083__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__1083__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__1083__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1083__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__1083__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__1083__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__1083__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__1082__state_out 
        = ((0xff00ffffffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__1082__state_out) 
           | ((QData)((IData)(__Vfunc_sbox4_8bit__1083__Vfuncout)) 
              << 0x00000030U));
    __Vfunc_sbox4_8bit__1083__state_in = (0x000000ffU 
                                          & (IData)(
                                                    (__Vfunc_sbox4_64bit__1082__state_in 
                                                     >> 0x38U)));
    vlSelf->__Vfunc_sbox4_8bit__1083__state_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4673134664444117987ull);
    vlSelfRef.__Vfunc_sbox4_8bit__1083__state_out = 
        ((0xf0U & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1083__state_out)) 
         | (0x0000000fU & (IData)((0x4d5e087619ca23fbULL 
                                   >> (0x0000003fU 
                                       & VL_SHIFTL_III(6,32,32, 
                                                       (0x0000000fU 
                                                        & (IData)(__Vfunc_sbox4_8bit__1083__state_in)), 2U))))));
    vlSelfRef.__Vfunc_sbox4_8bit__1083__state_out = 
        ((0x0fU & (IData)(vlSelfRef.__Vfunc_sbox4_8bit__1083__state_out)) 
         | (0x000000f0U & ((IData)((0x4d5e087619ca23fbULL 
                                    >> (0x0000003fU 
                                        & VL_SHIFTL_III(6,32,32, 
                                                        (0x0000000fU 
                                                         & ((IData)(__Vfunc_sbox4_8bit__1083__state_in) 
                                                            >> 4U)), 2U)))) 
                           << 4U)));
    __Vfunc_sbox4_8bit__1083__Vfuncout = vlSelfRef.__Vfunc_sbox4_8bit__1083__state_out;
    vlSelfRef.__Vfunc_sbox4_64bit__1082__state_out 
        = ((0x00ffffffffffffffULL & vlSelfRef.__Vfunc_sbox4_64bit__1082__state_out) 
           | ((QData)((IData)(__Vfunc_sbox4_8bit__1083__Vfuncout)) 
              << 0x00000038U));
    __Vfunc_sbox4_64bit__1082__Vfuncout = vlSelfRef.__Vfunc_sbox4_64bit__1082__state_out;
    vlSelfRef.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_flash_ctrl__DOT__u_eflash__DOT__u_scramble__DOT__gen_prince__DOT__u_cipher__DOT____VdfgExtracted_hbad6efda__0 
        = __Vfunc_sbox4_64bit__1082__Vfuncout;
}
