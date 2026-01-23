// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "Vsim__pch.h"

VL_ATTR_COLD void Vsim_ibex_core__pi148___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_shadow_core__2(Vsim_ibex_core__pi148* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_ibex_core__pi148___stl_sequent__TOP__chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_shadow_core__2\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_80;
    if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_80 = 0;
    // Body
    if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_80 
        = ((~ (IData)(vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_prim_buf_alert_minor__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i)) 
           & (0U != (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__tag_match_ic1)));
    vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_hit_ic1__BRA__3__KET__ 
        = ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_way_en__BRA__3__KET__) 
           & (IData)(if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_80));
    vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_hit_ic1__BRA__2__KET__ 
        = ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_way_en__BRA__2__KET__) 
           & (IData)(if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_80));
    vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_hit_ic1__BRA__1__KET__ 
        = ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_way_en__BRA__1__KET__) 
           & (IData)(if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_80));
    vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_hit_ic1__BRA__0__KET__ 
        = ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_way_en__BRA__0__KET__) 
           & (IData)(if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_80));
    vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_hit_d__BRA__3__KET__ 
        = (1U & ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_hit_ic1__BRA__3__KET__) 
                 | (((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_hit_q) 
                     & (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_busy_q)) 
                    >> 3U)));
    vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_data_d[3U] 
        = ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_hit_ic1__BRA__3__KET__)
            ? vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__hit_data_ic1
            : (((QData)((IData)(((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[5U] 
                                  << 0x0000000eU) | 
                                 (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[4U] 
                                  >> 0x00000012U)))) 
                << 0x00000020U) | (QData)((IData)((
                                                   (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[5U] 
                                                    << 0x0000000eU) 
                                                   | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[4U] 
                                                      >> 0x00000012U))))));
    vlSelfRef.if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_71 
        = ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_data_sel__BRA__3__KET__) 
           & ((IData)(vlSelfRef.if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_76) 
              & ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_hit_ic1__BRA__3__KET__) 
                 | (((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_hit_q) 
                     >> 3U) | ((IData)(vlSelfRef.if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_56) 
                               | (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_rvd_arb__BRA__3__KET__))))));
    vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_hit_d__BRA__2__KET__ 
        = (1U & ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_hit_ic1__BRA__2__KET__) 
                 | (((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_hit_q) 
                     & (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_busy_q)) 
                    >> 2U)));
    vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_data_d[2U] 
        = ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_hit_ic1__BRA__2__KET__)
            ? vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__hit_data_ic1
            : (((QData)((IData)(((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[5U] 
                                  << 0x0000000eU) | 
                                 (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[4U] 
                                  >> 0x00000012U)))) 
                << 0x00000020U) | (QData)((IData)((
                                                   (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[5U] 
                                                    << 0x0000000eU) 
                                                   | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[4U] 
                                                      >> 0x00000012U))))));
    vlSelfRef.if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_84 
        = ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_data_sel__BRA__2__KET__) 
           & ((IData)(vlSelfRef.if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_89) 
              & ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_hit_ic1__BRA__2__KET__) 
                 | (((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_hit_q) 
                     >> 2U) | ((IData)(vlSelfRef.if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_43) 
                               | (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_rvd_arb__BRA__2__KET__))))));
    vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_hit_d__BRA__1__KET__ 
        = (1U & ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_hit_ic1__BRA__1__KET__) 
                 | (((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_hit_q) 
                     & (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_busy_q)) 
                    >> 1U)));
    vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_data_d[1U] 
        = ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_hit_ic1__BRA__1__KET__)
            ? vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__hit_data_ic1
            : (((QData)((IData)(((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[5U] 
                                  << 0x0000000eU) | 
                                 (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[4U] 
                                  >> 0x00000012U)))) 
                << 0x00000020U) | (QData)((IData)((
                                                   (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[5U] 
                                                    << 0x0000000eU) 
                                                   | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[4U] 
                                                      >> 0x00000012U))))));
    vlSelfRef.if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_95 
        = ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_data_sel__BRA__1__KET__) 
           & ((IData)(vlSelfRef.if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_100) 
              & ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_hit_ic1__BRA__1__KET__) 
                 | (((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_hit_q) 
                     >> 1U) | ((IData)(vlSelfRef.if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_30) 
                               | (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_rvd_arb__BRA__1__KET__))))));
    vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_hit_d__BRA__0__KET__ 
        = (1U & ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_hit_ic1__BRA__0__KET__) 
                 | ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_hit_q) 
                    & (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_busy_q))));
    vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_data_d[0U] 
        = ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_hit_ic1__BRA__0__KET__)
            ? vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__hit_data_ic1
            : (((QData)((IData)(((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[5U] 
                                  << 0x0000000eU) | 
                                 (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[4U] 
                                  >> 0x00000012U)))) 
                << 0x00000020U) | (QData)((IData)((
                                                   (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[5U] 
                                                    << 0x0000000eU) 
                                                   | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[4U] 
                                                      >> 0x00000012U))))));
    vlSelfRef.if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_106 
        = ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_data_sel__BRA__0__KET__) 
           & ((IData)(vlSelfRef.if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_112) 
              & ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_hit_ic1__BRA__0__KET__) 
                 | ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_hit_q) 
                    | ((IData)(vlSelfRef.if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_16) 
                       | (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_rvd_arb__BRA__0__KET__))))));
    vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_data_rvd 
        = ((((0x3ffffffeU & (((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_busy_q) 
                              >> 2U) & (((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_rvd_arb__BRA__3__KET__) 
                                         & ((~ ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_hit_q) 
                                                >> 3U)) 
                                            & ((~ (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_hit_ic1__BRA__3__KET__)) 
                                               & ((~ 
                                                   ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_stale_q) 
                                                    >> 3U)) 
                                                  & ((~ 
                                                      ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_out_cnt_q) 
                                                       >> 7U)) 
                                                     & ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_data_sel__BRA__3__KET__) 
                                                        & ((IData)(vlSelfRef.if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_59) 
                                                           == 
                                                           (3U 
                                                            & ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_out_cnt_q) 
                                                               >> 6U))))))))) 
                                        << 1U))) | 
             (((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_busy_q) 
               >> 2U) & ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_rvd_arb__BRA__2__KET__) 
                         & ((~ ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_hit_q) 
                                >> 2U)) & ((~ (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_hit_ic1__BRA__2__KET__)) 
                                           & ((~ ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_stale_q) 
                                                  >> 2U)) 
                                              & ((~ 
                                                  ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_out_cnt_q) 
                                                   >> 5U)) 
                                                 & ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_data_sel__BRA__2__KET__) 
                                                    & ((IData)(vlSelfRef.if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_46) 
                                                       == 
                                                       (3U 
                                                        & ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_out_cnt_q) 
                                                           >> 4U))))))))))) 
            << 2U) | ((0xfffffffeU & ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_busy_q) 
                                      & (((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_rvd_arb__BRA__1__KET__) 
                                          & ((~ ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_hit_q) 
                                                 >> 1U)) 
                                             & ((~ (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_hit_ic1__BRA__1__KET__)) 
                                                & ((~ 
                                                    ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_stale_q) 
                                                     >> 1U)) 
                                                   & ((~ 
                                                       ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_out_cnt_q) 
                                                        >> 3U)) 
                                                      & ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_data_sel__BRA__1__KET__) 
                                                         & ((IData)(vlSelfRef.if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_33) 
                                                            == 
                                                            (3U 
                                                             & ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_out_cnt_q) 
                                                                >> 2U))))))))) 
                                         << 1U))) | 
                      ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_busy_q) 
                       & ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_rvd_arb__BRA__0__KET__) 
                          & ((~ (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_hit_q)) 
                             & ((~ (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_hit_ic1__BRA__0__KET__)) 
                                & ((~ (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_stale_q)) 
                                   & ((~ ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_out_cnt_q) 
                                          >> 1U)) & 
                                      ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_data_sel__BRA__0__KET__) 
                                       & ((IData)(vlSelfRef.if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_19) 
                                          == (3U & (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_out_cnt_q))))))))))));
    vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_data_hit 
        = ((((0x3ffffffeU & (((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_busy_q) 
                              >> 2U) & (((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_data_sel__BRA__3__KET__) 
                                         & (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_hit_ic1__BRA__3__KET__)) 
                                        << 1U))) | 
             (((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_busy_q) 
               >> 2U) & ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_data_sel__BRA__2__KET__) 
                         & (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_hit_ic1__BRA__2__KET__)))) 
            << 2U) | ((0xfffffffeU & ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_busy_q) 
                                      & (((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_data_sel__BRA__1__KET__) 
                                          & (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_hit_ic1__BRA__1__KET__)) 
                                         << 1U))) | 
                      ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_busy_q) 
                       & ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_data_sel__BRA__0__KET__) 
                          & (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_hit_ic1__BRA__0__KET__)))));
    vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_out_arb 
        = ((((IData)(vlSelfRef.if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_71) 
             << 3U) | ((IData)(vlSelfRef.if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_84) 
                       << 2U)) | (((IData)(vlSelfRef.if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_95) 
                                   << 1U) | (IData)(vlSelfRef.if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_106)));
    if ((0U != (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_data_hit))) {
        vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__line_err = 0U;
        vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__line_data 
            = vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__hit_data_ic1;
    } else {
        vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__line_err 
            = vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_out_err;
        vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__line_data 
            = vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_out_data;
    }
    vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__line_err_muxed = 0U;
    if ((1U & (~ ((vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                   >> 1U) + (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__skid_valid_q))))) {
        vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__line_err_muxed 
            = (1U & ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__line_err_muxed) 
                     | (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__line_err)));
        vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__line_data_muxed = 0U;
        vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__line_data_muxed 
            = (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__line_data_muxed 
               | (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__line_data));
    } else {
        vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__line_data_muxed = 0U;
    }
    if ((1U & ((vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
                >> 1U) + (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__skid_valid_q)))) {
        vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__line_err_muxed 
            = ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__line_err_muxed) 
               | ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__line_err) 
                  >> 1U));
        vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__line_data_muxed 
            = (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__line_data_muxed 
               | (IData)((vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__line_data 
                          >> 0x20U)));
    }
    if ((0U != (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_data_rvd))) {
        vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_err 
            = vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__instr_err_i;
        vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_data 
            = ((vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[5U] 
                << 0x0000000eU) | (vlSymsp->TOP.chip_sim_tb__DOT__u_dut__DOT__top_earlgrey__DOT__u_rv_core_ibex__DOT__u_core__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q[4U] 
                                   >> 0x00000012U));
    } else {
        vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_err 
            = vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__line_err_muxed;
        vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_data 
            = vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__line_data_muxed;
    }
    vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__err_o 
        = (((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__skid_err_q) 
            & (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__skid_valid_q)) 
           | ((~ (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__skid_complete_instr)) 
              & (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_err)));
    vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_data_hi = 0U;
    if ((1U & (~ vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q))) {
        vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_data_hi 
            = (0x0000ffffU & ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_data_hi) 
                              | (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_data 
                                 >> 0x10U)));
    }
    vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__valid_o 
        = ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__skid_complete_instr) 
           | ((0U != (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_out_arb)) 
              & ((~ vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q) 
                 | ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__skid_valid_q) 
                    | ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_err) 
                       | (0x00030000U != (0x00030000U 
                                          & vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_data)))))));
    vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_data_lo = 0U;
    if ((1U & (~ vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q))) {
        vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_data_lo 
            = (0x0000ffffU & ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_data_lo) 
                              | vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_data));
    }
    if ((1U & vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q)) {
        vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_data_hi 
            = (0x0000ffffU & ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_data_hi) 
                              | vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_data));
        vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_data_lo 
            = (0x0000ffffU & ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_data_lo) 
                              | (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_data 
                                 >> 0x10U)));
    }
    vlSelfRef.if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_69 
        = ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__skid_valid_q)
            ? (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__skid_data_q)
            : (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_data_lo));
    vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__addr_incr_two 
        = ((~ (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__err_o)) 
           & (3U != (3U & (IData)(vlSelfRef.if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_69))));
    vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
        = (((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_data_hi) 
            << 0x00000010U) | (IData)(vlSelfRef.if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_69));
    vlSelfRef.if_stage_i__DOT____VdfgRegularize_h3a6f7641_0_2 
        = (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q 
           & ((3U == (3U & (IData)(vlSelfRef.if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_69))) 
              & vlSelfRef.__PVT__pmp_req_err[1U]));
    vlSelfRef.if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_66 
        = ((3U == (3U & (IData)(vlSelfRef.if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_69))) 
           | (IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_err));
    vlSelfRef.__PVT__if_stage_i__DOT__illegal_c_insn = 0U;
    vlSelfRef.__PVT__if_stage_i__DOT__instr_decompressed 
        = vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o;
    if ((2U & vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o)) {
        if ((1U & (~ vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o))) {
            if ((0x00008000U & vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o)) {
                if ((0x00004000U & vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o)) {
                    if ((0x00002000U & vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o)) {
                        vlSelfRef.__PVT__if_stage_i__DOT__illegal_c_insn = 1U;
                    }
                    if ((1U & (~ (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                  >> 0x0000000dU)))) {
                        vlSelfRef.__PVT__if_stage_i__DOT__instr_decompressed 
                            = (0x00012023U | ((((0x000000c0U 
                                                 & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                                    >> 1U)) 
                                                | ((0x00000020U 
                                                    & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                                       >> 7U)) 
                                                   | (0x0000001fU 
                                                      & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                                         >> 2U)))) 
                                               << 0x00000014U) 
                                              | (0x00000e00U 
                                                 & vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o)));
                    }
                } else {
                    if ((0x00002000U & vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o)) {
                        vlSelfRef.__PVT__if_stage_i__DOT__illegal_c_insn = 1U;
                    } else if ((1U & (~ (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                         >> 0x0cU)))) {
                        if ((0U == (0x0000001fU & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                                   >> 2U)))) {
                            if ((0U == (0x0000001fU 
                                        & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                           >> 7U)))) {
                                vlSelfRef.__PVT__if_stage_i__DOT__illegal_c_insn = 1U;
                            }
                        }
                    }
                    if ((1U & (~ (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                  >> 0x0000000dU)))) {
                        vlSelfRef.__PVT__if_stage_i__DOT__instr_decompressed 
                            = ((0x00001000U & vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o)
                                ? ((0U != (0x0000001fU 
                                           & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                              >> 2U)))
                                    ? (0x33U | ((0x01f00000U 
                                                 & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                                    << 0x00000012U)) 
                                                | ((0x000f8000U 
                                                    & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                                       << 8U)) 
                                                   | (0x00000f80U 
                                                      & vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o))))
                                    : ((0U == (0x0000001fU 
                                               & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                                  >> 7U)))
                                        ? 0x00100073U
                                        : (0x00e7U 
                                           | (0x000f8000U 
                                              & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                                 << 8U)))))
                                : ((0U != (0x0000001fU 
                                           & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                              >> 2U)))
                                    ? (0x33U | ((0x01f00000U 
                                                 & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                                    << 0x00000012U)) 
                                                | (0x00000f80U 
                                                   & vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o)))
                                    : (0x0067U | (0x000f8000U 
                                                  & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                                     << 8U)))));
                    }
                }
            } else if ((0x00004000U & vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o)) {
                if ((0x00002000U & vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o)) {
                    vlSelfRef.__PVT__if_stage_i__DOT__illegal_c_insn = 1U;
                } else if ((0U == (0x0000001fU & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                                  >> 7U)))) {
                    vlSelfRef.__PVT__if_stage_i__DOT__illegal_c_insn = 1U;
                }
                if ((1U & (~ (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                              >> 0x0000000dU)))) {
                    vlSelfRef.__PVT__if_stage_i__DOT__instr_decompressed 
                        = (0x00012003U | ((0x0c000000U 
                                           & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                              << 0x00000018U)) 
                                          | ((0x02000000U 
                                              & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                                 << 0x0000000dU)) 
                                             | ((0x01c00000U 
                                                 & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                                    << 0x00000012U)) 
                                                | (0x00000f80U 
                                                   & vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o)))));
                }
            } else {
                if ((0x00002000U & vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o)) {
                    vlSelfRef.__PVT__if_stage_i__DOT__illegal_c_insn = 1U;
                } else if ((0x00001000U & vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o)) {
                    vlSelfRef.__PVT__if_stage_i__DOT__illegal_c_insn = 1U;
                }
                if ((1U & (~ (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                              >> 0x0000000dU)))) {
                    vlSelfRef.__PVT__if_stage_i__DOT__instr_decompressed 
                        = (0x00001013U | ((0x01f00000U 
                                           & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                              << 0x00000012U)) 
                                          | ((0x000f8000U 
                                              & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                                 << 8U)) 
                                             | (0x00000f80U 
                                                & vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o))));
                }
            }
        }
    } else if ((1U & vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o)) {
        if ((0x00008000U & vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o)) {
            if ((1U & (~ (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                          >> 0x0000000eU)))) {
                if ((1U & (~ (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                              >> 0x0000000dU)))) {
                    if ((0x00000800U & vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o)) {
                        if ((0x00000400U & vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o)) {
                            if ((0x00001000U & vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o)) {
                                vlSelfRef.__PVT__if_stage_i__DOT__illegal_c_insn = 1U;
                            }
                        }
                    } else if ((0x00001000U & vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o)) {
                        vlSelfRef.__PVT__if_stage_i__DOT__illegal_c_insn = 1U;
                    }
                }
            }
            if ((0x00004000U & vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o)) {
                vlSelfRef.__PVT__if_stage_i__DOT__instr_decompressed 
                    = (0x00040063U | (((- (IData)((1U 
                                                   & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                                      >> 0x0cU)))) 
                                       << 0x0000001cU) 
                                      | ((0x0c000000U 
                                          & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                             << 0x00000015U)) 
                                         | ((0x02000000U 
                                             & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                                << 0x00000017U)) 
                                            | ((0x00038000U 
                                                & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                                   << 8U)) 
                                               | ((((4U 
                                                     & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                                        >> 0x0000000bU)) 
                                                    | (3U 
                                                       & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                                          >> 0x0aU))) 
                                                   << 0x0000000aU) 
                                                  | ((0x00000300U 
                                                      & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                                         << 5U)) 
                                                     | (0x00000080U 
                                                        & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                                           >> 5U)))))))));
            } else if ((0x00002000U & vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o)) {
                vlSelfRef.__PVT__if_stage_i__DOT__instr_decompressed 
                    = (0x6fU | (((((((2U & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                            >> 0x0000000bU)) 
                                     | (1U & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                              >> 8U))) 
                                    << 9U) | (((0x0000000cU 
                                                & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                                   >> 7U)) 
                                               | ((2U 
                                                   & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                                      >> 5U)) 
                                                  | (1U 
                                                     & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                                        >> 7U)))) 
                                              << 5U)) 
                                  | ((0x00000010U & 
                                      (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                       << 2U)) | ((8U 
                                                   & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                                      >> 8U)) 
                                                  | (7U 
                                                     & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                                        >> 3U))))) 
                                 << 0x00000015U) | 
                                ((0x001ff000U & ((- (IData)(
                                                            (1U 
                                                             & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                                                >> 0x0cU)))) 
                                                 << 0x0000000cU)) 
                                 | (0x00000080U & (
                                                   (~ 
                                                    (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                                     >> 0x0fU)) 
                                                   << 7U)))));
            } else if ((0x00000800U & vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o)) {
                if ((0x00000400U & vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o)) {
                    if ((1U & (~ (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                  >> 0x0cU)))) {
                        vlSelfRef.__PVT__if_stage_i__DOT__instr_decompressed 
                            = ((0x00000040U & vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o)
                                ? ((0x00000020U & vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o)
                                    ? (0x00847433U 
                                       | ((0x00700000U 
                                           & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                              << 0x00000012U)) 
                                          | ((0x00038000U 
                                              & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                                 << 8U)) 
                                             | (0x00000380U 
                                                & vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o))))
                                    : (0x00846433U 
                                       | ((0x00700000U 
                                           & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                              << 0x00000012U)) 
                                          | ((0x00038000U 
                                              & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                                 << 8U)) 
                                             | (0x00000380U 
                                                & vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o)))))
                                : ((0x00000020U & vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o)
                                    ? (0x00844433U 
                                       | ((0x00700000U 
                                           & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                              << 0x00000012U)) 
                                          | ((0x00038000U 
                                              & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                                 << 8U)) 
                                             | (0x00000380U 
                                                & vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o))))
                                    : (0x40840433U 
                                       | ((0x00700000U 
                                           & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                              << 0x00000012U)) 
                                          | ((0x00038000U 
                                              & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                                 << 8U)) 
                                             | (0x00000380U 
                                                & vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o))))));
                    }
                } else {
                    vlSelfRef.__PVT__if_stage_i__DOT__instr_decompressed 
                        = (0x00047413U | (((((0x0000007eU 
                                              & ((- (IData)(
                                                            (1U 
                                                             & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                                                >> 0x0cU)))) 
                                                 << 1U)) 
                                             | (1U 
                                                & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                                   >> 0x0cU))) 
                                            << 0x00000019U) 
                                           | (0x01f00000U 
                                              & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                                 << 0x00000012U))) 
                                          | ((0x00038000U 
                                              & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                                 << 8U)) 
                                             | (0x00000380U 
                                                & vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o))));
                }
            } else {
                vlSelfRef.__PVT__if_stage_i__DOT__instr_decompressed 
                    = (0x00045413U | ((0x40000000U 
                                       & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                          << 0x00000014U)) 
                                      | ((((0x00001f00U 
                                            & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                               << 6U)) 
                                           | (0x00000038U 
                                              & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                                 >> 4U))) 
                                          << 0x0000000cU) 
                                         | (0x00000380U 
                                            & vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o))));
            }
        } else if ((0x00004000U & vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o)) {
            if ((0x00002000U & vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o)) {
                if ((0U == ((0x00000020U & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                            >> 7U)) 
                            | (0x0000001fU & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                              >> 2U))))) {
                    vlSelfRef.__PVT__if_stage_i__DOT__illegal_c_insn = 1U;
                }
                vlSelfRef.__PVT__if_stage_i__DOT__instr_decompressed 
                    = (0x37U | (((- (IData)((1U & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                                   >> 0x0cU)))) 
                                 << 0x00000011U) | 
                                ((0x0001f000U & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                                 << 0x0000000aU)) 
                                 | (0x00000f80U & vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o))));
                if ((2U == (0x0000001fU & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                           >> 7U)))) {
                    vlSelfRef.__PVT__if_stage_i__DOT__instr_decompressed 
                        = (0x00010113U | (((- (IData)(
                                                      (1U 
                                                       & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                                          >> 0x0cU)))) 
                                           << 0x0000001dU) 
                                          | ((((6U 
                                                & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                                   >> 2U)) 
                                               | (1U 
                                                  & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                                     >> 5U))) 
                                              << 0x0000001aU) 
                                             | ((0x02000000U 
                                                 & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                                    << 0x00000017U)) 
                                                | (0x01000000U 
                                                   & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                                      << 0x00000012U))))));
                }
            } else {
                vlSelfRef.__PVT__if_stage_i__DOT__instr_decompressed 
                    = (0x13U | (((- (IData)((1U & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                                   >> 0x0cU)))) 
                                 << 0x0000001aU) | 
                                ((0x02000000U & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                                 << 0x0000000dU)) 
                                 | ((0x01f00000U & 
                                     (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                      << 0x00000012U)) 
                                    | (0x00000f80U 
                                       & vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o)))));
            }
        } else {
            vlSelfRef.__PVT__if_stage_i__DOT__instr_decompressed 
                = ((0x00002000U & vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o)
                    ? (0x6fU | (((((((2U & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                            >> 0x0000000bU)) 
                                     | (1U & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                              >> 8U))) 
                                    << 9U) | (((0x0000000cU 
                                                & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                                   >> 7U)) 
                                               | ((2U 
                                                   & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                                      >> 5U)) 
                                                  | (1U 
                                                     & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                                        >> 7U)))) 
                                              << 5U)) 
                                  | ((0x00000010U & 
                                      (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                       << 2U)) | ((8U 
                                                   & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                                      >> 8U)) 
                                                  | (7U 
                                                     & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                                        >> 3U))))) 
                                 << 0x00000015U) | 
                                ((0x001ff000U & ((- (IData)(
                                                            (1U 
                                                             & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                                                >> 0x0cU)))) 
                                                 << 0x0000000cU)) 
                                 | (0x00000080U & (
                                                   (~ 
                                                    (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                                     >> 0x0fU)) 
                                                   << 7U)))))
                    : (0x13U | ((((0x00000fc0U & ((- (IData)(
                                                             (1U 
                                                              & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                                                 >> 0x0cU)))) 
                                                  << 6U)) 
                                  | ((0x00000020U & 
                                      (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                       >> 7U)) | (0x0000001fU 
                                                  & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                                     >> 2U)))) 
                                 << 0x00000014U) | 
                                ((0x000f8000U & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                                 << 8U)) 
                                 | (0x00000f80U & vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o)))));
        }
    } else if ((0x00008000U & vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o)) {
        if ((0x00004000U & vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o)) {
            if ((0x00002000U & vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o)) {
                vlSelfRef.__PVT__if_stage_i__DOT__illegal_c_insn = 1U;
            }
            if ((1U & (~ (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                          >> 0x0000000dU)))) {
                vlSelfRef.__PVT__if_stage_i__DOT__instr_decompressed 
                    = (0x00842023U | (((((2U & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                                >> 4U)) 
                                         | (1U & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                                  >> 0x0cU))) 
                                        << 0x00000019U) 
                                       | (0x00700000U 
                                          & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                             << 0x00000012U))) 
                                      | ((0x00038000U 
                                          & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                             << 8U)) 
                                         | ((0x00000c00U 
                                             & vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o) 
                                            | (0x00000200U 
                                               & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                                  << 3U))))));
            }
        } else {
            vlSelfRef.__PVT__if_stage_i__DOT__illegal_c_insn = 1U;
        }
    } else if ((0x00004000U & vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o)) {
        if ((0x00002000U & vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o)) {
            vlSelfRef.__PVT__if_stage_i__DOT__illegal_c_insn = 1U;
        }
        if ((1U & (~ (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                      >> 0x0000000dU)))) {
            vlSelfRef.__PVT__if_stage_i__DOT__instr_decompressed 
                = (0x00042403U | ((0x04000000U & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                                  << 0x00000015U)) 
                                  | ((0x03800000U & 
                                      (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                       << 0x0000000dU)) 
                                     | ((0x00400000U 
                                         & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                            << 0x00000010U)) 
                                        | ((0x00038000U 
                                            & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                               << 8U)) 
                                           | (0x00000380U 
                                              & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                                 << 5U)))))));
        }
    } else {
        if ((0x00002000U & vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o)) {
            vlSelfRef.__PVT__if_stage_i__DOT__illegal_c_insn = 1U;
        } else if ((0U == (0x000000ffU & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                          >> 5U)))) {
            vlSelfRef.__PVT__if_stage_i__DOT__illegal_c_insn = 1U;
        }
        if ((1U & (~ (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                      >> 0x0000000dU)))) {
            vlSelfRef.__PVT__if_stage_i__DOT__instr_decompressed 
                = (0x00010413U | ((0x3c000000U & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                                  << 0x00000013U)) 
                                  | ((0x03000000U & 
                                      (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                       << 0x0000000dU)) 
                                     | ((0x00800000U 
                                         & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                            << 0x00000012U)) 
                                        | ((0x00400000U 
                                            & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                               << 0x00000010U)) 
                                           | (0x00000380U 
                                              & (vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o 
                                                 << 5U)))))));
        }
    }
    vlSelfRef.__PVT__if_stage_i__DOT__if_instr_err 
        = ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__err_o) 
           | (vlSelfRef.__PVT__pmp_req_err[0U] | (IData)(vlSelfRef.if_stage_i__DOT____VdfgRegularize_h3a6f7641_0_2)));
    vlSelfRef.__PVT__if_stage_i__DOT__instr_out = ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__stall_dummy_instr)
                                                    ? 
                                                   (0x0033U 
                                                    | (((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__dummy_set) 
                                                        << 0x00000019U) 
                                                       | ((0x01ff8000U 
                                                           & ((IData)(vlSelfRef.__VdfgRegularize_h2dc7b7d1_1_35) 
                                                              << 0x0000000aU)) 
                                                          | ((IData)(vlSelfRef.__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__dummy_opcode) 
                                                             << 0x0000000cU))))
                                                    : vlSelfRef.__PVT__if_stage_i__DOT__instr_decompressed);
}

VL_ATTR_COLD void Vsim_ibex_core__pi148___ctor_var_reset(Vsim_ibex_core__pi148* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vsim_ibex_core__pi148___ctor_var_reset\n"); );
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->clk_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11908517815223722933ull);
    vlSelf->rst_ni = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3161515032326629241ull);
    vlSelf->hart_id_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14232312970918094889ull);
    vlSelf->boot_addr_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6854077575247965213ull);
    vlSelf->instr_req_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14531167946818535043ull);
    vlSelf->instr_gnt_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3778668012896251442ull);
    vlSelf->instr_rvalid_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11649950516124001328ull);
    vlSelf->instr_addr_o = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 654935547478337000ull);
    vlSelf->instr_rdata_i = VL_SCOPED_RAND_RESET_Q(39, __VscopeHash, 7306565410255693909ull);
    vlSelf->instr_err_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2506672939132288486ull);
    vlSelf->data_req_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13258830846686508357ull);
    vlSelf->data_gnt_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12140330544646895102ull);
    vlSelf->data_rvalid_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8459008019399168966ull);
    vlSelf->data_we_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2784509029390390587ull);
    vlSelf->data_be_o = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12177541519177695058ull);
    vlSelf->data_addr_o = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6950453265813282798ull);
    vlSelf->data_wdata_o = VL_SCOPED_RAND_RESET_Q(39, __VscopeHash, 3892294063785114175ull);
    vlSelf->data_rdata_i = VL_SCOPED_RAND_RESET_Q(39, __VscopeHash, 9755530576326907746ull);
    vlSelf->data_err_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11249608029342226805ull);
    vlSelf->dummy_instr_id_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17998895919988402225ull);
    vlSelf->dummy_instr_wb_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10811093345495322152ull);
    vlSelf->rf_raddr_a_o = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 15173540115626903119ull);
    vlSelf->rf_raddr_b_o = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 6709858694025178932ull);
    vlSelf->rf_waddr_wb_o = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 11809471024972519437ull);
    vlSelf->rf_we_wb_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17361937739063464873ull);
    vlSelf->rf_wdata_wb_ecc_o = VL_SCOPED_RAND_RESET_Q(39, __VscopeHash, 1282787434816413004ull);
    vlSelf->rf_rdata_a_ecc_i = VL_SCOPED_RAND_RESET_Q(39, __VscopeHash, 5130595112760636626ull);
    vlSelf->rf_rdata_b_ecc_i = VL_SCOPED_RAND_RESET_Q(39, __VscopeHash, 12379385321049763562ull);
    vlSelf->ic_tag_req_o = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16181791106148144559ull);
    vlSelf->ic_tag_write_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1457435491501372264ull);
    vlSelf->ic_tag_addr_o = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17812287405967648238ull);
    vlSelf->ic_tag_wdata_o = VL_SCOPED_RAND_RESET_I(28, __VscopeHash, 4665210103908903401ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->ic_tag_rdata_i[__Vi0] = VL_SCOPED_RAND_RESET_I(28, __VscopeHash, 977798177231676639ull);
    }
    vlSelf->ic_data_req_o = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12988650484329146086ull);
    vlSelf->ic_data_write_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1633217803470528958ull);
    vlSelf->ic_data_addr_o = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13588687095820469078ull);
    VL_SCOPED_RAND_RESET_W(78, vlSelf->ic_data_wdata_o, __VscopeHash, 257130086398194124ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(78, vlSelf->ic_data_rdata_i[__Vi0], __VscopeHash, 5218498715516566933ull);
    }
    vlSelf->ic_scr_key_valid_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16925728226305634876ull);
    vlSelf->ic_scr_key_req_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 726796124876322126ull);
    vlSelf->irq_software_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2638438955069839570ull);
    vlSelf->irq_timer_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10264492141558949306ull);
    vlSelf->irq_external_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9275754242809800498ull);
    vlSelf->irq_fast_i = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 15325696321436647306ull);
    vlSelf->irq_nm_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15625223038548301576ull);
    vlSelf->irq_pending_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2833228920353262610ull);
    vlSelf->debug_req_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10477173065545169978ull);
    VL_SCOPED_RAND_RESET_W(160, vlSelf->crash_dump_o, __VscopeHash, 11455028946567694039ull);
    vlSelf->double_fault_seen_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11224735460049186079ull);
    vlSelf->rvfi_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11567585934436963273ull);
    vlSelf->rvfi_order = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 5979707310596660652ull);
    vlSelf->rvfi_insn = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6220329832192124657ull);
    vlSelf->rvfi_trap = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14264171660214961985ull);
    vlSelf->rvfi_halt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6827333379590374006ull);
    vlSelf->rvfi_intr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15659157735209443366ull);
    vlSelf->rvfi_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7237997432152298385ull);
    vlSelf->rvfi_ixl = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17997077998305700966ull);
    vlSelf->rvfi_rs1_addr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 17249303277837985668ull);
    vlSelf->rvfi_rs2_addr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 6835922882267509951ull);
    vlSelf->rvfi_rs3_addr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 1314166189763056988ull);
    vlSelf->rvfi_rs1_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4044889439759919337ull);
    vlSelf->rvfi_rs2_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18200364913981278843ull);
    vlSelf->rvfi_rs3_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4267088218533173848ull);
    vlSelf->rvfi_rd_addr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 7404223540078648407ull);
    vlSelf->rvfi_rd_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12563052908445307242ull);
    vlSelf->rvfi_pc_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 166339320296314353ull);
    vlSelf->rvfi_pc_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9985564527100831026ull);
    vlSelf->rvfi_mem_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4819164154746370970ull);
    vlSelf->rvfi_mem_rmask = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11848081616672831662ull);
    vlSelf->rvfi_mem_wmask = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16583986449816199447ull);
    vlSelf->rvfi_mem_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 165640419387587325ull);
    vlSelf->rvfi_mem_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9763064276365803955ull);
    vlSelf->rvfi_ext_pre_mip = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18413314873621973225ull);
    vlSelf->rvfi_ext_post_mip = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17228473599784255872ull);
    vlSelf->rvfi_ext_nmi = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4686883026167052759ull);
    vlSelf->rvfi_ext_nmi_int = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8190266678766537335ull);
    vlSelf->rvfi_ext_debug_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4443786102994514076ull);
    vlSelf->rvfi_ext_debug_mode = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18359828102308962709ull);
    vlSelf->rvfi_ext_rf_wr_suppress = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15062186566527484219ull);
    vlSelf->rvfi_ext_mcycle = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 1009935135143044039ull);
    for (int __Vi0 = 0; __Vi0 < 10; ++__Vi0) {
        vlSelf->rvfi_ext_mhpmcounters[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15508593518516383368ull);
    }
    for (int __Vi0 = 0; __Vi0 < 10; ++__Vi0) {
        vlSelf->rvfi_ext_mhpmcountersh[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10749115072924638083ull);
    }
    vlSelf->rvfi_ext_ic_scr_key_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8291284685616301956ull);
    vlSelf->rvfi_ext_irq_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1938837666480121886ull);
    vlSelf->fetch_enable_i = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16535158784592174946ull);
    vlSelf->alert_minor_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14777690443952678382ull);
    vlSelf->alert_major_internal_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1357106176385449888ull);
    vlSelf->alert_major_bus_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11024583674761110999ull);
    vlSelf->core_busy_o = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 18108559228706570843ull);
    vlSelf->__PVT__dummy_instr_id = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16844499941288751831ull);
    vlSelf->__PVT__instr_rdata_id = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 92186009196620262ull);
    vlSelf->__PVT__instr_rdata_alu_id = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2094862514179966720ull);
    vlSelf->__PVT__instr_rdata_c_id = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2200439947969466235ull);
    vlSelf->__PVT__instr_is_compressed_id = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15267160186035594687ull);
    vlSelf->__PVT__instr_fetch_err = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17692545593176210931ull);
    vlSelf->__PVT__instr_fetch_err_plus2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8598796225772642689ull);
    vlSelf->__PVT__illegal_c_insn_id = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 402859804076981278ull);
    vlSelf->__PVT__pc_id = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15296362364913569599ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__imd_val_d_ex[__Vi0] = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 7866565959230549858ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__imd_val_q_ex[__Vi0] = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 6789710281662784040ull);
    }
    vlSelf->__PVT__icache_inval = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3802583688675709810ull);
    vlSelf->__PVT__pc_set = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10158103699182911234ull);
    vlSelf->__PVT__pc_mux_id = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 10965685563302380365ull);
    vlSelf->__PVT__exc_pc_mux_id = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1346361448846975725ull);
    vlSelf->__PVT__exc_cause = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 4661477134946315351ull);
    vlSelf->__PVT__lsu_addr_incr_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13208692805889070261ull);
    vlSelf->__PVT__ctrl_busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9215934684902535503ull);
    vlSelf->__PVT__mult_sel_ex = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1835665688724218400ull);
    vlSelf->__PVT__div_sel_ex = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15897355745347696664ull);
    vlSelf->__PVT__csr_access = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5803401993543389736ull);
    vlSelf->__PVT__instr_req_int = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 596004105371023546ull);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__csr_pmp_addr[__Vi0] = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 7887990703104303453ull);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__csr_pmp_cfg[__Vi0] = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 11546377638660370243ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__PVT__pmp_req_err[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13989375166741305672ull);
    }
    vlSelf->__PVT__data_req_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 218735470445168502ull);
    vlSelf->__PVT__csr_save_if = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5033775129105779732ull);
    vlSelf->__PVT__csr_save_id = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8694762579628159201ull);
    vlSelf->__PVT__csr_save_wb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14726101762859022343ull);
    vlSelf->__PVT__csr_restore_mret_id = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15841198905636011744ull);
    vlSelf->__PVT__csr_restore_dret_id = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13308997270162565896ull);
    vlSelf->__PVT__csr_save_cause = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14984621778335690449ull);
    vlSelf->__PVT__csr_mtval = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9641321042026439539ull);
    vlSelf->__PVT__debug_mode_entering = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9386704350442885179ull);
    vlSelf->__PVT__debug_csr_save = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15948463741630126929ull);
    vlSelf->__PVT__perf_jump = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1947151979977436733ull);
    vlSelf->__PVT__perf_branch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16196172067429671730ull);
    vlSelf->__PVT__perf_tbranch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2199381361172359759ull);
    vlSelf->__PVT__perf_load = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14507482622096646803ull);
    vlSelf->__PVT__perf_store = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11104709145871125516ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__rvfi_stage_valid[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14699437362625092660ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__rvfi_stage_order[__Vi0] = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 9263630886551531091ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__rvfi_stage_insn[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14861591995700789214ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__rvfi_stage_trap[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2680918983380344541ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__rvfi_stage_halt[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8113041352141756649ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__rvfi_stage_intr[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17712711436429772571ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__rvfi_stage_mode[__Vi0] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6645965811097902046ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__rvfi_stage_ixl[__Vi0] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6650235252844823221ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__rvfi_stage_rs1_addr[__Vi0] = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 180666223829993812ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__rvfi_stage_rs2_addr[__Vi0] = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 14297631408372769151ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__rvfi_stage_rs3_addr[__Vi0] = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 4517517867050886068ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__rvfi_stage_rs1_rdata[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17092777253810693134ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__rvfi_stage_rs2_rdata[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10373763121484249790ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__rvfi_stage_rs3_rdata[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14701441241009669272ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__rvfi_stage_rd_addr[__Vi0] = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 8084033449169697380ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__rvfi_stage_rd_wdata[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11683942028485646771ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__rvfi_stage_pc_rdata[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 544250248779267467ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__rvfi_stage_pc_wdata[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15947591488003427443ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__rvfi_stage_mem_addr[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16322797083742451080ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__rvfi_stage_mem_rmask[__Vi0] = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17687585278094829186ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__rvfi_stage_mem_wmask[__Vi0] = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13951099939386055671ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__rvfi_stage_mem_rdata[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14206333903681210241ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__rvfi_stage_mem_wdata[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4727274445742466396ull);
    }
    vlSelf->__PVT__rvfi_instr_new_wb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8193057834686463773ull);
    vlSelf->__PVT__rvfi_intr_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12860001041155445600ull);
    vlSelf->__PVT__rvfi_intr_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13340172308941013294ull);
    vlSelf->__PVT__rvfi_set_trap_pc_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15025767661814615932ull);
    vlSelf->__PVT__rvfi_set_trap_pc_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8465839905344796137ull);
    vlSelf->__PVT__rvfi_rs1_addr_d = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 3705124566891597838ull);
    vlSelf->__PVT__rvfi_rs1_addr_q = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 5103868677168171147ull);
    vlSelf->__PVT__rvfi_rs2_addr_d = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 2539080383561519743ull);
    vlSelf->__PVT__rvfi_rs2_addr_q = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 7470461838812999636ull);
    vlSelf->__PVT__rvfi_rs1_data_d = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11199923509407988255ull);
    vlSelf->__PVT__rvfi_rs1_data_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11843603086264896948ull);
    vlSelf->__PVT__rvfi_rs2_data_d = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2754280506534816347ull);
    vlSelf->__PVT__rvfi_rs2_data_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6994632576257771788ull);
    vlSelf->__PVT__rvfi_rd_addr_q = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 15277590297347069669ull);
    vlSelf->__PVT__rvfi_rd_addr_d = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 5624141908087591680ull);
    vlSelf->__PVT__rvfi_rd_wdata_d = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7091578182874198619ull);
    vlSelf->__PVT__rvfi_rd_wdata_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4745062613941309274ull);
    vlSelf->__PVT__rvfi_rd_we_wb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14816030574094022138ull);
    vlSelf->__PVT__rvfi_mem_mask_int = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5939024221576767389ull);
    vlSelf->__PVT__rvfi_mem_rdata_d = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 678061916123395728ull);
    vlSelf->__PVT__rvfi_mem_rdata_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17889254080391542282ull);
    vlSelf->__PVT__rvfi_mem_wdata_d = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12313980639302058479ull);
    vlSelf->__PVT__rvfi_mem_wdata_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6165783298249305545ull);
    vlSelf->__PVT__rvfi_mem_addr_d = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15664741356943922798ull);
    vlSelf->__PVT__rvfi_mem_addr_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9580541929498330165ull);
    vlSelf->__PVT__rvfi_irq_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11109439236892349590ull);
    vlSelf->__PVT__rvfi_stage_order_d = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 2304414325241275485ull);
    vlSelf->__PVT__rvfi_id_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12833407080339564597ull);
    vlSelf->__PVT__rvfi_wb_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7758741641995773401ull);
    vlSelf->__PVT__new_nmi = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 156123454858339640ull);
    vlSelf->__PVT__new_nmi_int = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15053038026157512804ull);
    vlSelf->__PVT__new_irq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2376207467468996855ull);
    vlSelf->__PVT__captured_mip = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 16482386064067917410ull);
    vlSelf->__PVT__captured_nmi = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13392636701186297295ull);
    vlSelf->__PVT__captured_nmi_int = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15453114936691131153ull);
    vlSelf->__PVT__captured_debug_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16376089587749841614ull);
    vlSelf->__PVT__captured_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6583106398818543361ull);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__PVT__rvfi_ext_stage_pre_mip[__Vi0] = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 716649024382651451ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__rvfi_ext_stage_post_mip[__Vi0] = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 15571579851183840463ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__PVT__rvfi_ext_stage_nmi[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6322155659823940062ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__PVT__rvfi_ext_stage_nmi_int[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4011187783838022534ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__PVT__rvfi_ext_stage_debug_req[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 580701600576266563ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__rvfi_ext_stage_debug_mode[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16536058136789471292ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__rvfi_ext_stage_mcycle[__Vi0] = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 762580330841190534ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 10; ++__Vi1) {
            vlSelf->__PVT__rvfi_ext_stage_mhpmcounters[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17139125467430896927ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 10; ++__Vi1) {
            vlSelf->__PVT__rvfi_ext_stage_mhpmcountersh[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11185671552408509231ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__rvfi_ext_stage_ic_scr_key_valid[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1681762871430133358ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__PVT__rvfi_ext_stage_irq_valid[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18084120805663173044ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__rvfi_stage_valid_d[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8640784418302898116ull);
    }
    vlSelf->__PVT__fcov_csr_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13041458020559105195ull);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__PVT__g_pmp__DOT__pmp_req_addr[__Vi0] = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 12241031032231561576ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__PVT__g_pmp__DOT__pmp_req_type[__Vi0] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14089483097584239364ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__PVT__g_pmp__DOT__pmp_priv_lvl[__Vi0] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13271350037457360081ull);
    }
    vlSelf->__PVT__gen_rvfi_wb_stage__DOT__rvfi_instr_new_wb_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10153341584191919094ull);
    vlSelf->__PVT__g_rvfi_stages__BRA__0__KET____DOT__unnamedblk1__DOT__k = 0;
    vlSelf->__PVT__g_rvfi_rf_wr_suppress_wb__DOT__rvfi_stage_rf_wr_suppress_wb = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11309593736655224339ull);
    vlSelf->__PVT__g_pmp_fcov_signals__DOT__fcov_pmp_region_ichan_priority = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 38457390574468013ull);
    vlSelf->__PVT__g_pmp_fcov_signals__DOT__fcov_pmp_region_ichan2_priority = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8173354800351357439ull);
    vlSelf->__PVT__g_pmp_fcov_signals__DOT__fcov_pmp_region_dchan_priority = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16286358206286756116ull);
    vlSelf->__Vlvbound_h5f8c5b6e__0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1160849689362588890ull);
    vlSelf->__Vlvbound_he0ec5eb2__0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10306186419127833140ull);
    vlSelf->__VdfgRegularize_h2dc7b7d1_0_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 50245913813267723ull);
    vlSelf->__PVT__if_stage_i__DOT__instr_bus_err_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10260107252979189292ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__if_stage_i__DOT__ic_tag_rdata_i[__Vi0] = VL_SCOPED_RAND_RESET_I(28, __VscopeHash, 2062772349028196093ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(78, vlSelf->__PVT__if_stage_i__DOT__ic_data_rdata_i[__Vi0], __VscopeHash, 9127846137897503228ull);
    }
    vlSelf->__PVT__if_stage_i__DOT__instr_valid_id_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11137943619286792003ull);
    vlSelf->__PVT__if_stage_i__DOT__instr_valid_id_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 614134362543753989ull);
    vlSelf->__PVT__if_stage_i__DOT__instr_new_id_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4226752847616559694ull);
    vlSelf->__PVT__if_stage_i__DOT__instr_new_id_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15236478352248695276ull);
    vlSelf->__PVT__if_stage_i__DOT__instr_decompressed = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10819219542851384297ull);
    vlSelf->__PVT__if_stage_i__DOT__illegal_c_insn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10189705334241773280ull);
    vlSelf->__PVT__if_stage_i__DOT__if_instr_err = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9554914389324505730ull);
    vlSelf->__PVT__if_stage_i__DOT__exc_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5491005039429792025ull);
    vlSelf->__PVT__if_stage_i__DOT__stall_dummy_instr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8505993189486076265ull);
    vlSelf->__PVT__if_stage_i__DOT__instr_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4060236213449948469ull);
    vlSelf->__PVT__if_stage_i__DOT__irq_vec = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 88799637035817888ull);
    vlSelf->__PVT__if_stage_i__DOT__g_secure_pc__DOT__prev_instr_seq_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14730478885731232345ull);
    vlSelf->__PVT__if_stage_i__DOT__g_secure_pc__DOT__prev_instr_seq_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17305853445254465276ull);
    vlSelf->if_stage_i__DOT____VdfgRegularize_h3a6f7641_0_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4804002350058075746ull);
    vlSelf->__PVT__if_stage_i__DOT__g_mem_ecc__DOT__u_prim_buf_instr_rdata__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i = VL_SCOPED_RAND_RESET_Q(39, __VscopeHash, 1110665585984574697ull);
    vlSelf->__PVT__if_stage_i__DOT__g_mem_ecc__DOT__u_instr_intg_dec__DOT__data_o = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7963669762819630284ull);
    vlSelf->__PVT__if_stage_i__DOT__g_mem_ecc__DOT__u_instr_intg_dec__DOT__syndrome_o = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 11993072133717110387ull);
    vlSelf->__PVT__if_stage_i__DOT__g_mem_ecc__DOT__u_instr_intg_dec__DOT__err_o = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15716729483971962331ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__addr_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7577256382811095834ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__ready_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9314098329680721826ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__valid_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18298639203461426556ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__rdata_o = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3826248678088923063ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__err_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6137327974830325371ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__instr_req_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18387444255975805929ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__instr_gnt_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5877623217268371954ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__instr_rdata_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6396876101488009434ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__instr_err_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4765346955310770985ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__ic_tag_req_o = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3841854730013386938ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__ic_tag_write_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5853322638482528502ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__ic_tag_addr_o = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14594836154066368199ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__ic_tag_rdata_i[__Vi0] = VL_SCOPED_RAND_RESET_I(28, __VscopeHash, 13518622608800504179ull);
    }
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__ic_data_req_o = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 18080809207062653976ull);
    VL_SCOPED_RAND_RESET_W(78, vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__ic_data_wdata_o, __VscopeHash, 17265340777286562153ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(78, vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__ic_data_rdata_i[__Vi0], __VscopeHash, 10921827467917641704ull);
    }
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__icache_enable_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16611410968217162831ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__ecc_error_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15839096761037804893ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__prefetch_addr_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1175515073851812817ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__lookup_req_ic0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17471221963344768978ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__lookup_addr_ic0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12424292684743224631ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_grant_ic0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3805453303307606867ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__tag_banks_ic0 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16002445441897294566ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__data_req_ic0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14867398119081743230ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__tag_rdata_ic1[__Vi0] = VL_SCOPED_RAND_RESET_I(28, __VscopeHash, 10850035319232684626ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(78, vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__data_rdata_ic1[__Vi0], __VscopeHash, 13742994245483213893ull);
    }
    VL_SCOPED_RAND_RESET_W(78, vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__hit_data_ecc_ic1, __VscopeHash, 15393453882522277304ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__hit_data_ic1 = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 7384064593432591045ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__lookup_valid_ic1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12265552187935296347ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__lookup_addr_ic1 = VL_SCOPED_RAND_RESET_I(21, __VscopeHash, 9488867860696221521ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__tag_match_ic1 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11889399165572237107ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__tag_invalid_ic1 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6461160428568640027ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__round_robin_way_ic1 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15726884471538163981ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__round_robin_way_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10522436392026070015ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__sel_way_ic1 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10044595776561286913ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fb_fill_level = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6656078020037988179ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_cache_new = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 619640585669256411ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_spec_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11313711595688995746ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_spec_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 126561989597778564ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_spec_hold = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17692188744108086937ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_older_d__BRA__15__03a12__KET__ = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8073627574349715054ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_older_d__BRA__11__03a8__KET__ = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13899223246716562696ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_older_d__BRA__7__03a4__KET__ = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3754527750900735227ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_older_d__BRA__3__03a0__KET__ = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2969152582448140306ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_older_q__BRA__15__03a12__KET__ = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16513064953814955642ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_older_q__BRA__11__03a8__KET__ = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13951134819759924835ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_older_q__BRA__7__03a4__KET__ = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11036006566994635526ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_older_q__BRA__3__03a0__KET__ = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13160006686080536623ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_busy_d__BRA__3__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11136288748449622868ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_busy_d__BRA__2__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3738504580267306151ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_busy_d__BRA__1__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11011115202634583695ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_busy_d__BRA__0__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13339337357960525332ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_busy_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15131278385109220700ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_done = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11782118547502198771ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_in_ic1 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14200073230688960005ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_stale_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 333572830491620229ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_cache_d__BRA__3__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17845990945060178208ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_cache_d__BRA__2__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4095591962904546116ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_cache_d__BRA__1__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12575988745798221585ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_cache_d__BRA__0__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17181900084312525140ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_cache_q__BRA__3__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13610026706893433362ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_cache_q__BRA__2__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5907388878416987889ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_cache_q__BRA__1__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14387785661310780268ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_cache_q__BRA__0__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12945935846145582146ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_hit_ic1__BRA__3__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7306577854266955686ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_hit_ic1__BRA__2__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13573900338901972403ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_hit_ic1__BRA__1__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17746307984301396957ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_hit_ic1__BRA__0__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12384554598506336891ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_hit_d__BRA__3__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9448519704364274857ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_hit_d__BRA__2__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16958677964895131799ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_hit_d__BRA__1__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 825413092638535488ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_hit_d__BRA__0__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3994144380225233686ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_hit_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1040543103550625526ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_ext_cnt_d__BRA__7__03a6__KET__ = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11956493635500623727ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_ext_cnt_d__BRA__5__03a4__KET__ = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11669625489571196073ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_ext_cnt_d__BRA__3__03a2__KET__ = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17456712015660024456ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_ext_cnt_d__BRA__1__03a0__KET__ = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5041148244606913429ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_ext_cnt_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14568403720280473797ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_ext_hold_q__BRA__3__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10344673716464260757ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_ext_hold_q__BRA__2__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13961147298758241215ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_ext_hold_q__BRA__1__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11152437826598372247ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_ext_hold_q__BRA__0__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10307408094157263145ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_ext_done_d__BRA__3__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1777980438287979540ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_ext_done_d__BRA__2__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17222537830013269558ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_ext_done_d__BRA__1__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4292605491181157430ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_ext_done_d__BRA__0__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4581269664451123166ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_ext_done_q__BRA__3__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13208652770436198535ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_ext_done_q__BRA__2__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5515103190856639792ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_ext_done_q__BRA__1__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8211615361308051450ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_ext_done_q__BRA__0__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6356740185626069883ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_rvd_cnt_d__BRA__7__03a6__KET__ = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14583864246649109225ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_rvd_cnt_d__BRA__5__03a4__KET__ = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5213891516034721578ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_rvd_cnt_d__BRA__3__03a2__KET__ = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2780120041601191193ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_rvd_cnt_d__BRA__1__03a0__KET__ = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9494037099911113706ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_rvd_cnt_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2604734783898628977ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_ram_done_d__BRA__3__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12579019798158070387ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_ram_done_d__BRA__2__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18154313357198263461ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_ram_done_d__BRA__1__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4995042896772168788ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_ram_done_d__BRA__0__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8679087944201851030ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_ram_done_q__BRA__3__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17570392763925424351ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_ram_done_q__BRA__2__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14716532925509260449ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_ram_done_q__BRA__1__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1118012100540054476ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_ram_done_q__BRA__0__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15152056980245980176ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_out_cnt_d__BRA__7__03a6__KET__ = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5239429855414207925ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_out_cnt_d__BRA__5__03a4__KET__ = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4242373983560620563ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_out_cnt_d__BRA__3__03a2__KET__ = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4994119102032041604ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_out_cnt_d__BRA__1__03a0__KET__ = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14306824349903788459ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_out_cnt_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17972703192653759161ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_ext_req = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14569617194656486523ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_rvd_exp = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4197195115664185149ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_ram_req = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14912196557087902686ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_data_sel__BRA__3__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12798501065959017044ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_data_sel__BRA__2__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15740004221290068928ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_data_sel__BRA__1__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1368424103617840282ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_data_sel__BRA__0__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17474187874559997971ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_data_reg = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 18400898968362701284ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_data_hit = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4481085018015796815ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_data_rvd = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15425538354475672394ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_ext_off = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17889850711046562267ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_ext_arb = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10449513392604832923ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_ram_arb = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6275371862499219076ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_out_arb = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9028485583584476841ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_rvd_arb__BRA__3__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5929587304417273398ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_rvd_arb__BRA__2__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8404659325760743256ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_rvd_arb__BRA__1__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 345226977130329470ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_rvd_arb__BRA__0__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17408424919416440415ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_entry_en__BRA__3__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4120455655841617677ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_entry_en__BRA__2__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7353191871473000707ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_entry_en__BRA__1__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7498528530333104434ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_entry_en__BRA__0__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10785369722413790171ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_addr_en__BRA__3__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6440352898613834372ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_addr_en__BRA__2__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10562106045249861969ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_addr_en__BRA__1__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1350251430014079943ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_addr_en__BRA__0__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16457935927109923901ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_way_en__BRA__3__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17878607204466923376ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_way_en__BRA__2__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14385912806493978745ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_way_en__BRA__1__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12100097122974467902ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_way_en__BRA__0__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16656972001052206748ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_err_d__BRA__7__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9877278634124937269ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_err_d__BRA__6__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17196580099069400971ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_err_d__BRA__5__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7738188440325914231ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_err_d__BRA__4__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11039949869320685404ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_err_d__BRA__3__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12008758857833916487ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_err_d__BRA__2__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 106815006103922393ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_err_d__BRA__1__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5852128628085386516ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_err_d__BRA__0__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1096334109994180161ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_err_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7642273038372996995ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_addr_q[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4453307149150691383ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_way_q[__Vi0] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2164443472193277611ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_data_d[__Vi0] = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 13846757558911716560ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_data_q[__Vi0] = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 13876433492899036806ull);
    }
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_ext_req_addr = VL_SCOPED_RAND_RESET_I(30, __VscopeHash, 14260318878670293592ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_ram_req_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15971529961438132120ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_ram_req_way = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3019361161600019562ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_ram_req_data = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 8037021237773033045ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_out_data = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 15908705552329799408ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__fill_out_err = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7017470250657811988ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__instr_addr = VL_SCOPED_RAND_RESET_I(30, __VscopeHash, 1849604304080961469ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__skid_complete_instr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12451880859016122068ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__skid_valid_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5286079894544434214ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__skid_valid_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15087475602344982571ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__skid_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1917795325435412616ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__skid_data_q = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7556716678098070915ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__skid_err_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2997085830186630843ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__addr_incr_two = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12613064347462925413ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_d = VL_SCOPED_RAND_RESET_I(31, __VscopeHash, 2451847938200881376ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_addr_q = VL_SCOPED_RAND_RESET_I(31, __VscopeHash, 1906651819100558418ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_data_lo = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4325625674448777316ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_data_hi = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14514986441987091563ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18163862499650207087ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__line_data = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 10343815447050797681ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__line_err = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3075543904415904957ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__line_data_muxed = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16931191279865949335ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__line_err_muxed = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1150810310411168569ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5006281411153762878ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__output_err = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6408003426789158781ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__inval_state_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8156029211938343984ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__inval_state_d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 18178910064480185708ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__inval_write_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9830492043281611761ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__inval_block_cache = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14130361710511055700ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__inval_index_d = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 519740002315182747ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__inval_index_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14501837810186838595ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__inval_index_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7120511988269359248ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__gen_ecc_wdata__DOT__unused_tag_ecc_output = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14279958163598406034ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__gen_data_ecc_checking__DOT__tag_err_ic1 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9887831699493080616ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__gen_data_ecc_checking__DOT__data_err_ic1 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9032455356127910721ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__gen_data_ecc_checking__DOT__ecc_correction_write_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13904032102005199638ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__gen_data_ecc_checking__DOT__ecc_correction_ways_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5462159257443670072ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__gen_data_ecc_checking__DOT__lookup_index_ic1 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14926168152135991625ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__gen_data_ecc_checking__DOT__ecc_correction_index_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3920584723919595469ull);
    vlSelf->if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_5 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5782560026157861694ull);
    vlSelf->if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_12 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4042899810015957864ull);
    vlSelf->if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_16 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7814727729227747809ull);
    vlSelf->if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_18 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16937101144726579676ull);
    vlSelf->if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_19 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8263417060179746597ull);
    vlSelf->if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_21 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5534911456159443018ull);
    vlSelf->if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_23 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4950361945666638205ull);
    vlSelf->if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_26 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3804499678463342243ull);
    vlSelf->if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_30 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6047738763013422987ull);
    vlSelf->if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_32 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2778515355918005128ull);
    vlSelf->if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_33 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11727810580601885052ull);
    vlSelf->if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_34 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14025113060119133423ull);
    vlSelf->if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_36 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5781496161616258791ull);
    vlSelf->if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_39 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15844872376226700670ull);
    vlSelf->if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_43 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6814586789258100119ull);
    vlSelf->if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_45 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14932575195769860112ull);
    vlSelf->if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_46 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14514564292199714319ull);
    vlSelf->if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_47 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14200871991978539523ull);
    vlSelf->if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_49 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16690014128209990183ull);
    vlSelf->if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_52 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15059033555339199547ull);
    vlSelf->if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_56 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4517111707518246071ull);
    vlSelf->if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_58 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15763709411719342445ull);
    vlSelf->if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_59 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4965801038470273690ull);
    vlSelf->if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_60 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2229892701747688216ull);
    vlSelf->if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_65 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13778026043602266260ull);
    vlSelf->if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_66 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 506883656753919514ull);
    vlSelf->if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_69 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10967723655008362957ull);
    vlSelf->if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_70 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5103206020596429393ull);
    vlSelf->if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_71 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7385662203689888423ull);
    vlSelf->if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_72 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1605123622910605110ull);
    vlSelf->if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_73 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7789665571226168376ull);
    vlSelf->if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_75 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10278807707457633353ull);
    vlSelf->if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_76 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14923715708582906779ull);
    vlSelf->if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_77 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13456717577436993791ull);
    vlSelf->if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_78 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11480550961862510212ull);
    vlSelf->if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_81 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11377047673614319476ull);
    vlSelf->if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_82 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14314879140797656654ull);
    vlSelf->if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_83 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8634807323209337305ull);
    vlSelf->if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_84 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16711785234695945701ull);
    vlSelf->if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_85 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8279116803306894076ull);
    vlSelf->if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_86 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3254420269808601284ull);
    vlSelf->if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_88 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18431940936422754112ull);
    vlSelf->if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_89 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15516622395202475155ull);
    vlSelf->if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_90 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9542269458859987956ull);
    vlSelf->if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_91 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7366819622849910430ull);
    vlSelf->if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_93 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6635116419058738317ull);
    vlSelf->if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_94 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14500869760206647036ull);
    vlSelf->if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_95 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9124258555290072229ull);
    vlSelf->if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_96 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16787940552174366641ull);
    vlSelf->if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_97 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9528261922826362683ull);
    vlSelf->if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_99 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17101632852395815001ull);
    vlSelf->if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_100 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1307172241643927431ull);
    vlSelf->if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_101 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3872800573867625632ull);
    vlSelf->if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_102 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1688742163804231404ull);
    vlSelf->if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_104 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6392443221006360298ull);
    vlSelf->if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_105 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10027375274428052549ull);
    vlSelf->if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_106 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10756849751557559931ull);
    vlSelf->if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_108 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17274530208387566505ull);
    vlSelf->if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_109 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5711835312368088932ull);
    vlSelf->if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_111 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14690251707120161726ull);
    vlSelf->if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_112 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6802745404695079048ull);
    vlSelf->if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_113 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15300680619870886475ull);
    vlSelf->if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_114 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17209894354258761223ull);
    vlSelf->if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_117 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2779652256131248056ull);
    vlSelf->if_stage_i__DOT__gen_icache__DOT__icache_i__DOT____VdfgRegularize_hf0293452_0_118 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9645237267930675889ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__gen_ecc_wdata__DOT__tag_ecc_enc__DOT__data_o = VL_SCOPED_RAND_RESET_I(28, __VscopeHash, 3430474266919438675ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__gen_data_ecc_checking__DOT__gen_tag_ecc__BRA__0__KET____DOT__data_ecc_dec__DOT__data_o = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 15265513263130940585ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__gen_data_ecc_checking__DOT__gen_tag_ecc__BRA__0__KET____DOT__data_ecc_dec__DOT__syndrome_o = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 302017650198050008ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__gen_data_ecc_checking__DOT__gen_tag_ecc__BRA__1__KET____DOT__data_ecc_dec__DOT__data_o = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 7396119224139703041ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__gen_data_ecc_checking__DOT__gen_tag_ecc__BRA__1__KET____DOT__data_ecc_dec__DOT__syndrome_o = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 16716562775429294284ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__gen_data_ecc_checking__DOT__gen_ecc_banks__BRA__0__KET____DOT__data_ecc_dec__DOT__data_o = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5943777736589900868ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__gen_data_ecc_checking__DOT__gen_ecc_banks__BRA__0__KET____DOT__data_ecc_dec__DOT__syndrome_o = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 16121664832812857661ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__gen_data_ecc_checking__DOT__gen_ecc_banks__BRA__1__KET____DOT__data_ecc_dec__DOT__data_o = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 411015726240224950ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_icache__DOT__icache_i__DOT__gen_data_ecc_checking__DOT__gen_ecc_banks__BRA__1__KET____DOT__data_ecc_dec__DOT__syndrome_o = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 14925277389207221765ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__dummy_cnt_d = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 2946218806178476439ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__dummy_cnt_q = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 15803883140970636887ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__dummy_set = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 194781499213179914ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__dummy_opcode = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 10707599147139590206ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__dummy_instr_seed_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18091984891911306986ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__lfsr_i__DOT__seed_en_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6625902563329271876ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__lfsr_i__DOT__seed_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17054050862951882794ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__lfsr_i__DOT__lfsr_en_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10880410387268230963ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__lfsr_i__DOT__state_o = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 15548098407154983338ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__lfsr_i__DOT__lfsr_d = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18152909570332804880ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__lfsr_i__DOT__lfsr_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16127593044188662646ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__lfsr_i__DOT__gen_perm_check__DOT__lfsr_perm_test = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9382255345688526870ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__lfsr_i__DOT__gen_perm_check__DOT__p_perm_check__DOT__unnamedblk3__DOT__k = 0;
    vlSelf->__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__lfsr_i__DOT__gen_max_len_sva__DOT__cnt_d = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3753013931785622442ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__lfsr_i__DOT__gen_max_len_sva__DOT__cnt_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2285221937775591375ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__lfsr_i__DOT__gen_max_len_sva__DOT__perturbed_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12939210840167736397ull);
    vlSelf->__PVT__if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__lfsr_i__DOT__gen_max_len_sva__DOT__perturbed_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6753274525445931830ull);
    vlSelf->if_stage_i__DOT__gen_dummy_instr__DOT__dummy_instr_i__DOT__lfsr_i__DOT____VdfgRegularize_h4925ad8a_0_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6574140566733640441ull);
    vlSelf->__PVT__id_stage_i__DOT__lsu_resp_valid_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17956297264065268502ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__id_stage_i__DOT__imd_val_d_ex_i[__Vi0] = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 9731470335580648583ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__id_stage_i__DOT__imd_val_q_ex_o[__Vi0] = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 14839075215297824316ull);
    }
    vlSelf->__PVT__id_stage_i__DOT__lsu_req_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1863381646993038031ull);
    vlSelf->__PVT__id_stage_i__DOT__lsu_req_done_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11627551730620188436ull);
    vlSelf->__PVT__id_stage_i__DOT__lsu_load_resp_intg_err_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15944050706321724402ull);
    vlSelf->__PVT__id_stage_i__DOT__lsu_store_resp_intg_err_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5063271814392262176ull);
    vlSelf->__PVT__id_stage_i__DOT__rf_rdata_a_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14207431222879586134ull);
    vlSelf->__PVT__id_stage_i__DOT__rf_rdata_b_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5895604072384971365ull);
    vlSelf->__PVT__id_stage_i__DOT__rf_ren_a_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6992013508252386105ull);
    vlSelf->__PVT__id_stage_i__DOT__rf_ren_b_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14454733925479113087ull);
    vlSelf->__PVT__id_stage_i__DOT__rf_rd_a_wb_match_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15860859793013482718ull);
    vlSelf->__PVT__id_stage_i__DOT__rf_rd_b_wb_match_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15601062596315859020ull);
    vlSelf->__PVT__id_stage_i__DOT__rf_write_wb_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12820801585012428601ull);
    vlSelf->__PVT__id_stage_i__DOT__en_wb_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11338123832270400909ull);
    vlSelf->__PVT__id_stage_i__DOT__outstanding_load_wb_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3333691781362846422ull);
    vlSelf->__PVT__id_stage_i__DOT__outstanding_store_wb_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10758304277947837644ull);
    vlSelf->__PVT__id_stage_i__DOT__instr_id_done_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10606877111341723907ull);
    vlSelf->__PVT__id_stage_i__DOT__ebrk_insn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9327375090532546065ull);
    vlSelf->__PVT__id_stage_i__DOT__mret_insn_dec = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1316629401851817296ull);
    vlSelf->__PVT__id_stage_i__DOT__dret_insn_dec = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2323929634198792520ull);
    vlSelf->__PVT__id_stage_i__DOT__ecall_insn_dec = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10591323102083500521ull);
    vlSelf->__PVT__id_stage_i__DOT__wfi_insn_dec = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2312231918350924020ull);
    vlSelf->__PVT__id_stage_i__DOT__branch_in_dec = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8139971085754531452ull);
    vlSelf->__PVT__id_stage_i__DOT__branch_set_raw = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7763520066131589307ull);
    vlSelf->__PVT__id_stage_i__DOT__branch_set_raw_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1780815445849926809ull);
    vlSelf->__PVT__id_stage_i__DOT__branch_jump_set_done_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7697465179047396144ull);
    vlSelf->__PVT__id_stage_i__DOT__branch_jump_set_done_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15046086585679928024ull);
    vlSelf->__PVT__id_stage_i__DOT__jump_in_dec = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18338698485212499364ull);
    vlSelf->__PVT__id_stage_i__DOT__jump_set_dec = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5414165436007304186ull);
    vlSelf->__PVT__id_stage_i__DOT__jump_set_raw = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5053771808541607226ull);
    vlSelf->__PVT__id_stage_i__DOT__instr_executing = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7932359047065892298ull);
    vlSelf->__PVT__id_stage_i__DOT__controller_run = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15246198759232805161ull);
    vlSelf->__PVT__id_stage_i__DOT__stall_ld_hz = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11578772741990318498ull);
    vlSelf->__PVT__id_stage_i__DOT__stall_mem = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8776596001859519269ull);
    vlSelf->__PVT__id_stage_i__DOT__stall_multdiv = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8208370331933143239ull);
    vlSelf->__PVT__id_stage_i__DOT__stall_branch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13863644282767079976ull);
    vlSelf->__PVT__id_stage_i__DOT__stall_jump = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17115608870095153234ull);
    vlSelf->__PVT__id_stage_i__DOT__rf_wdata_sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15170890741419607519ull);
    vlSelf->__PVT__id_stage_i__DOT__rf_we_raw = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2401078701740125298ull);
    vlSelf->__PVT__id_stage_i__DOT__rf_ren_a_dec = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 231151890099538207ull);
    vlSelf->__PVT__id_stage_i__DOT__rf_ren_b_dec = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16036913475036175365ull);
    vlSelf->__PVT__id_stage_i__DOT__alu_operator = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 12670476991582407752ull);
    vlSelf->__PVT__id_stage_i__DOT__alu_op_a_mux_sel = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13187255510239433406ull);
    vlSelf->__PVT__id_stage_i__DOT__alu_op_a_mux_sel_dec = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9506507623025677701ull);
    vlSelf->__PVT__id_stage_i__DOT__alu_op_b_mux_sel_dec = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10779188324941846580ull);
    vlSelf->__PVT__id_stage_i__DOT__alu_multicycle_dec = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2674737200004259535ull);
    vlSelf->__PVT__id_stage_i__DOT__stall_alu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16783794326117076156ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__id_stage_i__DOT__imd_val_q[__Vi0] = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 7696921130513292513ull);
    }
    vlSelf->__PVT__id_stage_i__DOT__bt_a_mux_sel = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16685086989610943282ull);
    vlSelf->__PVT__id_stage_i__DOT__bt_b_mux_sel = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 3623015322189915481ull);
    vlSelf->__PVT__id_stage_i__DOT__imm_a_mux_sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12747524276731260378ull);
    vlSelf->__PVT__id_stage_i__DOT__imm_b_mux_sel = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 15139450193926883437ull);
    vlSelf->__PVT__id_stage_i__DOT__imm_b_mux_sel_dec = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 7297816498379848501ull);
    vlSelf->__PVT__id_stage_i__DOT__multdiv_en_dec = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1407711267031831843ull);
    vlSelf->__PVT__id_stage_i__DOT__multdiv_operator = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7924630266660311220ull);
    vlSelf->__PVT__id_stage_i__DOT__multdiv_signed_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7828476322318328418ull);
    vlSelf->__PVT__id_stage_i__DOT__lsu_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 360510586513071620ull);
    vlSelf->__PVT__id_stage_i__DOT__lsu_type = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2990445400099986898ull);
    vlSelf->__PVT__id_stage_i__DOT__lsu_sign_ext = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13302792878184832039ull);
    vlSelf->__PVT__id_stage_i__DOT__lsu_req_dec = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16247113831967794717ull);
    vlSelf->__PVT__id_stage_i__DOT__id_fsm_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7755081845625150390ull);
    vlSelf->__PVT__id_stage_i__DOT__id_fsm_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3755668506626229397ull);
    vlSelf->__PVT__id_stage_i__DOT__g_branch_set_flop__DOT__branch_set_raw_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11190443892549841139ull);
    vlSelf->__PVT__id_stage_i__DOT__g_sec_branch_taken__DOT__branch_taken_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18288590179272634105ull);
    vlSelf->__PVT__id_stage_i__DOT__gen_stall_mem__DOT__outstanding_memory_access = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 426309086695573843ull);
    vlSelf->id_stage_i__DOT____VdfgRegularize_h5aca553c_0_5 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6255407994379541637ull);
    vlSelf->id_stage_i__DOT____VdfgRegularize_h5aca553c_0_7 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3981207274031468779ull);
    vlSelf->__PVT__id_stage_i__DOT__decoder_i__DOT__imm_i_type_o = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7082975078649065011ull);
    vlSelf->__PVT__id_stage_i__DOT__decoder_i__DOT__rf_raddr_a_o = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 14881261885354641833ull);
    vlSelf->__PVT__id_stage_i__DOT__decoder_i__DOT__mult_en_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3570241729084557316ull);
    vlSelf->__PVT__id_stage_i__DOT__decoder_i__DOT__div_en_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 975249950664765211ull);
    vlSelf->__PVT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2918689403256053249ull);
    vlSelf->__PVT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5733730213806135685ull);
    vlSelf->__PVT__id_stage_i__DOT__decoder_i__DOT__rf_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3563378423885690024ull);
    vlSelf->__PVT__id_stage_i__DOT__decoder_i__DOT__use_rs3_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3213805314470828855ull);
    vlSelf->__PVT__id_stage_i__DOT__decoder_i__DOT__use_rs3_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 300309285386784904ull);
    vlSelf->__PVT__id_stage_i__DOT__decoder_i__DOT__csr_op = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2568203981757053090ull);
    vlSelf->__PVT__id_stage_i__DOT__decoder_i__DOT__opcode = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 7071708976065145209ull);
    vlSelf->__PVT__id_stage_i__DOT__decoder_i__DOT__opcode_alu = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 15863512924202821672ull);
    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__illegal_insn_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11567389068220014285ull);
    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__instr_valid_clear_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12151824536400948988ull);
    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__id_in_ready_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18363604170281602931ull);
    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__load_err_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15890679900127288386ull);
    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__store_err_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 652993700673456873ull);
    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__mem_resp_intg_err_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15053903616382400262ull);
    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__wb_exception_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8368406865981757282ull);
    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__id_exception_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10059541560867309551ull);
    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__branch_set_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15656199013722339985ull);
    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__jump_set_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17213081809158701043ull);
    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__irqs_i = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 7792638642905826124ull);
    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__irq_nm_ext_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12344615603061192072ull);
    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__debug_req_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 830842194703569292ull);
    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__stall_id_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10453836940837937202ull);
    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ready_wb_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7392133845456060081ull);
    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6849959214791466992ull);
    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10552281985356109056ull);
    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__nmi_mode_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16374323099337643620ull);
    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__nmi_mode_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10094675326597331718ull);
    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__debug_mode_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13324288941004166717ull);
    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__debug_mode_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4923185221811358697ull);
    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__debug_cause_q = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 6187108850829625373ull);
    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__load_err_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17134964261491836576ull);
    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__store_err_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10219050473349490746ull);
    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__exc_req_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9890723055859479379ull);
    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__exc_req_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8323532424284675625ull);
    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__illegal_insn_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12792052815154121409ull);
    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__illegal_insn_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17629788390316866363ull);
    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16976106999995117398ull);
    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15477853327266525134ull);
    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6601867148122707323ull);
    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10093658090514206338ull);
    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__store_err_prio = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6836065769738650087ull);
    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__load_err_prio = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2661348161204991667ull);
    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__stall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6203649679627698234ull);
    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__halt_if = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8424049443129600127ull);
    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__retain_id = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15484645820858596060ull);
    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__flush_id = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3399172655743607608ull);
    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__exc_req_lsu = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 264174488296709135ull);
    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__special_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8003941611230924236ull);
    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__do_single_step_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10377226256250498328ull);
    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__do_single_step_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16752366974725905385ull);
    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode_prio_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14433161619161735265ull);
    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode_prio_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11961511135473122301ull);
    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4523345810460540379ull);
    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ebreak_into_debug = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7508065078498094943ull);
    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__handle_irq = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6660577378476253135ull);
    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__id_wb_pending = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1163307128348112546ull);
    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__irq_nm = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16378478886355776406ull);
    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__mfip_id = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15098370120877865536ull);
    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ecall_insn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10175828600153230454ull);
    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__mret_insn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1657799937365783978ull);
    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__dret_insn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 608302437745999964ull);
    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__wfi_insn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18230102917411035523ull);
    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__ebrk_insn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4309759681894431287ull);
    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8217594751969922585ull);
    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__fcov_debug_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12043271155590440564ull);
    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__g_intg_irq_int__DOT__mem_resp_intg_err_irq_pending_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14861066469771041628ull);
    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__g_intg_irq_int__DOT__mem_resp_intg_err_irq_pending_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3087833157876528131ull);
    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__g_intg_irq_int__DOT__mem_resp_intg_err_addr_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9078824652408864435ull);
    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__g_intg_irq_int__DOT__mem_resp_intg_err_addr_d = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1556421085870824826ull);
    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__g_intg_irq_int__DOT__mem_resp_intg_err_irq_set = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17135359112383019284ull);
    vlSelf->__PVT__id_stage_i__DOT__controller_i__DOT__g_intg_irq_int__DOT__mem_resp_intg_err_irq_clear = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10102640866796321637ull);
    vlSelf->__PVT__ex_block_i__DOT__mult_en_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16415151194082698712ull);
    vlSelf->__PVT__ex_block_i__DOT__multdiv_operand_a_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2449841008885692667ull);
    vlSelf->__PVT__ex_block_i__DOT__multdiv_operand_b_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18338974888950878622ull);
    vlSelf->__PVT__ex_block_i__DOT__imd_val_we_o = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13140436936977714310ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__ex_block_i__DOT__imd_val_d_o[__Vi0] = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 11780877549408045764ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__ex_block_i__DOT__imd_val_q_i[__Vi0] = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 5595634174226906990ull);
    }
    vlSelf->__PVT__ex_block_i__DOT__ex_valid_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12196587101761004658ull);
    vlSelf->__PVT__ex_block_i__DOT__alu_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2659525715624743898ull);
    vlSelf->__PVT__ex_block_i__DOT__multdiv_alu_operand_b = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 16242201386369375869ull);
    vlSelf->__PVT__ex_block_i__DOT__multdiv_alu_operand_a = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 1930262005290263999ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__ex_block_i__DOT__alu_imd_val_q[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17743845517895953802ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__ex_block_i__DOT__alu_imd_val_d[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9863492613618844261ull);
    }
    vlSelf->__PVT__ex_block_i__DOT__alu_imd_val_we = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15346824047257986294ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__ex_block_i__DOT__multdiv_imd_val_d[__Vi0] = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 5902695726439730649ull);
    }
    vlSelf->__PVT__ex_block_i__DOT__g_branch_target_alu__DOT__bt_alu_result = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 7575050654281338797ull);
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__operand_a_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9079347819526124565ull);
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__operand_b_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14732151114974291213ull);
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__instr_first_cycle_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 352157082396922983ull);
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__multdiv_sel_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1713271621341580501ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__imd_val_q_i[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2860323676613999183ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__imd_val_d_o[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10381566891863018236ull);
    }
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__adder_result_ext_o = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 9949436279751877495ull);
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__operand_a_rev = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2047435073419969941ull);
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9725615729537516670ull);
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4578627381744517512ull);
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5902280508447903818ull);
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6224488121162040949ull);
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__cmp_signed = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16664005250482695767ull);
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__cmp_result = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8188688798579896895ull);
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__shift_left = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4921338434669547869ull);
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__shift_sbmode = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16343194957755909872ull);
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__shift_amt = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 16369270773521208254ull);
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__shift_operand = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2045273257528017009ull);
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 11134227568696344233ull);
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__shift_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10734945151834154426ull);
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__shift_result_rev = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7000218232359467348ull);
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__bfp_len = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 6166286365439813421ull);
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5542450001437928542ull);
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__bwlogic_or = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17229562333721080146ull);
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__bwlogic_and = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6459576664819448548ull);
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__bwlogic_operand_b = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1725677875394042600ull);
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__bwlogic_and_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14955734741323509063ull);
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__bwlogic_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17785357494960126180ull);
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__bwlogic_op_b_negate = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6070906897512809114ull);
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__minmax_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 73399726450144111ull);
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__pack_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2670030614938771928ull);
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__singlebit_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4782447450332449149ull);
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__rev_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11803053367307842578ull);
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__shuffle_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5419487993012825607ull);
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__xperm_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10318998022016636507ull);
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__clmul_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7925243025574892454ull);
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__multicycle_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7765267296217237675ull);
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__zbe_op = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 955123691302605921ull);
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_cz = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14321343713600252437ull);
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_bits = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11389216410630822272ull);
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_mask_op = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11545585513340337711ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__bitcnt_partial[__Vi0] = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 13665984578765533553ull);
    }
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__zbp_shift_amt = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 13466051082507991268ull);
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__crc_hmode = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10226815731859762158ull);
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__crc_bmode = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3606136028475222784ull);
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__clmul_result_rev = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10761850354712769634ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__SHUFFLE_MASK_NOT[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1912097088597916628ull);
    }
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__shuffle_mode = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3478011006226543698ull);
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel_n = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 14980602209545656593ull);
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel_b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13482313494530089530ull);
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__vld_b = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15929504530268124662ull);
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel_h = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2856664430130858010ull);
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__vld_h = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1171115214788638992ull);
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__sel = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 8131024945436509440ull);
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__vld = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4832683831675236620ull);
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__unnamedblk9__DOT__b = 0;
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__unnamedblk10__DOT__h = 0;
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_a = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15976770649230471368ull);
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_op_b = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11207410572605338951ull);
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__operand_b_rev = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14982228627542193058ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_and_stage[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17119303732102867217ull);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_xor_stage1[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10011473330871034292ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_xor_stage2[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8722238459305947134ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_xor_stage3[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5268456902683537725ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_xor_stage4[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7164904241626076232ull);
    }
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__clmul_result_raw = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12808233350217851521ull);
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__crc_op = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14997104157826762674ull);
    vlSelf->__PVT__ex_block_i__DOT__alu_i__DOT__g_alu_rvb__DOT__gen_alu_rvb_otearlgrey_full__DOT__crc_cpoly = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18407802839158202996ull);
    vlSelf->ex_block_i__DOT__alu_i__DOT____Vlvbound_heb77ee53__0 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 7115196525356996611ull);
    vlSelf->ex_block_i__DOT__alu_i__DOT____Vlvbound_hf6256887__0 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 8418653969748879463ull);
    vlSelf->ex_block_i__DOT__alu_i__DOT____Vlvbound_h002f78e6__0 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 7030221042877808406ull);
    vlSelf->ex_block_i__DOT__alu_i__DOT____Vlvbound_h010edd1b__0 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 13002166947953506184ull);
    vlSelf->ex_block_i__DOT__alu_i__DOT____Vlvbound_h17fe2e4c__0 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 5777360221472800584ull);
    vlSelf->ex_block_i__DOT__alu_i__DOT____Vlvbound_h17cb3542__0 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 14795196144825437191ull);
    vlSelf->ex_block_i__DOT__alu_i__DOT____VdfgExtracted_heda666c8__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10234459055347015057ull);
    vlSelf->ex_block_i__DOT__alu_i__DOT____VdfgExtracted_h62347566__1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6070155577848334158ull);
    vlSelf->ex_block_i__DOT__alu_i__DOT____VdfgRegularize_h2af861f7_0_4 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18194248593855824953ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__imd_val_q_i[__Vi0] = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 13072443976316356801ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__imd_val_d_o[__Vi0] = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 8777604345559499638ull);
    }
    vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res_signed = VL_SCOPED_RAND_RESET_Q(35, __VscopeHash, 17808450795787884741ull);
    vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4008835006118119736ull);
    vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res_d = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 8157736539231044793ull);
    vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_remainder_d = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 408563376123205251ull);
    vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10880599602795667651ull);
    vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 420046691364261596ull);
    vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__is_greater_equal = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17457634997065111259ull);
    vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15070577696649371532ull);
    vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 314135012742885708ull);
    vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_denominator_d = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6334282758234888056ull);
    vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_d = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17390312499840032192ull);
    vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_d = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7109047165052584055ull);
    vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_remainder = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16025514269580840956ull);
    vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_quotient = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 17865534322816035362ull);
    vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4334775461942985757ull);
    vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_q = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 9261010693360092958ull);
    vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_d = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 932904797162555874ull);
    vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_hold = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 256101638031767532ull);
    vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_hold = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1079432637692642852ull);
    vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_by_zero_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2081249100052463524ull);
    vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_by_zero_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15627421544131762620ull);
    vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_en_internal = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8040137190289034441ull);
    vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_en_internal = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11506568036834485257ull);
    vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 8628119055966405697ull);
    vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_d = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 17467716324726304952ull);
    vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_single_cycle__DOT__mult_state_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3417502877459803017ull);
    vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_single_cycle__DOT__mult_state_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8380721975095011516ull);
    vlSelf->__PVT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_single_cycle__DOT__mult1_res = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 12973629029281184108ull);
    vlSelf->__PVT__load_store_unit_i__DOT__data_req_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15561027128121910805ull);
    vlSelf->__PVT__load_store_unit_i__DOT__data_gnt_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5261712144276013936ull);
    vlSelf->__PVT__load_store_unit_i__DOT__data_bus_err_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17534387754833258326ull);
    vlSelf->__PVT__load_store_unit_i__DOT__lsu_rdata_o = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8543297225047418755ull);
    vlSelf->__PVT__load_store_unit_i__DOT__load_err_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17884226453456717694ull);
    vlSelf->__PVT__load_store_unit_i__DOT__store_err_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3631983736701576299ull);
    vlSelf->__PVT__load_store_unit_i__DOT__addr_last_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9088003199267361317ull);
    vlSelf->__PVT__load_store_unit_i__DOT__addr_update = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13892245045562452879ull);
    vlSelf->__PVT__load_store_unit_i__DOT__ctrl_update = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6549680896748815707ull);
    vlSelf->__PVT__load_store_unit_i__DOT__rdata_update = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1338568571265980823ull);
    vlSelf->__PVT__load_store_unit_i__DOT__rdata_q = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 3728772055066474068ull);
    vlSelf->__PVT__load_store_unit_i__DOT__rdata_offset_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3551509058637997514ull);
    vlSelf->__PVT__load_store_unit_i__DOT__data_type_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2383095555879050261ull);
    vlSelf->__PVT__load_store_unit_i__DOT__data_sign_ext_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 802862615480886418ull);
    vlSelf->__PVT__load_store_unit_i__DOT__data_we_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3890503704870247737ull);
    vlSelf->__PVT__load_store_unit_i__DOT__data_be = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13473924945417491341ull);
    vlSelf->__PVT__load_store_unit_i__DOT__split_misaligned_access = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7142659902769400334ull);
    vlSelf->__PVT__load_store_unit_i__DOT__handle_misaligned_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1772336355905847164ull);
    vlSelf->__PVT__load_store_unit_i__DOT__handle_misaligned_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11422854843093673700ull);
    vlSelf->__PVT__load_store_unit_i__DOT__pmp_err_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1237955942624199308ull);
    vlSelf->__PVT__load_store_unit_i__DOT__pmp_err_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17770405672385010936ull);
    vlSelf->__PVT__load_store_unit_i__DOT__lsu_err_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9530577637227259612ull);
    vlSelf->__PVT__load_store_unit_i__DOT__lsu_err_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12666052305357116264ull);
    vlSelf->__PVT__load_store_unit_i__DOT__data_or_pmp_err = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12823677352682030726ull);
    vlSelf->__PVT__load_store_unit_i__DOT__ls_fsm_cs = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 13767753527787160636ull);
    vlSelf->__PVT__load_store_unit_i__DOT__ls_fsm_ns = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 18382040344006146658ull);
    vlSelf->__PVT__load_store_unit_i__DOT__fcov_mis_2_en_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13297702623980963411ull);
    vlSelf->__PVT__load_store_unit_i__DOT__fcov_mis_2_en_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13133915812760289685ull);
    vlSelf->__PVT__load_store_unit_i__DOT__fcov_mis_rvalid_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18007340241684307921ull);
    vlSelf->__PVT__load_store_unit_i__DOT__fcov_mis_rvalid_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16670669117292673549ull);
    vlSelf->__PVT__load_store_unit_i__DOT__fcov_mis_bus_err_1_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11605447386980734569ull);
    vlSelf->__PVT__load_store_unit_i__DOT__fcov_mis_bus_err_1_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12872264180893871990ull);
    vlSelf->load_store_unit_i__DOT____VdfgRegularize_hd2184a1a_0_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17063884992649284969ull);
    vlSelf->__PVT__load_store_unit_i__DOT__g_mem_rdata_ecc__DOT__u_prim_buf_instr_rdata__DOT__gen_generic__DOT__u_impl_generic__DOT__in_i = VL_SCOPED_RAND_RESET_Q(39, __VscopeHash, 7088409805409133323ull);
    vlSelf->__PVT__load_store_unit_i__DOT__g_mem_rdata_ecc__DOT__u_data_intg_dec__DOT__data_o = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2275772656559665868ull);
    vlSelf->__PVT__load_store_unit_i__DOT__g_mem_rdata_ecc__DOT__u_data_intg_dec__DOT__syndrome_o = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 17200092240495096742ull);
    vlSelf->__PVT__load_store_unit_i__DOT__g_mem_rdata_ecc__DOT__u_data_intg_dec__DOT__err_o = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6077157833350678684ull);
    vlSelf->__PVT__load_store_unit_i__DOT__g_mem_wdata_ecc__DOT__u_data_gen__DOT__data_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17641659164964134038ull);
    vlSelf->__PVT__load_store_unit_i__DOT__g_mem_wdata_ecc__DOT__u_data_gen__DOT__data_o = VL_SCOPED_RAND_RESET_Q(39, __VscopeHash, 10938372956092517089ull);
    vlSelf->__PVT__wb_stage_i__DOT__rf_we_lsu_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10481895750855840468ull);
    vlSelf->__PVT__wb_stage_i__DOT__instr_done_wb_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3153394699372294734ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__wb_stage_i__DOT__rf_wdata_wb_mux[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16692831844192106947ull);
    }
    vlSelf->__PVT__wb_stage_i__DOT__rf_wdata_wb_mux_we = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6099043901819487160ull);
    vlSelf->__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_wdata_wb_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4691620827465878575ull);
    vlSelf->__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_we_wb_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7983092397377116582ull);
    vlSelf->__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 14519431934845279123ull);
    vlSelf->__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5121784998418686961ull);
    vlSelf->__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_valid_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6346754211207843712ull);
    vlSelf->__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_pc_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5678808348332149893ull);
    vlSelf->__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_compressed_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6396044120298673863ull);
    vlSelf->__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_count_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12663342250408947107ull);
    vlSelf->__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_instr_type_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15890523443029927139ull);
    vlSelf->__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_valid_d = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 850436931522063308ull);
    vlSelf->__PVT__wb_stage_i__DOT__g_writeback_stage__DOT__g_dummy_instr_wb__DOT__dummy_instr_wb_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14053466348943984840ull);
    vlSelf->wb_stage_i__DOT____VdfgRegularize_h7ee5efe3_0_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5643167055295896803ull);
    vlSelf->__PVT__cs_registers_i__DOT__csr_mtvec_init_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2207915527874162359ull);
    vlSelf->__PVT__cs_registers_i__DOT__csr_addr_i = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 481220319844601892ull);
    vlSelf->__PVT__cs_registers_i__DOT__csr_op_i = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9978772030821023223ull);
    vlSelf->__PVT__cs_registers_i__DOT__csr_op_en_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15698032216807920504ull);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__cs_registers_i__DOT__csr_pmp_cfg_o[__Vi0] = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 9382036308727085387ull);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__cs_registers_i__DOT__csr_pmp_addr_o[__Vi0] = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 8088312746230433822ull);
    }
    vlSelf->__PVT__cs_registers_i__DOT__dummy_instr_seed_o = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12171085993579973552ull);
    vlSelf->__PVT__cs_registers_i__DOT__illegal_csr_insn_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2519360686698829096ull);
    vlSelf->__PVT__cs_registers_i__DOT__instr_ret_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14170164790302290263ull);
    vlSelf->__PVT__cs_registers_i__DOT__iside_wait_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4514632747552250967ull);
    vlSelf->__PVT__cs_registers_i__DOT__dside_wait_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9441131588273117802ull);
    vlSelf->__PVT__cs_registers_i__DOT__exception_pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4496351280879028316ull);
    vlSelf->__PVT__cs_registers_i__DOT__priv_lvl_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14865719469420295220ull);
    vlSelf->__PVT__cs_registers_i__DOT__priv_lvl_d = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14768033468883483082ull);
    vlSelf->__PVT__cs_registers_i__DOT__mstatus_d = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 11310297746779122677ull);
    vlSelf->__PVT__cs_registers_i__DOT__mstatus_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4383262491868719706ull);
    vlSelf->__PVT__cs_registers_i__DOT__mie_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3346751160657721905ull);
    vlSelf->__PVT__cs_registers_i__DOT__mscratch_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7435307242996023619ull);
    vlSelf->__PVT__cs_registers_i__DOT__mepc_d = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8498255661583879513ull);
    vlSelf->__PVT__cs_registers_i__DOT__mepc_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11395253383624973430ull);
    vlSelf->__PVT__cs_registers_i__DOT__mcause_d = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 12386525233854917814ull);
    vlSelf->__PVT__cs_registers_i__DOT__mcause_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15897714257136729394ull);
    vlSelf->__PVT__cs_registers_i__DOT__mtval_d = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18149602451885544980ull);
    vlSelf->__PVT__cs_registers_i__DOT__mtval_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4408562135997418296ull);
    vlSelf->__PVT__cs_registers_i__DOT__mtvec_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2936045334004164100ull);
    vlSelf->__PVT__cs_registers_i__DOT__mip = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 17200398659732909353ull);
    vlSelf->__PVT__cs_registers_i__DOT__dcsr_d = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11155015268327457996ull);
    vlSelf->__PVT__cs_registers_i__DOT__dcsr_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3424512211455783701ull);
    vlSelf->__PVT__cs_registers_i__DOT__depc_d = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14308935161188542877ull);
    vlSelf->__PVT__cs_registers_i__DOT__depc_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 997645965407981320ull);
    vlSelf->__PVT__cs_registers_i__DOT__dscratch0_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6326827315722731921ull);
    vlSelf->__PVT__cs_registers_i__DOT__dscratch1_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5222664462331287126ull);
    vlSelf->__PVT__cs_registers_i__DOT__mstack_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1140918265709961390ull);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__cs_registers_i__DOT__pmp_addr_rdata[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7738829258729395706ull);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__cs_registers_i__DOT__pmp_cfg_rdata[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7212640866150782504ull);
    }
    vlSelf->__PVT__cs_registers_i__DOT__mcountinhibit_d = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 15215521159370895719ull);
    vlSelf->__PVT__cs_registers_i__DOT__mcountinhibit_q = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 9034530296266814553ull);
    vlSelf->__PVT__cs_registers_i__DOT__mcountinhibit_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12010503950445228680ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->__PVT__cs_registers_i__DOT__mhpmcounter[__Vi0] = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 17359845040969866978ull);
    }
    vlSelf->__PVT__cs_registers_i__DOT__mhpmcounter_we = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8213839831881382952ull);
    vlSelf->__PVT__cs_registers_i__DOT__mhpmcounterh_we = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2143210828887546329ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->__PVT__cs_registers_i__DOT__mhpmevent[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16685267241632102063ull);
    }
    vlSelf->__PVT__cs_registers_i__DOT__cpuctrlsts_part_d = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13069494772052052529ull);
    vlSelf->__PVT__cs_registers_i__DOT__cpuctrlsts_part_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11462084541037508066ull);
    vlSelf->__PVT__cs_registers_i__DOT__csr_rdata_int = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5105654108466523393ull);
    vlSelf->__PVT__cs_registers_i__DOT__csr_we_int = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5318356868728131594ull);
    vlSelf->__PVT__cs_registers_i__DOT__csr_wr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17151313812645724616ull);
    vlSelf->__PVT__cs_registers_i__DOT__dbg_csr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6152777365736243333ull);
    vlSelf->__PVT__cs_registers_i__DOT__illegal_csr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12206099947603046192ull);
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_mseccfg_d = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 5172082033334948124ull);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg[__Vi0] = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 6228002005690800572ull);
    }
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wr_suppress__BRA__15__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4660065857475586054ull);
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wr_suppress__BRA__14__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5397499193090393338ull);
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wr_suppress__BRA__13__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9945784756160215305ull);
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wr_suppress__BRA__12__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10359331154780458528ull);
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wr_suppress__BRA__11__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11756576086705676451ull);
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wr_suppress__BRA__10__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3102103197968425161ull);
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wr_suppress__BRA__9__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9853986860369282906ull);
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wr_suppress__BRA__8__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14052377424351930714ull);
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wr_suppress__BRA__7__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11556289783986974035ull);
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wr_suppress__BRA__6__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7600329325840200063ull);
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wr_suppress__BRA__5__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15041758682807488474ull);
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wr_suppress__BRA__4__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10202945817684371073ull);
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wr_suppress__BRA__3__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14846929179674665355ull);
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wr_suppress__BRA__2__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2180444133487916242ull);
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wr_suppress__BRA__1__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4820678985466001615ull);
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wr_suppress__BRA__0__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1094602293341721626ull);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_cfg_wdata[__Vi0] = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 2097152761534703919ull);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__pmp_addr[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12666684729291276745ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__cs_registers_i__DOT__gen_trigger_regs__DOT__tmatch_value_q[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16260186057560163709ull);
    }
    vlSelf->__PVT__cs_registers_i__DOT__gen_trigger_regs__DOT__trigger_match = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12545927418852317621ull);
    vlSelf->cs_registers_i__DOT____VdfgExtracted_hb748c870__0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1688733892480301973ull);
    vlSelf->cs_registers_i__DOT____VdfgRegularize_h9ad8763c_0_21 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10500437120060027823ull);
    vlSelf->cs_registers_i__DOT____VdfgRegularize_h9ad8763c_0_24 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14336452931671943221ull);
    vlSelf->cs_registers_i__DOT____VdfgRegularize_h9ad8763c_0_25 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4423764667637709036ull);
    vlSelf->cs_registers_i__DOT____VdfgRegularize_h9ad8763c_0_26 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14318816621298558096ull);
    vlSelf->cs_registers_i__DOT____VdfgRegularize_h9ad8763c_0_27 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10338435240216350257ull);
    vlSelf->cs_registers_i__DOT____VdfgRegularize_h9ad8763c_0_28 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15872376249816752151ull);
    vlSelf->cs_registers_i__DOT____VdfgRegularize_h9ad8763c_0_29 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15136058437151283939ull);
    vlSelf->cs_registers_i__DOT____VdfgRegularize_h9ad8763c_0_30 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12913966271597260695ull);
    vlSelf->cs_registers_i__DOT____VdfgRegularize_h9ad8763c_0_31 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17105570332896455447ull);
    vlSelf->cs_registers_i__DOT____VdfgRegularize_h9ad8763c_0_32 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14467525900115749147ull);
    vlSelf->cs_registers_i__DOT____VdfgRegularize_h9ad8763c_0_33 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15301661673135087675ull);
    vlSelf->cs_registers_i__DOT____VdfgRegularize_h9ad8763c_0_34 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5179515967401363729ull);
    vlSelf->cs_registers_i__DOT____VdfgRegularize_h9ad8763c_0_35 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1199134586319211728ull);
    vlSelf->cs_registers_i__DOT____VdfgRegularize_h9ad8763c_0_36 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9751849591678680026ull);
    vlSelf->cs_registers_i__DOT____VdfgRegularize_h9ad8763c_0_37 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18285905401354086975ull);
    vlSelf->cs_registers_i__DOT____VdfgRegularize_h9ad8763c_0_38 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6605603983615794040ull);
    vlSelf->cs_registers_i__DOT____VdfgRegularize_h9ad8763c_0_39 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8882441197912398653ull);
    vlSelf->cs_registers_i__DOT____VdfgRegularize_h9ad8763c_0_40 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7912596158571526933ull);
    vlSelf->cs_registers_i__DOT____VdfgRegularize_h9ad8763c_0_41 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7060824075178678090ull);
    vlSelf->cs_registers_i__DOT____VdfgRegularize_h9ad8763c_0_42 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15385422443154536956ull);
    vlSelf->cs_registers_i__DOT____VdfgRegularize_h9ad8763c_0_43 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8729837974424340416ull);
    vlSelf->cs_registers_i__DOT____VdfgRegularize_h9ad8763c_0_44 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11006675188720911981ull);
    vlSelf->cs_registers_i__DOT____VdfgRegularize_h9ad8763c_0_45 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14644508547003044444ull);
    vlSelf->cs_registers_i__DOT____VdfgRegularize_h9ad8763c_0_46 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1488781489984226434ull);
    vlSelf->cs_registers_i__DOT____VdfgRegularize_h9ad8763c_0_47 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16413144586017681959ull);
    vlSelf->cs_registers_i__DOT____VdfgRegularize_h9ad8763c_0_48 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 33780284905150941ull);
    vlSelf->cs_registers_i__DOT____VdfgRegularize_h9ad8763c_0_49 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2310617499201788563ull);
    vlSelf->cs_registers_i__DOT____VdfgRegularize_h9ad8763c_0_50 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2113127482580804601ull);
    vlSelf->cs_registers_i__DOT____VdfgRegularize_h9ad8763c_0_51 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15008294236316382516ull);
    vlSelf->cs_registers_i__DOT____VdfgRegularize_h9ad8763c_0_52 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6456602116267691593ull);
    vlSelf->cs_registers_i__DOT____VdfgRegularize_h9ad8763c_0_53 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8523981888864718231ull);
    vlSelf->cs_registers_i__DOT____VdfgRegularize_h9ad8763c_0_54 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10800819103161452878ull);
    vlSelf->cs_registers_i__DOT____VdfgRegularize_h9ad8763c_0_55 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7273843932120488860ull);
    vlSelf->cs_registers_i__DOT____VdfgRegularize_h9ad8763c_0_56 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3293462551038337581ull);
    vlSelf->cs_registers_i__DOT____VdfgRegularize_h9ad8763c_0_57 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13188514504699023123ull);
    vlSelf->cs_registers_i__DOT____VdfgRegularize_h9ad8763c_0_58 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15350922223700645744ull);
    vlSelf->cs_registers_i__DOT____VdfgRegularize_h9ad8763c_0_59 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15961535552701161635ull);
    vlSelf->__PVT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 12530819931210312224ull);
    vlSelf->__PVT__cs_registers_i__DOT__u_mepc_csr__DOT__rdata_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11533869104420405205ull);
    vlSelf->__PVT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 4104399727459736337ull);
    vlSelf->__PVT__cs_registers_i__DOT__u_mscratch_csr__DOT__rdata_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2873435629405809608ull);
    vlSelf->__PVT__cs_registers_i__DOT__u_mcause_csr__DOT__rdata_q = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 10321965266469426680ull);
    vlSelf->__PVT__cs_registers_i__DOT__u_mtval_csr__DOT__rdata_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11879681547303988554ull);
    vlSelf->__PVT__cs_registers_i__DOT__u_mtvec_csr__DOT__rdata_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9404387216382367498ull);
    vlSelf->__PVT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4750061985960629042ull);
    vlSelf->__PVT__cs_registers_i__DOT__u_depc_csr__DOT__rdata_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3163167651455679336ull);
    vlSelf->__PVT__cs_registers_i__DOT__u_dscratch0_csr__DOT__rdata_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3641970124369054597ull);
    vlSelf->__PVT__cs_registers_i__DOT__u_dscratch1_csr__DOT__rdata_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11087088086668542095ull);
    vlSelf->__PVT__cs_registers_i__DOT__u_mstack_csr__DOT__rdata_q = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 6909757294530586677ull);
    vlSelf->__PVT__cs_registers_i__DOT__u_mstack_epc_csr__DOT__rdata_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5309969316715627674ull);
    vlSelf->__PVT__cs_registers_i__DOT__u_mstack_cause_csr__DOT__rdata_q = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 6684231304989692803ull);
    vlSelf->__PVT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_load = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 11731005585188765180ull);
    vlSelf->__PVT__cs_registers_i__DOT__mcycle_counter_i__DOT__we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13239749360173462503ull);
    vlSelf->__PVT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_d = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 10961627454901395020ull);
    vlSelf->__PVT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_q = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 16407897724220302835ull);
    vlSelf->__PVT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_load = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 16185845283328426284ull);
    vlSelf->__PVT__cs_registers_i__DOT__minstret_counter_i__DOT__we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3505797489464061503ull);
    vlSelf->__PVT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_d = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 9600891998147767229ull);
    vlSelf->__PVT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_q = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 12516696062416781050ull);
    vlSelf->__PVT__cs_registers_i__DOT__u_cpuctrlsts_part_csr__DOT__rdata_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12342295637687306735ull);
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__0__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 17308037671559601473ull);
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__0__KET____DOT__u_pmp_addr_csr__DOT__rdata_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16058520276125289222ull);
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__1__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 14571446637030940673ull);
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__1__KET____DOT__u_pmp_addr_csr__DOT__rdata_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17279207474357414909ull);
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__2__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 7965026178835467879ull);
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__2__KET____DOT__u_pmp_addr_csr__DOT__rdata_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3258760047908642738ull);
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__3__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 14833004373373918492ull);
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__3__KET____DOT__u_pmp_addr_csr__DOT__rdata_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2395960059397218318ull);
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__4__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 9817107980820951988ull);
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__4__KET____DOT__u_pmp_addr_csr__DOT__rdata_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15620876709474442299ull);
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__5__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 3172490149093640020ull);
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__5__KET____DOT__u_pmp_addr_csr__DOT__rdata_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6510113564246751939ull);
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__6__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 2947734329065688188ull);
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__6__KET____DOT__u_pmp_addr_csr__DOT__rdata_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14712813207149619772ull);
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__7__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 13989513027919826959ull);
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__7__KET____DOT__u_pmp_addr_csr__DOT__rdata_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7797560045674897135ull);
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__8__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 15170848465153124267ull);
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__8__KET____DOT__u_pmp_addr_csr__DOT__rdata_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12304655541502488643ull);
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__9__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 16400430291375369147ull);
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__9__KET____DOT__u_pmp_addr_csr__DOT__rdata_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15788851339882378042ull);
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__10__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 9189834886341869155ull);
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__10__KET____DOT__u_pmp_addr_csr__DOT__rdata_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8042375823775059302ull);
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__11__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 9365530101222525428ull);
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__11__KET____DOT__u_pmp_addr_csr__DOT__rdata_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5306846887433884231ull);
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__12__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 7008749658127544028ull);
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__12__KET____DOT__u_pmp_addr_csr__DOT__rdata_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4235450632222435866ull);
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__13__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 773999959949879403ull);
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__13__KET____DOT__u_pmp_addr_csr__DOT__rdata_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7088702197467931780ull);
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__14__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 11150158292159348997ull);
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__14__KET____DOT__u_pmp_addr_csr__DOT__rdata_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5515646532053803509ull);
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__15__KET____DOT__u_pmp_cfg_csr__DOT__rdata_q = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 16422189973390895598ull);
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__g_pmp_csrs__BRA__15__KET____DOT__u_pmp_addr_csr__DOT__rdata_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4022505783289105693ull);
    vlSelf->__PVT__cs_registers_i__DOT__g_pmp_registers__DOT__u_pmp_mseccfg__DOT__rdata_q = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 16181070985476961841ull);
    vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 10191198693658947727ull);
    vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6721596558550134585ull);
    vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17512779019468618607ull);
    vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__0__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5579665152314525691ull);
    vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_load = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 8683293233586900135ull);
    vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12615889841252015086ull);
    vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_d = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8044906399709019136ull);
    vlSelf->__PVT__cs_registers_i__DOT__gen_cntrs__BRA__1__KET____DOT__gen_imp__DOT__mcounters_variable_i__DOT__counter_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13681977504221719402ull);
    vlSelf->__PVT__cs_registers_i__DOT__gen_trigger_regs__DOT__u_tselect_csr__DOT__rdata_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9022356739032129958ull);
    vlSelf->__PVT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__0__KET____DOT__u_tmatch_control_csr__DOT__rdata_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17429658153985291433ull);
    vlSelf->__PVT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__0__KET____DOT__u_tmatch_value_csr__DOT__rdata_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16374001313079208624ull);
    vlSelf->__PVT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__1__KET____DOT__u_tmatch_control_csr__DOT__rdata_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14986470896217028051ull);
    vlSelf->__PVT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__1__KET____DOT__u_tmatch_value_csr__DOT__rdata_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10817945059001123034ull);
    vlSelf->__PVT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__2__KET____DOT__u_tmatch_control_csr__DOT__rdata_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6515161362182926404ull);
    vlSelf->__PVT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__2__KET____DOT__u_tmatch_value_csr__DOT__rdata_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17037814867190327510ull);
    vlSelf->__PVT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__3__KET____DOT__u_tmatch_control_csr__DOT__rdata_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12060884984333698151ull);
    vlSelf->__PVT__cs_registers_i__DOT__gen_trigger_regs__DOT__g_dbg_tmatch_reg__BRA__3__KET____DOT__u_tmatch_value_csr__DOT__rdata_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7096080817781993705ull);
    vlSelf->__PVT__cs_registers_i__DOT__gen_icache_enable__DOT__u_cpuctrlsts_ic_scr_key_valid_q_csr__DOT__rdata_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17855871746675825625ull);
    vlSelf->__PVT__gen_regfile_ecc__DOT__regfile_ecc_enc__DOT__data_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7750666531806723058ull);
    vlSelf->__PVT__gen_regfile_ecc__DOT__regfile_ecc_enc__DOT__data_o = VL_SCOPED_RAND_RESET_Q(39, __VscopeHash, 15333406000115706258ull);
    vlSelf->__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_a__DOT__data_o = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5840460462897991934ull);
    vlSelf->__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_a__DOT__syndrome_o = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 4902347018874128828ull);
    vlSelf->__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_b__DOT__data_o = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1338600924029583764ull);
    vlSelf->__PVT__gen_regfile_ecc__DOT__regfile_ecc_dec_b__DOT__syndrome_o = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 3237363850653014422ull);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__csr_pmp_cfg_i[__Vi0] = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 1109572259254932487ull);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__csr_pmp_addr_i[__Vi0] = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 15931090335827744865ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__priv_mode_i[__Vi0] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6068348111857865649ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__pmp_req_addr_i[__Vi0] = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 11998287663384247405ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__pmp_req_type_i[__Vi0] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17344955712201554590ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__pmp_req_err_o[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12318637914591528611ull);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_start_addr[__Vi0] = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 6826418182699204001ull);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_addr_mask[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12035876431517778933ull);
    }
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__47__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3226939785784257431ull);
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__46__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9341193204784744733ull);
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__45__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9863985854433515437ull);
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__44__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15905687202216951822ull);
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__43__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7618729157226537629ull);
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__42__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12258581712378884697ull);
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__41__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6103191332385396956ull);
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__40__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12542356463812789844ull);
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__39__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7162448048750160502ull);
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__38__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15223132576669763613ull);
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__37__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 441650912187768505ull);
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__36__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13138034638993898219ull);
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__35__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2847882823684829762ull);
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__34__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15544266550490968042ull);
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__33__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 762784886008951249ull);
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__32__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8823469413928620605ull);
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__31__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6162735114922796497ull);
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__30__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7746530443602660412ull);
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__29__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6747593883978055270ull);
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__28__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12620831649820683635ull);
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__27__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5783678152823405208ull);
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__26__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 33317805920017820ull);
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__25__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11175182348214625025ull);
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__24__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12758977676894651311ull);
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__23__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2777948164194752116ull);
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__22__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14815320079417955658ull);
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__21__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9414994232844003968ull);
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__20__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1760080201099704663ull);
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__19__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13618126964911468072ull);
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__18__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3903235893272192485ull);
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__17__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15618067578550277998ull);
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__16__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15694773006032981498ull);
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__15__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6379356328004527921ull);
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__14__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12818521459431939451ull);
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__13__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16483783868659329686ull);
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__12__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6097724322869513677ull);
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__11__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13186567887794742112ull);
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__10__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14761174829745402805ull);
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__9__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15206512624965135386ull);
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__8__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16903485269651070932ull);
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__7__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10319237743624515811ull);
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__6__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3913207599213601872ull);
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__5__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5170839036177292228ull);
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__4__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4912192185214579634ull);
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__3__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6169823622178401382ull);
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__2__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9934335775961836467ull);
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__1__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17334756313009314270ull);
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_eq__BRA__0__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10933320361962996821ull);
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_match_all = VL_SCOPED_RAND_RESET_Q(48, __VscopeHash, 1340824845346214181ull);
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check = VL_SCOPED_RAND_RESET_Q(48, __VscopeHash, 14903842560020797939ull);
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check__BRA__47__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10910906103873202111ull);
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check__BRA__46__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13051403360632667663ull);
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check__BRA__45__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4601457601263769221ull);
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check__BRA__44__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14684056534381955614ull);
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check__BRA__43__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7340548955325568592ull);
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check__BRA__42__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 872511466052687166ull);
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check__BRA__41__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5031571481358864108ull);
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check__BRA__40__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7057639242822920497ull);
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check__BRA__39__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4471895049280440515ull);
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check__BRA__38__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2251281361979498968ull);
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check__BRA__37__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6350660153180184537ull);
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check__BRA__36__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2119509319265550512ull);
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check__BRA__35__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 690292722217582035ull);
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check__BRA__34__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2830789978976909139ull);
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check__BRA__33__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7550681082875442416ull);
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_basic_perm_check__BRA__32__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5788067798980530587ull);
    vlSelf->__PVT__g_pmp__DOT__pmp_i__DOT__region_perm_check = VL_SCOPED_RAND_RESET_Q(48, __VscopeHash, 3183696560394133378ull);
    vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_1 = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 7356789495567907872ull);
    vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_4 = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 6234444290440375073ull);
    vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_7 = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 11972429773333944209ull);
    vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_10 = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 14654695326400888616ull);
    vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_13 = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 8421708040389997107ull);
    vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_16 = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 4197572710841406953ull);
    vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_19 = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 11361746306244157550ull);
    vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_22 = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 16017792078570697061ull);
    vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_25 = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 2708226191012791160ull);
    vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_28 = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 16584285580154772086ull);
    vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_31 = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 3532378914231732068ull);
    vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_34 = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 1213574783385494902ull);
    vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_37 = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 9318615428888392305ull);
    vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_40 = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 1101767284758508572ull);
    vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_43 = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 15051508124899273689ull);
    vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_46 = VL_SCOPED_RAND_RESET_Q(34, __VscopeHash, 2416280039562992518ull);
    vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_49 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9018236898426122883ull);
    vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_60 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3149672074568235001ull);
    vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_66 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3653425131126531231ull);
    vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_72 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1457319720667410278ull);
    vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_78 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6802920324737001869ull);
    vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_84 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2392497715228552153ull);
    vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_90 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8331341778008130535ull);
    vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_96 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16376658400984896984ull);
    vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_102 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3409608251502063740ull);
    vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_108 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5713282480840041297ull);
    vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_114 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11246198727595781630ull);
    vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_120 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17876612795965873118ull);
    vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_126 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15604813088830537414ull);
    vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_132 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17981583812832356172ull);
    vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_138 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5592491586261326471ull);
    vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_144 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8609775426092784829ull);
    vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_162 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8763030203523692285ull);
    vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_163 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16268494708381891798ull);
    vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_164 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4135035889515115674ull);
    vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_165 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2585662545015853107ull);
    vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_166 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18374750083479446266ull);
    vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_167 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3240151689105562492ull);
    vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_168 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2685261548780846868ull);
    vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_169 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12140196328200192094ull);
    vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_170 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8082260199201690661ull);
    vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_171 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14245387755758437741ull);
    vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_172 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16618526500804232784ull);
    vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_173 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17920135033526411723ull);
    vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_174 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11551190979073676976ull);
    vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_175 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9791335417442743047ull);
    vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_176 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5389496057803118538ull);
    vlSelf->g_pmp__DOT__pmp_i__DOT____VdfgRegularize_hc27f3992_0_177 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17238437086469694249ull);
    vlSelf->__VdfgRegularize_h2dc7b7d1_1_3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11936345597347115310ull);
    vlSelf->__VdfgRegularize_h2dc7b7d1_1_4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9828012796010763268ull);
    vlSelf->__VdfgRegularize_h2dc7b7d1_1_9 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5300140371876592552ull);
    vlSelf->__VdfgRegularize_h2dc7b7d1_1_10 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 10467265663516769131ull);
    vlSelf->__VdfgRegularize_h2dc7b7d1_1_34 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 12805242736622655464ull);
    vlSelf->__VdfgRegularize_h2dc7b7d1_1_35 = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 14374623101285347113ull);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__0__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5027495505654699123ull);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__0__pmp_cfg = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 13940987131309770447ull);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__0__value = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14866204452216248867ull);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__1__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7103723193272296600ull);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__1__pmp_cfg = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 10544216321529669519ull);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__1__value = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11322077763699998541ull);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__2__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14058564661130325016ull);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__2__pmp_cfg = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 13596462595877257948ull);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__2__value = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8776762116824427323ull);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__3__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3306697134643752290ull);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__3__pmp_cfg = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 4643151028723788304ull);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__3__value = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15494959331361161185ull);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__4__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2814053990000139753ull);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__4__pmp_cfg = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 448935105075569013ull);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__4__value = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1652587858282378729ull);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__5__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17784113365437755137ull);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__5__pmp_cfg = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 11456499860111473745ull);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__5__value = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4193658319524654829ull);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__6__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10893853033181978314ull);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__6__pmp_cfg = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 3866913988997106236ull);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__6__value = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12665870016249991038ull);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__7__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12655396808488444451ull);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__7__pmp_cfg = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 18242429115703277641ull);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__7__value = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8605803114963903454ull);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__8__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12318654109185310153ull);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__8__pmp_cfg = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 12743173163974950456ull);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__8__value = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4170435126566544150ull);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__9__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11701594317898285432ull);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__9__pmp_cfg = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 14302529300078451966ull);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__9__value = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15273532042811512495ull);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__10__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11250182277453892659ull);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__10__pmp_cfg = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 877148897112000577ull);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__10__value = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7992961378502393011ull);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__11__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3745115892109222237ull);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__11__pmp_cfg = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 9573932366325980177ull);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__11__value = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11305840811891854512ull);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__12__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7807236943127718688ull);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__12__pmp_cfg = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 13147316983885863448ull);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__12__value = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 888492038393708258ull);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__13__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17507141448633224228ull);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__13__pmp_cfg = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 17537918063050263933ull);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__13__value = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6833821868820371631ull);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__14__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9762804001965054412ull);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__14__pmp_cfg = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 17823886318462580558ull);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__14__value = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15337013221138332158ull);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__15__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12033740293038536794ull);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__15__pmp_cfg = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 5662470026950279802ull);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__15__value = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8470534096249354729ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__17__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13927902263101867563ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__17__region_csr_pmp_cfg = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 5778048390898218753ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__17__pmp_req_type = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10908505505245579162ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__17__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15478144817490004816ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__17__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10727550407907788793ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__17__result = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9125152140902543415ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__18__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 555343656112349229ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__18__pmp_cfg_lock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13300597441223743821ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__18__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12440593662055974593ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__18__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7291869082060701267ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__20__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17408494294530927385ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__20__region_csr_pmp_cfg = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 6695373269411052274ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__20__pmp_req_type = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17034136745411057238ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__20__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6906110084905565697ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__20__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10874118060339748196ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__20__result = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10889354476242942382ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__21__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7700411850536469444ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__21__pmp_cfg_lock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5711624117301106224ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__21__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9641199900730165767ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__21__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 401619967186051177ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__23__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2036365200678089851ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__23__region_csr_pmp_cfg = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 13434971228475768824ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__23__pmp_req_type = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6879595127172503443ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__23__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7239918745042145640ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__23__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8535450335631865044ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__23__result = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7890222909665358140ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__24__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6754138793677656767ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__24__pmp_cfg_lock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1410682708954639468ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__24__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6756611614548296731ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__24__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11220272073537972609ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__26__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15688309295652512561ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__26__region_csr_pmp_cfg = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 1156218989900635102ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__26__pmp_req_type = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12442043315973392398ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__26__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9639541811529522583ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__26__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3827370952742605501ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__26__result = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16176012454023956900ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__27__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16453635631420271248ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__27__pmp_cfg_lock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9828437309537444450ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__27__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13776477001600747496ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__27__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1862287147168670440ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__29__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1206085854245398987ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__29__region_csr_pmp_cfg = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 12904764769568381490ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__29__pmp_req_type = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 630626211937410532ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__29__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1390025402749026455ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__29__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14956016980649977086ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__29__result = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8549939039869518131ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__30__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3691969418123335349ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__30__pmp_cfg_lock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11734780126617880450ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__30__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1438175033094224122ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__30__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7568510619005339891ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__32__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16041524120621422323ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__32__region_csr_pmp_cfg = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 1687398344966460311ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__32__pmp_req_type = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2217320638482996202ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__32__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17828606324395793699ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__32__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7464499961858022727ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__32__result = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2782355058105034258ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__33__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10055573591588914788ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__33__pmp_cfg_lock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11449002818838202278ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__33__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3941829893781586613ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__33__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4492571488511668359ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__35__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4234879796150264778ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__35__region_csr_pmp_cfg = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 13108947773538912352ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__35__pmp_req_type = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16562608406337189190ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__35__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 18281298864497409273ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__35__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9765257476821417801ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__35__result = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1213653457806086218ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__36__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3881909920797511738ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__36__pmp_cfg_lock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 680905545858244646ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__36__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2969691818160579538ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__36__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17129162711016323727ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__38__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10122063208682525922ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__38__region_csr_pmp_cfg = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 9057038665194078428ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__38__pmp_req_type = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4740431946726211285ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__38__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5808416797486248475ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__38__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4018423646085172339ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__38__result = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 669716108929565185ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__39__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15531213619508948175ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__39__pmp_cfg_lock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7887752604972777505ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__39__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6682222774372653445ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__39__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17181470485724855743ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__41__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7806676547958953884ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__41__region_csr_pmp_cfg = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 12152390227078569125ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__41__pmp_req_type = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2043942085954436652ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__41__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13166910727172022076ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__41__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3060755927642257843ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__41__result = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 444805483407036772ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__42__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11537209681191998055ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__42__pmp_cfg_lock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13787412545175787823ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__42__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11252385471055246724ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__42__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15792850928364436449ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__44__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13004362310210794119ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__44__region_csr_pmp_cfg = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 12731389807822146479ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__44__pmp_req_type = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11270581423163464964ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__44__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5732580339558056103ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__44__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12250415932817714241ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__44__result = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16673488547887077559ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__45__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14145969135500609967ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__45__pmp_cfg_lock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2347192947457090836ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__45__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7558133210310835994ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__45__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8786241053862916229ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__47__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13307437856376399289ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__47__region_csr_pmp_cfg = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 4644777389942188298ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__47__pmp_req_type = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13297105499888707280ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__47__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14457421425180660834ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__47__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14286111409629807917ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__47__result = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1159735931856448477ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__48__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10915152361123336196ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__48__pmp_cfg_lock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1448445844296426154ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__48__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14530806402008187139ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__48__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16744665065674343766ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__50__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13138446907763820725ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__50__region_csr_pmp_cfg = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 9963083374479463727ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__50__pmp_req_type = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15155281305316143742ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__50__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15344112056092565875ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__50__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15632367519878189545ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__50__result = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1734822619324286179ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__51__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8338353078060668115ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__51__pmp_cfg_lock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11801495535670000599ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__51__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15129974780946429944ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__51__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14579019808547973180ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__53__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3207756411272628682ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__53__region_csr_pmp_cfg = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 6492880081867798218ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__53__pmp_req_type = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11728967030328466503ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__53__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4901718515109160091ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__53__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5675462960196856725ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__53__result = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4145752671506780145ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__54__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13976095864614883928ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__54__pmp_cfg_lock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2463412859710212034ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__54__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12469595755476062272ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__54__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6538145336818335287ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__56__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11083168677231982607ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__56__region_csr_pmp_cfg = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 1737486916596710014ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__56__pmp_req_type = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 701711160304398807ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__56__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7585385670093485502ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__56__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13146838259235120621ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__56__result = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6838704052054515254ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__57__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6491798828239305450ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__57__pmp_cfg_lock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8666896981173554185ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__57__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17809603794437864493ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__57__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4567657543352311841ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__59__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6640627716302175483ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__59__region_csr_pmp_cfg = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 14530060054299827938ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__59__pmp_req_type = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6861944939018710696ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__59__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7732610550374546476ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__59__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13249472303913633696ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__59__result = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7071540945326705466ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__60__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10530194703274942644ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__60__pmp_cfg_lock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6496899957108458835ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__60__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2019006677199421847ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__60__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5446779172067606339ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__62__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4057804056717912357ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__62__region_csr_pmp_cfg = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 11183751452923046835ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__62__pmp_req_type = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1942055300768490029ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__62__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12747239463679307006ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__62__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6769920184980228249ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__62__result = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5831787567220722549ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__63__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9701708512520217441ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__63__pmp_cfg_lock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6430637328205173010ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__63__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8192697971584857154ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__63__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2918223838402392870ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__64__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3255042247481281474ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__64__csr_pmp_mseccfg_mmwp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1614948887653987837ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__64__csr_pmp_mseccfg_mml = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13348561196020802944ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__64__pmp_req_type = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 651444963634514640ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__64__match_all = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4627872532511495206ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__64__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17314438144157361376ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__64__final_perm_check = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8210300126702418549ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__64__access_fail = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13419290524259066685ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__64__matched = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10436113743754454819ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__66__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8476812473232206242ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__66__region_csr_pmp_cfg = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 14449413560615657469ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__66__pmp_req_type = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 18297635788555508934ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__66__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4106031172061323355ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__66__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6323745868369786015ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__66__result = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15200253075635591619ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__67__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18368913790234218692ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__67__pmp_cfg_lock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16482580930701823065ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__67__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7044019257242743987ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__67__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5448996889008536725ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__69__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10964767205426403136ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__69__region_csr_pmp_cfg = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 14443560933952975298ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__69__pmp_req_type = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1183596500564168879ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__69__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15505285467900579770ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__69__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1948154541754648764ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__69__result = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8936218459968102225ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__70__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10721659826827272016ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__70__pmp_cfg_lock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5058049408625204885ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__70__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 681816964381168449ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__70__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14169607467505918050ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__72__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16608780240604002832ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__72__region_csr_pmp_cfg = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 3748707082302046977ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__72__pmp_req_type = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9326850218853360743ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__72__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1374887831642201350ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__72__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 293043919843330357ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__72__result = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10532634628246613004ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__73__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2976431228049362588ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__73__pmp_cfg_lock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16779909073296482127ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__73__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17826745355691943070ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__73__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10040283992731207475ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__75__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2219273393161520643ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__75__region_csr_pmp_cfg = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 12357508179771518102ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__75__pmp_req_type = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4392598617524110485ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__75__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8312866369797367203ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__75__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10462733758872282083ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__75__result = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6799426521573330859ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__76__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1758394176182636375ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__76__pmp_cfg_lock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1147084127675891154ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__76__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17498977083913724843ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__76__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4244071563196837974ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__78__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5914705731550956042ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__78__region_csr_pmp_cfg = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 2976421343079705789ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__78__pmp_req_type = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 413171144680512227ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__78__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9598441273249080335ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__78__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3023909562424404411ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__78__result = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7993224351427058248ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__79__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17476517835830465971ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__79__pmp_cfg_lock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6816719021289729965ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__79__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3891358808353392916ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__79__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9518703780910222670ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__81__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15177645272884570228ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__81__region_csr_pmp_cfg = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 16313576001677231247ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__81__pmp_req_type = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15231951029104552499ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__81__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 195987176310632714ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__81__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13998239404988546708ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__81__result = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17925257690012234035ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__82__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7664237374702908700ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__82__pmp_cfg_lock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8107831796123894763ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__82__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 995126370114706935ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__82__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15718403960074187970ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__84__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10542165329836562334ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__84__region_csr_pmp_cfg = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 16478415404151989863ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__84__pmp_req_type = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3271346906994421555ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__84__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14426692896673989078ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__84__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5747094573847964228ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__84__result = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1892203449858735798ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__85__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9984745312572029901ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__85__pmp_cfg_lock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3302746926857770106ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__85__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12521122424378584883ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__85__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11030002648122553209ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__87__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16100236914490858085ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__87__region_csr_pmp_cfg = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 7809971788667667142ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__87__pmp_req_type = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10061815701793767776ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__87__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14784799435095363839ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__87__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10526781127249765440ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__87__result = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 227549836497375901ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__88__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7164112031325529663ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__88__pmp_cfg_lock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8728478344906289185ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__88__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17439550174294831142ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__88__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9084040454123107836ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__90__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8788002475645412944ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__90__region_csr_pmp_cfg = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 6903177237623064174ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__90__pmp_req_type = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16850761574171021014ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__90__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5518433299042067777ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__90__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16519205767349379093ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__90__result = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11238647213282779523ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__91__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4955791249748634827ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__91__pmp_cfg_lock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16130233250657428870ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__91__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2163501969165401238ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__91__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14433189338112743614ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__92__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14546893216414164294ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__93__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2744839917805611815ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__93__region_csr_pmp_cfg = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 3653589227392883334ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__93__pmp_req_type = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16318695701351761979ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__93__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3894257923911864969ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__93__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14727764582161663909ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__93__result = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10404757267476993777ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__94__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2957183284660960968ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__94__pmp_cfg_lock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14268869253130258695ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__94__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3965257993669251928ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__94__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7213036909084703973ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__96__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8594125346659026060ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__96__region_csr_pmp_cfg = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 5621388139153582502ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__96__pmp_req_type = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14860412072587791035ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__96__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11254526392630499812ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__96__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7437716035654372065ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__96__result = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5801715469151612533ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__97__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6550811859270052070ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__97__pmp_cfg_lock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2779898388908253649ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__97__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6130303345422421216ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__97__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2100942600300571473ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__99__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2003933480993511042ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__99__region_csr_pmp_cfg = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 3571112365388819762ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__99__pmp_req_type = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6927226419817239823ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__99__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15163727295675822105ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__99__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13802976677894817082ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__99__result = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5869859427564388838ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__100__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4413460588183007459ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__100__pmp_cfg_lock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2773238306717420104ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__100__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12158226989051557365ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__100__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5254510985277852288ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__102__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2600523003672814016ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__102__region_csr_pmp_cfg = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 5669806812605251630ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__102__pmp_req_type = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6447253933112752638ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__102__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15627851241064024397ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__102__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 801651324155411308ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__102__result = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15267636547163427936ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__103__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17708688332274149581ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__103__pmp_cfg_lock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8981554546105824166ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__103__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 150013164373708598ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__103__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16949123704222450539ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__105__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12391042020886165026ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__105__region_csr_pmp_cfg = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 5346165680204777557ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__105__pmp_req_type = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16975705977015295714ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__105__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5285807338586150982ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__105__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15822819539260901318ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__105__result = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10148977195852519157ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__106__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5570616409656728523ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__106__pmp_cfg_lock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 831049292919487646ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__106__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17887882490279542731ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__106__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13525898819831273163ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__108__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7941606485156382255ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__108__region_csr_pmp_cfg = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 2136587540138210046ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__108__pmp_req_type = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15534073005447231308ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__108__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4590386032097200506ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__108__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3978906730193181135ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__108__result = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4681169879864191424ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__109__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9387352973598791937ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__109__pmp_cfg_lock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8589611277069402642ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__109__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 121801094901687791ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__109__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9778319316661405255ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__111__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8804084313097644459ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__111__region_csr_pmp_cfg = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 4210213303605580250ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__111__pmp_req_type = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16288444131413245071ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__111__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1309685138713274605ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__111__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2822080026464443475ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__111__result = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12545472201989656010ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__112__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18388904673426390747ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__112__pmp_cfg_lock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9069839688626245191ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__112__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8493619715492708596ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__112__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7889706723666194039ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__113__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2317035790203119115ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__113__csr_pmp_mseccfg_mmwp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17799454212853666934ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__113__csr_pmp_mseccfg_mml = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14079810810773452159ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__113__pmp_req_type = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6126463189769363451ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__113__match_all = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11457713677124803848ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__113__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16761641147217138168ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__113__final_perm_check = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5045052725068415627ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__113__access_fail = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10801162784607497683ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__113__matched = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8622554755803805731ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__115__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3686620145518423515ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__115__region_csr_pmp_cfg = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 9980935826302647130ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__115__pmp_req_type = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14370434523811815870ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__115__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8359479062347265949ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__115__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9269080543287964622ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__115__result = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5244299364243288362ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__116__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12977631357821284324ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__116__pmp_cfg_lock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10394527021475098361ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__116__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12124599403258030617ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__116__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16035740817542293069ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__118__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12238643257548180409ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__118__region_csr_pmp_cfg = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 3720752835516913201ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__118__pmp_req_type = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8731281388170502446ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__118__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5617053433353653254ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__118__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5754466019235025608ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__118__result = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10723681594354506725ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__119__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8700997442612375927ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__119__pmp_cfg_lock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12357559452921029741ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__119__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2036317531658018027ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__119__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6599981490191752390ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__121__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14518822679717104729ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__121__region_csr_pmp_cfg = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 14261043809178825500ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__121__pmp_req_type = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15874128396525543245ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__121__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 730289083238252741ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__121__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13342542401129382796ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__121__result = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15331886009214625857ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__122__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10525305002060239189ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__122__pmp_cfg_lock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12925894680227704033ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__122__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 410217403782991195ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__122__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12199888942899249783ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__124__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4280391707794383609ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__124__region_csr_pmp_cfg = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 4606956009484517056ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__124__pmp_req_type = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11991540233455162005ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__124__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4533840967765142312ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__124__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7761416530880399649ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__124__result = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13964376428477125233ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__125__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17230776701845816174ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__125__pmp_cfg_lock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16887642835570099999ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__125__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16017901980837308384ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__125__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7496078031906513345ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__127__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1370139354093423416ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__127__region_csr_pmp_cfg = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 8763058141143872745ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__127__pmp_req_type = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13342779667952180364ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__127__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17339745835428290645ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__127__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14909500150324279559ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__127__result = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17319529931205637179ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__128__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 802095374479804429ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__128__pmp_cfg_lock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8953487383507993784ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__128__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2006073198294912520ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__128__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17594743022046651530ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__130__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7093517620492597813ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__130__region_csr_pmp_cfg = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 13196356962928149842ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__130__pmp_req_type = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2451078184603343465ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__130__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7165472868867805031ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__130__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 990421219561405666ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__130__result = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 436459868672813565ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__131__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14288687558777660208ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__131__pmp_cfg_lock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1971926550042763450ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__131__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8048074373650652126ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__131__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 471840229600223330ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__133__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7799688976110202708ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__133__region_csr_pmp_cfg = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 6661041409829634289ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__133__pmp_req_type = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16196821305775671746ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__133__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5143536410742532705ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__133__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12897788020832462509ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__133__result = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18263960659748267992ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__134__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7677310980675015803ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__134__pmp_cfg_lock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4339007545134304625ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__134__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3911861644846056748ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__134__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16323808238846175118ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__136__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14485331553008813756ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__136__region_csr_pmp_cfg = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 4220432255721608997ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__136__pmp_req_type = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16855531904727311476ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__136__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15456090160224893260ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__136__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14413689946506092437ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__136__result = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3731077016199848591ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__137__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6460946004275513853ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__137__pmp_cfg_lock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1212527918289359882ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__137__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 497338948267136081ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__137__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8010794961812218253ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__139__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7372597586173621458ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__139__region_csr_pmp_cfg = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 11947644757815981927ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__139__pmp_req_type = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14197235355558772246ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__139__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6531276056814810135ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__139__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10370834467788324264ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__139__result = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11876467902923507736ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__140__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4611129583707385786ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__140__pmp_cfg_lock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10647723428074696204ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__140__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2679238420508061925ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__140__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14367402151986670839ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__142__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7090219472975362085ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__142__region_csr_pmp_cfg = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 8841248691429300367ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__142__pmp_req_type = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14923589711292343793ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__142__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5382173096217987200ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__142__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13885827186785792048ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__142__result = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1641798981997402863ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__143__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18010776466923640060ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__143__pmp_cfg_lock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2753984778885021530ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__143__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17191296355440511620ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__143__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15007802531883934492ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__145__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9780297691976466856ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__145__region_csr_pmp_cfg = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 331963190689650225ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__145__pmp_req_type = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8928631547276367958ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__145__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4942082495091886787ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__145__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3682443999951607167ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__145__result = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14795220527660042207ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__146__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14735759796507690034ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__146__pmp_cfg_lock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14715192837855323799ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__146__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8760087316122618265ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__146__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2276359999952612897ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__148__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4910015421488801355ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__148__region_csr_pmp_cfg = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 706915078198560114ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__148__pmp_req_type = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1396953766906829526ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__148__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16400761355864397123ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__148__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17770617568424788500ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__148__result = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6666488598552342766ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__149__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2873000001378455792ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__149__pmp_cfg_lock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 399927721114951165ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__149__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11341054055621456639ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__149__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 922473840919172812ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__151__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6477926768146709573ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__151__region_csr_pmp_cfg = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 3343149809033359388ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__151__pmp_req_type = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 18412406079889469978ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__151__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11089679291553605312ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__151__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13070385445687794419ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__151__result = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8128740461388698373ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__152__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4498306520378276699ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__152__pmp_cfg_lock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18334904482820238508ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__152__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12033021643292780812ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__152__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13861105804598396048ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__154__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1107516436630681301ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__154__region_csr_pmp_cfg = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 17553182965275100657ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__154__pmp_req_type = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 18385439706031737252ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__154__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14783177185776263501ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__154__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17673272558378612882ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__154__result = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5609384133811804ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__155__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7100070719399144999ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__155__pmp_cfg_lock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13691923582123199793ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__155__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15287187740048399764ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__155__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7927820351515256775ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__157__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6824365460571006453ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__157__region_csr_pmp_cfg = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 10256869175588418487ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__157__pmp_req_type = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8991253960459984571ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__157__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6818455312810606859ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__157__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15172999771700777173ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__157__result = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17786223450817399561ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__158__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18324170419174105548ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__158__pmp_cfg_lock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 736603116522344922ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__158__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16676123503544829082ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__158__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7460987266496958124ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__160__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13065564159412339819ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__160__region_csr_pmp_cfg = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 9130619476526805285ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__160__pmp_req_type = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2299540893784034633ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__160__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2465057951997739755ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__160__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6880613218012158133ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__160__result = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5253545749485132564ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__161__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11829383247837054057ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__161__pmp_cfg_lock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7038984728295676525ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__161__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9334897266878604643ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__161__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1842995825531791186ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__162__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16132829110979416452ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__162__csr_pmp_mseccfg_mmwp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10092485730237632910ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__162__csr_pmp_mseccfg_mml = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12702514456089507209ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__162__pmp_req_type = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10394332073900112392ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__162__match_all = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5059710876519878006ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__162__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8205927713831664718ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__162__final_perm_check = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9222705917523058086ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__162__access_fail = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12555288065205875850ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__162__matched = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4263720303670094751ull);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__163__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1792195989133011455ull);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__163__pmp_cfg = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 10777899249645292727ull);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__163__value = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1865672037061434817ull);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__164__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5884912081758161350ull);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__164__pmp_cfg = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 4061097355058720127ull);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__164__value = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 237229965055557758ull);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__165__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8308540599386210700ull);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__165__pmp_cfg = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 12079342064799019291ull);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__165__value = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9484410110031387572ull);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__166__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11484674507129904887ull);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__166__pmp_cfg = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 12208944816687808112ull);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__166__value = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17961818829512451510ull);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__167__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2454270138990425498ull);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__167__pmp_cfg = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 14728308557790532916ull);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__167__value = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14616309465775410053ull);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__168__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8457898362098219165ull);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__168__pmp_cfg = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 1735196977566080074ull);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__168__value = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6041123569951464831ull);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__169__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11891601155606509077ull);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__169__pmp_cfg = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 4713121920897745265ull);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__169__value = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11196168488600391666ull);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__170__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6434826957447265683ull);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__170__pmp_cfg = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 2014692474497268942ull);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__170__value = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1289630101531835135ull);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__171__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6729295340298464990ull);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__171__pmp_cfg = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 17260316088756106740ull);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__171__value = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18132602606738871777ull);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__172__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17311584827599041002ull);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__172__pmp_cfg = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 18118492041764182688ull);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__172__value = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1127627883750843722ull);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__173__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7504267468915457092ull);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__173__pmp_cfg = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 6583750557860147931ull);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__173__value = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9315180156916627399ull);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__174__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14928253153570287186ull);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__174__pmp_cfg = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 10852537100560084603ull);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__174__value = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5498443250425002810ull);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__175__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14192805073647194036ull);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__175__pmp_cfg = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 12242228433482095796ull);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__175__value = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2957196258536041379ull);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__176__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6238406603134792975ull);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__176__pmp_cfg = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 12222230433306801533ull);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__176__value = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17741863031409800635ull);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__177__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9682088470643692572ull);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__177__pmp_cfg = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 6782875157507212631ull);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__177__value = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 171992129896357644ull);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__178__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3786454582456050668ull);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__178__pmp_cfg = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 18395746845063082623ull);
    vlSelf->__Vfunc_cs_registers_i__DOT__is_mml_m_exec_cfg__178__value = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10316661346890519830ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__180__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11300581866072455827ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__180__region_csr_pmp_cfg = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 15300632387783644697ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__180__pmp_req_type = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7784543517998965887ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__180__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16456086591837577982ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__180__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12349429454938952880ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__180__result = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9381860001068215223ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__181__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8732297003488502508ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__181__pmp_cfg_lock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9613509272572519223ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__181__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 18365832884891775124ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__181__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8291587565304545647ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__183__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18298572365697468431ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__183__region_csr_pmp_cfg = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 18015639953998894386ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__183__pmp_req_type = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10952569519794338727ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__183__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10693486241107323828ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__183__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15055496078164157686ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__183__result = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5103699500809713070ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__184__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11428245072767622409ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__184__pmp_cfg_lock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17616583131020932685ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__184__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 317079765252040550ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__184__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15858029075348204254ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__186__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2811243657375435992ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__186__region_csr_pmp_cfg = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 1112816401486338134ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__186__pmp_req_type = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 377228630195312257ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__186__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3104602648983779501ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__186__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4604763256859124216ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__186__result = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15173946449447806411ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__187__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17311207781520321567ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__187__pmp_cfg_lock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1071911486481280886ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__187__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1479986851156829979ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__187__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1657861306993179218ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__189__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16385786095404817314ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__189__region_csr_pmp_cfg = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 925868122603722076ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__189__pmp_req_type = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7623338203217049364ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__189__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3202264422806283935ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__189__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9824301165194672006ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__189__result = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3220281423705236402ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__190__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4895493276732890798ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__190__pmp_cfg_lock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15552499278823094491ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__190__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4651626332870397802ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__190__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7162682456062718903ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__192__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7523724752099649541ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__192__region_csr_pmp_cfg = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 15562177013192494605ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__192__pmp_req_type = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10182037486621890410ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__192__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7359607193357521020ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__192__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16594923460409587300ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__192__result = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9442194226263740995ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__193__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4390926307161706671ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__193__pmp_cfg_lock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5220080681589957075ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__193__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2558121242454124183ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__193__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1986717699275221708ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__195__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9018286202748059485ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__195__region_csr_pmp_cfg = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 4714749432500967417ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__195__pmp_req_type = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13175116183611372856ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__195__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14872619086422182208ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__195__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11645337402580381663ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__195__result = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 501570254155800051ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__196__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17886114766937380422ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__196__pmp_cfg_lock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6598920976931516307ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__196__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4625984622511276528ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__196__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14656172857036720397ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__198__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1172566233585010597ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__198__region_csr_pmp_cfg = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 14298798068435984027ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__198__pmp_req_type = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4494780335816025937ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__198__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8149699025386678684ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__198__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 196749208258365080ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__198__result = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11665752871742631844ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__199__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12513386508461999801ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__199__pmp_cfg_lock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13435959491990358047ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__199__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10528101128883974348ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__199__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12473991122769858065ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__201__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10991488550024836209ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__201__region_csr_pmp_cfg = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 12839762838894493392ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__201__pmp_req_type = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5836569843071071016ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__201__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16227093315124340987ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__201__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18099213979332703727ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__201__result = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13354485759092882132ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__202__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9977416168929256764ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__202__pmp_cfg_lock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11406020264918070337ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__202__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7130011123410918732ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__202__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2044958764367645227ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__perm_check_wrapper__203__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2490119947269075423ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__204__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14222518846418183175ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__204__region_csr_pmp_cfg = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 1690453298660886966ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__204__pmp_req_type = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17208593912678632433ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__204__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9236619643475180386ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__204__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 736546957766907836ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__204__result = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4512466905992324031ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__205__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13188541419930477415ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__205__pmp_cfg_lock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9679008143122575027ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__205__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1363958558107913930ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__205__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1685873857293039040ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__207__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13788463369106799939ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__207__region_csr_pmp_cfg = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 9563958334332657420ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__207__pmp_req_type = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13800076385413850249ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__207__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14032441172771628699ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__207__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18215479375950150428ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__207__result = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 115788746416149476ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__208__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15027905825338050131ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__208__pmp_cfg_lock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16782566077051813670ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__208__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11961042865004152875ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__208__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8547788125081786078ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__210__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1361484165195469216ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__210__region_csr_pmp_cfg = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 5976353305794510601ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__210__pmp_req_type = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13923334614249788175ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__210__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6005048739179291536ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__210__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4028714984779010085ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__210__result = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8386840189278108262ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__211__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9909648005079943574ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__211__pmp_cfg_lock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6812785999643022251ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__211__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10553468712724791221ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__211__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14751250858687863384ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__213__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11148249610130982159ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__213__region_csr_pmp_cfg = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 840722717421077005ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__213__pmp_req_type = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15072938376766427823ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__213__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12877823645745798785ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__213__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5769072981743248201ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__213__result = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8255779205417905453ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__214__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7322302370072347317ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__214__pmp_cfg_lock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7032842396060210570ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__214__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14416712891765624140ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__214__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16077917288377367614ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__216__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11330513234964682011ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__216__region_csr_pmp_cfg = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 6839304020360547630ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__216__pmp_req_type = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8328152053099500087ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__216__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16935312875203302181ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__216__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8886756667861230887ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__216__result = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6144211536195206921ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__217__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8129272175848512103ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__217__pmp_cfg_lock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10315091190184480281ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__217__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9300263863857443176ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__217__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2939538280840675758ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__219__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12944220302260649868ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__219__region_csr_pmp_cfg = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 12816575415929518544ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__219__pmp_req_type = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14259312199148706357ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__219__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7384146919080203216ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__219__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17519106286424632271ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__219__result = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4375423486823888393ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__220__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4059400122086607491ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__220__pmp_cfg_lock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7862557920906579840ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__220__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11207574458715046617ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__220__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15970612392688179340ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__222__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9833588237449617676ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__222__region_csr_pmp_cfg = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 10722376999853007551ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__222__pmp_req_type = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1162709856002123597ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__222__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9637535807945764866ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__222__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4707961203307743113ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__222__result = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6426899777677606462ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__223__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15366473469336479452ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__223__pmp_cfg_lock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13870348734089447225ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__223__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4351511895253673505ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__223__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12992147309524410139ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__225__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14150596785788995227ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__225__region_csr_pmp_cfg = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 7400261370224084338ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__225__pmp_req_type = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10892799840435990258ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__225__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2728445287935812138ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__225__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 185819648417371825ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__225__result = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10134430289158935115ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__226__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6136253006668131423ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__226__pmp_cfg_lock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8851108249448808896ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__226__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2933202232715447321ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__226__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16902925197711229470ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 195357833557109264ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__csr_pmp_mseccfg_mmwp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7428763343161585ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__csr_pmp_mseccfg_mml = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 964260295846590083ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__pmp_req_type = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12935898354102558957ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__match_all = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2684930846134322442ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13475214273195327614ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__final_perm_check = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14934160711258263048ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__access_fail = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 713077343758754970ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__227__matched = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13304846973301557322ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__229__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12093839754959170894ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__229__region_csr_pmp_cfg = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 8836750042766930136ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__229__pmp_req_type = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17429192263791144200ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__229__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8472217291443461252ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__229__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6412545640275109309ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__229__result = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2676463801139587277ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__230__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4891216249042558975ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__230__pmp_cfg_lock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13963327645025560670ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__230__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1704407959525663311ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__230__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8014072306550351534ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__232__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7963924316347553514ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__232__region_csr_pmp_cfg = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 4145765958092809282ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__232__pmp_req_type = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 65967556777244040ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__232__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8352192475046847414ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__232__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6077200757814101095ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__232__result = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6638194180231032558ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__233__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4146202583196675922ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__233__pmp_cfg_lock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16950199713660064801ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__233__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8138613814801427563ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__233__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18226214621967386723ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__235__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15418622101493221348ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__235__region_csr_pmp_cfg = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 6486833863130793711ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__235__pmp_req_type = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10370368106130347236ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__235__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1255006691515915228ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__235__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16229809832574180647ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__235__result = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11814564826158869151ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__236__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9114099191103187812ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__236__pmp_cfg_lock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5607278596143957970ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__236__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14477419687931402578ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__236__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2544025937965238231ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__238__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14674376680551497576ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__238__region_csr_pmp_cfg = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 9994964916742371675ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__238__pmp_req_type = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10458750285909800014ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__238__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4140540866282417916ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__238__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9924086114990929341ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__238__result = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13565020849971231248ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__239__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11290870321643066901ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__239__pmp_cfg_lock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1674984217778779459ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__239__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3134892172243324395ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__239__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4199292403373223216ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__241__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10844537054171928241ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__241__region_csr_pmp_cfg = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 3175955672763527457ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__241__pmp_req_type = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6926829086646347952ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__241__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1410432976857582973ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__241__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 922430434846551275ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__241__result = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10990620440846156889ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__242__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9066608226079813467ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__242__pmp_cfg_lock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18043981462277045482ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__242__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 528634690852495375ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__242__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5411473912084485588ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__244__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12908925353587342648ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__244__region_csr_pmp_cfg = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 9819239063394425060ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__244__pmp_req_type = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17068010101640172448ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__244__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7994724846721366593ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__244__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17859639782699422474ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__244__result = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10271353505619716622ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__245__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13657732218011046252ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__245__pmp_cfg_lock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17852076956560548592ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__245__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4660776530217492176ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__245__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9424871387402683352ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__247__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10531871097806953184ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__247__region_csr_pmp_cfg = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 6895293851178404849ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__247__pmp_req_type = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7732028317446855463ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__247__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17532503250689748231ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__247__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7877741270891709136ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__247__result = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15586381308264742064ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__248__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10851962711217375388ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__248__pmp_cfg_lock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17154503204168833641ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__248__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2201809408431320361ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__248__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13297018635831021631ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__250__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15134612782568288430ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__250__region_csr_pmp_cfg = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 4156994513811869834ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__250__pmp_req_type = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2625889613027054320ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__250__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16287585358251480165ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__250__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2546116890198395195ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__250__result = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14448023400694191050ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__251__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9555526743946940050ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__251__pmp_cfg_lock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6192276594198443002ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__251__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 18289965453453693308ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__251__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7676272341469407165ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__253__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1082935869309811918ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__253__region_csr_pmp_cfg = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 13895368813867415957ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__253__pmp_req_type = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7680674942053987234ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__253__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9831527713499453325ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__253__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3119359086621145351ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__253__result = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8527814601408192166ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__254__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7099600148306760629ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__254__pmp_cfg_lock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12275714684222617330ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__254__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15307530244917258450ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__254__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5987902693255104569ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__256__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6046406378614236372ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__256__region_csr_pmp_cfg = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 4675545692677193095ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__256__pmp_req_type = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16068948984494775551ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__256__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 898670286418081293ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__256__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12757416508120920496ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__256__result = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3588021519267926234ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__257__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18275513256381219820ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__257__pmp_cfg_lock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5034837236489673396ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__257__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2870998982649702756ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__257__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6980642417857198755ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__259__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15873618770301162731ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__259__region_csr_pmp_cfg = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 4933495172819454373ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__259__pmp_req_type = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17148801748349022072ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__259__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8105546966447485341ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__259__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4848278831770377395ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__259__result = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9294680262259323774ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__260__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 555487840107819621ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__260__pmp_cfg_lock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8947676386556320616ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__260__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13334345754059603649ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__260__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5341473440128397607ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__262__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13749263508189715460ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__262__region_csr_pmp_cfg = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 15418682346565984214ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__262__pmp_req_type = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15139975545697870765ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__262__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1780943197325912724ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__262__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17242811963415571454ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__262__result = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4122753696248388292ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__263__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1426550167621333987ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__263__pmp_cfg_lock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 680517331912079194ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__263__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 18119706997975702703ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__263__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10669266108407429814ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__265__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 162794295168444097ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__265__region_csr_pmp_cfg = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 12455913978479099192ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__265__pmp_req_type = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 40028527282961487ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__265__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10878080769160989151ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__265__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 86944300650213114ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__265__result = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18018776657721385741ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__266__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13802072099692012090ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__266__pmp_cfg_lock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5468148808599458750ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__266__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10828688554690142279ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__266__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12825078036337001547ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__268__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15074417815999768672ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__268__region_csr_pmp_cfg = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 16340016889676924353ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__268__pmp_req_type = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5848598181507960018ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__268__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5039317383448496807ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__268__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11699228778268650062ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__268__result = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11569149572177084513ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__269__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7239642569941612359ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__269__pmp_cfg_lock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13327660858625028804ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__269__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12850539308849129621ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__269__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9498764559357835517ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__271__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9787154949942394970ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__271__region_csr_pmp_cfg = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 14314876475835302779ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__271__pmp_req_type = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12702515574465938677ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__271__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4274129355282451337ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__271__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14922100859101020380ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__271__result = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4282055170228685880ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__272__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7830622139972841612ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__272__pmp_cfg_lock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3771233439902367535ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__272__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10052628008972901273ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__272__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15296254044080043614ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__274__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14570970750099477308ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__274__region_csr_pmp_cfg = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 2733837856133802317ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__274__pmp_req_type = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1785455773367343583ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__274__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5591457144331608790ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__274__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17587995869994641196ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__274__result = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3350741989636113131ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__275__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17125141448415704224ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__275__pmp_cfg_lock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17161174949240906912ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__275__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14924766472568194762ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__275__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 472879518051342879ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8255080893358377742ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__csr_pmp_mseccfg_mmwp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3149761482130429256ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__csr_pmp_mseccfg_mml = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13849707667857485562ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__pmp_req_type = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2455269152696496703ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__match_all = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17007374332920406926ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6284289476835661077ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__final_perm_check = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17514073440406026782ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__access_fail = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 660182362328024380ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__276__matched = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17810259485331878616ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__278__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2178123379268270912ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__278__region_csr_pmp_cfg = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 3495519465289834621ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__278__pmp_req_type = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9378600748414374525ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__278__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17680157237236075627ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__278__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3931322043309195505ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__278__result = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12126101494370144685ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__279__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11094866719838662697ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__279__pmp_cfg_lock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6192524212017291256ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__279__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 18163546454803273732ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__279__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16565512664234018321ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__281__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15125771549040444552ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__281__region_csr_pmp_cfg = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 9321323528347174572ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__281__pmp_req_type = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10572430567676404992ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__281__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5011174087058673703ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__281__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17013171356202750408ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__281__result = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18445556715705365219ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__282__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7520619528175745190ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__282__pmp_cfg_lock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9378898642962078583ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__282__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2658147094736650639ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__282__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5355427814593073844ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__284__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6192409714563452324ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__284__region_csr_pmp_cfg = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 13797724276877617459ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__284__pmp_req_type = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6143779950040592476ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__284__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2692633768138367093ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__284__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18292772660480663038ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__284__result = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1544353547922533487ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__285__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12413618789162371378ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__285__pmp_cfg_lock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7581824601962035680ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__285__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7564205574386955896ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__285__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18398604213703676019ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__287__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10153897427620355383ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__287__region_csr_pmp_cfg = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 12893339207043445764ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__287__pmp_req_type = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15799911597394004999ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__287__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10197377660224624978ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__287__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4449645547785654768ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__287__result = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3097871200216530044ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__288__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 547158916742367387ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__288__pmp_cfg_lock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9341024740298091500ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__288__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12564482355627869232ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__288__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14040465204768580150ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__290__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12323718847540015003ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__290__region_csr_pmp_cfg = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 17355662993944325055ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__290__pmp_req_type = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3991112505309516892ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__290__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 275690927906632225ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__290__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6217823259193563350ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__290__result = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9850002140312984837ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__291__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11972073262206088865ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__291__pmp_cfg_lock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4852240500757008347ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__291__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7860909795508712070ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__291__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11648122755475980858ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__293__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16864392930350911252ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__293__region_csr_pmp_cfg = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 2129196199439145713ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__293__pmp_req_type = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16436882098703228727ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__293__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15966694237167684489ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__293__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5144818097144756324ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__293__result = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8500084550839912952ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__294__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9474293864642092783ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__294__pmp_cfg_lock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3650730745251532310ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__294__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3066144039281810655ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__294__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15488818302475357960ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__296__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7187589389647285186ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__296__region_csr_pmp_cfg = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 15794053629996098602ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__296__pmp_req_type = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 18025653054687239141ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__296__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3706932062984125011ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__296__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14562117838885167728ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__296__result = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2910699017273265087ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__297__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6571517771931392889ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__297__pmp_cfg_lock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6311411131081083898ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__297__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11335537658719052955ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__297__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10948289839534537809ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__299__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16070854842942017281ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__299__region_csr_pmp_cfg = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 1723664471945772698ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__299__pmp_req_type = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9377837104797944252ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__299__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 96388926869080583ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__299__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7088730004702039151ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__299__result = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1605495038663620381ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__300__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11416074083327009127ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__300__pmp_cfg_lock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17310629372215172451ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__300__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12951070378929275863ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__300__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1527420253550447036ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__302__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6064536322485407272ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__302__region_csr_pmp_cfg = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 17503195673443967109ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__302__pmp_req_type = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3778711134073430351ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__302__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12549789631888831083ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__302__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10917504028331371865ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__302__result = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4839774641584945983ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__303__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8264352959346067806ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__303__pmp_cfg_lock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8586046089577804933ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__303__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13632167303564924813ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__303__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8692229515358620724ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__305__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11596882907241786670ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__305__region_csr_pmp_cfg = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 16212884417240869390ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__305__pmp_req_type = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8528771150558607012ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__305__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13259724552112463975ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__305__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12303304382318865319ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__305__result = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7804244394428144983ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__306__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2913777784604683729ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__306__pmp_cfg_lock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2415766714337123696ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__306__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 18153261739795942641ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__306__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 166261927332042719ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__308__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 890180087322289718ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__308__region_csr_pmp_cfg = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 3380826048776598810ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__308__pmp_req_type = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1828286198981356271ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__308__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10555552821358583421ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__308__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9912079264511771801ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__308__result = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4691365918499296607ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__309__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5467767577727332688ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__309__pmp_cfg_lock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3270536749493281437ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__309__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17960214333943020076ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__309__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17590708524916892228ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__311__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8453230608491011777ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__311__region_csr_pmp_cfg = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 15632913928495315899ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__311__pmp_req_type = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12072864592689142596ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__311__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3366312088514803508ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__311__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14542275551544660624ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__311__result = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10032951142680628680ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__312__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14848438411019740071ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__312__pmp_cfg_lock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18257592331766167619ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__312__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10379726582984454272ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__312__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11013491674177174546ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__314__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13075742408065668606ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__314__region_csr_pmp_cfg = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 12825466926783553424ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__314__pmp_req_type = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16998498349982367474ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__314__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13523789692667934698ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__314__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14461451564939050306ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__314__result = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17121916718434060180ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__315__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7175628883361536203ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__315__pmp_cfg_lock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5109556634241013311ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__315__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17367804557809034471ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__315__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4127204438625357545ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__317__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17569412514222223432ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__317__region_csr_pmp_cfg = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 2019714110926142622ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__317__pmp_req_type = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10078078228637596658ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__317__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7497867221565173904ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__317__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11920801376393964265ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__317__result = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6658391973583030967ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__318__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3091286409218780016ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__318__pmp_cfg_lock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5959215385103409952ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__318__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3465990175702395648ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__318__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11697617328699949981ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__320__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9289982949303754293ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__320__region_csr_pmp_cfg = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 10775633144590400790ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__320__pmp_req_type = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7566883261353829603ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__320__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16555585340866096659ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__320__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18017880696619886391ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__320__result = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9467671756533018733ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__321__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8708865677140734904ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__321__pmp_cfg_lock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15053067514827492834ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__321__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11089222015852651376ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__321__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7952594739489032831ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__323__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 177508166826284708ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__323__region_csr_pmp_cfg = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 13273399994555245012ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__323__pmp_req_type = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14829836796062982854ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__323__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10404452874575562577ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__323__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11229859542381670998ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__mml_perm_check__323__result = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16761770187516093509ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__324__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17862736533474706660ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__324__pmp_cfg_lock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4248195749434533955ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__324__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7985348354638305765ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__orig_perm_check__324__permission_check = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4029384363364198355ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14456433222980350670ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__csr_pmp_mseccfg_mmwp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 255471824472006867ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__csr_pmp_mseccfg_mml = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12539802254440980177ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__pmp_req_type = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14184109872015205310ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__match_all = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5343695478819321123ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__priv_mode = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4673327335085757333ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__final_perm_check = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13404918160488783681ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__access_fail = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8250626298641494991ull);
    vlSelf->__Vfunc_g_pmp__DOT__pmp_i__DOT__access_fault_check__325__matched = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15761530371190721191ull);
    VL_SCOPED_RAND_RESET_W(169, vlSelf->__VdfgRegularize_h6e95ff9d_0_314, __VscopeHash, 8395135746194675776ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_441 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8104901792913461424ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_468 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16162712698206811156ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_473 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17875516688968157007ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_492 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5236752656863926889ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_493 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7835504800789134154ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_494 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10319722656169666352ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_497 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10739230095386824708ull);
    VL_SCOPED_RAND_RESET_W(190, vlSelf->__VdfgRegularize_h6e95ff9d_0_1178, __VscopeHash, 15163474872878523727ull);
    VL_SCOPED_RAND_RESET_W(320, vlSelf->__VdfgRegularize_h6e95ff9d_0_1179, __VscopeHash, 4738490100897235395ull);
    VL_SCOPED_RAND_RESET_W(398, vlSelf->__VdfgRegularize_h6e95ff9d_0_1180, __VscopeHash, 3444711347000111291ull);
    VL_SCOPED_RAND_RESET_W(455, vlSelf->__VdfgRegularize_h6e95ff9d_0_1181, __VscopeHash, 2694631927065011167ull);
    VL_SCOPED_RAND_RESET_W(495, vlSelf->__VdfgRegularize_h6e95ff9d_0_1182, __VscopeHash, 12730426903535939051ull);
    VL_SCOPED_RAND_RESET_W(571, vlSelf->__VdfgRegularize_h6e95ff9d_0_1183, __VscopeHash, 888114519993817582ull);
    VL_SCOPED_RAND_RESET_W(573, vlSelf->__VdfgRegularize_h6e95ff9d_0_1184, __VscopeHash, 8201174855287140220ull);
    VL_SCOPED_RAND_RESET_W(614, vlSelf->__VdfgRegularize_h6e95ff9d_0_1185, __VscopeHash, 11538501688905493518ull);
    VL_SCOPED_RAND_RESET_W(648, vlSelf->__VdfgRegularize_h6e95ff9d_0_1186, __VscopeHash, 16462538440999696900ull);
    VL_SCOPED_RAND_RESET_W(108, vlSelf->__VdfgRegularize_h6e95ff9d_0_1298, __VscopeHash, 1440952398950829141ull);
    VL_SCOPED_RAND_RESET_W(108, vlSelf->__VdfgRegularize_h6e95ff9d_0_1300, __VscopeHash, 2403196739428741554ull);
    VL_SCOPED_RAND_RESET_W(108, vlSelf->__VdfgRegularize_h6e95ff9d_0_1302, __VscopeHash, 11996896212197189298ull);
    VL_SCOPED_RAND_RESET_W(108, vlSelf->__VdfgRegularize_h6e95ff9d_0_1303, __VscopeHash, 14647222440706584212ull);
    VL_SCOPED_RAND_RESET_W(108, vlSelf->__VdfgRegularize_h6e95ff9d_0_1304, __VscopeHash, 17477797727688771935ull);
    VL_SCOPED_RAND_RESET_W(108, vlSelf->__VdfgRegularize_h6e95ff9d_0_1305, __VscopeHash, 2351311480290963043ull);
    VL_SCOPED_RAND_RESET_W(108, vlSelf->__VdfgRegularize_h6e95ff9d_0_1306, __VscopeHash, 590450568710298447ull);
    VL_SCOPED_RAND_RESET_W(108, vlSelf->__VdfgRegularize_h6e95ff9d_0_1309, __VscopeHash, 9952377669788624030ull);
}
