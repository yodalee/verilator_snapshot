// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

VL_ATTR_COLD void Vsim_i2c__Az2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c1__1(Vsim_i2c__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsim_i2c__Az2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c1__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__a_ack 
        = ((~ (IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__outstanding_q)) 
           & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d.__PVT__reqfifo__DOT__wvalid_i));
    vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__instr_error 
        = ([&]() {
            vlSelfRef.__Vfunc_mubi4_test_true_strict__19__val 
                = (0x0000000fU & (vlSelf->__PVT__u_reg__DOT__u_chk->tl_i[0U] 
                                  >> 0x0000000fU));
            vlSelfRef.__Vfunc_mubi4_test_true_strict__19__Vfuncout 
                = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__19__val));
        }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__19__Vfuncout));
    vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__rd_req 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__a_ack) 
           & (0x0400U == (0x0700U & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[3U])));
    vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wr_req 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__a_ack) 
           & (IData)(vlSymsp->TOP.__VdfgRegularize_he50b618e_0_25));
}

extern const VlUnpacked<CData/*3:0*/, 256> Vsim__ConstPool__TABLE_ha18a9397_0;

VL_ATTR_COLD void Vsim_i2c__Az2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c1__2(Vsim_i2c__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsim_i2c__Az2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c1__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ u_reg__DOT____VdfgRegularize_ha30dc5a7_0_6;
    u_reg__DOT____VdfgRegularize_ha30dc5a7_0_6 = 0;
    SData/*12:0*/ __VdfgRegularize_ha785dde0_1_11;
    __VdfgRegularize_ha785dde0_1_11 = 0;
    CData/*0:0*/ __VdfgRegularize_ha785dde0_1_14;
    __VdfgRegularize_ha785dde0_1_14 = 0;
    SData/*12:0*/ __VdfgRegularize_ha785dde0_1_16;
    __VdfgRegularize_ha785dde0_1_16 = 0;
    CData/*0:0*/ __VdfgRegularize_ha785dde0_1_19;
    __VdfgRegularize_ha785dde0_1_19 = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_true_loose__21__Vfuncout;
    __Vfunc_mubi4_test_true_loose__21__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_loose__21__val;
    __Vfunc_mubi4_test_true_loose__21__val = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_true_loose__22__Vfuncout;
    __Vfunc_mubi4_test_true_loose__22__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_loose__22__val;
    __Vfunc_mubi4_test_true_loose__22__val = 0;
    CData/*3:0*/ __Vfunc_mubi4_and_hi__27__Vfuncout;
    __Vfunc_mubi4_and_hi__27__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_and_hi__27__a;
    __Vfunc_mubi4_and_hi__27__a = 0;
    CData/*3:0*/ __Vfunc_mubi4_and_hi__27__b;
    __Vfunc_mubi4_and_hi__27__b = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__28__Vfuncout;
    __Vfunc_mubi4_and__28__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__28__a;
    __Vfunc_mubi4_and__28__a = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__28__b;
    __Vfunc_mubi4_and__28__b = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__28__a_in;
    __Vfunc_mubi4_and__28__a_in = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__28__b_in;
    __Vfunc_mubi4_and__28__b_in = 0;
    CData/*3:0*/ __Vfunc_mubi4_bool_to_mubi__29__Vfuncout;
    __Vfunc_mubi4_bool_to_mubi__29__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_mubi4_bool_to_mubi__29__val;
    __Vfunc_mubi4_bool_to_mubi__29__val = 0;
    CData/*3:0*/ __Vfunc_mubi4_bool_to_mubi__30__Vfuncout;
    __Vfunc_mubi4_bool_to_mubi__30__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_mubi4_bool_to_mubi__30__val;
    __Vfunc_mubi4_bool_to_mubi__30__val = 0;
    CData/*7:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_4;
    VlWide<4>/*127:0*/ __Vtemp_5;
    // Body
    vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__err_internal 
        = (1U & (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wr_req) 
                  & (0U != (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                  >> 0x0000001bU)))) 
                 | ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__instr_error) 
                    | ((~ ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_reg_if__DOT__u_err.__PVT__opcode_allowed) 
                           & ((IData)(vlSelf->__PVT__u_reg__DOT__u_reg_if__DOT__u_err->__PVT__addr_sz_chk) 
                              & ((IData)(vlSelf->__PVT__u_reg__DOT__u_reg_if__DOT__u_err->__PVT__mask_chk) 
                                 & ((4U == (7U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[3U] 
                                                  >> 8U))) 
                                    | ((1U == (7U & 
                                               (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[3U] 
                                                >> 8U))) 
                                       | (IData)(vlSelf->__PVT__u_reg__DOT__u_reg_if__DOT__u_err->__PVT__fulldata_chk))))))) 
                       | ((IData)(vlSelf->__PVT__u_reg__DOT__u_reg_if__DOT__u_err->__PVT__instr_type_err) 
                          | (IData)(vlSelf->__PVT__u_reg__DOT__u_reg_if__DOT__u_err->__PVT__instr_wr_err))))));
    vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__re_o 
        = ((~ (IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__err_internal)) 
           & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__rd_req));
    vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__we_o 
        = ((~ (IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__err_internal)) 
           & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wr_req));
    vlSelfRef.__PVT__u_reg__DOT__wr_err = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__we_o) 
                                           & (((0U 
                                                != 
                                                (3U 
                                                 & (~ 
                                                    ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                      << 9U) 
                                                     | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                        >> 0x00000017U))))) 
                                               & (vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write 
                                                  | (vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write 
                                                     >> 1U))) 
                                              | (((vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write 
                                                   >> 2U) 
                                                  & (0U 
                                                     != 
                                                     (3U 
                                                      & (~ 
                                                         ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                           << 9U) 
                                                          | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                             >> 0x00000017U)))))) 
                                                 | (((vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write 
                                                      >> 3U) 
                                                     & (0U 
                                                        != 
                                                        (1U 
                                                         & (~ 
                                                            ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                              << 9U) 
                                                             | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                >> 0x00000017U)))))) 
                                                    | (((vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write 
                                                         >> 4U) 
                                                        & (0U 
                                                           != 
                                                           (1U 
                                                            & (~ 
                                                               ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                 << 9U) 
                                                                | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                   >> 0x00000017U)))))) 
                                                       | (((vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write 
                                                            >> 5U) 
                                                           & (0U 
                                                              != 
                                                              (3U 
                                                               & (~ 
                                                                  ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                    << 9U) 
                                                                   | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                      >> 0x00000017U)))))) 
                                                          | (((vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write 
                                                               >> 6U) 
                                                              & (0U 
                                                                 != 
                                                                 (1U 
                                                                  & (~ 
                                                                     ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                       << 9U) 
                                                                      | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                         >> 0x00000017U)))))) 
                                                             | (((vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write 
                                                                  >> 7U) 
                                                                 & (0U 
                                                                    != 
                                                                    (3U 
                                                                     & (~ 
                                                                        ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                          << 9U) 
                                                                         | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                            >> 0x00000017U)))))) 
                                                                | (((vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write 
                                                                     >> 8U) 
                                                                    & (0U 
                                                                       != 
                                                                       (3U 
                                                                        & (~ 
                                                                           ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                             << 9U) 
                                                                            | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                               >> 0x00000017U)))))) 
                                                                   | (((vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write 
                                                                        >> 9U) 
                                                                       & (0U 
                                                                          != 
                                                                          (0x0000000fU 
                                                                           & (~ 
                                                                              ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                << 9U) 
                                                                               | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x00000017U)))))) 
                                                                      | (((vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write 
                                                                           >> 0x0000000aU) 
                                                                          & (0U 
                                                                             != 
                                                                             (0x0000000fU 
                                                                              & (~ 
                                                                                ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                << 9U) 
                                                                                | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x00000017U)))))) 
                                                                         | (((vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write 
                                                                              >> 0x0000000bU) 
                                                                             & (0U 
                                                                                != 
                                                                                (0x0000000fU 
                                                                                & (~ 
                                                                                ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                << 9U) 
                                                                                | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x00000017U)))))) 
                                                                            | (((vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write 
                                                                                >> 0x0000000cU) 
                                                                                & (0U 
                                                                                != 
                                                                                (0x0000000fU 
                                                                                & (~ 
                                                                                ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                << 9U) 
                                                                                | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x00000017U)))))) 
                                                                               | (((vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write 
                                                                                >> 0x0000000dU) 
                                                                                & (0U 
                                                                                != 
                                                                                (1U 
                                                                                & (~ 
                                                                                ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                << 9U) 
                                                                                | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x00000017U)))))) 
                                                                                | (((vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write 
                                                                                >> 0x0000000eU) 
                                                                                & (0U 
                                                                                != 
                                                                                (0x0000000fU 
                                                                                & (~ 
                                                                                ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                << 9U) 
                                                                                | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x00000017U)))))) 
                                                                                | (((vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write 
                                                                                >> 0x0000000fU) 
                                                                                & (0U 
                                                                                != 
                                                                                (0x0000000fU 
                                                                                & (~ 
                                                                                ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                << 9U) 
                                                                                | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x00000017U)))))) 
                                                                                | (((vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write 
                                                                                >> 0x00000010U) 
                                                                                & (0U 
                                                                                != 
                                                                                (0x0000000fU 
                                                                                & (~ 
                                                                                ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                << 9U) 
                                                                                | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x00000017U)))))) 
                                                                                | (((vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write 
                                                                                >> 0x00000011U) 
                                                                                & (0U 
                                                                                != 
                                                                                (0x0000000fU 
                                                                                & (~ 
                                                                                ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                << 9U) 
                                                                                | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x00000017U)))))) 
                                                                                | (((vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write 
                                                                                >> 0x00000012U) 
                                                                                & (0U 
                                                                                != 
                                                                                (0x0000000fU 
                                                                                & (~ 
                                                                                ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                << 9U) 
                                                                                | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x00000017U)))))) 
                                                                                | (((vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write 
                                                                                >> 0x00000013U) 
                                                                                & (0U 
                                                                                != 
                                                                                (0x0000000fU 
                                                                                & (~ 
                                                                                ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                << 9U) 
                                                                                | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x00000017U)))))) 
                                                                                | (((vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write 
                                                                                >> 0x00000014U) 
                                                                                & (0U 
                                                                                != 
                                                                                (0x0000000fU 
                                                                                & (~ 
                                                                                ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                << 9U) 
                                                                                | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x00000017U)))))) 
                                                                                | (((vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write 
                                                                                >> 0x00000015U) 
                                                                                & (0U 
                                                                                != 
                                                                                (0x0000000fU 
                                                                                & (~ 
                                                                                ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                << 9U) 
                                                                                | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x00000017U)))))) 
                                                                                | (((vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write 
                                                                                >> 0x00000016U) 
                                                                                & (0U 
                                                                                != 
                                                                                (3U 
                                                                                & (~ 
                                                                                ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                << 9U) 
                                                                                | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x00000017U)))))) 
                                                                                | (((vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write 
                                                                                >> 0x00000017U) 
                                                                                & (0U 
                                                                                != 
                                                                                (1U 
                                                                                & (~ 
                                                                                ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                << 9U) 
                                                                                | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x00000017U)))))) 
                                                                                | (((vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write 
                                                                                >> 0x00000018U) 
                                                                                & (0U 
                                                                                != 
                                                                                (7U 
                                                                                & (~ 
                                                                                ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                << 9U) 
                                                                                | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x00000017U)))))) 
                                                                                | (((vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write 
                                                                                >> 0x00000019U) 
                                                                                & (0U 
                                                                                != 
                                                                                (0x0000000fU 
                                                                                & (~ 
                                                                                ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                << 9U) 
                                                                                | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x00000017U)))))) 
                                                                                | (((vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write 
                                                                                >> 0x0000001aU) 
                                                                                & (0U 
                                                                                != 
                                                                                (1U 
                                                                                & (~ 
                                                                                ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                << 9U) 
                                                                                | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x00000017U)))))) 
                                                                                | (((vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write 
                                                                                >> 0x0000001bU) 
                                                                                & (0U 
                                                                                != 
                                                                                (0x0000000fU 
                                                                                & (~ 
                                                                                ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                << 9U) 
                                                                                | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x00000017U)))))) 
                                                                                | (((vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write 
                                                                                >> 0x0000001cU) 
                                                                                & (0U 
                                                                                != 
                                                                                (1U 
                                                                                & (~ 
                                                                                ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                << 9U) 
                                                                                | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x00000017U)))))) 
                                                                                | (((vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write 
                                                                                >> 0x0000001dU) 
                                                                                & (0U 
                                                                                != 
                                                                                (0x0000000fU 
                                                                                & (~ 
                                                                                ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                << 9U) 
                                                                                | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x00000017U)))))) 
                                                                                | ((0U 
                                                                                != 
                                                                                (1U 
                                                                                & (~ 
                                                                                ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                << 9U) 
                                                                                | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x00000017U))))) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc0000000U 
                                                                                & vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write))))))))))))))))))))))))))))))))));
    vlSelfRef.__PVT__u_reg__DOT__addrmiss = ((~ (0U 
                                                 != vlSelfRef.__PVT__u_reg__DOT__addr_hit)) 
                                             & ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__re_o) 
                                                | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__we_o)));
    vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__error_i 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__addrmiss) 
           | ((IData)(vlSelfRef.__PVT__u_reg__DOT__wr_err) 
              | (IData)(vlSelf->__PVT__u_reg__DOT__u_chk->err_o)));
    vlSelfRef.u_reg__DOT____VdfgRegularize_ha30dc5a7_0_7 
        = ((~ (IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__error_i)) 
           & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__re_o));
    u_reg__DOT____VdfgRegularize_ha30dc5a7_0_6 = ((~ (IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__error_i)) 
                                                  & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__we_o));
    vlSelfRef.__PVT__u_reg__DOT__u_target_nack_count__DOT__we 
        = ((vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write 
            >> 0x0000001aU) & (IData)(vlSelfRef.u_reg__DOT____VdfgRegularize_ha30dc5a7_0_7));
    vlSelfRef.__PVT__u_reg__DOT__u_acqdata_abyte__DOT__re 
        = ((vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write 
            >> 0x00000016U) & (IData)(vlSelfRef.u_reg__DOT____VdfgRegularize_ha30dc5a7_0_7));
    vlSelfRef.__PVT__u_reg__DOT__u_rdata__DOT__re = 
        ((vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write 
          >> 6U) & (IData)(vlSelfRef.u_reg__DOT____VdfgRegularize_ha30dc5a7_0_7));
    vlSelfRef.__PVT__u_reg__DOT__u_ctrl_ack_ctrl_en__DOT__we 
        = ((vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write 
            >> 4U) & (IData)(u_reg__DOT____VdfgRegularize_ha30dc5a7_0_6));
    vlSelfRef.__PVT__u_reg__DOT__u_fdata_fbyte__DOT__we 
        = ((vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write 
            >> 7U) & (IData)(u_reg__DOT____VdfgRegularize_ha30dc5a7_0_6));
    vlSelfRef.__PVT__u_reg__DOT__u_target_fifo_config_acq_thresh__DOT__we 
        = ((vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write 
            >> 0x0000000aU) & (IData)(u_reg__DOT____VdfgRegularize_ha30dc5a7_0_6));
    vlSelfRef.__PVT__u_reg__DOT__u_ovrd_sclval__DOT__we 
        = ((vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write 
            >> 0x0000000dU) & (IData)(u_reg__DOT____VdfgRegularize_ha30dc5a7_0_6));
    vlSelfRef.__PVT__u_reg__DOT__u_timing0_thigh__DOT__we 
        = ((vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write 
            >> 0x0000000fU) & (IData)(u_reg__DOT____VdfgRegularize_ha30dc5a7_0_6));
    vlSelfRef.__PVT__u_reg__DOT__u_txdata0_qe__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
        = ((vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write 
            >> 0x00000017U) & (IData)(u_reg__DOT____VdfgRegularize_ha30dc5a7_0_6));
    vlSelfRef.__PVT__u_reg__DOT__u_host_nack_handler_timeout_en__DOT__we 
        = ((vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write 
            >> 0x0000001dU) & (IData)(u_reg__DOT____VdfgRegularize_ha30dc5a7_0_6));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_enable_acq_stretch__DOT__we 
        = ((vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write 
            >> 1U) & (IData)(u_reg__DOT____VdfgRegularize_ha30dc5a7_0_6));
    vlSelfRef.__PVT__u_reg__DOT__u_fifo_ctrl_acqrst__DOT__we 
        = ((vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write 
            >> 8U) & (IData)(u_reg__DOT____VdfgRegularize_ha30dc5a7_0_6));
    vlSelfRef.__PVT__u_reg__DOT__u_host_fifo_config_fmt_thresh__DOT__we 
        = ((vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write 
            >> 9U) & (IData)(u_reg__DOT____VdfgRegularize_ha30dc5a7_0_6));
    vlSelfRef.__PVT__u_reg__DOT__u_timing1_t_f__DOT__we 
        = ((vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write 
            >> 0x00000010U) & (IData)(u_reg__DOT____VdfgRegularize_ha30dc5a7_0_6));
    vlSelfRef.__PVT__u_reg__DOT__u_timing2_thd_sta__DOT__we 
        = ((vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write 
            >> 0x00000011U) & (IData)(u_reg__DOT____VdfgRegularize_ha30dc5a7_0_6));
    vlSelfRef.__PVT__u_reg__DOT__u_timing3_thd_dat__DOT__we 
        = ((vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write 
            >> 0x00000012U) & (IData)(u_reg__DOT____VdfgRegularize_ha30dc5a7_0_6));
    vlSelfRef.__PVT__u_reg__DOT__u_timing4_t_buf__DOT__we 
        = ((vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write 
            >> 0x00000013U) & (IData)(u_reg__DOT____VdfgRegularize_ha30dc5a7_0_6));
    vlSelfRef.__PVT__u_reg__DOT__u_timeout_ctrl_en__DOT__we 
        = ((vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write 
            >> 0x00000014U) & (IData)(u_reg__DOT____VdfgRegularize_ha30dc5a7_0_6));
    vlSelfRef.__PVT__u_reg__DOT__u_target_id_address0__DOT__we 
        = ((vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write 
            >> 0x00000015U) & (IData)(u_reg__DOT____VdfgRegularize_ha30dc5a7_0_6));
    vlSelfRef.__PVT__u_reg__DOT__u_host_timeout_ctrl__DOT__we 
        = ((vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write 
            >> 0x00000018U) & (IData)(u_reg__DOT____VdfgRegularize_ha30dc5a7_0_6));
    vlSelfRef.__PVT__u_reg__DOT__u_target_timeout_ctrl_en__DOT__we 
        = ((vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write 
            >> 0x00000019U) & (IData)(u_reg__DOT____VdfgRegularize_ha30dc5a7_0_6));
    vlSelfRef.__PVT__u_reg__DOT__u_target_events_arbitration_lost__DOT__we 
        = ((vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write 
            >> 0x0000001fU) & (IData)(u_reg__DOT____VdfgRegularize_ha30dc5a7_0_6));
    vlSelfRef.__PVT__u_reg__DOT__u_controller_events_arbitration_lost__DOT__we 
        = ((vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write 
            >> 0x0000001eU) & (IData)(u_reg__DOT____VdfgRegularize_ha30dc5a7_0_6));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_cmd_complete__DOT__we 
        = (vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write 
           & (IData)(u_reg__DOT____VdfgRegularize_ha30dc5a7_0_6));
    vlSelfRef.__PVT__u_reg__DOT__u_alert_test__DOT__we 
        = ((vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write 
            >> 3U) & (IData)(u_reg__DOT____VdfgRegularize_ha30dc5a7_0_6));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_test_acq_stretch__DOT__we 
        = ((vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write 
            >> 2U) & (IData)(u_reg__DOT____VdfgRegularize_ha30dc5a7_0_6));
    vlSelfRef.__PVT__u_reg__DOT__u_target_ack_ctrl_nack__DOT__we 
        = ((vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write 
            >> 0x0000001bU) & (IData)(u_reg__DOT____VdfgRegularize_ha30dc5a7_0_6));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__fifo_incr_rptr 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_oup_buf__DOT__rvalid_o) 
           & ((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__under_rst)) 
              & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_rdata__DOT__re)));
    vlSelfRef.__VdfgRegularize_ha785dde0_1_7 = (1U 
                                                & ((~ 
                                                    (((1U 
                                                       <= (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_oup_buf__DOT__depth_o)) 
                                                      & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__sram_read_in_prev_cyc_q)) 
                                                     | (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_oup_buf__DOT__full_o))) 
                                                   | ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_oup_buf__DOT__rvalid_o) 
                                                      & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_rdata__DOT__re))));
    vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__8__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_ctrl_ack_ctrl_en__DOT__we) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_fdata_fbyte__DOT__we));
    vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__10__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_ovrd_sclval__DOT__we) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_timing0_thigh__DOT__we));
    vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__19__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_fifo_ctrl_acqrst__DOT__we) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_host_fifo_config_fmt_thresh__DOT__we));
    vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__23__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_timing1_t_f__DOT__we) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_timing2_thd_sta__DOT__we));
    vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__24__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_timing3_thd_dat__DOT__we) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_timing4_t_buf__DOT__we));
    vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__25__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_timeout_ctrl_en__DOT__we) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_target_id_address0__DOT__we));
    vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__27__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_host_timeout_ctrl__DOT__we) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_target_timeout_ctrl_en__DOT__we));
    vlSelfRef.__PVT__u_reg__DOT__u_target_events_tx_pending__DOT__qe 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_target_events_tx_pending__DOT__de) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_target_events_arbitration_lost__DOT__we));
    vlSelfRef.__PVT__u_reg__DOT__u_target_events_bus_timeout__DOT__qe 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_target_events_bus_timeout__DOT__de) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_target_events_arbitration_lost__DOT__we));
    vlSelfRef.__PVT__u_reg__DOT__u_target_events_arbitration_lost__DOT__qe 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__event_tx_arbitration_lost) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_target_events_arbitration_lost__DOT__we));
    vlSelfRef.__PVT__u_reg__DOT__u_target_events_tx_pending__DOT__wr_data 
        = ((~ (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
               & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_target_events_arbitration_lost__DOT__we))) 
           & ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_target_events_tx_pending__DOT__de) 
              | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_target_events_tx_pending__q)));
    vlSelfRef.__PVT__u_reg__DOT__u_target_events_bus_timeout__DOT__wr_data 
        = ((~ ((vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                >> 1U) & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_target_events_arbitration_lost__DOT__we))) 
           & ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_target_events_bus_timeout__DOT__de) 
              | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_target_events_bus_timeout__q)));
    vlSelfRef.__PVT__u_reg__DOT__u_target_events_arbitration_lost__DOT__wr_data 
        = ((~ ((vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                >> 2U) & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_target_events_arbitration_lost__DOT__we))) 
           & ((IData)(vlSelfRef.__PVT__i2c_core__DOT__event_tx_arbitration_lost) 
              | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_target_events_arbitration_lost__q)));
    vlSelfRef.__PVT__u_reg__DOT__u_controller_events_nack__DOT__qe 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__event_nak) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_controller_events_arbitration_lost__DOT__we));
    vlSelfRef.__PVT__u_reg__DOT__u_controller_events_unhandled_nack_timeout__DOT__qe 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__unhandled_nak_cnt_expired) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_controller_events_arbitration_lost__DOT__we));
    vlSelfRef.__PVT__u_reg__DOT__u_controller_events_bus_timeout__DOT__qe 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_controller_events_bus_timeout__DOT__de) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_controller_events_arbitration_lost__DOT__we));
    vlSelfRef.__PVT__u_reg__DOT__u_controller_events_arbitration_lost__DOT__qe 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_controller_events_arbitration_lost__DOT__de) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_controller_events_arbitration_lost__DOT__we));
    vlSelfRef.__PVT__u_reg__DOT__u_controller_events_nack__DOT__wr_data 
        = ((~ (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
               & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_controller_events_arbitration_lost__DOT__we))) 
           & ((IData)(vlSelfRef.__PVT__i2c_core__DOT__event_nak) 
              | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_controller_events_nack__q)));
    vlSelfRef.__PVT__u_reg__DOT__u_controller_events_unhandled_nack_timeout__DOT__wr_data 
        = ((~ ((vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                >> 1U) & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_controller_events_arbitration_lost__DOT__we))) 
           & ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__unhandled_nak_cnt_expired) 
              | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_controller_events_unhandled_nack_timeout__q)));
    vlSelfRef.__PVT__u_reg__DOT__u_controller_events_bus_timeout__DOT__wr_data 
        = ((~ ((vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                >> 2U) & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_controller_events_arbitration_lost__DOT__we))) 
           & ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_controller_events_bus_timeout__DOT__de) 
              | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_controller_events_bus_timeout__q)));
    vlSelfRef.__PVT__u_reg__DOT__u_controller_events_arbitration_lost__DOT__wr_data 
        = ((~ ((vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                >> 3U) & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_controller_events_arbitration_lost__DOT__we))) 
           & ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_controller_events_arbitration_lost__DOT__de) 
              | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_controller_events_arbitration_lost__q)));
    vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__30__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_controller_events_arbitration_lost__DOT__we) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_target_events_arbitration_lost__DOT__we));
    vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__15__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_cmd_complete__DOT__we) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_enable_acq_stretch__DOT__we));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_scl_interference__DOT__de 
        = (((vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
             >> 5U) & (0x00007fffU == (0x00007fffU 
                                       & (- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_test_acq_stretch__DOT__we)))))) 
           | (IData)(vlSelfRef.__PVT__i2c_core__DOT__event_scl_interference));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_sda_interference__DOT__de 
        = (((vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
             >> 6U) & (0x00007fffU == (0x00007fffU 
                                       & (- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_test_acq_stretch__DOT__we)))))) 
           | (IData)(vlSelfRef.__PVT__i2c_core__DOT__intr_hw_sda_interference__DOT__event_intr_i));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_sda_unstable__DOT__de 
        = (((vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
             >> 8U) & (0x00007fffU == (0x00007fffU 
                                       & (- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_test_acq_stretch__DOT__we)))))) 
           | (IData)(vlSelfRef.__PVT__i2c_core__DOT__event_sda_unstable));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_overflow__DOT__de 
        = (((vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
             >> 3U) & (0x00007fffU == (0x00007fffU 
                                       & (- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_test_acq_stretch__DOT__we)))))) 
           | ((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__fifo_wready_o)) 
              & (IData)(vlSelfRef.__PVT__i2c_core__DOT__rx_fifo_wvalid)));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_cmd_complete__DOT__de 
        = (((vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
             >> 9U) & (0x00007fffU == (0x00007fffU 
                                       & (- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_test_acq_stretch__DOT__we)))))) 
           | ((IData)(vlSelfRef.__PVT__i2c_core__DOT__event_controller_cmd_complete) 
              | (IData)(vlSelfRef.__PVT__i2c_core__DOT__event_target_cmd_complete)));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_host_timeout__DOT__de 
        = (((vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
             >> 0x0000000eU) & (0x00007fffU == (0x00007fffU 
                                                & (- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_test_acq_stretch__DOT__we)))))) 
           | ((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__target_idle)) 
              & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_bus_monitor__DOT__bus_inactive_timeout_det)));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_stretch_timeout__DOT__de 
        = (((vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
             >> 7U) & (0x00007fffU == (0x00007fffU 
                                       & (- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_test_acq_stretch__DOT__we)))))) 
           | ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__stretch_en) 
              & (((~ (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timeout_ctrl_mode__q)) 
                  & (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timeout_ctrl_en__q)) 
                 & (vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__stretch_idle_cnt 
                    > vlSelfRef.u_reg__DOT____Vcellout__u_timeout_ctrl_val__q))));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_unexp_stop__DOT__de 
        = (((vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
             >> 0x0000000dU) & (0x00007fffU == (0x00007fffU 
                                                & (- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_test_acq_stretch__DOT__we)))))) 
           | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_enabletarget__q) 
              & ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__rw_bit_q) 
                 & ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__xfer_for_us_q) 
                    & ((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__expect_stop)) 
                       & (IData)(vlSelfRef.__PVT__i2c_core__DOT__stop_detect))))));
    vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__16__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_test_acq_stretch__DOT__we) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_alert_test__DOT__we));
    vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i 
        = (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_target_events_arbitration_lost__DOT__we) 
            << 0x0000001fU) | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_controller_events_arbitration_lost__DOT__we) 
                                << 0x0000001eU) | (
                                                   ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_host_nack_handler_timeout_en__DOT__we) 
                                                    << 0x0000001dU) 
                                                   | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_target_ack_ctrl_nack__DOT__we) 
                                                       << 0x0000001bU) 
                                                      | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_target_timeout_ctrl_en__DOT__we) 
                                                          << 0x00000019U) 
                                                         | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_host_timeout_ctrl__DOT__we) 
                                                             << 0x00000018U) 
                                                            | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_txdata0_qe__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i) 
                                                                << 0x00000017U) 
                                                               | ((((((IData)(vlSelfRef.__PVT__u_reg__DOT__u_target_id_address0__DOT__we) 
                                                                      << 3U) 
                                                                     | ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_timeout_ctrl_en__DOT__we) 
                                                                        << 2U)) 
                                                                    | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_timing4_t_buf__DOT__we) 
                                                                        << 1U) 
                                                                       | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_timing3_thd_dat__DOT__we))) 
                                                                   << 0x00000012U) 
                                                                  | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_timing2_thd_sta__DOT__we) 
                                                                      << 0x00000011U) 
                                                                     | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_timing1_t_f__DOT__we) 
                                                                         << 0x00000010U) 
                                                                        | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_timing0_thigh__DOT__we) 
                                                                            << 0x0000000fU) 
                                                                           | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_ovrd_sclval__DOT__we) 
                                                                               << 0x0000000dU) 
                                                                              | ((((IData)(vlSelfRef.__PVT__u_reg__DOT__u_target_fifo_config_acq_thresh__DOT__we) 
                                                                                << 0x0000000aU) 
                                                                                | ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_host_fifo_config_fmt_thresh__DOT__we) 
                                                                                << 9U)) 
                                                                                | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_fifo_ctrl_acqrst__DOT__we) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_fdata_fbyte__DOT__we) 
                                                                                << 7U) 
                                                                                | ((((IData)(vlSelfRef.__PVT__u_reg__DOT__u_ctrl_ack_ctrl_en__DOT__we) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_alert_test__DOT__we) 
                                                                                << 3U) 
                                                                                | ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_test_acq_stretch__DOT__we) 
                                                                                << 2U))) 
                                                                                | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_enable_acq_stretch__DOT__we) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_cmd_complete__DOT__we))))))))))))))))));
    __Vtemp_1[1U] = (((IData)((((QData)((IData)(((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_fdata_fbyte__q) 
                                                   << 9U) 
                                                  | ((IData)(vlSelfRef.__PVT__u_reg__DOT__fdata_qe) 
                                                     << 8U)) 
                                                 | ((((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_fifo_ctrl_txrst__q) 
                                                        << 3U) 
                                                       | ((IData)(vlSelfRef.__PVT__u_reg__DOT__fifo_ctrl_qe) 
                                                          << 2U)) 
                                                      | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_fifo_ctrl_acqrst__q) 
                                                          << 1U) 
                                                         | (IData)(vlSelfRef.__PVT__u_reg__DOT__fifo_ctrl_qe))) 
                                                     << 4U) 
                                                    | ((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_fifo_ctrl_fmtrst__q) 
                                                         << 3U) 
                                                        | ((IData)(vlSelfRef.__PVT__u_reg__DOT__fifo_ctrl_qe) 
                                                           << 2U)) 
                                                       | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_fifo_ctrl_rxrst__q) 
                                                           << 1U) 
                                                          | (IData)(vlSelfRef.__PVT__u_reg__DOT__fifo_ctrl_qe))))))) 
                                << 0x0000001aU) | (QData)((IData)(
                                                                  ((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_host_fifo_config_fmt_thresh__q) 
                                                                     << 0x0000000eU) 
                                                                    | ((IData)(vlSelfRef.__PVT__u_reg__DOT__host_fifo_config_qe) 
                                                                       << 0x0000000dU)) 
                                                                   | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_host_fifo_config_rx_thresh__q) 
                                                                       << 1U) 
                                                                      | (IData)(vlSelfRef.__PVT__u_reg__DOT__host_fifo_config_qe))))))) 
                      << 0x0000000aU) | (IData)(((((QData)((IData)(
                                                                   (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_target_fifo_config_acq_thresh__q) 
                                                                     << 1U) 
                                                                    | (IData)(vlSelfRef.__PVT__u_reg__DOT__target_fifo_config_qe)))) 
                                                   << 0x0000001dU) 
                                                  | (QData)((IData)(
                                                                    ((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_target_fifo_config_tx_thresh__q) 
                                                                       << 0x00000011U) 
                                                                      | (((IData)(vlSelfRef.__PVT__u_reg__DOT__target_fifo_config_qe) 
                                                                          << 0x00000010U) 
                                                                         | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ovrd_sdaval__q) 
                                                                             << 0x0000000fU) 
                                                                            | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ovrd_sclval__q) 
                                                                               << 0x0000000eU)))) 
                                                                     | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ovrd_txovrden__q) 
                                                                         << 0x0000000dU) 
                                                                        | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timing0_tlow__q)))))) 
                                                 >> 0x00000020U)));
    __Vtemp_1[2U] = (((IData)((((QData)((IData)(((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_fdata_fbyte__q) 
                                                   << 9U) 
                                                  | ((IData)(vlSelfRef.__PVT__u_reg__DOT__fdata_qe) 
                                                     << 8U)) 
                                                 | ((((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_fifo_ctrl_txrst__q) 
                                                        << 3U) 
                                                       | ((IData)(vlSelfRef.__PVT__u_reg__DOT__fifo_ctrl_qe) 
                                                          << 2U)) 
                                                      | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_fifo_ctrl_acqrst__q) 
                                                          << 1U) 
                                                         | (IData)(vlSelfRef.__PVT__u_reg__DOT__fifo_ctrl_qe))) 
                                                     << 4U) 
                                                    | ((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_fifo_ctrl_fmtrst__q) 
                                                         << 3U) 
                                                        | ((IData)(vlSelfRef.__PVT__u_reg__DOT__fifo_ctrl_qe) 
                                                           << 2U)) 
                                                       | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_fifo_ctrl_rxrst__q) 
                                                           << 1U) 
                                                          | (IData)(vlSelfRef.__PVT__u_reg__DOT__fifo_ctrl_qe))))))) 
                                << 0x0000001aU) | (QData)((IData)(
                                                                  ((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_host_fifo_config_fmt_thresh__q) 
                                                                     << 0x0000000eU) 
                                                                    | ((IData)(vlSelfRef.__PVT__u_reg__DOT__host_fifo_config_qe) 
                                                                       << 0x0000000dU)) 
                                                                   | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_host_fifo_config_rx_thresh__q) 
                                                                       << 1U) 
                                                                      | (IData)(vlSelfRef.__PVT__u_reg__DOT__host_fifo_config_qe))))))) 
                      >> 0x00000016U) | ((IData)(((
                                                   ((QData)((IData)(
                                                                    ((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_fdata_fbyte__q) 
                                                                       << 9U) 
                                                                      | ((IData)(vlSelfRef.__PVT__u_reg__DOT__fdata_qe) 
                                                                         << 8U)) 
                                                                     | ((((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_fifo_ctrl_txrst__q) 
                                                                            << 3U) 
                                                                           | ((IData)(vlSelfRef.__PVT__u_reg__DOT__fifo_ctrl_qe) 
                                                                              << 2U)) 
                                                                          | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_fifo_ctrl_acqrst__q) 
                                                                              << 1U) 
                                                                             | (IData)(vlSelfRef.__PVT__u_reg__DOT__fifo_ctrl_qe))) 
                                                                         << 4U) 
                                                                        | ((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_fifo_ctrl_fmtrst__q) 
                                                                             << 3U) 
                                                                            | ((IData)(vlSelfRef.__PVT__u_reg__DOT__fifo_ctrl_qe) 
                                                                               << 2U)) 
                                                                           | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_fifo_ctrl_rxrst__q) 
                                                                               << 1U) 
                                                                              | (IData)(vlSelfRef.__PVT__u_reg__DOT__fifo_ctrl_qe))))))) 
                                                    << 0x0000001aU) 
                                                   | (QData)((IData)(
                                                                     ((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_host_fifo_config_fmt_thresh__q) 
                                                                        << 0x0000000eU) 
                                                                       | ((IData)(vlSelfRef.__PVT__u_reg__DOT__host_fifo_config_qe) 
                                                                          << 0x0000000dU)) 
                                                                      | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_host_fifo_config_rx_thresh__q) 
                                                                          << 1U) 
                                                                         | (IData)(vlSelfRef.__PVT__u_reg__DOT__host_fifo_config_qe)))))) 
                                                  >> 0x00000020U)) 
                                         << 0x0000000aU));
    __Vtemp_4[1U] = (((IData)((((QData)((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_target_timeout_ctrl_val__q)) 
                                << 0x0000000aU) | (QData)((IData)(
                                                                  (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_target_nack_count__q) 
                                                                    << 2U) 
                                                                   | ((2U 
                                                                       & (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                                          >> 0x0000001eU)) 
                                                                      | (3U 
                                                                         == 
                                                                         (3U 
                                                                          & (- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_target_ack_ctrl_nack__DOT__we))))))))))) 
                      << 0x00000011U) | (IData)(((((QData)((IData)(
                                                                   ((0x000007fcU 
                                                                     & (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                                        << 2U)) 
                                                                    | (((3U 
                                                                         == 
                                                                         (3U 
                                                                          & (- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_target_ack_ctrl_nack__DOT__we))))) 
                                                                        << 1U) 
                                                                       | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_host_nack_handler_timeout_en__q))))) 
                                                   << 0x00000026U) 
                                                  | (((QData)((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_host_nack_handler_timeout_val__q)) 
                                                      << 7U) 
                                                     | (QData)((IData)(
                                                                       ((((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_controller_events_arbitration_lost__q) 
                                                                            << 3U) 
                                                                           | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_controller_events_bus_timeout__q) 
                                                                              << 2U)) 
                                                                          | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_controller_events_unhandled_nack_timeout__q) 
                                                                              << 1U) 
                                                                             | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_controller_events_nack__q))) 
                                                                         << 3U) 
                                                                        | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_target_events_arbitration_lost__q) 
                                                                            << 2U) 
                                                                           | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_target_events_bus_timeout__q) 
                                                                               << 1U) 
                                                                              | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_target_events_tx_pending__q)))))))) 
                                                 >> 0x00000020U)));
    __Vtemp_5[2U] = ((((((IData)(vlSelfRef.__PVT__u_reg__DOT__u_acqdata_abyte__DOT__re) 
                         << 0x0000001eU) | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_txdata__q) 
                                             << 0x00000016U) 
                                            | ((IData)(vlSelfRef.__PVT__u_reg__DOT__txdata_qe) 
                                               << 0x00000015U))) 
                       | ((vlSelfRef.u_reg__DOT____Vcellout__u_host_timeout_ctrl__q 
                           << 1U) | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_target_timeout_ctrl_en__q))) 
                      << 0x0000001aU) | (((IData)((
                                                   ((QData)((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_target_timeout_ctrl_val__q)) 
                                                    << 0x0000000aU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_target_nack_count__q) 
                                                                       << 2U) 
                                                                      | ((2U 
                                                                          & (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                                             >> 0x0000001eU)) 
                                                                         | (3U 
                                                                            == 
                                                                            (3U 
                                                                             & (- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_target_ack_ctrl_nack__DOT__we))))))))))) 
                                          >> 0x0000000fU) 
                                         | ((IData)(
                                                    ((((QData)((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_target_timeout_ctrl_val__q)) 
                                                       << 0x0000000aU) 
                                                      | (QData)((IData)(
                                                                        (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_target_nack_count__q) 
                                                                          << 2U) 
                                                                         | ((2U 
                                                                             & (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                                                >> 0x0000001eU)) 
                                                                            | (3U 
                                                                               == 
                                                                               (3U 
                                                                                & (- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_target_ack_ctrl_nack__DOT__we)))))))))) 
                                                     >> 0x00000020U)) 
                                            << 0x00000011U)));
    vlSelfRef.__PVT__u_reg__DOT__reg2hw[0U] = (IData)(
                                                      (((QData)((IData)(
                                                                        ((0x000007fcU 
                                                                          & (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                                             << 2U)) 
                                                                         | (((3U 
                                                                              == 
                                                                              (3U 
                                                                               & (- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_target_ack_ctrl_nack__DOT__we))))) 
                                                                             << 1U) 
                                                                            | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_host_nack_handler_timeout_en__q))))) 
                                                        << 0x00000026U) 
                                                       | (((QData)((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_host_nack_handler_timeout_val__q)) 
                                                           << 7U) 
                                                          | (QData)((IData)(
                                                                            ((((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_controller_events_arbitration_lost__q) 
                                                                                << 3U) 
                                                                                | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_controller_events_bus_timeout__q) 
                                                                                << 2U)) 
                                                                               | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_controller_events_unhandled_nack_timeout__q) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_controller_events_nack__q))) 
                                                                              << 3U) 
                                                                             | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_target_events_arbitration_lost__q) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_target_events_bus_timeout__q) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_target_events_tx_pending__q)))))))));
    vlSelfRef.__PVT__u_reg__DOT__reg2hw[1U] = __Vtemp_4[1U];
    vlSelfRef.__PVT__u_reg__DOT__reg2hw[2U] = __Vtemp_5[2U];
    vlSelfRef.__PVT__u_reg__DOT__reg2hw[3U] = (((((IData)(vlSelfRef.__PVT__u_reg__DOT__u_acqdata_abyte__DOT__re) 
                                                  << 0x0000001eU) 
                                                 | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_txdata__q) 
                                                     << 0x00000016U) 
                                                    | ((IData)(vlSelfRef.__PVT__u_reg__DOT__txdata_qe) 
                                                       << 0x00000015U))) 
                                                | ((vlSelfRef.u_reg__DOT____Vcellout__u_host_timeout_ctrl__q 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_target_timeout_ctrl_en__q))) 
                                               >> 6U);
    vlSelfRef.__PVT__u_reg__DOT__reg2hw[4U] = ((0xfff80000U 
                                                & (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_target_id_mask1__q) 
                                                    << 0x0000001aU) 
                                                   | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_target_id_address1__q) 
                                                      << 0x00000013U))) 
                                               | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_target_id_mask0__q) 
                                                   << 0x0000000cU) 
                                                  | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_target_id_address0__q) 
                                                      << 5U) 
                                                     | ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_acqdata_abyte__DOT__re) 
                                                        << 1U))));
    vlSelfRef.__PVT__u_reg__DOT__reg2hw[5U] = (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timeout_ctrl_mode__q) 
                                                << 0x0000001fU) 
                                               | ((vlSelfRef.u_reg__DOT____Vcellout__u_timeout_ctrl_val__q 
                                                   << 1U) 
                                                  | (0x0007ffffU 
                                                     & ((0x0007ffffU 
                                                         & ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_target_id_mask1__q) 
                                                            >> 6U)) 
                                                        | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_target_id_address1__q) 
                                                           >> 0x0000000dU)))));
    vlSelfRef.__PVT__u_reg__DOT__reg2hw[6U] = (IData)(
                                                      (((QData)((IData)(
                                                                        (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timing2_tsu_sta__q) 
                                                                          << 0x0000000dU) 
                                                                         | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timing3_thd_dat__q)))) 
                                                        << 0x00000024U) 
                                                       | (((QData)((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timing3_tsu_dat__q)) 
                                                           << 0x0000001bU) 
                                                          | (QData)((IData)(
                                                                            (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timing4_t_buf__q) 
                                                                              << 0x0000000eU) 
                                                                             | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timing4_tsu_sto__q) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timeout_ctrl_en__q))))))));
    vlSelfRef.__PVT__u_reg__DOT__reg2hw[7U] = (((IData)(
                                                        (((QData)((IData)(
                                                                          (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timing0_thigh__q) 
                                                                            << 0x00000013U) 
                                                                           | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timing1_t_f__q) 
                                                                               << 0x0000000aU) 
                                                                              | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timing1_t_r__q))))) 
                                                          << 0x0000000dU) 
                                                         | (QData)((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timing2_thd_sta__q)))) 
                                                << 0x0000001eU) 
                                               | (IData)(
                                                         ((((QData)((IData)(
                                                                            (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timing2_tsu_sta__q) 
                                                                              << 0x0000000dU) 
                                                                             | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timing3_thd_dat__q)))) 
                                                            << 0x00000024U) 
                                                           | (((QData)((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timing3_tsu_dat__q)) 
                                                               << 0x0000001bU) 
                                                              | (QData)((IData)(
                                                                                (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timing4_t_buf__q) 
                                                                                << 0x0000000eU) 
                                                                                | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timing4_tsu_sto__q) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timeout_ctrl_en__q))))))) 
                                                          >> 0x00000020U)));
    vlSelfRef.__PVT__u_reg__DOT__reg2hw[8U] = (((IData)(
                                                        (((QData)((IData)(
                                                                          (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timing0_thigh__q) 
                                                                            << 0x00000013U) 
                                                                           | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timing1_t_f__q) 
                                                                               << 0x0000000aU) 
                                                                              | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timing1_t_r__q))))) 
                                                          << 0x0000000dU) 
                                                         | (QData)((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timing2_thd_sta__q)))) 
                                                >> 2U) 
                                               | ((IData)(
                                                          ((((QData)((IData)(
                                                                             (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timing0_thigh__q) 
                                                                               << 0x00000013U) 
                                                                              | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timing1_t_f__q) 
                                                                                << 0x0000000aU) 
                                                                                | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timing1_t_r__q))))) 
                                                             << 0x0000000dU) 
                                                            | (QData)((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timing2_thd_sta__q))) 
                                                           >> 0x00000020U)) 
                                                  << 0x0000001eU));
    vlSelfRef.__PVT__u_reg__DOT__reg2hw[9U] = (((IData)(
                                                        (((QData)((IData)(
                                                                          (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_target_fifo_config_acq_thresh__q) 
                                                                            << 1U) 
                                                                           | (IData)(vlSelfRef.__PVT__u_reg__DOT__target_fifo_config_qe)))) 
                                                          << 0x0000001dU) 
                                                         | (QData)((IData)(
                                                                           ((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_target_fifo_config_tx_thresh__q) 
                                                                              << 0x00000011U) 
                                                                             | (((IData)(vlSelfRef.__PVT__u_reg__DOT__target_fifo_config_qe) 
                                                                                << 0x00000010U) 
                                                                                | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ovrd_sdaval__q) 
                                                                                << 0x0000000fU) 
                                                                                | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ovrd_sclval__q) 
                                                                                << 0x0000000eU)))) 
                                                                            | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ovrd_txovrden__q) 
                                                                                << 0x0000000dU) 
                                                                               | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timing0_tlow__q))))))) 
                                                << 0x0000000bU) 
                                               | ((IData)(
                                                          ((((QData)((IData)(
                                                                             (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timing0_thigh__q) 
                                                                               << 0x00000013U) 
                                                                              | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timing1_t_f__q) 
                                                                                << 0x0000000aU) 
                                                                                | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timing1_t_r__q))))) 
                                                             << 0x0000000dU) 
                                                            | (QData)((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timing2_thd_sta__q))) 
                                                           >> 0x00000020U)) 
                                                  >> 2U));
    vlSelfRef.__PVT__u_reg__DOT__reg2hw[0x0000000aU] 
        = (((IData)((((QData)((IData)((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_target_fifo_config_acq_thresh__q) 
                                        << 1U) | (IData)(vlSelfRef.__PVT__u_reg__DOT__target_fifo_config_qe)))) 
                      << 0x0000001dU) | (QData)((IData)(
                                                        ((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_target_fifo_config_tx_thresh__q) 
                                                           << 0x00000011U) 
                                                          | (((IData)(vlSelfRef.__PVT__u_reg__DOT__target_fifo_config_qe) 
                                                              << 0x00000010U) 
                                                             | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ovrd_sdaval__q) 
                                                                 << 0x0000000fU) 
                                                                | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ovrd_sclval__q) 
                                                                   << 0x0000000eU)))) 
                                                         | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ovrd_txovrden__q) 
                                                             << 0x0000000dU) 
                                                            | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timing0_tlow__q))))))) 
            >> 0x00000015U) | (__Vtemp_1[1U] << 0x0000000bU));
    vlSelfRef.__PVT__u_reg__DOT__reg2hw[0x0000000bU] 
        = ((__Vtemp_1[1U] >> 0x00000015U) | (__Vtemp_1[2U] 
                                             << 0x0000000bU));
    vlSelfRef.__PVT__u_reg__DOT__reg2hw[0x0000000cU] 
        = ((0xfff80000U & vlSelfRef.__PVT__u_reg__DOT__reg2hw[0x0000000cU]) 
           | ((((((IData)(vlSelfRef.__PVT__u_reg__DOT__u_rdata__DOT__re) 
                  << 5U) | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_fdata_nakok__q) 
                             << 4U) | ((IData)(vlSelfRef.__PVT__u_reg__DOT__fdata_qe) 
                                       << 3U))) | (
                                                   ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_fdata_rcont__q) 
                                                    << 2U) 
                                                   | (((IData)(vlSelfRef.__PVT__u_reg__DOT__fdata_qe) 
                                                       << 1U) 
                                                      | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_fdata_readb__q)))) 
               << 5U) | ((((IData)(vlSelfRef.__PVT__u_reg__DOT__fdata_qe) 
                           << 4U) | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_fdata_stop__q) 
                                      << 3U) | ((IData)(vlSelfRef.__PVT__u_reg__DOT__fdata_qe) 
                                                << 2U))) 
                         | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_fdata_start__q) 
                             << 1U) | (IData)(vlSelfRef.__PVT__u_reg__DOT__fdata_qe)))));
    vlSelfRef.__PVT__u_reg__DOT__reg2hw[0x0000000cU] 
        = ((0x0007ffffU & vlSelfRef.__PVT__u_reg__DOT__reg2hw[0x0000000cU]) 
           | (0xfff80000U & (((((((2U & vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o) 
                                  | (0x00007fffU == 
                                     (0x00007fffU & 
                                      (- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_test_acq_stretch__DOT__we)))))) 
                                 << 5U) | (((2U & (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                   << 1U)) 
                                            | (0x00007fffU 
                                               == (0x00007fffU 
                                                   & (- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_test_acq_stretch__DOT__we)))))) 
                                           << 3U)) 
                               | ((4U & (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                         << 2U)) | 
                                  (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_alert_test__DOT__we) 
                                    << 1U) | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_tx_stretch_ctrl_en__q)))) 
                              << 0x00000019U) | (((
                                                   ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_multi_controller_monitor_en__q) 
                                                    << 5U) 
                                                   | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_ack_ctrl_en__q) 
                                                       << 4U) 
                                                      | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_nack_addr_after_timeout__q) 
                                                         << 3U))) 
                                                  | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_llpbk__q) 
                                                      << 2U) 
                                                     | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_enabletarget__q) 
                                                         << 1U) 
                                                        | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_enablehost__q)))) 
                                                 << 0x00000013U))));
    vlSelfRef.__PVT__u_reg__DOT__reg2hw[0x0000000dU] 
        = (((((((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_scl_interference__q) 
                  << 3U) | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_controller_halt__q) 
                            << 2U)) | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_rx_overflow__q) 
                                        << 1U) | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_acq_threshold__q))) 
               << 0x0000000cU) | (((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_rx_threshold__q) 
                                     << 3U) | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_fmt_threshold__q) 
                                               << 2U)) 
                                   | ((2U & (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                             >> 0x0000000dU)) 
                                      | (0x00007fffU 
                                         == (0x00007fffU 
                                             & (- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_test_acq_stretch__DOT__we))))))) 
                                  << 8U)) | (((((2U 
                                                 & (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                    >> 0x0000000cU)) 
                                                | (0x00007fffU 
                                                   == 
                                                   (0x00007fffU 
                                                    & (- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_test_acq_stretch__DOT__we)))))) 
                                               << 6U) 
                                              | (((2U 
                                                   & (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                      >> 0x0000000bU)) 
                                                  | (0x00007fffU 
                                                     == 
                                                     (0x00007fffU 
                                                      & (- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_test_acq_stretch__DOT__we)))))) 
                                                 << 4U)) 
                                             | ((((2U 
                                                   & (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                      >> 0x0000000aU)) 
                                                  | (0x00007fffU 
                                                     == 
                                                     (0x00007fffU 
                                                      & (- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_test_acq_stretch__DOT__we)))))) 
                                                 << 2U) 
                                                | ((2U 
                                                    & (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                       >> 9U)) 
                                                   | (0x00007fffU 
                                                      == 
                                                      (0x00007fffU 
                                                       & (- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_test_acq_stretch__DOT__we))))))))) 
            << 0x00000010U) | (((((((2U & (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                           >> 8U)) 
                                    | (0x00007fffU 
                                       == (0x00007fffU 
                                           & (- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_test_acq_stretch__DOT__we)))))) 
                                   << 6U) | (((2U & 
                                               (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                >> 7U)) 
                                              | (0x00007fffU 
                                                 == 
                                                 (0x00007fffU 
                                                  & (- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_test_acq_stretch__DOT__we)))))) 
                                             << 4U)) 
                                 | ((((2U & (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                             >> 6U)) 
                                      | (0x00007fffU 
                                         == (0x00007fffU 
                                             & (- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_test_acq_stretch__DOT__we)))))) 
                                     << 2U) | ((2U 
                                                & (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                   >> 5U)) 
                                               | (0x00007fffU 
                                                  == 
                                                  (0x00007fffU 
                                                   & (- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_test_acq_stretch__DOT__we)))))))) 
                                << 8U) | (((((2U & 
                                              (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                               >> 4U)) 
                                             | (0x00007fffU 
                                                == 
                                                (0x00007fffU 
                                                 & (- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_test_acq_stretch__DOT__we)))))) 
                                            << 6U) 
                                           | (((2U 
                                                & (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                   >> 3U)) 
                                               | (0x00007fffU 
                                                  == 
                                                  (0x00007fffU 
                                                   & (- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_test_acq_stretch__DOT__we)))))) 
                                              << 4U)) 
                                          | ((((2U 
                                                & (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                   >> 2U)) 
                                               | (0x00007fffU 
                                                  == 
                                                  (0x00007fffU 
                                                   & (- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_test_acq_stretch__DOT__we)))))) 
                                              << 2U) 
                                             | ((2U 
                                                 & (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                    >> 1U)) 
                                                | (0x00007fffU 
                                                   == 
                                                   (0x00007fffU 
                                                    & (- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_test_acq_stretch__DOT__we))))))))));
    vlSelfRef.__PVT__u_reg__DOT__reg2hw[0x0000000eU] 
        = (0x00ffffffU & (((((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_host_timeout__q) 
                               << 5U) | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_unexp_stop__q) 
                                          << 4U) | 
                                         ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_acq_stretch__q) 
                                          << 3U))) 
                             | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_tx_threshold__q) 
                                 << 2U) | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_tx_stretch__q) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_cmd_complete__q)))) 
                            << 0x00000012U) | (((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_sda_unstable__q) 
                                                  << 5U) 
                                                 | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_stretch_timeout__q) 
                                                     << 4U) 
                                                    | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_sda_interference__q) 
                                                       << 3U))) 
                                                | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_scl_interference__q) 
                                                    << 2U) 
                                                   | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_controller_halt__q) 
                                                       << 1U) 
                                                      | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_rx_overflow__q)))) 
                                               << 0x0000000cU)) 
                          | ((((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_acq_threshold__q) 
                                 << 5U) | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_rx_threshold__q) 
                                            << 4U) 
                                           | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_fmt_threshold__q) 
                                              << 3U))) 
                               | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_host_timeout__q) 
                                   << 2U) | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_unexp_stop__q) 
                                              << 1U) 
                                             | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_acq_stretch__q)))) 
                              << 6U) | ((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_tx_threshold__q) 
                                          << 5U) | 
                                         (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_tx_stretch__q) 
                                           << 4U) | 
                                          ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_cmd_complete__q) 
                                           << 3U))) 
                                        | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_sda_unstable__q) 
                                            << 2U) 
                                           | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_stretch_timeout__q) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_sda_interference__q)))))));
    vlSelfRef.__PVT__i2c_core__DOT__target_ack_ctrl_sw_nack 
        = ((3U == (3U & (- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_target_ack_ctrl_nack__DOT__we))))) 
           & (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
              >> 0x0000001fU));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__fifo_incr_rptr) 
           & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q));
    if (vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__empty_o) {
        vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__sram_write_o 
            = (1U & (~ (IData)(vlSelfRef.__VdfgRegularize_ha785dde0_1_29)));
        vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__sram_req_o 
            = ((~ (IData)(vlSelfRef.__VdfgRegularize_ha785dde0_1_29)) 
               & (IData)(vlSelfRef.__VdfgRegularize_ha785dde0_1_9));
    } else {
        vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__sram_write_o 
            = (1U & (~ (IData)(vlSelfRef.__VdfgRegularize_ha785dde0_1_7)));
        vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__sram_req_o 
            = ((IData)(vlSelfRef.__VdfgRegularize_ha785dde0_1_7) 
               | (IData)(vlSelfRef.__VdfgRegularize_ha785dde0_1_9));
    }
    vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__9__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__19__KET__) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_target_fifo_config_acq_thresh__DOT__we));
    vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__11__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__23__KET__) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__24__KET__));
    vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__12__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__25__KET__) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_txdata0_qe__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i));
    vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__13__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__27__KET__) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_target_ack_ctrl_nack__DOT__we));
    vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__14__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_host_nack_handler_timeout_en__DOT__we) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__30__KET__));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_scl_interference__DOT__qe 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_scl_interference__DOT__de) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_cmd_complete__DOT__we));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_scl_interference__DOT__d 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_scl_interference__DOT__de) 
           | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_scl_interference__q));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_sda_interference__DOT__qe 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_sda_interference__DOT__de) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_cmd_complete__DOT__we));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_sda_interference__DOT__d 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_sda_interference__DOT__de) 
           | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_sda_interference__q));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_sda_unstable__DOT__qe 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_sda_unstable__DOT__de) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_cmd_complete__DOT__we));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_sda_unstable__DOT__d 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_sda_unstable__DOT__de) 
           | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_sda_unstable__q));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_overflow__DOT__qe 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_overflow__DOT__de) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_cmd_complete__DOT__we));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_overflow__DOT__d 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_overflow__DOT__de) 
           | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_rx_overflow__q));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_cmd_complete__DOT__qe 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_cmd_complete__DOT__de) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_cmd_complete__DOT__we));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_cmd_complete__DOT__d 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_cmd_complete__DOT__de) 
           | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_cmd_complete__q));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_host_timeout__DOT__qe 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_host_timeout__DOT__de) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_cmd_complete__DOT__we));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_host_timeout__DOT__d 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_host_timeout__DOT__de) 
           | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_host_timeout__q));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_stretch_timeout__DOT__qe 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_stretch_timeout__DOT__de) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_cmd_complete__DOT__we));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_stretch_timeout__DOT__d 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_stretch_timeout__DOT__de) 
           | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_stretch_timeout__q));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_unexp_stop__DOT__qe 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_unexp_stop__DOT__de) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_cmd_complete__DOT__we));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_unexp_stop__DOT__d 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_unexp_stop__DOT__de) 
           | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_unexp_stop__q));
    vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__7__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__15__KET__) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__16__KET__));
    vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__nack_transaction_d 
        = vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__nack_transaction_q;
    if ((0x00000010U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
        if ((8U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
            if ((4U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
                vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__nack_transaction_d = 0U;
            } else if ((2U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
                vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__nack_transaction_d = 0U;
            } else if ((1U & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q)))) {
                if (((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__nack_timeout) 
                     | ((IData)(vlSelfRef.__PVT__i2c_core__DOT__target_ack_ctrl_sw_nack) 
                        & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__can_auto_ack))))) {
                    vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__nack_transaction_d = 1U;
                }
            }
        } else if ((4U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
            if ((2U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
                if ((1U & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q)))) {
                    if (vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__nack_timeout) {
                        vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__nack_transaction_d = 1U;
                    }
                }
            } else if ((1U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
                if (vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__nack_timeout) {
                    vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__nack_transaction_d = 1U;
                }
            }
        } else if ((2U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
            if ((1U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
                if (vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__nack_timeout) {
                    vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__nack_transaction_d = 1U;
                }
            }
        }
    } else if ((8U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
        if ((4U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
            if ((2U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
                if ((1U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
                    if (vlSelfRef.__PVT__i2c_core__DOT__scl_sync) {
                        vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__nack_transaction_d = 1U;
                    }
                }
            }
        }
    } else if ((1U & (~ ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q) 
                         >> 2U)))) {
        if ((2U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
            if ((1U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
                if (vlSelfRef.__PVT__i2c_core__DOT__scl_sync) {
                    vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__nack_transaction_d = 1U;
                }
            }
        } else if ((1U & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q)))) {
            vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__nack_transaction_d = 0U;
        }
    }
    if ((1U & (~ ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_enabletarget__q) 
                  & ((IData)(vlSelfRef.__PVT__i2c_core__DOT__stop_detect) 
                     | (IData)(vlSelfRef.__PVT__i2c_core__DOT__event_bus_active_timeout)))))) {
        if ((1U & (~ ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_enabletarget__q) 
                      & (IData)(vlSelfRef.__PVT__i2c_core__DOT__start_detect))))) {
            if (vlSelfRef.__PVT__i2c_core__DOT__target_arbitration_lost) {
                vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__nack_transaction_d = 1U;
            }
        }
    }
    vlSelfRef.__PVT__i2c_core__DOT__acq_fifo_wdata = 0U;
    vlSelfRef.__PVT__i2c_core__DOT__acq_fifo_wvalid = 0U;
    if ((0x00000010U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
        if ((8U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
            if ((4U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
                vlSelfRef.__PVT__i2c_core__DOT__acq_fifo_wdata = 0U;
            } else if ((2U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
                vlSelfRef.__PVT__i2c_core__DOT__acq_fifo_wdata = 0U;
            } else if ((1U & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q)))) {
                if (((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__nack_timeout) 
                     | ((IData)(vlSelfRef.__PVT__i2c_core__DOT__target_ack_ctrl_sw_nack) 
                        & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__can_auto_ack))))) {
                    vlSelfRef.__PVT__i2c_core__DOT__acq_fifo_wdata 
                        = (0x00000400U | (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__input_byte));
                }
            }
        } else if ((4U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
            if ((1U & (~ ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
                    if (vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__nack_timeout) {
                        vlSelfRef.__PVT__i2c_core__DOT__acq_fifo_wdata 
                            = (0x00000500U | (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__input_byte));
                    } else if ((2U < (0x000001ffU & 
                                      ((IData)(0x010cU) 
                                       - (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__fifo_depth_o))))) {
                        vlSelfRef.__PVT__i2c_core__DOT__acq_fifo_wdata 
                            = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__restart_det_q)
                                ? (0x00000300U | (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__input_byte))
                                : (0x00000100U | (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__input_byte)));
                    }
                }
            }
        } else if ((2U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
            if ((1U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
                if (vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__nack_timeout) {
                    vlSelfRef.__PVT__i2c_core__DOT__acq_fifo_wdata 
                        = (0x00000500U | (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__input_byte));
                }
            } else if ((1U == (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__tcount_q))) {
                vlSelfRef.__PVT__i2c_core__DOT__acq_fifo_wdata 
                    = vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__input_byte;
            }
        }
    } else if ((1U & (~ ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q) 
                         >> 3U)))) {
        if ((4U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
            if ((2U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
                if ((1U & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q)))) {
                    if ((1U == (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__tcount_q))) {
                        vlSelfRef.__PVT__i2c_core__DOT__acq_fifo_wdata 
                            = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__restart_det_q)
                                ? (0x00000300U | (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__input_byte))
                                : (0x00000100U | (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__input_byte)));
                    }
                }
            }
        }
    }
    if (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_enabletarget__q) 
         & ((IData)(vlSelfRef.__PVT__i2c_core__DOT__stop_detect) 
            | (IData)(vlSelfRef.__PVT__i2c_core__DOT__event_bus_active_timeout)))) {
        vlSelfRef.__PVT__i2c_core__DOT__acq_fifo_wdata 
            = (((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__nack_transaction_q) 
                | (IData)(vlSelfRef.__PVT__i2c_core__DOT__event_bus_active_timeout))
                ? (0x00000600U | (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__input_byte))
                : (0x00000200U | (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__input_byte)));
    }
    if ((0x00000010U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
        if ((8U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
            if ((4U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
                vlSelfRef.__PVT__i2c_core__DOT__acq_fifo_wvalid = 0U;
            } else if ((2U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
                vlSelfRef.__PVT__i2c_core__DOT__acq_fifo_wvalid = 0U;
            } else if ((1U & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q)))) {
                if (((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__nack_timeout) 
                     | ((IData)(vlSelfRef.__PVT__i2c_core__DOT__target_ack_ctrl_sw_nack) 
                        & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__can_auto_ack))))) {
                    vlSelfRef.__PVT__i2c_core__DOT__acq_fifo_wvalid 
                        = (1U < (0x000001ffU & ((IData)(0x010cU) 
                                                - (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__fifo_depth_o))));
                }
            }
        } else if ((4U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
            if ((1U & (~ ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
                    if (vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__nack_timeout) {
                        vlSelfRef.__PVT__i2c_core__DOT__acq_fifo_wvalid 
                            = (1U < (0x000001ffU & 
                                     ((IData)(0x010cU) 
                                      - (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__fifo_depth_o))));
                    } else if ((2U < (0x000001ffU & 
                                      ((IData)(0x010cU) 
                                       - (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__fifo_depth_o))))) {
                        vlSelfRef.__PVT__i2c_core__DOT__acq_fifo_wvalid = 1U;
                    }
                }
            }
        } else if ((2U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
            if ((1U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
                if (vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__nack_timeout) {
                    vlSelfRef.__PVT__i2c_core__DOT__acq_fifo_wvalid 
                        = (1U < (0x000001ffU & ((IData)(0x010cU) 
                                                - (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__fifo_depth_o))));
                }
            } else if ((1U == (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__tcount_q))) {
                vlSelfRef.__PVT__i2c_core__DOT__acq_fifo_wvalid 
                    = (1U & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__stretch_rx)));
            }
        }
    } else if ((1U & (~ ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q) 
                         >> 3U)))) {
        if ((4U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
            if ((2U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
                if ((1U & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q)))) {
                    if ((1U == (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__tcount_q))) {
                        if ((1U & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__nack_transaction_q)))) {
                            if ((2U < (0x000001ffU 
                                       & ((IData)(0x010cU) 
                                          - (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__fifo_depth_o))))) {
                                vlSelfRef.__PVT__i2c_core__DOT__acq_fifo_wvalid = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_enabletarget__q) 
         & ((IData)(vlSelfRef.__PVT__i2c_core__DOT__stop_detect) 
            | (IData)(vlSelfRef.__PVT__i2c_core__DOT__event_bus_active_timeout)))) {
        vlSelfRef.__PVT__i2c_core__DOT__acq_fifo_wvalid 
            = vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__xact_for_us_q;
    }
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_arbiter__DOT__gen_normal_case__DOT__data_tree__BRA__114__03a92__KET__ 
        = (((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__sram_write_o) 
            << 0x00000016U) | ((0x003fe000U & (((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__empty_o)
                                                 ? 
                                                ((IData)(0x0040U) 
                                                 + 
                                                 (0x0000003fU 
                                                  & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__wptr_wrap_cnt_q)))
                                                 : 
                                                ((IData)(vlSelfRef.__VdfgRegularize_ha785dde0_1_7)
                                                  ? 
                                                 ((IData)(0x0040U) 
                                                  + 
                                                  (0x0000003fU 
                                                   & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__rptr_wrap_cnt_q)))
                                                  : 
                                                 ((IData)(0x0040U) 
                                                  + 
                                                  (0x0000003fU 
                                                   & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__wptr_wrap_cnt_q))))) 
                                               << 0x0000000dU)) 
                               | (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_inp_buf__DOT__rdata_o)));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_arbiter__DOT__gen_normal_case__DOT__req_tree__BRA__1__KET__ 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__sram_req_o) 
           | (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__sram_req_o));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_arbiter__DOT__gen_normal_case__DOT__prio_tree__BRA__4__KET__ 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__sram_req_o) 
           & ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_arbiter__DOT__gen_normal_case__DOT__prio_mask_q) 
              >> 1U));
    vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__4__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__9__KET__) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__10__KET__));
    vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__5__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__11__KET__) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__12__KET__));
    vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__6__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__13__KET__) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__14__KET__));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_scl_interference__DOT__wr_data 
        = ((~ ((vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                >> 5U) & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_cmd_complete__DOT__we))) 
           & ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_scl_interference__DOT__de)
               ? (IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_scl_interference__DOT__d)
               : (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_scl_interference__q)));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_sda_interference__DOT__wr_data 
        = ((~ ((vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                >> 6U) & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_cmd_complete__DOT__we))) 
           & ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_sda_interference__DOT__de)
               ? (IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_sda_interference__DOT__d)
               : (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_sda_interference__q)));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_sda_unstable__DOT__wr_data 
        = ((~ ((vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                >> 8U) & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_cmd_complete__DOT__we))) 
           & ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_sda_unstable__DOT__de)
               ? (IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_sda_unstable__DOT__d)
               : (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_sda_unstable__q)));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_overflow__DOT__wr_data 
        = ((~ ((vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                >> 3U) & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_cmd_complete__DOT__we))) 
           & ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_overflow__DOT__de)
               ? (IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_overflow__DOT__d)
               : (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_rx_overflow__q)));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_cmd_complete__DOT__wr_data 
        = ((~ ((vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                >> 9U) & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_cmd_complete__DOT__we))) 
           & ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_cmd_complete__DOT__de)
               ? (IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_cmd_complete__DOT__d)
               : (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_cmd_complete__q)));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_host_timeout__DOT__wr_data 
        = ((~ ((vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                >> 0x0000000eU) & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_cmd_complete__DOT__we))) 
           & ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_host_timeout__DOT__de)
               ? (IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_host_timeout__DOT__d)
               : (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_host_timeout__q)));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_stretch_timeout__DOT__wr_data 
        = ((~ ((vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                >> 7U) & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_cmd_complete__DOT__we))) 
           & ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_stretch_timeout__DOT__de)
               ? (IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_stretch_timeout__DOT__d)
               : (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_stretch_timeout__q)));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_unexp_stop__DOT__wr_data 
        = ((~ ((vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                >> 0x0000000dU) & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_cmd_complete__DOT__we))) 
           & ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_unexp_stop__DOT__de)
               ? (IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_unexp_stop__DOT__d)
               : (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_unexp_stop__q)));
    vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__3__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__7__KET__) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__8__KET__));
    vlSelfRef.__PVT__u_reg__DOT__u_target_nack_count__DOT__de 
        = (((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__nack_transaction_q)) 
            & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__nack_transaction_d)) 
           & (0xffU > (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_target_nack_count__q)));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_inp_buf__DOT__wvalid_i 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__acq_fifo_wvalid) 
           & ((~ ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_oup_buf__DOT__full_o) 
                  & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__full_o))) 
              & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_inp_buf__DOT__wready_o)));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__ram_arb_inp_data[1U] 
        = vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_arbiter__DOT__gen_normal_case__DOT__data_tree__BRA__114__03a92__KET__;
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_arbiter__DOT__gen_normal_case__DOT__gen_tree__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__sram_req_o)) 
                 | ((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_arbiter__DOT__gen_normal_case__DOT__prio_tree__BRA__3__KET__)) 
                    & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_arbiter__DOT__gen_normal_case__DOT__prio_tree__BRA__4__KET__))));
    vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__2__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__5__KET__) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__6__KET__));
    vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__1__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__3__KET__) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__4__KET__));
    vlSelfRef.__PVT__u_reg__DOT__u_target_nack_count__DOT__qe 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_target_nack_count__DOT__de) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_target_nack_count__DOT__we));
    vlSelfRef.__PVT__u_reg__DOT__u_target_nack_count__DOT__wr_data 
        = (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_target_nack_count__q) 
            + (IData)(vlSelfRef.__PVT__u_reg__DOT__u_target_nack_count__DOT__de)) 
           & ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_target_nack_count__DOT__we)
               ? 0U : 0xffU));
    vlSelfRef.__PVT__u_reg__DOT__u_target_nack_count__DOT__qs 
        = (0x000000ffU & ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_target_nack_count__q) 
                          + ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_target_nack_count__DOT__de) 
                             & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_target_nack_count__DOT__we))));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__fifo_incr_wptr 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_inp_buf__DOT__wvalid_i) 
           & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_inp_buf__DOT__wready_o));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__empty 
        = ((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_inp_buf__DOT__wvalid_i)) 
           & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__fifo_empty));
    vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_o 
        = ((((IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__1__KET__) 
             & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__2__KET__)) 
            | ((((IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__3__KET__) 
                 & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__4__KET__)) 
                | ((((IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__7__KET__) 
                     & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__8__KET__)) 
                    | ((((IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__15__KET__) 
                         & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__16__KET__)) 
                        | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_cmd_complete__DOT__we) 
                            & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_enable_acq_stretch__DOT__we)) 
                           | ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_test_acq_stretch__DOT__we) 
                              & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_alert_test__DOT__we)))) 
                       | ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_ctrl_ack_ctrl_en__DOT__we) 
                          & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_fdata_fbyte__DOT__we)))) 
                   | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__9__KET__) 
                       & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__10__KET__)) 
                      | ((((IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__19__KET__) 
                           & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_target_fifo_config_acq_thresh__DOT__we)) 
                          | ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_fifo_ctrl_acqrst__DOT__we) 
                             & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_host_fifo_config_fmt_thresh__DOT__we))) 
                         | ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_ovrd_sclval__DOT__we) 
                            & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_timing0_thigh__DOT__we)))))) 
               | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__5__KET__) 
                   & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__6__KET__)) 
                  | ((((IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__11__KET__) 
                       & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__12__KET__)) 
                      | ((((IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__23__KET__) 
                           & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__24__KET__)) 
                          | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_timing1_t_f__DOT__we) 
                              & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_timing2_thd_sta__DOT__we)) 
                             | ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_timing3_thd_dat__DOT__we) 
                                & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_timing4_t_buf__DOT__we)))) 
                         | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__25__KET__) 
                             & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_txdata0_qe__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i)) 
                            | ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_timeout_ctrl_en__DOT__we) 
                               & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_target_id_address0__DOT__we))))) 
                     | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__13__KET__) 
                         & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__14__KET__)) 
                        | ((((IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__27__KET__) 
                             & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_target_ack_ctrl_nack__DOT__we)) 
                            | ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_host_timeout_ctrl__DOT__we) 
                               & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_target_timeout_ctrl_en__DOT__we))) 
                           | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_host_nack_handler_timeout_en__DOT__we) 
                               & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__30__KET__)) 
                              | ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_controller_events_arbitration_lost__DOT__we) 
                                 & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_target_events_arbitration_lost__DOT__we))))))))) 
           | ((~ ((~ (IData)(vlSelfRef.__PVT__u_reg__DOT__addrmiss)) 
                  & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__we_o))) 
              & ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__1__KET__) 
                 | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__2__KET__))));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) 
           & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_inp_buf__DOT__rdata_o 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__empty)
            ? 0U : (0x00001fffU & (((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__fifo_empty) 
                                    & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_inp_buf__DOT__wvalid_i))
                                    ? (IData)(vlSelfRef.__PVT__i2c_core__DOT__acq_fifo_wdata)
                                    : ((0x19U >= (0x0000001fU 
                                                  & ((IData)(0x0000000dU) 
                                                     * 
                                                     (1U 
                                                      & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)))))
                                        ? (vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__storage 
                                           >> (0x0000001fU 
                                               & ((IData)(0x0000000dU) 
                                                  * 
                                                  (1U 
                                                   & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)))))
                                        : 0U))));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_inp_buf__DOT__rvalid_o 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__empty)) 
                 & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__under_rst))));
    __VdfgRegularize_ha785dde0_1_16 = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__sram_read_in_prev_cyc_q)
                                        ? (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_1p__DOT__rdata_sram)
                                        : (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_inp_buf__DOT__rdata_o));
    __VdfgRegularize_ha785dde0_1_19 = ((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__full_o)) 
                                       & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_inp_buf__DOT__rvalid_o));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_oup_buf__DOT__wvalid_i 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__empty_o)
            ? ((IData)(vlSelfRef.__VdfgRegularize_ha785dde0_1_23)
                ? (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_inp_buf__DOT__rvalid_o)
                : (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__sram_read_in_prev_cyc_q))
            : (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__sram_read_in_prev_cyc_q));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__fifo_incr_wptr 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_oup_buf__DOT__wvalid_i) 
           & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_oup_buf__DOT__wready_o));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__empty 
        = ((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_oup_buf__DOT__wvalid_i)) 
           & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__fifo_empty));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) 
           & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_oup_buf__DOT__rvalid_o 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__empty)) 
                 & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__under_rst))));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_oup_buf__DOT__wdata_i 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__empty_o)
            ? ((IData)(vlSelfRef.__VdfgRegularize_ha785dde0_1_23)
                ? (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_inp_buf__DOT__rdata_o)
                : (IData)(__VdfgRegularize_ha785dde0_1_16))
            : (IData)(__VdfgRegularize_ha785dde0_1_16));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_oup_buf__DOT__rdata_o 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__empty)
            ? 0U : (0x00001fffU & (((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__fifo_empty) 
                                    & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_oup_buf__DOT__wvalid_i))
                                    ? (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_oup_buf__DOT__wdata_i)
                                    : ((0x19U >= (0x0000001fU 
                                                  & ((IData)(0x0000000dU) 
                                                     * 
                                                     (1U 
                                                      & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)))))
                                        ? (vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__storage 
                                           >> (0x0000001fU 
                                               & ((IData)(0x0000000dU) 
                                                  * 
                                                  (1U 
                                                   & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)))))
                                        : 0U))));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__tx_fifo_wdata_i 
        = (0x000000ffU & ((IData)(vlSelfRef.__PVT__i2c_core__DOT__target_loopback)
                           ? (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_oup_buf__DOT__rdata_o)
                           : (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_txdata__q)));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_oup_buf__DOT__rready_i 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_acqdata_abyte__DOT__re) 
           | ((IData)(vlSelfRef.__PVT__i2c_core__DOT__target_loopback) 
              & ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__fifo_wready_o) 
                 | (0U != (0x0700U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_oup_buf__DOT__rdata_o))))));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_inp_buf__DOT__wvalid_i 
        = (((IData)(vlSelfRef.__PVT__i2c_core__DOT__target_loopback)
             ? ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_oup_buf__DOT__rvalid_o) 
                & ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_enabletarget__q) 
                   & (0U == (0x0700U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_oup_buf__DOT__rdata_o)))))
             : (IData)(vlSelfRef.__PVT__u_reg__DOT__txdata_qe)) 
           & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__fifo_wready_o));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__fifo_incr_rptr 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_oup_buf__DOT__rvalid_o) 
           & ((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__under_rst)) 
              & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_oup_buf__DOT__rready_i)));
    vlSelfRef.__VdfgRegularize_ha785dde0_1_17 = (1U 
                                                 & ((~ 
                                                     (((1U 
                                                        <= (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_oup_buf__DOT__depth_o)) 
                                                       & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__sram_read_in_prev_cyc_q)) 
                                                      | (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_oup_buf__DOT__full_o))) 
                                                    | ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_oup_buf__DOT__rvalid_o) 
                                                       & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_oup_buf__DOT__rready_i))));
    if (vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__empty_o) {
        vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__sram_write_o 
            = (1U & (~ (IData)(vlSelfRef.__VdfgRegularize_ha785dde0_1_23)));
        vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__sram_req_o 
            = ((~ (IData)(vlSelfRef.__VdfgRegularize_ha785dde0_1_23)) 
               & (IData)(__VdfgRegularize_ha785dde0_1_19));
    } else {
        vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__sram_write_o 
            = (1U & (~ (IData)(vlSelfRef.__VdfgRegularize_ha785dde0_1_17)));
        vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__sram_req_o 
            = ((IData)(vlSelfRef.__VdfgRegularize_ha785dde0_1_17) 
               | (IData)(__VdfgRegularize_ha785dde0_1_19));
    }
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__fifo_incr_wptr 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_inp_buf__DOT__wvalid_i) 
           & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_inp_buf__DOT__wready_o));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__empty 
        = ((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_inp_buf__DOT__wvalid_i)) 
           & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__fifo_empty));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__fifo_incr_rptr) 
           & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) 
           & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_inp_buf__DOT__rdata_o 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__empty)
            ? 0U : (0x00001fffU & (((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__fifo_empty) 
                                    & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_inp_buf__DOT__wvalid_i))
                                    ? (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__tx_fifo_wdata_i)
                                    : ((0x19U >= (0x0000001fU 
                                                  & ((IData)(0x0000000dU) 
                                                     * 
                                                     (1U 
                                                      & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)))))
                                        ? (vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__storage 
                                           >> (0x0000001fU 
                                               & ((IData)(0x0000000dU) 
                                                  * 
                                                  (1U 
                                                   & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)))))
                                        : 0U))));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_inp_buf__DOT__rvalid_o 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__empty)) 
                 & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__under_rst))));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_arbiter__DOT__gen_normal_case__DOT__data_tree__BRA__160__03a138__KET__ 
        = (((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__sram_write_o) 
            << 0x00000016U) | ((0x003fe000U & (((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__empty_o)
                                                 ? 
                                                ((IData)(0x00c0U) 
                                                 + (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__wptr_wrap_cnt_q))
                                                 : 
                                                ((IData)(vlSelfRef.__VdfgRegularize_ha785dde0_1_17)
                                                  ? 
                                                 ((IData)(0x00c0U) 
                                                  + (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__rptr_wrap_cnt_q))
                                                  : 
                                                 ((IData)(0x00c0U) 
                                                  + (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__wptr_wrap_cnt_q)))) 
                                               << 0x0000000dU)) 
                               | (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_inp_buf__DOT__rdata_o)));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_arbiter__DOT__gen_normal_case__DOT__prio_tree__BRA__6__KET__ 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__sram_req_o) 
           & ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_arbiter__DOT__gen_normal_case__DOT__prio_mask_q) 
              >> 3U));
    __VdfgRegularize_ha785dde0_1_11 = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__sram_read_in_prev_cyc_q)
                                        ? (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_1p__DOT__rdata_sram)
                                        : (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_inp_buf__DOT__rdata_o));
    __VdfgRegularize_ha785dde0_1_14 = ((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__full_o)) 
                                       & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_inp_buf__DOT__rvalid_o));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__ram_arb_inp_data[3U] 
        = vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_arbiter__DOT__gen_normal_case__DOT__data_tree__BRA__160__03a138__KET__;
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_oup_buf__DOT__wvalid_i 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__empty_o)
            ? ((IData)(vlSelfRef.__VdfgRegularize_ha785dde0_1_26)
                ? (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_inp_buf__DOT__rvalid_o)
                : (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__sram_read_in_prev_cyc_q))
            : (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__sram_read_in_prev_cyc_q));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__fifo_incr_wptr 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_oup_buf__DOT__wvalid_i) 
           & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_oup_buf__DOT__wready_o));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__empty 
        = ((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_oup_buf__DOT__wvalid_i)) 
           & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__fifo_empty));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) 
           & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q));
    vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__sda_d = 1U;
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_oup_buf__DOT__rvalid_o 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__empty)) 
                 & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__under_rst))));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_oup_buf__DOT__wdata_i 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__empty_o)
            ? ((IData)(vlSelfRef.__VdfgRegularize_ha785dde0_1_26)
                ? (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_inp_buf__DOT__rdata_o)
                : (IData)(__VdfgRegularize_ha785dde0_1_11))
            : (IData)(__VdfgRegularize_ha785dde0_1_11));
    if ((0x00000010U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
        if ((8U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
            if ((4U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
                vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__sda_d = 1U;
            } else if ((2U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
                vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__sda_d = 1U;
            } else if ((1U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
                vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__sda_d = 0U;
            }
        } else if ((4U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
            if ((2U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
                if ((1U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
                    vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__sda_d 
                        = (1U & (VL_STREAML_FAST_III(8, 
                                                     ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__empty)
                                                       ? 0U
                                                       : 
                                                      (0x000000ffU 
                                                       & (((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__fifo_empty) 
                                                           & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_oup_buf__DOT__wvalid_i))
                                                           ? (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_oup_buf__DOT__wdata_i)
                                                           : 
                                                          ((0x19U 
                                                            >= 
                                                            (0x0000001fU 
                                                             & ((IData)(0x0000000dU) 
                                                                * 
                                                                (1U 
                                                                 & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)))))
                                                            ? 
                                                           (vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__storage 
                                                            >> 
                                                            (0x0000001fU 
                                                             & ((IData)(0x0000000dU) 
                                                                * 
                                                                (1U 
                                                                 & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)))))
                                                            : 0U)))), 0) 
                                 >> (7U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__bit_idx))));
                }
            } else if ((1U & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q)))) {
                vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__sda_d = 0U;
            }
        } else if ((2U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
            if ((1U & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q)))) {
                vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__sda_d = 0U;
            }
        } else {
            vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__sda_d = 0U;
        }
    } else if ((8U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
        if ((4U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
            if ((1U & (~ ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
                    vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__sda_d = 1U;
                }
            }
        } else if ((2U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
            if ((1U & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q)))) {
                vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__sda_d 
                    = vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__sda_q;
            }
        } else {
            vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__sda_d 
                = (1U & ((1U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))
                          ? (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__sda_q)
                          : (VL_STREAML_FAST_III(8, 
                                                 ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__empty)
                                                   ? 0U
                                                   : 
                                                  (0x000000ffU 
                                                   & (((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__fifo_empty) 
                                                       & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_oup_buf__DOT__wvalid_i))
                                                       ? (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_oup_buf__DOT__wdata_i)
                                                       : 
                                                      ((0x19U 
                                                        >= 
                                                        (0x0000001fU 
                                                         & ((IData)(0x0000000dU) 
                                                            * 
                                                            (1U 
                                                             & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)))))
                                                        ? 
                                                       (vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__storage 
                                                        >> 
                                                        (0x0000001fU 
                                                         & ((IData)(0x0000000dU) 
                                                            * 
                                                            (1U 
                                                             & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)))))
                                                        : 0U)))), 0) 
                             >> (7U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__bit_idx)))));
        }
    } else if ((4U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
        if ((2U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
            if ((1U & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q)))) {
                vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__sda_d = 0U;
            }
        } else {
            vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__sda_d = 0U;
        }
    } else if ((1U & (~ ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q) 
                         >> 1U)))) {
        if ((1U & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q)))) {
            vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__sda_d = 1U;
        }
    }
    vlSelfRef.__PVT__i2c_core__DOT__sda_fsm = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__sda_d) 
                                               & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__sda_d));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__fifo_incr_rptr 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_oup_buf__DOT__rvalid_o) 
           & ((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__under_rst)) 
              & (IData)(vlSelfRef.__PVT__i2c_core__DOT__tx_fifo_rready)));
    vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next = 0U;
    if ((IData)((0U != (0x000000ffU & vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_read)))) {
        if ((1U & vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_read)) {
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = ((0xffffff00U & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                   | ((((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_stretch_timeout__q) 
                          << 3U) | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_sda_interference__q) 
                                    << 2U)) | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_scl_interference__q) 
                                                << 1U) 
                                               | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_controller_halt__q))) 
                       << 4U) | ((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_rx_overflow__q) 
                                   << 3U) | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_acq_threshold__q) 
                                             << 2U)) 
                                 | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_rx_threshold__q) 
                                     << 1U) | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_fmt_threshold__q)))));
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = ((0xffff80ffU & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                   | (((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_host_timeout__q) 
                         << 6U) | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_unexp_stop__q) 
                                    << 5U) | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_acq_stretch__q) 
                                              << 4U))) 
                       | ((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_tx_threshold__q) 
                            << 3U) | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_tx_stretch__q) 
                                      << 2U)) | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_cmd_complete__q) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_sda_unstable__q)))) 
                      << 8U));
        } else if ((2U & vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_read)) {
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = ((0xffffff00U & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                   | ((((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_stretch_timeout__q) 
                          << 3U) | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_sda_interference__q) 
                                    << 2U)) | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_scl_interference__q) 
                                                << 1U) 
                                               | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_controller_halt__q))) 
                       << 4U) | ((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_rx_overflow__q) 
                                   << 3U) | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_acq_threshold__q) 
                                             << 2U)) 
                                 | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_rx_threshold__q) 
                                     << 1U) | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_fmt_threshold__q)))));
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = ((0xffff80ffU & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                   | (((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_host_timeout__q) 
                         << 6U) | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_unexp_stop__q) 
                                    << 5U) | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_acq_stretch__q) 
                                              << 4U))) 
                       | ((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_tx_threshold__q) 
                            << 3U) | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_tx_stretch__q) 
                                      << 2U)) | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_cmd_complete__q) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_sda_unstable__q)))) 
                      << 8U));
        } else if ((4U & vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_read)) {
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = (0xffff8000U & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next);
        } else if ((8U & vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_read)) {
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = (0xfffffffeU & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next);
        } else if ((0x00000010U & vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_read)) {
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = ((0xffffff80U & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                   | ((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_tx_stretch_ctrl_en__q) 
                        << 6U) | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_multi_controller_monitor_en__q) 
                                   << 5U) | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_ack_ctrl_en__q) 
                                             << 4U))) 
                      | ((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_nack_addr_after_timeout__q) 
                           << 3U) | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_llpbk__q) 
                                     << 2U)) | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_enabletarget__q) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_enablehost__q)))));
        } else if ((0x00000020U & vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_read)) {
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = ((0xfffffff0U & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                   | ((((IData)(vlSelfRef.__PVT__i2c_core__DOT__host_idle) 
                        << 3U) | (4U & ((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_oup_buf__DOT__rvalid_o)) 
                                        << 2U))) | 
                      ((2U & ((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__fifo_wready_o)) 
                              << 1U)) | (1U & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__fifo_wready_o))))));
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = ((0xffffff0fU & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                   | (((((2U >= (0x000001ffU & ((IData)(0x010cU) 
                                                - (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__fifo_depth_o)))) 
                         << 3U) | (4U & ((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__fifo_wready_o)) 
                                         << 2U))) | 
                       ((2U & ((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_oup_buf__DOT__rvalid_o)) 
                               << 1U)) | (IData)(vlSelfRef.__PVT__i2c_core__DOT__target_idle))) 
                      << 4U));
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = ((0xfffff8ffU & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                   | (((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__ack_ctrl_stretching) 
                       << 0x0000000aU) | (((2U & ((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_oup_buf__DOT__rvalid_o)) 
                                                  << 1U)) 
                                           | (1U & 
                                              (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_oup_buf__DOT__rvalid_o)))) 
                                          << 8U)));
        } else {
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = ((0x00000040U & vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_read)
                    ? ((0xffffff00U & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                       | (0x000000ffU & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_oup_buf__DOT__rdata_o)))
                    : (0xffffe000U & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next));
        }
    } else if ((IData)((0U != (0x0000ff00U & vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_read)))) {
        if ((0x00000100U & vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_read)) {
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = (0xfffffffcU & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next);
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = (0xfffffe7fU & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next);
        } else if ((0x00000200U & vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_read)) {
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = ((0xfffff000U & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                   | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_host_fifo_config_rx_thresh__q));
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = ((0xf000ffffU & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                   | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_host_fifo_config_fmt_thresh__q) 
                      << 0x00000010U));
        } else if ((0x00000400U & vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_read)) {
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = ((0xfffff000U & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                   | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_target_fifo_config_tx_thresh__q));
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = ((0xf000ffffU & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                   | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_target_fifo_config_acq_thresh__q) 
                      << 0x00000010U));
        } else if ((0x00000800U & vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_read)) {
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = ((0xfffff000U & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                   | (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__fifo_depth_o));
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = ((0xf000ffffU & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                   | ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__fifo_depth_o) 
                      << 0x00000010U));
        } else if ((0x00001000U & vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_read)) {
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = ((0xfffff000U & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                   | (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__fifo_depth_o));
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = ((0xf000ffffU & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                   | ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__fifo_depth_o) 
                      << 0x00000010U));
        } else if ((0x00002000U & vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_read)) {
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = ((0xfffffff8U & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                   | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ovrd_sdaval__q) 
                       << 2U) | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ovrd_sclval__q) 
                                  << 1U) | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ovrd_txovrden__q))));
        } else if ((0x00004000U & vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_read)) {
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = (((IData)(vlSelfRef.__PVT__i2c_core__DOT__sda_rx_val) 
                    << 0x00000010U) | (IData)(vlSelfRef.__PVT__i2c_core__DOT__scl_rx_val));
        } else {
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = ((0xffffe000U & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                   | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timing0_thigh__q));
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = ((0xe000ffffU & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                   | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timing0_tlow__q) 
                      << 0x00000010U));
        }
    } else if ((IData)((0U != (0x00ff0000U & vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_read)))) {
        if ((0x00010000U & vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_read)) {
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = ((0xfffffc00U & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                   | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timing1_t_r__q));
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = ((0xfe00ffffU & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                   | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timing1_t_f__q) 
                      << 0x00000010U));
        } else if ((0x00020000U & vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_read)) {
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = ((0xffffe000U & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                   | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timing2_tsu_sta__q));
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = ((0xe000ffffU & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                   | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timing2_thd_sta__q) 
                      << 0x00000010U));
        } else if ((0x00040000U & vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_read)) {
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = ((0xfffffe00U & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                   | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timing3_tsu_dat__q));
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = ((0xe000ffffU & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                   | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timing3_thd_dat__q) 
                      << 0x00000010U));
        } else if ((0x00080000U & vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_read)) {
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = ((0xffffe000U & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                   | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timing4_tsu_sto__q));
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = ((0xe000ffffU & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                   | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timing4_t_buf__q) 
                      << 0x00000010U));
        } else {
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = ((0x00100000U & vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_read)
                    ? (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timeout_ctrl_en__q) 
                        << 0x0000001fU) | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timeout_ctrl_mode__q) 
                                            << 0x0000001eU) 
                                           | vlSelfRef.u_reg__DOT____Vcellout__u_timeout_ctrl_val__q))
                    : ((0x00200000U & vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_read)
                        ? ((0xf0000000U & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                           | ((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_target_id_mask1__q) 
                                << 0x00000015U) | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_target_id_address1__q) 
                                                   << 0x0000000eU)) 
                              | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_target_id_mask0__q) 
                                  << 7U) | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_target_id_address0__q))))
                        : ((0x00400000U & vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_read)
                            ? ((0xfffff800U & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                               | (0x000007ffU & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_oup_buf__DOT__rdata_o)))
                            : (0xffffff00U & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next))));
        }
    } else if ((IData)((0U != (0xff000000U & vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_read)))) {
        if ((0x01000000U & vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_read)) {
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = ((0xfff00000U & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                   | vlSelfRef.u_reg__DOT____Vcellout__u_host_timeout_ctrl__q);
        } else if ((0x02000000U & vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_read)) {
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_target_timeout_ctrl_en__q) 
                    << 0x0000001fU) | vlSelfRef.u_reg__DOT____Vcellout__u_target_timeout_ctrl_val__q);
        } else if ((0x04000000U & vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_read)) {
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = ((0xffffff00U & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                   | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_target_nack_count__DOT__qs));
        } else if ((0x08000000U & vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_read)) {
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = ((0xfffffe00U & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                   | (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__auto_ack_cnt_q));
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = (0x7fffffffU & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next);
        } else {
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = ((0x10000000U & vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_read)
                    ? ((0xffffff00U & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                       | (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__input_byte))
                    : ((0x20000000U & vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_read)
                        ? (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_host_nack_handler_timeout_en__q) 
                            << 0x0000001fU) | vlSelfRef.u_reg__DOT____Vcellout__u_host_nack_handler_timeout_val__q)
                        : ((0x40000000U & vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_read)
                            ? ((0xfffffff0U & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                               | ((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_controller_events_arbitration_lost__q) 
                                    << 3U) | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_controller_events_bus_timeout__q) 
                                              << 2U)) 
                                  | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_controller_events_unhandled_nack_timeout__q) 
                                      << 1U) | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_controller_events_nack__q))))
                            : ((0xfffffff8U & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                               | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_target_events_arbitration_lost__q) 
                                   << 2U) | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_target_events_bus_timeout__q) 
                                              << 1U) 
                                             | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_target_events_tx_pending__q)))))));
        }
    } else {
        vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next = 0xffffffffU;
    }
    vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__stretch_tx 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_oup_buf__DOT__rvalid_o)) 
                 | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_target_events_tx_pending__q) 
                     | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_target_events_arbitration_lost__q) 
                        | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_target_events_bus_timeout__q))) 
                    | (1U < (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__fifo_depth_o)))));
    vlSelfRef.__VdfgRegularize_ha785dde0_1_12 = (1U 
                                                 & ((~ 
                                                     (((1U 
                                                        <= (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_oup_buf__DOT__depth_o)) 
                                                       & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__sram_read_in_prev_cyc_q)) 
                                                      | (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_oup_buf__DOT__full_o))) 
                                                    | ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_oup_buf__DOT__rvalid_o) 
                                                       & (IData)(vlSelfRef.__PVT__i2c_core__DOT__tx_fifo_rready))));
    if (vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__empty_o) {
        vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__sram_write_o 
            = (1U & (~ (IData)(vlSelfRef.__VdfgRegularize_ha785dde0_1_26)));
        vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__sram_req_o 
            = ((~ (IData)(vlSelfRef.__VdfgRegularize_ha785dde0_1_26)) 
               & (IData)(__VdfgRegularize_ha785dde0_1_14));
    } else {
        vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__sram_write_o 
            = (1U & (~ (IData)(vlSelfRef.__VdfgRegularize_ha785dde0_1_12)));
        vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__sram_req_o 
            = ((IData)(vlSelfRef.__VdfgRegularize_ha785dde0_1_12) 
               | (IData)(__VdfgRegularize_ha785dde0_1_14));
    }
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__fifo_incr_rptr) 
           & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q));
    vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__actively_stretching = 0U;
    vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__tcount_sel = 2U;
    vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__load_tcount = 0U;
    vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_d 
        = vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q;
    if ((0x00000010U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
        if ((8U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
            if ((4U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
                vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__actively_stretching = 0U;
                vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__tcount_sel = 2U;
                vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__load_tcount = 0U;
                vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_d = 0U;
            } else if ((2U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
                vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__actively_stretching = 0U;
                vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__tcount_sel = 2U;
                vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__load_tcount = 0U;
                vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_d = 0U;
            } else {
                if ((1U & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q)))) {
                    vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__actively_stretching 
                        = vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__stretch_rx;
                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__nack_timeout) 
                                  | ((IData)(vlSelfRef.__PVT__i2c_core__DOT__target_ack_ctrl_sw_nack) 
                                     & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__can_auto_ack))))))) {
                        if ((1U & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__stretch_rx)))) {
                            vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__tcount_sel = 0U;
                            vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__load_tcount = 1U;
                        }
                    }
                }
                if ((1U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
                    if ((1U == (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__tcount_q))) {
                        vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_d = 0x10U;
                    }
                } else if (((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__nack_timeout) 
                            | ((IData)(vlSelfRef.__PVT__i2c_core__DOT__target_ack_ctrl_sw_nack) 
                               & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__can_auto_ack))))) {
                    vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_d = 0x0dU;
                } else if ((1U & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__stretch_rx)))) {
                    vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_d = 0x19U;
                }
            }
        } else if ((4U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
            if ((2U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
                if ((1U & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q)))) {
                    vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__actively_stretching 
                        = vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__stretch_tx;
                    if ((1U & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__nack_timeout)))) {
                        if ((1U & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__stretch_tx)))) {
                            vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__tcount_sel = 0U;
                            vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__load_tcount = 1U;
                        }
                    }
                }
                if ((1U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
                    if ((1U == (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__tcount_q))) {
                        vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_d = 8U;
                    }
                } else if (vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__nack_timeout) {
                    vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_d = 0x0dU;
                } else if ((1U & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__stretch_tx)))) {
                    vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_d = 0x17U;
                }
            } else if ((1U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
                vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__actively_stretching 
                    = (2U >= (0x000001ffU & ((IData)(0x010cU) 
                                             - (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__fifo_depth_o))));
                if (vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__nack_timeout) {
                    vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_d = 0x0dU;
                } else if ((2U < (0x000001ffU & ((IData)(0x010cU) 
                                                 - (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__fifo_depth_o))))) {
                    vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_d 
                        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__rw_bit_q)
                            ? 0x16U : 0x0eU);
                }
            } else if ((1U == (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__tcount_q))) {
                vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_d = 4U;
            }
        } else if ((2U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
            if ((1U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
                vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__actively_stretching 
                    = (2U >= (0x000001ffU & ((IData)(0x010cU) 
                                             - (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__fifo_depth_o))));
                if ((1U & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__nack_timeout)))) {
                    if ((2U < (0x000001ffU & ((IData)(0x010cU) 
                                              - (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__fifo_depth_o))))) {
                        vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__tcount_sel = 0U;
                        vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__load_tcount = 1U;
                    }
                }
                if (vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__nack_timeout) {
                    vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_d = 0x0dU;
                } else if ((2U < (0x000001ffU & ((IData)(0x010cU) 
                                                 - (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__fifo_depth_o))))) {
                    vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_d = 0x14U;
                }
            } else if ((1U == (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__tcount_q))) {
                vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_d = 0x0eU;
            }
        } else if ((1U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
            if ((1U & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__scl_sync)))) {
                vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__tcount_sel = 1U;
                vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__load_tcount = 1U;
                vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_d = 0x12U;
            }
        } else if (vlSelfRef.__PVT__i2c_core__DOT__scl_sync) {
            vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_d = 0x11U;
        }
    } else if ((8U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
        if ((4U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
            if ((2U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
                if ((1U & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q)))) {
                    if ((8U == (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__bit_idx))) {
                        vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__tcount_sel = 1U;
                        vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__load_tcount = 1U;
                    }
                }
                if ((1U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
                    if (vlSelfRef.__PVT__i2c_core__DOT__scl_sync) {
                        vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_d = 0x0dU;
                    } else if ((1U == (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__tcount_q))) {
                        vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_d 
                            = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__nack_transaction_q)
                                ? 0x0dU : ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__stretch_rx)
                                            ? 0x18U
                                            : 0x10U));
                    }
                } else if ((8U == (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__bit_idx))) {
                    vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_d = 0x0fU;
                }
            } else if ((1U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
                vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_d = 0x0dU;
            } else if ((1U & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__scl_sync)))) {
                vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_d 
                    = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__host_ack)
                        ? 7U : 0x0dU);
            }
        } else if ((2U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
            if ((1U & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q)))) {
                if ((1U == (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__tcount_q))) {
                    if ((8U != (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__bit_idx))) {
                        vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__tcount_sel = 1U;
                        vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__load_tcount = 1U;
                    }
                }
            }
            if ((1U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
                if (vlSelfRef.__PVT__i2c_core__DOT__scl_sync) {
                    vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_d = 0x0cU;
                }
            } else if ((1U == (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__tcount_q))) {
                vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_d 
                    = ((8U == (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__bit_idx))
                        ? 0x0bU : 8U);
            }
        } else if ((1U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
            if ((1U & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__scl_sync)))) {
                vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__tcount_sel = 1U;
                vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__load_tcount = 1U;
                vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_d = 0x0aU;
            }
        } else if (vlSelfRef.__PVT__i2c_core__DOT__scl_sync) {
            vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_d = 9U;
        }
    } else if ((4U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
        if ((1U & (~ ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
                if ((1U & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__scl_sync)))) {
                    vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__tcount_sel = 1U;
                    vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__load_tcount = 1U;
                }
            }
        }
        if ((2U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
            if ((1U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
                vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_d 
                    = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__stretch_tx)
                        ? 0x16U : 8U);
            } else if ((1U == (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__tcount_q))) {
                vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_d 
                    = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__nack_transaction_q)
                        ? 0x0dU : ((2U >= (0x000001ffU 
                                           & ((IData)(0x010cU) 
                                              - (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__fifo_depth_o))))
                                    ? 0x15U : ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__rw_bit_q)
                                                ? 7U
                                                : 0x0eU)));
            }
        } else if ((1U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
            if ((1U & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__scl_sync)))) {
                vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_d = 6U;
            }
        } else if (vlSelfRef.__PVT__i2c_core__DOT__scl_sync) {
            vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_d = 5U;
        }
    } else if ((2U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
        if ((1U & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q)))) {
            if ((8U == (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__bit_idx))) {
                if (vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__address_match) {
                    vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__tcount_sel = 1U;
                    vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__load_tcount = 1U;
                }
            }
        }
        if ((1U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
            if (vlSelfRef.__PVT__i2c_core__DOT__scl_sync) {
                vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_d = 0x0dU;
            } else if ((1U == (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__tcount_q))) {
                vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_d 
                    = ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_nack_addr_after_timeout__q)
                        ? ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__nack_transaction_q)
                            ? 0x0dU : ((2U >= (0x000001ffU 
                                               & ((IData)(0x010cU) 
                                                  - (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__fifo_depth_o))))
                                        ? 0x13U : 4U))
                        : 4U);
            }
        } else if ((8U == (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__bit_idx))) {
            vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_d 
                = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__address_match)
                    ? 3U : 0x0dU);
        }
    } else if ((1U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
        if ((1U & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__scl_sync)))) {
            vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_d = 2U;
        }
    }
    if ((1U & ((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__target_idle)) 
               & (~ (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_enabletarget__q))))) {
        vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_d = 0U;
    } else if (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_enabletarget__q) 
                & (IData)(vlSelfRef.__PVT__i2c_core__DOT__start_detect))) {
        vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_d = 1U;
    } else if (((IData)(vlSelfRef.__PVT__i2c_core__DOT__stop_detect) 
                | (IData)(vlSelfRef.__PVT__i2c_core__DOT__event_bus_active_timeout))) {
        vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_d = 0U;
    } else if (vlSelfRef.__PVT__i2c_core__DOT__target_arbitration_lost) {
        vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_d = 0x0dU;
    }
    vlSelfRef.__PVT__i2c_core__DOT__event_tx_stretch = 0U;
    if ((0x00000010U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
        if ((8U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
            if ((4U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
                vlSelfRef.__PVT__i2c_core__DOT__event_tx_stretch = 0U;
            } else if ((2U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
                vlSelfRef.__PVT__i2c_core__DOT__event_tx_stretch = 0U;
            }
        } else if ((4U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
            if ((2U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
                if ((1U & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q)))) {
                    vlSelfRef.__PVT__i2c_core__DOT__event_tx_stretch = 1U;
                    if ((1U & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__nack_timeout)))) {
                        if ((1U & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__stretch_tx)))) {
                            vlSelfRef.__PVT__i2c_core__DOT__event_tx_stretch = 0U;
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__tcount_d 
        = vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__tcount_q;
    if (vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__load_tcount) {
        vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__tcount_d 
            = (0x0000ffffU & ((0U == (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__tcount_sel))
                               ? ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timing1_t_r__q) 
                                  + (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timing3_tsu_dat__q))
                               : ((1U == (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__tcount_sel))
                                   ? (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timing3_thd_dat__q)
                                   : 1U)));
        if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__tcount_sel)) 
                                   << 2U) | (((1U == (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__tcount_sel)) 
                                              << 1U) 
                                             | (0U 
                                                == (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__tcount_sel)))))))) {
            if ((0U != (((2U == (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__tcount_sel)) 
                         << 2U) | (((1U == (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__tcount_sel)) 
                                    << 1U) | (0U == (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__tcount_sel)))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: i2c_target_fsm.sv:132: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_i2c1.i2c_core.u_i2c_target_fsm.counter_functions: unique case, but multiple matches found for '2'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 2,(IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__tcount_sel));
                    Verilated::runFlushCallbacks();
                    VL_STOP_MT("verilogSourceFiles/i2c_target_fsm.sv", 132, "");
                }
            }
        }
    } else if (vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_enabletarget__q) {
        vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__tcount_d 
            = (0x0000ffffU & ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__tcount_q) 
                              - (IData)(1U)));
    }
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_tx_stretch__DOT__d 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__event_tx_stretch) 
           | (IData)(vlSelfRef.__PVT__i2c_core__DOT__intr_hw_tx_stretch__DOT__g_intr_status__DOT__test_q));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_arbiter__DOT__gen_normal_case__DOT__data_tree__BRA__137__03a115__KET__ 
        = (((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__sram_write_o) 
            << 0x00000016U) | ((0x003fe000U & (((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__empty_o)
                                                 ? 
                                                ((IData)(0x0080U) 
                                                 + 
                                                 (0x0000003fU 
                                                  & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__wptr_wrap_cnt_q)))
                                                 : 
                                                ((IData)(vlSelfRef.__VdfgRegularize_ha785dde0_1_12)
                                                  ? 
                                                 ((IData)(0x0080U) 
                                                  + 
                                                  (0x0000003fU 
                                                   & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__rptr_wrap_cnt_q)))
                                                  : 
                                                 ((IData)(0x0080U) 
                                                  + 
                                                  (0x0000003fU 
                                                   & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__wptr_wrap_cnt_q))))) 
                                               << 0x0000000dU)) 
                               | (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_inp_buf__DOT__rdata_o)));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_arbiter__DOT__req_i 
        = ((((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__sram_req_o) 
             << 3U) | ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__sram_req_o) 
                       << 2U)) | (((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__sram_req_o) 
                                   << 1U) | (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__sram_req_o)));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_arbiter__DOT__valid_o 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_arbiter__DOT__gen_normal_case__DOT__req_tree__BRA__1__KET__) 
           | ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__sram_req_o) 
              | (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__sram_req_o)));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_arbiter__DOT__gen_normal_case__DOT__prio_tree__BRA__5__KET__ 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__sram_req_o) 
           & ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_arbiter__DOT__gen_normal_case__DOT__prio_mask_q) 
              >> 2U));
    vlSelfRef.__PVT__u_reg__DOT__hw2reg[0U] = (0x00002aaaU 
                                               | ((((IData)(vlSelfRef.__PVT__u_reg__DOT__u_target_nack_count__DOT__de) 
                                                    << 0x0000001fU) 
                                                   | ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__auto_ack_cnt_q) 
                                                      << 0x00000016U)) 
                                                  | ((((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__input_byte) 
                                                       << 0x0000000eU) 
                                                      | ((IData)(vlSelfRef.__PVT__i2c_core__DOT__event_nak) 
                                                         << 0x0000000cU)) 
                                                     | ((((((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__unhandled_nak_cnt_expired) 
                                                            << 5U) 
                                                           | ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_controller_events_bus_timeout__DOT__de) 
                                                              << 3U)) 
                                                          | ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_controller_events_arbitration_lost__DOT__de) 
                                                             << 1U)) 
                                                         << 5U) 
                                                        | ((((IData)(vlSelfRef.__PVT__u_reg__DOT__u_target_events_tx_pending__DOT__de) 
                                                             << 4U) 
                                                            | ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_target_events_bus_timeout__DOT__de) 
                                                               << 2U)) 
                                                           | (IData)(vlSelfRef.__PVT__i2c_core__DOT__event_tx_arbitration_lost))))));
    vlSelfRef.__PVT__u_reg__DOT__hw2reg[1U] = ((0xfff80000U 
                                                & vlSelfRef.__PVT__u_reg__DOT__hw2reg[1U]) 
                                               | ((0x0007f800U 
                                                   & ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_oup_buf__DOT__rdata_o) 
                                                      << 0x0000000bU)) 
                                                  | ((0x00000700U 
                                                      & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_oup_buf__DOT__rdata_o)) 
                                                     | (0x000000ffU 
                                                        & ((IData)(1U) 
                                                           + (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_target_nack_count__q))))));
    vlSelfRef.__PVT__u_reg__DOT__hw2reg[1U] = ((0x0007ffffU 
                                                & vlSelfRef.__PVT__u_reg__DOT__hw2reg[1U]) 
                                               | ((IData)(
                                                          (((QData)((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__fifo_depth_o)) 
                                                            << 0x0000002cU) 
                                                           | (((QData)((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__fifo_depth_o)) 
                                                               << 0x00000020U) 
                                                              | (QData)((IData)(
                                                                                (((IData)(vlSelfRef.__PVT__i2c_core__DOT__scl_rx_val) 
                                                                                << 0x00000010U) 
                                                                                | (IData)(vlSelfRef.__PVT__i2c_core__DOT__sda_rx_val))))))) 
                                                  << 0x00000013U));
    vlSelfRef.__PVT__u_reg__DOT__hw2reg[2U] = (((IData)(
                                                        (((QData)((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__fifo_depth_o)) 
                                                          << 0x0000002cU) 
                                                         | (((QData)((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__fifo_depth_o)) 
                                                             << 0x00000020U) 
                                                            | (QData)((IData)(
                                                                              (((IData)(vlSelfRef.__PVT__i2c_core__DOT__scl_rx_val) 
                                                                                << 0x00000010U) 
                                                                               | (IData)(vlSelfRef.__PVT__i2c_core__DOT__sda_rx_val))))))) 
                                                >> 0x0000000dU) 
                                               | ((IData)(
                                                          ((((QData)((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__fifo_depth_o)) 
                                                             << 0x0000002cU) 
                                                            | (((QData)((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__fifo_depth_o)) 
                                                                << 0x00000020U) 
                                                               | (QData)((IData)(
                                                                                (((IData)(vlSelfRef.__PVT__i2c_core__DOT__scl_rx_val) 
                                                                                << 0x00000010U) 
                                                                                | (IData)(vlSelfRef.__PVT__i2c_core__DOT__sda_rx_val)))))) 
                                                           >> 0x00000020U)) 
                                                  << 0x00000013U));
    vlSelfRef.__PVT__u_reg__DOT__hw2reg[3U] = ((0xfffff800U 
                                                & vlSelfRef.__PVT__u_reg__DOT__hw2reg[3U]) 
                                               | ((IData)(
                                                          ((((QData)((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__fifo_depth_o)) 
                                                             << 0x0000002cU) 
                                                            | (((QData)((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__fifo_depth_o)) 
                                                                << 0x00000020U) 
                                                               | (QData)((IData)(
                                                                                (((IData)(vlSelfRef.__PVT__i2c_core__DOT__scl_rx_val) 
                                                                                << 0x00000010U) 
                                                                                | (IData)(vlSelfRef.__PVT__i2c_core__DOT__sda_rx_val)))))) 
                                                           >> 0x00000020U)) 
                                                  >> 0x0000000dU));
    vlSelfRef.__PVT__u_reg__DOT__hw2reg[3U] = ((0x000007ffU 
                                                & vlSelfRef.__PVT__u_reg__DOT__hw2reg[3U]) 
                                               | (0xfffff800U 
                                                  & (((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__fifo_depth_o) 
                                                      << 0x00000017U) 
                                                     | ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__fifo_depth_o) 
                                                        << 0x0000000bU))));
    vlSelfRef.__PVT__u_reg__DOT__hw2reg[4U] = ((0xfffff800U 
                                                & vlSelfRef.__PVT__u_reg__DOT__hw2reg[4U]) 
                                               | (0x000007ffU 
                                                  & ((0x000007f8U 
                                                      & ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_oup_buf__DOT__rdata_o) 
                                                         << 3U)) 
                                                     | ((0x000007ffU 
                                                         & ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__fifo_depth_o) 
                                                            >> 9U)) 
                                                        | ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__fifo_depth_o) 
                                                           >> 0x00000015U)))));
    vlSelfRef.__PVT__u_reg__DOT__hw2reg[4U] = ((0x000007ffU 
                                                & vlSelfRef.__PVT__u_reg__DOT__hw2reg[4U]) 
                                               | (0xfffff800U 
                                                  & (0x54000000U 
                                                     | ((((((((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_tx_stretch__DOT__d) 
                                                              << 5U) 
                                                             | ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_tx_threshold__DOT__d) 
                                                                << 3U)) 
                                                            | ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_acq_stretch__DOT__d) 
                                                               << 1U)) 
                                                           << 0x0000000fU) 
                                                          | (((((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_unexp_stop__DOT__d) 
                                                                << 4U) 
                                                               | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_unexp_stop__DOT__de) 
                                                                   << 3U) 
                                                                  | ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_host_timeout__DOT__d) 
                                                                     << 2U))) 
                                                              | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_host_timeout__DOT__de) 
                                                                  << 1U) 
                                                                 | (1U 
                                                                    & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__fifo_wready_o))))) 
                                                             << 0x0000000aU)) 
                                                         | (((((4U 
                                                                & ((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__fifo_wready_o)) 
                                                                   << 2U)) 
                                                               | ((2U 
                                                                   & ((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_oup_buf__DOT__rvalid_o)) 
                                                                      << 1U)) 
                                                                  | (IData)(vlSelfRef.__PVT__i2c_core__DOT__host_idle))) 
                                                              << 7U) 
                                                             | (((IData)(vlSelfRef.__PVT__i2c_core__DOT__target_idle) 
                                                                 << 6U) 
                                                                | (0x00000020U 
                                                                   & ((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_oup_buf__DOT__rvalid_o)) 
                                                                      << 5U)))) 
                                                            | ((((4U 
                                                                  & ((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__fifo_wready_o)) 
                                                                     << 2U)) 
                                                                 | (((2U 
                                                                      >= 
                                                                      (0x000001ffU 
                                                                       & ((IData)(0x010cU) 
                                                                          - (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__fifo_depth_o)))) 
                                                                     << 1U) 
                                                                    | (1U 
                                                                       & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_oup_buf__DOT__rvalid_o))))) 
                                                                << 2U) 
                                                               | ((2U 
                                                                   & ((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_oup_buf__DOT__rvalid_o)) 
                                                                      << 1U)) 
                                                                  | (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__ack_ctrl_stretching))))) 
                                                        << 0x0000000bU))));
    vlSelfRef.__PVT__u_reg__DOT__hw2reg[5U] = (0x000fffffU 
                                               & (0x00054400U 
                                                  | (((((((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_fmt_threshold__DOT__d) 
                                                          << 4U) 
                                                         | ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_threshold__DOT__d) 
                                                            << 2U)) 
                                                        | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_acq_threshold__DOT__d)) 
                                                       << 0x0000000fU) 
                                                      | (((((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_overflow__DOT__d) 
                                                            << 3U) 
                                                           | ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_overflow__DOT__de) 
                                                              << 2U)) 
                                                          | ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_controller_halt__DOT__d) 
                                                             << 1U)) 
                                                         << 0x0000000aU)) 
                                                     | ((((((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_scl_interference__DOT__d) 
                                                            << 4U) 
                                                           | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_scl_interference__DOT__de) 
                                                               << 3U) 
                                                              | ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_sda_interference__DOT__d) 
                                                                 << 2U))) 
                                                          | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_sda_interference__DOT__de) 
                                                              << 1U) 
                                                             | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_stretch_timeout__DOT__d))) 
                                                         << 5U) 
                                                        | ((((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_stretch_timeout__DOT__de) 
                                                             << 4U) 
                                                            | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_sda_unstable__DOT__d) 
                                                                << 3U) 
                                                               | ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_sda_unstable__DOT__de) 
                                                                  << 2U))) 
                                                           | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_cmd_complete__DOT__d) 
                                                               << 1U) 
                                                              | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_cmd_complete__DOT__de)))))));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__ram_arb_inp_data[2U] 
        = vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_arbiter__DOT__gen_normal_case__DOT__data_tree__BRA__137__03a115__KET__;
    __Vfunc_mubi4_bool_to_mubi__29__val = vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_arbiter__DOT__valid_o;
    __Vfunc_mubi4_bool_to_mubi__29__Vfuncout = ((IData)(__Vfunc_mubi4_bool_to_mubi__29__val)
                                                 ? 6U
                                                 : 9U);
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_1p__DOT__req_d 
        = __Vfunc_mubi4_bool_to_mubi__29__Vfuncout;
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_arbiter__DOT__gen_normal_case__DOT__gen_tree__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__gen_nodes__DOT__sel 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__sram_req_o)) 
                 | ((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_arbiter__DOT__gen_normal_case__DOT__prio_tree__BRA__5__KET__)) 
                    & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_arbiter__DOT__gen_normal_case__DOT__prio_tree__BRA__6__KET__))));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_arbiter__DOT__gen_normal_case__DOT__gen_tree__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_arbiter__DOT__gen_normal_case__DOT__req_tree__BRA__1__KET__)) 
                 | ((~ ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_arbiter__DOT__gen_normal_case__DOT__prio_tree__BRA__4__KET__) 
                        | (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_arbiter__DOT__gen_normal_case__DOT__prio_tree__BRA__3__KET__))) 
                    & ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_arbiter__DOT__gen_normal_case__DOT__prio_tree__BRA__6__KET__) 
                       | (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_arbiter__DOT__gen_normal_case__DOT__prio_tree__BRA__5__KET__)))));
    vlSelfRef.i2c_core__DOT__u_fifos__DOT____Vcellinp__u_ram_arbiter__data_i[0U] 
        = vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__ram_arb_inp_data
        [0U];
    vlSelfRef.i2c_core__DOT__u_fifos__DOT____Vcellinp__u_ram_arbiter__data_i[1U] 
        = vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__ram_arb_inp_data
        [1U];
    vlSelfRef.i2c_core__DOT__u_fifos__DOT____Vcellinp__u_ram_arbiter__data_i[2U] 
        = vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__ram_arb_inp_data
        [2U];
    vlSelfRef.i2c_core__DOT__u_fifos__DOT____Vcellinp__u_ram_arbiter__data_i[3U] 
        = vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__ram_arb_inp_data
        [3U];
    __Vfunc_mubi4_test_true_loose__21__val = vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_1p__DOT__req_d;
    __Vfunc_mubi4_test_true_loose__21__Vfuncout = (9U 
                                                   != (IData)(__Vfunc_mubi4_test_true_loose__21__val));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_1p__DOT__req_q_b 
        = __Vfunc_mubi4_test_true_loose__21__Vfuncout;
    if (vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_arbiter__DOT__gen_normal_case__DOT__gen_tree__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel) {
        if (vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_arbiter__DOT__gen_normal_case__DOT__gen_tree__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__gen_nodes__DOT__sel) {
            vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_arbiter__DOT__idx_o = 3U;
            vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_arbiter__DOT__data_o 
                = vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_arbiter__DOT__gen_normal_case__DOT__data_tree__BRA__160__03a138__KET__;
        } else {
            vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_arbiter__DOT__idx_o = 2U;
            vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_arbiter__DOT__data_o 
                = vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_arbiter__DOT__gen_normal_case__DOT__data_tree__BRA__137__03a115__KET__;
        }
    } else if (vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_arbiter__DOT__gen_normal_case__DOT__gen_tree__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel) {
        vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_arbiter__DOT__idx_o = 1U;
        vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_arbiter__DOT__data_o 
            = vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_arbiter__DOT__gen_normal_case__DOT__data_tree__BRA__114__03a92__KET__;
    } else {
        vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_arbiter__DOT__idx_o = 0U;
        vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_arbiter__DOT__data_o 
            = vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_arbiter__DOT__gen_normal_case__DOT__data_tree__BRA__91__03a69__KET__;
    }
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__sram_gnt_i 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__sram_req_o) 
           & ((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_arbiter__DOT__gen_normal_case__DOT__gen_tree__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel)) 
              & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_arbiter__DOT__gen_normal_case__DOT__gen_tree__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel)));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__sram_gnt_i 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__sram_req_o) 
           & ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_arbiter__DOT__gen_normal_case__DOT__gen_tree__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel) 
              & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_arbiter__DOT__gen_normal_case__DOT__gen_tree__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__gen_nodes__DOT__sel)));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_arbiter__DOT__gen_normal_case__DOT__sel_tree__BRA__3__KET__ 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_arbiter__DOT__gen_normal_case__DOT__gen_tree__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel)) 
                 & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_arbiter__DOT__gen_normal_case__DOT__gen_tree__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel))));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_arbiter__DOT__gen_normal_case__DOT__sel_tree__BRA__5__KET__ 
        = ((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_arbiter__DOT__gen_normal_case__DOT__gen_tree__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__gen_nodes__DOT__sel)) 
           & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_arbiter__DOT__gen_normal_case__DOT__gen_tree__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_arbiter__DOT__data_i[0U] 
        = vlSelfRef.i2c_core__DOT__u_fifos__DOT____Vcellinp__u_ram_arbiter__data_i
        [0U];
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_arbiter__DOT__data_i[1U] 
        = vlSelfRef.i2c_core__DOT__u_fifos__DOT____Vcellinp__u_ram_arbiter__data_i
        [1U];
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_arbiter__DOT__data_i[2U] 
        = vlSelfRef.i2c_core__DOT__u_fifos__DOT____Vcellinp__u_ram_arbiter__data_i
        [2U];
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_arbiter__DOT__data_i[3U] 
        = vlSelfRef.i2c_core__DOT__u_fifos__DOT____Vcellinp__u_ram_arbiter__data_i
        [3U];
    vlSelfRef.__VdfgRegularize_ha785dde0_1_10 = ((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__full_o)) 
                                                 & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__sram_gnt_i));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__sram_access 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__sram_gnt_i) 
           & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__sram_req_o));
    vlSelfRef.__VdfgRegularize_ha785dde0_1_20 = ((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__full_o)) 
                                                 & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__sram_gnt_i));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__sram_access 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__sram_gnt_i) 
           & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__sram_req_o));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__sram_gnt_i 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__sram_req_o) 
           & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_arbiter__DOT__gen_normal_case__DOT__sel_tree__BRA__3__KET__));
    __Vtableidx2 = ((((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_arbiter__DOT__gen_normal_case__DOT__sel_tree__BRA__3__KET__) 
                      << 7U) | (0x00000040U & ((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_arbiter__DOT__gen_normal_case__DOT__gen_tree__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel)) 
                                               << 6U))) 
                    | (((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_arbiter__DOT__gen_normal_case__DOT__prio_mask_q) 
                        << 2U) | ((2U & (((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_arbiter__DOT__gen_normal_case__DOT__gen_tree__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel)) 
                                          | (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_arbiter__DOT__gen_normal_case__DOT__sel_tree__BRA__5__KET__)) 
                                         << 1U)) | 
                                  (0U != (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_arbiter__DOT__req_i)))));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_arbiter__DOT__gen_normal_case__DOT__prio_mask_d 
        = Vsim__ConstPool__TABLE_ha18a9397_0[__Vtableidx2];
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__sram_gnt_i 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__sram_req_o) 
           & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_arbiter__DOT__gen_normal_case__DOT__sel_tree__BRA__5__KET__));
    __Vfunc_mubi4_bool_to_mubi__30__val = (1U & (vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_arbiter__DOT__data_o 
                                                 >> 0x00000016U));
    __Vfunc_mubi4_bool_to_mubi__30__Vfuncout = ((IData)(__Vfunc_mubi4_bool_to_mubi__30__val)
                                                 ? 6U
                                                 : 9U);
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_1p__DOT__write_d 
        = __Vfunc_mubi4_bool_to_mubi__30__Vfuncout;
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__fifo_incr_rptr 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_inp_buf__DOT__rvalid_o) 
           & ((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__under_rst)) 
              & ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__empty_o)
                  ? ((IData)(vlSelfRef.__VdfgRegularize_ha785dde0_1_29)
                      ? (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_oup_buf__DOT__wready_o)
                      : (IData)(vlSelfRef.__VdfgRegularize_ha785dde0_1_10))
                  : ((~ (IData)(vlSelfRef.__VdfgRegularize_ha785dde0_1_7)) 
                     & (IData)(vlSelfRef.__VdfgRegularize_ha785dde0_1_10)))));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__incr_wptr_i 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__sram_access) 
           & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__sram_write_o));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__incr_rptr_i 
        = ((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__sram_write_o)) 
           & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__sram_access));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__fifo_incr_rptr 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_inp_buf__DOT__rvalid_o) 
           & ((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__under_rst)) 
              & ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__empty_o)
                  ? ((IData)(vlSelfRef.__VdfgRegularize_ha785dde0_1_23)
                      ? (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_oup_buf__DOT__wready_o)
                      : (IData)(vlSelfRef.__VdfgRegularize_ha785dde0_1_20))
                  : ((~ (IData)(vlSelfRef.__VdfgRegularize_ha785dde0_1_17)) 
                     & (IData)(vlSelfRef.__VdfgRegularize_ha785dde0_1_20)))));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__incr_wptr_i 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__sram_access) 
           & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__sram_write_o));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__incr_rptr_i 
        = ((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__sram_write_o)) 
           & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__sram_access));
    vlSelfRef.__VdfgRegularize_ha785dde0_1_5 = ((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__full_o)) 
                                                & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__sram_gnt_i));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__sram_access 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__sram_gnt_i) 
           & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__sram_req_o));
    vlSelfRef.__VdfgRegularize_ha785dde0_1_15 = ((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__full_o)) 
                                                 & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__sram_gnt_i));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__sram_access 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__sram_gnt_i) 
           & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__sram_req_o));
    __Vfunc_mubi4_test_true_loose__22__val = vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_1p__DOT__write_d;
    __Vfunc_mubi4_test_true_loose__22__Vfuncout = (9U 
                                                   != (IData)(__Vfunc_mubi4_test_true_loose__22__val));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_1p__DOT__write_q_b 
        = __Vfunc_mubi4_test_true_loose__22__Vfuncout;
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_1p__DOT__alert_o 
        = (((([&]() {
                        vlSelfRef.__Vfunc_mubi4_test_invalid__32__val 
                            = vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_1p__DOT__req_d;
                        vlSelfRef.__Vfunc_mubi4_test_invalid__32__Vfuncout 
                            = (1U & (~ ((6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_invalid__32__val)) 
                                        | (9U == (IData)(vlSelfRef.__Vfunc_mubi4_test_invalid__32__val)))));
                    }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_invalid__32__Vfuncout)) 
             | ([&]() {
                        vlSelfRef.__Vfunc_mubi4_test_invalid__33__val 
                            = vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_1p__DOT__write_d;
                        vlSelfRef.__Vfunc_mubi4_test_invalid__33__Vfuncout 
                            = (1U & (~ ((6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_invalid__33__val)) 
                                        | (9U == (IData)(vlSelfRef.__Vfunc_mubi4_test_invalid__33__val)))));
                    }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_invalid__33__Vfuncout))) 
            | ([&]() {
                    vlSelfRef.__Vfunc_mubi4_test_invalid__34__val 
                        = vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_1p__DOT__rvalid_sram_q;
                    vlSelfRef.__Vfunc_mubi4_test_invalid__34__Vfuncout 
                        = (1U & (~ ((6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_invalid__34__val)) 
                                    | (9U == (IData)(vlSelfRef.__Vfunc_mubi4_test_invalid__34__val)))));
                }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_invalid__34__Vfuncout))) 
           | ([&]() {
                vlSelfRef.__Vfunc_mubi4_test_invalid__35__val 
                    = vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_1p__DOT__rvalid_sram_q;
                vlSelfRef.__Vfunc_mubi4_test_invalid__35__Vfuncout 
                    = (1U & (~ ((6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_invalid__35__val)) 
                                | (9U == (IData)(vlSelfRef.__Vfunc_mubi4_test_invalid__35__val)))));
            }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_invalid__35__Vfuncout)));
    __Vfunc_mubi4_and_hi__27__b = (0x0000000fU & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_1p__DOT__write_d)));
    __Vfunc_mubi4_and_hi__27__a = vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_1p__DOT__req_d;
    __Vfunc_mubi4_and__28__b = __Vfunc_mubi4_and_hi__27__b;
    __Vfunc_mubi4_and__28__a = __Vfunc_mubi4_and_hi__27__a;
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__Vfunc_mubi4_and__28__out = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6560665246724864163ull);
    __Vfunc_mubi4_and__28__a_in = __Vfunc_mubi4_and__28__a;
    __Vfunc_mubi4_and__28__b_in = __Vfunc_mubi4_and__28__b;
    vlSelfRef.__Vfunc_mubi4_and__28__out = ((0x0cU 
                                             & (IData)(vlSelfRef.__Vfunc_mubi4_and__28__out)) 
                                            | ((2U 
                                                & ((IData)(__Vfunc_mubi4_and__28__a_in) 
                                                   & (IData)(__Vfunc_mubi4_and__28__b_in))) 
                                               | (1U 
                                                  & ((IData)(__Vfunc_mubi4_and__28__a_in) 
                                                     | (IData)(__Vfunc_mubi4_and__28__b_in)))));
    vlSelfRef.__Vfunc_mubi4_and__28__out = ((3U & (IData)(vlSelfRef.__Vfunc_mubi4_and__28__out)) 
                                            | (((2U 
                                                 & (((IData)(__Vfunc_mubi4_and__28__a_in) 
                                                     | (IData)(__Vfunc_mubi4_and__28__b_in)) 
                                                    >> 2U)) 
                                                | (1U 
                                                   & (((IData)(__Vfunc_mubi4_and__28__a_in) 
                                                       & (IData)(__Vfunc_mubi4_and__28__b_in)) 
                                                      >> 2U))) 
                                               << 2U));
    __Vfunc_mubi4_and__28__Vfuncout = vlSelfRef.__Vfunc_mubi4_and__28__out;
    __Vfunc_mubi4_and_hi__27__Vfuncout = __Vfunc_mubi4_and__28__Vfuncout;
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_1p__DOT__rvalid_sram_d 
        = __Vfunc_mubi4_and_hi__27__Vfuncout;
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__fifo_incr_rptr) 
           & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__wptr_wrap_set 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__incr_wptr_i) 
           & (0x3dU == (0x0000003fU & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__wptr_wrap_cnt_q))));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__rptr_wrap_set 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__incr_rptr_i) 
           & (0x3dU == (0x0000003fU & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__rptr_wrap_cnt_q))));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__fifo_incr_rptr) 
           & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__wptr_wrap_set 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__incr_wptr_i) 
           & (0x0109U == (0x000001ffU & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__wptr_wrap_cnt_q))));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__rptr_wrap_set 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__incr_rptr_i) 
           & (0x0109U == (0x000001ffU & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__rptr_wrap_cnt_q))));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__fifo_incr_rptr 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_inp_buf__DOT__rvalid_o) 
           & ((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__under_rst)) 
              & ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__empty_o)
                  ? ((IData)(vlSelfRef.__VdfgRegularize_ha785dde0_1_32)
                      ? (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_oup_buf__DOT__wready_o)
                      : (IData)(vlSelfRef.__VdfgRegularize_ha785dde0_1_5))
                  : ((~ (IData)(vlSelfRef.__VdfgRegularize_ha785dde0_1_2)) 
                     & (IData)(vlSelfRef.__VdfgRegularize_ha785dde0_1_5)))));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__incr_wptr_i 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__sram_access) 
           & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__sram_write_o));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__incr_rptr_i 
        = ((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__sram_write_o)) 
           & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__sram_access));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__fifo_incr_rptr 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_inp_buf__DOT__rvalid_o) 
           & ((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__under_rst)) 
              & ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__empty_o)
                  ? ((IData)(vlSelfRef.__VdfgRegularize_ha785dde0_1_26)
                      ? (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_oup_buf__DOT__wready_o)
                      : (IData)(vlSelfRef.__VdfgRegularize_ha785dde0_1_15))
                  : ((~ (IData)(vlSelfRef.__VdfgRegularize_ha785dde0_1_12)) 
                     & (IData)(vlSelfRef.__VdfgRegularize_ha785dde0_1_15)))));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__incr_wptr_i 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__sram_access) 
           & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__sram_write_o));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__incr_rptr_i 
        = ((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__sram_write_o)) 
           & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__sram_access));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__fifo_incr_rptr) 
           & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__wptr_wrap_set 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__incr_wptr_i) 
           & (0x3dU == (0x0000003fU & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__wptr_wrap_cnt_q))));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__rptr_wrap_set 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__incr_rptr_i) 
           & (0x3dU == (0x0000003fU & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__rptr_wrap_cnt_q))));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__fifo_incr_rptr) 
           & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__wptr_wrap_set 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__incr_wptr_i) 
           & (0x3dU == (0x0000003fU & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__wptr_wrap_cnt_q))));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__rptr_wrap_set 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__incr_rptr_i) 
           & (0x3dU == (0x0000003fU & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__rptr_wrap_cnt_q))));
}

VL_ATTR_COLD void Vsim_i2c__Az2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c2__0(Vsim_i2c__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsim_i2c__Az2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c2__0\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ i2c_core__DOT__u_fifos__DOT__u_ram_1p__DOT____Vlvbound_h82fbffda__0;
    i2c_core__DOT__u_fifos__DOT__u_ram_1p__DOT____Vlvbound_h82fbffda__0 = 0;
    CData/*0:0*/ i2c_core__DOT__u_i2c_bus_monitor__DOT____VdfgExtracted_h5d458eba__0;
    i2c_core__DOT__u_i2c_bus_monitor__DOT____VdfgExtracted_h5d458eba__0 = 0;
    CData/*0:0*/ i2c_core__DOT__u_i2c_bus_monitor__DOT____VdfgRegularize_h91fc1e16_0_0;
    i2c_core__DOT__u_i2c_bus_monitor__DOT____VdfgRegularize_h91fc1e16_0_0 = 0;
    CData/*0:0*/ i2c_core__DOT__u_i2c_bus_monitor__DOT____VdfgRegularize_h91fc1e16_0_1;
    i2c_core__DOT__u_i2c_bus_monitor__DOT____VdfgRegularize_h91fc1e16_0_1 = 0;
    SData/*12:0*/ __VdfgRegularize_ha785dde0_1_1;
    __VdfgRegularize_ha785dde0_1_1 = 0;
    CData/*0:0*/ __VdfgRegularize_ha785dde0_1_4;
    __VdfgRegularize_ha785dde0_1_4 = 0;
    SData/*12:0*/ __VdfgRegularize_ha785dde0_1_6;
    __VdfgRegularize_ha785dde0_1_6 = 0;
    CData/*1:0*/ __VdfgRegularize_ha785dde0_1_21;
    __VdfgRegularize_ha785dde0_1_21 = 0;
    CData/*5:0*/ __Vfunc_extract_d2h_rsp_intg__36__Vfuncout;
    __Vfunc_extract_d2h_rsp_intg__36__Vfuncout = 0;
    VlWide<3>/*65:0*/ __Vfunc_extract_d2h_rsp_intg__36__tl;
    VL_ZERO_W(66, __Vfunc_extract_d2h_rsp_intg__36__tl);
    CData/*5:0*/ __Vfunc_extract_d2h_rsp_intg__36__payload;
    __Vfunc_extract_d2h_rsp_intg__36__payload = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_true_strict__41__Vfuncout;
    __Vfunc_mubi4_test_true_strict__41__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_strict__41__val;
    __Vfunc_mubi4_test_true_strict__41__val = 0;
    CData/*3:0*/ __Vfunc_mubi4_and_hi__42__Vfuncout;
    __Vfunc_mubi4_and_hi__42__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_and_hi__42__a;
    __Vfunc_mubi4_and_hi__42__a = 0;
    CData/*3:0*/ __Vfunc_mubi4_and_hi__42__b;
    __Vfunc_mubi4_and_hi__42__b = 0;
    CData/*3:0*/ __Vfunc_mubi4_bool_to_mubi__43__Vfuncout;
    __Vfunc_mubi4_bool_to_mubi__43__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_mubi4_bool_to_mubi__43__val;
    __Vfunc_mubi4_bool_to_mubi__43__val = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__44__Vfuncout;
    __Vfunc_mubi4_and__44__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__44__a;
    __Vfunc_mubi4_and__44__a = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__44__b;
    __Vfunc_mubi4_and__44__b = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__44__a_in;
    __Vfunc_mubi4_and__44__a_in = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__44__b_in;
    __Vfunc_mubi4_and__44__b_in = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_true_loose__49__Vfuncout;
    __Vfunc_mubi4_test_true_loose__49__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_loose__49__val;
    __Vfunc_mubi4_test_true_loose__49__val = 0;
    // Body
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_msb 
        = (1U & ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                 >> 1U));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_msb 
        = (1U & ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                 >> 1U));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_msb 
        = (1U & ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                 >> 1U));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_msb 
        = (1U & ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                 >> 1U));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__wptr_wrap_msb 
        = (1U & ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__wptr_wrap_cnt_q) 
                 >> 6U));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__rptr_wrap_msb 
        = (1U & ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__rptr_wrap_cnt_q) 
                 >> 6U));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_msb 
        = (1U & ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                 >> 1U));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_msb 
        = (1U & ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                 >> 1U));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_msb 
        = (1U & ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                 >> 1U));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_msb 
        = (1U & ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                 >> 1U));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__wptr_wrap_msb 
        = (1U & ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__wptr_wrap_cnt_q) 
                 >> 6U));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__rptr_wrap_msb 
        = (1U & ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__rptr_wrap_cnt_q) 
                 >> 6U));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_msb 
        = (1U & ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                 >> 1U));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_msb 
        = (1U & ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                 >> 1U));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_msb 
        = (1U & ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                 >> 1U));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_msb 
        = (1U & ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                 >> 1U));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__wptr_wrap_msb 
        = (1U & ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__wptr_wrap_cnt_q) 
                 >> 6U));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__rptr_wrap_msb 
        = (1U & ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__rptr_wrap_cnt_q) 
                 >> 6U));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_msb 
        = (1U & ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                 >> 1U));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_msb 
        = (1U & ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                 >> 1U));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_msb 
        = (1U & ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                 >> 1U));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_msb 
        = (1U & ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                 >> 1U));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__wptr_wrap_msb 
        = (1U & ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__wptr_wrap_cnt_q) 
                 >> 9U));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__rptr_wrap_msb 
        = (1U & ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__rptr_wrap_cnt_q) 
                 >> 9U));
    vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__bit_ack 
        = (8U == (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__bit_idx));
    vlSelfRef.__PVT__i2c_core__DOT__u_i2c_bus_monitor__DOT__bus_release_cnt_dec = 0U;
    vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__input_byte_clr = 0U;
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_inp_buf__DOT__clr_i 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__fifo_ctrl_qe) 
           & (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_fifo_ctrl_fmtrst__q));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_inp_buf__DOT__clr_i 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__fifo_ctrl_qe) 
           & (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_fifo_ctrl_rxrst__q));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_inp_buf__DOT__clr_i 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__fifo_ctrl_qe) 
           & (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_fifo_ctrl_txrst__q));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_inp_buf__DOT__clr_i 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__fifo_ctrl_qe) 
           & (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_fifo_ctrl_acqrst__q));
    vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__log_stop = 0U;
    vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__byte_decr = 0U;
    vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__bit_clr = 0U;
    vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__read_byte_clr = 0U;
    vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__bit_decr = 0U;
    vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__auto_ack_cnt_d 
        = vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__auto_ack_cnt_q;
    vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__rw_bit 
        = vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__rw_bit_q;
    __Vfunc_mubi4_test_true_loose__49__val = vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_1p__DOT__rvalid_sram_q;
    __Vfunc_mubi4_test_true_loose__49__Vfuncout = (9U 
                                                   != (IData)(__Vfunc_mubi4_test_true_loose__49__val));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__ram_rvalid 
        = __Vfunc_mubi4_test_true_loose__49__Vfuncout;
    vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__log_start = 0U;
    vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__scl_d = 1U;
    vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__shift_data_en = 0U;
    i2c_core__DOT__u_i2c_bus_monitor__DOT____VdfgRegularize_h91fc1e16_0_1 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__scl_sync) 
           & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_bus_monitor__DOT__scl_i_q));
    vlSelfRef.__PVT__i2c_core__DOT__u_i2c_sync_scl__DOT__gen_generic__DOT__u_impl_generic__DOT__u_sync_1__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
        = (1U & (IData)(((2ULL | (0x0000001ffffffffcULL 
                                  & ((QData)((IData)(
                                                     ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__cio_uart_rx_p2d) 
                                                      << 0x00000019U))) 
                                     << 2U))) >> (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_periph_insel_37__q))));
    vlSelfRef.__PVT__i2c_core__DOT__u_i2c_sync_sda__DOT__gen_generic__DOT__u_impl_generic__DOT__u_sync_1__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
        = (1U & (IData)(((2ULL | (0x0000001ffffffffcULL 
                                  & ((QData)((IData)(
                                                     ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__cio_uart_rx_p2d) 
                                                      << 0x00000019U))) 
                                     << 2U))) >> (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_pinmux_aon__DOT__u_reg__DOT____Vcellout__u_mio_periph_insel_36__q))));
    vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__address_match 
        = ((((((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__input_byte) 
               >> 1U) & (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_target_id_mask0__q)) 
             == (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_target_id_address0__q)) 
            & (0U != (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_target_id_mask0__q))) 
           | (((((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__input_byte) 
                 >> 1U) & (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_target_id_mask1__q)) 
               == (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_target_id_address1__q)) 
              & (0U != (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_target_id_mask1__q))));
    vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__ctrl_symbol_failed = 0U;
    vlSelfRef.__PVT__i2c_core__DOT__event_scl_interference = 0U;
    vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__expect_stop = 0U;
    vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__stretch_en = 0U;
    vlSelfRef.__PVT__i2c_core__DOT__event_controller_cmd_complete = 0U;
    vlSelfRef.__PVT__i2c_core__DOT__intr_hw_controller_halt__DOT__event_intr_i 
        = ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_controller_events_nack__q) 
           | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_controller_events_unhandled_nack_timeout__q) 
              | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_controller_events_arbitration_lost__q) 
                 | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_controller_events_bus_timeout__q))));
    vlSelfRef.__PVT__i2c_core__DOT__event_sda_unstable = 0U;
    vlSelfRef.__PVT__i2c_core__DOT__controller_transmitting = 0U;
    __VdfgRegularize_ha785dde0_1_21 = (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__error_q) 
                                        << 1U) | (1U 
                                                  & (~ (IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__outstanding_q))));
    vlSelfRef.__PVT__i2c_core__DOT__target_transmitting = 0U;
    vlSelfRef.__PVT__i2c_core__DOT__rx_fifo_wdata = 0U;
    vlSelfRef.__PVT__i2c_core__DOT__sda_released_but_low 
        = ((0U == (IData)(vlSelfRef.__PVT__i2c_core__DOT__bus_event_detect_cnt)) 
           & ((IData)(vlSelfRef.__PVT__i2c_core__DOT__scl_sync) 
              & ((IData)(vlSelfRef.__PVT__i2c_core__DOT__sda_fsm_q) 
                 != (IData)(vlSelfRef.__PVT__i2c_core__DOT__sda_sync))));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_inp_buf__DOT__wdata_i 
        = ((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_fdata_nakok__q) 
             << 0x0000000cU) | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_fdata_rcont__q) 
                                 << 0x0000000bU) | 
                                ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_fdata_readb__q) 
                                 << 0x0000000aU))) 
           | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_fdata_stop__q) 
               << 9U) | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_fdata_start__q) 
                          << 8U) | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_fdata_fbyte__q))));
    vlSelfRef.__PVT__i2c_core__DOT__tx_fifo_rready = 0U;
    vlSelfRef.__PVT__i2c_core__DOT__fmt_fifo_rready = 0U;
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__fifo_empty 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
           == (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__fifo_empty 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
           == (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__empty_o 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__rptr_wrap_cnt_q) 
           == (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__wptr_wrap_cnt_q));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__fifo_empty 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
           == (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__fifo_empty 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
           == (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__empty_o 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__rptr_wrap_cnt_q) 
           == (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__wptr_wrap_cnt_q));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__fifo_empty 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
           == (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q));
    vlSelfRef.__PVT__i2c_core__DOT__target_loopback 
        = ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_enabletarget__q) 
           & (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_llpbk__q));
    vlSelfRef.__PVT__i2c_core__DOT__rx_fifo_wvalid = 0U;
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_inp_buf__DOT__full_o 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
           == (2U ^ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_inp_buf__DOT__full_o 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
           == (2U ^ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__empty_o 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__rptr_wrap_cnt_q) 
           == (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__wptr_wrap_cnt_q));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_1p__DOT__rdata_sram = 0U;
    __Vfunc_mubi4_and_hi__42__b = vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_1p__DOT__rvalid_sram_q;
    __Vfunc_mubi4_bool_to_mubi__43__val = vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_1p__DOT__inst_req_q;
    __Vfunc_mubi4_bool_to_mubi__43__Vfuncout = ((IData)(__Vfunc_mubi4_bool_to_mubi__43__val)
                                                 ? 6U
                                                 : 9U);
    __Vfunc_mubi4_and_hi__42__a = __Vfunc_mubi4_bool_to_mubi__43__Vfuncout;
    __Vfunc_mubi4_and__44__b = __Vfunc_mubi4_and_hi__42__b;
    __Vfunc_mubi4_and__44__a = __Vfunc_mubi4_and_hi__42__a;
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__Vfunc_mubi4_and__44__out = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5377285622788366037ull);
    __Vfunc_mubi4_and__44__a_in = __Vfunc_mubi4_and__44__a;
    __Vfunc_mubi4_and__44__b_in = __Vfunc_mubi4_and__44__b;
    vlSelfRef.__Vfunc_mubi4_and__44__out = ((0x0cU 
                                             & (IData)(vlSelfRef.__Vfunc_mubi4_and__44__out)) 
                                            | ((2U 
                                                & ((IData)(__Vfunc_mubi4_and__44__a_in) 
                                                   & (IData)(__Vfunc_mubi4_and__44__b_in))) 
                                               | (1U 
                                                  & ((IData)(__Vfunc_mubi4_and__44__a_in) 
                                                     | (IData)(__Vfunc_mubi4_and__44__b_in)))));
    vlSelfRef.__Vfunc_mubi4_and__44__out = ((3U & (IData)(vlSelfRef.__Vfunc_mubi4_and__44__out)) 
                                            | (((2U 
                                                 & (((IData)(__Vfunc_mubi4_and__44__a_in) 
                                                     | (IData)(__Vfunc_mubi4_and__44__b_in)) 
                                                    >> 2U)) 
                                                | (1U 
                                                   & (((IData)(__Vfunc_mubi4_and__44__a_in) 
                                                       & (IData)(__Vfunc_mubi4_and__44__b_in)) 
                                                      >> 2U))) 
                                               << 2U));
    __Vfunc_mubi4_and__44__Vfuncout = vlSelfRef.__Vfunc_mubi4_and__44__out;
    __Vfunc_mubi4_and_hi__42__Vfuncout = __Vfunc_mubi4_and__44__Vfuncout;
    __Vfunc_mubi4_test_true_strict__41__val = __Vfunc_mubi4_and_hi__42__Vfuncout;
    __Vfunc_mubi4_test_true_strict__41__Vfuncout = 
        (6U == (IData)(__Vfunc_mubi4_test_true_strict__41__val));
    i2c_core__DOT__u_fifos__DOT__u_ram_1p__DOT____Vlvbound_h82fbffda__0 
        = __Vfunc_mubi4_test_true_strict__41__Vfuncout;
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_1p__DOT__rvalid_inst 
        = i2c_core__DOT__u_fifos__DOT__u_ram_1p__DOT____Vlvbound_h82fbffda__0;
    if (vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_1p__DOT__rvalid_inst) {
        vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_1p__DOT__rdata_sram 
            = vlSelfRef.i2c_core__DOT__u_fifos__DOT__u_ram_1p__DOT____Vcellout__gen_ram_inst__BRA__0__KET____DOT__u_mem__rdata_o;
    }
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__full_o 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__wptr_wrap_cnt_q) 
           == (0x40U ^ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__rptr_wrap_cnt_q)));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__full_o 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__wptr_wrap_cnt_q) 
           == (0x40U ^ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__rptr_wrap_cnt_q)));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__fifo_empty 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
           == (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_inp_buf__DOT__full_o 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
           == (2U ^ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__full_o 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__wptr_wrap_cnt_q) 
           == (0x40U ^ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__rptr_wrap_cnt_q)));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_oup_buf__DOT__full_o 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
           == (2U ^ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_oup_buf__DOT__full_o 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
           == (2U ^ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__fifo_empty 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
           == (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_oup_buf__DOT__full_o 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
           == (2U ^ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__empty_o 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__rptr_wrap_cnt_q) 
           == (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__wptr_wrap_cnt_q));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__fifo_empty 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
           == (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q));
    vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__nack_timeout 
        = ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_target_timeout_ctrl_en__q) 
           & (vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__stretch_active_cnt 
              >= vlSelfRef.u_reg__DOT____Vcellout__u_target_timeout_ctrl_val__q));
    vlSelfRef.__PVT__i2c_core__DOT__u_i2c_bus_monitor__DOT__bus_idling 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__scl_sync) 
           & ((IData)(vlSelfRef.__PVT__i2c_core__DOT__sda_sync) 
              == (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_bus_monitor__DOT__sda_i_q)));
    vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__can_auto_ack 
        = (1U & ((~ (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_ack_ctrl_en__q)) 
                 | (0U < (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__auto_ack_cnt_q))));
    i2c_core__DOT__u_i2c_bus_monitor__DOT____VdfgRegularize_h91fc1e16_0_0 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_bus_monitor__DOT__ctrl_det_count) 
           >= (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timing3_thd_dat__q));
    vlSelfRef.__PVT__i2c_core__DOT__u_i2c_bus_monitor__DOT__monitor_enable 
        = ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_enablehost__q) 
           | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_enabletarget__q) 
              | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_multi_controller_monitor_en__q)));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_inp_buf__DOT__full_o 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
           == (2U ^ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__full_o 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__wptr_wrap_cnt_q) 
           == (0x0200U ^ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__rptr_wrap_cnt_q)));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_oup_buf__DOT__full_o 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
           == (2U ^ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)));
    vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__d_ack 
        = ((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__rspfifo__DOT__wdepth_o)) 
           & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__outstanding_q));
    vlSelfRef.__PVT__u_reg__DOT__addr_hit = 0U;
    vlSelfRef.__PVT__u_reg__DOT__addr_hit = ((0xfffffff8U 
                                              & vlSelfRef.__PVT__u_reg__DOT__addr_hit) 
                                             | (((8U 
                                                  == 
                                                  (0x0000007cU 
                                                   & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                       << 5U) 
                                                      | (0x0000001cU 
                                                         & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                            >> 0x0000001bU))))) 
                                                 << 2U) 
                                                | (((4U 
                                                     == 
                                                     (0x0000007cU 
                                                      & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                          << 5U) 
                                                         | (0x0000001cU 
                                                            & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                               >> 0x0000001bU))))) 
                                                    << 1U) 
                                                   | (0U 
                                                      == 
                                                      (0x0000007cU 
                                                       & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                           << 5U) 
                                                          | (0x0000001cU 
                                                             & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                >> 0x0000001bU))))))));
    vlSelfRef.__PVT__u_reg__DOT__addr_hit = ((0xffffffc7U 
                                              & vlSelfRef.__PVT__u_reg__DOT__addr_hit) 
                                             | (((0x14U 
                                                  == 
                                                  (0x0000007cU 
                                                   & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                       << 5U) 
                                                      | (0x0000001cU 
                                                         & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                            >> 0x0000001bU))))) 
                                                 << 5U) 
                                                | (((0x10U 
                                                     == 
                                                     (0x0000007cU 
                                                      & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                          << 5U) 
                                                         | (0x0000001cU 
                                                            & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                               >> 0x0000001bU))))) 
                                                    << 4U) 
                                                   | ((0x0cU 
                                                       == 
                                                       (0x0000007cU 
                                                        & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                            << 5U) 
                                                           | (0x0000001cU 
                                                              & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                 >> 0x0000001bU))))) 
                                                      << 3U))));
    vlSelfRef.__PVT__u_reg__DOT__addr_hit = ((0xfffffe3fU 
                                              & vlSelfRef.__PVT__u_reg__DOT__addr_hit) 
                                             | (((0x20U 
                                                  == 
                                                  (0x0000007cU 
                                                   & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                       << 5U) 
                                                      | (0x0000001cU 
                                                         & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                            >> 0x0000001bU))))) 
                                                 << 8U) 
                                                | (((0x1cU 
                                                     == 
                                                     (0x0000007cU 
                                                      & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                          << 5U) 
                                                         | (0x0000001cU 
                                                            & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                               >> 0x0000001bU))))) 
                                                    << 7U) 
                                                   | ((0x18U 
                                                       == 
                                                       (0x0000007cU 
                                                        & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                            << 5U) 
                                                           | (0x0000001cU 
                                                              & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                 >> 0x0000001bU))))) 
                                                      << 6U))));
    vlSelfRef.__PVT__u_reg__DOT__addr_hit = ((0xfffff1ffU 
                                              & vlSelfRef.__PVT__u_reg__DOT__addr_hit) 
                                             | (((0x2cU 
                                                  == 
                                                  (0x0000007cU 
                                                   & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                       << 5U) 
                                                      | (0x0000001cU 
                                                         & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                            >> 0x0000001bU))))) 
                                                 << 0x0000000bU) 
                                                | (((0x28U 
                                                     == 
                                                     (0x0000007cU 
                                                      & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                          << 5U) 
                                                         | (0x0000001cU 
                                                            & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                               >> 0x0000001bU))))) 
                                                    << 0x0000000aU) 
                                                   | ((0x24U 
                                                       == 
                                                       (0x0000007cU 
                                                        & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                            << 5U) 
                                                           | (0x0000001cU 
                                                              & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                 >> 0x0000001bU))))) 
                                                      << 9U))));
    vlSelfRef.__PVT__u_reg__DOT__addr_hit = ((0xffff8fffU 
                                              & vlSelfRef.__PVT__u_reg__DOT__addr_hit) 
                                             | (((0x38U 
                                                  == 
                                                  (0x0000007cU 
                                                   & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                       << 5U) 
                                                      | (0x0000001cU 
                                                         & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                            >> 0x0000001bU))))) 
                                                 << 0x0000000eU) 
                                                | (((0x34U 
                                                     == 
                                                     (0x0000007cU 
                                                      & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                          << 5U) 
                                                         | (0x0000001cU 
                                                            & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                               >> 0x0000001bU))))) 
                                                    << 0x0000000dU) 
                                                   | ((0x30U 
                                                       == 
                                                       (0x0000007cU 
                                                        & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                            << 5U) 
                                                           | (0x0000001cU 
                                                              & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                 >> 0x0000001bU))))) 
                                                      << 0x0000000cU))));
    vlSelfRef.__PVT__u_reg__DOT__addr_hit = ((0xfffc7fffU 
                                              & vlSelfRef.__PVT__u_reg__DOT__addr_hit) 
                                             | (((0x44U 
                                                  == 
                                                  (0x0000007cU 
                                                   & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                       << 5U) 
                                                      | (0x0000001cU 
                                                         & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                            >> 0x0000001bU))))) 
                                                 << 0x00000011U) 
                                                | (((0x40U 
                                                     == 
                                                     (0x0000007cU 
                                                      & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                          << 5U) 
                                                         | (0x0000001cU 
                                                            & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                               >> 0x0000001bU))))) 
                                                    << 0x00000010U) 
                                                   | ((0x3cU 
                                                       == 
                                                       (0x0000007cU 
                                                        & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                            << 5U) 
                                                           | (0x0000001cU 
                                                              & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                 >> 0x0000001bU))))) 
                                                      << 0x0000000fU))));
    vlSelfRef.__PVT__u_reg__DOT__addr_hit = ((0xffe3ffffU 
                                              & vlSelfRef.__PVT__u_reg__DOT__addr_hit) 
                                             | (((0x50U 
                                                  == 
                                                  (0x0000007cU 
                                                   & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                       << 5U) 
                                                      | (0x0000001cU 
                                                         & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                            >> 0x0000001bU))))) 
                                                 << 0x00000014U) 
                                                | (((0x4cU 
                                                     == 
                                                     (0x0000007cU 
                                                      & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                          << 5U) 
                                                         | (0x0000001cU 
                                                            & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                               >> 0x0000001bU))))) 
                                                    << 0x00000013U) 
                                                   | ((0x48U 
                                                       == 
                                                       (0x0000007cU 
                                                        & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                            << 5U) 
                                                           | (0x0000001cU 
                                                              & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                 >> 0x0000001bU))))) 
                                                      << 0x00000012U))));
    vlSelfRef.__PVT__u_reg__DOT__addr_hit = ((0xff1fffffU 
                                              & vlSelfRef.__PVT__u_reg__DOT__addr_hit) 
                                             | (((0x5cU 
                                                  == 
                                                  (0x0000007cU 
                                                   & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                       << 5U) 
                                                      | (0x0000001cU 
                                                         & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                            >> 0x0000001bU))))) 
                                                 << 0x00000017U) 
                                                | (((0x58U 
                                                     == 
                                                     (0x0000007cU 
                                                      & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                          << 5U) 
                                                         | (0x0000001cU 
                                                            & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                               >> 0x0000001bU))))) 
                                                    << 0x00000016U) 
                                                   | ((0x54U 
                                                       == 
                                                       (0x0000007cU 
                                                        & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                            << 5U) 
                                                           | (0x0000001cU 
                                                              & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                 >> 0x0000001bU))))) 
                                                      << 0x00000015U))));
    vlSelfRef.__PVT__u_reg__DOT__addr_hit = ((0xf8ffffffU 
                                              & vlSelfRef.__PVT__u_reg__DOT__addr_hit) 
                                             | (((0x68U 
                                                  == 
                                                  (0x0000007cU 
                                                   & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                       << 5U) 
                                                      | (0x0000001cU 
                                                         & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                            >> 0x0000001bU))))) 
                                                 << 0x0000001aU) 
                                                | (((0x64U 
                                                     == 
                                                     (0x0000007cU 
                                                      & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                          << 5U) 
                                                         | (0x0000001cU 
                                                            & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                               >> 0x0000001bU))))) 
                                                    << 0x00000019U) 
                                                   | ((0x60U 
                                                       == 
                                                       (0x0000007cU 
                                                        & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                            << 5U) 
                                                           | (0x0000001cU 
                                                              & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                 >> 0x0000001bU))))) 
                                                      << 0x00000018U))));
    vlSelfRef.__PVT__u_reg__DOT__addr_hit = ((0xc7ffffffU 
                                              & vlSelfRef.__PVT__u_reg__DOT__addr_hit) 
                                             | (((0x74U 
                                                  == 
                                                  (0x0000007cU 
                                                   & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                       << 5U) 
                                                      | (0x0000001cU 
                                                         & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                            >> 0x0000001bU))))) 
                                                 << 0x0000001dU) 
                                                | (((0x70U 
                                                     == 
                                                     (0x0000007cU 
                                                      & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                          << 5U) 
                                                         | (0x0000001cU 
                                                            & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                               >> 0x0000001bU))))) 
                                                    << 0x0000001cU) 
                                                   | ((0x6cU 
                                                       == 
                                                       (0x0000007cU 
                                                        & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                            << 5U) 
                                                           | (0x0000001cU 
                                                              & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                 >> 0x0000001bU))))) 
                                                      << 0x0000001bU))));
    vlSelfRef.__PVT__u_reg__DOT__addr_hit = ((0x3fffffffU 
                                              & vlSelfRef.__PVT__u_reg__DOT__addr_hit) 
                                             | (((0x7cU 
                                                  == 
                                                  (0x0000007cU 
                                                   & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                       << 5U) 
                                                      | (0x0000001cU 
                                                         & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                            >> 0x0000001bU))))) 
                                                 << 0x0000001fU) 
                                                | ((0x78U 
                                                    == 
                                                    (0x0000007cU 
                                                     & ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[2U] 
                                                         << 5U) 
                                                        | (0x0000001cU 
                                                           & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                              >> 0x0000001bU))))) 
                                                   << 0x0000001eU)));
    vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_read 
        = vlSelfRef.__PVT__u_reg__DOT__addr_hit;
    vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write 
        = vlSelfRef.__PVT__u_reg__DOT__addr_hit;
    vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
        = ((IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_u_o__BRA__6__KET____DOT__dev_select)
            ? ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                << 9U) | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[0U] 
                          >> 0x00000017U)) : 0xffffffffU);
    vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__xact_for_us_d 
        = vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__xact_for_us_q;
    vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__xfer_for_us_d 
        = vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__xfer_for_us_q;
    vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__auto_stop_d 
        = vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__auto_stop_q;
    vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__load_tcount = 0U;
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_controller_halt__DOT__d 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__intr_hw_controller_halt__DOT__event_intr_i) 
           | (IData)(vlSelfRef.__PVT__i2c_core__DOT__intr_hw_controller_halt__DOT__g_intr_status__DOT__test_q));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1387[0U] 
        = (IData)((((QData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__reqsz_q)) 
                    << 0x00000039U) | (((QData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__reqid_q)) 
                                        << 0x00000031U) 
                                       | (((QData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__rdata_q)) 
                                           << 0x00000010U) 
                                          | (QData)((IData)(__VdfgRegularize_ha785dde0_1_21))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1387[1U] 
        = ((0xc0000000U & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1387[1U]) 
           | (IData)(((((QData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__reqsz_q)) 
                        << 0x00000039U) | (((QData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__reqid_q)) 
                                            << 0x00000031U) 
                                           | (((QData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__rdata_q)) 
                                               << 0x00000010U) 
                                              | (QData)((IData)(__VdfgRegularize_ha785dde0_1_21))))) 
                      >> 0x00000020U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1387[1U] 
        = ((0x3fffffffU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1387[1U]) 
           | ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__rspop_q) 
              << 0x0000001eU));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1387[2U] 
        = (1U & ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__rspop_q) 
                 >> 2U));
    if ((0x00000010U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_q))) {
        if ((8U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_q))) {
            vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__log_stop = 0U;
            vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__byte_decr = 0U;
            vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__bit_clr = 0U;
            vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__read_byte_clr = 0U;
            vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__bit_decr = 0U;
            vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__log_start = 0U;
            vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__shift_data_en = 0U;
            vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__ctrl_symbol_failed = 0U;
            vlSelfRef.__PVT__i2c_core__DOT__event_scl_interference = 0U;
            vlSelfRef.__PVT__i2c_core__DOT__event_controller_cmd_complete = 0U;
            vlSelfRef.__PVT__i2c_core__DOT__event_sda_unstable = 0U;
            vlSelfRef.__PVT__i2c_core__DOT__controller_transmitting = 0U;
        } else if ((4U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_q))) {
            if ((2U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_q))) {
                vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__log_stop = 0U;
                vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__byte_decr = 0U;
                vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__bit_clr = 0U;
                vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__read_byte_clr = 0U;
                vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__bit_decr = 0U;
                vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__log_start = 0U;
                vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__shift_data_en = 0U;
                vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__ctrl_symbol_failed = 0U;
                vlSelfRef.__PVT__i2c_core__DOT__event_scl_interference = 0U;
                vlSelfRef.__PVT__i2c_core__DOT__event_controller_cmd_complete = 0U;
                vlSelfRef.__PVT__i2c_core__DOT__event_sda_unstable = 0U;
            } else if ((1U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_q))) {
                vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__log_stop = 0U;
                vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__byte_decr = 0U;
                vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__bit_clr = 0U;
                vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__read_byte_clr = 0U;
                vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__bit_decr = 0U;
                vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__log_start = 0U;
                vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__shift_data_en = 0U;
                vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__ctrl_symbol_failed = 0U;
                vlSelfRef.__PVT__i2c_core__DOT__event_scl_interference = 0U;
                vlSelfRef.__PVT__i2c_core__DOT__event_controller_cmd_complete = 0U;
                vlSelfRef.__PVT__i2c_core__DOT__event_sda_unstable = 0U;
            } else if ((1U == (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__tcount_q))) {
                if ((1U != (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__byte_index))) {
                    vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__byte_decr = 1U;
                }
            }
            vlSelfRef.__PVT__i2c_core__DOT__controller_transmitting 
                = ((1U & (~ ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_q) 
                             >> 1U))) && (1U & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_q))));
        } else {
            if ((1U & (~ ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_q) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_q))) {
                    if ((1U == (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__tcount_q))) {
                        if ((0U == (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__bit_index))) {
                            vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__bit_clr = 1U;
                            vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__read_byte_clr = 1U;
                        }
                        if ((0U != (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__bit_index))) {
                            vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__bit_decr = 1U;
                        }
                    }
                }
                if ((1U & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_q)))) {
                    if ((1U & (~ (((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__scl_sync)) 
                                   & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__scl_i_q))) 
                                  & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__stretch_predict_cnt_expired))))) {
                        if ((1U & (~ (((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__scl_i_q) 
                                       & (IData)(vlSelfRef.__PVT__i2c_core__DOT__scl_sync)) 
                                      & ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__sda_i_q) 
                                         != (IData)(vlSelfRef.__PVT__i2c_core__DOT__sda_sync)))))) {
                            if (((1U == (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__tcount_q)) 
                                 | ((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__scl_sync)) 
                                    & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__scl_i_q)))) {
                                vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__shift_data_en = 1U;
                            }
                        }
                    }
                }
            }
            if ((2U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_q))) {
                if ((1U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_q))) {
                    if (((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__scl_i_q) 
                         & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__scl_sync)))) {
                        vlSelfRef.__PVT__i2c_core__DOT__event_scl_interference = 1U;
                    }
                    if ((((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__scl_i_q) 
                          & (IData)(vlSelfRef.__PVT__i2c_core__DOT__scl_sync)) 
                         & ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__sda_i_q) 
                            != (IData)(vlSelfRef.__PVT__i2c_core__DOT__sda_sync)))) {
                        vlSelfRef.__PVT__i2c_core__DOT__event_sda_unstable = 1U;
                    }
                }
                vlSelfRef.__PVT__i2c_core__DOT__controller_transmitting = 1U;
            } else if ((1U & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_q)))) {
                if (((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__scl_i_q) 
                     & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__scl_sync)))) {
                    vlSelfRef.__PVT__i2c_core__DOT__event_scl_interference = 1U;
                }
                if ((((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__scl_i_q) 
                      & (IData)(vlSelfRef.__PVT__i2c_core__DOT__scl_sync)) 
                     & ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__sda_i_q) 
                        != (IData)(vlSelfRef.__PVT__i2c_core__DOT__sda_sync)))) {
                    vlSelfRef.__PVT__i2c_core__DOT__event_sda_unstable = 1U;
                }
            }
        }
        if ((1U & (~ ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_q) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_q) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_q))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_q))) {
                        vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__stretch_en = 1U;
                    }
                } else if ((1U & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_q)))) {
                    vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__stretch_en = 1U;
                }
            }
        }
        vlSelfRef.__PVT__i2c_core__DOT__host_idle = 
            ((1U & ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_q) 
                    >> 3U)) || ((1U & ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_q) 
                                       >> 2U)) && (
                                                   (1U 
                                                    & ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_q) 
                                                       >> 1U)) 
                                                   || (1U 
                                                       & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_q)))));
    } else {
        if ((1U & (~ ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_q) 
                      >> 3U)))) {
            if ((4U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_q))) {
                if ((2U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_q))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_q))) {
                        if ((1U & (~ ((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__sda_sync)) 
                                      & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__scl_sync)))))) {
                            if (vlSelfRef.__PVT__i2c_core__DOT__sda_sync) {
                                vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__log_stop = 1U;
                            }
                        }
                        if ((1U & ((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__sda_sync)) 
                                   & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__scl_sync))))) {
                            vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__ctrl_symbol_failed = 1U;
                        }
                        vlSelfRef.__PVT__i2c_core__DOT__event_controller_cmd_complete = 1U;
                    } else if (((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__scl_sync)) 
                                & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__scl_i_q))) {
                        vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__ctrl_symbol_failed = 1U;
                    }
                }
            } else if ((2U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_q))) {
                if ((1U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_q))) {
                    if ((((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__trans_started) 
                          & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__scl_sync))) 
                         & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__scl_i_q))) {
                        vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__ctrl_symbol_failed = 1U;
                    }
                    if ((1U & (~ (((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__trans_started) 
                                   & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__scl_sync))) 
                                  & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__scl_i_q))))) {
                        if ((1U == (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__tcount_q))) {
                            vlSelfRef.__PVT__i2c_core__DOT__event_controller_cmd_complete 
                                = vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__pend_restart;
                        }
                    }
                }
            }
            if ((1U & (~ ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_q) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_q))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_q))) {
                        if ((1U & (~ (((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__trans_started) 
                                       & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__scl_sync))) 
                                      & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__scl_i_q))))) {
                            if ((1U == (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__tcount_q))) {
                                vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__log_start = 1U;
                            }
                        }
                    }
                }
            }
        }
        if ((8U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_q))) {
            if ((1U & (~ ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_q) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_q))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_q))) {
                        if ((1U == (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__tcount_q))) {
                            if ((0U == (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__bit_index))) {
                                vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__bit_clr = 1U;
                            }
                            if ((0U != (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__bit_index))) {
                                vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__bit_decr = 1U;
                            }
                        }
                    }
                }
                vlSelfRef.__PVT__i2c_core__DOT__controller_transmitting = 1U;
            }
            if ((4U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_q))) {
                if ((1U & (~ ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_q) 
                              >> 1U)))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_q))) {
                        if (((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__scl_i_q) 
                             & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__scl_sync)))) {
                            vlSelfRef.__PVT__i2c_core__DOT__event_scl_interference = 1U;
                        }
                        vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__stretch_en = 1U;
                        if ((((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__scl_i_q) 
                              & (IData)(vlSelfRef.__PVT__i2c_core__DOT__scl_sync)) 
                             & ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__sda_i_q) 
                                != (IData)(vlSelfRef.__PVT__i2c_core__DOT__sda_sync)))) {
                            vlSelfRef.__PVT__i2c_core__DOT__event_sda_unstable = 1U;
                        }
                    }
                }
            } else if ((2U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_q))) {
                if ((1U & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_q)))) {
                    if (((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__scl_i_q) 
                         & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__scl_sync)))) {
                        vlSelfRef.__PVT__i2c_core__DOT__event_scl_interference = 1U;
                    }
                    vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__stretch_en = 1U;
                    if ((((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__scl_i_q) 
                          & (IData)(vlSelfRef.__PVT__i2c_core__DOT__scl_sync)) 
                         & ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__sda_i_q) 
                            != (IData)(vlSelfRef.__PVT__i2c_core__DOT__sda_sync)))) {
                        vlSelfRef.__PVT__i2c_core__DOT__event_sda_unstable = 1U;
                    }
                }
            }
        } else if ((4U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_q))) {
            if ((1U & (~ ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_q) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_q)))) {
                    if (((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__scl_i_q) 
                         & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__scl_sync)))) {
                        vlSelfRef.__PVT__i2c_core__DOT__event_scl_interference = 1U;
                    }
                }
            }
            if ((2U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_q))) {
                if ((1U & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_q)))) {
                    vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__stretch_en = 1U;
                    vlSelfRef.__PVT__i2c_core__DOT__controller_transmitting = 1U;
                }
            } else {
                vlSelfRef.__PVT__i2c_core__DOT__controller_transmitting = 1U;
            }
        } else if ((2U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_q))) {
            if ((1U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_q))) {
                vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__stretch_en 
                    = vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__trans_started;
                vlSelfRef.__PVT__i2c_core__DOT__controller_transmitting = 1U;
            }
        }
        vlSelfRef.__PVT__i2c_core__DOT__host_idle = 
            ((1U & (~ ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_q) 
                       >> 3U))) && ((1U & (~ ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_q) 
                                              >> 2U))) 
                                    && ((1U & (~ ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_q) 
                                                  >> 1U))) 
                                        && ((1U & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_q))) 
                                            && (1U 
                                                & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__trans_started)))))));
    }
    vlSelfRef.__PVT__i2c_core__DOT__intr_hw_sda_interference__DOT__event_intr_i 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__controller_transmitting) 
           & (IData)(vlSelfRef.__PVT__i2c_core__DOT__sda_released_but_low));
    if ((0x00000010U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
        if ((8U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
            if ((4U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
                vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__input_byte_clr = 0U;
                vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__auto_ack_cnt_d = 0U;
                vlSelfRef.__PVT__i2c_core__DOT__target_transmitting = 0U;
            } else if ((2U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
                vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__input_byte_clr = 0U;
                vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__auto_ack_cnt_d = 0U;
                vlSelfRef.__PVT__i2c_core__DOT__target_transmitting = 0U;
            } else if ((1U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
                vlSelfRef.__PVT__i2c_core__DOT__target_transmitting = 1U;
            }
            vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__scl_d 
                = ((1U & ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q) 
                          >> 2U)) || (1U & ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q) 
                                            >> 1U)));
        } else {
            if ((1U & (~ ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
                    if ((1U & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q)))) {
                        if ((1U == (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__tcount_q))) {
                            vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__auto_ack_cnt_d 
                                = (0x000001ffU & ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__auto_ack_cnt_q) 
                                                  - (IData)(1U)));
                        }
                    }
                }
            }
            if ((4U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
                vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__scl_d = 0U;
                if ((2U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
                        vlSelfRef.__PVT__i2c_core__DOT__target_transmitting = 1U;
                    }
                } else if ((1U & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q)))) {
                    vlSelfRef.__PVT__i2c_core__DOT__target_transmitting = 1U;
                }
            } else if ((2U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
                if ((1U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
                    vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__scl_d = 0U;
                }
                if ((1U & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q)))) {
                    vlSelfRef.__PVT__i2c_core__DOT__target_transmitting = 1U;
                }
            } else {
                vlSelfRef.__PVT__i2c_core__DOT__target_transmitting = 1U;
            }
        }
    } else {
        if ((1U & (~ ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q) 
                              >> 1U)))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
                        if ((1U & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__scl_sync)))) {
                            vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__input_byte_clr = 1U;
                        }
                        vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__auto_ack_cnt_d = 0U;
                    }
                    if ((1U & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q)))) {
                        vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__scl_d = 1U;
                    }
                }
            }
        }
        if ((8U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
            if ((1U & (~ ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
                    if ((1U & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q)))) {
                        vlSelfRef.__PVT__i2c_core__DOT__target_transmitting = 1U;
                    }
                } else {
                    vlSelfRef.__PVT__i2c_core__DOT__target_transmitting = 1U;
                }
            }
        } else if ((4U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
            if ((2U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
                if ((1U & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q)))) {
                    vlSelfRef.__PVT__i2c_core__DOT__target_transmitting = 1U;
                }
            } else {
                vlSelfRef.__PVT__i2c_core__DOT__target_transmitting = 1U;
            }
        }
    }
    vlSelfRef.__PVT__i2c_core__DOT__target_arbitration_lost 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__target_transmitting) 
           & (IData)(vlSelfRef.__PVT__i2c_core__DOT__sda_released_but_low));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_inp_buf__DOT__wready_o 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_inp_buf__DOT__full_o)) 
                 & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__under_rst))));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_inp_buf__DOT__wready_o 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_inp_buf__DOT__full_o)) 
                 & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__under_rst))));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_inp_buf__DOT__wready_o 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_inp_buf__DOT__full_o)) 
                 & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__under_rst))));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_oup_buf__DOT__depth_o 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_oup_buf__DOT__full_o)
            ? 2U : (3U & (((1U & ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                                  >> 1U)) == (1U & 
                                              ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                               >> 1U)))
                           ? ((1U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q)) 
                              - (1U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)))
                           : (((IData)(2U) - (1U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))) 
                              + (1U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q))))));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_oup_buf__DOT__wready_o 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_oup_buf__DOT__full_o)) 
                 & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__under_rst))));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_oup_buf__DOT__depth_o 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_oup_buf__DOT__full_o)
            ? 2U : (3U & (((1U & ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                                  >> 1U)) == (1U & 
                                              ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                               >> 1U)))
                           ? ((1U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q)) 
                              - (1U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)))
                           : (((IData)(2U) - (1U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))) 
                              + (1U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q))))));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_oup_buf__DOT__wready_o 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_oup_buf__DOT__full_o)) 
                 & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__under_rst))));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_oup_buf__DOT__depth_o 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_oup_buf__DOT__full_o)
            ? 2U : (3U & (((1U & ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                                  >> 1U)) == (1U & 
                                              ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                               >> 1U)))
                           ? ((1U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q)) 
                              - (1U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)))
                           : (((IData)(2U) - (1U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))) 
                              + (1U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q))))));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_oup_buf__DOT__wready_o 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_oup_buf__DOT__full_o)) 
                 & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__under_rst))));
    i2c_core__DOT__u_i2c_bus_monitor__DOT____VdfgExtracted_h5d458eba__0 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_bus_monitor__DOT__bus_idling) 
           & (0U < vlSelfRef.u_reg__DOT____Vcellout__u_host_timeout_ctrl__q));
    vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__ack_ctrl_stretching = 0U;
    vlSelfRef.__PVT__i2c_core__DOT__u_i2c_bus_monitor__DOT__start_det_trigger 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_bus_monitor__DOT__monitor_enable) 
           & ((IData)(i2c_core__DOT__u_i2c_bus_monitor__DOT____VdfgRegularize_h91fc1e16_0_1) 
              & ((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__sda_sync)) 
                 & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_bus_monitor__DOT__sda_i_q))));
    vlSelfRef.__PVT__i2c_core__DOT__u_i2c_bus_monitor__DOT__stop_det_trigger 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_bus_monitor__DOT__monitor_enable) 
           & ((IData)(i2c_core__DOT__u_i2c_bus_monitor__DOT____VdfgRegularize_h91fc1e16_0_1) 
              & ((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_bus_monitor__DOT__sda_i_q)) 
                 & (IData)(vlSelfRef.__PVT__i2c_core__DOT__sda_sync))));
    vlSelfRef.__PVT__i2c_core__DOT__start_detect = 
        ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_bus_monitor__DOT__monitor_enable) 
         & ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_bus_monitor__DOT__start_det_pending) 
            & (IData)(i2c_core__DOT__u_i2c_bus_monitor__DOT____VdfgRegularize_h91fc1e16_0_0)));
    vlSelfRef.__PVT__i2c_core__DOT__stop_detect = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_bus_monitor__DOT__monitor_enable) 
                                                   & ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_bus_monitor__DOT__stop_det_pending) 
                                                      & (IData)(i2c_core__DOT__u_i2c_bus_monitor__DOT____VdfgRegularize_h91fc1e16_0_0)));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_inp_buf__DOT__wready_o 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_inp_buf__DOT__full_o)) 
                 & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__under_rst))));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_oup_buf__DOT__wready_o 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_oup_buf__DOT__full_o)) 
                 & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__under_rst))));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_oup_buf__DOT__depth_o 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_oup_buf__DOT__full_o)
            ? 2U : (3U & (((1U & ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                                  >> 1U)) == (1U & 
                                              ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                               >> 1U)))
                           ? ((1U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q)) 
                              - (1U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)))
                           : (((IData)(2U) - (1U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))) 
                              + (1U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q))))));
    if ((2U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_bus_monitor__DOT__state_q))) {
        vlSelfRef.__PVT__i2c_core__DOT__u_i2c_bus_monitor__DOT__bus_release_cnt_dec = 1U;
    } else if ((1U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_bus_monitor__DOT__state_q))) {
        vlSelfRef.__PVT__i2c_core__DOT__u_i2c_bus_monitor__DOT__bus_release_cnt_dec 
            = (1U & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__scl_sync)));
    }
    if ((1U & (~ ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q) 
                  >> 4U)))) {
        if ((1U & (~ ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
                    if ((1U & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q)))) {
                        vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__rw_bit 
                            = (1U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__input_byte));
                        if ((8U == (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__bit_idx))) {
                            if (vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__address_match) {
                                vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__xfer_for_us_d = 1U;
                            }
                        }
                    }
                } else {
                    vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__xfer_for_us_d = 0U;
                }
            }
        }
        if ((8U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
            if ((4U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
                if ((1U & (~ ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q) 
                              >> 1U)))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
                        vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__expect_stop = 1U;
                    }
                }
            }
        }
    }
    if ((0x00000010U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
        if ((8U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
            if ((4U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
                vlSelfRef.__PVT__i2c_core__DOT__tx_fifo_rready = 0U;
                vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__xact_for_us_d = 0U;
                vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__ack_ctrl_stretching = 0U;
            } else if ((2U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
                vlSelfRef.__PVT__i2c_core__DOT__tx_fifo_rready = 0U;
                vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__xact_for_us_d = 0U;
                vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__ack_ctrl_stretching = 0U;
            } else if ((1U & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q)))) {
                vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__ack_ctrl_stretching 
                    = (1U & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__can_auto_ack)));
            }
        }
    } else {
        if ((8U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
            if ((4U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
                if ((1U & (~ ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q)))) {
                        if ((1U & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__scl_sync)))) {
                            vlSelfRef.__PVT__i2c_core__DOT__tx_fifo_rready = 1U;
                        }
                    }
                }
            }
        }
        if ((1U & (~ ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
                    if ((1U & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q)))) {
                        if ((8U == (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__bit_idx))) {
                            if (vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__address_match) {
                                vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__xact_for_us_d = 1U;
                            }
                        }
                    }
                } else if ((1U & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q)))) {
                    vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__xact_for_us_d = 0U;
                }
            }
        }
    }
    if ((0x00000010U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_q))) {
        if ((8U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_q))) {
            vlSelfRef.__PVT__i2c_core__DOT__rx_fifo_wdata = 0U;
            vlSelfRef.__PVT__i2c_core__DOT__fmt_fifo_rready = 0U;
            vlSelfRef.__PVT__i2c_core__DOT__rx_fifo_wvalid = 0U;
            vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__auto_stop_d = 0U;
            vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__load_tcount = 0U;
        } else if ((4U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_q))) {
            if ((2U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_q))) {
                vlSelfRef.__PVT__i2c_core__DOT__rx_fifo_wdata = 0U;
                vlSelfRef.__PVT__i2c_core__DOT__fmt_fifo_rready = 0U;
                vlSelfRef.__PVT__i2c_core__DOT__rx_fifo_wvalid = 0U;
                vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__auto_stop_d = 0U;
                vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__load_tcount = 0U;
            } else if ((1U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_q))) {
                vlSelfRef.__PVT__i2c_core__DOT__rx_fifo_wdata = 0U;
                vlSelfRef.__PVT__i2c_core__DOT__fmt_fifo_rready = 0U;
                vlSelfRef.__PVT__i2c_core__DOT__rx_fifo_wvalid = 0U;
                vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__auto_stop_d = 0U;
                vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__load_tcount = 0U;
            } else if ((1U == (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__tcount_q))) {
                vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__load_tcount = 1U;
            }
        } else {
            if ((1U & (~ ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_q) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_q))) {
                    if (((0U == (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__bit_index)) 
                         & (1U == (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__tcount_q)))) {
                        vlSelfRef.__PVT__i2c_core__DOT__rx_fifo_wdata 
                            = vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__read_byte;
                        vlSelfRef.__PVT__i2c_core__DOT__rx_fifo_wvalid = 1U;
                    }
                }
            }
            if ((2U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_q))) {
                if ((1U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_q))) {
                    if ((((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__scl_sync)) 
                          & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__scl_i_q))) 
                         & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__stretch_predict_cnt_expired))) {
                        vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__load_tcount = 1U;
                    } else if ((1U & (~ (((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__scl_i_q) 
                                          & (IData)(vlSelfRef.__PVT__i2c_core__DOT__scl_sync)) 
                                         & ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__sda_i_q) 
                                            != (IData)(vlSelfRef.__PVT__i2c_core__DOT__sda_sync)))))) {
                        if (((1U == (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__tcount_q)) 
                             | ((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__scl_sync)) 
                                & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__scl_i_q)))) {
                            vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__load_tcount = 1U;
                        }
                    }
                } else if ((1U == (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__tcount_q))) {
                    vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__load_tcount = 1U;
                }
            } else if ((1U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_q))) {
                if ((1U == (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__tcount_q))) {
                    vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__load_tcount = 1U;
                }
            } else if ((((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__scl_sync)) 
                         & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__scl_i_q))) 
                        & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__stretch_predict_cnt_expired))) {
                vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__load_tcount = 1U;
            } else if ((1U & (~ (((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__scl_i_q) 
                                  & (IData)(vlSelfRef.__PVT__i2c_core__DOT__scl_sync)) 
                                 & ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__sda_i_q) 
                                    != (IData)(vlSelfRef.__PVT__i2c_core__DOT__sda_sync)))))) {
                if (((1U == (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__tcount_q)) 
                     | ((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__scl_sync)) 
                        & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__scl_i_q)))) {
                    vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__load_tcount = 1U;
                }
            }
        }
    } else {
        if ((1U & (~ ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_q) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_q) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_q))) {
                    if ((1U & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_q)))) {
                        vlSelfRef.__PVT__i2c_core__DOT__fmt_fifo_rready = 1U;
                    }
                }
            }
            if ((4U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_q))) {
                if ((2U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_q))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_q))) {
                        if ((1U & ((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__sda_sync)) 
                                   & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__scl_sync))))) {
                            vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__auto_stop_d = 0U;
                        } else if (vlSelfRef.__PVT__i2c_core__DOT__sda_sync) {
                            vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__auto_stop_d = 0U;
                        }
                    }
                }
            } else if ((2U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_q))) {
                if ((1U & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_q)))) {
                    if (((~ (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_enablehost__q)) 
                         & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__trans_started))) {
                        vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__auto_stop_d = 1U;
                    }
                }
            } else if ((1U & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_q)))) {
                if (vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_enablehost__q) {
                    if ((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_controller_events_nack__q) 
                          | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_controller_events_unhandled_nack_timeout__q)) 
                         | (IData)(vlSelfRef.__PVT__i2c_core__DOT__intr_hw_controller_halt__DOT__event_intr_i))) {
                        if (((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__trans_started) 
                             & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__unhandled_nak_cnt_expired))) {
                            vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__auto_stop_d = 1U;
                        }
                    }
                } else if (((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__trans_started) 
                            & (~ (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_enablehost__q)))) {
                    vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__auto_stop_d = 1U;
                }
            }
        }
        if ((8U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_q))) {
            if ((4U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_q))) {
                if ((2U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_q))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_q))) {
                        if ((1U == (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__tcount_q))) {
                            vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__load_tcount = 1U;
                        }
                    } else if ((1U == (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__tcount_q))) {
                        vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__load_tcount = 1U;
                    }
                } else if ((1U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_q))) {
                    if ((((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__scl_sync)) 
                          & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__scl_i_q))) 
                         & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__stretch_predict_cnt_expired))) {
                        vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__load_tcount = 1U;
                    } else if ((1U & (~ (((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__scl_i_q) 
                                          & (IData)(vlSelfRef.__PVT__i2c_core__DOT__scl_sync)) 
                                         & ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__sda_i_q) 
                                            != (IData)(vlSelfRef.__PVT__i2c_core__DOT__sda_sync)))))) {
                        if (((1U == (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__tcount_q)) 
                             | ((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__scl_sync)) 
                                & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__scl_i_q)))) {
                            vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__load_tcount = 1U;
                        }
                    }
                } else if ((1U == (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__tcount_q))) {
                    vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__load_tcount = 1U;
                }
            } else if ((2U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_q))) {
                if ((1U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_q))) {
                    if ((1U == (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__tcount_q))) {
                        vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__load_tcount = 1U;
                    }
                } else if ((((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__scl_sync)) 
                             & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__scl_i_q))) 
                            & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__stretch_predict_cnt_expired))) {
                    vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__load_tcount = 1U;
                } else if ((1U & (~ (((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__scl_i_q) 
                                      & (IData)(vlSelfRef.__PVT__i2c_core__DOT__scl_sync)) 
                                     & ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__sda_i_q) 
                                        != (IData)(vlSelfRef.__PVT__i2c_core__DOT__sda_sync)))))) {
                    if (((1U == (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__tcount_q)) 
                         | ((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__scl_sync)) 
                            & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__scl_i_q)))) {
                        vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__load_tcount = 1U;
                    }
                }
            } else if ((1U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_q))) {
                if ((1U == (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__tcount_q))) {
                    vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__load_tcount = 1U;
                }
            } else if ((1U == (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__tcount_q))) {
                vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__load_tcount = 1U;
            }
        } else if ((4U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_q))) {
            if ((2U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_q))) {
                if ((1U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_q))) {
                    if ((1U & (~ ((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__sda_sync)) 
                                  & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__scl_sync)))))) {
                        if (vlSelfRef.__PVT__i2c_core__DOT__sda_sync) {
                            vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__load_tcount = 1U;
                        }
                    }
                } else if ((((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__scl_sync)) 
                             & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__scl_i_q))) 
                            & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__stretch_predict_cnt_expired))) {
                    vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__load_tcount = 1U;
                }
            } else if ((1U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_q))) {
                if ((1U == (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__tcount_q))) {
                    vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__load_tcount = 1U;
                }
            } else if (((1U == (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__tcount_q)) 
                        | ((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__scl_sync)) 
                           & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__scl_i_q)))) {
                vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__load_tcount = 1U;
            }
        } else if ((2U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_q))) {
            if ((1U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_q))) {
                if ((1U & (~ ((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__trans_started)) 
                              & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__scl_sync)))))) {
                    if (((((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__trans_started) 
                           & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__scl_sync))) 
                          & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__scl_i_q))) 
                         & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__stretch_predict_cnt_expired))) {
                        vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__load_tcount = 1U;
                    } else if ((1U & (~ (((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__trans_started) 
                                          & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__scl_sync))) 
                                         & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__scl_i_q))))) {
                        if ((1U == (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__tcount_q))) {
                            vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__load_tcount = 1U;
                        }
                    }
                }
            } else {
                vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__load_tcount = 1U;
            }
        } else if ((1U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_q))) {
            vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__load_tcount = 1U;
        } else if (vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_enablehost__q) {
            if ((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_controller_events_nack__q) 
                  | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_controller_events_unhandled_nack_timeout__q)) 
                 | (IData)(vlSelfRef.__PVT__i2c_core__DOT__intr_hw_controller_halt__DOT__event_intr_i))) {
                if (((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__trans_started) 
                     & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__unhandled_nak_cnt_expired))) {
                    vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__load_tcount = 1U;
                }
            }
        } else if (((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__trans_started) 
                    & (~ (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_enablehost__q)))) {
            vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__load_tcount = 1U;
        }
    }
    if ((1U & (~ VL_ONEHOT_I(vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_read)))) {
        if ((0U != vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_read)) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: i2c_reg_top.sv:3791: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_i2c2.u_reg: unique case, but multiple matches found for '1'h1'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name());
                Verilated::runFlushCallbacks();
                VL_STOP_MT("verilogSourceFiles/i2c_reg_top.sv", 3791, "");
            }
        }
    }
    vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[0U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1387[0U];
    vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[1U] 
        = vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1387[1U];
    vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[2U] 
        = (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__outstanding_q) 
            << 1U) | vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1387[2U]);
    vlSelfRef.__PVT__u_reg__DOT__u_controller_events_arbitration_lost__DOT__de 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__event_sda_unstable) 
           | ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__ctrl_symbol_failed) 
              | (IData)(vlSelfRef.__PVT__i2c_core__DOT__intr_hw_sda_interference__DOT__event_intr_i)));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__fifo_wready_o 
        = ((~ ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_oup_buf__DOT__full_o) 
               & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__full_o))) 
           & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_inp_buf__DOT__wready_o));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__fifo_wready_o 
        = ((~ ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_oup_buf__DOT__full_o) 
               & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__full_o))) 
           & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_inp_buf__DOT__wready_o));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__fifo_wready_o 
        = ((~ ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_oup_buf__DOT__full_o) 
               & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__full_o))) 
           & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_inp_buf__DOT__wready_o));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__fifo_depth_o 
        = (0x0000007fU & (((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_inp_buf__DOT__full_o)
                            ? 2U : (3U & (((1U & ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                                                  >> 1U)) 
                                           == (1U & 
                                               ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                                >> 1U)))
                                           ? ((1U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q)) 
                                              - (1U 
                                                 & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)))
                                           : (((IData)(2U) 
                                               - (1U 
                                                  & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))) 
                                              + (1U 
                                                 & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q)))))) 
                          + (((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__full_o)
                               ? 0x0000003eU : (0x0000003fU 
                                                & (((1U 
                                                     & ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__wptr_wrap_cnt_q) 
                                                        >> 6U)) 
                                                    == 
                                                    (1U 
                                                     & ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__rptr_wrap_cnt_q) 
                                                        >> 6U)))
                                                    ? 
                                                   ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__wptr_wrap_cnt_q) 
                                                    - (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__rptr_wrap_cnt_q))
                                                    : 
                                                   (((IData)(0x3eU) 
                                                     - (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__rptr_wrap_cnt_q)) 
                                                    + (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__wptr_wrap_cnt_q))))) 
                             + ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_oup_buf__DOT__depth_o) 
                                + (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__sram_read_in_prev_cyc_q)))));
    vlSelfRef.__VdfgRegularize_ha785dde0_1_26 = ((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__sram_read_in_prev_cyc_q)) 
                                                 & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_oup_buf__DOT__wready_o));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__fifo_depth_o 
        = (0x0000007fU & (((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_inp_buf__DOT__full_o)
                            ? 2U : (3U & (((1U & ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                                                  >> 1U)) 
                                           == (1U & 
                                               ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                                >> 1U)))
                                           ? ((1U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q)) 
                                              - (1U 
                                                 & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)))
                                           : (((IData)(2U) 
                                               - (1U 
                                                  & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))) 
                                              + (1U 
                                                 & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q)))))) 
                          + (((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__full_o)
                               ? 0x0000003eU : (0x0000003fU 
                                                & (((1U 
                                                     & ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__wptr_wrap_cnt_q) 
                                                        >> 6U)) 
                                                    == 
                                                    (1U 
                                                     & ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__rptr_wrap_cnt_q) 
                                                        >> 6U)))
                                                    ? 
                                                   ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__wptr_wrap_cnt_q) 
                                                    - (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__rptr_wrap_cnt_q))
                                                    : 
                                                   (((IData)(0x3eU) 
                                                     - (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__rptr_wrap_cnt_q)) 
                                                    + (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__wptr_wrap_cnt_q))))) 
                             + ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_oup_buf__DOT__depth_o) 
                                + (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__sram_read_in_prev_cyc_q)))));
    vlSelfRef.__VdfgRegularize_ha785dde0_1_29 = ((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__sram_read_in_prev_cyc_q)) 
                                                 & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_oup_buf__DOT__wready_o));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__fifo_depth_o 
        = (0x0000007fU & (((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_inp_buf__DOT__full_o)
                            ? 2U : (3U & (((1U & ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                                                  >> 1U)) 
                                           == (1U & 
                                               ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                                >> 1U)))
                                           ? ((1U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q)) 
                                              - (1U 
                                                 & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)))
                                           : (((IData)(2U) 
                                               - (1U 
                                                  & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))) 
                                              + (1U 
                                                 & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q)))))) 
                          + (((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__full_o)
                               ? 0x0000003eU : (0x0000003fU 
                                                & (((1U 
                                                     & ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__wptr_wrap_cnt_q) 
                                                        >> 6U)) 
                                                    == 
                                                    (1U 
                                                     & ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__rptr_wrap_cnt_q) 
                                                        >> 6U)))
                                                    ? 
                                                   ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__wptr_wrap_cnt_q) 
                                                    - (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__rptr_wrap_cnt_q))
                                                    : 
                                                   (((IData)(0x3eU) 
                                                     - (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__rptr_wrap_cnt_q)) 
                                                    + (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__wptr_wrap_cnt_q))))) 
                             + ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_oup_buf__DOT__depth_o) 
                                + (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__sram_read_in_prev_cyc_q)))));
    vlSelfRef.__VdfgRegularize_ha785dde0_1_32 = ((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__sram_read_in_prev_cyc_q)) 
                                                 & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_oup_buf__DOT__wready_o));
    vlSelfRef.__PVT__i2c_core__DOT__u_i2c_bus_monitor__DOT__bus_release_cnt_load = 0U;
    vlSelfRef.__PVT__i2c_core__DOT__u_i2c_bus_monitor__DOT__state_d 
        = vlSelfRef.__PVT__i2c_core__DOT__u_i2c_bus_monitor__DOT__state_q;
    vlSelfRef.__PVT__i2c_core__DOT__u_i2c_bus_monitor__DOT__bus_release_cnt_sel 
        = vlSelfRef.u_reg__DOT____Vcellout__u_timing4_t_buf__q;
    vlSelfRef.__PVT__i2c_core__DOT__u_i2c_bus_monitor__DOT__bus_inactive_timeout_det = 0U;
    if ((2U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_bus_monitor__DOT__state_q))) {
        if ((1U & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_bus_monitor__DOT__state_q)))) {
            if (vlSelfRef.__PVT__i2c_core__DOT__stop_detect) {
                vlSelfRef.__PVT__i2c_core__DOT__u_i2c_bus_monitor__DOT__bus_release_cnt_load = 1U;
                vlSelfRef.__PVT__i2c_core__DOT__u_i2c_bus_monitor__DOT__bus_release_cnt_sel 
                    = vlSelfRef.u_reg__DOT____Vcellout__u_timing4_t_buf__q;
            } else if ((1U & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_bus_monitor__DOT__bus_idling)))) {
                vlSelfRef.__PVT__i2c_core__DOT__u_i2c_bus_monitor__DOT__bus_release_cnt_load = 1U;
                vlSelfRef.__PVT__i2c_core__DOT__u_i2c_bus_monitor__DOT__bus_release_cnt_sel 
                    = vlSelfRef.u_reg__DOT____Vcellout__u_timeout_ctrl_val__q;
            }
            if ((1U & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__stop_detect)))) {
                if (vlSelfRef.__PVT__i2c_core__DOT__u_i2c_bus_monitor__DOT__bus_idling) {
                    if ((1U == vlSelfRef.__PVT__i2c_core__DOT__u_i2c_bus_monitor__DOT__bus_release_cnt)) {
                        vlSelfRef.__PVT__i2c_core__DOT__u_i2c_bus_monitor__DOT__bus_inactive_timeout_det 
                            = (0U < vlSelfRef.u_reg__DOT____Vcellout__u_host_timeout_ctrl__q);
                    }
                }
            }
        }
        if ((1U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_bus_monitor__DOT__state_q))) {
            if ((1U & ((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__scl_sync)) 
                       | (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__sda_sync))))) {
                vlSelfRef.__PVT__i2c_core__DOT__u_i2c_bus_monitor__DOT__state_d = 1U;
            } else if ((1U == vlSelfRef.__PVT__i2c_core__DOT__u_i2c_bus_monitor__DOT__bus_release_cnt)) {
                vlSelfRef.__PVT__i2c_core__DOT__u_i2c_bus_monitor__DOT__state_d = 0U;
            }
        } else if (vlSelfRef.__PVT__i2c_core__DOT__stop_detect) {
            vlSelfRef.__PVT__i2c_core__DOT__u_i2c_bus_monitor__DOT__state_d = 3U;
        } else if (vlSelfRef.__PVT__i2c_core__DOT__u_i2c_bus_monitor__DOT__bus_idling) {
            if ((1U == vlSelfRef.__PVT__i2c_core__DOT__u_i2c_bus_monitor__DOT__bus_release_cnt)) {
                if (vlSelfRef.__PVT__i2c_core__DOT__sda_sync) {
                    vlSelfRef.__PVT__i2c_core__DOT__u_i2c_bus_monitor__DOT__state_d = 0U;
                }
            }
        } else {
            vlSelfRef.__PVT__i2c_core__DOT__u_i2c_bus_monitor__DOT__state_d = 1U;
        }
    } else if ((1U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_bus_monitor__DOT__state_q))) {
        if (vlSelfRef.__PVT__i2c_core__DOT__stop_detect) {
            vlSelfRef.__PVT__i2c_core__DOT__u_i2c_bus_monitor__DOT__bus_release_cnt_load = 1U;
            vlSelfRef.__PVT__i2c_core__DOT__u_i2c_bus_monitor__DOT__state_d = 3U;
            vlSelfRef.__PVT__i2c_core__DOT__u_i2c_bus_monitor__DOT__bus_release_cnt_sel 
                = vlSelfRef.u_reg__DOT____Vcellout__u_timing4_t_buf__q;
        } else if (i2c_core__DOT__u_i2c_bus_monitor__DOT____VdfgExtracted_h5d458eba__0) {
            vlSelfRef.__PVT__i2c_core__DOT__u_i2c_bus_monitor__DOT__bus_release_cnt_load = 1U;
            vlSelfRef.__PVT__i2c_core__DOT__u_i2c_bus_monitor__DOT__state_d = 2U;
            vlSelfRef.__PVT__i2c_core__DOT__u_i2c_bus_monitor__DOT__bus_release_cnt_sel 
                = vlSelfRef.u_reg__DOT____Vcellout__u_host_timeout_ctrl__q;
        } else if (vlSelfRef.__PVT__i2c_core__DOT__scl_sync) {
            vlSelfRef.__PVT__i2c_core__DOT__u_i2c_bus_monitor__DOT__bus_release_cnt_load = 1U;
            if (vlSelfRef.__PVT__i2c_core__DOT__u_i2c_bus_monitor__DOT__bus_active_timeout_det_q) {
                vlSelfRef.__PVT__i2c_core__DOT__u_i2c_bus_monitor__DOT__state_d = 0U;
            }
            vlSelfRef.__PVT__i2c_core__DOT__u_i2c_bus_monitor__DOT__bus_release_cnt_sel 
                = vlSelfRef.u_reg__DOT____Vcellout__u_timeout_ctrl_val__q;
        }
    } else if ((1U & ((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__scl_sync)) 
                      | (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__sda_sync))))) {
        vlSelfRef.__PVT__i2c_core__DOT__u_i2c_bus_monitor__DOT__bus_release_cnt_load = 1U;
        vlSelfRef.__PVT__i2c_core__DOT__u_i2c_bus_monitor__DOT__state_d = 1U;
        vlSelfRef.__PVT__i2c_core__DOT__u_i2c_bus_monitor__DOT__bus_release_cnt_sel 
            = vlSelfRef.u_reg__DOT____Vcellout__u_timeout_ctrl_val__q;
    }
    vlSelfRef.__PVT__i2c_core__DOT__u_i2c_bus_monitor__DOT__bus_active_timeout_det_d 
        = vlSelfRef.__PVT__i2c_core__DOT__u_i2c_bus_monitor__DOT__bus_active_timeout_det_q;
    if ((1U & (~ ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_bus_monitor__DOT__state_q) 
                  >> 1U)))) {
        if ((1U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_bus_monitor__DOT__state_q))) {
            if ((1U & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__stop_detect)))) {
                if ((1U & (~ (IData)(i2c_core__DOT__u_i2c_bus_monitor__DOT____VdfgExtracted_h5d458eba__0)))) {
                    if ((1U & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__scl_sync)))) {
                        if ((1U == vlSelfRef.__PVT__i2c_core__DOT__u_i2c_bus_monitor__DOT__bus_release_cnt)) {
                            vlSelfRef.__PVT__i2c_core__DOT__u_i2c_bus_monitor__DOT__bus_active_timeout_det_d 
                                = ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timeout_ctrl_en__q) 
                                   & (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timeout_ctrl_mode__q));
                        }
                    }
                }
            }
        } else {
            vlSelfRef.__PVT__i2c_core__DOT__u_i2c_bus_monitor__DOT__bus_active_timeout_det_d = 0U;
        }
    }
    vlSelfRef.__VdfgRegularize_ha785dde0_1_23 = ((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__sram_read_in_prev_cyc_q)) 
                                                 & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_oup_buf__DOT__wready_o));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__fifo_depth_o 
        = (0x000001ffU & (((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_inp_buf__DOT__full_o)
                            ? 2U : (3U & (((1U & ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q) 
                                                  >> 1U)) 
                                           == (1U & 
                                               ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q) 
                                                >> 1U)))
                                           ? ((1U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q)) 
                                              - (1U 
                                                 & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)))
                                           : (((IData)(2U) 
                                               - (1U 
                                                  & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q))) 
                                              + (1U 
                                                 & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q)))))) 
                          + (((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__full_o)
                               ? 0x010aU : (((1U & 
                                              ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__wptr_wrap_cnt_q) 
                                               >> 9U)) 
                                             == (1U 
                                                 & ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__rptr_wrap_cnt_q) 
                                                    >> 9U)))
                                             ? ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__wptr_wrap_cnt_q) 
                                                - (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__rptr_wrap_cnt_q))
                                             : (((IData)(0x010aU) 
                                                 - (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__rptr_wrap_cnt_q)) 
                                                + (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__wptr_wrap_cnt_q)))) 
                             + ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_oup_buf__DOT__depth_o) 
                                + (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__sram_read_in_prev_cyc_q)))));
    __Vfunc_extract_d2h_rsp_intg__36__tl[0U] = vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[0U];
    __Vfunc_extract_d2h_rsp_intg__36__tl[1U] = vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[1U];
    __Vfunc_extract_d2h_rsp_intg__36__tl[2U] = vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__u_rsp_intg_gen__DOT__tl_i[2U];
    __Vfunc_extract_d2h_rsp_intg__36__payload = ((0x00000038U 
                                                  & ((__Vfunc_extract_d2h_rsp_intg__36__tl[2U] 
                                                      << 5U) 
                                                     | (0x00000018U 
                                                        & (__Vfunc_extract_d2h_rsp_intg__36__tl[1U] 
                                                           >> 0x0000001bU)))) 
                                                 | ((6U 
                                                     & (__Vfunc_extract_d2h_rsp_intg__36__tl[1U] 
                                                        >> 0x00000018U)) 
                                                    | (1U 
                                                       & (__Vfunc_extract_d2h_rsp_intg__36__tl[0U] 
                                                          >> 1U))));
    __Vfunc_extract_d2h_rsp_intg__36__Vfuncout = __Vfunc_extract_d2h_rsp_intg__36__payload;
    vlSelfRef.__PVT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp 
        = __Vfunc_extract_d2h_rsp_intg__36__Vfuncout;
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_inp_buf__DOT__wvalid_i 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__rx_fifo_wvalid) 
           & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__fifo_wready_o));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_inp_buf__DOT__wvalid_i 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__fdata_qe) 
           & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__fifo_wready_o));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_tx_threshold__DOT__d 
        = (((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__fifo_depth_o) 
            < (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_target_fifo_config_tx_thresh__q)) 
           | (IData)(vlSelfRef.__PVT__i2c_core__DOT__intr_hw_tx_threshold__DOT__g_intr_status__DOT__test_q));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_threshold__DOT__d 
        = (((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__fifo_depth_o) 
            > (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_host_fifo_config_rx_thresh__q)) 
           | (IData)(vlSelfRef.__PVT__i2c_core__DOT__intr_hw_rx_threshold__DOT__g_intr_status__DOT__test_q));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_fmt_threshold__DOT__d 
        = (((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__fifo_depth_o) 
            < (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_host_fifo_config_fmt_thresh__q)) 
           | (IData)(vlSelfRef.__PVT__i2c_core__DOT__intr_hw_fmt_threshold__DOT__g_intr_status__DOT__test_q));
    vlSelfRef.__PVT__i2c_core__DOT__event_bus_active_timeout 
        = ((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_bus_monitor__DOT__bus_active_timeout_det_q)) 
           & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_bus_monitor__DOT__bus_active_timeout_det_d));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_acq_threshold__DOT__d 
        = (((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__fifo_depth_o) 
            > (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_target_fifo_config_acq_thresh__q)) 
           | (IData)(vlSelfRef.__PVT__i2c_core__DOT__intr_hw_acq_threshold__DOT__g_intr_status__DOT__test_q));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_acq_stretch__DOT__d 
        = (((2U >= (0x000001ffU & ((IData)(0x010cU) 
                                   - (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__fifo_depth_o)))) 
            | (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__ack_ctrl_stretching)) 
           | (IData)(vlSelfRef.__PVT__i2c_core__DOT__intr_hw_acq_overflow__DOT__g_intr_status__DOT__test_q));
    vlSelfRef.__PVT__i2c_core__DOT__event_read_cmd_received = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q) 
                  >> 4U)))) {
        if ((1U & (~ ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q) 
                      >> 3U)))) {
            if ((4U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
                if ((2U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
                    if ((1U & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q)))) {
                        if ((1U == (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__tcount_q))) {
                            if ((1U & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__nack_transaction_q)))) {
                                if ((2U < (0x000001ffU 
                                           & ((IData)(0x010cU) 
                                              - (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__fifo_depth_o))))) {
                                    vlSelfRef.__PVT__i2c_core__DOT__event_read_cmd_received 
                                        = vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__rw_bit_q;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__stretch_rx 
        = (1U & ((2U >= (0x000001ffU & ((IData)(0x010cU) 
                                        - (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__fifo_depth_o)))) 
                 | (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__can_auto_ack))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1198 = (
                                                   ((((((2U 
                                                         & (VL_REDXOR_32(
                                                                         (0x10U 
                                                                          & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp))) 
                                                            << 1U)) 
                                                        | (1U 
                                                           & (~ 
                                                              VL_REDXOR_32(
                                                                           (8U 
                                                                            & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp)))))) 
                                                       << 6U) 
                                                      | (((2U 
                                                           & (VL_REDXOR_32(
                                                                           (4U 
                                                                            & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp))) 
                                                              << 1U)) 
                                                          | (1U 
                                                             & (~ 
                                                                VL_REDXOR_32(
                                                                             (0x22U 
                                                                              & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp)))))) 
                                                         << 4U)) 
                                                     | ((((2U 
                                                           & (VL_REDXOR_32(
                                                                           (0x21U 
                                                                            & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp))) 
                                                              << 1U)) 
                                                          | (1U 
                                                             & (~ 
                                                                VL_REDXOR_32(
                                                                             (0x1fU 
                                                                              & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp)))))) 
                                                         << 2U) 
                                                        | ((2U 
                                                            & (VL_REDXOR_8(vlSelfRef.__PVT__u_reg__DOT__u_rsp_intg_gen__DOT__gen_rsp_intg__DOT__rsp) 
                                                               << 1U)) 
                                                           | (1U 
                                                              & VL_REDXOR_32(
                                                                             (0x98505586U 
                                                                              & vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__rdata_q)))))) 
                                                    << 8U) 
                                                   | (((((2U 
                                                          & ((~ 
                                                              VL_REDXOR_32(
                                                                           (0x2dcc624cU 
                                                                            & vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__rdata_q))) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & VL_REDXOR_32(
                                                                           (0xc2c1323bU 
                                                                            & vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__rdata_q)))) 
                                                        << 6U) 
                                                       | (((2U 
                                                            & ((~ 
                                                                VL_REDXOR_32(
                                                                             (0x31234ed1U 
                                                                              & vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__rdata_q))) 
                                                               << 1U)) 
                                                           | (1U 
                                                              & VL_REDXOR_32(
                                                                             (0x413d89aaU 
                                                                              & vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__rdata_q)))) 
                                                          << 4U)) 
                                                      | ((8U 
                                                          & ((~ 
                                                              VL_REDXOR_32(
                                                                           (0xdeba8050U 
                                                                            & vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__rdata_q))) 
                                                             << 3U)) 
                                                         | ((4U 
                                                             & (VL_REDXOR_32(
                                                                             (0x2606bd25U 
                                                                              & vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__rdata_q)) 
                                                                << 2U)) 
                                                            | (IData)(__VdfgRegularize_ha785dde0_1_21)))));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__fifo_incr_wptr 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_inp_buf__DOT__wvalid_i) 
           & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_inp_buf__DOT__wready_o));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__empty 
        = ((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_inp_buf__DOT__wvalid_i)) 
           & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__fifo_empty));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__fifo_incr_wptr 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_inp_buf__DOT__wvalid_i) 
           & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_inp_buf__DOT__wready_o));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__empty 
        = ((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_inp_buf__DOT__wvalid_i)) 
           & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__fifo_empty));
    vlSelfRef.__PVT__u_reg__DOT__u_controller_events_bus_timeout__DOT__de 
        = ((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__host_idle)) 
           & (IData)(vlSelfRef.__PVT__i2c_core__DOT__event_bus_active_timeout));
    vlSelfRef.__PVT__u_reg__DOT__u_target_events_bus_timeout__DOT__de 
        = ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_enabletarget__q) 
           & (((IData)(vlSelfRef.__PVT__i2c_core__DOT__stop_detect) 
               | (IData)(vlSelfRef.__PVT__i2c_core__DOT__event_bus_active_timeout)) 
              & ((IData)(vlSelfRef.__PVT__i2c_core__DOT__event_bus_active_timeout) 
                 & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__rw_bit_q))));
    vlSelfRef.__PVT__i2c_core__DOT__event_tx_arbitration_lost = 0U;
    vlSelfRef.__PVT__i2c_core__DOT__event_target_cmd_complete = 0U;
    if ((0x00000010U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
        if ((8U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
            if ((4U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
                vlSelfRef.__PVT__i2c_core__DOT__event_target_cmd_complete = 0U;
            } else if ((2U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
                vlSelfRef.__PVT__i2c_core__DOT__event_target_cmd_complete = 0U;
            }
        }
    }
    if (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_enabletarget__q) 
         & ((IData)(vlSelfRef.__PVT__i2c_core__DOT__stop_detect) 
            | (IData)(vlSelfRef.__PVT__i2c_core__DOT__event_bus_active_timeout)))) {
        vlSelfRef.__PVT__i2c_core__DOT__event_target_cmd_complete 
            = vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__xfer_for_us_q;
    } else if (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_enabletarget__q) 
                & (IData)(vlSelfRef.__PVT__i2c_core__DOT__start_detect))) {
        vlSelfRef.__PVT__i2c_core__DOT__event_target_cmd_complete 
            = vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__xfer_for_us_q;
    } else if (vlSelfRef.__PVT__i2c_core__DOT__target_arbitration_lost) {
        vlSelfRef.__PVT__i2c_core__DOT__event_target_cmd_complete 
            = vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__xfer_for_us_q;
    }
    vlSelfRef.__PVT__i2c_core__DOT__target_idle = 1U;
    vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__restart_det_d 
        = vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__restart_det_q;
    if ((0x00000010U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
        if ((8U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
            if ((4U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
                vlSelfRef.__PVT__i2c_core__DOT__target_idle = 1U;
                vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__restart_det_d = 0U;
            } else if ((2U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
                vlSelfRef.__PVT__i2c_core__DOT__target_idle = 1U;
                vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__restart_det_d = 0U;
            } else {
                vlSelfRef.__PVT__i2c_core__DOT__target_idle = 0U;
            }
        } else {
            vlSelfRef.__PVT__i2c_core__DOT__target_idle = 0U;
        }
    } else if ((8U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
        vlSelfRef.__PVT__i2c_core__DOT__target_idle = 0U;
    } else if ((4U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
        vlSelfRef.__PVT__i2c_core__DOT__target_idle = 0U;
    } else if ((2U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
        vlSelfRef.__PVT__i2c_core__DOT__target_idle = 0U;
    } else if ((1U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
        vlSelfRef.__PVT__i2c_core__DOT__target_idle = 0U;
    } else {
        vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__restart_det_d = 0U;
    }
    if ((1U & (~ ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_enabletarget__q) 
                  & ((IData)(vlSelfRef.__PVT__i2c_core__DOT__stop_detect) 
                     | (IData)(vlSelfRef.__PVT__i2c_core__DOT__event_bus_active_timeout)))))) {
        if ((1U & (~ ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_enabletarget__q) 
                      & (IData)(vlSelfRef.__PVT__i2c_core__DOT__start_detect))))) {
            if (vlSelfRef.__PVT__i2c_core__DOT__target_arbitration_lost) {
                vlSelfRef.__PVT__i2c_core__DOT__event_tx_arbitration_lost 
                    = vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__rw_bit_q;
            }
        }
        if (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_enabletarget__q) 
             & (IData)(vlSelfRef.__PVT__i2c_core__DOT__start_detect))) {
            vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__restart_det_d 
                = (1U & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__target_idle)));
        }
    }
    vlSelfRef.__PVT__u_reg__DOT__u_target_events_tx_pending__DOT__de 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__event_read_cmd_received) 
           & (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_tx_stretch_ctrl_en__q));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) 
           & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_inp_buf__DOT__rdata_o 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__empty)
            ? 0U : (0x00001fffU & (((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__fifo_empty) 
                                    & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_inp_buf__DOT__wvalid_i))
                                    ? (IData)(vlSelfRef.__PVT__i2c_core__DOT__rx_fifo_wdata)
                                    : ((0x19U >= (0x0000001fU 
                                                  & ((IData)(0x0000000dU) 
                                                     * 
                                                     (1U 
                                                      & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)))))
                                        ? (vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__storage 
                                           >> (0x0000001fU 
                                               & ((IData)(0x0000000dU) 
                                                  * 
                                                  (1U 
                                                   & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)))))
                                        : 0U))));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_inp_buf__DOT__rvalid_o 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__empty)) 
                 & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__under_rst))));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) 
           & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_inp_buf__DOT__rdata_o 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__empty)
            ? 0U : (0x00001fffU & (((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__fifo_empty) 
                                    & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_inp_buf__DOT__wvalid_i))
                                    ? (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_inp_buf__DOT__wdata_i)
                                    : ((0x19U >= (0x0000001fU 
                                                  & ((IData)(0x0000000dU) 
                                                     * 
                                                     (1U 
                                                      & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)))))
                                        ? (vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__storage 
                                           >> (0x0000001fU 
                                               & ((IData)(0x0000000dU) 
                                                  * 
                                                  (1U 
                                                   & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)))))
                                        : 0U))));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_inp_buf__DOT__rvalid_o 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__empty)) 
                 & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__under_rst))));
    __VdfgRegularize_ha785dde0_1_6 = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__sram_read_in_prev_cyc_q)
                                       ? (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_1p__DOT__rdata_sram)
                                       : (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_inp_buf__DOT__rdata_o));
    vlSelfRef.__VdfgRegularize_ha785dde0_1_9 = ((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__full_o)) 
                                                & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_inp_buf__DOT__rvalid_o));
    if (vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__empty_o) {
        if (vlSelfRef.__VdfgRegularize_ha785dde0_1_29) {
            vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_oup_buf__DOT__wvalid_i 
                = vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_inp_buf__DOT__rvalid_o;
            vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_oup_buf__DOT__wdata_i 
                = vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_inp_buf__DOT__rdata_o;
        } else {
            vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_oup_buf__DOT__wvalid_i 
                = vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__sram_read_in_prev_cyc_q;
            vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_oup_buf__DOT__wdata_i 
                = __VdfgRegularize_ha785dde0_1_6;
        }
    } else {
        vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_oup_buf__DOT__wvalid_i 
            = vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__sram_read_in_prev_cyc_q;
        vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_oup_buf__DOT__wdata_i 
            = __VdfgRegularize_ha785dde0_1_6;
    }
    __VdfgRegularize_ha785dde0_1_1 = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__sram_read_in_prev_cyc_q)
                                       ? (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_1p__DOT__rdata_sram)
                                       : (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_inp_buf__DOT__rdata_o));
    __VdfgRegularize_ha785dde0_1_4 = ((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__full_o)) 
                                      & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_inp_buf__DOT__rvalid_o));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__fifo_incr_wptr 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_oup_buf__DOT__wvalid_i) 
           & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_oup_buf__DOT__wready_o));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__empty 
        = ((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_oup_buf__DOT__wvalid_i)) 
           & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__fifo_empty));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_oup_buf__DOT__wvalid_i 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__empty_o)
            ? ((IData)(vlSelfRef.__VdfgRegularize_ha785dde0_1_32)
                ? (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_inp_buf__DOT__rvalid_o)
                : (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__sram_read_in_prev_cyc_q))
            : (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__sram_read_in_prev_cyc_q));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__fifo_incr_wptr 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_oup_buf__DOT__wvalid_i) 
           & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_oup_buf__DOT__wready_o));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__empty 
        = ((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_oup_buf__DOT__wvalid_i)) 
           & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__fifo_empty));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) 
           & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_oup_buf__DOT__rdata_o 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__empty)
            ? 0U : (0x00001fffU & (((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__fifo_empty) 
                                    & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_oup_buf__DOT__wvalid_i))
                                    ? (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_oup_buf__DOT__wdata_i)
                                    : ((0x19U >= (0x0000001fU 
                                                  & ((IData)(0x0000000dU) 
                                                     * 
                                                     (1U 
                                                      & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)))))
                                        ? (vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__storage 
                                           >> (0x0000001fU 
                                               & ((IData)(0x0000000dU) 
                                                  * 
                                                  (1U 
                                                   & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)))))
                                        : 0U))));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_oup_buf__DOT__rvalid_o 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__empty)) 
                 & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__under_rst))));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) 
           & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_oup_buf__DOT__wdata_i 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__empty_o)
            ? ((IData)(vlSelfRef.__VdfgRegularize_ha785dde0_1_32)
                ? (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_inp_buf__DOT__rdata_o)
                : (IData)(__VdfgRegularize_ha785dde0_1_1))
            : (IData)(__VdfgRegularize_ha785dde0_1_1));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_oup_buf__DOT__rdata_o 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__empty)
            ? 0U : (0x00001fffU & (((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__fifo_empty) 
                                    & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_oup_buf__DOT__wvalid_i))
                                    ? (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_oup_buf__DOT__wdata_i)
                                    : ((0x19U >= (0x0000001fU 
                                                  & ((IData)(0x0000000dU) 
                                                     * 
                                                     (1U 
                                                      & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)))))
                                        ? (vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__storage 
                                           >> (0x0000001fU 
                                               & ((IData)(0x0000000dU) 
                                                  * 
                                                  (1U 
                                                   & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)))))
                                        : 0U))));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_oup_buf__DOT__rvalid_o 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__empty)) 
                 & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__under_rst))));
    if (vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_oup_buf__DOT__rvalid_o) {
        vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__fifo_incr_rptr 
            = ((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__under_rst)) 
               & (IData)(vlSelfRef.__PVT__i2c_core__DOT__fmt_fifo_rready));
        vlSelfRef.__PVT__i2c_core__DOT__fmt_byte = 
            (0x000000ffU & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_oup_buf__DOT__rdata_o));
        vlSelfRef.__PVT__i2c_core__DOT__fmt_flag_read_continue 
            = (1U & ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_oup_buf__DOT__rdata_o) 
                     >> 0x0000000bU));
        vlSelfRef.__PVT__i2c_core__DOT__event_nak = 0U;
        vlSelfRef.__PVT__i2c_core__DOT__fmt_flag_stop_after 
            = (1U & ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_oup_buf__DOT__rdata_o) 
                     >> 9U));
        vlSelfRef.__PVT__i2c_core__DOT__fmt_flag_read_bytes 
            = (1U & ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_oup_buf__DOT__rdata_o) 
                     >> 0x0000000aU));
        vlSelfRef.__PVT__i2c_core__DOT__fmt_flag_start_before 
            = (1U & ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_oup_buf__DOT__rdata_o) 
                     >> 8U));
    } else {
        vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__fifo_incr_rptr = 0U;
        vlSelfRef.__PVT__i2c_core__DOT__fmt_byte = 0U;
        vlSelfRef.__PVT__i2c_core__DOT__fmt_flag_read_continue = 0U;
        vlSelfRef.__PVT__i2c_core__DOT__event_nak = 0U;
        vlSelfRef.__PVT__i2c_core__DOT__fmt_flag_stop_after = 0U;
        vlSelfRef.__PVT__i2c_core__DOT__fmt_flag_read_bytes = 0U;
        vlSelfRef.__PVT__i2c_core__DOT__fmt_flag_start_before = 0U;
    }
    vlSelfRef.__VdfgRegularize_ha785dde0_1_2 = (1U 
                                                & ((~ 
                                                    (((1U 
                                                       <= (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_oup_buf__DOT__depth_o)) 
                                                      & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__sram_read_in_prev_cyc_q)) 
                                                     | (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_oup_buf__DOT__full_o))) 
                                                   | ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_oup_buf__DOT__rvalid_o) 
                                                      & (IData)(vlSelfRef.__PVT__i2c_core__DOT__fmt_fifo_rready))));
    if (vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__empty_o) {
        vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__sram_write_o 
            = (1U & (~ (IData)(vlSelfRef.__VdfgRegularize_ha785dde0_1_32)));
        vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__sram_req_o 
            = ((~ (IData)(vlSelfRef.__VdfgRegularize_ha785dde0_1_32)) 
               & (IData)(__VdfgRegularize_ha785dde0_1_4));
    } else {
        vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__sram_write_o 
            = (1U & (~ (IData)(vlSelfRef.__VdfgRegularize_ha785dde0_1_2)));
        vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__sram_req_o 
            = ((IData)(vlSelfRef.__VdfgRegularize_ha785dde0_1_2) 
               | (IData)(__VdfgRegularize_ha785dde0_1_4));
    }
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__fifo_incr_rptr) 
           & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q));
    vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__sda_d = 1U;
    vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__byte_clr = 0U;
    vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__req_restart = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_q) 
                  >> 4U)))) {
        if ((1U & (~ ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_q) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_q) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_q) 
                              >> 1U)))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_q))) {
                        if ((1U & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__fmt_flag_read_bytes)))) {
                            if ((1U & (~ ((IData)(vlSelfRef.__PVT__i2c_core__DOT__fmt_flag_start_before) 
                                          & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__trans_started)))))) {
                                vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__req_restart 
                                    = vlSelfRef.__PVT__i2c_core__DOT__fmt_flag_start_before;
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_d 
        = vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_q;
    if ((0x00000010U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_q))) {
        if ((8U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_q))) {
            vlSelfRef.__PVT__i2c_core__DOT__event_nak = 0U;
            vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__sda_d = 1U;
            vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__byte_clr = 0U;
            vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_d = 0U;
        } else if ((4U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_q))) {
            if ((2U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_q))) {
                vlSelfRef.__PVT__i2c_core__DOT__event_nak = 0U;
                vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__byte_clr = 0U;
                vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_d = 0U;
            } else if ((1U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_q))) {
                vlSelfRef.__PVT__i2c_core__DOT__event_nak = 0U;
                vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__byte_clr = 0U;
                vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_d = 0U;
            } else if ((1U == (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__tcount_q))) {
                vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_d 
                    = ((1U == (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__byte_index))
                        ? ((IData)(vlSelfRef.__PVT__i2c_core__DOT__fmt_flag_stop_after)
                            ? 8U : 2U) : 0x0fU);
            }
            vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__sda_d 
                = ((1U & ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_q) 
                          >> 1U)) || ((1U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_q)) 
                                      || ((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__fmt_flag_read_continue)) 
                                          & (1U == (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__byte_index)))));
        } else if ((2U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_q))) {
            if ((1U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_q))) {
                vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__sda_d 
                    = ((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__fmt_flag_read_continue)) 
                       & (1U == (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__byte_index)));
                if ((1U & (~ (((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__scl_sync)) 
                               & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__scl_i_q))) 
                              & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__stretch_predict_cnt_expired))))) {
                    if ((((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__scl_i_q) 
                          & (IData)(vlSelfRef.__PVT__i2c_core__DOT__scl_sync)) 
                         & ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__sda_i_q) 
                            != (IData)(vlSelfRef.__PVT__i2c_core__DOT__sda_sync)))) {
                        vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_d = 0U;
                    } else if (((1U == (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__tcount_q)) 
                                | ((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__scl_sync)) 
                                   & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__scl_i_q)))) {
                        vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_d = 0x14U;
                    }
                }
            } else {
                vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__sda_d 
                    = ((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__fmt_flag_read_continue)) 
                       & (1U == (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__byte_index)));
                if ((1U == (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__tcount_q))) {
                    vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_d = 0x13U;
                }
            }
        } else if ((1U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_q))) {
            if ((1U == (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__tcount_q))) {
                vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_d 
                    = ((0U == (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__bit_index))
                        ? 0x12U : 0x0fU);
            }
        } else if ((1U & (~ (((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__scl_sync)) 
                              & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__scl_i_q))) 
                             & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__stretch_predict_cnt_expired))))) {
            if ((((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__scl_i_q) 
                  & (IData)(vlSelfRef.__PVT__i2c_core__DOT__scl_sync)) 
                 & ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__sda_i_q) 
                    != (IData)(vlSelfRef.__PVT__i2c_core__DOT__sda_sync)))) {
                vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_d = 0U;
            } else if (((1U == (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__tcount_q)) 
                        | ((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__scl_sync)) 
                           & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__scl_i_q)))) {
                vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_d = 0x11U;
            }
        }
        vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__scl_d 
            = (1U & ((1U & ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_q) 
                            >> 3U)) || (1U & ((4U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_q))
                                               ? ((1U 
                                                   & ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_q) 
                                                      >> 1U)) 
                                                  || (1U 
                                                      & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_q)))
                                               : ((2U 
                                                   & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_q))
                                                   ? (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_q)
                                                   : 
                                                  (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_q)))))));
    } else {
        if ((8U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_q))) {
            if ((4U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_q))) {
                if ((1U & (~ ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_q) 
                              >> 1U)))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_q))) {
                        if (((((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__scl_i_q)) 
                               & (IData)(vlSelfRef.__PVT__i2c_core__DOT__scl_sync)) 
                              & (IData)(vlSelfRef.__PVT__i2c_core__DOT__sda_sync)) 
                             & (~ ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_oup_buf__DOT__rvalid_o) 
                                   & ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_oup_buf__DOT__rdata_o) 
                                      >> 0x0000000cU))))) {
                            vlSelfRef.__PVT__i2c_core__DOT__event_nak = 1U;
                        }
                    }
                }
                vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__scl_d 
                    = (1U & ((1U & (~ ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_q) 
                                       >> 1U))) && 
                             (1U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_q))));
                if ((2U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_q))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_q))) {
                        if ((1U == (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__tcount_q))) {
                            vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_d = 0x10U;
                        }
                    } else if ((1U == (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__tcount_q))) {
                        vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_d 
                            = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__fmt_flag_stop_after)
                                ? 8U : 2U);
                    }
                } else if ((1U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_q))) {
                    if ((1U & (~ (((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__scl_sync)) 
                                   & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__scl_i_q))) 
                                  & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__stretch_predict_cnt_expired))))) {
                        if ((((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__scl_i_q) 
                              & (IData)(vlSelfRef.__PVT__i2c_core__DOT__scl_sync)) 
                             & ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__sda_i_q) 
                                != (IData)(vlSelfRef.__PVT__i2c_core__DOT__sda_sync)))) {
                            vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_d = 0U;
                        } else if (((1U == (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__tcount_q)) 
                                    | ((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__scl_sync)) 
                                       & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__scl_i_q)))) {
                            vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_d = 0x0eU;
                        }
                    }
                } else if ((1U == (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__tcount_q))) {
                    vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_d = 0x0dU;
                }
            } else {
                vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__scl_d 
                    = (1U & ((1U & ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_q) 
                                    >> 1U)) && (1U 
                                                & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_q)))));
                if ((2U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_q))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_q))) {
                        if ((1U == (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__tcount_q))) {
                            vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_d 
                                = ((0U == (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__bit_index))
                                    ? 0x0cU : 9U);
                        }
                    } else if ((1U & (~ (((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__scl_sync)) 
                                          & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__scl_i_q))) 
                                         & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__stretch_predict_cnt_expired))))) {
                        if ((((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__scl_i_q) 
                              & (IData)(vlSelfRef.__PVT__i2c_core__DOT__scl_sync)) 
                             & ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__sda_i_q) 
                                != (IData)(vlSelfRef.__PVT__i2c_core__DOT__sda_sync)))) {
                            vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_d = 0U;
                        } else if (((1U == (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__tcount_q)) 
                                    | ((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__scl_sync)) 
                                       & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__scl_i_q)))) {
                            vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_d = 0x0bU;
                        }
                    }
                } else if ((1U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_q))) {
                    if ((1U == (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__tcount_q))) {
                        vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_d 
                            = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__pend_restart)
                                ? 3U : 0x0aU);
                    }
                } else if ((1U == (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__tcount_q))) {
                    vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_d = 6U;
                }
            }
            vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__sda_d 
                = ((1U & ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_q) 
                          >> 2U)) || (1U & ((2U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_q))
                                             ? ((1U 
                                                 & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_q))
                                                 ? 
                                                ((IData)(vlSelfRef.__PVT__i2c_core__DOT__fmt_byte) 
                                                 >> (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__bit_index))
                                                 : 
                                                ((IData)(vlSelfRef.__PVT__i2c_core__DOT__fmt_byte) 
                                                 >> (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__bit_index)))
                                             : ((1U 
                                                 & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_q)) 
                                                && ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__pend_restart) 
                                                    || (1U 
                                                        & ((IData)(vlSelfRef.__PVT__i2c_core__DOT__fmt_byte) 
                                                           >> (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__bit_index))))))));
        } else if ((4U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_q))) {
            vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__sda_d 
                = ((1U & ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_q) 
                          >> 1U)) && (1U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_q)));
            vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__scl_d 
                = (1U & ((1U & ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_q) 
                                >> 1U)) || (1U & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_q)))));
            if ((2U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_q))) {
                if ((1U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_q))) {
                    if ((1U & ((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__sda_sync)) 
                               & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__scl_sync))))) {
                        vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_d = 0U;
                    } else if (vlSelfRef.__PVT__i2c_core__DOT__sda_sync) {
                        vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_d 
                            = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__auto_stop_q)
                                ? 0U : 2U);
                    }
                } else if ((1U & (~ (((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__scl_sync)) 
                                      & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__scl_i_q))) 
                                     & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__stretch_predict_cnt_expired))))) {
                    if (((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__scl_sync)) 
                         & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__scl_i_q))) {
                        vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_d = 0U;
                    } else if ((1U == (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__tcount_q))) {
                        vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_d = 7U;
                    }
                }
            } else if ((1U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_q))) {
                if ((1U == (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__tcount_q))) {
                    vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_d = 9U;
                }
            } else if (((1U == (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__tcount_q)) 
                        | ((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__scl_sync)) 
                           & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__scl_i_q)))) {
                vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_d = 5U;
            }
        } else if ((2U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_q))) {
            if ((1U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_q))) {
                vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__sda_d = 1U;
                if ((1U & ((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__trans_started)) 
                           & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__scl_sync))))) {
                    vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_d = 0U;
                } else if (((((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__trans_started) 
                              & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__scl_sync))) 
                             & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__scl_i_q))) 
                            & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__stretch_predict_cnt_expired))) {
                    vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_d = 3U;
                } else if ((((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__trans_started) 
                             & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__scl_sync))) 
                            & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__scl_i_q))) {
                    vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_d = 0U;
                } else if ((1U == (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__tcount_q))) {
                    vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_d = 4U;
                }
            } else {
                vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_d 
                    = (((~ (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_enablehost__q)) 
                        & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__trans_started))
                        ? 8U : ((1U & ((((~ (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_enablehost__q)) 
                                         | (1U == (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__fifo_depth_o))) 
                                        | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_controller_events_nack__q)) 
                                       | (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__trans_started))))
                                 ? 0U : 1U));
            }
            vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__scl_d 
                = (1U & ((1U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_q)) 
                         || (IData)(vlSelfRef.__PVT__i2c_core__DOT__fmt_flag_stop_after)));
        } else {
            if ((1U & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_q)))) {
                vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__sda_d = 1U;
            }
            if ((1U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_q))) {
                vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__scl_d 
                    = (1U & ((IData)(vlSelfRef.__PVT__i2c_core__DOT__fmt_flag_start_before) 
                             & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__trans_started))));
                vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_d 
                    = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__fmt_flag_read_bytes)
                        ? 0x0fU : (((IData)(vlSelfRef.__PVT__i2c_core__DOT__fmt_flag_start_before) 
                                    & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__trans_started)))
                                    ? 3U : 9U));
            } else {
                vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__scl_d 
                    = (1U & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__trans_started)));
                if (vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_enablehost__q) {
                    if ((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_controller_events_nack__q) 
                          | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_controller_events_unhandled_nack_timeout__q)) 
                         | (IData)(vlSelfRef.__PVT__i2c_core__DOT__intr_hw_controller_halt__DOT__event_intr_i))) {
                        if (((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__trans_started) 
                             & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__unhandled_nak_cnt_expired))) {
                            vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_d = 8U;
                        }
                    } else if (vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_oup_buf__DOT__rvalid_o) {
                        if (((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__trans_started) 
                             | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_multi_controller_monitor_en__q)
                                 ? (0U == (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_bus_monitor__DOT__state_q))
                                 : (3U != (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_bus_monitor__DOT__state_q))))) {
                            vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_d = 1U;
                        }
                    }
                } else if (((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__trans_started) 
                            & (~ (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_enablehost__q)))) {
                    vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_d = 8U;
                }
            }
        }
        if ((1U & (~ ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_q) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_q) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_q) 
                              >> 1U)))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_q))) {
                        if (vlSelfRef.__PVT__i2c_core__DOT__fmt_flag_read_bytes) {
                            vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__byte_clr = 1U;
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__trans_started) 
         & ((IData)(vlSelfRef.__PVT__i2c_core__DOT__intr_hw_sda_interference__DOT__event_intr_i) 
            | (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__ctrl_symbol_failed)))) {
        vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_d = 0U;
    }
    vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__tcount_sel = 9U;
    if ((0x00000010U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_q))) {
        if ((8U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_q))) {
            vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__tcount_sel = 9U;
        } else if ((4U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_q))) {
            if ((2U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_q))) {
                vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__tcount_sel = 9U;
            } else if ((1U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_q))) {
                vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__tcount_sel = 9U;
            } else if ((1U == (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__tcount_q))) {
                vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__tcount_sel 
                    = ((1U == (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__byte_index))
                        ? ((IData)(vlSelfRef.__PVT__i2c_core__DOT__fmt_flag_stop_after)
                            ? 7U : 9U) : 3U);
            }
        } else if ((2U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_q))) {
            if ((1U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_q))) {
                if ((((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__scl_sync)) 
                      & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__scl_i_q))) 
                     & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__stretch_predict_cnt_expired))) {
                    vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__tcount_sel = 5U;
                } else if ((1U & (~ (((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__scl_i_q) 
                                      & (IData)(vlSelfRef.__PVT__i2c_core__DOT__scl_sync)) 
                                     & ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__sda_i_q) 
                                        != (IData)(vlSelfRef.__PVT__i2c_core__DOT__sda_sync)))))) {
                    if (((1U == (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__tcount_q)) 
                         | ((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__scl_sync)) 
                            & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__scl_i_q)))) {
                        vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__tcount_sel = 6U;
                    }
                }
            } else if ((1U == (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__tcount_q))) {
                vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__tcount_sel = 4U;
            }
        } else if ((1U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_q))) {
            if ((1U == (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__tcount_q))) {
                vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__tcount_sel = 3U;
            }
        } else if ((((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__scl_sync)) 
                     & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__scl_i_q))) 
                    & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__stretch_predict_cnt_expired))) {
            vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__tcount_sel = 5U;
        } else if ((1U & (~ (((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__scl_i_q) 
                              & (IData)(vlSelfRef.__PVT__i2c_core__DOT__scl_sync)) 
                             & ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__sda_i_q) 
                                != (IData)(vlSelfRef.__PVT__i2c_core__DOT__sda_sync)))))) {
            if (((1U == (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__tcount_q)) 
                 | ((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__scl_sync)) 
                    & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__scl_i_q)))) {
                vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__tcount_sel = 6U;
            }
        }
    } else if ((8U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_q))) {
        if ((4U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_q))) {
            if ((2U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_q))) {
                if ((1U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_q))) {
                    if ((1U == (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__tcount_q))) {
                        vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__tcount_sel = 4U;
                    }
                } else if ((1U == (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__tcount_q))) {
                    vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__tcount_sel 
                        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__fmt_flag_stop_after)
                            ? 7U : 9U);
                }
            } else if ((1U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_q))) {
                if ((((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__scl_sync)) 
                      & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__scl_i_q))) 
                     & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__stretch_predict_cnt_expired))) {
                    vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__tcount_sel = 5U;
                } else if ((1U & (~ (((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__scl_i_q) 
                                      & (IData)(vlSelfRef.__PVT__i2c_core__DOT__scl_sync)) 
                                     & ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__sda_i_q) 
                                        != (IData)(vlSelfRef.__PVT__i2c_core__DOT__sda_sync)))))) {
                    if (((1U == (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__tcount_q)) 
                         | ((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__scl_sync)) 
                            & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__scl_i_q)))) {
                        vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__tcount_sel = 6U;
                    }
                }
            } else if ((1U == (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__tcount_q))) {
                vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__tcount_sel = 4U;
            }
        } else if ((2U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_q))) {
            if ((1U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_q))) {
                if ((1U == (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__tcount_q))) {
                    vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__tcount_sel = 3U;
                }
            } else if ((((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__scl_sync)) 
                         & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__scl_i_q))) 
                        & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__stretch_predict_cnt_expired))) {
                vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__tcount_sel = 5U;
            } else if ((1U & (~ (((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__scl_i_q) 
                                  & (IData)(vlSelfRef.__PVT__i2c_core__DOT__scl_sync)) 
                                 & ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__sda_i_q) 
                                    != (IData)(vlSelfRef.__PVT__i2c_core__DOT__sda_sync)))))) {
                if (((1U == (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__tcount_q)) 
                     | ((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__scl_sync)) 
                        & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__scl_i_q)))) {
                    vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__tcount_sel = 6U;
                }
            }
        } else if ((1U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_q))) {
            if ((1U == (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__tcount_q))) {
                vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__tcount_sel 
                    = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__pend_restart)
                        ? 0U : 4U);
            }
        } else if ((1U == (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__tcount_q))) {
            vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__tcount_sel = 8U;
        }
    } else if ((4U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_q))) {
        if ((2U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_q))) {
            if ((1U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_q))) {
                if ((1U & (~ ((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__sda_sync)) 
                              & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__scl_sync)))))) {
                    if (vlSelfRef.__PVT__i2c_core__DOT__sda_sync) {
                        vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__tcount_sel = 9U;
                    }
                }
            } else if ((((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__scl_sync)) 
                         & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__scl_i_q))) 
                        & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__stretch_predict_cnt_expired))) {
                vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__tcount_sel = 8U;
            }
        } else if ((1U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_q))) {
            if ((1U == (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__tcount_q))) {
                vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__tcount_sel = 3U;
            }
        } else if (((1U == (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__tcount_q)) 
                    | ((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__scl_sync)) 
                       & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__scl_i_q)))) {
            vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__tcount_sel = 2U;
        }
    } else if ((2U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_q))) {
        if ((1U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_q))) {
            if ((1U & (~ ((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__trans_started)) 
                          & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__scl_sync)))))) {
                if (((((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__trans_started) 
                       & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__scl_sync))) 
                      & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__scl_i_q))) 
                     & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__stretch_predict_cnt_expired))) {
                    vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__tcount_sel = 0U;
                } else if ((1U & (~ (((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__trans_started) 
                                      & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__scl_sync))) 
                                     & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__scl_i_q))))) {
                    if ((1U == (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__tcount_q))) {
                        vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__tcount_sel = 1U;
                    }
                }
            }
        } else {
            vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__tcount_sel 
                = (((~ (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_enablehost__q)) 
                    & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__trans_started))
                    ? 7U : 9U);
        }
    } else if ((1U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__state_q))) {
        vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__tcount_sel 
            = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__fmt_flag_read_bytes)
                ? 3U : (((IData)(vlSelfRef.__PVT__i2c_core__DOT__fmt_flag_start_before) 
                         & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__trans_started)))
                         ? 0U : 3U));
    } else if (vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_enablehost__q) {
        if ((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_controller_events_nack__q) 
              | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_controller_events_unhandled_nack_timeout__q)) 
             | (IData)(vlSelfRef.__PVT__i2c_core__DOT__intr_hw_controller_halt__DOT__event_intr_i))) {
            if (((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__trans_started) 
                 & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__unhandled_nak_cnt_expired))) {
                vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__tcount_sel = 7U;
            }
        }
    } else if (((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__trans_started) 
                & (~ (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_enablehost__q)))) {
        vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__tcount_sel = 7U;
    }
    vlSelfRef.__PVT__i2c_core__DOT__scl_fsm = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__scl_d) 
                                               & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__scl_d));
    vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__tcount_d 
        = vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__tcount_q;
    if (vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__load_tcount) {
        vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__tcount_d 
            = (0x0000ffffU & ((8U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__tcount_sel))
                               ? ((4U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__tcount_sel))
                                   ? 1U : ((2U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__tcount_sel))
                                            ? 1U : 
                                           ((1U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__tcount_sel))
                                             ? 1U : 
                                            ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timing1_t_r__q) 
                                             + (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timing4_tsu_sto__q)))))
                               : ((4U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__tcount_sel))
                                   ? ((2U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__tcount_sel))
                                       ? ((1U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__tcount_sel))
                                           ? (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timing1_t_f__q) 
                                               + (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timing0_tlow__q)) 
                                              - (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timing3_thd_dat__q))
                                           : ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timing1_t_f__q) 
                                              + (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timing3_thd_dat__q)))
                                       : ((1U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__tcount_sel))
                                           ? (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timing0_thigh__q)
                                           : ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timing1_t_r__q) 
                                              + (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timing0_thigh__q))))
                                   : ((2U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__tcount_sel))
                                       ? ((1U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__tcount_sel))
                                           ? ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timing0_tlow__q) 
                                              - (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timing3_thd_dat__q))
                                           : (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timing3_thd_dat__q))
                                       : ((1U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__tcount_sel))
                                           ? ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timing1_t_f__q) 
                                              + (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timing2_thd_sta__q))
                                           : ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timing1_t_r__q) 
                                              + (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timing2_tsu_sta__q)))))));
    } else if ((1U & ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_enablehost__q) 
                      | ((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__host_idle)) 
                         & (~ (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_enablehost__q)))))) {
        vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__tcount_d 
            = (0x0000ffffU & ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__tcount_q) 
                              - (IData)(1U)));
    }
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_arbiter__DOT__gen_normal_case__DOT__data_tree__BRA__91__03a69__KET__ 
        = (((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__sram_write_o) 
            << 0x00000016U) | ((((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__empty_o)
                                  ? (0x0000003fU & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__wptr_wrap_cnt_q))
                                  : ((IData)(vlSelfRef.__VdfgRegularize_ha785dde0_1_2)
                                      ? (0x0000003fU 
                                         & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__rptr_wrap_cnt_q))
                                      : (0x0000003fU 
                                         & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__wptr_wrap_cnt_q)))) 
                                << 0x0000000dU) | (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_inp_buf__DOT__rdata_o)));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_arbiter__DOT__gen_normal_case__DOT__prio_tree__BRA__3__KET__ 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__sram_req_o) 
           & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_arbiter__DOT__gen_normal_case__DOT__prio_mask_q));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__ram_arb_inp_data[0U] 
        = vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_arbiter__DOT__gen_normal_case__DOT__data_tree__BRA__91__03a69__KET__;
}

VL_ATTR_COLD void Vsim_i2c__Az2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c2__1(Vsim_i2c__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsim_i2c__Az2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c2__1\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__a_ack 
        = ((~ (IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__outstanding_q)) 
           & (IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_peri__DOT__u_s1n_28__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d.__PVT__reqfifo__DOT__wvalid_i));
    vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__instr_error 
        = ([&]() {
            vlSelfRef.__Vfunc_mubi4_test_true_strict__37__val 
                = (0x0000000fU & (vlSelf->__PVT__u_reg__DOT__u_chk->tl_i[0U] 
                                  >> 0x0000000fU));
            vlSelfRef.__Vfunc_mubi4_test_true_strict__37__Vfuncout 
                = (6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__37__val));
        }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_true_strict__37__Vfuncout));
    vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__rd_req 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__a_ack) 
           & (0x0400U == (0x0700U & vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[3U])));
    vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wr_req 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__a_ack) 
           & (IData)(vlSymsp->TOP.__VdfgRegularize_he50b618e_0_25));
}

VL_ATTR_COLD void Vsim_i2c__Az2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c2__2(Vsim_i2c__Az2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vsim_i2c__Az2___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_i2c2__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ u_reg__DOT____VdfgRegularize_ha30dc5a7_0_6;
    u_reg__DOT____VdfgRegularize_ha30dc5a7_0_6 = 0;
    SData/*12:0*/ __VdfgRegularize_ha785dde0_1_11;
    __VdfgRegularize_ha785dde0_1_11 = 0;
    CData/*0:0*/ __VdfgRegularize_ha785dde0_1_14;
    __VdfgRegularize_ha785dde0_1_14 = 0;
    SData/*12:0*/ __VdfgRegularize_ha785dde0_1_16;
    __VdfgRegularize_ha785dde0_1_16 = 0;
    CData/*0:0*/ __VdfgRegularize_ha785dde0_1_19;
    __VdfgRegularize_ha785dde0_1_19 = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_true_loose__39__Vfuncout;
    __Vfunc_mubi4_test_true_loose__39__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_loose__39__val;
    __Vfunc_mubi4_test_true_loose__39__val = 0;
    CData/*0:0*/ __Vfunc_mubi4_test_true_loose__40__Vfuncout;
    __Vfunc_mubi4_test_true_loose__40__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_test_true_loose__40__val;
    __Vfunc_mubi4_test_true_loose__40__val = 0;
    CData/*3:0*/ __Vfunc_mubi4_and_hi__45__Vfuncout;
    __Vfunc_mubi4_and_hi__45__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_and_hi__45__a;
    __Vfunc_mubi4_and_hi__45__a = 0;
    CData/*3:0*/ __Vfunc_mubi4_and_hi__45__b;
    __Vfunc_mubi4_and_hi__45__b = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__46__Vfuncout;
    __Vfunc_mubi4_and__46__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__46__a;
    __Vfunc_mubi4_and__46__a = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__46__b;
    __Vfunc_mubi4_and__46__b = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__46__a_in;
    __Vfunc_mubi4_and__46__a_in = 0;
    CData/*3:0*/ __Vfunc_mubi4_and__46__b_in;
    __Vfunc_mubi4_and__46__b_in = 0;
    CData/*3:0*/ __Vfunc_mubi4_bool_to_mubi__47__Vfuncout;
    __Vfunc_mubi4_bool_to_mubi__47__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_mubi4_bool_to_mubi__47__val;
    __Vfunc_mubi4_bool_to_mubi__47__val = 0;
    CData/*3:0*/ __Vfunc_mubi4_bool_to_mubi__48__Vfuncout;
    __Vfunc_mubi4_bool_to_mubi__48__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_mubi4_bool_to_mubi__48__val;
    __Vfunc_mubi4_bool_to_mubi__48__val = 0;
    CData/*7:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_4;
    VlWide<4>/*127:0*/ __Vtemp_5;
    // Body
    vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__err_internal 
        = (1U & (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wr_req) 
                  & (0U != (3U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                  >> 0x0000001bU)))) 
                 | ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__instr_error) 
                    | ((~ ((IData)(vlSymsp->TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_adc_ctrl_aon__DOT__u_reg__DOT__u_reg_if__DOT__u_err.__PVT__opcode_allowed) 
                           & ((IData)(vlSelf->__PVT__u_reg__DOT__u_reg_if__DOT__u_err->__PVT__addr_sz_chk) 
                              & ((IData)(vlSelf->__PVT__u_reg__DOT__u_reg_if__DOT__u_err->__PVT__mask_chk) 
                                 & ((4U == (7U & (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[3U] 
                                                  >> 8U))) 
                                    | ((1U == (7U & 
                                               (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[3U] 
                                                >> 8U))) 
                                       | (IData)(vlSelf->__PVT__u_reg__DOT__u_reg_if__DOT__u_err->__PVT__fulldata_chk))))))) 
                       | ((IData)(vlSelf->__PVT__u_reg__DOT__u_reg_if__DOT__u_err->__PVT__instr_type_err) 
                          | (IData)(vlSelf->__PVT__u_reg__DOT__u_reg_if__DOT__u_err->__PVT__instr_wr_err))))));
    vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__re_o 
        = ((~ (IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__err_internal)) 
           & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__rd_req));
    vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__we_o 
        = ((~ (IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__err_internal)) 
           & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wr_req));
    vlSelfRef.__PVT__u_reg__DOT__wr_err = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__we_o) 
                                           & (((0U 
                                                != 
                                                (3U 
                                                 & (~ 
                                                    ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                      << 9U) 
                                                     | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                        >> 0x00000017U))))) 
                                               & (vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write 
                                                  | (vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write 
                                                     >> 1U))) 
                                              | (((vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write 
                                                   >> 2U) 
                                                  & (0U 
                                                     != 
                                                     (3U 
                                                      & (~ 
                                                         ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                           << 9U) 
                                                          | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                             >> 0x00000017U)))))) 
                                                 | (((vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write 
                                                      >> 3U) 
                                                     & (0U 
                                                        != 
                                                        (1U 
                                                         & (~ 
                                                            ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                              << 9U) 
                                                             | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                >> 0x00000017U)))))) 
                                                    | (((vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write 
                                                         >> 4U) 
                                                        & (0U 
                                                           != 
                                                           (1U 
                                                            & (~ 
                                                               ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                 << 9U) 
                                                                | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                   >> 0x00000017U)))))) 
                                                       | (((vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write 
                                                            >> 5U) 
                                                           & (0U 
                                                              != 
                                                              (3U 
                                                               & (~ 
                                                                  ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                    << 9U) 
                                                                   | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                      >> 0x00000017U)))))) 
                                                          | (((vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write 
                                                               >> 6U) 
                                                              & (0U 
                                                                 != 
                                                                 (1U 
                                                                  & (~ 
                                                                     ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                       << 9U) 
                                                                      | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                         >> 0x00000017U)))))) 
                                                             | (((vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write 
                                                                  >> 7U) 
                                                                 & (0U 
                                                                    != 
                                                                    (3U 
                                                                     & (~ 
                                                                        ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                          << 9U) 
                                                                         | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                            >> 0x00000017U)))))) 
                                                                | (((vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write 
                                                                     >> 8U) 
                                                                    & (0U 
                                                                       != 
                                                                       (3U 
                                                                        & (~ 
                                                                           ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                             << 9U) 
                                                                            | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                               >> 0x00000017U)))))) 
                                                                   | (((vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write 
                                                                        >> 9U) 
                                                                       & (0U 
                                                                          != 
                                                                          (0x0000000fU 
                                                                           & (~ 
                                                                              ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                << 9U) 
                                                                               | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x00000017U)))))) 
                                                                      | (((vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write 
                                                                           >> 0x0000000aU) 
                                                                          & (0U 
                                                                             != 
                                                                             (0x0000000fU 
                                                                              & (~ 
                                                                                ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                << 9U) 
                                                                                | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x00000017U)))))) 
                                                                         | (((vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write 
                                                                              >> 0x0000000bU) 
                                                                             & (0U 
                                                                                != 
                                                                                (0x0000000fU 
                                                                                & (~ 
                                                                                ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                << 9U) 
                                                                                | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x00000017U)))))) 
                                                                            | (((vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write 
                                                                                >> 0x0000000cU) 
                                                                                & (0U 
                                                                                != 
                                                                                (0x0000000fU 
                                                                                & (~ 
                                                                                ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                << 9U) 
                                                                                | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x00000017U)))))) 
                                                                               | (((vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write 
                                                                                >> 0x0000000dU) 
                                                                                & (0U 
                                                                                != 
                                                                                (1U 
                                                                                & (~ 
                                                                                ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                << 9U) 
                                                                                | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x00000017U)))))) 
                                                                                | (((vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write 
                                                                                >> 0x0000000eU) 
                                                                                & (0U 
                                                                                != 
                                                                                (0x0000000fU 
                                                                                & (~ 
                                                                                ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                << 9U) 
                                                                                | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x00000017U)))))) 
                                                                                | (((vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write 
                                                                                >> 0x0000000fU) 
                                                                                & (0U 
                                                                                != 
                                                                                (0x0000000fU 
                                                                                & (~ 
                                                                                ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                << 9U) 
                                                                                | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x00000017U)))))) 
                                                                                | (((vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write 
                                                                                >> 0x00000010U) 
                                                                                & (0U 
                                                                                != 
                                                                                (0x0000000fU 
                                                                                & (~ 
                                                                                ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                << 9U) 
                                                                                | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x00000017U)))))) 
                                                                                | (((vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write 
                                                                                >> 0x00000011U) 
                                                                                & (0U 
                                                                                != 
                                                                                (0x0000000fU 
                                                                                & (~ 
                                                                                ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                << 9U) 
                                                                                | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x00000017U)))))) 
                                                                                | (((vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write 
                                                                                >> 0x00000012U) 
                                                                                & (0U 
                                                                                != 
                                                                                (0x0000000fU 
                                                                                & (~ 
                                                                                ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                << 9U) 
                                                                                | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x00000017U)))))) 
                                                                                | (((vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write 
                                                                                >> 0x00000013U) 
                                                                                & (0U 
                                                                                != 
                                                                                (0x0000000fU 
                                                                                & (~ 
                                                                                ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                << 9U) 
                                                                                | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x00000017U)))))) 
                                                                                | (((vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write 
                                                                                >> 0x00000014U) 
                                                                                & (0U 
                                                                                != 
                                                                                (0x0000000fU 
                                                                                & (~ 
                                                                                ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                << 9U) 
                                                                                | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x00000017U)))))) 
                                                                                | (((vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write 
                                                                                >> 0x00000015U) 
                                                                                & (0U 
                                                                                != 
                                                                                (0x0000000fU 
                                                                                & (~ 
                                                                                ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                << 9U) 
                                                                                | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x00000017U)))))) 
                                                                                | (((vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write 
                                                                                >> 0x00000016U) 
                                                                                & (0U 
                                                                                != 
                                                                                (3U 
                                                                                & (~ 
                                                                                ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                << 9U) 
                                                                                | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x00000017U)))))) 
                                                                                | (((vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write 
                                                                                >> 0x00000017U) 
                                                                                & (0U 
                                                                                != 
                                                                                (1U 
                                                                                & (~ 
                                                                                ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                << 9U) 
                                                                                | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x00000017U)))))) 
                                                                                | (((vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write 
                                                                                >> 0x00000018U) 
                                                                                & (0U 
                                                                                != 
                                                                                (7U 
                                                                                & (~ 
                                                                                ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                << 9U) 
                                                                                | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x00000017U)))))) 
                                                                                | (((vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write 
                                                                                >> 0x00000019U) 
                                                                                & (0U 
                                                                                != 
                                                                                (0x0000000fU 
                                                                                & (~ 
                                                                                ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                << 9U) 
                                                                                | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x00000017U)))))) 
                                                                                | (((vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write 
                                                                                >> 0x0000001aU) 
                                                                                & (0U 
                                                                                != 
                                                                                (1U 
                                                                                & (~ 
                                                                                ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                << 9U) 
                                                                                | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x00000017U)))))) 
                                                                                | (((vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write 
                                                                                >> 0x0000001bU) 
                                                                                & (0U 
                                                                                != 
                                                                                (0x0000000fU 
                                                                                & (~ 
                                                                                ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                << 9U) 
                                                                                | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x00000017U)))))) 
                                                                                | (((vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write 
                                                                                >> 0x0000001cU) 
                                                                                & (0U 
                                                                                != 
                                                                                (1U 
                                                                                & (~ 
                                                                                ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                << 9U) 
                                                                                | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x00000017U)))))) 
                                                                                | (((vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write 
                                                                                >> 0x0000001dU) 
                                                                                & (0U 
                                                                                != 
                                                                                (0x0000000fU 
                                                                                & (~ 
                                                                                ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                << 9U) 
                                                                                | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x00000017U)))))) 
                                                                                | ((0U 
                                                                                != 
                                                                                (1U 
                                                                                & (~ 
                                                                                ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                << 9U) 
                                                                                | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_xbar_main__DOT__u_asf_35__DOT__reqfifo__DOT__rdata_o[1U] 
                                                                                >> 0x00000017U))))) 
                                                                                & (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc0000000U 
                                                                                & vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write))))))))))))))))))))))))))))))))));
    vlSelfRef.__PVT__u_reg__DOT__addrmiss = ((~ (0U 
                                                 != vlSelfRef.__PVT__u_reg__DOT__addr_hit)) 
                                             & ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__re_o) 
                                                | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__we_o)));
    vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__error_i 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__addrmiss) 
           | ((IData)(vlSelfRef.__PVT__u_reg__DOT__wr_err) 
              | (IData)(vlSelf->__PVT__u_reg__DOT__u_chk->err_o)));
    vlSelfRef.u_reg__DOT____VdfgRegularize_ha30dc5a7_0_7 
        = ((~ (IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__error_i)) 
           & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__re_o));
    u_reg__DOT____VdfgRegularize_ha30dc5a7_0_6 = ((~ (IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__error_i)) 
                                                  & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__we_o));
    vlSelfRef.__PVT__u_reg__DOT__u_target_nack_count__DOT__we 
        = ((vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write 
            >> 0x0000001aU) & (IData)(vlSelfRef.u_reg__DOT____VdfgRegularize_ha30dc5a7_0_7));
    vlSelfRef.__PVT__u_reg__DOT__u_acqdata_abyte__DOT__re 
        = ((vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write 
            >> 0x00000016U) & (IData)(vlSelfRef.u_reg__DOT____VdfgRegularize_ha30dc5a7_0_7));
    vlSelfRef.__PVT__u_reg__DOT__u_rdata__DOT__re = 
        ((vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write 
          >> 6U) & (IData)(vlSelfRef.u_reg__DOT____VdfgRegularize_ha30dc5a7_0_7));
    vlSelfRef.__PVT__u_reg__DOT__u_ctrl_ack_ctrl_en__DOT__we 
        = ((vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write 
            >> 4U) & (IData)(u_reg__DOT____VdfgRegularize_ha30dc5a7_0_6));
    vlSelfRef.__PVT__u_reg__DOT__u_fdata_fbyte__DOT__we 
        = ((vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write 
            >> 7U) & (IData)(u_reg__DOT____VdfgRegularize_ha30dc5a7_0_6));
    vlSelfRef.__PVT__u_reg__DOT__u_target_fifo_config_acq_thresh__DOT__we 
        = ((vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write 
            >> 0x0000000aU) & (IData)(u_reg__DOT____VdfgRegularize_ha30dc5a7_0_6));
    vlSelfRef.__PVT__u_reg__DOT__u_ovrd_sclval__DOT__we 
        = ((vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write 
            >> 0x0000000dU) & (IData)(u_reg__DOT____VdfgRegularize_ha30dc5a7_0_6));
    vlSelfRef.__PVT__u_reg__DOT__u_timing0_thigh__DOT__we 
        = ((vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write 
            >> 0x0000000fU) & (IData)(u_reg__DOT____VdfgRegularize_ha30dc5a7_0_6));
    vlSelfRef.__PVT__u_reg__DOT__u_txdata0_qe__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i 
        = ((vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write 
            >> 0x00000017U) & (IData)(u_reg__DOT____VdfgRegularize_ha30dc5a7_0_6));
    vlSelfRef.__PVT__u_reg__DOT__u_host_nack_handler_timeout_en__DOT__we 
        = ((vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write 
            >> 0x0000001dU) & (IData)(u_reg__DOT____VdfgRegularize_ha30dc5a7_0_6));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_enable_acq_stretch__DOT__we 
        = ((vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write 
            >> 1U) & (IData)(u_reg__DOT____VdfgRegularize_ha30dc5a7_0_6));
    vlSelfRef.__PVT__u_reg__DOT__u_fifo_ctrl_acqrst__DOT__we 
        = ((vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write 
            >> 8U) & (IData)(u_reg__DOT____VdfgRegularize_ha30dc5a7_0_6));
    vlSelfRef.__PVT__u_reg__DOT__u_host_fifo_config_fmt_thresh__DOT__we 
        = ((vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write 
            >> 9U) & (IData)(u_reg__DOT____VdfgRegularize_ha30dc5a7_0_6));
    vlSelfRef.__PVT__u_reg__DOT__u_timing1_t_f__DOT__we 
        = ((vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write 
            >> 0x00000010U) & (IData)(u_reg__DOT____VdfgRegularize_ha30dc5a7_0_6));
    vlSelfRef.__PVT__u_reg__DOT__u_timing2_thd_sta__DOT__we 
        = ((vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write 
            >> 0x00000011U) & (IData)(u_reg__DOT____VdfgRegularize_ha30dc5a7_0_6));
    vlSelfRef.__PVT__u_reg__DOT__u_timing3_thd_dat__DOT__we 
        = ((vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write 
            >> 0x00000012U) & (IData)(u_reg__DOT____VdfgRegularize_ha30dc5a7_0_6));
    vlSelfRef.__PVT__u_reg__DOT__u_timing4_t_buf__DOT__we 
        = ((vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write 
            >> 0x00000013U) & (IData)(u_reg__DOT____VdfgRegularize_ha30dc5a7_0_6));
    vlSelfRef.__PVT__u_reg__DOT__u_timeout_ctrl_en__DOT__we 
        = ((vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write 
            >> 0x00000014U) & (IData)(u_reg__DOT____VdfgRegularize_ha30dc5a7_0_6));
    vlSelfRef.__PVT__u_reg__DOT__u_target_id_address0__DOT__we 
        = ((vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write 
            >> 0x00000015U) & (IData)(u_reg__DOT____VdfgRegularize_ha30dc5a7_0_6));
    vlSelfRef.__PVT__u_reg__DOT__u_host_timeout_ctrl__DOT__we 
        = ((vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write 
            >> 0x00000018U) & (IData)(u_reg__DOT____VdfgRegularize_ha30dc5a7_0_6));
    vlSelfRef.__PVT__u_reg__DOT__u_target_timeout_ctrl_en__DOT__we 
        = ((vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write 
            >> 0x00000019U) & (IData)(u_reg__DOT____VdfgRegularize_ha30dc5a7_0_6));
    vlSelfRef.__PVT__u_reg__DOT__u_target_events_arbitration_lost__DOT__we 
        = ((vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write 
            >> 0x0000001fU) & (IData)(u_reg__DOT____VdfgRegularize_ha30dc5a7_0_6));
    vlSelfRef.__PVT__u_reg__DOT__u_controller_events_arbitration_lost__DOT__we 
        = ((vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write 
            >> 0x0000001eU) & (IData)(u_reg__DOT____VdfgRegularize_ha30dc5a7_0_6));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_cmd_complete__DOT__we 
        = (vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write 
           & (IData)(u_reg__DOT____VdfgRegularize_ha30dc5a7_0_6));
    vlSelfRef.__PVT__u_reg__DOT__u_alert_test__DOT__we 
        = ((vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write 
            >> 3U) & (IData)(u_reg__DOT____VdfgRegularize_ha30dc5a7_0_6));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_test_acq_stretch__DOT__we 
        = ((vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write 
            >> 2U) & (IData)(u_reg__DOT____VdfgRegularize_ha30dc5a7_0_6));
    vlSelfRef.__PVT__u_reg__DOT__u_target_ack_ctrl_nack__DOT__we 
        = ((vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_write 
            >> 0x0000001bU) & (IData)(u_reg__DOT____VdfgRegularize_ha30dc5a7_0_6));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__fifo_incr_rptr 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_oup_buf__DOT__rvalid_o) 
           & ((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__under_rst)) 
              & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_rdata__DOT__re)));
    vlSelfRef.__VdfgRegularize_ha785dde0_1_7 = (1U 
                                                & ((~ 
                                                    (((1U 
                                                       <= (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_oup_buf__DOT__depth_o)) 
                                                      & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__sram_read_in_prev_cyc_q)) 
                                                     | (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_oup_buf__DOT__full_o))) 
                                                   | ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_oup_buf__DOT__rvalid_o) 
                                                      & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_rdata__DOT__re))));
    vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__8__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_ctrl_ack_ctrl_en__DOT__we) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_fdata_fbyte__DOT__we));
    vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__10__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_ovrd_sclval__DOT__we) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_timing0_thigh__DOT__we));
    vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__19__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_fifo_ctrl_acqrst__DOT__we) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_host_fifo_config_fmt_thresh__DOT__we));
    vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__23__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_timing1_t_f__DOT__we) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_timing2_thd_sta__DOT__we));
    vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__24__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_timing3_thd_dat__DOT__we) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_timing4_t_buf__DOT__we));
    vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__25__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_timeout_ctrl_en__DOT__we) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_target_id_address0__DOT__we));
    vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__27__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_host_timeout_ctrl__DOT__we) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_target_timeout_ctrl_en__DOT__we));
    vlSelfRef.__PVT__u_reg__DOT__u_target_events_tx_pending__DOT__qe 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_target_events_tx_pending__DOT__de) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_target_events_arbitration_lost__DOT__we));
    vlSelfRef.__PVT__u_reg__DOT__u_target_events_bus_timeout__DOT__qe 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_target_events_bus_timeout__DOT__de) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_target_events_arbitration_lost__DOT__we));
    vlSelfRef.__PVT__u_reg__DOT__u_target_events_arbitration_lost__DOT__qe 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__event_tx_arbitration_lost) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_target_events_arbitration_lost__DOT__we));
    vlSelfRef.__PVT__u_reg__DOT__u_target_events_tx_pending__DOT__wr_data 
        = ((~ (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
               & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_target_events_arbitration_lost__DOT__we))) 
           & ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_target_events_tx_pending__DOT__de) 
              | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_target_events_tx_pending__q)));
    vlSelfRef.__PVT__u_reg__DOT__u_target_events_bus_timeout__DOT__wr_data 
        = ((~ ((vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                >> 1U) & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_target_events_arbitration_lost__DOT__we))) 
           & ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_target_events_bus_timeout__DOT__de) 
              | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_target_events_bus_timeout__q)));
    vlSelfRef.__PVT__u_reg__DOT__u_target_events_arbitration_lost__DOT__wr_data 
        = ((~ ((vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                >> 2U) & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_target_events_arbitration_lost__DOT__we))) 
           & ((IData)(vlSelfRef.__PVT__i2c_core__DOT__event_tx_arbitration_lost) 
              | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_target_events_arbitration_lost__q)));
    vlSelfRef.__PVT__u_reg__DOT__u_controller_events_nack__DOT__qe 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__event_nak) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_controller_events_arbitration_lost__DOT__we));
    vlSelfRef.__PVT__u_reg__DOT__u_controller_events_unhandled_nack_timeout__DOT__qe 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__unhandled_nak_cnt_expired) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_controller_events_arbitration_lost__DOT__we));
    vlSelfRef.__PVT__u_reg__DOT__u_controller_events_bus_timeout__DOT__qe 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_controller_events_bus_timeout__DOT__de) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_controller_events_arbitration_lost__DOT__we));
    vlSelfRef.__PVT__u_reg__DOT__u_controller_events_arbitration_lost__DOT__qe 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_controller_events_arbitration_lost__DOT__de) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_controller_events_arbitration_lost__DOT__we));
    vlSelfRef.__PVT__u_reg__DOT__u_controller_events_nack__DOT__wr_data 
        = ((~ (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
               & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_controller_events_arbitration_lost__DOT__we))) 
           & ((IData)(vlSelfRef.__PVT__i2c_core__DOT__event_nak) 
              | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_controller_events_nack__q)));
    vlSelfRef.__PVT__u_reg__DOT__u_controller_events_unhandled_nack_timeout__DOT__wr_data 
        = ((~ ((vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                >> 1U) & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_controller_events_arbitration_lost__DOT__we))) 
           & ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__unhandled_nak_cnt_expired) 
              | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_controller_events_unhandled_nack_timeout__q)));
    vlSelfRef.__PVT__u_reg__DOT__u_controller_events_bus_timeout__DOT__wr_data 
        = ((~ ((vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                >> 2U) & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_controller_events_arbitration_lost__DOT__we))) 
           & ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_controller_events_bus_timeout__DOT__de) 
              | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_controller_events_bus_timeout__q)));
    vlSelfRef.__PVT__u_reg__DOT__u_controller_events_arbitration_lost__DOT__wr_data 
        = ((~ ((vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                >> 3U) & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_controller_events_arbitration_lost__DOT__we))) 
           & ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_controller_events_arbitration_lost__DOT__de) 
              | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_controller_events_arbitration_lost__q)));
    vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__30__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_controller_events_arbitration_lost__DOT__we) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_target_events_arbitration_lost__DOT__we));
    vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__15__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_cmd_complete__DOT__we) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_enable_acq_stretch__DOT__we));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_scl_interference__DOT__de 
        = (((vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
             >> 5U) & (0x00007fffU == (0x00007fffU 
                                       & (- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_test_acq_stretch__DOT__we)))))) 
           | (IData)(vlSelfRef.__PVT__i2c_core__DOT__event_scl_interference));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_sda_interference__DOT__de 
        = (((vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
             >> 6U) & (0x00007fffU == (0x00007fffU 
                                       & (- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_test_acq_stretch__DOT__we)))))) 
           | (IData)(vlSelfRef.__PVT__i2c_core__DOT__intr_hw_sda_interference__DOT__event_intr_i));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_sda_unstable__DOT__de 
        = (((vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
             >> 8U) & (0x00007fffU == (0x00007fffU 
                                       & (- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_test_acq_stretch__DOT__we)))))) 
           | (IData)(vlSelfRef.__PVT__i2c_core__DOT__event_sda_unstable));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_overflow__DOT__de 
        = (((vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
             >> 3U) & (0x00007fffU == (0x00007fffU 
                                       & (- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_test_acq_stretch__DOT__we)))))) 
           | ((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__fifo_wready_o)) 
              & (IData)(vlSelfRef.__PVT__i2c_core__DOT__rx_fifo_wvalid)));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_cmd_complete__DOT__de 
        = (((vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
             >> 9U) & (0x00007fffU == (0x00007fffU 
                                       & (- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_test_acq_stretch__DOT__we)))))) 
           | ((IData)(vlSelfRef.__PVT__i2c_core__DOT__event_controller_cmd_complete) 
              | (IData)(vlSelfRef.__PVT__i2c_core__DOT__event_target_cmd_complete)));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_host_timeout__DOT__de 
        = (((vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
             >> 0x0000000eU) & (0x00007fffU == (0x00007fffU 
                                                & (- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_test_acq_stretch__DOT__we)))))) 
           | ((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__target_idle)) 
              & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_bus_monitor__DOT__bus_inactive_timeout_det)));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_stretch_timeout__DOT__de 
        = (((vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
             >> 7U) & (0x00007fffU == (0x00007fffU 
                                       & (- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_test_acq_stretch__DOT__we)))))) 
           | ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__stretch_en) 
              & (((~ (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timeout_ctrl_mode__q)) 
                  & (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timeout_ctrl_en__q)) 
                 & (vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__stretch_idle_cnt 
                    > vlSelfRef.u_reg__DOT____Vcellout__u_timeout_ctrl_val__q))));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_unexp_stop__DOT__de 
        = (((vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
             >> 0x0000000dU) & (0x00007fffU == (0x00007fffU 
                                                & (- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_test_acq_stretch__DOT__we)))))) 
           | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_enabletarget__q) 
              & ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__rw_bit_q) 
                 & ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__xfer_for_us_q) 
                    & ((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__expect_stop)) 
                       & (IData)(vlSelfRef.__PVT__i2c_core__DOT__stop_detect))))));
    vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__16__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_test_acq_stretch__DOT__we) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_alert_test__DOT__we));
    vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_buf__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i 
        = (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_target_events_arbitration_lost__DOT__we) 
            << 0x0000001fU) | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_controller_events_arbitration_lost__DOT__we) 
                                << 0x0000001eU) | (
                                                   ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_host_nack_handler_timeout_en__DOT__we) 
                                                    << 0x0000001dU) 
                                                   | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_target_ack_ctrl_nack__DOT__we) 
                                                       << 0x0000001bU) 
                                                      | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_target_timeout_ctrl_en__DOT__we) 
                                                          << 0x00000019U) 
                                                         | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_host_timeout_ctrl__DOT__we) 
                                                             << 0x00000018U) 
                                                            | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_txdata0_qe__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i) 
                                                                << 0x00000017U) 
                                                               | ((((((IData)(vlSelfRef.__PVT__u_reg__DOT__u_target_id_address0__DOT__we) 
                                                                      << 3U) 
                                                                     | ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_timeout_ctrl_en__DOT__we) 
                                                                        << 2U)) 
                                                                    | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_timing4_t_buf__DOT__we) 
                                                                        << 1U) 
                                                                       | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_timing3_thd_dat__DOT__we))) 
                                                                   << 0x00000012U) 
                                                                  | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_timing2_thd_sta__DOT__we) 
                                                                      << 0x00000011U) 
                                                                     | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_timing1_t_f__DOT__we) 
                                                                         << 0x00000010U) 
                                                                        | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_timing0_thigh__DOT__we) 
                                                                            << 0x0000000fU) 
                                                                           | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_ovrd_sclval__DOT__we) 
                                                                               << 0x0000000dU) 
                                                                              | ((((IData)(vlSelfRef.__PVT__u_reg__DOT__u_target_fifo_config_acq_thresh__DOT__we) 
                                                                                << 0x0000000aU) 
                                                                                | ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_host_fifo_config_fmt_thresh__DOT__we) 
                                                                                << 9U)) 
                                                                                | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_fifo_ctrl_acqrst__DOT__we) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_fdata_fbyte__DOT__we) 
                                                                                << 7U) 
                                                                                | ((((IData)(vlSelfRef.__PVT__u_reg__DOT__u_ctrl_ack_ctrl_en__DOT__we) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_alert_test__DOT__we) 
                                                                                << 3U) 
                                                                                | ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_test_acq_stretch__DOT__we) 
                                                                                << 2U))) 
                                                                                | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_enable_acq_stretch__DOT__we) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_cmd_complete__DOT__we))))))))))))))))));
    __Vtemp_1[1U] = (((IData)((((QData)((IData)(((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_fdata_fbyte__q) 
                                                   << 9U) 
                                                  | ((IData)(vlSelfRef.__PVT__u_reg__DOT__fdata_qe) 
                                                     << 8U)) 
                                                 | ((((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_fifo_ctrl_txrst__q) 
                                                        << 3U) 
                                                       | ((IData)(vlSelfRef.__PVT__u_reg__DOT__fifo_ctrl_qe) 
                                                          << 2U)) 
                                                      | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_fifo_ctrl_acqrst__q) 
                                                          << 1U) 
                                                         | (IData)(vlSelfRef.__PVT__u_reg__DOT__fifo_ctrl_qe))) 
                                                     << 4U) 
                                                    | ((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_fifo_ctrl_fmtrst__q) 
                                                         << 3U) 
                                                        | ((IData)(vlSelfRef.__PVT__u_reg__DOT__fifo_ctrl_qe) 
                                                           << 2U)) 
                                                       | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_fifo_ctrl_rxrst__q) 
                                                           << 1U) 
                                                          | (IData)(vlSelfRef.__PVT__u_reg__DOT__fifo_ctrl_qe))))))) 
                                << 0x0000001aU) | (QData)((IData)(
                                                                  ((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_host_fifo_config_fmt_thresh__q) 
                                                                     << 0x0000000eU) 
                                                                    | ((IData)(vlSelfRef.__PVT__u_reg__DOT__host_fifo_config_qe) 
                                                                       << 0x0000000dU)) 
                                                                   | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_host_fifo_config_rx_thresh__q) 
                                                                       << 1U) 
                                                                      | (IData)(vlSelfRef.__PVT__u_reg__DOT__host_fifo_config_qe))))))) 
                      << 0x0000000aU) | (IData)(((((QData)((IData)(
                                                                   (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_target_fifo_config_acq_thresh__q) 
                                                                     << 1U) 
                                                                    | (IData)(vlSelfRef.__PVT__u_reg__DOT__target_fifo_config_qe)))) 
                                                   << 0x0000001dU) 
                                                  | (QData)((IData)(
                                                                    ((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_target_fifo_config_tx_thresh__q) 
                                                                       << 0x00000011U) 
                                                                      | (((IData)(vlSelfRef.__PVT__u_reg__DOT__target_fifo_config_qe) 
                                                                          << 0x00000010U) 
                                                                         | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ovrd_sdaval__q) 
                                                                             << 0x0000000fU) 
                                                                            | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ovrd_sclval__q) 
                                                                               << 0x0000000eU)))) 
                                                                     | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ovrd_txovrden__q) 
                                                                         << 0x0000000dU) 
                                                                        | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timing0_tlow__q)))))) 
                                                 >> 0x00000020U)));
    __Vtemp_1[2U] = (((IData)((((QData)((IData)(((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_fdata_fbyte__q) 
                                                   << 9U) 
                                                  | ((IData)(vlSelfRef.__PVT__u_reg__DOT__fdata_qe) 
                                                     << 8U)) 
                                                 | ((((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_fifo_ctrl_txrst__q) 
                                                        << 3U) 
                                                       | ((IData)(vlSelfRef.__PVT__u_reg__DOT__fifo_ctrl_qe) 
                                                          << 2U)) 
                                                      | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_fifo_ctrl_acqrst__q) 
                                                          << 1U) 
                                                         | (IData)(vlSelfRef.__PVT__u_reg__DOT__fifo_ctrl_qe))) 
                                                     << 4U) 
                                                    | ((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_fifo_ctrl_fmtrst__q) 
                                                         << 3U) 
                                                        | ((IData)(vlSelfRef.__PVT__u_reg__DOT__fifo_ctrl_qe) 
                                                           << 2U)) 
                                                       | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_fifo_ctrl_rxrst__q) 
                                                           << 1U) 
                                                          | (IData)(vlSelfRef.__PVT__u_reg__DOT__fifo_ctrl_qe))))))) 
                                << 0x0000001aU) | (QData)((IData)(
                                                                  ((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_host_fifo_config_fmt_thresh__q) 
                                                                     << 0x0000000eU) 
                                                                    | ((IData)(vlSelfRef.__PVT__u_reg__DOT__host_fifo_config_qe) 
                                                                       << 0x0000000dU)) 
                                                                   | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_host_fifo_config_rx_thresh__q) 
                                                                       << 1U) 
                                                                      | (IData)(vlSelfRef.__PVT__u_reg__DOT__host_fifo_config_qe))))))) 
                      >> 0x00000016U) | ((IData)(((
                                                   ((QData)((IData)(
                                                                    ((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_fdata_fbyte__q) 
                                                                       << 9U) 
                                                                      | ((IData)(vlSelfRef.__PVT__u_reg__DOT__fdata_qe) 
                                                                         << 8U)) 
                                                                     | ((((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_fifo_ctrl_txrst__q) 
                                                                            << 3U) 
                                                                           | ((IData)(vlSelfRef.__PVT__u_reg__DOT__fifo_ctrl_qe) 
                                                                              << 2U)) 
                                                                          | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_fifo_ctrl_acqrst__q) 
                                                                              << 1U) 
                                                                             | (IData)(vlSelfRef.__PVT__u_reg__DOT__fifo_ctrl_qe))) 
                                                                         << 4U) 
                                                                        | ((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_fifo_ctrl_fmtrst__q) 
                                                                             << 3U) 
                                                                            | ((IData)(vlSelfRef.__PVT__u_reg__DOT__fifo_ctrl_qe) 
                                                                               << 2U)) 
                                                                           | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_fifo_ctrl_rxrst__q) 
                                                                               << 1U) 
                                                                              | (IData)(vlSelfRef.__PVT__u_reg__DOT__fifo_ctrl_qe))))))) 
                                                    << 0x0000001aU) 
                                                   | (QData)((IData)(
                                                                     ((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_host_fifo_config_fmt_thresh__q) 
                                                                        << 0x0000000eU) 
                                                                       | ((IData)(vlSelfRef.__PVT__u_reg__DOT__host_fifo_config_qe) 
                                                                          << 0x0000000dU)) 
                                                                      | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_host_fifo_config_rx_thresh__q) 
                                                                          << 1U) 
                                                                         | (IData)(vlSelfRef.__PVT__u_reg__DOT__host_fifo_config_qe)))))) 
                                                  >> 0x00000020U)) 
                                         << 0x0000000aU));
    __Vtemp_4[1U] = (((IData)((((QData)((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_target_timeout_ctrl_val__q)) 
                                << 0x0000000aU) | (QData)((IData)(
                                                                  (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_target_nack_count__q) 
                                                                    << 2U) 
                                                                   | ((2U 
                                                                       & (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                                          >> 0x0000001eU)) 
                                                                      | (3U 
                                                                         == 
                                                                         (3U 
                                                                          & (- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_target_ack_ctrl_nack__DOT__we))))))))))) 
                      << 0x00000011U) | (IData)(((((QData)((IData)(
                                                                   ((0x000007fcU 
                                                                     & (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                                        << 2U)) 
                                                                    | (((3U 
                                                                         == 
                                                                         (3U 
                                                                          & (- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_target_ack_ctrl_nack__DOT__we))))) 
                                                                        << 1U) 
                                                                       | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_host_nack_handler_timeout_en__q))))) 
                                                   << 0x00000026U) 
                                                  | (((QData)((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_host_nack_handler_timeout_val__q)) 
                                                      << 7U) 
                                                     | (QData)((IData)(
                                                                       ((((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_controller_events_arbitration_lost__q) 
                                                                            << 3U) 
                                                                           | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_controller_events_bus_timeout__q) 
                                                                              << 2U)) 
                                                                          | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_controller_events_unhandled_nack_timeout__q) 
                                                                              << 1U) 
                                                                             | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_controller_events_nack__q))) 
                                                                         << 3U) 
                                                                        | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_target_events_arbitration_lost__q) 
                                                                            << 2U) 
                                                                           | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_target_events_bus_timeout__q) 
                                                                               << 1U) 
                                                                              | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_target_events_tx_pending__q)))))))) 
                                                 >> 0x00000020U)));
    __Vtemp_5[2U] = ((((((IData)(vlSelfRef.__PVT__u_reg__DOT__u_acqdata_abyte__DOT__re) 
                         << 0x0000001eU) | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_txdata__q) 
                                             << 0x00000016U) 
                                            | ((IData)(vlSelfRef.__PVT__u_reg__DOT__txdata_qe) 
                                               << 0x00000015U))) 
                       | ((vlSelfRef.u_reg__DOT____Vcellout__u_host_timeout_ctrl__q 
                           << 1U) | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_target_timeout_ctrl_en__q))) 
                      << 0x0000001aU) | (((IData)((
                                                   ((QData)((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_target_timeout_ctrl_val__q)) 
                                                    << 0x0000000aU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_target_nack_count__q) 
                                                                       << 2U) 
                                                                      | ((2U 
                                                                          & (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                                             >> 0x0000001eU)) 
                                                                         | (3U 
                                                                            == 
                                                                            (3U 
                                                                             & (- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_target_ack_ctrl_nack__DOT__we))))))))))) 
                                          >> 0x0000000fU) 
                                         | ((IData)(
                                                    ((((QData)((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_target_timeout_ctrl_val__q)) 
                                                       << 0x0000000aU) 
                                                      | (QData)((IData)(
                                                                        (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_target_nack_count__q) 
                                                                          << 2U) 
                                                                         | ((2U 
                                                                             & (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                                                >> 0x0000001eU)) 
                                                                            | (3U 
                                                                               == 
                                                                               (3U 
                                                                                & (- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_target_ack_ctrl_nack__DOT__we)))))))))) 
                                                     >> 0x00000020U)) 
                                            << 0x00000011U)));
    vlSelfRef.__PVT__u_reg__DOT__reg2hw[0U] = (IData)(
                                                      (((QData)((IData)(
                                                                        ((0x000007fcU 
                                                                          & (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                                             << 2U)) 
                                                                         | (((3U 
                                                                              == 
                                                                              (3U 
                                                                               & (- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_target_ack_ctrl_nack__DOT__we))))) 
                                                                             << 1U) 
                                                                            | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_host_nack_handler_timeout_en__q))))) 
                                                        << 0x00000026U) 
                                                       | (((QData)((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_host_nack_handler_timeout_val__q)) 
                                                           << 7U) 
                                                          | (QData)((IData)(
                                                                            ((((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_controller_events_arbitration_lost__q) 
                                                                                << 3U) 
                                                                                | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_controller_events_bus_timeout__q) 
                                                                                << 2U)) 
                                                                               | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_controller_events_unhandled_nack_timeout__q) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_controller_events_nack__q))) 
                                                                              << 3U) 
                                                                             | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_target_events_arbitration_lost__q) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_target_events_bus_timeout__q) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_target_events_tx_pending__q)))))))));
    vlSelfRef.__PVT__u_reg__DOT__reg2hw[1U] = __Vtemp_4[1U];
    vlSelfRef.__PVT__u_reg__DOT__reg2hw[2U] = __Vtemp_5[2U];
    vlSelfRef.__PVT__u_reg__DOT__reg2hw[3U] = (((((IData)(vlSelfRef.__PVT__u_reg__DOT__u_acqdata_abyte__DOT__re) 
                                                  << 0x0000001eU) 
                                                 | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_txdata__q) 
                                                     << 0x00000016U) 
                                                    | ((IData)(vlSelfRef.__PVT__u_reg__DOT__txdata_qe) 
                                                       << 0x00000015U))) 
                                                | ((vlSelfRef.u_reg__DOT____Vcellout__u_host_timeout_ctrl__q 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_target_timeout_ctrl_en__q))) 
                                               >> 6U);
    vlSelfRef.__PVT__u_reg__DOT__reg2hw[4U] = ((0xfff80000U 
                                                & (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_target_id_mask1__q) 
                                                    << 0x0000001aU) 
                                                   | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_target_id_address1__q) 
                                                      << 0x00000013U))) 
                                               | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_target_id_mask0__q) 
                                                   << 0x0000000cU) 
                                                  | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_target_id_address0__q) 
                                                      << 5U) 
                                                     | ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_acqdata_abyte__DOT__re) 
                                                        << 1U))));
    vlSelfRef.__PVT__u_reg__DOT__reg2hw[5U] = (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timeout_ctrl_mode__q) 
                                                << 0x0000001fU) 
                                               | ((vlSelfRef.u_reg__DOT____Vcellout__u_timeout_ctrl_val__q 
                                                   << 1U) 
                                                  | (0x0007ffffU 
                                                     & ((0x0007ffffU 
                                                         & ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_target_id_mask1__q) 
                                                            >> 6U)) 
                                                        | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_target_id_address1__q) 
                                                           >> 0x0000000dU)))));
    vlSelfRef.__PVT__u_reg__DOT__reg2hw[6U] = (IData)(
                                                      (((QData)((IData)(
                                                                        (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timing2_tsu_sta__q) 
                                                                          << 0x0000000dU) 
                                                                         | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timing3_thd_dat__q)))) 
                                                        << 0x00000024U) 
                                                       | (((QData)((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timing3_tsu_dat__q)) 
                                                           << 0x0000001bU) 
                                                          | (QData)((IData)(
                                                                            (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timing4_t_buf__q) 
                                                                              << 0x0000000eU) 
                                                                             | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timing4_tsu_sto__q) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timeout_ctrl_en__q))))))));
    vlSelfRef.__PVT__u_reg__DOT__reg2hw[7U] = (((IData)(
                                                        (((QData)((IData)(
                                                                          (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timing0_thigh__q) 
                                                                            << 0x00000013U) 
                                                                           | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timing1_t_f__q) 
                                                                               << 0x0000000aU) 
                                                                              | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timing1_t_r__q))))) 
                                                          << 0x0000000dU) 
                                                         | (QData)((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timing2_thd_sta__q)))) 
                                                << 0x0000001eU) 
                                               | (IData)(
                                                         ((((QData)((IData)(
                                                                            (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timing2_tsu_sta__q) 
                                                                              << 0x0000000dU) 
                                                                             | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timing3_thd_dat__q)))) 
                                                            << 0x00000024U) 
                                                           | (((QData)((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timing3_tsu_dat__q)) 
                                                               << 0x0000001bU) 
                                                              | (QData)((IData)(
                                                                                (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timing4_t_buf__q) 
                                                                                << 0x0000000eU) 
                                                                                | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timing4_tsu_sto__q) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timeout_ctrl_en__q))))))) 
                                                          >> 0x00000020U)));
    vlSelfRef.__PVT__u_reg__DOT__reg2hw[8U] = (((IData)(
                                                        (((QData)((IData)(
                                                                          (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timing0_thigh__q) 
                                                                            << 0x00000013U) 
                                                                           | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timing1_t_f__q) 
                                                                               << 0x0000000aU) 
                                                                              | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timing1_t_r__q))))) 
                                                          << 0x0000000dU) 
                                                         | (QData)((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timing2_thd_sta__q)))) 
                                                >> 2U) 
                                               | ((IData)(
                                                          ((((QData)((IData)(
                                                                             (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timing0_thigh__q) 
                                                                               << 0x00000013U) 
                                                                              | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timing1_t_f__q) 
                                                                                << 0x0000000aU) 
                                                                                | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timing1_t_r__q))))) 
                                                             << 0x0000000dU) 
                                                            | (QData)((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timing2_thd_sta__q))) 
                                                           >> 0x00000020U)) 
                                                  << 0x0000001eU));
    vlSelfRef.__PVT__u_reg__DOT__reg2hw[9U] = (((IData)(
                                                        (((QData)((IData)(
                                                                          (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_target_fifo_config_acq_thresh__q) 
                                                                            << 1U) 
                                                                           | (IData)(vlSelfRef.__PVT__u_reg__DOT__target_fifo_config_qe)))) 
                                                          << 0x0000001dU) 
                                                         | (QData)((IData)(
                                                                           ((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_target_fifo_config_tx_thresh__q) 
                                                                              << 0x00000011U) 
                                                                             | (((IData)(vlSelfRef.__PVT__u_reg__DOT__target_fifo_config_qe) 
                                                                                << 0x00000010U) 
                                                                                | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ovrd_sdaval__q) 
                                                                                << 0x0000000fU) 
                                                                                | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ovrd_sclval__q) 
                                                                                << 0x0000000eU)))) 
                                                                            | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ovrd_txovrden__q) 
                                                                                << 0x0000000dU) 
                                                                               | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timing0_tlow__q))))))) 
                                                << 0x0000000bU) 
                                               | ((IData)(
                                                          ((((QData)((IData)(
                                                                             (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timing0_thigh__q) 
                                                                               << 0x00000013U) 
                                                                              | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timing1_t_f__q) 
                                                                                << 0x0000000aU) 
                                                                                | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timing1_t_r__q))))) 
                                                             << 0x0000000dU) 
                                                            | (QData)((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timing2_thd_sta__q))) 
                                                           >> 0x00000020U)) 
                                                  >> 2U));
    vlSelfRef.__PVT__u_reg__DOT__reg2hw[0x0000000aU] 
        = (((IData)((((QData)((IData)((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_target_fifo_config_acq_thresh__q) 
                                        << 1U) | (IData)(vlSelfRef.__PVT__u_reg__DOT__target_fifo_config_qe)))) 
                      << 0x0000001dU) | (QData)((IData)(
                                                        ((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_target_fifo_config_tx_thresh__q) 
                                                           << 0x00000011U) 
                                                          | (((IData)(vlSelfRef.__PVT__u_reg__DOT__target_fifo_config_qe) 
                                                              << 0x00000010U) 
                                                             | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ovrd_sdaval__q) 
                                                                 << 0x0000000fU) 
                                                                | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ovrd_sclval__q) 
                                                                   << 0x0000000eU)))) 
                                                         | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ovrd_txovrden__q) 
                                                             << 0x0000000dU) 
                                                            | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timing0_tlow__q))))))) 
            >> 0x00000015U) | (__Vtemp_1[1U] << 0x0000000bU));
    vlSelfRef.__PVT__u_reg__DOT__reg2hw[0x0000000bU] 
        = ((__Vtemp_1[1U] >> 0x00000015U) | (__Vtemp_1[2U] 
                                             << 0x0000000bU));
    vlSelfRef.__PVT__u_reg__DOT__reg2hw[0x0000000cU] 
        = ((0xfff80000U & vlSelfRef.__PVT__u_reg__DOT__reg2hw[0x0000000cU]) 
           | ((((((IData)(vlSelfRef.__PVT__u_reg__DOT__u_rdata__DOT__re) 
                  << 5U) | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_fdata_nakok__q) 
                             << 4U) | ((IData)(vlSelfRef.__PVT__u_reg__DOT__fdata_qe) 
                                       << 3U))) | (
                                                   ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_fdata_rcont__q) 
                                                    << 2U) 
                                                   | (((IData)(vlSelfRef.__PVT__u_reg__DOT__fdata_qe) 
                                                       << 1U) 
                                                      | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_fdata_readb__q)))) 
               << 5U) | ((((IData)(vlSelfRef.__PVT__u_reg__DOT__fdata_qe) 
                           << 4U) | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_fdata_stop__q) 
                                      << 3U) | ((IData)(vlSelfRef.__PVT__u_reg__DOT__fdata_qe) 
                                                << 2U))) 
                         | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_fdata_start__q) 
                             << 1U) | (IData)(vlSelfRef.__PVT__u_reg__DOT__fdata_qe)))));
    vlSelfRef.__PVT__u_reg__DOT__reg2hw[0x0000000cU] 
        = ((0x0007ffffU & vlSelfRef.__PVT__u_reg__DOT__reg2hw[0x0000000cU]) 
           | (0xfff80000U & (((((((2U & vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o) 
                                  | (0x00007fffU == 
                                     (0x00007fffU & 
                                      (- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_test_acq_stretch__DOT__we)))))) 
                                 << 5U) | (((2U & (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                   << 1U)) 
                                            | (0x00007fffU 
                                               == (0x00007fffU 
                                                   & (- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_test_acq_stretch__DOT__we)))))) 
                                           << 3U)) 
                               | ((4U & (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                         << 2U)) | 
                                  (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_alert_test__DOT__we) 
                                    << 1U) | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_tx_stretch_ctrl_en__q)))) 
                              << 0x00000019U) | (((
                                                   ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_multi_controller_monitor_en__q) 
                                                    << 5U) 
                                                   | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_ack_ctrl_en__q) 
                                                       << 4U) 
                                                      | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_nack_addr_after_timeout__q) 
                                                         << 3U))) 
                                                  | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_llpbk__q) 
                                                      << 2U) 
                                                     | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_enabletarget__q) 
                                                         << 1U) 
                                                        | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_enablehost__q)))) 
                                                 << 0x00000013U))));
    vlSelfRef.__PVT__u_reg__DOT__reg2hw[0x0000000dU] 
        = (((((((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_scl_interference__q) 
                  << 3U) | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_controller_halt__q) 
                            << 2U)) | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_rx_overflow__q) 
                                        << 1U) | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_acq_threshold__q))) 
               << 0x0000000cU) | (((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_rx_threshold__q) 
                                     << 3U) | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_fmt_threshold__q) 
                                               << 2U)) 
                                   | ((2U & (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                             >> 0x0000000dU)) 
                                      | (0x00007fffU 
                                         == (0x00007fffU 
                                             & (- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_test_acq_stretch__DOT__we))))))) 
                                  << 8U)) | (((((2U 
                                                 & (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                    >> 0x0000000cU)) 
                                                | (0x00007fffU 
                                                   == 
                                                   (0x00007fffU 
                                                    & (- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_test_acq_stretch__DOT__we)))))) 
                                               << 6U) 
                                              | (((2U 
                                                   & (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                      >> 0x0000000bU)) 
                                                  | (0x00007fffU 
                                                     == 
                                                     (0x00007fffU 
                                                      & (- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_test_acq_stretch__DOT__we)))))) 
                                                 << 4U)) 
                                             | ((((2U 
                                                   & (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                      >> 0x0000000aU)) 
                                                  | (0x00007fffU 
                                                     == 
                                                     (0x00007fffU 
                                                      & (- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_test_acq_stretch__DOT__we)))))) 
                                                 << 2U) 
                                                | ((2U 
                                                    & (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                       >> 9U)) 
                                                   | (0x00007fffU 
                                                      == 
                                                      (0x00007fffU 
                                                       & (- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_test_acq_stretch__DOT__we))))))))) 
            << 0x00000010U) | (((((((2U & (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                           >> 8U)) 
                                    | (0x00007fffU 
                                       == (0x00007fffU 
                                           & (- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_test_acq_stretch__DOT__we)))))) 
                                   << 6U) | (((2U & 
                                               (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                >> 7U)) 
                                              | (0x00007fffU 
                                                 == 
                                                 (0x00007fffU 
                                                  & (- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_test_acq_stretch__DOT__we)))))) 
                                             << 4U)) 
                                 | ((((2U & (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                             >> 6U)) 
                                      | (0x00007fffU 
                                         == (0x00007fffU 
                                             & (- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_test_acq_stretch__DOT__we)))))) 
                                     << 2U) | ((2U 
                                                & (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                   >> 5U)) 
                                               | (0x00007fffU 
                                                  == 
                                                  (0x00007fffU 
                                                   & (- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_test_acq_stretch__DOT__we)))))))) 
                                << 8U) | (((((2U & 
                                              (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                               >> 4U)) 
                                             | (0x00007fffU 
                                                == 
                                                (0x00007fffU 
                                                 & (- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_test_acq_stretch__DOT__we)))))) 
                                            << 6U) 
                                           | (((2U 
                                                & (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                   >> 3U)) 
                                               | (0x00007fffU 
                                                  == 
                                                  (0x00007fffU 
                                                   & (- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_test_acq_stretch__DOT__we)))))) 
                                              << 4U)) 
                                          | ((((2U 
                                                & (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                   >> 2U)) 
                                               | (0x00007fffU 
                                                  == 
                                                  (0x00007fffU 
                                                   & (- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_test_acq_stretch__DOT__we)))))) 
                                              << 2U) 
                                             | ((2U 
                                                 & (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                                                    >> 1U)) 
                                                | (0x00007fffU 
                                                   == 
                                                   (0x00007fffU 
                                                    & (- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_test_acq_stretch__DOT__we))))))))));
    vlSelfRef.__PVT__u_reg__DOT__reg2hw[0x0000000eU] 
        = (0x00ffffffU & (((((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_host_timeout__q) 
                               << 5U) | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_unexp_stop__q) 
                                          << 4U) | 
                                         ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_acq_stretch__q) 
                                          << 3U))) 
                             | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_tx_threshold__q) 
                                 << 2U) | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_tx_stretch__q) 
                                            << 1U) 
                                           | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_cmd_complete__q)))) 
                            << 0x00000012U) | (((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_sda_unstable__q) 
                                                  << 5U) 
                                                 | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_stretch_timeout__q) 
                                                     << 4U) 
                                                    | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_sda_interference__q) 
                                                       << 3U))) 
                                                | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_scl_interference__q) 
                                                    << 2U) 
                                                   | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_controller_halt__q) 
                                                       << 1U) 
                                                      | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_rx_overflow__q)))) 
                                               << 0x0000000cU)) 
                          | ((((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_acq_threshold__q) 
                                 << 5U) | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_rx_threshold__q) 
                                            << 4U) 
                                           | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_fmt_threshold__q) 
                                              << 3U))) 
                               | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_host_timeout__q) 
                                   << 2U) | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_unexp_stop__q) 
                                              << 1U) 
                                             | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_acq_stretch__q)))) 
                              << 6U) | ((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_tx_threshold__q) 
                                          << 5U) | 
                                         (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_tx_stretch__q) 
                                           << 4U) | 
                                          ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_cmd_complete__q) 
                                           << 3U))) 
                                        | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_sda_unstable__q) 
                                            << 2U) 
                                           | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_stretch_timeout__q) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_sda_interference__q)))))));
    vlSelfRef.__PVT__i2c_core__DOT__target_ack_ctrl_sw_nack 
        = ((3U == (3U & (- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__u_target_ack_ctrl_nack__DOT__we))))) 
           & (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
              >> 0x0000001fU));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__fifo_incr_rptr) 
           & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q));
    if (vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__empty_o) {
        vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__sram_write_o 
            = (1U & (~ (IData)(vlSelfRef.__VdfgRegularize_ha785dde0_1_29)));
        vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__sram_req_o 
            = ((~ (IData)(vlSelfRef.__VdfgRegularize_ha785dde0_1_29)) 
               & (IData)(vlSelfRef.__VdfgRegularize_ha785dde0_1_9));
    } else {
        vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__sram_write_o 
            = (1U & (~ (IData)(vlSelfRef.__VdfgRegularize_ha785dde0_1_7)));
        vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__sram_req_o 
            = ((IData)(vlSelfRef.__VdfgRegularize_ha785dde0_1_7) 
               | (IData)(vlSelfRef.__VdfgRegularize_ha785dde0_1_9));
    }
    vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__9__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__19__KET__) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_target_fifo_config_acq_thresh__DOT__we));
    vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__11__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__23__KET__) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__24__KET__));
    vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__12__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__25__KET__) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_txdata0_qe__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i));
    vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__13__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__27__KET__) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_target_ack_ctrl_nack__DOT__we));
    vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__14__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_host_nack_handler_timeout_en__DOT__we) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__30__KET__));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_scl_interference__DOT__qe 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_scl_interference__DOT__de) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_cmd_complete__DOT__we));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_scl_interference__DOT__d 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_scl_interference__DOT__de) 
           | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_scl_interference__q));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_sda_interference__DOT__qe 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_sda_interference__DOT__de) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_cmd_complete__DOT__we));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_sda_interference__DOT__d 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_sda_interference__DOT__de) 
           | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_sda_interference__q));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_sda_unstable__DOT__qe 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_sda_unstable__DOT__de) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_cmd_complete__DOT__we));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_sda_unstable__DOT__d 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_sda_unstable__DOT__de) 
           | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_sda_unstable__q));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_overflow__DOT__qe 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_overflow__DOT__de) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_cmd_complete__DOT__we));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_overflow__DOT__d 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_overflow__DOT__de) 
           | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_rx_overflow__q));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_cmd_complete__DOT__qe 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_cmd_complete__DOT__de) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_cmd_complete__DOT__we));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_cmd_complete__DOT__d 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_cmd_complete__DOT__de) 
           | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_cmd_complete__q));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_host_timeout__DOT__qe 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_host_timeout__DOT__de) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_cmd_complete__DOT__we));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_host_timeout__DOT__d 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_host_timeout__DOT__de) 
           | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_host_timeout__q));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_stretch_timeout__DOT__qe 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_stretch_timeout__DOT__de) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_cmd_complete__DOT__we));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_stretch_timeout__DOT__d 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_stretch_timeout__DOT__de) 
           | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_stretch_timeout__q));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_unexp_stop__DOT__qe 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_unexp_stop__DOT__de) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_cmd_complete__DOT__we));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_unexp_stop__DOT__d 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_unexp_stop__DOT__de) 
           | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_unexp_stop__q));
    vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__7__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__15__KET__) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__16__KET__));
    vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__nack_transaction_d 
        = vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__nack_transaction_q;
    if ((0x00000010U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
        if ((8U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
            if ((4U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
                vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__nack_transaction_d = 0U;
            } else if ((2U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
                vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__nack_transaction_d = 0U;
            } else if ((1U & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q)))) {
                if (((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__nack_timeout) 
                     | ((IData)(vlSelfRef.__PVT__i2c_core__DOT__target_ack_ctrl_sw_nack) 
                        & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__can_auto_ack))))) {
                    vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__nack_transaction_d = 1U;
                }
            }
        } else if ((4U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
            if ((2U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
                if ((1U & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q)))) {
                    if (vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__nack_timeout) {
                        vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__nack_transaction_d = 1U;
                    }
                }
            } else if ((1U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
                if (vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__nack_timeout) {
                    vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__nack_transaction_d = 1U;
                }
            }
        } else if ((2U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
            if ((1U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
                if (vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__nack_timeout) {
                    vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__nack_transaction_d = 1U;
                }
            }
        }
    } else if ((8U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
        if ((4U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
            if ((2U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
                if ((1U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
                    if (vlSelfRef.__PVT__i2c_core__DOT__scl_sync) {
                        vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__nack_transaction_d = 1U;
                    }
                }
            }
        }
    } else if ((1U & (~ ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q) 
                         >> 2U)))) {
        if ((2U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
            if ((1U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
                if (vlSelfRef.__PVT__i2c_core__DOT__scl_sync) {
                    vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__nack_transaction_d = 1U;
                }
            }
        } else if ((1U & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q)))) {
            vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__nack_transaction_d = 0U;
        }
    }
    if ((1U & (~ ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_enabletarget__q) 
                  & ((IData)(vlSelfRef.__PVT__i2c_core__DOT__stop_detect) 
                     | (IData)(vlSelfRef.__PVT__i2c_core__DOT__event_bus_active_timeout)))))) {
        if ((1U & (~ ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_enabletarget__q) 
                      & (IData)(vlSelfRef.__PVT__i2c_core__DOT__start_detect))))) {
            if (vlSelfRef.__PVT__i2c_core__DOT__target_arbitration_lost) {
                vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__nack_transaction_d = 1U;
            }
        }
    }
    vlSelfRef.__PVT__i2c_core__DOT__acq_fifo_wdata = 0U;
    vlSelfRef.__PVT__i2c_core__DOT__acq_fifo_wvalid = 0U;
    if ((0x00000010U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
        if ((8U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
            if ((4U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
                vlSelfRef.__PVT__i2c_core__DOT__acq_fifo_wdata = 0U;
            } else if ((2U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
                vlSelfRef.__PVT__i2c_core__DOT__acq_fifo_wdata = 0U;
            } else if ((1U & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q)))) {
                if (((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__nack_timeout) 
                     | ((IData)(vlSelfRef.__PVT__i2c_core__DOT__target_ack_ctrl_sw_nack) 
                        & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__can_auto_ack))))) {
                    vlSelfRef.__PVT__i2c_core__DOT__acq_fifo_wdata 
                        = (0x00000400U | (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__input_byte));
                }
            }
        } else if ((4U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
            if ((1U & (~ ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
                    if (vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__nack_timeout) {
                        vlSelfRef.__PVT__i2c_core__DOT__acq_fifo_wdata 
                            = (0x00000500U | (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__input_byte));
                    } else if ((2U < (0x000001ffU & 
                                      ((IData)(0x010cU) 
                                       - (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__fifo_depth_o))))) {
                        vlSelfRef.__PVT__i2c_core__DOT__acq_fifo_wdata 
                            = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__restart_det_q)
                                ? (0x00000300U | (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__input_byte))
                                : (0x00000100U | (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__input_byte)));
                    }
                }
            }
        } else if ((2U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
            if ((1U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
                if (vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__nack_timeout) {
                    vlSelfRef.__PVT__i2c_core__DOT__acq_fifo_wdata 
                        = (0x00000500U | (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__input_byte));
                }
            } else if ((1U == (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__tcount_q))) {
                vlSelfRef.__PVT__i2c_core__DOT__acq_fifo_wdata 
                    = vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__input_byte;
            }
        }
    } else if ((1U & (~ ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q) 
                         >> 3U)))) {
        if ((4U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
            if ((2U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
                if ((1U & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q)))) {
                    if ((1U == (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__tcount_q))) {
                        vlSelfRef.__PVT__i2c_core__DOT__acq_fifo_wdata 
                            = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__restart_det_q)
                                ? (0x00000300U | (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__input_byte))
                                : (0x00000100U | (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__input_byte)));
                    }
                }
            }
        }
    }
    if (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_enabletarget__q) 
         & ((IData)(vlSelfRef.__PVT__i2c_core__DOT__stop_detect) 
            | (IData)(vlSelfRef.__PVT__i2c_core__DOT__event_bus_active_timeout)))) {
        vlSelfRef.__PVT__i2c_core__DOT__acq_fifo_wdata 
            = (((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__nack_transaction_q) 
                | (IData)(vlSelfRef.__PVT__i2c_core__DOT__event_bus_active_timeout))
                ? (0x00000600U | (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__input_byte))
                : (0x00000200U | (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__input_byte)));
    }
    if ((0x00000010U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
        if ((8U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
            if ((4U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
                vlSelfRef.__PVT__i2c_core__DOT__acq_fifo_wvalid = 0U;
            } else if ((2U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
                vlSelfRef.__PVT__i2c_core__DOT__acq_fifo_wvalid = 0U;
            } else if ((1U & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q)))) {
                if (((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__nack_timeout) 
                     | ((IData)(vlSelfRef.__PVT__i2c_core__DOT__target_ack_ctrl_sw_nack) 
                        & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__can_auto_ack))))) {
                    vlSelfRef.__PVT__i2c_core__DOT__acq_fifo_wvalid 
                        = (1U < (0x000001ffU & ((IData)(0x010cU) 
                                                - (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__fifo_depth_o))));
                }
            }
        } else if ((4U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
            if ((1U & (~ ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
                    if (vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__nack_timeout) {
                        vlSelfRef.__PVT__i2c_core__DOT__acq_fifo_wvalid 
                            = (1U < (0x000001ffU & 
                                     ((IData)(0x010cU) 
                                      - (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__fifo_depth_o))));
                    } else if ((2U < (0x000001ffU & 
                                      ((IData)(0x010cU) 
                                       - (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__fifo_depth_o))))) {
                        vlSelfRef.__PVT__i2c_core__DOT__acq_fifo_wvalid = 1U;
                    }
                }
            }
        } else if ((2U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
            if ((1U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
                if (vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__nack_timeout) {
                    vlSelfRef.__PVT__i2c_core__DOT__acq_fifo_wvalid 
                        = (1U < (0x000001ffU & ((IData)(0x010cU) 
                                                - (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__fifo_depth_o))));
                }
            } else if ((1U == (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__tcount_q))) {
                vlSelfRef.__PVT__i2c_core__DOT__acq_fifo_wvalid 
                    = (1U & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__stretch_rx)));
            }
        }
    } else if ((1U & (~ ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q) 
                         >> 3U)))) {
        if ((4U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
            if ((2U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
                if ((1U & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q)))) {
                    if ((1U == (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__tcount_q))) {
                        if ((1U & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__nack_transaction_q)))) {
                            if ((2U < (0x000001ffU 
                                       & ((IData)(0x010cU) 
                                          - (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__fifo_depth_o))))) {
                                vlSelfRef.__PVT__i2c_core__DOT__acq_fifo_wvalid = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_enabletarget__q) 
         & ((IData)(vlSelfRef.__PVT__i2c_core__DOT__stop_detect) 
            | (IData)(vlSelfRef.__PVT__i2c_core__DOT__event_bus_active_timeout)))) {
        vlSelfRef.__PVT__i2c_core__DOT__acq_fifo_wvalid 
            = vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__xact_for_us_q;
    }
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_arbiter__DOT__gen_normal_case__DOT__data_tree__BRA__114__03a92__KET__ 
        = (((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__sram_write_o) 
            << 0x00000016U) | ((0x003fe000U & (((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__empty_o)
                                                 ? 
                                                ((IData)(0x0040U) 
                                                 + 
                                                 (0x0000003fU 
                                                  & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__wptr_wrap_cnt_q)))
                                                 : 
                                                ((IData)(vlSelfRef.__VdfgRegularize_ha785dde0_1_7)
                                                  ? 
                                                 ((IData)(0x0040U) 
                                                  + 
                                                  (0x0000003fU 
                                                   & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__rptr_wrap_cnt_q)))
                                                  : 
                                                 ((IData)(0x0040U) 
                                                  + 
                                                  (0x0000003fU 
                                                   & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__wptr_wrap_cnt_q))))) 
                                               << 0x0000000dU)) 
                               | (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_inp_buf__DOT__rdata_o)));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_arbiter__DOT__gen_normal_case__DOT__req_tree__BRA__1__KET__ 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__sram_req_o) 
           | (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__sram_req_o));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_arbiter__DOT__gen_normal_case__DOT__prio_tree__BRA__4__KET__ 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__sram_req_o) 
           & ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_arbiter__DOT__gen_normal_case__DOT__prio_mask_q) 
              >> 1U));
    vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__4__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__9__KET__) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__10__KET__));
    vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__5__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__11__KET__) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__12__KET__));
    vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__6__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__13__KET__) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__14__KET__));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_scl_interference__DOT__wr_data 
        = ((~ ((vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                >> 5U) & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_cmd_complete__DOT__we))) 
           & ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_scl_interference__DOT__de)
               ? (IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_scl_interference__DOT__d)
               : (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_scl_interference__q)));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_sda_interference__DOT__wr_data 
        = ((~ ((vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                >> 6U) & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_cmd_complete__DOT__we))) 
           & ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_sda_interference__DOT__de)
               ? (IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_sda_interference__DOT__d)
               : (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_sda_interference__q)));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_sda_unstable__DOT__wr_data 
        = ((~ ((vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                >> 8U) & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_cmd_complete__DOT__we))) 
           & ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_sda_unstable__DOT__de)
               ? (IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_sda_unstable__DOT__d)
               : (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_sda_unstable__q)));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_overflow__DOT__wr_data 
        = ((~ ((vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                >> 3U) & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_cmd_complete__DOT__we))) 
           & ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_overflow__DOT__de)
               ? (IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_overflow__DOT__d)
               : (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_rx_overflow__q)));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_cmd_complete__DOT__wr_data 
        = ((~ ((vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                >> 9U) & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_cmd_complete__DOT__we))) 
           & ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_cmd_complete__DOT__de)
               ? (IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_cmd_complete__DOT__d)
               : (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_cmd_complete__q)));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_host_timeout__DOT__wr_data 
        = ((~ ((vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                >> 0x0000000eU) & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_cmd_complete__DOT__we))) 
           & ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_host_timeout__DOT__de)
               ? (IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_host_timeout__DOT__d)
               : (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_host_timeout__q)));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_stretch_timeout__DOT__wr_data 
        = ((~ ((vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                >> 7U) & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_cmd_complete__DOT__we))) 
           & ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_stretch_timeout__DOT__de)
               ? (IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_stretch_timeout__DOT__d)
               : (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_stretch_timeout__q)));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_unexp_stop__DOT__wr_data 
        = ((~ ((vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wdata_o 
                >> 0x0000000dU) & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_cmd_complete__DOT__we))) 
           & ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_unexp_stop__DOT__de)
               ? (IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_unexp_stop__DOT__d)
               : (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_unexp_stop__q)));
    vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__3__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__7__KET__) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__8__KET__));
    vlSelfRef.__PVT__u_reg__DOT__u_target_nack_count__DOT__de 
        = (((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__nack_transaction_q)) 
            & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__nack_transaction_d)) 
           & (0xffU > (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_target_nack_count__q)));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_inp_buf__DOT__wvalid_i 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__acq_fifo_wvalid) 
           & ((~ ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_oup_buf__DOT__full_o) 
                  & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__full_o))) 
              & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_inp_buf__DOT__wready_o)));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__ram_arb_inp_data[1U] 
        = vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_arbiter__DOT__gen_normal_case__DOT__data_tree__BRA__114__03a92__KET__;
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_arbiter__DOT__gen_normal_case__DOT__gen_tree__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__sram_req_o)) 
                 | ((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_arbiter__DOT__gen_normal_case__DOT__prio_tree__BRA__3__KET__)) 
                    & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_arbiter__DOT__gen_normal_case__DOT__prio_tree__BRA__4__KET__))));
    vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__2__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__5__KET__) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__6__KET__));
    vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__1__KET__ 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__3__KET__) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__4__KET__));
    vlSelfRef.__PVT__u_reg__DOT__u_target_nack_count__DOT__qe 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_target_nack_count__DOT__de) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_target_nack_count__DOT__we));
    vlSelfRef.__PVT__u_reg__DOT__u_target_nack_count__DOT__wr_data 
        = (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_target_nack_count__q) 
            + (IData)(vlSelfRef.__PVT__u_reg__DOT__u_target_nack_count__DOT__de)) 
           & ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_target_nack_count__DOT__we)
               ? 0U : 0xffU));
    vlSelfRef.__PVT__u_reg__DOT__u_target_nack_count__DOT__qs 
        = (0x000000ffU & ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_target_nack_count__q) 
                          + ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_target_nack_count__DOT__de) 
                             & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_target_nack_count__DOT__we))));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__fifo_incr_wptr 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_inp_buf__DOT__wvalid_i) 
           & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_inp_buf__DOT__wready_o));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__empty 
        = ((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_inp_buf__DOT__wvalid_i)) 
           & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__fifo_empty));
    vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__err_o 
        = ((((IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__1__KET__) 
             & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__2__KET__)) 
            | ((((IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__3__KET__) 
                 & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__4__KET__)) 
                | ((((IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__7__KET__) 
                     & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__8__KET__)) 
                    | ((((IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__15__KET__) 
                         & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__16__KET__)) 
                        | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_cmd_complete__DOT__we) 
                            & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_enable_acq_stretch__DOT__we)) 
                           | ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_test_acq_stretch__DOT__we) 
                              & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_alert_test__DOT__we)))) 
                       | ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_ctrl_ack_ctrl_en__DOT__we) 
                          & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_fdata_fbyte__DOT__we)))) 
                   | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__9__KET__) 
                       & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__10__KET__)) 
                      | ((((IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__19__KET__) 
                           & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_target_fifo_config_acq_thresh__DOT__we)) 
                          | ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_fifo_ctrl_acqrst__DOT__we) 
                             & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_host_fifo_config_fmt_thresh__DOT__we))) 
                         | ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_ovrd_sclval__DOT__we) 
                            & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_timing0_thigh__DOT__we)))))) 
               | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__5__KET__) 
                   & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__6__KET__)) 
                  | ((((IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__11__KET__) 
                       & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__12__KET__)) 
                      | ((((IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__23__KET__) 
                           & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__24__KET__)) 
                          | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_timing1_t_f__DOT__we) 
                              & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_timing2_thd_sta__DOT__we)) 
                             | ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_timing3_thd_dat__DOT__we) 
                                & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_timing4_t_buf__DOT__we)))) 
                         | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__25__KET__) 
                             & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_txdata0_qe__DOT__gen_generic__DOT__u_impl_generic__DOT__d_i)) 
                            | ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_timeout_ctrl_en__DOT__we) 
                               & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_target_id_address0__DOT__we))))) 
                     | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__13__KET__) 
                         & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__14__KET__)) 
                        | ((((IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__27__KET__) 
                             & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_target_ack_ctrl_nack__DOT__we)) 
                            | ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_host_timeout_ctrl__DOT__we) 
                               & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_target_timeout_ctrl_en__DOT__we))) 
                           | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_host_nack_handler_timeout_en__DOT__we) 
                               & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__30__KET__)) 
                              | ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_controller_events_arbitration_lost__DOT__we) 
                                 & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_target_events_arbitration_lost__DOT__we))))))))) 
           | ((~ ((~ (IData)(vlSelfRef.__PVT__u_reg__DOT__addrmiss)) 
                  & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__we_o))) 
              & ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__1__KET__) 
                 | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_prim_reg_we_check__DOT__u_prim_onehot_check__DOT__or_tree__BRA__2__KET__))));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) 
           & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_inp_buf__DOT__rdata_o 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__empty)
            ? 0U : (0x00001fffU & (((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__fifo_empty) 
                                    & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_inp_buf__DOT__wvalid_i))
                                    ? (IData)(vlSelfRef.__PVT__i2c_core__DOT__acq_fifo_wdata)
                                    : ((0x19U >= (0x0000001fU 
                                                  & ((IData)(0x0000000dU) 
                                                     * 
                                                     (1U 
                                                      & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)))))
                                        ? (vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__storage 
                                           >> (0x0000001fU 
                                               & ((IData)(0x0000000dU) 
                                                  * 
                                                  (1U 
                                                   & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)))))
                                        : 0U))));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_inp_buf__DOT__rvalid_o 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__empty)) 
                 & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__under_rst))));
    __VdfgRegularize_ha785dde0_1_16 = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__sram_read_in_prev_cyc_q)
                                        ? (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_1p__DOT__rdata_sram)
                                        : (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_inp_buf__DOT__rdata_o));
    __VdfgRegularize_ha785dde0_1_19 = ((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__full_o)) 
                                       & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_inp_buf__DOT__rvalid_o));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_oup_buf__DOT__wvalid_i 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__empty_o)
            ? ((IData)(vlSelfRef.__VdfgRegularize_ha785dde0_1_23)
                ? (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_inp_buf__DOT__rvalid_o)
                : (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__sram_read_in_prev_cyc_q))
            : (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__sram_read_in_prev_cyc_q));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__fifo_incr_wptr 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_oup_buf__DOT__wvalid_i) 
           & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_oup_buf__DOT__wready_o));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__empty 
        = ((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_oup_buf__DOT__wvalid_i)) 
           & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__fifo_empty));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) 
           & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_oup_buf__DOT__rvalid_o 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__empty)) 
                 & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__under_rst))));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_oup_buf__DOT__wdata_i 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__empty_o)
            ? ((IData)(vlSelfRef.__VdfgRegularize_ha785dde0_1_23)
                ? (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_inp_buf__DOT__rdata_o)
                : (IData)(__VdfgRegularize_ha785dde0_1_16))
            : (IData)(__VdfgRegularize_ha785dde0_1_16));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_oup_buf__DOT__rdata_o 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__empty)
            ? 0U : (0x00001fffU & (((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__fifo_empty) 
                                    & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_oup_buf__DOT__wvalid_i))
                                    ? (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_oup_buf__DOT__wdata_i)
                                    : ((0x19U >= (0x0000001fU 
                                                  & ((IData)(0x0000000dU) 
                                                     * 
                                                     (1U 
                                                      & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)))))
                                        ? (vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__storage 
                                           >> (0x0000001fU 
                                               & ((IData)(0x0000000dU) 
                                                  * 
                                                  (1U 
                                                   & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)))))
                                        : 0U))));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__tx_fifo_wdata_i 
        = (0x000000ffU & ((IData)(vlSelfRef.__PVT__i2c_core__DOT__target_loopback)
                           ? (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_oup_buf__DOT__rdata_o)
                           : (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_txdata__q)));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_oup_buf__DOT__rready_i 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_acqdata_abyte__DOT__re) 
           | ((IData)(vlSelfRef.__PVT__i2c_core__DOT__target_loopback) 
              & ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__fifo_wready_o) 
                 | (0U != (0x0700U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_oup_buf__DOT__rdata_o))))));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_inp_buf__DOT__wvalid_i 
        = (((IData)(vlSelfRef.__PVT__i2c_core__DOT__target_loopback)
             ? ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_oup_buf__DOT__rvalid_o) 
                & ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_enabletarget__q) 
                   & (0U == (0x0700U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_oup_buf__DOT__rdata_o)))))
             : (IData)(vlSelfRef.__PVT__u_reg__DOT__txdata_qe)) 
           & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__fifo_wready_o));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__fifo_incr_rptr 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_oup_buf__DOT__rvalid_o) 
           & ((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__under_rst)) 
              & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_oup_buf__DOT__rready_i)));
    vlSelfRef.__VdfgRegularize_ha785dde0_1_17 = (1U 
                                                 & ((~ 
                                                     (((1U 
                                                        <= (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_oup_buf__DOT__depth_o)) 
                                                       & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__sram_read_in_prev_cyc_q)) 
                                                      | (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_oup_buf__DOT__full_o))) 
                                                    | ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_oup_buf__DOT__rvalid_o) 
                                                       & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_oup_buf__DOT__rready_i))));
    if (vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__empty_o) {
        vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__sram_write_o 
            = (1U & (~ (IData)(vlSelfRef.__VdfgRegularize_ha785dde0_1_23)));
        vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__sram_req_o 
            = ((~ (IData)(vlSelfRef.__VdfgRegularize_ha785dde0_1_23)) 
               & (IData)(__VdfgRegularize_ha785dde0_1_19));
    } else {
        vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__sram_write_o 
            = (1U & (~ (IData)(vlSelfRef.__VdfgRegularize_ha785dde0_1_17)));
        vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__sram_req_o 
            = ((IData)(vlSelfRef.__VdfgRegularize_ha785dde0_1_17) 
               | (IData)(__VdfgRegularize_ha785dde0_1_19));
    }
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__fifo_incr_wptr 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_inp_buf__DOT__wvalid_i) 
           & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_inp_buf__DOT__wready_o));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__empty 
        = ((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_inp_buf__DOT__wvalid_i)) 
           & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__fifo_empty));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__fifo_incr_rptr) 
           & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) 
           & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_inp_buf__DOT__rdata_o 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__empty)
            ? 0U : (0x00001fffU & (((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__fifo_empty) 
                                    & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_inp_buf__DOT__wvalid_i))
                                    ? (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__tx_fifo_wdata_i)
                                    : ((0x19U >= (0x0000001fU 
                                                  & ((IData)(0x0000000dU) 
                                                     * 
                                                     (1U 
                                                      & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)))))
                                        ? (vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__storage 
                                           >> (0x0000001fU 
                                               & ((IData)(0x0000000dU) 
                                                  * 
                                                  (1U 
                                                   & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)))))
                                        : 0U))));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_inp_buf__DOT__rvalid_o 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__empty)) 
                 & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__under_rst))));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_arbiter__DOT__gen_normal_case__DOT__data_tree__BRA__160__03a138__KET__ 
        = (((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__sram_write_o) 
            << 0x00000016U) | ((0x003fe000U & (((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__empty_o)
                                                 ? 
                                                ((IData)(0x00c0U) 
                                                 + (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__wptr_wrap_cnt_q))
                                                 : 
                                                ((IData)(vlSelfRef.__VdfgRegularize_ha785dde0_1_17)
                                                  ? 
                                                 ((IData)(0x00c0U) 
                                                  + (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__rptr_wrap_cnt_q))
                                                  : 
                                                 ((IData)(0x00c0U) 
                                                  + (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__wptr_wrap_cnt_q)))) 
                                               << 0x0000000dU)) 
                               | (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_inp_buf__DOT__rdata_o)));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_arbiter__DOT__gen_normal_case__DOT__prio_tree__BRA__6__KET__ 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__sram_req_o) 
           & ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_arbiter__DOT__gen_normal_case__DOT__prio_mask_q) 
              >> 3U));
    __VdfgRegularize_ha785dde0_1_11 = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__sram_read_in_prev_cyc_q)
                                        ? (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_1p__DOT__rdata_sram)
                                        : (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_inp_buf__DOT__rdata_o));
    __VdfgRegularize_ha785dde0_1_14 = ((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__full_o)) 
                                       & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_inp_buf__DOT__rvalid_o));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__ram_arb_inp_data[3U] 
        = vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_arbiter__DOT__gen_normal_case__DOT__data_tree__BRA__160__03a138__KET__;
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_oup_buf__DOT__wvalid_i 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__empty_o)
            ? ((IData)(vlSelfRef.__VdfgRegularize_ha785dde0_1_26)
                ? (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_inp_buf__DOT__rvalid_o)
                : (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__sram_read_in_prev_cyc_q))
            : (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__sram_read_in_prev_cyc_q));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__fifo_incr_wptr 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_oup_buf__DOT__wvalid_i) 
           & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_oup_buf__DOT__wready_o));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__empty 
        = ((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_oup_buf__DOT__wvalid_i)) 
           & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__fifo_empty));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_set 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) 
           & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__wptr_wrap_cnt_q));
    vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__sda_d = 1U;
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_oup_buf__DOT__rvalid_o 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__empty)) 
                 & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__under_rst))));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_oup_buf__DOT__wdata_i 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__empty_o)
            ? ((IData)(vlSelfRef.__VdfgRegularize_ha785dde0_1_26)
                ? (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_inp_buf__DOT__rdata_o)
                : (IData)(__VdfgRegularize_ha785dde0_1_11))
            : (IData)(__VdfgRegularize_ha785dde0_1_11));
    if ((0x00000010U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
        if ((8U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
            if ((4U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
                vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__sda_d = 1U;
            } else if ((2U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
                vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__sda_d = 1U;
            } else if ((1U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
                vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__sda_d = 0U;
            }
        } else if ((4U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
            if ((2U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
                if ((1U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
                    vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__sda_d 
                        = (1U & (VL_STREAML_FAST_III(8, 
                                                     ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__empty)
                                                       ? 0U
                                                       : 
                                                      (0x000000ffU 
                                                       & (((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__fifo_empty) 
                                                           & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_oup_buf__DOT__wvalid_i))
                                                           ? (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_oup_buf__DOT__wdata_i)
                                                           : 
                                                          ((0x19U 
                                                            >= 
                                                            (0x0000001fU 
                                                             & ((IData)(0x0000000dU) 
                                                                * 
                                                                (1U 
                                                                 & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)))))
                                                            ? 
                                                           (vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__storage 
                                                            >> 
                                                            (0x0000001fU 
                                                             & ((IData)(0x0000000dU) 
                                                                * 
                                                                (1U 
                                                                 & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)))))
                                                            : 0U)))), 0) 
                                 >> (7U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__bit_idx))));
                }
            } else if ((1U & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q)))) {
                vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__sda_d = 0U;
            }
        } else if ((2U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
            if ((1U & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q)))) {
                vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__sda_d = 0U;
            }
        } else {
            vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__sda_d = 0U;
        }
    } else if ((8U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
        if ((4U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
            if ((1U & (~ ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
                    vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__sda_d = 1U;
                }
            }
        } else if ((2U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
            if ((1U & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q)))) {
                vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__sda_d 
                    = vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__sda_q;
            }
        } else {
            vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__sda_d 
                = (1U & ((1U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))
                          ? (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__sda_q)
                          : (VL_STREAML_FAST_III(8, 
                                                 ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__empty)
                                                   ? 0U
                                                   : 
                                                  (0x000000ffU 
                                                   & (((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__fifo_empty) 
                                                       & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_oup_buf__DOT__wvalid_i))
                                                       ? (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_oup_buf__DOT__wdata_i)
                                                       : 
                                                      ((0x19U 
                                                        >= 
                                                        (0x0000001fU 
                                                         & ((IData)(0x0000000dU) 
                                                            * 
                                                            (1U 
                                                             & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)))))
                                                        ? 
                                                       (vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__storage 
                                                        >> 
                                                        (0x0000001fU 
                                                         & ((IData)(0x0000000dU) 
                                                            * 
                                                            (1U 
                                                             & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q)))))
                                                        : 0U)))), 0) 
                             >> (7U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__bit_idx)))));
        }
    } else if ((4U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
        if ((2U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
            if ((1U & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q)))) {
                vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__sda_d = 0U;
            }
        } else {
            vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__sda_d = 0U;
        }
    } else if ((1U & (~ ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q) 
                         >> 1U)))) {
        if ((1U & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q)))) {
            vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__sda_d = 1U;
        }
    }
    vlSelfRef.__PVT__i2c_core__DOT__sda_fsm = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__sda_d) 
                                               & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__sda_d));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__fifo_incr_rptr 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_oup_buf__DOT__rvalid_o) 
           & ((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__under_rst)) 
              & (IData)(vlSelfRef.__PVT__i2c_core__DOT__tx_fifo_rready)));
    vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next = 0U;
    if ((IData)((0U != (0x000000ffU & vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_read)))) {
        if ((1U & vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_read)) {
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = ((0xffffff00U & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                   | ((((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_stretch_timeout__q) 
                          << 3U) | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_sda_interference__q) 
                                    << 2U)) | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_scl_interference__q) 
                                                << 1U) 
                                               | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_controller_halt__q))) 
                       << 4U) | ((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_rx_overflow__q) 
                                   << 3U) | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_acq_threshold__q) 
                                             << 2U)) 
                                 | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_rx_threshold__q) 
                                     << 1U) | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_fmt_threshold__q)))));
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = ((0xffff80ffU & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                   | (((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_host_timeout__q) 
                         << 6U) | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_unexp_stop__q) 
                                    << 5U) | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_acq_stretch__q) 
                                              << 4U))) 
                       | ((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_tx_threshold__q) 
                            << 3U) | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_tx_stretch__q) 
                                      << 2U)) | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_cmd_complete__q) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_sda_unstable__q)))) 
                      << 8U));
        } else if ((2U & vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_read)) {
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = ((0xffffff00U & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                   | ((((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_stretch_timeout__q) 
                          << 3U) | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_sda_interference__q) 
                                    << 2U)) | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_scl_interference__q) 
                                                << 1U) 
                                               | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_controller_halt__q))) 
                       << 4U) | ((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_rx_overflow__q) 
                                   << 3U) | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_acq_threshold__q) 
                                             << 2U)) 
                                 | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_rx_threshold__q) 
                                     << 1U) | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_fmt_threshold__q)))));
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = ((0xffff80ffU & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                   | (((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_host_timeout__q) 
                         << 6U) | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_unexp_stop__q) 
                                    << 5U) | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_acq_stretch__q) 
                                              << 4U))) 
                       | ((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_tx_threshold__q) 
                            << 3U) | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_tx_stretch__q) 
                                      << 2U)) | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_cmd_complete__q) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_sda_unstable__q)))) 
                      << 8U));
        } else if ((4U & vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_read)) {
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = (0xffff8000U & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next);
        } else if ((8U & vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_read)) {
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = (0xfffffffeU & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next);
        } else if ((0x00000010U & vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_read)) {
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = ((0xffffff80U & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                   | ((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_tx_stretch_ctrl_en__q) 
                        << 6U) | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_multi_controller_monitor_en__q) 
                                   << 5U) | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_ack_ctrl_en__q) 
                                             << 4U))) 
                      | ((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_nack_addr_after_timeout__q) 
                           << 3U) | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_llpbk__q) 
                                     << 2U)) | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_enabletarget__q) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_enablehost__q)))));
        } else if ((0x00000020U & vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_read)) {
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = ((0xfffffff0U & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                   | ((((IData)(vlSelfRef.__PVT__i2c_core__DOT__host_idle) 
                        << 3U) | (4U & ((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_oup_buf__DOT__rvalid_o)) 
                                        << 2U))) | 
                      ((2U & ((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__fifo_wready_o)) 
                              << 1U)) | (1U & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__fifo_wready_o))))));
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = ((0xffffff0fU & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                   | (((((2U >= (0x000001ffU & ((IData)(0x010cU) 
                                                - (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__fifo_depth_o)))) 
                         << 3U) | (4U & ((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__fifo_wready_o)) 
                                         << 2U))) | 
                       ((2U & ((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_oup_buf__DOT__rvalid_o)) 
                               << 1U)) | (IData)(vlSelfRef.__PVT__i2c_core__DOT__target_idle))) 
                      << 4U));
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = ((0xfffff8ffU & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                   | (((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__ack_ctrl_stretching) 
                       << 0x0000000aU) | (((2U & ((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_oup_buf__DOT__rvalid_o)) 
                                                  << 1U)) 
                                           | (1U & 
                                              (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_oup_buf__DOT__rvalid_o)))) 
                                          << 8U)));
        } else {
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = ((0x00000040U & vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_read)
                    ? ((0xffffff00U & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                       | (0x000000ffU & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_oup_buf__DOT__rdata_o)))
                    : (0xffffe000U & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next));
        }
    } else if ((IData)((0U != (0x0000ff00U & vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_read)))) {
        if ((0x00000100U & vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_read)) {
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = (0xfffffffcU & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next);
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = (0xfffffe7fU & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next);
        } else if ((0x00000200U & vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_read)) {
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = ((0xfffff000U & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                   | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_host_fifo_config_rx_thresh__q));
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = ((0xf000ffffU & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                   | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_host_fifo_config_fmt_thresh__q) 
                      << 0x00000010U));
        } else if ((0x00000400U & vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_read)) {
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = ((0xfffff000U & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                   | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_target_fifo_config_tx_thresh__q));
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = ((0xf000ffffU & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                   | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_target_fifo_config_acq_thresh__q) 
                      << 0x00000010U));
        } else if ((0x00000800U & vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_read)) {
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = ((0xfffff000U & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                   | (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__fifo_depth_o));
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = ((0xf000ffffU & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                   | ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__fifo_depth_o) 
                      << 0x00000010U));
        } else if ((0x00001000U & vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_read)) {
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = ((0xfffff000U & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                   | (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__fifo_depth_o));
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = ((0xf000ffffU & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                   | ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__fifo_depth_o) 
                      << 0x00000010U));
        } else if ((0x00002000U & vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_read)) {
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = ((0xfffffff8U & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                   | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ovrd_sdaval__q) 
                       << 2U) | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ovrd_sclval__q) 
                                  << 1U) | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ovrd_txovrden__q))));
        } else if ((0x00004000U & vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_read)) {
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = (((IData)(vlSelfRef.__PVT__i2c_core__DOT__sda_rx_val) 
                    << 0x00000010U) | (IData)(vlSelfRef.__PVT__i2c_core__DOT__scl_rx_val));
        } else {
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = ((0xffffe000U & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                   | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timing0_thigh__q));
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = ((0xe000ffffU & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                   | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timing0_tlow__q) 
                      << 0x00000010U));
        }
    } else if ((IData)((0U != (0x00ff0000U & vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_read)))) {
        if ((0x00010000U & vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_read)) {
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = ((0xfffffc00U & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                   | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timing1_t_r__q));
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = ((0xfe00ffffU & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                   | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timing1_t_f__q) 
                      << 0x00000010U));
        } else if ((0x00020000U & vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_read)) {
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = ((0xffffe000U & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                   | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timing2_tsu_sta__q));
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = ((0xe000ffffU & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                   | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timing2_thd_sta__q) 
                      << 0x00000010U));
        } else if ((0x00040000U & vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_read)) {
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = ((0xfffffe00U & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                   | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timing3_tsu_dat__q));
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = ((0xe000ffffU & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                   | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timing3_thd_dat__q) 
                      << 0x00000010U));
        } else if ((0x00080000U & vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_read)) {
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = ((0xffffe000U & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                   | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timing4_tsu_sto__q));
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = ((0xe000ffffU & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                   | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timing4_t_buf__q) 
                      << 0x00000010U));
        } else {
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = ((0x00100000U & vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_read)
                    ? (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timeout_ctrl_en__q) 
                        << 0x0000001fU) | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timeout_ctrl_mode__q) 
                                            << 0x0000001eU) 
                                           | vlSelfRef.u_reg__DOT____Vcellout__u_timeout_ctrl_val__q))
                    : ((0x00200000U & vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_read)
                        ? ((0xf0000000U & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                           | ((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_target_id_mask1__q) 
                                << 0x00000015U) | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_target_id_address1__q) 
                                                   << 0x0000000eU)) 
                              | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_target_id_mask0__q) 
                                  << 7U) | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_target_id_address0__q))))
                        : ((0x00400000U & vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_read)
                            ? ((0xfffff800U & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                               | (0x000007ffU & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_oup_buf__DOT__rdata_o)))
                            : (0xffffff00U & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next))));
        }
    } else if ((IData)((0U != (0xff000000U & vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_read)))) {
        if ((0x01000000U & vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_read)) {
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = ((0xfff00000U & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                   | vlSelfRef.u_reg__DOT____Vcellout__u_host_timeout_ctrl__q);
        } else if ((0x02000000U & vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_read)) {
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_target_timeout_ctrl_en__q) 
                    << 0x0000001fU) | vlSelfRef.u_reg__DOT____Vcellout__u_target_timeout_ctrl_val__q);
        } else if ((0x04000000U & vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_read)) {
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = ((0xffffff00U & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                   | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_target_nack_count__DOT__qs));
        } else if ((0x08000000U & vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_read)) {
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = ((0xfffffe00U & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                   | (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__auto_ack_cnt_q));
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = (0x7fffffffU & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next);
        } else {
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = ((0x10000000U & vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_read)
                    ? ((0xffffff00U & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                       | (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__input_byte))
                    : ((0x20000000U & vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_read)
                        ? (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_host_nack_handler_timeout_en__q) 
                            << 0x0000001fU) | vlSelfRef.u_reg__DOT____Vcellout__u_host_nack_handler_timeout_val__q)
                        : ((0x40000000U & vlSelfRef.__PVT__u_reg__DOT__racl_addr_hit_read)
                            ? ((0xfffffff0U & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                               | ((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_controller_events_arbitration_lost__q) 
                                    << 3U) | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_controller_events_bus_timeout__q) 
                                              << 2U)) 
                                  | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_controller_events_unhandled_nack_timeout__q) 
                                      << 1U) | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_controller_events_nack__q))))
                            : ((0xfffffff8U & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                               | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_target_events_arbitration_lost__q) 
                                   << 2U) | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_target_events_bus_timeout__q) 
                                              << 1U) 
                                             | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_target_events_tx_pending__q)))))));
        }
    } else {
        vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next = 0xffffffffU;
    }
    vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__stretch_tx 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_oup_buf__DOT__rvalid_o)) 
                 | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_target_events_tx_pending__q) 
                     | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_target_events_arbitration_lost__q) 
                        | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_target_events_bus_timeout__q))) 
                    | (1U < (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__fifo_depth_o)))));
    vlSelfRef.__VdfgRegularize_ha785dde0_1_12 = (1U 
                                                 & ((~ 
                                                     (((1U 
                                                        <= (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_oup_buf__DOT__depth_o)) 
                                                       & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__sram_read_in_prev_cyc_q)) 
                                                      | (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_oup_buf__DOT__full_o))) 
                                                    | ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_oup_buf__DOT__rvalid_o) 
                                                       & (IData)(vlSelfRef.__PVT__i2c_core__DOT__tx_fifo_rready))));
    if (vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__empty_o) {
        vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__sram_write_o 
            = (1U & (~ (IData)(vlSelfRef.__VdfgRegularize_ha785dde0_1_26)));
        vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__sram_req_o 
            = ((~ (IData)(vlSelfRef.__VdfgRegularize_ha785dde0_1_26)) 
               & (IData)(__VdfgRegularize_ha785dde0_1_14));
    } else {
        vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__sram_write_o 
            = (1U & (~ (IData)(vlSelfRef.__VdfgRegularize_ha785dde0_1_12)));
        vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__sram_req_o 
            = ((IData)(vlSelfRef.__VdfgRegularize_ha785dde0_1_12) 
               | (IData)(__VdfgRegularize_ha785dde0_1_14));
    }
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__fifo_incr_rptr) 
           & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_oup_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q));
    vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__actively_stretching = 0U;
    vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__tcount_sel = 2U;
    vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__load_tcount = 0U;
    vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_d 
        = vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q;
    if ((0x00000010U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
        if ((8U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
            if ((4U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
                vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__actively_stretching = 0U;
                vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__tcount_sel = 2U;
                vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__load_tcount = 0U;
                vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_d = 0U;
            } else if ((2U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
                vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__actively_stretching = 0U;
                vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__tcount_sel = 2U;
                vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__load_tcount = 0U;
                vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_d = 0U;
            } else {
                if ((1U & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q)))) {
                    vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__actively_stretching 
                        = vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__stretch_rx;
                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__nack_timeout) 
                                  | ((IData)(vlSelfRef.__PVT__i2c_core__DOT__target_ack_ctrl_sw_nack) 
                                     & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__can_auto_ack))))))) {
                        if ((1U & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__stretch_rx)))) {
                            vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__tcount_sel = 0U;
                            vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__load_tcount = 1U;
                        }
                    }
                }
                if ((1U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
                    if ((1U == (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__tcount_q))) {
                        vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_d = 0x10U;
                    }
                } else if (((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__nack_timeout) 
                            | ((IData)(vlSelfRef.__PVT__i2c_core__DOT__target_ack_ctrl_sw_nack) 
                               & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__can_auto_ack))))) {
                    vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_d = 0x0dU;
                } else if ((1U & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__stretch_rx)))) {
                    vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_d = 0x19U;
                }
            }
        } else if ((4U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
            if ((2U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
                if ((1U & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q)))) {
                    vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__actively_stretching 
                        = vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__stretch_tx;
                    if ((1U & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__nack_timeout)))) {
                        if ((1U & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__stretch_tx)))) {
                            vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__tcount_sel = 0U;
                            vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__load_tcount = 1U;
                        }
                    }
                }
                if ((1U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
                    if ((1U == (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__tcount_q))) {
                        vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_d = 8U;
                    }
                } else if (vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__nack_timeout) {
                    vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_d = 0x0dU;
                } else if ((1U & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__stretch_tx)))) {
                    vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_d = 0x17U;
                }
            } else if ((1U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
                vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__actively_stretching 
                    = (2U >= (0x000001ffU & ((IData)(0x010cU) 
                                             - (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__fifo_depth_o))));
                if (vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__nack_timeout) {
                    vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_d = 0x0dU;
                } else if ((2U < (0x000001ffU & ((IData)(0x010cU) 
                                                 - (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__fifo_depth_o))))) {
                    vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_d 
                        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__rw_bit_q)
                            ? 0x16U : 0x0eU);
                }
            } else if ((1U == (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__tcount_q))) {
                vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_d = 4U;
            }
        } else if ((2U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
            if ((1U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
                vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__actively_stretching 
                    = (2U >= (0x000001ffU & ((IData)(0x010cU) 
                                             - (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__fifo_depth_o))));
                if ((1U & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__nack_timeout)))) {
                    if ((2U < (0x000001ffU & ((IData)(0x010cU) 
                                              - (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__fifo_depth_o))))) {
                        vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__tcount_sel = 0U;
                        vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__load_tcount = 1U;
                    }
                }
                if (vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__nack_timeout) {
                    vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_d = 0x0dU;
                } else if ((2U < (0x000001ffU & ((IData)(0x010cU) 
                                                 - (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__fifo_depth_o))))) {
                    vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_d = 0x14U;
                }
            } else if ((1U == (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__tcount_q))) {
                vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_d = 0x0eU;
            }
        } else if ((1U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
            if ((1U & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__scl_sync)))) {
                vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__tcount_sel = 1U;
                vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__load_tcount = 1U;
                vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_d = 0x12U;
            }
        } else if (vlSelfRef.__PVT__i2c_core__DOT__scl_sync) {
            vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_d = 0x11U;
        }
    } else if ((8U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
        if ((4U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
            if ((2U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
                if ((1U & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q)))) {
                    if ((8U == (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__bit_idx))) {
                        vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__tcount_sel = 1U;
                        vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__load_tcount = 1U;
                    }
                }
                if ((1U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
                    if (vlSelfRef.__PVT__i2c_core__DOT__scl_sync) {
                        vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_d = 0x0dU;
                    } else if ((1U == (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__tcount_q))) {
                        vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_d 
                            = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__nack_transaction_q)
                                ? 0x0dU : ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__stretch_rx)
                                            ? 0x18U
                                            : 0x10U));
                    }
                } else if ((8U == (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__bit_idx))) {
                    vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_d = 0x0fU;
                }
            } else if ((1U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
                vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_d = 0x0dU;
            } else if ((1U & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__scl_sync)))) {
                vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_d 
                    = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__host_ack)
                        ? 7U : 0x0dU);
            }
        } else if ((2U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
            if ((1U & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q)))) {
                if ((1U == (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__tcount_q))) {
                    if ((8U != (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__bit_idx))) {
                        vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__tcount_sel = 1U;
                        vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__load_tcount = 1U;
                    }
                }
            }
            if ((1U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
                if (vlSelfRef.__PVT__i2c_core__DOT__scl_sync) {
                    vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_d = 0x0cU;
                }
            } else if ((1U == (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__tcount_q))) {
                vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_d 
                    = ((8U == (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__bit_idx))
                        ? 0x0bU : 8U);
            }
        } else if ((1U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
            if ((1U & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__scl_sync)))) {
                vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__tcount_sel = 1U;
                vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__load_tcount = 1U;
                vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_d = 0x0aU;
            }
        } else if (vlSelfRef.__PVT__i2c_core__DOT__scl_sync) {
            vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_d = 9U;
        }
    } else if ((4U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
        if ((1U & (~ ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
                if ((1U & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__scl_sync)))) {
                    vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__tcount_sel = 1U;
                    vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__load_tcount = 1U;
                }
            }
        }
        if ((2U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
            if ((1U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
                vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_d 
                    = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__stretch_tx)
                        ? 0x16U : 8U);
            } else if ((1U == (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__tcount_q))) {
                vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_d 
                    = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__nack_transaction_q)
                        ? 0x0dU : ((2U >= (0x000001ffU 
                                           & ((IData)(0x010cU) 
                                              - (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__fifo_depth_o))))
                                    ? 0x15U : ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__rw_bit_q)
                                                ? 7U
                                                : 0x0eU)));
            }
        } else if ((1U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
            if ((1U & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__scl_sync)))) {
                vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_d = 6U;
            }
        } else if (vlSelfRef.__PVT__i2c_core__DOT__scl_sync) {
            vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_d = 5U;
        }
    } else if ((2U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
        if ((1U & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q)))) {
            if ((8U == (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__bit_idx))) {
                if (vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__address_match) {
                    vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__tcount_sel = 1U;
                    vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__load_tcount = 1U;
                }
            }
        }
        if ((1U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
            if (vlSelfRef.__PVT__i2c_core__DOT__scl_sync) {
                vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_d = 0x0dU;
            } else if ((1U == (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__tcount_q))) {
                vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_d 
                    = ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_nack_addr_after_timeout__q)
                        ? ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__nack_transaction_q)
                            ? 0x0dU : ((2U >= (0x000001ffU 
                                               & ((IData)(0x010cU) 
                                                  - (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__fifo_depth_o))))
                                        ? 0x13U : 4U))
                        : 4U);
            }
        } else if ((8U == (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__bit_idx))) {
            vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_d 
                = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__address_match)
                    ? 3U : 0x0dU);
        }
    } else if ((1U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
        if ((1U & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__scl_sync)))) {
            vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_d = 2U;
        }
    }
    if ((1U & ((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__target_idle)) 
               & (~ (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_enabletarget__q))))) {
        vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_d = 0U;
    } else if (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_enabletarget__q) 
                & (IData)(vlSelfRef.__PVT__i2c_core__DOT__start_detect))) {
        vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_d = 1U;
    } else if (((IData)(vlSelfRef.__PVT__i2c_core__DOT__stop_detect) 
                | (IData)(vlSelfRef.__PVT__i2c_core__DOT__event_bus_active_timeout))) {
        vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_d = 0U;
    } else if (vlSelfRef.__PVT__i2c_core__DOT__target_arbitration_lost) {
        vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_d = 0x0dU;
    }
    vlSelfRef.__PVT__i2c_core__DOT__event_tx_stretch = 0U;
    if ((0x00000010U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
        if ((8U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
            if ((4U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
                vlSelfRef.__PVT__i2c_core__DOT__event_tx_stretch = 0U;
            } else if ((2U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
                vlSelfRef.__PVT__i2c_core__DOT__event_tx_stretch = 0U;
            }
        } else if ((4U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
            if ((2U & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q))) {
                if ((1U & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__state_q)))) {
                    vlSelfRef.__PVT__i2c_core__DOT__event_tx_stretch = 1U;
                    if ((1U & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__nack_timeout)))) {
                        if ((1U & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__stretch_tx)))) {
                            vlSelfRef.__PVT__i2c_core__DOT__event_tx_stretch = 0U;
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__tcount_d 
        = vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__tcount_q;
    if (vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__load_tcount) {
        vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__tcount_d 
            = (0x0000ffffU & ((0U == (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__tcount_sel))
                               ? ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timing1_t_r__q) 
                                  + (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timing3_tsu_dat__q))
                               : ((1U == (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__tcount_sel))
                                   ? (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timing3_thd_dat__q)
                                   : 1U)));
        if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__tcount_sel)) 
                                   << 2U) | (((1U == (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__tcount_sel)) 
                                              << 1U) 
                                             | (0U 
                                                == (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__tcount_sel)))))))) {
            if ((0U != (((2U == (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__tcount_sel)) 
                         << 2U) | (((1U == (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__tcount_sel)) 
                                    << 1U) | (0U == (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__tcount_sel)))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: i2c_target_fsm.sv:132: Assertion failed in %Nchip_sim_tb.u_dut.top_earlgrey.u_i2c2.i2c_core.u_i2c_target_fsm.counter_functions: unique case, but multiple matches found for '2'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 2,(IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__tcount_sel));
                    Verilated::runFlushCallbacks();
                    VL_STOP_MT("verilogSourceFiles/i2c_target_fsm.sv", 132, "");
                }
            }
        }
    } else if (vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_enabletarget__q) {
        vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__tcount_d 
            = (0x0000ffffU & ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__tcount_q) 
                              - (IData)(1U)));
    }
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_tx_stretch__DOT__d 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__event_tx_stretch) 
           | (IData)(vlSelfRef.__PVT__i2c_core__DOT__intr_hw_tx_stretch__DOT__g_intr_status__DOT__test_q));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_arbiter__DOT__gen_normal_case__DOT__data_tree__BRA__137__03a115__KET__ 
        = (((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__sram_write_o) 
            << 0x00000016U) | ((0x003fe000U & (((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__empty_o)
                                                 ? 
                                                ((IData)(0x0080U) 
                                                 + 
                                                 (0x0000003fU 
                                                  & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__wptr_wrap_cnt_q)))
                                                 : 
                                                ((IData)(vlSelfRef.__VdfgRegularize_ha785dde0_1_12)
                                                  ? 
                                                 ((IData)(0x0080U) 
                                                  + 
                                                  (0x0000003fU 
                                                   & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__rptr_wrap_cnt_q)))
                                                  : 
                                                 ((IData)(0x0080U) 
                                                  + 
                                                  (0x0000003fU 
                                                   & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__wptr_wrap_cnt_q))))) 
                                               << 0x0000000dU)) 
                               | (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_inp_buf__DOT__rdata_o)));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_arbiter__DOT__req_i 
        = ((((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__sram_req_o) 
             << 3U) | ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__sram_req_o) 
                       << 2U)) | (((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__sram_req_o) 
                                   << 1U) | (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__sram_req_o)));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_arbiter__DOT__valid_o 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_arbiter__DOT__gen_normal_case__DOT__req_tree__BRA__1__KET__) 
           | ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__sram_req_o) 
              | (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__sram_req_o)));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_arbiter__DOT__gen_normal_case__DOT__prio_tree__BRA__5__KET__ 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__sram_req_o) 
           & ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_arbiter__DOT__gen_normal_case__DOT__prio_mask_q) 
              >> 2U));
    vlSelfRef.__PVT__u_reg__DOT__hw2reg[0U] = (0x00002aaaU 
                                               | ((((IData)(vlSelfRef.__PVT__u_reg__DOT__u_target_nack_count__DOT__de) 
                                                    << 0x0000001fU) 
                                                   | ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__auto_ack_cnt_q) 
                                                      << 0x00000016U)) 
                                                  | ((((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__input_byte) 
                                                       << 0x0000000eU) 
                                                      | ((IData)(vlSelfRef.__PVT__i2c_core__DOT__event_nak) 
                                                         << 0x0000000cU)) 
                                                     | ((((((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_controller_fsm__DOT__unhandled_nak_cnt_expired) 
                                                            << 5U) 
                                                           | ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_controller_events_bus_timeout__DOT__de) 
                                                              << 3U)) 
                                                          | ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_controller_events_arbitration_lost__DOT__de) 
                                                             << 1U)) 
                                                         << 5U) 
                                                        | ((((IData)(vlSelfRef.__PVT__u_reg__DOT__u_target_events_tx_pending__DOT__de) 
                                                             << 4U) 
                                                            | ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_target_events_bus_timeout__DOT__de) 
                                                               << 2U)) 
                                                           | (IData)(vlSelfRef.__PVT__i2c_core__DOT__event_tx_arbitration_lost))))));
    vlSelfRef.__PVT__u_reg__DOT__hw2reg[1U] = ((0xfff80000U 
                                                & vlSelfRef.__PVT__u_reg__DOT__hw2reg[1U]) 
                                               | ((0x0007f800U 
                                                   & ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_oup_buf__DOT__rdata_o) 
                                                      << 0x0000000bU)) 
                                                  | ((0x00000700U 
                                                      & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_oup_buf__DOT__rdata_o)) 
                                                     | (0x000000ffU 
                                                        & ((IData)(1U) 
                                                           + (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_target_nack_count__q))))));
    vlSelfRef.__PVT__u_reg__DOT__hw2reg[1U] = ((0x0007ffffU 
                                                & vlSelfRef.__PVT__u_reg__DOT__hw2reg[1U]) 
                                               | ((IData)(
                                                          (((QData)((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__fifo_depth_o)) 
                                                            << 0x0000002cU) 
                                                           | (((QData)((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__fifo_depth_o)) 
                                                               << 0x00000020U) 
                                                              | (QData)((IData)(
                                                                                (((IData)(vlSelfRef.__PVT__i2c_core__DOT__scl_rx_val) 
                                                                                << 0x00000010U) 
                                                                                | (IData)(vlSelfRef.__PVT__i2c_core__DOT__sda_rx_val))))))) 
                                                  << 0x00000013U));
    vlSelfRef.__PVT__u_reg__DOT__hw2reg[2U] = (((IData)(
                                                        (((QData)((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__fifo_depth_o)) 
                                                          << 0x0000002cU) 
                                                         | (((QData)((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__fifo_depth_o)) 
                                                             << 0x00000020U) 
                                                            | (QData)((IData)(
                                                                              (((IData)(vlSelfRef.__PVT__i2c_core__DOT__scl_rx_val) 
                                                                                << 0x00000010U) 
                                                                               | (IData)(vlSelfRef.__PVT__i2c_core__DOT__sda_rx_val))))))) 
                                                >> 0x0000000dU) 
                                               | ((IData)(
                                                          ((((QData)((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__fifo_depth_o)) 
                                                             << 0x0000002cU) 
                                                            | (((QData)((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__fifo_depth_o)) 
                                                                << 0x00000020U) 
                                                               | (QData)((IData)(
                                                                                (((IData)(vlSelfRef.__PVT__i2c_core__DOT__scl_rx_val) 
                                                                                << 0x00000010U) 
                                                                                | (IData)(vlSelfRef.__PVT__i2c_core__DOT__sda_rx_val)))))) 
                                                           >> 0x00000020U)) 
                                                  << 0x00000013U));
    vlSelfRef.__PVT__u_reg__DOT__hw2reg[3U] = ((0xfffff800U 
                                                & vlSelfRef.__PVT__u_reg__DOT__hw2reg[3U]) 
                                               | ((IData)(
                                                          ((((QData)((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__fifo_depth_o)) 
                                                             << 0x0000002cU) 
                                                            | (((QData)((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__fifo_depth_o)) 
                                                                << 0x00000020U) 
                                                               | (QData)((IData)(
                                                                                (((IData)(vlSelfRef.__PVT__i2c_core__DOT__scl_rx_val) 
                                                                                << 0x00000010U) 
                                                                                | (IData)(vlSelfRef.__PVT__i2c_core__DOT__sda_rx_val)))))) 
                                                           >> 0x00000020U)) 
                                                  >> 0x0000000dU));
    vlSelfRef.__PVT__u_reg__DOT__hw2reg[3U] = ((0x000007ffU 
                                                & vlSelfRef.__PVT__u_reg__DOT__hw2reg[3U]) 
                                               | (0xfffff800U 
                                                  & (((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__fifo_depth_o) 
                                                      << 0x00000017U) 
                                                     | ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__fifo_depth_o) 
                                                        << 0x0000000bU))));
    vlSelfRef.__PVT__u_reg__DOT__hw2reg[4U] = ((0xfffff800U 
                                                & vlSelfRef.__PVT__u_reg__DOT__hw2reg[4U]) 
                                               | (0x000007ffU 
                                                  & ((0x000007f8U 
                                                      & ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_oup_buf__DOT__rdata_o) 
                                                         << 3U)) 
                                                     | ((0x000007ffU 
                                                         & ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__fifo_depth_o) 
                                                            >> 9U)) 
                                                        | ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__fifo_depth_o) 
                                                           >> 0x00000015U)))));
    vlSelfRef.__PVT__u_reg__DOT__hw2reg[4U] = ((0x000007ffU 
                                                & vlSelfRef.__PVT__u_reg__DOT__hw2reg[4U]) 
                                               | (0xfffff800U 
                                                  & (0x54000000U 
                                                     | ((((((((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_tx_stretch__DOT__d) 
                                                              << 5U) 
                                                             | ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_tx_threshold__DOT__d) 
                                                                << 3U)) 
                                                            | ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_acq_stretch__DOT__d) 
                                                               << 1U)) 
                                                           << 0x0000000fU) 
                                                          | (((((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_unexp_stop__DOT__d) 
                                                                << 4U) 
                                                               | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_unexp_stop__DOT__de) 
                                                                   << 3U) 
                                                                  | ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_host_timeout__DOT__d) 
                                                                     << 2U))) 
                                                              | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_host_timeout__DOT__de) 
                                                                  << 1U) 
                                                                 | (1U 
                                                                    & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__fifo_wready_o))))) 
                                                             << 0x0000000aU)) 
                                                         | (((((4U 
                                                                & ((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__fifo_wready_o)) 
                                                                   << 2U)) 
                                                               | ((2U 
                                                                   & ((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_oup_buf__DOT__rvalid_o)) 
                                                                      << 1U)) 
                                                                  | (IData)(vlSelfRef.__PVT__i2c_core__DOT__host_idle))) 
                                                              << 7U) 
                                                             | (((IData)(vlSelfRef.__PVT__i2c_core__DOT__target_idle) 
                                                                 << 6U) 
                                                                | (0x00000020U 
                                                                   & ((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_oup_buf__DOT__rvalid_o)) 
                                                                      << 5U)))) 
                                                            | ((((4U 
                                                                  & ((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__fifo_wready_o)) 
                                                                     << 2U)) 
                                                                 | (((2U 
                                                                      >= 
                                                                      (0x000001ffU 
                                                                       & ((IData)(0x010cU) 
                                                                          - (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__fifo_depth_o)))) 
                                                                     << 1U) 
                                                                    | (1U 
                                                                       & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_oup_buf__DOT__rvalid_o))))) 
                                                                << 2U) 
                                                               | ((2U 
                                                                   & ((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_oup_buf__DOT__rvalid_o)) 
                                                                      << 1U)) 
                                                                  | (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_i2c_target_fsm__DOT__ack_ctrl_stretching))))) 
                                                        << 0x0000000bU))));
    vlSelfRef.__PVT__u_reg__DOT__hw2reg[5U] = (0x000fffffU 
                                               & (0x00054400U 
                                                  | (((((((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_fmt_threshold__DOT__d) 
                                                          << 4U) 
                                                         | ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_threshold__DOT__d) 
                                                            << 2U)) 
                                                        | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_acq_threshold__DOT__d)) 
                                                       << 0x0000000fU) 
                                                      | (((((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_overflow__DOT__d) 
                                                            << 3U) 
                                                           | ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_rx_overflow__DOT__de) 
                                                              << 2U)) 
                                                          | ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_controller_halt__DOT__d) 
                                                             << 1U)) 
                                                         << 0x0000000aU)) 
                                                     | ((((((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_scl_interference__DOT__d) 
                                                            << 4U) 
                                                           | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_scl_interference__DOT__de) 
                                                               << 3U) 
                                                              | ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_sda_interference__DOT__d) 
                                                                 << 2U))) 
                                                          | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_sda_interference__DOT__de) 
                                                              << 1U) 
                                                             | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_stretch_timeout__DOT__d))) 
                                                         << 5U) 
                                                        | ((((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_stretch_timeout__DOT__de) 
                                                             << 4U) 
                                                            | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_sda_unstable__DOT__d) 
                                                                << 3U) 
                                                               | ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_sda_unstable__DOT__de) 
                                                                  << 2U))) 
                                                           | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_cmd_complete__DOT__d) 
                                                               << 1U) 
                                                              | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_state_cmd_complete__DOT__de)))))));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__ram_arb_inp_data[2U] 
        = vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_arbiter__DOT__gen_normal_case__DOT__data_tree__BRA__137__03a115__KET__;
    __Vfunc_mubi4_bool_to_mubi__47__val = vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_arbiter__DOT__valid_o;
    __Vfunc_mubi4_bool_to_mubi__47__Vfuncout = ((IData)(__Vfunc_mubi4_bool_to_mubi__47__val)
                                                 ? 6U
                                                 : 9U);
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_1p__DOT__req_d 
        = __Vfunc_mubi4_bool_to_mubi__47__Vfuncout;
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_arbiter__DOT__gen_normal_case__DOT__gen_tree__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__gen_nodes__DOT__sel 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__sram_req_o)) 
                 | ((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_arbiter__DOT__gen_normal_case__DOT__prio_tree__BRA__5__KET__)) 
                    & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_arbiter__DOT__gen_normal_case__DOT__prio_tree__BRA__6__KET__))));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_arbiter__DOT__gen_normal_case__DOT__gen_tree__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_arbiter__DOT__gen_normal_case__DOT__req_tree__BRA__1__KET__)) 
                 | ((~ ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_arbiter__DOT__gen_normal_case__DOT__prio_tree__BRA__4__KET__) 
                        | (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_arbiter__DOT__gen_normal_case__DOT__prio_tree__BRA__3__KET__))) 
                    & ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_arbiter__DOT__gen_normal_case__DOT__prio_tree__BRA__6__KET__) 
                       | (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_arbiter__DOT__gen_normal_case__DOT__prio_tree__BRA__5__KET__)))));
    vlSelfRef.i2c_core__DOT__u_fifos__DOT____Vcellinp__u_ram_arbiter__data_i[0U] 
        = vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__ram_arb_inp_data
        [0U];
    vlSelfRef.i2c_core__DOT__u_fifos__DOT____Vcellinp__u_ram_arbiter__data_i[1U] 
        = vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__ram_arb_inp_data
        [1U];
    vlSelfRef.i2c_core__DOT__u_fifos__DOT____Vcellinp__u_ram_arbiter__data_i[2U] 
        = vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__ram_arb_inp_data
        [2U];
    vlSelfRef.i2c_core__DOT__u_fifos__DOT____Vcellinp__u_ram_arbiter__data_i[3U] 
        = vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__ram_arb_inp_data
        [3U];
    __Vfunc_mubi4_test_true_loose__39__val = vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_1p__DOT__req_d;
    __Vfunc_mubi4_test_true_loose__39__Vfuncout = (9U 
                                                   != (IData)(__Vfunc_mubi4_test_true_loose__39__val));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_1p__DOT__req_q_b 
        = __Vfunc_mubi4_test_true_loose__39__Vfuncout;
    if (vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_arbiter__DOT__gen_normal_case__DOT__gen_tree__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel) {
        if (vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_arbiter__DOT__gen_normal_case__DOT__gen_tree__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__gen_nodes__DOT__sel) {
            vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_arbiter__DOT__idx_o = 3U;
            vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_arbiter__DOT__data_o 
                = vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_arbiter__DOT__gen_normal_case__DOT__data_tree__BRA__160__03a138__KET__;
        } else {
            vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_arbiter__DOT__idx_o = 2U;
            vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_arbiter__DOT__data_o 
                = vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_arbiter__DOT__gen_normal_case__DOT__data_tree__BRA__137__03a115__KET__;
        }
    } else if (vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_arbiter__DOT__gen_normal_case__DOT__gen_tree__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel) {
        vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_arbiter__DOT__idx_o = 1U;
        vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_arbiter__DOT__data_o 
            = vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_arbiter__DOT__gen_normal_case__DOT__data_tree__BRA__114__03a92__KET__;
    } else {
        vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_arbiter__DOT__idx_o = 0U;
        vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_arbiter__DOT__data_o 
            = vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_arbiter__DOT__gen_normal_case__DOT__data_tree__BRA__91__03a69__KET__;
    }
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__sram_gnt_i 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__sram_req_o) 
           & ((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_arbiter__DOT__gen_normal_case__DOT__gen_tree__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel)) 
              & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_arbiter__DOT__gen_normal_case__DOT__gen_tree__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel)));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__sram_gnt_i 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__sram_req_o) 
           & ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_arbiter__DOT__gen_normal_case__DOT__gen_tree__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel) 
              & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_arbiter__DOT__gen_normal_case__DOT__gen_tree__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__gen_nodes__DOT__sel)));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_arbiter__DOT__gen_normal_case__DOT__sel_tree__BRA__3__KET__ 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_arbiter__DOT__gen_normal_case__DOT__gen_tree__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel)) 
                 & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_arbiter__DOT__gen_normal_case__DOT__gen_tree__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel))));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_arbiter__DOT__gen_normal_case__DOT__sel_tree__BRA__5__KET__ 
        = ((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_arbiter__DOT__gen_normal_case__DOT__gen_tree__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__gen_nodes__DOT__sel)) 
           & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_arbiter__DOT__gen_normal_case__DOT__gen_tree__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_arbiter__DOT__data_i[0U] 
        = vlSelfRef.i2c_core__DOT__u_fifos__DOT____Vcellinp__u_ram_arbiter__data_i
        [0U];
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_arbiter__DOT__data_i[1U] 
        = vlSelfRef.i2c_core__DOT__u_fifos__DOT____Vcellinp__u_ram_arbiter__data_i
        [1U];
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_arbiter__DOT__data_i[2U] 
        = vlSelfRef.i2c_core__DOT__u_fifos__DOT____Vcellinp__u_ram_arbiter__data_i
        [2U];
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_arbiter__DOT__data_i[3U] 
        = vlSelfRef.i2c_core__DOT__u_fifos__DOT____Vcellinp__u_ram_arbiter__data_i
        [3U];
    vlSelfRef.__VdfgRegularize_ha785dde0_1_10 = ((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__full_o)) 
                                                 & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__sram_gnt_i));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__sram_access 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__sram_gnt_i) 
           & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__sram_req_o));
    vlSelfRef.__VdfgRegularize_ha785dde0_1_20 = ((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__full_o)) 
                                                 & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__sram_gnt_i));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__sram_access 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__sram_gnt_i) 
           & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__sram_req_o));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__sram_gnt_i 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__sram_req_o) 
           & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_arbiter__DOT__gen_normal_case__DOT__sel_tree__BRA__3__KET__));
    __Vtableidx3 = ((((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_arbiter__DOT__gen_normal_case__DOT__sel_tree__BRA__3__KET__) 
                      << 7U) | (0x00000040U & ((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_arbiter__DOT__gen_normal_case__DOT__gen_tree__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel)) 
                                               << 6U))) 
                    | (((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_arbiter__DOT__gen_normal_case__DOT__prio_mask_q) 
                        << 2U) | ((2U & (((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_arbiter__DOT__gen_normal_case__DOT__gen_tree__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel)) 
                                          | (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_arbiter__DOT__gen_normal_case__DOT__sel_tree__BRA__5__KET__)) 
                                         << 1U)) | 
                                  (0U != (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_arbiter__DOT__req_i)))));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_arbiter__DOT__gen_normal_case__DOT__prio_mask_d 
        = Vsim__ConstPool__TABLE_ha18a9397_0[__Vtableidx3];
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__sram_gnt_i 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__sram_req_o) 
           & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_arbiter__DOT__gen_normal_case__DOT__sel_tree__BRA__5__KET__));
    __Vfunc_mubi4_bool_to_mubi__48__val = (1U & (vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_arbiter__DOT__data_o 
                                                 >> 0x00000016U));
    __Vfunc_mubi4_bool_to_mubi__48__Vfuncout = ((IData)(__Vfunc_mubi4_bool_to_mubi__48__val)
                                                 ? 6U
                                                 : 9U);
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_1p__DOT__write_d 
        = __Vfunc_mubi4_bool_to_mubi__48__Vfuncout;
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__fifo_incr_rptr 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_inp_buf__DOT__rvalid_o) 
           & ((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__under_rst)) 
              & ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__empty_o)
                  ? ((IData)(vlSelfRef.__VdfgRegularize_ha785dde0_1_29)
                      ? (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_oup_buf__DOT__wready_o)
                      : (IData)(vlSelfRef.__VdfgRegularize_ha785dde0_1_10))
                  : ((~ (IData)(vlSelfRef.__VdfgRegularize_ha785dde0_1_7)) 
                     & (IData)(vlSelfRef.__VdfgRegularize_ha785dde0_1_10)))));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__incr_wptr_i 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__sram_access) 
           & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__sram_write_o));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__incr_rptr_i 
        = ((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__sram_write_o)) 
           & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__sram_access));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__fifo_incr_rptr 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_inp_buf__DOT__rvalid_o) 
           & ((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__under_rst)) 
              & ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__empty_o)
                  ? ((IData)(vlSelfRef.__VdfgRegularize_ha785dde0_1_23)
                      ? (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_oup_buf__DOT__wready_o)
                      : (IData)(vlSelfRef.__VdfgRegularize_ha785dde0_1_20))
                  : ((~ (IData)(vlSelfRef.__VdfgRegularize_ha785dde0_1_17)) 
                     & (IData)(vlSelfRef.__VdfgRegularize_ha785dde0_1_20)))));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__incr_wptr_i 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__sram_access) 
           & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__sram_write_o));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__incr_rptr_i 
        = ((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__sram_write_o)) 
           & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__sram_access));
    vlSelfRef.__VdfgRegularize_ha785dde0_1_5 = ((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__full_o)) 
                                                & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__sram_gnt_i));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__sram_access 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__sram_gnt_i) 
           & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__sram_req_o));
    vlSelfRef.__VdfgRegularize_ha785dde0_1_15 = ((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__full_o)) 
                                                 & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__sram_gnt_i));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__sram_access 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__sram_gnt_i) 
           & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__sram_req_o));
    __Vfunc_mubi4_test_true_loose__40__val = vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_1p__DOT__write_d;
    __Vfunc_mubi4_test_true_loose__40__Vfuncout = (9U 
                                                   != (IData)(__Vfunc_mubi4_test_true_loose__40__val));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_1p__DOT__write_q_b 
        = __Vfunc_mubi4_test_true_loose__40__Vfuncout;
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_1p__DOT__alert_o 
        = (((([&]() {
                        vlSelfRef.__Vfunc_mubi4_test_invalid__50__val 
                            = vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_1p__DOT__req_d;
                        vlSelfRef.__Vfunc_mubi4_test_invalid__50__Vfuncout 
                            = (1U & (~ ((6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_invalid__50__val)) 
                                        | (9U == (IData)(vlSelfRef.__Vfunc_mubi4_test_invalid__50__val)))));
                    }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_invalid__50__Vfuncout)) 
             | ([&]() {
                        vlSelfRef.__Vfunc_mubi4_test_invalid__51__val 
                            = vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_1p__DOT__write_d;
                        vlSelfRef.__Vfunc_mubi4_test_invalid__51__Vfuncout 
                            = (1U & (~ ((6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_invalid__51__val)) 
                                        | (9U == (IData)(vlSelfRef.__Vfunc_mubi4_test_invalid__51__val)))));
                    }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_invalid__51__Vfuncout))) 
            | ([&]() {
                    vlSelfRef.__Vfunc_mubi4_test_invalid__52__val 
                        = vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_1p__DOT__rvalid_sram_q;
                    vlSelfRef.__Vfunc_mubi4_test_invalid__52__Vfuncout 
                        = (1U & (~ ((6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_invalid__52__val)) 
                                    | (9U == (IData)(vlSelfRef.__Vfunc_mubi4_test_invalid__52__val)))));
                }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_invalid__52__Vfuncout))) 
           | ([&]() {
                vlSelfRef.__Vfunc_mubi4_test_invalid__53__val 
                    = vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_1p__DOT__rvalid_sram_q;
                vlSelfRef.__Vfunc_mubi4_test_invalid__53__Vfuncout 
                    = (1U & (~ ((6U == (IData)(vlSelfRef.__Vfunc_mubi4_test_invalid__53__val)) 
                                | (9U == (IData)(vlSelfRef.__Vfunc_mubi4_test_invalid__53__val)))));
            }(), (IData)(vlSelfRef.__Vfunc_mubi4_test_invalid__53__Vfuncout)));
    __Vfunc_mubi4_and_hi__45__b = (0x0000000fU & (~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_1p__DOT__write_d)));
    __Vfunc_mubi4_and_hi__45__a = vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_1p__DOT__req_d;
    __Vfunc_mubi4_and__46__b = __Vfunc_mubi4_and_hi__45__b;
    __Vfunc_mubi4_and__46__a = __Vfunc_mubi4_and_hi__45__a;
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__Vfunc_mubi4_and__46__out = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10979047310429224129ull);
    __Vfunc_mubi4_and__46__a_in = __Vfunc_mubi4_and__46__a;
    __Vfunc_mubi4_and__46__b_in = __Vfunc_mubi4_and__46__b;
    vlSelfRef.__Vfunc_mubi4_and__46__out = ((0x0cU 
                                             & (IData)(vlSelfRef.__Vfunc_mubi4_and__46__out)) 
                                            | ((2U 
                                                & ((IData)(__Vfunc_mubi4_and__46__a_in) 
                                                   & (IData)(__Vfunc_mubi4_and__46__b_in))) 
                                               | (1U 
                                                  & ((IData)(__Vfunc_mubi4_and__46__a_in) 
                                                     | (IData)(__Vfunc_mubi4_and__46__b_in)))));
    vlSelfRef.__Vfunc_mubi4_and__46__out = ((3U & (IData)(vlSelfRef.__Vfunc_mubi4_and__46__out)) 
                                            | (((2U 
                                                 & (((IData)(__Vfunc_mubi4_and__46__a_in) 
                                                     | (IData)(__Vfunc_mubi4_and__46__b_in)) 
                                                    >> 2U)) 
                                                | (1U 
                                                   & (((IData)(__Vfunc_mubi4_and__46__a_in) 
                                                       & (IData)(__Vfunc_mubi4_and__46__b_in)) 
                                                      >> 2U))) 
                                               << 2U));
    __Vfunc_mubi4_and__46__Vfuncout = vlSelfRef.__Vfunc_mubi4_and__46__out;
    __Vfunc_mubi4_and_hi__45__Vfuncout = __Vfunc_mubi4_and__46__Vfuncout;
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_ram_1p__DOT__rvalid_sram_d 
        = __Vfunc_mubi4_and_hi__45__Vfuncout;
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__fifo_incr_rptr) 
           & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__wptr_wrap_set 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__incr_wptr_i) 
           & (0x3dU == (0x0000003fU & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__wptr_wrap_cnt_q))));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__rptr_wrap_set 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__incr_rptr_i) 
           & (0x3dU == (0x0000003fU & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_rx_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__rptr_wrap_cnt_q))));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__fifo_incr_rptr) 
           & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__wptr_wrap_set 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__incr_wptr_i) 
           & (0x0109U == (0x000001ffU & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__wptr_wrap_cnt_q))));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__rptr_wrap_set 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__incr_rptr_i) 
           & (0x0109U == (0x000001ffU & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_acq_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__rptr_wrap_cnt_q))));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__fifo_incr_rptr 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_inp_buf__DOT__rvalid_o) 
           & ((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__under_rst)) 
              & ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__empty_o)
                  ? ((IData)(vlSelfRef.__VdfgRegularize_ha785dde0_1_32)
                      ? (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_oup_buf__DOT__wready_o)
                      : (IData)(vlSelfRef.__VdfgRegularize_ha785dde0_1_5))
                  : ((~ (IData)(vlSelfRef.__VdfgRegularize_ha785dde0_1_2)) 
                     & (IData)(vlSelfRef.__VdfgRegularize_ha785dde0_1_5)))));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__incr_wptr_i 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__sram_access) 
           & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__sram_write_o));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__incr_rptr_i 
        = ((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__sram_write_o)) 
           & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__sram_access));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__fifo_incr_rptr 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_inp_buf__DOT__rvalid_o) 
           & ((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__under_rst)) 
              & ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__empty_o)
                  ? ((IData)(vlSelfRef.__VdfgRegularize_ha785dde0_1_26)
                      ? (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_oup_buf__DOT__wready_o)
                      : (IData)(vlSelfRef.__VdfgRegularize_ha785dde0_1_15))
                  : ((~ (IData)(vlSelfRef.__VdfgRegularize_ha785dde0_1_12)) 
                     & (IData)(vlSelfRef.__VdfgRegularize_ha785dde0_1_15)))));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__incr_wptr_i 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__sram_access) 
           & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__sram_write_o));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__incr_rptr_i 
        = ((~ (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__sram_write_o)) 
           & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__sram_access));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__fifo_incr_rptr) 
           & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__wptr_wrap_set 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__incr_wptr_i) 
           & (0x3dU == (0x0000003fU & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__wptr_wrap_cnt_q))));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__rptr_wrap_set 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__incr_rptr_i) 
           & (0x3dU == (0x0000003fU & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_fmt_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__rptr_wrap_cnt_q))));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_set 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__fifo_incr_rptr) 
           & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_inp_buf__DOT__gen_normal_fifo__DOT__u_fifo_cnt__DOT__rptr_wrap_cnt_q));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__wptr_wrap_set 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__incr_wptr_i) 
           & (0x3dU == (0x0000003fU & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__wptr_wrap_cnt_q))));
    vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__rptr_wrap_set 
        = ((IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__incr_rptr_i) 
           & (0x3dU == (0x0000003fU & (IData)(vlSelfRef.__PVT__i2c_core__DOT__u_fifos__DOT__u_tx_fifo_sram_adapter__DOT__u_sram_ptrs__DOT__rptr_wrap_cnt_q))));
}
